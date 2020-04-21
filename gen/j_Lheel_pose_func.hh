/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 15:53:01 GMT-04:00
 */

#ifndef J_LHEEL_POSE_FUNC_HH
#define J_LHEEL_POSE_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void j_Lheel_pose_func_raw(double *p_output1, const double *var1);

  inline void j_Lheel_pose_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 9, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 9);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    j_Lheel_pose_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_LHEEL_POSE_FUNC_HH
