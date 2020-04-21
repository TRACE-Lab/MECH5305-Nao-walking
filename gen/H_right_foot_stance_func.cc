/*
 * Automatically Generated from Mathematica.
 * Thu 12 Jul 2018 17:09:55 GMT-04:00
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
  double t5;
  double t3;
  double t12;
  double t13;
  double t14;
  double t6;
  double t10;
  double t9;
  double t24;
  double t25;
  double t26;
  double t21;
  double t22;
  double t23;
  double t29;
  double t27;
  double t8;
  double t11;
  double t15;
  double t16;
  double t17;
  double t18;
  double t19;
  double t20;
  double t28;
  double t30;
  double t31;
  double t32;
  double t33;
  double t34;
  double t35;
  double t36;
  double t37;
  double t38;
  double t39;
  double t40;
  double t53;
  double t55;
  double t56;
  double t57;
  double t58;
  double t61;
  double t62;
  double t63;
  double t69;
  double t42;
  double t43;
  double t60;
  double t64;
  double t65;
  double t66;
  double t67;
  double t68;
  double t70;
  double t71;
  double t72;
  double t73;
  double t74;
  double t75;
  double t76;
  double t77;
  double t78;
  double t79;
  double t45;
  double t90;
  double t91;
  double t92;
  double t95;
  double t96;
  double t97;
  double t103;
  double t94;
  double t98;
  double t99;
  double t100;
  double t101;
  double t102;
  double t104;
  double t105;
  double t106;
  double t107;
  double t108;
  double t109;
  double t110;
  double t111;
  double t112;
  double t113;
  double t116;
  double t117;
  double t118;
  double t115;
  double t119;
  double t120;
  double t128;
  double t124;
  double t125;
  double t126;
  double t123;
  double t129;
  double t130;
  double t131;
  double t132;
  double t133;
  double t134;
  double t135;
  double t136;
  double t137;
  double t138;
  double t139;
  double t127;
  double t140;
  double t141;
  double t142;
  double t143;
  double t144;
  double t46;
  double t47;
  double t48;
  double t151;
  double t152;
  double t44;
  double t49;
  double t50;
  double t82;
  double t83;
  double t84;
  double t81;
  double t85;
  double t86;
  t5 = Cos(var1[4]);
  t3 = Sin(var1[4]);
  t12 = Sin(var1[18]);
  t13 = -0.707107*t12;
  t14 = 0. + t13;
  t6 = Sin(var1[5]);
  t10 = Cos(var1[5]);
  t9 = Cos(var1[18]);
  t24 = 0.707107*t9;
  t25 = 0. + t24;
  t26 = 0.707107*t25;
  t21 = 0.707107*t12;
  t22 = 0. + t21;
  t23 = t5*t10*t22;
  t29 = -0.5000003094490001 + t26;
  t27 = 0.5000003094490001 + t26;
  t8 = Sin(var1[20]);
  t11 = t9*t5*t10;
  t15 = t14*t3;
  t16 = -1.*t5*t14*t6;
  t17 = t11 + t15 + t16;
  t18 = t8*t17;
  t19 = Cos(var1[20]);
  t20 = Cos(var1[19]);
  t28 = t27*t3;
  t30 = -1.*t29*t5*t6;
  t31 = 0. + t23 + t28 + t30;
  t32 = t20*t31;
  t33 = Sin(var1[19]);
  t34 = t29*t3;
  t35 = -1.*t27*t5*t6;
  t36 = 0. + t23 + t34 + t35;
  t37 = -1.*t33*t36;
  t38 = t32 + t37;
  t39 = t19*t38;
  t40 = t18 + t39;
  t53 = Sin(var1[3]);
  t55 = Cos(var1[3]);
  t56 = t55*t10;
  t57 = -1.*t53*t3*t6;
  t58 = t56 + t57;
  t61 = t10*t53*t3;
  t62 = t55*t6;
  t63 = t61 + t62;
  t69 = t22*t63;
  t42 = Cos(var1[21]);
  t43 = 0. + t42;
  t60 = -1.*t5*t14*t53;
  t64 = t9*t63;
  t65 = t14*t58;
  t66 = t60 + t64 + t65;
  t67 = t8*t66;
  t68 = -1.*t27*t5*t53;
  t70 = t29*t58;
  t71 = 0. + t68 + t69 + t70;
  t72 = t20*t71;
  t73 = -1.*t29*t5*t53;
  t74 = t27*t58;
  t75 = 0. + t73 + t69 + t74;
  t76 = -1.*t33*t75;
  t77 = t72 + t76;
  t78 = t19*t77;
  t79 = t67 + t78;
  t45 = Sin(var1[21]);
  t90 = t10*t53;
  t91 = t55*t3*t6;
  t92 = t90 + t91;
  t95 = -1.*t55*t10*t3;
  t96 = t53*t6;
  t97 = t95 + t96;
  t103 = t22*t97;
  t94 = t55*t5*t14;
  t98 = t9*t97;
  t99 = t14*t92;
  t100 = t94 + t98 + t99;
  t101 = t8*t100;
  t102 = t27*t55*t5;
  t104 = t29*t92;
  t105 = 0. + t102 + t103 + t104;
  t106 = t20*t105;
  t107 = t29*t55*t5;
  t108 = t27*t92;
  t109 = 0. + t107 + t103 + t108;
  t110 = -1.*t33*t109;
  t111 = t106 + t110;
  t112 = t19*t111;
  t113 = t101 + t112;
  t116 = t19*t100;
  t117 = -1.*t8*t111;
  t118 = t116 + t117;
  t115 = t43*t113;
  t119 = t45*t118;
  t120 = t115 + t119;
  t128 = Cos(var1[23]);
  t124 = t33*t105;
  t125 = t20*t109;
  t126 = 0. + t124 + t125;
  t123 = Sin(var1[23]);
  t129 = Sin(var1[22]);
  t130 = -1.*t45;
  t131 = 0. + t130;
  t132 = t131*t113;
  t133 = t42*t118;
  t134 = t132 + t133;
  t135 = t129*t134;
  t136 = Cos(var1[22]);
  t137 = 0. + t136;
  t138 = t137*t120;
  t139 = t135 + t138;
  t127 = -1.*t123*t126;
  t140 = t128*t139;
  t141 = t127 + t140;
  t142 = t128*t126;
  t143 = t123*t139;
  t144 = t142 + t143;
  t46 = t19*t17;
  t47 = -1.*t8*t38;
  t48 = t46 + t47;
  t151 = -1.*t129;
  t152 = 0. + t151;
  t44 = t43*t40;
  t49 = t45*t48;
  t50 = t44 + t49;
  t82 = t19*t66;
  t83 = -1.*t8*t77;
  t84 = t82 + t83;
  t81 = t43*t79;
  t85 = t45*t84;
  t86 = t81 + t85;
  p_output1[0]=var1[0];
  p_output1[1]=var1[1];
  p_output1[2]=var1[2];
  p_output1[3]=var1[3];
  p_output1[4]=var1[4];
  p_output1[5]=-0.085*t3 - 0.1*t40 - 0.1029*t50 - 0.05*t5*t6 + var1[0];
  p_output1[6]=0.085*t5*t53 + 0.05*t58 - 0.1*t79 - 0.1029*t86 + var1[1];
  p_output1[7]=-0.1*t113 - 0.1029*t120 - 0.085*t5*t55 + 0.05*t92 + var1[2];
  p_output1[8]=ArcTan(t141,t144);
  p_output1[9]=ArcTan(Sqrt(Power(t141,2) + Power(t144,2)),-1.*t134*t136 - 1.*t120*t152);
  p_output1[10]=ArcTan(t136*(t131*t40 + t42*t48) + t152*t50,t136*(t131*t79 + t42*t84) + t152*t86);
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

#include "H_right_foot_stance_func.hh"

namespace SymFunction
{

void H_right_foot_stance_func_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
