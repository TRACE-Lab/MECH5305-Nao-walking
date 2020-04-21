function [torso_desired,dtorso_desired,ddtorso_desired]=desired_hip_trajectory_varying_speed(t,t_end_of_previous_step)
    global t_global 
        

    t_global=[t_global;t+t_end_of_previous_step];

    %a=0.2*sin(pi/8);
    a=0.03;
    b=-0.01;
    %b=0;
    omega = 2;
    c=a/3;
    x_torso_desired = b+a*t_global(end)+c*sin(omega*t_global(end));
    y_torso_desired = 0;
    
    
    torso_desired=[x_torso_desired y_torso_desired];


    dx_torso_desired=a+c*omega*cos(omega*t_global(end));
    dy_torso_desired=0;
    dtorso_desired=[dx_torso_desired dy_torso_desired];
    
    ddx_torso_desired=-c*omega^2*sin(omega*t_global(end));
    ddy_torso_desired=0;
    ddtorso_desired=[ddx_torso_desired ddy_torso_desired];
end