function dq_plus=resetmap(x,foot_index)
    J_i=zeros(1,30);
    J_i(19)=1;
    J_i(25)=-1;
    q=x(1:30);
    dq=x(31:60);
    [D,~,~] = dynamics_Nao_matrix(x);
    if foot_index == -1
        swing_foot_jacobian = j_Lfoot_func(q);
    elseif foot_index == 1
        swing_foot_jacobian = j_Rfoot_func(q);
    end
    b=[D*dq';0;0;0;0;0;0;0];
    A=[D,-swing_foot_jacobian',-J_i';
       swing_foot_jacobian,zeros(6,7);
       J_i, zeros(1,7)];
    dq_plus=A\b;
    dq_plus=dq_plus(1:30);
    
    
end