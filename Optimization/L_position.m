function [LHip,LKnee,LFoot]=L_position(q)
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

    %% base frame to LHipYawPitch
    Ab2LHipYawPitch_prime = [1 0 0  0;
                             0 1 0  0.05;
                             0 0 1 -0.085;
                             0 0 0  1];
    Ax_minus45 = [1 0           0          0;
                  0 cos(-pi/4) -sin(-pi/4) 0;
                  0 sin(-pi/4)  cos(-pi/4) 0;
                  0 0           0          1];
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
    % world frame to LHip
    Aw2LHip = Aw2b*Ab2LHipYawPitch*ALHipYawPitch2LHipRoll*ALHipRoll2LHipPitch;
    LHip = [Aw2LHip(1,4);Aw2LHip(2,4);Aw2LHip(3,4)];
    % world frame to LKnee
    Aw2LKnee = Aw2b*Ab2LHipYawPitch*ALHipYawPitch2LHipRoll*ALHipRoll2LHipPitch*...
        ALHipPitch2LKneePitch;
    LKnee = [Aw2LKnee(1,4);Aw2LKnee(2,4);Aw2LKnee(3,4)];
    % world frame to LankleRoll
    Aw2LAnkleRoll = Aw2b*Ab2LHipYawPitch*ALHipYawPitch2LHipRoll*ALHipRoll2LHipPitch*...
        ALHipPitch2LKneePitch*ALKneePitch2LAnklePitch*ALAnklePitch2LAnkleRoll;
    LFoot = [Aw2LAnkleRoll(1,4);Aw2LAnkleRoll(2,4);Aw2LAnkleRoll(3,4)];
end
