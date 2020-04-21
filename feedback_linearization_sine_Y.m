function [u,s,u_v0]=feedback_linearization_sine_Y(t,x,D,c_overall,B_overall,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position)
    
    global y_global dy_global  dphi_global global_position_reference phi_global hc_global

    want_bezier=1;


    q=x(1:30);
    dq=x(31:60);
    
    if foot_index == -1
        swing_foot_pose = Lfoot_pose_func(q);
        hc = H_right_foot_stance_func(q)-[zeros(5,1);current_stance_foot_position(1);0;zeros(4,1);zeros(12,1)];
        %hc = H_right_foot_stance_func(q)-[zeros(5,1);q(1);0;zeros(4,1);zeros(12,1)];
        hc_j = j_H_right_foot_stance_func(q);
        hc_jj = jj_H_right_foot_stance_func(q,dq);
        Alpha1=Alpha(1,:);
    elseif foot_index == 1
        swing_foot_pose = Rfoot_pose_func(q);
        hc = H_left_foot_stance_func(q)-[zeros(5,1);current_stance_foot_position(1);0;zeros(4,1);zeros(12,1)];
        %hc = H_left_foot_stance_func(q)-[zeros(5,1);q(1);0;zeros(4,1);zeros(12,1)];
        hc_j = j_H_left_foot_stance_func(q);
        hc_jj = jj_H_left_foot_stance_func(q,dq);
        Alpha1=Alpha(2,:);
    end


    
    theta=q(1)-current_stance_foot_position(1);
    %theta = q(1);
    dtheta = dq(1);

    
    %chosse swing foot to normalize theta
    % 9 curves in total
    ds_dtheta=(Alpha1(28)-Alpha1(22));

    s=(2*theta-Alpha1(22))/ds_dtheta;
    
    [ph,dph,ddph]=Nao_new_Bezier_6th(Alpha1,s);
    height = swing_foot_pose(3)
    %s
    %t
    %current_stance_foot_position
    %a=H_left_foot_stance_func(q);
    %actual = a(6)-current_stance_foot_position(1);
    %reference = ph(4);
    amplitude = 0.06;
    [torso_desired,dtorso_desired,ddtorso_desired]=desired_hip_trajectory(t,t_end_of_previous_step);
    if foot_index == -1
        
        torso_desired(2) = -amplitude*sin(pi*s);
        dtorso_desired(2) = -amplitude*pi*cos(pi*s);
        ddtorso_desired(2) = amplitude*pi*pi*sin(pi*s);
        %{
        if and(s<0.25,s>-0.1)
            torso_desired(2) = -amplitude*sin(2*pi*s);
            dtorso_desired(2) = -amplitude*2*pi*cos(2*pi*s);
            ddtorso_desired(2) = amplitude*4*pi*pi*sin(2*pi*s);
        elseif and(s<0.75,s>0.25)
            torso_desired(2) = -amplitude;
            dtorso_desired(2) = 0;
            ddtorso_desired(2) = 0 ;
        elseif and(s<1.1,s>0.75)
            torso_desired(2) = -amplitude*sin(2*pi*(1-s));
            dtorso_desired(2) = amplitude*2*pi*cos(2*pi*(1-s));
            ddtorso_desired(2) = -amplitude*4*pi*pi*sin(2*pi*(1-s));
        end
        %}
        
        %{
        torso_desired(2) = -0.04*sin(2*pi*s);
        dtorso_desired(2) = -0.04*2*pi*cos(2*pi*s);
        ddtorso_desired(2) = 0.04*4*pi*pi*sin(2*pi*s);
        %}
    elseif foot_index == 1
        torso_desired(2) =amplitude*sin(pi*s);
        dtorso_desired(2) = amplitude*pi*cos(pi*s);
        ddtorso_desired(2) = -amplitude*pi*pi*sin(pi*s);        
        
        %{
        
        if and(s<0.25,s>-0.1)
            torso_desired(2) =amplitude*sin(2*pi*s);
            dtorso_desired(2) = amplitude*2*pi*cos(2*pi*s);
            ddtorso_desired(2) = -amplitude*4*pi*pi*sin(2*pi*s);
        elseif and(s<0.75,s>0.25)
            torso_desired(2) = amplitude;
            dtorso_desired(2) = 0;
            ddtorso_desired(2) = 0 ;
        elseif and(s<1.1,s>0.75)
            torso_desired(2) = amplitude*sin(2*pi*(1-s));
            dtorso_desired(2) = -amplitude*2*pi*cos(2*pi*(1-s));
            ddtorso_desired(2) = amplitude*4*pi*pi*sin(2*pi*(1-s));
        end
        %}
        %{
        torso_desired(2) =0.04*sin(2*pi*s);
        dtorso_desired(2) = 0.04*2*pi*cos(2*pi*s);
        ddtorso_desired(2) = -0.04*4*pi*pi*sin(2*pi*s);
        %}
    end
    if want_bezier==0
        %phi=[-0.0671 -0.05 0.2633 9.8695e-04 0.0023 0 -0.0663 -0.1122 6.3058e-04 0.0055 -4.4551e-04 0.0034]';
        %phi=[0.0383 -0.5 0.2632 9.9123e-04 0.0024 0 -0.0664 -0.1122 6.3177e-04 0.0055 -4.43e-04 0.0034]';
        phi=zeros(23,1);
        phi(1)=0.0;
        phi(2)=-0.04;
        phi(3)= 0.2606;
        phi(8)=0.03;
        phi(7)=0.04;
        phi(6)=0.0;
        %phi=[0.1378 -0.0538 0.2785 -0.0035 0.0049 0.1278 -0.1038 0.0027 0.0032 0.0028 0.0025]';
        %phi=[0 0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5]';
        %phi=[0 0 0 0 0 0 0 0 0.03 -0.08 0.03]';
        %phi=[0 0 0 0 0 0 0.03 -0.08 0.03 -pi/5 pi/9]';
        dphi=zeros(23,1);
        pphipq = zeros(23,30);
        ddphi=zeros(23,1);
    elseif want_bezier==1
        phi=[torso_desired(1);torso_desired(2);ph;zeros(12,1)];
        
        phi(14) = 1.3;
        phi(19) = 1.3;


        dphi=[dtorso_desired(1);2/ds_dtheta*dtorso_desired(2)*dtheta;...
            2/ds_dtheta*dph*dtheta;
            zeros(12,1)];

        %pphipq = [0;dtorso_desired(2);dph;zeros(12,1)]*[2/ds_dtheta,zeros(1,29)];
        
        pphipq = [[0;dtorso_desired(2)*2/ds_dtheta;dph*2/ds_dtheta;zeros(12,1)],zeros(23,29)];
        
        ddphi=[ddtorso_desired(1);2/ds_dtheta*(ddtorso_desired(2)*2/ds_dtheta*dtheta^2);...
            2/ds_dtheta*(ddph*2/ds_dtheta*dtheta^2);
            zeros(12,1)];
        %dphi=zeros(12,1);
        %ddphi=zeros(12,1);
    else
        printf('hahahaha')
    end
    
    
    
    global_position_reference=[global_position_reference;[torso_desired(1) torso_desired(2)]];

    y=hc-phi;
    y_dot=hc_j*dq-dphi;
    %hc_j*dq
    


    %s_overall=[s_overall;s];
    
 

    Kp=100^2*eye(23,23);
    Kd=200*eye(23,23);
    v=-Kp*y-Kd*y_dot;
    %norm(v)
    %hc_j

    %u=(hc_j/(D)*B_coupled)\(v+hc_j/(D)*C_coupled-hc_jj+ddphi);
    u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
    u_v0=((hc_j-pphipq)/(D)*B_overall)\(zeros(23,1)+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
    
    phi_global=[phi_global;phi'];
    hc_global = [hc_global;hc'];
    y_global=[y_global;y'];
    dy_global=[dy_global;y_dot'];
    dphi_global = [dphi_global;[dphi',s,foot_index,x']];
end