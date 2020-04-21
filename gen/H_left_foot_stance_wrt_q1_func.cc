/*
 * Automatically Generated from Mathematica.
 * Wed 13 Mar 2019 15:13:20 GMT-04:00
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
  double t9;
  double t4;
  double t19;
  double t11;
  double t17;
  double t20;
  double t21;
  double t15;
  double t23;
  double t24;
  double t39;
  double t40;
  double t44;
  double t46;
  double t13;
  double t18;
  double t22;
  double t25;
  double t26;
  double t28;
  double t31;
  double t32;
  double t34;
  double t41;
  double t42;
  double t43;
  double t48;
  double t49;
  double t50;
  double t51;
  double t52;
  double t54;
  double t56;
  double t58;
  double t59;
  double t61;
  double t62;
  double t63;
  double t64;
  double t65;
  double t66;
  double t67;
  double t69;
  double t70;
  double t88;
  double t90;
  double t91;
  double t92;
  double t93;
  double t97;
  double t98;
  double t99;
  double t72;
  double t74;
  double t96;
  double t100;
  double t101;
  double t102;
  double t103;
  double t104;
  double t105;
  double t106;
  double t107;
  double t108;
  double t112;
  double t113;
  double t114;
  double t115;
  double t116;
  double t118;
  double t119;
  double t121;
  double t79;
  double t139;
  double t140;
  double t142;
  double t146;
  double t147;
  double t148;
  double t145;
  double t149;
  double t150;
  double t153;
  double t154;
  double t155;
  double t156;
  double t157;
  double t158;
  double t159;
  double t160;
  double t161;
  double t162;
  double t163;
  double t164;
  double t165;
  double t166;
  double t167;
  double t170;
  double t171;
  double t172;
  double t169;
  double t173;
  double t174;
  double t182;
  double t178;
  double t179;
  double t180;
  double t177;
  double t183;
  double t184;
  double t185;
  double t186;
  double t187;
  double t188;
  double t189;
  double t190;
  double t191;
  double t192;
  double t193;
  double t181;
  double t194;
  double t195;
  double t196;
  double t197;
  double t198;
  double t80;
  double t81;
  double t82;
  double t205;
  double t206;
  double t78;
  double t84;
  double t85;
  double t125;
  double t128;
  double t131;
  double t124;
  double t132;
  double t133;
  t9 = Cos(var1[4]);
  t4 = Sin(var1[4]);
  t19 = Sin(var1[24]);
  t11 = Sin(var1[5]);
  t17 = Cos(var1[5]);
  t20 = -0.707107*t19;
  t21 = 0. + t20;
  t15 = Cos(var1[24]);
  t23 = 0.707107*t19;
  t24 = 0. + t23;
  t39 = 0.707107*t15;
  t40 = 0. + t39;
  t44 = -0.707107*t15;
  t46 = 0. + t44;
  t13 = Sin(var1[26]);
  t18 = t15*t9*t17;
  t22 = t21*t4;
  t25 = -1.*t9*t24*t11;
  t26 = t18 + t22 + t25;
  t28 = t13*t26;
  t31 = Cos(var1[26]);
  t32 = Sin(var1[25]);
  t34 = t9*t17*t21;
  t41 = -0.707107*t40;
  t42 = 0.5000003094490001 + t41;
  t43 = t42*t4;
  t48 = -0.707107*t46;
  t49 = 0.5000003094490001 + t48;
  t50 = -1.*t49*t9*t11;
  t51 = 0. + t34 + t43 + t50;
  t52 = -1.*t32*t51;
  t54 = Cos(var1[25]);
  t56 = t9*t17*t24;
  t58 = 0.707107*t40;
  t59 = 0.5000003094490001 + t58;
  t61 = t59*t4;
  t62 = 0.707107*t46;
  t63 = 0.5000003094490001 + t62;
  t64 = -1.*t63*t9*t11;
  t65 = 0. + t56 + t61 + t64;
  t66 = t54*t65;
  t67 = t52 + t66;
  t69 = t31*t67;
  t70 = t28 + t69;
  t88 = Sin(var1[3]);
  t90 = Cos(var1[3]);
  t91 = t90*t17;
  t92 = -1.*t88*t4*t11;
  t93 = t91 + t92;
  t97 = t17*t88*t4;
  t98 = t90*t11;
  t99 = t97 + t98;
  t72 = Cos(var1[27]);
  t74 = 0. + t72;
  t96 = -1.*t9*t21*t88;
  t100 = t15*t99;
  t101 = t24*t93;
  t102 = t96 + t100 + t101;
  t103 = t13*t102;
  t104 = -1.*t42*t9*t88;
  t105 = t21*t99;
  t106 = t49*t93;
  t107 = 0. + t104 + t105 + t106;
  t108 = -1.*t32*t107;
  t112 = -1.*t59*t9*t88;
  t113 = t24*t99;
  t114 = t63*t93;
  t115 = 0. + t112 + t113 + t114;
  t116 = t54*t115;
  t118 = t108 + t116;
  t119 = t31*t118;
  t121 = t103 + t119;
  t79 = Sin(var1[27]);
  t139 = t17*t88;
  t140 = t90*t4*t11;
  t142 = t139 + t140;
  t146 = -1.*t90*t17*t4;
  t147 = t88*t11;
  t148 = t146 + t147;
  t145 = t90*t9*t21;
  t149 = t15*t148;
  t150 = t24*t142;
  t153 = t145 + t149 + t150;
  t154 = t13*t153;
  t155 = t42*t90*t9;
  t156 = t21*t148;
  t157 = t49*t142;
  t158 = 0. + t155 + t156 + t157;
  t159 = -1.*t32*t158;
  t160 = t59*t90*t9;
  t161 = t24*t148;
  t162 = t63*t142;
  t163 = 0. + t160 + t161 + t162;
  t164 = t54*t163;
  t165 = t159 + t164;
  t166 = t31*t165;
  t167 = t154 + t166;
  t170 = t31*t153;
  t171 = -1.*t13*t165;
  t172 = t170 + t171;
  t169 = t74*t167;
  t173 = t79*t172;
  t174 = t169 + t173;
  t182 = Cos(var1[29]);
  t178 = t54*t158;
  t179 = t32*t163;
  t180 = 0. + t178 + t179;
  t177 = Sin(var1[29]);
  t183 = Sin(var1[28]);
  t184 = -1.*t79;
  t185 = 0. + t184;
  t186 = t185*t167;
  t187 = t72*t172;
  t188 = t186 + t187;
  t189 = t183*t188;
  t190 = Cos(var1[28]);
  t191 = 0. + t190;
  t192 = t191*t174;
  t193 = t189 + t192;
  t181 = -1.*t177*t180;
  t194 = t182*t193;
  t195 = t181 + t194;
  t196 = t182*t180;
  t197 = t177*t193;
  t198 = t196 + t197;
  t80 = t31*t26;
  t81 = -1.*t13*t67;
  t82 = t80 + t81;
  t205 = -1.*t183;
  t206 = 0. + t205;
  t78 = t74*t70;
  t84 = t79*t82;
  t85 = t78 + t84;
  t125 = t31*t102;
  t128 = -1.*t13*t118;
  t131 = t125 + t128;
  t124 = t74*t121;
  t132 = t79*t131;
  t133 = t124 + t132;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=-0.085*t4 - 0.1*t70 - 0.1029*t85 + 0.05*t11*t9;
  p_output1[6]=-0.1*t121 - 0.1029*t133 + 0.085*t88*t9 - 0.05*t93 + var1[1];
  p_output1[7]=-0.05*t142 - 0.1*t167 - 0.1029*t174 - 0.085*t9*t90 + var1[2];
  p_output1[8]=ArcTan(t195,t198);
  p_output1[9]=ArcTan(Sqrt(Power(t195,2) + Power(t198,2)),-1.*t188*t190 - 1.*t174*t206);
  p_output1[10]=ArcTan(t190*(t185*t70 + t72*t82) + t206*t85,t133*t206 + t190*(t121*t185 + t131*t72));
  p_output1[11]=var1[6];
  p_output1[12]=var1[7];
  p_output1[13]=var1[8];
  p_output1[14]=var1[9];
  p_output1[15]=var1[10];
  p_output1[16]=var1[11];
  p_output1[17]=var1[12];
  p_output1[18]=var1[13];
  p_output1[19]=var1[14];
  p_output1[20]=var1[15];
  p_output1[21]=var1[16];
  p_output1[22]=var1[17];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 23, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "H_left_foot_stance_wrt_q1_func.hh"

namespace SymFunction
{

void H_left_foot_stance_wrt_q1_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
