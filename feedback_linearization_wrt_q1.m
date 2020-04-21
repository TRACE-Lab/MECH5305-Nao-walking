function [u,s]=feedback_linearization_wrt_q1(t,x,D,c_overall,B_overall,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position)
    
    global y_global dy_global  dphi_global global_position_reference

    want_bezier=1;


    q=x(1:30);
    dq=x(31:60);
    
    if foot_index == -1
        
        hc = H_right_foot_stance_wrt_q1_func(q);
        %hc = H_right_foot_stance_func(q)-[zeros(5,1);q(1);0;zeros(4,1);zeros(12,1)];
        hc_j = j_H_right_foot_stance_wrt_q1_func(q);
        hc_jj = jj_H_right_foot_stance_wrt_q1_func(q,dq);
        Alpha1=Alpha(1,:);
    elseif foot_index == 1
        hc = H_left_foot_stance_wrt_q1_func(q);
        %hc = H_left_foot_stance_func(q)-[zeros(5,1);q(1);0;zeros(4,1);zeros(12,1)];
        hc_j = j_H_left_foot_stance_wrt_q1_func(q);
        hc_jj = jj_H_left_foot_stance_wrt_q1_func(q,dq);
        Alpha1=Alpha(2,:);
    end


    
    theta=q(1)-current_stance_foot_position(1);
    %theta = q(1);
    dtheta = dq(1);

    
    %chosse swing foot to normalize theta
    % 9 curves in total
    ds_dtheta=(Alpha1(28)-Alpha1(22));

    s=(theta-Alpha1(22))/ds_dtheta;
    
    [ph,dph,ddph]=Nao_new_Bezier_6th(Alpha1,s);
   
    %a=H_left_foot_stance_func(q);
    %actual = a(6)-current_stance_foot_position(1);
    %reference = ph(4);
    
    %[torso_desired,dtorso_desired,ddtorso_desired]=desired_hip_trajectory(t,t_end_of_previous_step);
    [torso_desired,dtorso_desired,ddtorso_desired]=desired_hip_trajectory_varying_speed(t,t_end_of_previous_step);

    if want_bezier==0
        %phi=[-0.0671 -0.05 0.2633 9.8695e-04 0.0023 0 -0.0663 -0.1122 6.3058e-04 0.0055 -4.4551e-04 0.0034]';
        %phi=[0.0383 -0.5 0.2632 9.9123e-04 0.0024 0 -0.0664 -0.1122 6.3177e-04 0.0055 -4.43e-04 0.0034]';
        phi=zeros(23,1);
        phi(1)=0.02;
        phi(8)=-0.22;
        phi(7)=0.05;
        phi(6)=0.05;
        %phi=[0.1378 -0.0538 0.2785 -0.0035 0.0049 0.1278 -0.1038 0.0027 0.0032 0.0028 0.0025]';
        %phi=[0 0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5]';
        %phi=[0 0 0 0 0 0 0 0 0.03 -0.08 0.03]';
        %phi=[0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5 pi/9]';
        dphi=zeros(23,1);
        pphipq = zeros(23,30);
        ddphi=zeros(23,1);
    elseif want_bezier==1
        phi=[torso_desired(1);torso_desired(2);ph;zeros(12,1)];
        



        dphi=[dtorso_desired(1);dtorso_desired(2);...
            1/ds_dtheta*dph*dtheta;
            zeros(12,1)];

        pphipq = [0;0;dph;zeros(12,1)]*[1/ds_dtheta,zeros(1,29)];
        ddphi=[ddtorso_desired(1);ddtorso_desired(2);...
            1/ds_dtheta*(ddph*1/ds_dtheta*dtheta^2);
            zeros(12,1)];
        %dphi=zeros(12,1);
        %ddphi=zeros(12,1);
    else
        printf('hahahaha')
    end
    
    
    


    y=hc-phi;
    y_dot=hc_j*dq-dphi;
    %hc_j*dq
    


    %s_overall=[s_overall;s];
    
 

    Kp=50^2*eye(23,23);
    Kd=100*eye(23,23);
    v=-Kp*y-Kd*y_dot;
    %norm(v)
    %hc_j

    %u=(hc_j/(D)*B_coupled)\(v+hc_j/(D)*C_coupled-hc_jj+ddphi);
    u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);

    y_global=[y_global;y'];
    dy_global=[dy_global;y_dot'];
    dphi_global = [dphi_global;[dphi',s,foot_index,x']];
    global_position_reference=[global_position_reference;[torso_desired(1) torso_desired(2)]];
end