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
  double t51;
  double t70;
  double t75;
  double t86;
  double t89;
  double t91;
  double t97;
  double t104;
  double t109;
  double t110;
  double t112;
  double t113;
  double t108;
  double t114;
  double t116;
  double t118;
  double t121;
  double t122;
  double t123;
  double t126;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t152;
  double t154;
  double t155;
  double t151;
  double t157;
  double t158;
  double t124;
  double t127;
  double t128;
  double t132;
  double t133;
  double t134;
  double t169;
  double t171;
  double t172;
  double t173;
  double t174;
  double t175;
  double t176;
  double t103;
  double t117;
  double t129;
  double t135;
  double t137;
  double t140;
  double t149;
  double t159;
  double t160;
  double t161;
  double t164;
  double t166;
  double t167;
  double t170;
  double t177;
  double t178;
  double t180;
  double t181;
  double t182;
  double t183;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t189;
  double t191;
  double t192;
  double t203;
  double t204;
  double t205;
  double t206;
  double t194;
  double t197;
  double t218;
  double t219;
  double t220;
  double t209;
  t51 = Cos(var1[2]);
  t70 = Cos(var1[4]);
  t75 = t51*t70;
  t86 = Sin(var1[2]);
  t89 = Sin(var1[4]);
  t91 = -1.*t86*t89;
  t97 = t75 + t91;
  t104 = Cos(var1[6]);
  t109 = -1.*t70*t86;
  t110 = -1.*t51*t89;
  t112 = t109 + t110;
  t113 = Sin(var1[6]);
  t108 = t104*t97;
  t114 = t112*t113;
  t116 = t108 + t114;
  t118 = Cos(var1[8]);
  t121 = t104*t112;
  t122 = -1.*t97*t113;
  t123 = t121 + t122;
  t126 = Sin(var1[8]);
  t141 = -1.*t51*t70;
  t142 = t86*t89;
  t143 = t141 + t142;
  t144 = t143*t113;
  t145 = t121 + t144;
  t152 = t104*t143;
  t154 = -1.*t112*t113;
  t155 = t152 + t154;
  t151 = t118*t145;
  t157 = t155*t126;
  t158 = t151 + t157;
  t124 = t118*t123;
  t127 = -1.*t116*t126;
  t128 = t124 + t127;
  t132 = t118*t116;
  t133 = t123*t126;
  t134 = t132 + t133;
  t169 = Power(t134,2);
  t171 = -1.*t118*t123;
  t172 = t116*t126;
  t173 = t171 + t172;
  t174 = Power(t173,2);
  t175 = t174 + t169;
  t176 = 1/t175;
  t103 = -0.4*t97;
  t117 = -0.4*t116;
  t129 = -0.075*t128;
  t135 = -0.025*t134;
  t137 = t103 + t117 + t129 + t135;
  t140 = -0.4*t112;
  t149 = -0.4*t145;
  t159 = -0.025*t158;
  t160 = t118*t155;
  t161 = -1.*t145*t126;
  t164 = t160 + t161;
  t166 = -0.075*t164;
  t167 = t140 + t149 + t159 + t166;
  t170 = 1/Sqrt(t169);
  t177 = t158*t128*t134*t170*t176;
  t178 = Sqrt(t169);
  t180 = -1.*t118*t155;
  t181 = t145*t126;
  t182 = t180 + t181;
  t183 = t178*t182*t176;
  t184 = t177 + t183;
  t185 = t70*t86;
  t186 = t51*t89;
  t187 = t185 + t186;
  t188 = -1.*t187*t113;
  t189 = t108 + t188;
  t191 = -1.*t104*t187;
  t192 = t191 + t122;
  t203 = -1.*t104*t97;
  t204 = t203 + t154;
  t205 = t204*t126;
  t206 = t124 + t205;
  t194 = -1.*t189*t126;
  t197 = t118*t189;
  t218 = t104*t187;
  t219 = t97*t113;
  t220 = t218 + t219;
  t209 = -1.*t123*t126;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t137;
  p_output1[7]=t167;
  p_output1[8]=t184;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t137;
  p_output1[13]=t167;
  p_output1[14]=t184;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-0.4*t189 - 0.075*(t118*t192 + t194) - 0.025*(t126*t192 + t197);
  p_output1[19]=-0.4*t123 - 0.025*t206 - 0.075*(t118*t204 + t209);
  p_output1[20]=t176*t178*(t133 - 1.*t118*t204) + t128*t134*t170*t176*t206;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-0.075*(t194 - 1.*t118*t220) - 0.025*(t197 - 1.*t126*t220);
  p_output1[25]=-0.025*t128 - 0.075*(-1.*t116*t118 + t209);
  p_output1[26]=Power(t128,2)*t134*t170*t176 + t134*t176*t178;
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

#include "j_Lheel_pose_func.hh"

namespace SymFunction
{

void j_Lheel_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
