function [q_error,dq_error,COP_,q_sol_whole_step,Fr,dq_sol_whole_step,phi_overall]=opt_inverse_solve_floating_base_equ(options,Alpha_right_stance_foot)
    %q0=[0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;-0.5;1;-0.6;0;0;0;-0.7;1;];
    q0=[0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;0;-0.76;1;-0.318;0;0;0;-0.5;1;-0.61;0];
    %dq0 = x(302,31:60)';
    %dq0 = zeros(30,1);
    
    dq0=rand(30,1);
    %{
    leg_lb = [-1.15; -0.38; -1.77; 0.00; -1.19; -0.40; -1.15; -0.74; -1.77; 0.00; -1.19; -0.77];
    leg_ub = [ 0.74;  0.79;  0.48; 2.11;  0.92;  0.77;  0.74;  0.45;  0.48; 2.11;  0.93;  0.4];
    lb=[-5;-1; 0; -pi/2; -pi/2; -pi/2; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; leg_lb];
    ub=[5; 1; 0.5; pi/2;  pi/2;  pi/2;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1; leg_ub];
    dq_lb = -30 *ones(30,1);
    dq_ub = 30 *ones(30,1);
    %}
    q_fval_overall=zeros(11,9);
    dq_fval_overall=zeros(11,9);
    q_error = zeros(11,1);
    dq_error = zeros(11,1);
    phi_overall=zeros(11,9);
    Fr = zeros(11,6);
    q_sol_whole_step = zeros(11,9);
    dq_sol_whole_step = zeros(11,9);
    i=1;
    COP_ = zeros(11,3);
    amplitude = 0.02;
    for s=0:0.1:1
        torso_desired_y = -amplitude*sin(pi*s);
        dtorso_desired_y = -amplitude*pi*cos(pi*s);
        ddtorso_desired_y = amplitude*pi*pi*sin(pi*s);
        %{
        if and(s<0.25,s>-0.1)
            torso_desired = -amplitude*sin(2*pi*s);
            dtorso_desired = -amplitude*2*pi*cos(2*pi*s);
            ddtorso_desired = amplitude*4*pi*pi*sin(2*pi*s);
        elseif and(s<0.75,s>0.25)
            torso_desired = -amplitude;
            dtorso_desired = 0;
            ddtorso_desired = 0 ;
        elseif and(s<1.1,s>0.75)
       
            torso_desired = -amplitude*sin(2*pi*(1-s));
            dtorso_desired = amplitude*2*pi*cos(2*pi*(1-s));
            ddtorso_desired = -amplitude*4*pi*pi*sin(2*pi*(1-s));
        end
        %}
        theta = (s*(Alpha_right_stance_foot(28)...
            -Alpha_right_stance_foot(22))+Alpha_right_stance_foot(22))/2;
        stance_foot_pose=[0;-0.05;0;0;0;0];

        desired_y_tra=[torso_desired_y;dtorso_desired_y;ddtorso_desired_y];
        q1 = theta+stance_foot_pose(1);


        %[ph,dph,~]=Bezier_6th(Alpha_right_stance_foot,s);
        [ph,dph,~]=Nao_new_Bezier_6th(Alpha_right_stance_foot,s);

        phi = [q1;torso_desired_y;ph;stance_foot_pose;zeros(2,1);1.3;0;0;0;0;1.3;zeros(5,1)];
        phi_overall(i,:) = phi';
        %[q_sol,q_fval]=lsqnonlin(@(q) opt_floating_base_hc(q,phi),q0,lb,ub,options);
        tic
        [q_sol,q_fval]=fsolve(@(q) opt_floating_base_hc(q,phi),q0,options);
        toc
        q_fval_overall(i,:)=q_fval';
        q_fval = norm(q_fval);
        q_error(i)=q_fval;
        q0=q_sol;
        %% below is used to calculate the velocity of the robot in joint space
        
        dtheta = 0.1*sin(pi/8);
        ds_dtheta=(Alpha_right_stance_foot(28)-Alpha_right_stance_foot(22));
        stance_foot_velocity = zeros(6,1);
        %dphi = [0.6*sin(pi/8); 0; dph; stance_foot_velocity; zeros(13,1)];
        dphi = [0.1*sin(pi/8); 2/ds_dtheta*dtorso_desired_y*dtheta; 2/ds_dtheta*dph*dtheta; stance_foot_velocity; zeros(13,1)];

        %[dq_sol,dq_fval]=lsqnonlin(@(dq) opt_floating_base_dhc(dq,q_sol,dphi),dq0,dq_lb,dq_ub,options);
        [dq_sol,dq_fval]=fsolve(@(dq) opt_floating_base_dhc(dq,q_sol,dphi),dq0,options);
        hc_j = j_hc_opt_func(q_sol);
        dq_sol=hc_j\dphi;
        %norm(dq_sol-dq_sol_li)
        dq_fval_overall(i,:)=dq_fval';
        dq_fval = norm(dq_fval);
        dq_error(i)=dq_fval;
        q_sol_whole_step(i,:)=q_sol;
        dq_sol_whole_step(i,:)=dq_sol;
        %dq0 = dq_sol;
        
        %% calculate COP

        [COP1,Fr1] = opt_dynamics(s,q_sol,dq_sol,Alpha_right_stance_foot,desired_y_tra);
        Fr(i,:)= Fr1';
        COP_(i,:) = COP1;
        debug
        %% update the loop
        i=i+1;
        
    end
    %error = norm(q_error)+norm(dq_error);
end