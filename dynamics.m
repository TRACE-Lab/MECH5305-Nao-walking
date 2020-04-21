function dx = dynamics(t,x,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position)
    global Fr COP
    

    
    J_i=zeros(1,30);
    J_i(19)=1;
    J_i(25)=-1;
    
    q = x(1:30);
    dq = x(31:60);
    
    


    if foot_index==-1
        J_c = j_Rfoot_func(q);
        JJ_c = jj_Rfoot_func(q,dq);
        
    elseif foot_index ==1
        J_c = j_Lfoot_func(q);
        JJ_c = jj_Lfoot_func(q,dq);
        
    end
    

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
    
    
    Fx = [dq;(D)\(-c_overall)];
    Gx = [zeros(30,23);(D)\B_overall];

    

    %[u,s,u_v0]=feedback_linearization_sine_Y(t,x,D,c_overall,B_overall,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position);
    [u,s]=feedback_linearization(t,x,D,c_overall,B_overall,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position);
    %[u,s]=feedback_linearization_wrt_q1(t,x,D,c_overall,B_overall,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position);
    %[u,s]=feedback_linearization_CLF(t,x,D,c_overall,B_overall,t_end_of_previous_step,foot_index,Alpha,current_stance_foot_position);
    
    dx= Fx+Gx*u;
    %{
    Fr1 = JLR\(J_c/D*c_vec-Jri/Jii*J_i/D*c_vec-JJ_c)+JLR\(Jri/Jii*J_i/D*B-J_c/D*B)*u;
    Fr1_0=JLR\(J_c/D*c_vec-Jri/Jii*J_i/D*c_vec-JJ_c)+JLR\(Jri/Jii*J_i/D*B-J_c/D*B)*u_v0;
    Fr=[Fr,Fr1];
    
    pz = -0.06;
    px = (pz*Fr1(1)-Fr1(5))/Fr1(3);
    py = (Fr1(4)+pz*Fr1(2))/Fr1(3);
    %py =  Fr1(4)/Fr1(3);
    px2 = -Fr1(5)/Fr1(3);
    py2 =  Fr1(4)/Fr1(3);
    COP1 = [px,py,s,(Fr1_0)'];
    COP2 = [px2,py2];
    COP = [COP;COP1];
    %}
    
end