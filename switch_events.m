function [value,isterminal,direction] = switch_events(t,x,foot_index)
    q=x(1:30);
    if foot_index == -1
        swing_foot_pose = Lfoot_pose_func(q);
        stance_foot_pose = Rfoot_pose_func(q);

    elseif foot_index == 1
        swing_foot_pose = Rfoot_pose_func(q);
        stance_foot_pose = Lfoot_pose_func(q);
    end

    if t>0.2
        %value = swing_foot_pose(3)-(-0.260574336417833);
        %value = swing_foot_pose(3)-stance_foot_pose(3);
        %value = swing_foot_pose(3)-0.8*10^(-5);
        value = swing_foot_pose(3);
    else
        value = 10;
    end
    
        
    isterminal = 1;
    direction = -1;
end