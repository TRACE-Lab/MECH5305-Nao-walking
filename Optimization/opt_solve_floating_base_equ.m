Alpha_right_stance_foot = Alpha(1,:);
%Alpha_right_stance_foot = Alpha_right_stance_foot + 0.2
options = optimoptions('lsqnonlin','Algorithm','trust-region-reflective',...
                                'Display','off','MaxFunEvals',1e6, ...
                                'TolFun',1e-10);
q0=zeros(30,1);
dq0 = x(302,31:60)';
leg_lb = [-1.15; -0.38; -1.77; 0.00; -1.19; -0.40; -1.15; -0.74; -1.77; 0.00; -1.19; -0.77];
leg_ub = [ 0.74;  0.79;  0.48; 2.11;  0.92;  0.77;  0.74;  0.45;  0.48; 2.11;  0.93;  0.4];
lb=[-5;-1; 0; -pi/2; -pi/2; -pi/2; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; leg_lb];
ub=[5; 1; 0.5; pi/2;  pi/2;  pi/2;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1; leg_ub];
dq_lb = -30 *ones(30,1);
dq_ub = 30 *ones(30,1);
q_error = zeros(5,1);
dq_error = zeros(5,1);
i=1;
for s=0:0.2:1

    theta = (s*(Alpha_right_stance_foot(28)...
        -Alpha_right_stance_foot(22))+Alpha_right_stance_foot(22))/2;
    stance_foot_pose=[0;-0.05;0;0;0;0];
    

    q1 = theta+stance_foot_pose(1);
    
    
    [ph,dph,ddph]=Nao_new_Bezier_6th(Alpha_right_stance_foot,s);
    
    
    phi = [q1;0;ph;stance_foot_pose;zeros(13,1)];
    
    [q_sol,q_fval]=lsqnonlin(@(q) opt_floating_base_hc(q,phi),q0,lb,ub,options);
    q_error(i)=q_fval;
    %% below is used to calculate the velocity of the robot in joint space
    dtheta = 0.6*sin(pi/8);
    ds_dtheta=(Alpha_right_stance_foot(28)-Alpha_right_stance_foot(22));
    stance_foot_velocity = zeros(6,1);
    %dphi = [0.6*sin(pi/8); 0; dph; stance_foot_velocity; zeros(13,1)];
    dphi = [0.6*sin(pi/8); 0; 2/ds_dtheta*dph*dtheta; stance_foot_velocity; zeros(13,1)];
    
    [dq_sol,dq_fval]=lsqnonlin(@(dq) opt_floating_base_dhc(dq,q_sol,dphi),dq0,dq_lb,dq_ub,options);
    
    %% calculate COP
    %hc = H_right_foot_stance_func(q_sol)-[zeros(5,1);stance_foot_pose(1);0;zeros(4,1);zeros(12,1)];
        %hc = H_right_foot_stance_func(q)-[zeros(5,1);q(1);0;zeros(4,1);zeros(12,1)];
    %hc_j = j_H_right_foot_stance_func(q_sol);
    %hc_jj = jj_H_right_foot_stance_func(q_sol,dq_sol);
    COP1 = opt_dynamics(s,q_sol,dq_sol,Alpha_right_stance_foot)
    %% update loop
    i=i+1;
    %q_fval+dq_fval
end
