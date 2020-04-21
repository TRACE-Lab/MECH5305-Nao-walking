function u=opt_feedback_linearization(s,x,D,c_overall,B_overall,Alpha,desired_y_tra)
    q=x(1:30);
    dq=x(31:60);
    

        
    %hc = H_right_foot_stance_func(q)-[zeros(5,1);current_stance_foot_position(1);0;zeros(4,1);zeros(12,1)];
    %hc = H_right_foot_stance_func(q)-[zeros(5,1);q(1);0;zeros(4,1);zeros(12,1)];
    hc_j = j_H_right_foot_stance_func(q);
    hc_jj = jj_H_right_foot_stance_func(q,dq);
    Alpha1=Alpha(1,:);




    


    dtheta = dq(1);

    
    %chosse swing foot to normalize theta
    % 9 curves in total
    ds_dtheta=(Alpha1(28)-Alpha1(22));


    
    [ph,dph,ddph]=Nao_new_Bezier_6th(Alpha1,s);
   


    
    %[torso_desired,dtorso_desired,ddtorso_desired]=desired_hip_trajectory(s,t_end_of_previous_step);

    

    %phi=[torso_desired(1);torso_desired(2);ph;zeros(12,1)];




    %dphi=[dtorso_desired(1);dtorso_desired(2);...
    %    2/ds_dtheta*dph*dtheta;
    %    zeros(12,1)];

    %pphipq = [0;desired_y_tra(2);dph;zeros(12,1)]*[2/ds_dtheta,zeros(1,29)];
    pphipq = [[0;desired_y_tra(2)*2/ds_dtheta;dph*2/ds_dtheta;zeros(12,1)],zeros(23,29)];
    ddphi=[0;2/ds_dtheta*(desired_y_tra(3)*2/ds_dtheta*dtheta^2);...
        2/ds_dtheta*(ddph*2/ds_dtheta*dtheta^2);
        zeros(12,1)];

    %{
    ddphi1=[0;ddtorso_desired(2);...
       2/ds_dtheta*(ddph*2/ds_dtheta*dtheta^2);
       zeros(12,1)];

    norm(ddphi-ddphi1)
    %}


    %y=hc-phi;
    %y_dot=hc_j*dq-dphi;

    
 

    %Kp=500^2*eye(23,23);
    %Kd=1000*eye(23,23);
    %v=-Kp*y-Kd*y_dot;
    v=zeros(23,1);
    

    u=((hc_j-pphipq)/(D)*B_overall)\(v+(hc_j-pphipq)/(D)*c_overall-hc_jj+ddphi);
end