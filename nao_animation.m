function nao_animation(t,x,want_record)
    figure
    axis(gca,'equal')
    axis([-0.15 0.8 -0.15 0.15 0 0.3])
    xlabel('x')
    ylabel('y')
    zlabel('z')
    view(32,47)
    %view(0,90)
    view(90,0)  %z-y plane frontal
    %view(0,0)   %x-z plane sagital 
    num_of_frame=length(t);
    for i = 1:50:num_of_frame
        q=x(i,1:30);
        
        base = [q(1);q(2);q(3)];
        [LHip,LKnee,LFoot]=L_position(q);
        [RHip,RKnee,RFoot]=R_position(q);
        Head = upper_body(q);
  
        abs(LFoot(1)-q(1))
        abs(RFoot(1)-q(1))
        %LFoot
        time_str=num2str(t(i));
        h = text(1,0,0,time_str);
        subplot(2,1,1)
        view(90,0)
        axis([-0.15 0.8 -0.35 0.35 0 0.3])
        base2Head1 = line([base(1),Head(1)],[base(2),Head(2)],[base(3),Head(3)],'Color','yellow','LineWidth',3);
        base2LHip1 = line([base(1),LHip(1)],[base(2),LHip(2)],[base(3),LHip(3)],'Color','blue','LineWidth',3);
        base2RHip1 = line([base(1),RHip(1)],[base(2),RHip(2)],[base(3),RHip(3)],'Color','green','LineWidth',3);
        LHip2LKnee1 = line([LHip(1),LKnee(1)],[LHip(2),LKnee(2)],[LHip(3),LKnee(3)],'Color','blue','LineWidth',3);
        RHip2RKnee1 = line([RHip(1),RKnee(1)],[RHip(2),RKnee(2)],[RHip(3),RKnee(3)],'Color','green','LineWidth',3);
        LKnee2LFoot1 = line([LKnee(1),LFoot(1)],[LKnee(2),LFoot(2)],[LKnee(3),LFoot(3)],'Color','blue','LineWidth',3);
        RKnee2RFoot1 = line([RKnee(1),RFoot(1)],[RKnee(2),RFoot(2)],[RKnee(3),RFoot(3)],'Color','green','LineWidth',3);
        axis(gca,'equal')
        subplot(2,1,2)
        view(0,0)
        axis([-0.15 0.8 -0.15 0.15 0 0.3])
        base2Head = line([base(1),Head(1)],[base(2),Head(2)],[base(3),Head(3)],'Color','yellow','LineWidth',3);
        base2LHip = line([base(1),LHip(1)],[base(2),LHip(2)],[base(3),LHip(3)],'Color','blue','LineWidth',3);
        base2RHip = line([base(1),RHip(1)],[base(2),RHip(2)],[base(3),RHip(3)],'Color','green','LineWidth',3);
        LHip2LKnee = line([LHip(1),LKnee(1)],[LHip(2),LKnee(2)],[LHip(3),LKnee(3)],'Color','blue','LineWidth',3);
        RHip2RKnee = line([RHip(1),RKnee(1)],[RHip(2),RKnee(2)],[RHip(3),RKnee(3)],'Color','green','LineWidth',3);
        LKnee2LFoot = line([LKnee(1),LFoot(1)],[LKnee(2),LFoot(2)],[LKnee(3),LFoot(3)],'Color','blue','LineWidth',3);
        RKnee2RFoot = line([RKnee(1),RFoot(1)],[RKnee(2),RFoot(2)],[RKnee(3),RFoot(3)],'Color','green','LineWidth',3);
        
        pause(0.00000001)
        %F(i)= getframe(gcf);
        delete(base2Head)
        delete(base2LHip)
        delete(base2RHip)
        delete(LHip2LKnee)
        delete(RHip2RKnee)
        delete(LKnee2LFoot)
        delete(RKnee2RFoot)
        delete(base2Head1)
        delete(base2LHip1)
        delete(base2RHip1)
        delete(LHip2LKnee1)
        delete(RHip2RKnee1)
        delete(LKnee2LFoot1)
        delete(RKnee2RFoot1)
        delete(h)
    end
    
    if want_record == 1
        video = VideoWriter('video/walk_large_step_frontal.avi','MPEG-4');
        open(video)
        writeVideo(video,F)
        close(video)
    end
   
    
end

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
function Head=upper_body(q)
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
    Ab2head = [1 0 0 0;
               0 1 0 0;
               0 0 1 0.05;
               0 0 0 1];
    Aw2head = Aw2b*Ab2head;
    Head = [Aw2head(1,4);Aw2head(2,4);Aw2head(3,4)];
end