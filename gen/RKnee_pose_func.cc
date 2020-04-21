/*
 * Automatically Generated from Mathematica.
 * Wed 11 Jul 2018 16:23:45 GMT-04:00
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
  double t119;
  double t103;
  double t163;
  double t133;
  double t158;
  double t164;
  double t165;
  double t153;
  double t168;
  double t169;
  double t184;
  double t187;
  double t199;
  double t202;
  double t226;
  double t151;
  double t228;
  double t232;
  double t233;
  double t234;
  double t176;
  double t177;
  double t193;
  double t197;
  double t239;
  double t240;
  double t241;
  double t204;
  double t205;
  double t209;
  double t211;
  double t212;
  double t214;
  double t215;
  double t262;
  double t263;
  double t264;
  double t267;
  double t268;
  double t269;
  t119 = Cos(var1[4]);
  t103 = Sin(var1[4]);
  t163 = Sin(var1[24]);
  t133 = Sin(var1[5]);
  t158 = Cos(var1[5]);
  t164 = -0.707107*t163;
  t165 = 0. + t164;
  t153 = Cos(var1[24]);
  t168 = 0.707107*t163;
  t169 = 0. + t168;
  t184 = 0.707107*t153;
  t187 = 0. + t184;
  t199 = -0.707107*t153;
  t202 = 0. + t199;
  t226 = Sin(var1[3]);
  t151 = Sin(var1[26]);
  t228 = Cos(var1[3]);
  t232 = t228*t158;
  t233 = -1.*t226*t103*t133;
  t234 = t232 + t233;
  t176 = Cos(var1[26]);
  t177 = Sin(var1[25]);
  t193 = -0.707107*t187;
  t197 = 0.5000003094490001 + t193;
  t239 = t158*t226*t103;
  t240 = t228*t133;
  t241 = t239 + t240;
  t204 = -0.707107*t202;
  t205 = 0.5000003094490001 + t204;
  t209 = Cos(var1[25]);
  t211 = 0.707107*t187;
  t212 = 0.5000003094490001 + t211;
  t214 = 0.707107*t202;
  t215 = 0.5000003094490001 + t214;
  t262 = t158*t226;
  t263 = t228*t103*t133;
  t264 = t262 + t263;
  t267 = -1.*t228*t158*t103;
  t268 = t226*t133;
  t269 = t267 + t268;
  p_output1[0]=-0.085*t103 + 0.05*t119*t133 - 0.1*(t151*(t119*t153*t158 + t103*t165 - 1.*t119*t133*t169) + t176*(-1.*t177*(0. + t119*t158*t165 + t103*t197 - 1.*t119*t133*t205) + t209*(0. + t119*t158*t169 + t103*t212 - 1.*t119*t133*t215))) + var1[0];
  p_output1[1]=0.085*t119*t226 - 0.05*t234 - 0.1*(t151*(-1.*t119*t165*t226 + t169*t234 + t153*t241) + t176*(-1.*t177*(0. - 1.*t119*t197*t226 + t205*t234 + t165*t241) + t209*(0. - 1.*t119*t212*t226 + t215*t234 + t169*t241))) + var1[1];
  p_output1[2]=-0.085*t119*t228 - 0.05*t264 - 0.1*(t151*(t119*t165*t228 + t169*t264 + t153*t269) + t176*(-1.*t177*(0. + t119*t197*t228 + t205*t264 + t165*t269) + t209*(0. + t119*t212*t228 + t215*t264 + t169*t269))) + var1[2];
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

#include "RKnee_pose_func.hh"

namespace SymFunction
{

void RKnee_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
