/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 15:53:06 GMT-04:00
 */

#ifndef JJ_LTOE_POSE_FUNC_HH
#define JJ_LTOE_POSE_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void jj_Ltoe_pose_func_raw(double *p_output1, const double *var1,const double *var2);

  inline void jj_Ltoe_pose_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);
    assert_size_matrix(var2, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    jj_Ltoe_pose_func_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JJ_LTOE_POSE_FUNC_HH
