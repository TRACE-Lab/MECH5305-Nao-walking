/*
 * Automatically Generated from Mathematica.
 * Wed 13 Mar 2019 15:13:20 GMT-04:00
 */

#ifndef H_LEFT_FOOT_STANCE_WRT_Q1_FUNC_HH
#define H_LEFT_FOOT_STANCE_WRT_Q1_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void H_left_foot_stance_wrt_q1_func_raw(double *p_output1, const double *var1);

  inline void H_left_foot_stance_wrt_q1_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 23, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    H_left_foot_stance_wrt_q1_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_LEFT_FOOT_STANCE_WRT_Q1_FUNC_HH
