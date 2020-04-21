/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 15:53:02 GMT-04:00
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
  double t108;
  double t129;
  double t135;
  double t144;
  double t151;
  double t157;
  double t160;
  double t172;
  double t177;
  double t181;
  double t183;
  double t184;
  double t175;
  double t185;
  double t190;
  double t193;
  double t198;
  double t199;
  double t200;
  double t205;
  double t223;
  double t224;
  double t225;
  double t226;
  double t227;
  double t234;
  double t236;
  double t237;
  double t233;
  double t239;
  double t240;
  double t201;
  double t207;
  double t208;
  double t213;
  double t214;
  double t215;
  double t251;
  double t253;
  double t254;
  double t255;
  double t256;
  double t257;
  double t258;
  double t169;
  double t192;
  double t210;
  double t216;
  double t218;
  double t222;
  double t231;
  double t241;
  double t242;
  double t243;
  double t246;
  double t248;
  double t249;
  double t252;
  double t259;
  double t260;
  double t262;
  double t263;
  double t264;
  double t265;
  double t266;
  double t267;
  double t268;
  double t269;
  double t270;
  double t271;
  double t273;
  double t274;
  double t285;
  double t286;
  double t287;
  double t288;
  double t276;
  double t279;
  double t300;
  double t301;
  double t302;
  double t291;
  t108 = Cos(var1[2]);
  t129 = Cos(var1[3]);
  t135 = t108*t129;
  t144 = Sin(var1[2]);
  t151 = Sin(var1[3]);
  t157 = -1.*t144*t151;
  t160 = t135 + t157;
  t172 = Cos(var1[5]);
  t177 = -1.*t129*t144;
  t181 = -1.*t108*t151;
  t183 = t177 + t181;
  t184 = Sin(var1[5]);
  t175 = t172*t160;
  t185 = t183*t184;
  t190 = t175 + t185;
  t193 = Cos(var1[7]);
  t198 = t172*t183;
  t199 = -1.*t160*t184;
  t200 = t198 + t199;
  t205 = Sin(var1[7]);
  t223 = -1.*t108*t129;
  t224 = t144*t151;
  t225 = t223 + t224;
  t226 = t225*t184;
  t227 = t198 + t226;
  t234 = t172*t225;
  t236 = -1.*t183*t184;
  t237 = t234 + t236;
  t233 = t193*t227;
  t239 = t237*t205;
  t240 = t233 + t239;
  t201 = t193*t200;
  t207 = -1.*t190*t205;
  t208 = t201 + t207;
  t213 = t193*t190;
  t214 = t200*t205;
  t215 = t213 + t214;
  t251 = Power(t215,2);
  t253 = -1.*t193*t200;
  t254 = t190*t205;
  t255 = t253 + t254;
  t256 = Power(t255,2);
  t257 = t256 + t251;
  t258 = 1/t257;
  t169 = -0.4*t160;
  t192 = -0.4*t190;
  t210 = -0.075*t208;
  t216 = -0.025*t215;
  t218 = t169 + t192 + t210 + t216;
  t222 = -0.4*t183;
  t231 = -0.4*t227;
  t241 = -0.025*t240;
  t242 = t193*t237;
  t243 = -1.*t227*t205;
  t246 = t242 + t243;
  t248 = -0.075*t246;
  t249 = t222 + t231 + t241 + t248;
  t252 = 1/Sqrt(t251);
  t259 = t240*t208*t215*t252*t258;
  t260 = Sqrt(t251);
  t262 = -1.*t193*t237;
  t263 = t227*t205;
  t264 = t262 + t263;
  t265 = t260*t264*t258;
  t266 = t259 + t265;
  t267 = t129*t144;
  t268 = t108*t151;
  t269 = t267 + t268;
  t270 = -1.*t269*t184;
  t271 = t175 + t270;
  t273 = -1.*t172*t269;
  t274 = t273 + t199;
  t285 = -1.*t172*t160;
  t286 = t285 + t236;
  t287 = t286*t205;
  t288 = t201 + t287;
  t276 = -1.*t271*t205;
  t279 = t193*t271;
  t300 = t172*t269;
  t301 = t160*t184;
  t302 = t300 + t301;
  t291 = -1.*t200*t205;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t218;
  p_output1[7]=t249;
  p_output1[8]=t266;
  p_output1[9]=t218;
  p_output1[10]=t249;
  p_output1[11]=t266;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.4*t271 - 0.075*(t193*t274 + t276) - 0.025*(t205*t274 + t279);
  p_output1[16]=-0.4*t200 - 0.025*t288 - 0.075*(t193*t286 + t291);
  p_output1[17]=t258*t260*(t214 - 1.*t193*t286) + t208*t215*t252*t258*t288;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=-0.075*(t276 - 1.*t193*t302) - 0.025*(t279 - 1.*t205*t302);
  p_output1[22]=-0.025*t208 - 0.075*(-1.*t190*t193 + t291);
  p_output1[23]=Power(t208,2)*t215*t252*t258 + t215*t258*t260;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 9, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "j_Rheel_pose_func.hh"

namespace SymFunction
{

void j_Rheel_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
