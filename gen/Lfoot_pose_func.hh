/*
 * Automatically Generated from Mathematica.
 * Tue 10 Jul 2018 21:58:31 GMT-04:00
 */

#ifndef LFOOT_POSE_FUNC_HH
#define LFOOT_POSE_FUNC_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Lfoot_pose_func_raw(double *p_output1, const double *var1);

  inline void Lfoot_pose_func(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 30, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 6, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Lfoot_pose_func_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // LFOOT_POSE_FUNC_HH
