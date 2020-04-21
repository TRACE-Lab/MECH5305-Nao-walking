function [RHip,RKnee,RFoot]=R_position(q)
    % world frame to base frame
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

    % world frame to LHip
    Aw2RHip = Aw2b*Ab2RHipYawPitch;
    %*ARHipYawPitch2RHipRoll*ARHipRoll2RHipPitch;
    RHip = [Aw2RHip(1,4);Aw2RHip(2,4);Aw2RHip(3,4)];
    % world frame to LKnee
    Aw2RKnee = Aw2b*Ab2RHipYawPitch*ARHipYawPitch2RHipRoll*ARHipRoll2RHipPitch*...
        ARHipPitch2RKneePitch;
    RKnee = [Aw2RKnee(1,4);Aw2RKnee(2,4);Aw2RKnee(3,4)];
    Aw2RAnkleRoll = Aw2b*Ab2RHipYawPitch*ARHipYawPitch2RHipRoll*ARHipRoll2RHipPitch*ARHipPitch2RKneePitch...
                    *ARKneePitch2RAnklePitch*ARAnklePitch2RAnkleRoll;
    RFoot = [Aw2RAnkleRoll(1,4);Aw2RAnkleRoll(2,4);Aw2RAnkleRoll(3,4)];
end
