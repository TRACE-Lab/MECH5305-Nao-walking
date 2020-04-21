/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 15:53:01 GMT-04:00
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
  double t75;
  double t103;
  double t108;
  double t114;
  double t117;
  double t121;
  double t124;
  double t132;
  double t137;
  double t140;
  double t142;
  double t143;
  double t135;
  double t144;
  double t149;
  double t152;
  double t157;
  double t158;
  double t159;
  double t164;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t193;
  double t195;
  double t196;
  double t192;
  double t198;
  double t199;
  double t160;
  double t166;
  double t167;
  double t172;
  double t173;
  double t174;
  double t210;
  double t212;
  double t213;
  double t214;
  double t215;
  double t216;
  double t217;
  double t129;
  double t151;
  double t169;
  double t175;
  double t177;
  double t181;
  double t190;
  double t200;
  double t201;
  double t202;
  double t205;
  double t207;
  double t208;
  double t211;
  double t218;
  double t219;
  double t221;
  double t222;
  double t223;
  double t224;
  double t225;
  double t226;
  double t227;
  double t228;
  double t229;
  double t230;
  double t232;
  double t233;
  double t244;
  double t245;
  double t246;
  double t247;
  double t235;
  double t238;
  double t259;
  double t260;
  double t261;
  double t250;
  t75 = Cos(var1[2]);
  t103 = Cos(var1[3]);
  t108 = t75*t103;
  t114 = Sin(var1[2]);
  t117 = Sin(var1[3]);
  t121 = -1.*t114*t117;
  t124 = t108 + t121;
  t132 = Cos(var1[5]);
  t137 = -1.*t103*t114;
  t140 = -1.*t75*t117;
  t142 = t137 + t140;
  t143 = Sin(var1[5]);
  t135 = t132*t124;
  t144 = t142*t143;
  t149 = t135 + t144;
  t152 = Cos(var1[7]);
  t157 = t132*t142;
  t158 = -1.*t124*t143;
  t159 = t157 + t158;
  t164 = Sin(var1[7]);
  t182 = -1.*t75*t103;
  t183 = t114*t117;
  t184 = t182 + t183;
  t185 = t184*t143;
  t186 = t157 + t185;
  t193 = t132*t184;
  t195 = -1.*t142*t143;
  t196 = t193 + t195;
  t192 = t152*t186;
  t198 = t196*t164;
  t199 = t192 + t198;
  t160 = t152*t159;
  t166 = -1.*t149*t164;
  t167 = t160 + t166;
  t172 = t152*t149;
  t173 = t159*t164;
  t174 = t172 + t173;
  t210 = Power(t174,2);
  t212 = -1.*t152*t159;
  t213 = t149*t164;
  t214 = t212 + t213;
  t215 = Power(t214,2);
  t216 = t215 + t210;
  t217 = 1/t216;
  t129 = -0.4*t124;
  t151 = -0.4*t149;
  t169 = 0.075*t167;
  t175 = -0.025*t174;
  t177 = t129 + t151 + t169 + t175;
  t181 = -0.4*t142;
  t190 = -0.4*t186;
  t200 = -0.025*t199;
  t201 = t152*t196;
  t202 = -1.*t186*t164;
  t205 = t201 + t202;
  t207 = 0.075*t205;
  t208 = t181 + t190 + t200 + t207;
  t211 = 1/Sqrt(t210);
  t218 = t199*t167*t174*t211*t217;
  t219 = Sqrt(t210);
  t221 = -1.*t152*t196;
  t222 = t186*t164;
  t223 = t221 + t222;
  t224 = t219*t223*t217;
  t225 = t218 + t224;
  t226 = t103*t114;
  t227 = t75*t117;
  t228 = t226 + t227;
  t229 = -1.*t228*t143;
  t230 = t135 + t229;
  t232 = -1.*t132*t228;
  t233 = t232 + t158;
  t244 = -1.*t132*t124;
  t245 = t244 + t195;
  t246 = t245*t164;
  t247 = t160 + t246;
  t235 = -1.*t230*t164;
  t238 = t152*t230;
  t259 = t132*t228;
  t260 = t124*t143;
  t261 = t259 + t260;
  t250 = -1.*t159*t164;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t177;
  p_output1[7]=t208;
  p_output1[8]=t225;
  p_output1[9]=t177;
  p_output1[10]=t208;
  p_output1[11]=t225;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=-0.4*t230 + 0.075*(t152*t233 + t235) - 0.025*(t164*t233 + t238);
  p_output1[16]=-0.4*t159 - 0.025*t247 + 0.075*(t152*t245 + t250);
  p_output1[17]=t217*t219*(t173 - 1.*t152*t245) + t167*t174*t211*t217*t247;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0.075*(t235 - 1.*t152*t261) - 0.025*(t238 - 1.*t164*t261);
  p_output1[22]=-0.025*t167 + 0.075*(-1.*t149*t152 + t250);
  p_output1[23]=Power(t167,2)*t174*t211*t217 + t174*t217*t219;
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

#include "j_Rtoe_pose_func.hh"

namespace SymFunction
{

void j_Rtoe_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
