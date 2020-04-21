function [Cost,Cnst] = opt_Obj_Cnst_V3_5




Cost = @obj;
Cnst = @constr;

%% cost function
    function J = obj(Alpha)
        
        
        J = 0;
        
    end

%% constraints
    function [c,ceq] = constr(Alpha)
        %% calculate the correspoinding q and dq during a step
        %options = optimoptions('lsqnonlin','Algorithm','levenberg-marquardt',...
        %                        'Display','final','MaxFunEvals',1e10, ...
        %                        'TolFun',1e-10);
        options = optimoptions('fsolve','Algorithm','trust-region-dogleg','Display','off','MaxFunEvals',1e10, ...
            'TolFun',1e-8); 
        
        [q_error,dq_error,COP,q_sol_whole_step,Fr,dq_sol_whole_step,~]...
            =opt_inverse_solve_floating_base_equ(options,Alpha);
        COP_x = COP(:,1);
        COP_y = COP(:,2)
        error = [q_error;dq_error];  
        
        fprintf('\n')
        %fprintf('error of lsqnonlin solver is %f \n',max(abs(error)));
        %% The joint has to be within its range
            %leg_lb = [-1.15; -0.38; -1.77; 0.00; -1.19; -0.40; -1.15; -0.74; -1.77; 0.00; -1.19; -0.77];
            %leg_ub = [ 0.74;  0.79;  0.48; 2.11;  0.92;  0.77;  0.74;  0.45;  0.48; 2.11;  0.93;  0.4];
            %lb=[-5;-1; 0; -pi/2; -pi/2; -pi/2; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; -1; leg_lb];
            %ub=[5; 1; 0.5; pi/2;  pi/2;  pi/2;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1;  1; leg_ub];
        
        C1_c0_1u = q_sol_whole_step(:,19)-0.74;
        C1_c0_2u = q_sol_whole_step(:,20)-0.79;
        C1_c0_3u = q_sol_whole_step(:,21)-0.48;
        C1_c0_4u = q_sol_whole_step(:,22)-2.11;
        C1_c0_5u = q_sol_whole_step(:,23)-0.92;
        C1_c0_6u = q_sol_whole_step(:,24)-0.77;
        C1_c0_7u = q_sol_whole_step(:,25)-0.74;
        C1_c0_8u = q_sol_whole_step(:,26)-0.45;
        C1_c0_9u = q_sol_whole_step(:,27)-0.48;
        C1_c0_10u = q_sol_whole_step(:,28)-2.11;
        C1_c0_11u = q_sol_whole_step(:,29)-0.93;
        C1_c0_12u = q_sol_whole_step(:,30)-0.4;
        C1_c0_c_upper = [C1_c0_1u;C1_c0_2u;C1_c0_3u;C1_c0_4u;C1_c0_5u;C1_c0_6u;...
            C1_c0_7u;C1_c0_8u;C1_c0_9u;C1_c0_10u;C1_c0_11u;C1_c0_12u];
        C1_c0_1l = -q_sol_whole_step(:,19)-1.15;
        C1_c0_2l = -q_sol_whole_step(:,20)-0.38;
        C1_c0_3l = -q_sol_whole_step(:,21)-1.77;
        C1_c0_4l = -q_sol_whole_step(:,22)-0;
        C1_c0_5l = -q_sol_whole_step(:,23)-1.19;
        C1_c0_6l = -q_sol_whole_step(:,24)-0.4;
        C1_c0_7l = -q_sol_whole_step(:,25)-1.15;
        C1_c0_8l = -q_sol_whole_step(:,26)-0.74;
        C1_c0_9l = -q_sol_whole_step(:,27)-1.77;
        C1_c0_10l = -q_sol_whole_step(:,28)-0;
        C1_c0_11l = -q_sol_whole_step(:,29)-1.19;
        C1_c0_12l = -q_sol_whole_step(:,30)-0.77;
        C1_c0_c_lower = [C1_c0_1l;C1_c0_2l;C1_c0_3l;C1_c0_4l;C1_c0_5l;C1_c0_6l;...
            C1_c0_7l;C1_c0_8l;C1_c0_9l;C1_c0_10l;C1_c0_11l;C1_c0_12l];

        C1_c0 = [C1_c0_c_upper;C1_c0_c_lower];
        
        
        swing_hight_lb = 0.00;
        C1_c1 = [-Alpha(37)+swing_hight_lb;-Alpha(38);...
            -Alpha(39);-Alpha(40);-Alpha(41)+swing_hight_lb];     %swing foot should be above the ground
        %C1_c1 = -phi_overall(2:4,8);
        
        swing_hight_ub = 0.06;
        C1_c8 = [Alpha(37)-swing_hight_ub;Alpha(38)-swing_hight_ub;...
            Alpha(39)-swing_hight_ub;Alpha(40)-swing_hight_ub;Alpha(41)-swing_hight_ub];
        torso_lb = 0.24;
        torso_ub = 0.32;
        C1_c2=[-Alpha(1)+torso_lb;-Alpha(2)+torso_lb;-Alpha(3)+torso_lb;...
            -Alpha(4)+torso_lb;-Alpha(5)+torso_lb;...
            -Alpha(6)+torso_lb;-Alpha(7)+torso_lb]; %torso should be not too low
        C1_c3=[Alpha(1)-torso_ub;Alpha(2)-torso_ub;Alpha(3)-torso_ub;...
             Alpha(4)-torso_ub;Alpha(5)-torso_ub;...
             Alpha(6)-torso_ub;Alpha(7)-torso_ub]; %torso should be not too high
        

        C1_c5_1 = Alpha(28)-0.14;    %step length is not too large
        C1_c5_2 = -Alpha(28)+0.03;
        C1_c5_3_1 = -Alpha(28)+max(Alpha(23:27));
        C1_c5_3_2 = -Alpha(27)+max(Alpha(23:26));
        C1_c5_3_3 = -Alpha(26)+max(Alpha(23:25));
        C1_c5_3 = [C1_c5_3_1; C1_c5_3_2; C1_c5_3_3];
        
        C1_c5_4 = Alpha(22)-min(Alpha(23:27));
        C1_c5 = [C1_c5_1;C1_c5_2;C1_c5_3/1000;C1_c5_4/100];

        COP_x_ub = 0.06;
        COP_x_lb = -0.04;
        C1_c6_1 = COP_x-COP_x_ub;
        
        C1_c6_2 = -COP_x+COP_x_lb;
        C1_c6 = [C1_c6_1;C1_c6_2];  % range of COP_x
        
        COP_y_ub =  0.03;
        COP_y_lb = -0.025;
        %C1_c7_1 = [  COP_y(1)-COP_x_ub;  COP_y(2)-0.015;  COP_y(3)-0.015;  COP_y(4)-0.015;  COP_y(5)-0.015];
        %C1_c7_2 = [ -COP_y(1)-0.015; -COP_y(2)-0.015; -COP_y(3)-0.015; -COP_y(4)-0.015; -COP_y(5)-0.015];
        C1_c7_1 = COP_y - COP_y_ub;
        C1_c7_2 = -COP_y + COP_y_lb;
        C1_c7 = [C1_c7_1;C1_c7_2];   % range of COP_y
          
        C1_c11= -Fr(3);          % unilateral constraint
        C1_c12_1 = abs(Alpha(15:21)')-0.3 ;
        %C1_c12_2 = -Alpha(15)'-0 ;
        %C1_c12_3 = [-Alpha(16);-Alpha(17);-Alpha(18);-Alpha(19);-Alpha(20)];
        C1_c12 = [C1_c12_1];      % torso' pitch angle should not be too wild
        
        C1_c13_1 = (Alpha(8:14)')-0.2;         %torso roll angle should not be too large
        C1_c13_2 = -Alpha(8:14)';
        C1_c13=[C1_c13_1;C1_c13_2];
        C1_c=[C1_c0;C1_c1;C1_c2;C1_c3;C1_c5;C1_c6;C1_c7;C1_c8; C1_c11;C1_c12;C1_c13];

        C1_ceq2=100*error; % the walking pattern has valid solution
        C1_ceq3 = Alpha(43:63)';  %swing foot angle constraint
        C1_ceq4_1 = Alpha(22)+Alpha(28); %gait swing foot symetric

        C1_ceq4 = C1_ceq4_1;
        C1_ceq5 = [Alpha(8);Alpha(14)]; % gait torso roll angle symetric
        %C1_ceq=[C1_ceq1;C1_ceq2;C1_ceq3;C1_ceq4;C1_ceq5];
        C1_ceq=[C1_ceq2;C1_ceq3;C1_ceq4;C1_ceq5];
        fprintf('swing foot hight lb constraint %f \n',max(C1_c1))
        fprintf('swing foot hight ub constraint %f \n',max(C1_c8))
        fprintf('torso hight constraint lb %f \n',max(C1_c2))
        fprintf('torso hight constraint ub %f \n',max(C1_c3))
        fprintf('step length constraint ub %f \n',max(C1_c5))
        fprintf('torso pitch angle %f \n',max(C1_c12))
        fprintf('torso roll angle %f \n',max(C1_c13))
        fprintf('COP_x %f \n',max(C1_c6))
        fprintf('COP_y %f \n',max(C1_c7))
        
        %fprintf('constraint for y direction of the swing foot max %f \n',max(C1_c10))
        fprintf('unilateral constraint %f \n',max(C1_c11))
        %fprintf('some other physical constraint %f \n',(C1_c));
        %fprintf('constraint for y direction of the swing foot %f \n',max(C1_ceq1))
        fprintf('error of fsolve solver is %f \n',max(C1_ceq2))
        fprintf('swing foot angle constraint %f \n',max(C1_ceq3))
        fprintf('gait swing foot symetric %f \n',max(C1_ceq4))
        fprintf('gait torso roll angle symetric %f \n',max(C1_ceq5))
       
        %% C2: hybrid invariance 
        % y invariance
        gain = 100;
        y_ceq1=gain*(Alpha(1)-Alpha(7));
        y_ceq2=gain*(Alpha(8)-Alpha(14));
        y_ceq3=gain*(Alpha(15)-Alpha(21));
        y_ceq4=gain*(Alpha(22)+Alpha(28));
        %y_ceq5=gain*(Alpha(29)-Alpha(35));
        y_ceq6=gain*(Alpha(36));
        
        C2_ceq1=[y_ceq1;y_ceq2;y_ceq3;y_ceq4;y_ceq6];
        
        fprintf('y invariance=%f; \n',max(abs(C2_ceq1)))
        % ydot invariance
        
        %options1 = optimoptions('fsolve','Display','final','MaxFunEvals',1e6, ...
        %                        'TolFun',1e-4);
        q_sol_minus = q_sol_whole_step(end,:);
        dq_sol_minus = dq_sol_whole_step(end,:);
        x_minus = [q_sol_minus,dq_sol_minus];
        dq_plus=resetmap(x_minus,-1);
        q_plus = q_sol_minus;
        hc_j=j_hc_opt_func(q_plus);
        
        ds_dtheta=Alpha(28)-Alpha(22);
        dtheta=dq_sol_whole_step(end,1);
        dhc = hc_j*dq_plus;
        
        y_dot_plus= dhc-[0;0;2/ds_dtheta*[Alpha(2)-Alpha(1);...
                                           -Alpha(9)+Alpha(8);...
                                           Alpha(16)-Alpha(15);...
                                           zeros(6,1);...
                                           Alpha(23)-Alpha(22);...
                                           -Alpha(30)+Alpha(29);...
                                           Alpha(37)-Alpha(36);...
                                           Alpha(44)-Alpha(43);...
                                           Alpha(51)-Alpha(50);...
                                           Alpha(58)-Alpha(57)]*6*dtheta;...
                                           zeros(13,1)];
        
        %{
        y_dot_plus=[dhc(1:14);dhc(18:30)]...
            -[0.1*sin(pi/8);0;2/ds_dtheta*[Alpha(2)-Alpha(1);...
                                           Alpha(9)-Alpha(8);...
                                           Alpha(16)-Alpha(15);...
                                           zeros(6,1);...
                                           Alpha(23)-Alpha(22);...
                                           Alpha(30)-Alpha(29);...
                                           Alpha(37)-Alpha(36);]*dtheta;...
                                           zeros(13,1)];
        %}
  
        y_dot_plus_reduced = [y_dot_plus(3:5);y_dot_plus(12:17)];
        C2_ceq2=y_dot_plus_reduced;
        y_dot_plus_reduced'
        C2_ceq=[C2_ceq1;C2_ceq2];
        
        fprintf('dy invariance=%f; \n',max(abs(C2_ceq2)))
        %fprintf('dy invariance part 2=%f; \n',max(abs(C2_ceq3)))
        %%
        %c = [C1_c;C2_c;C3_c;C4_c];
        %ceq = [C0_ceq;C1_ceq;C2_ceq;C3_ceq;C4_ceq];
        c=C1_c;
        
        ceq=[C1_ceq;C2_ceq];
        
        
        %fprintf('max(c) = %f; \n max(abs(ceq))=%f; \n',max(c),max(abs(ceq)));
        %fprintf('max(c) = %f; \n',max(c));
    end

end