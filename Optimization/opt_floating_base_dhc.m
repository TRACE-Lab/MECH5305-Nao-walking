function F = opt_floating_base_dhc(dq,q,desired_value)
    hc_j = j_hc_opt_func(q);
    F = hc_j*dq - desired_value;
end