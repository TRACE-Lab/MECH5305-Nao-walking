function [D,c_vec,B_coupled] = dynamics_Nao_matrix(x)
    q = x(1:30);
    dq = x(31:60);
    D = Mmat_NaoH25V50(q);
    c_vec = compute_drift(q,dq);
    B = zeros(30,24);
    B(7:30,1:24)=eye(24);
    B_coupled = zeros(30,23);
    B_coupled(:,1:18) = B(:,1:18);
    B_coupled(:,19:23) = B(:,20:24);
    
end