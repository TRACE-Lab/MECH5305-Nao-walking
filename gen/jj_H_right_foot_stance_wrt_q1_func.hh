/*
 * Automatically Generated from Mathematica.
 * Wed 13 Mar 2019 15:13:22 GMT-04:00
 */

#ifndef JJ_H_RIGHT_FOOT_STANCE_WRT_Q1_FUNC_HH
#define JJ_H_RIGHT_FOOT_STANCE_WRT_Q1_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void jj_H_right_foot_stance_wrt_q1_func_raw(double *p_output1, const double *var1,const double *var2);

  inline void jj_H_right_foot_stance_wrt_q1_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);
    assert_size_matrix(var2, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 23, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    jj_H_right_foot_stance_wrt_q1_func_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JJ_H_RIGHT_FOOT_STANCE_WRT_Q1_FUNC_HH
