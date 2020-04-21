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
  double t32;
  double t44;
  double t51;
  double t53;
  double t56;
  double t63;
  double t67;
  double t72;
  double t82;
  double t83;
  double t84;
  double t85;
  double t75;
  double t86;
  double t87;
  double t90;
  double t91;
  double t94;
  double t95;
  double t98;
  double t111;
  double t112;
  double t113;
  double t114;
  double t115;
  double t118;
  double t119;
  double t120;
  double t117;
  double t121;
  double t122;
  double t97;
  double t101;
  double t102;
  double t104;
  double t105;
  double t106;
  double t129;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t70;
  double t89;
  double t103;
  double t108;
  double t109;
  double t110;
  double t116;
  double t123;
  double t124;
  double t125;
  double t126;
  double t127;
  double t128;
  double t130;
  double t137;
  double t138;
  double t139;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t145;
  double t146;
  double t147;
  double t148;
  double t150;
  double t151;
  double t162;
  double t163;
  double t164;
  double t165;
  double t153;
  double t156;
  double t177;
  double t178;
  double t179;
  double t168;
  t32 = Cos(var1[2]);
  t44 = Cos(var1[4]);
  t51 = t32*t44;
  t53 = Sin(var1[2]);
  t56 = Sin(var1[4]);
  t63 = -1.*t53*t56;
  t67 = t51 + t63;
  t72 = Cos(var1[6]);
  t82 = -1.*t44*t53;
  t83 = -1.*t32*t56;
  t84 = t82 + t83;
  t85 = Sin(var1[6]);
  t75 = t72*t67;
  t86 = t84*t85;
  t87 = t75 + t86;
  t90 = Cos(var1[8]);
  t91 = t72*t84;
  t94 = -1.*t67*t85;
  t95 = t91 + t94;
  t98 = Sin(var1[8]);
  t111 = -1.*t32*t44;
  t112 = t53*t56;
  t113 = t111 + t112;
  t114 = t113*t85;
  t115 = t91 + t114;
  t118 = t72*t113;
  t119 = -1.*t84*t85;
  t120 = t118 + t119;
  t117 = t90*t115;
  t121 = t120*t98;
  t122 = t117 + t121;
  t97 = t90*t95;
  t101 = -1.*t87*t98;
  t102 = t97 + t101;
  t104 = t90*t87;
  t105 = t95*t98;
  t106 = t104 + t105;
  t129 = Power(t106,2);
  t131 = -1.*t90*t95;
  t132 = t87*t98;
  t133 = t131 + t132;
  t134 = Power(t133,2);
  t135 = t134 + t129;
  t136 = 1/t135;
  t70 = -0.4*t67;
  t89 = -0.4*t87;
  t103 = 0.075*t102;
  t108 = -0.025*t106;
  t109 = t70 + t89 + t103 + t108;
  t110 = -0.4*t84;
  t116 = -0.4*t115;
  t123 = -0.025*t122;
  t124 = t90*t120;
  t125 = -1.*t115*t98;
  t126 = t124 + t125;
  t127 = 0.075*t126;
  t128 = t110 + t116 + t123 + t127;
  t130 = 1/Sqrt(t129);
  t137 = t122*t102*t106*t130*t136;
  t138 = Sqrt(t129);
  t139 = -1.*t90*t120;
  t140 = t115*t98;
  t141 = t139 + t140;
  t142 = t138*t141*t136;
  t143 = t137 + t142;
  t144 = t44*t53;
  t145 = t32*t56;
  t146 = t144 + t145;
  t147 = -1.*t146*t85;
  t148 = t75 + t147;
  t150 = -1.*t72*t146;
  t151 = t150 + t94;
  t162 = -1.*t72*t67;
  t163 = t162 + t119;
  t164 = t163*t98;
  t165 = t97 + t164;
  t153 = -1.*t148*t98;
  t156 = t90*t148;
  t177 = t72*t146;
  t178 = t67*t85;
  t179 = t177 + t178;
  t168 = -1.*t95*t98;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=t109;
  p_output1[7]=t128;
  p_output1[8]=t143;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t109;
  p_output1[13]=t128;
  p_output1[14]=t143;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=-0.4*t148 + 0.075*(t153 + t151*t90) - 0.025*(t156 + t151*t98);
  p_output1[19]=-0.025*t165 + 0.075*(t168 + t163*t90) - 0.4*t95;
  p_output1[20]=t102*t106*t130*t136*t165 + t136*t138*(t105 - 1.*t163*t90);
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0.075*(t153 - 1.*t179*t90) - 0.025*(t156 - 1.*t179*t98);
  p_output1[25]=-0.025*t102 + 0.075*(t168 - 1.*t87*t90);
  p_output1[26]=Power(t102,2)*t106*t130*t136 + t106*t136*t138;
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

#include "j_Ltoe_pose_func.hh"

namespace SymFunction
{

void j_Ltoe_pose_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
