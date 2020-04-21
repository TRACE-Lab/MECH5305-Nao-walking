sym_var=SymVariable('q',[30,1]);
dsym_var=SymVariable('dq',[30,1]);
q = [sym_var(1);sym_var(2);sym_var(3);
    sym_var(4);sym_var(5);sym_var(6);sym_var(7);
    sym_var(8);sym_var(9);sym_var(10);sym_var(11);
    sym_var(12);sym_var(13);sym_var(14);sym_var(15);
    sym_var(16);sym_var(17);sym_var(18);sym_var(19);
    sym_var(20);sym_var(21);sym_var(22);sym_var(23);
    sym_var(24);sym_var(25);sym_var(26);sym_var(27);
    sym_var(28);sym_var(29);sym_var(30)];
dq = [dsym_var(1);dsym_var(2);dsym_var(3);
    dsym_var(4);dsym_var(5);dsym_var(6);dsym_var(7);
    dsym_var(8);dsym_var(9);dsym_var(10);dsym_var(11);
    dsym_var(12);dsym_var(13);dsym_var(14);dsym_var(15);
    dsym_var(16);dsym_var(17);dsym_var(18);dsym_var(19);
    dsym_var(20);dsym_var(21);dsym_var(22);dsym_var(23);
    dsym_var(24);dsym_var(25);dsym_var(26);dsym_var(27);
    dsym_var(28);dsym_var(29);dsym_var(30)];

Aw2bp = [1 0 0 q(1);
         0 1 0 q(2);
         0 0 1 q(3);
         0 0 0 1];
Rb_roll = [1 0          0         0;
           0 cos(q(4)) -sin(q(4)) 0;
           0 sin(q(4))  cos(q(4)) 0;
           0 0          0         1];
Rb_pitch = [cos(q(5)) 0 sin(q(5)) 0;
            0         1 0         0;
           -sin(q(5)) 0 cos(q(5)) 0;
            0         0 0         1];
Rb_yaw = [cos(q(6)) -sin(q(6)) 0 0;
          sin(q(6))  cos(q(6)) 0 0;
          0          0         1 0;
          0          0         0 1];
Rb_rpy = Rb_roll*Rb_pitch*Rb_yaw;
Aw2b = Aw2bp*Rb_rpy;
%%
Ab2LHipYawPitch_prime = [1 0 0  0;
                         0 1 0  0.05;
                         0 0 1 -0.085;
                         0 0 0  1];
Ax_minus45 = [1 0          0         0;
         0 cos(-pi/4) -sin(-pi/4) 0;
         0 sin(-pi/4)  cos(-pi/4) 0;
         0 0          0         1];
ALHipYawPitch_prime = [cos(q(19)) 0 sin(q(19)) 0;
                       0          1 0          0;
                      -sin(q(19)) 0 cos(q(19)) 0;
                       0          0 0          1];
Ax_45 = [1 0          0         0;
         0 cos(pi/4) -sin(pi/4) 0;
         0 sin(pi/4)  cos(pi/4) 0;
         0 0          0         1];              
Ab2LHipYawPitch=Ab2LHipYawPitch_prime*Ax_minus45*ALHipYawPitch_prime*Ax_45;
%LHipYawPitch to LHipRoll
ALHipYawPitch2LHipRoll = [1 0           0          0;
                          0 cos(q(20)) -sin(q(20)) 0;
                          0 sin(q(20))  cos(q(20)) 0;
                          0 0           0          1];

%LHipRoll to LHipPitch
ALHipRoll2LHipPitch = [cos(q(21)) 0 sin(q(21)) 0;
                       0          1 0          0;
                      -sin(q(21)) 0 cos(q(21)) 0;
                       0          0 0          1];
%LHipPitch to LKneePitch
ALHipPitch2LKneePitch_prime = [1 0 0  0;
                               0 1 0  0;
                               0 0 1 -0.1;
                               0 0 0  1];
ALKneePitch = [cos(q(22)) 0 sin(q(22)) 0;
               0          1 0          0;
              -sin(q(22)) 0 cos(q(22)) 0;
               0          0 0          1];
ALHipPitch2LKneePitch = ALHipPitch2LKneePitch_prime*ALKneePitch;

%LKneePitch to LAnklePitch
ALKneePitch2LAnklePitch_prime = [1 0 0  0;
                                 0 1 0  0;
                                 0 0 1 -0.1029;
                                 0 0 0  1];
ALAnklePitch = [cos(q(23)) 0 sin(q(23)) 0;
                0          1 0          0;
               -sin(q(23)) 0 cos(q(23)) 0;
                0          0 0          1];
ALKneePitch2LAnklePitch = ALKneePitch2LAnklePitch_prime*ALAnklePitch;

%LAnklePitch to LAnkleRoll
ALAnklePitch2LAnkleRoll = [1 0           0          0;
                           0 cos(q(24)) -sin(q(24)) 0;
                           0 sin(q(24))  cos(q(24)) 0;
                           0 0           0          1];
% world frame to LankleRoll
Aw2LAnkleRoll = Aw2b*Ab2LHipYawPitch*ALHipYawPitch2LHipRoll*ALHipRoll2LHipPitch*...
    ALHipPitch2LKneePitch*ALKneePitch2LAnklePitch*ALAnklePitch2LAnkleRoll;

