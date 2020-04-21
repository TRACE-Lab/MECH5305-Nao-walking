%clear;
tic
%clear all
%% optimization bounds and settings
A = [];
b = [];
%Aeq = []; % [zeros(1,15),1,zeros(1,6)];
%beq = []; % dq1t
%% the pose of swing foot shuold be 0 at both beginning and the end. 
%  the y of the swing foot should be 0.05
Aeq = zeros(63,63);
beq = zeros(63,1);
Aeq(1,29) = 1;
Aeq(2,35) = 1;
Aeq(3,36) = 1;
Aeq(4,42) = 1;
Aeq(5,43) = 1;
Aeq(6,49) = 1;
Aeq(7,50) = 1;
Aeq(8,56) = 1;
Aeq(9,57) = 1;
Aeq(10,63) = 1;

beq(1) = 0.05;
beq(2) = 0.05;
beq(3) = 0;
beq(4) = 0;
beq(5) = 0;
beq(6) = 0;
beq(7) = 0;
beq(8) = 0;
beq(9) = 0;
beq(10) = 0;
%%
options = optimoptions('fmincon',...
    'Display','iter',...
    'MaxFunEvals',100000,...
    'MaxIter',100000,...
    'TolCon',1e-5);

%load save_correct_upgraded1.mat
%load initial_for_optimization.mat
load optimal_alpha4.mat
optimized(31)=0.04;
optimized(33)=0.04;
optimized(17)=-optimized(17);
optimized(19)=-optimized(19);
optimized(15:21)=2.5*optimized(15:21);
optimized(38:40)=optimized(38:40)+0.025;
optimized(8:14)=optimized(8:14)*2;
optimized_L=optimized;
optimized_L(29:35)=-optimized(29:35);
optimized_L(8:14)=-optimized(8:14);
%Alpha = [optimized;
%         optimized_L];
Alpha=optimized;

ub=3*ones(63,1);
lb=-3*ones(63,1);

x0 = Alpha;
[Cost,Cnst] = opt_Obj_Cnst_V3_5;

[optimized,fval,exitflag,output] = fmincon(Cost,x0,A,b,Aeq,beq,...
    lb,ub,Cnst,options);


%save 'save_correct_upgraded_left.mat' optimized_alpha

toc