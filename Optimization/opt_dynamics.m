function [COP,Fr1]= opt_dynamics(s,q_sol,dq_sol,Alpha,desired_y_tra)


    
    J_i=zeros(1,30);
    J_i(19)=1;
    J_i(25)=-1;
    
    q = q_sol;
    dq = dq_sol;
    
    x=[q;dq];



    J_c = j_Rfoot_func(q);
    JJ_c = jj_Rfoot_func(q,dq);

    

    
    [D,c_vec,B] = dynamics_Nao_matrix(x);
    
    Jii=J_i/D*J_i';
    Jir=J_i/D*J_c';
    Jri=J_c/D*J_i';
    Jrr=J_c/D*J_c';
    JLR=Jrr-Jri/Jii*Jir;
    c_contact = -J_c'*(JLR\(-Jri/Jii*J_i/D*c_vec-JJ_c+J_c/D*c_vec));
    B_contact = J_c'*(JLR\(-J_c/D*B+Jri/Jii*J_i/D*B));
    c_internal = -J_i'*(Jii\J_i/D*c_vec-Jii\Jir/JLR*(-Jri/Jii*J_i/D*c_vec-JJ_c+J_c/D*c_vec));
    B_internal = J_i'*(-(Jii\J_i/D*B+Jii\Jir/JLR*(-J_c/D*B+Jri/Jii*J_i/D*B)));
    c_overall = c_vec+c_contact+c_internal;
    B_overall = B+B_contact+B_internal;
    
    
    %Fx = [dq;(D)\(-c_overall)];
    %Gx = [zeros(30,23);(D)\B_overall];

    

    u=opt_feedback_linearization(s,x,D,c_overall,B_overall,Alpha,desired_y_tra);
    %u=0.5*ones(23,1);

    Fr1 = JLR\(J_c/D*c_vec-Jri/Jii*J_i/D*c_vec-JJ_c)+JLR\(Jri/Jii*J_i/D*B-J_c/D*B)*u;

    %dx= Fx+Gx*u;
    pz = -0.06;
    px = (pz*Fr1(1)-Fr1(5))/Fr1(3);
    py = (Fr1(4)+pz*Fr1(2))/Fr1(3);
    %px = -Fr1(5)/Fr1(3);
    %py = Fr1(4)/Fr1(3);
    COP = [px,py,s];

end