X_L_foot = Aw2LAnkleRoll(1,4);
X_L_foot = X_L_foot(1);
Y_L_foot = Aw2LAnkleRoll(2,4);
Y_L_foot = Y_L_foot(1);
Z_L_foot = Aw2LAnkleRoll(3,4);
Z_L_foot = Z_L_foot(1);
Lr21 = Aw2LAnkleRoll(2,1);
Lr21 = Lr21(1);
Lr11 = Aw2LAnkleRoll(1,1);
Lr11 = Lr11(1);
Lr31 = Aw2LAnkleRoll(3,1);
Lr31 = Lr31(1);
Lr32 = Aw2LAnkleRoll(3,2);
Lr32 = Lr32(1);
Lr33 = Aw2LAnkleRoll(3,3);
Lr33 = Lr33(1);
LPitch = atan2(-Lr31,sqrt(Lr32*Lr32+Lr33*Lr33));
LYaw = atan2(Lr21,Lr11);
LRoll = atan2(Lr32,Lr33);


Ab2RHipYawPitch_prime = [1 0 0  0;
                         0 1 0 -0.05;
                         0 0 1 -0.085;
                         0 0 0  1];
ARx_45 = [1 0          0         0;
          0 cos(pi/4) -sin(pi/4) 0;
          0 sin(pi/4)  cos(pi/4) 0;
          0 0          0         1];
ARHipYawPitch_prime = [cos(q(25)) 0 sin(q(25)) 0;
                       0          1 0          0;
                      -sin(q(25)) 0 cos(q(25)) 0;
                       0          0 0          1];
ARx_minus45 = [1 0           0          0;
               0 cos(-pi/4) -sin(-pi/4) 0;
               0 sin(-pi/4)  cos(-pi/4) 0;
               0 0           0          1];              
Ab2RHipYawPitch=Ab2RHipYawPitch_prime*ARx_45*ARHipYawPitch_prime*ARx_minus45;

%RHipYawPitch to RHipRoll
ARHipYawPitch2RHipRoll = [1 0           0          0;
                          0 cos(q(26)) -sin(q(26)) 0;
                          0 sin(q(26))  cos(q(26)) 0;
                          0 0           0          1];
%RHipRoll to RHipPitch
ARHipRoll2RHipPitch = [cos(q(27)) 0 sin(q(27)) 0;
                       0          1 0          0;
                      -sin(q(27)) 0 cos(q(27)) 0;
                       0          0 0          1];

%RHipPitch to RKneePitch

ARHipPitch2RKneePitch_prime = [1 0 0  0;
                               0 1 0  0;
                               0 0 1 -0.1;
                               0 0 0  1];
ARKneePitch = [cos(q(28)) 0 sin(q(28)) 0;
               0          1 0          0;
              -sin(q(28)) 0 cos(q(28)) 0;
               0          0 0          1];
ARHipPitch2RKneePitch = ARHipPitch2RKneePitch_prime*ARKneePitch;

%RKneePitch to RAnklePitch

ARKneePitch2RAnklePitch_prime = [1 0 0  0;
                                 0 1 0  0;
                                 0 0 1 -0.1029;
                                 0 0 0  1];
AAnklePitch = [cos(q(29)) 0 sin(q(29)) 0;
               0          1 0          0;
              -sin(q(29)) 0 cos(q(29)) 0;
               0          0 0          1];
ARKneePitch2RAnklePitch = ARKneePitch2RAnklePitch_prime*AAnklePitch;

%RAnklePitch to RAnkleRoll
ARAnklePitch2RAnkleRoll = [1 0           0          0;
                           0 cos(q(30)) -sin(q(30)) 0;
                           0 sin(q(30))  cos(q(30)) 0;
                           0 0           0          1];


Aw2RAnkleRoll = Aw2b*Ab2RHipYawPitch*ARHipYawPitch2RHipRoll*ARHipRoll2RHipPitch*ARHipPitch2RKneePitch...
                *ARKneePitch2RAnklePitch*ARAnklePitch2RAnkleRoll;



X_R_foot = Aw2RAnkleRoll(1,4);
X_R_foot = X_R_foot(1);
Y_R_foot = Aw2RAnkleRoll(2,4);
Y_R_foot = Y_R_foot(1);
Z_R_foot = Aw2RAnkleRoll(3,4);
Z_R_foot = Z_R_foot(1);
Rr21 = Aw2RAnkleRoll(2,1);
Rr21 = Rr21(1);
Rr11 = Aw2RAnkleRoll(1,1);
Rr11 = Rr11(1);
Rr31 = Aw2RAnkleRoll(3,1);
Rr31 = Rr31(1);
Rr32 = Aw2RAnkleRoll(3,2);
Rr32 = Rr32(1);
Rr33 = Aw2RAnkleRoll(3,3);
Rr33 = Rr33(1);
RPitch = atan2(-Rr31,sqrt(Rr32*Rr32+Rr33*Rr33));
RYaw = atan2(Rr21,Rr11);
RRoll = atan2(Rr32,Rr33);

Lfoot_pose = [X_L_foot;Y_L_foot;Z_L_foot;LRoll;LPitch;LYaw];
Rfoot_pose = [X_R_foot;Y_R_foot;Z_R_foot;RRoll;RPitch;RYaw];

hc = [q(1);q(2);q(3);q(4);q(5);Lfoot_pose;Rfoot_pose;q(7);...
    q(8);q(9);q(10);q(11);q(12);q(13);q(14);q(15);q(16);q(17);q(18);q(19)-q(25)];

j_hc_opt = jacobian(hc,sym_var);
j_hc_opt_fun = SymFunction('j_hc_opt_func',j_hc_opt,sym_var);