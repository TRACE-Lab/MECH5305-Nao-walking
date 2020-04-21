%% joint name map
% q(7) HeadYaw
% q(8) HeadPitch
% q(9) LShoulderPitch
% q(10) LShoulderRoll
% q(11) LElbowYaw
% q(12) LElbowRoll
% q(13) LWristYaw
% q(14) RShoulderPitch
% q(15) RShoulderRoll
% q(16) RElbowYaw
% q(17) RElbowRoll
% q(18) RWristYaw
% q(19) LHipYawPitch
% q(20) LHiproll
% q(21) LHipPitch
% q(22) LKneePitch
% q(23) LAnklePitch
% q(24) LAnkleRoll

% q(25) RHipYawPitch
% q(26) RHiproll
% q(27) RHipPitch
% q(28) RKneePitch
% q(29) RAnklePitch
% q(30) RAnkleRoll


clc
clear all
tic
global s_overall y_global dy_global t_global global_position_reference Fr COP s_global dphi_global phi_global hc_global
addpath('gen')
tspan=[0 20];
%% define the initial pose
x0=zeros(1,60);
x0(9) = 1.3;
x0(14) = 1.3;
%x0(6)= pi/4;
x0(19) = 0;
x0(20) = 0;
x0(21) = -0.525;
%x0(21) = -1.525;
x0(22) = 1.05;
x0(23) = -0.525;
x0(24) = 0;
Fr = zeros(6,1);
COP = zeros(1,9);
x0(25) = 0;
x0(26) = 0;
x0(27) = -0.525;
x0(28) = 1.05;
x0(29) = -0.525;
x0(30) = 0;
a=Lfoot_pose_func(x0(1:30));

x0(3)=-a(3);

%% collect global data
y_global=[];
dy_global=[];
phi_global=[];
s_global=[0];
dphi_global = zeros(1,85);
t_global=[0];
s_overall=[0];
global_position_reference=[0 0];
%% load the Bezier parameters
load optimal_alpha10.mat    % this one is the hybrid invariance one
% the Bezier parameter is different fom the right support foot case and the
% left foot support case
optimized_L = optimized;
optimized_L(29:35) = -optimized(29:35);
optimized_L(8:14) = -optimized(8:14);

Alpha=[optimized;
       optimized_L];  % compile the Bezier parameters from right support foot and left support foot together
t=[];
x_sol=[];



step=10;  % run simulation for 10 steps, feel free to change it yourself. 
t_end_of_previous_step=0;

t_interrupt=[];


foot_index = -1;  % indicate the support foot index
if foot_index == -1
    current_stance_foot_position=Rfoot_pose_func(x0(1:30));  %Right foot as stance foot
elseif foot_index == 1
    current_stance_foot_position=Lfoot_pose_func(x0(1:30));  %Left foot as stance foot
end
%% main simulation loop
for i=1:step
    
    options=odeset('Events',@(t,x) switch_events(t,x,foot_index),'RelTol',1e-6,'AbsTol',1e-6); % set the ode options
    
    [t_each_step,x_each_step,te,xe,ie]=ode45(@(t,x) dynamics(t,x,...
        t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position),tspan,x0,options); % solve for the continuous dynamics ode

    if isempty(t)
        t=t_each_step;
        x_sol=x_each_step;
        t_interrupt=te;
        t_end_of_previous_step=t_each_step(end) ;
        stance_foot_position_overall_mat=current_stance_foot_position';
    else
        t_so_far=t_each_step+t(end);
        t_interrupt_each_step=te+t(end);
        t=[t;t_so_far];
        x_sol=[x_sol;x_each_step];
        t_end_of_previous_step=t(end);

        t_interrupt=[t_interrupt;t_interrupt_each_step];
    end


    dq_plus=resetmap(x_each_step(end,:),foot_index);  % solve for the discrete dynamics
    x0=[x_each_step(end,1:30)';dq_plus];    % reset the initial conditions for the next step continuous dynamics ode
    
    % compute the new support foot pose
    if foot_index==-1
        current_stance_foot_position=Lfoot_pose_func(x0(1:30));
        fprintf('heihei')
    elseif foot_index == 1
        current_stance_foot_position=Rfoot_pose_func(x0(1:30));
        fprintf('xixi')
    end
    fprintf('hey,Ive finished %d step\n',i)
    
    stance_foot_position_overall_mat=[stance_foot_position_overall_mat;current_stance_foot_position'];  % store the overall support foot pose
    foot_index=(-1)^(i+1);   % change foot index

end



%% plot the result

figure

subplot(2,1,1);
hold on
plot(t_global(2:end),global_position_reference(2:end,1),'LineWidth',2.5,'LineStyle','--','Color','r')
%plot(t,x(:,1))
%plot(t_overall(1:25:end),q1_overall(1:25:end))
plot(t(1:90:end),x_sol(1:90:end,1),'--gs','MarkerSize',3,...
    'MarkerEdgeColor','g',...
    'MarkerFaceColor',[0.9,0.9,0.8])
%plot(t_overall(1:90:end),q1_overall(1:90:end),'--bs','MarkerSize',3,...
%    'MarkerEdgeColor','b',...
%    'MarkerFaceColor',[0.5,0.5,0.5])
hold off
axis([0 6 -0.02 0.18])
xlabel('\it{t (s)}','FontName','Times New Roman');
ylabel('\it{(m)}','FontName','Times New Roman');
yticks([-0.02 0.02 0.06 0.1 0.14 0.18])
grid on
box on
%legend1 = legend('x_d(t)','x_{bm}','x_{bw}','Location','best','Orientation','horizontal');
legend1 = legend('x_d(t)','x_{bm}','x_{bw}','Location','best','Orientation','horizontal');
legend1.FontAngle = 'italic';
legend1.FontName = 'Times New Roman';
legend1.FontSize=12;

legend boxoff
title('(a)')

subplot(2,1,2)
hold on
plot(stance_foot_position_overall_mat(2:2:end,1),-stance_foot_position_overall_mat(2:2:end,2),'o','LineWidth',3)
plot(stance_foot_position_overall_mat(1:2:end,1),-stance_foot_position_overall_mat(1:2:end,2),'o','LineWidth',3)


legend1 = legend('right foot (M)','left foot (M)','right foot (W)','left foot (W)','Location','best','Orientation','horizontal');
%legend1 = legend('right foot','left foot','Location','best','Orientation','horizontal');
legend1.FontAngle = 'italic';
legend1.FontName = 'Times New Roman';
legend1.EdgeColor = 'm';
legend1.LineWidth = 1;
legend boxoff
xlim([0 0.6])
ylim([-0.1 0.1])
xlabel('\it{x (m)}','FontName','Times New Roman')
ylabel('\it{y (m)}','FontName','Times New Roman')
hold off
grid on
box on
title('(b)')

%% run animation
nao_animation(t,x_sol,'0')