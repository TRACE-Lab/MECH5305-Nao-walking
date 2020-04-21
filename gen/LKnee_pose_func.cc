/*
 * Automatically Generated from Mathematica.
 * Wed 11 Jul 2018 16:19:05 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t69;
  double t40;
  double t107;
  double t109;
  double t111;
  double t74;
  double t89;
  double t87;
  double t147;
  double t151;
  double t153;
  double t134;
  double t136;
  double t141;
  double t159;
  double t156;
  double t183;
  double t78;
  double t185;
  double t187;
  double t189;
  double t192;
  double t122;
  double t133;
  double t198;
  double t199;
  double t200;
  double t165;
  double t208;
  double t223;
  double t225;
  double t226;
  double t231;
  double t232;
  double t233;
  double t241;
  t69 = Cos(var1[4]);
  t40 = Sin(var1[4]);
  t107 = Sin(var1[18]);
  t109 = -0.707107*t107;
  t111 = 0. + t109;
  t74 = Sin(var1[5]);
  t89 = Cos(var1[5]);
  t87 = Cos(var1[18]);
  t147 = 0.707107*t87;
  t151 = 0. + t147;
  t153 = 0.707107*t151;
  t134 = 0.707107*t107;
  t136 = 0. + t134;
  t141 = t69*t89*t136;
  t159 = -0.5000003094490001 + t153;
  t156 = 0.5000003094490001 + t153;
  t183 = Sin(var1[3]);
  t78 = Sin(var1[20]);
  t185 = Cos(var1[3]);
  t187 = t185*t89;
  t189 = -1.*t183*t40*t74;
  t192 = t187 + t189;
  t122 = Cos(var1[20]);
  t133 = Cos(var1[19]);
  t198 = t89*t183*t40;
  t199 = t185*t74;
  t200 = t198 + t199;
  t165 = Sin(var1[19]);
  t208 = t136*t200;
  t223 = t89*t183;
  t225 = t185*t40*t74;
  t226 = t223 + t225;
  t231 = -1.*t185*t89*t40;
  t232 = t183*t74;
  t233 = t231 + t232;
  t241 = t136*t233;
  p_output1[0]=-0.085*t40 - 0.05*t69*t74 - 0.1*(t122*(-1.*t165*(0. + t141 + t159*t40 - 1.*t156*t69*t74) + t133*(0. + t141 + t156*t40 - 1.*t159*t69*t74)) + t78*(t111*t40 - 1.*t111*t69*t74 + t69*t87*t89)) + var1[0];
  p_output1[1]=0.05*t192 + 0.085*t183*t69 - 0.1*(t122*(t133*(0. + t159*t192 + t208 - 1.*t156*t183*t69) - 1.*t165*(0. + t156*t192 + t208 - 1.*t159*t183*t69)) + t78*(t111*t192 - 1.*t111*t183*t69 + t200*t87)) + var1[1];
  p_output1[2]=0.05*t226 - 0.085*t185*t69 - 0.1*(t122*(t133*(0. + t159*t226 + t241 + t156*t185*t69) - 1.*t165*(0. + t156*t226 + t241 + t159*t185*t69)) + t78*(t111*t226 + t111*t185*t69 + t233*t87)) + var1[2];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "LKnee_pose_func.hh"

namespace SymFunction
{

void LKnee_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
