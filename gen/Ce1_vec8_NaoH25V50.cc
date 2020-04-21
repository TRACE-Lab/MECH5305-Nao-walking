/*
 * Automatically Generated from Mathematica.
 * Tue 10 Jul 2018 11:12:28 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t104;
  double t95;
  double t98;
  double t106;
  double t116;
  double t118;
  double t133;
  double t107;
  double t120;
  double t121;
  double t131;
  double t134;
  double t137;
  double t139;
  double t146;
  double t147;
  double t165;
  double t166;
  double t168;
  double t169;
  double t270;
  double t273;
  double t179;
  double t181;
  double t183;
  double t271;
  double t275;
  double t276;
  double t281;
  double t291;
  double t304;
  double t306;
  double t308;
  double t309;
  double t222;
  double t173;
  double t174;
  double t175;
  double t177;
  double t185;
  double t186;
  double t352;
  double t360;
  double t380;
  double t230;
  double t231;
  double t232;
  double t313;
  double t314;
  double t327;
  double t340;
  double t344;
  double t534;
  double t535;
  double t536;
  double t537;
  double t541;
  double t542;
  double t560;
  double t565;
  double t567;
  double t496;
  double t497;
  double t498;
  double t400;
  double t401;
  double t403;
  double t503;
  double t504;
  double t506;
  double t645;
  double t646;
  double t649;
  double t655;
  double t657;
  double t659;
  double t661;
  double t663;
  double t664;
  double t667;
  double t668;
  double t670;
  double t671;
  double t672;
  double t673;
  double t680;
  double t683;
  double t684;
  double t207;
  double t208;
  double t211;
  double t690;
  double t691;
  double t692;
  double t665;
  double t675;
  double t677;
  double t739;
  double t741;
  double t744;
  double t686;
  double t687;
  double t689;
  double t786;
  double t788;
  double t790;
  double t678;
  double t685;
  double t693;
  double t695;
  double t829;
  double t832;
  double t833;
  double t843;
  double t846;
  double t849;
  double t751;
  double t752;
  double t755;
  double t756;
  double t797;
  double t798;
  double t800;
  double t802;
  double t841;
  double t852;
  double t804;
  double t805;
  double t808;
  double t809;
  double t828;
  double t836;
  double t837;
  double t838;
  double t839;
  double t840;
  double t851;
  double t853;
  double t855;
  double t856;
  double t857;
  double t859;
  double t861;
  double t862;
  double t864;
  double t865;
  double t867;
  double t868;
  double t870;
  double t871;
  double t872;
  double t873;
  double t875;
  double t876;
  double t877;
  double t880;
  double t881;
  double t883;
  double t884;
  double t885;
  double t888;
  double t890;
  double t892;
  double t896;
  double t897;
  double t899;
  double t900;
  double t901;
  double t903;
  double t904;
  double t905;
  double t907;
  double t909;
  double t911;
  double t233;
  double t234;
  double t920;
  double t921;
  double t922;
  double t924;
  double t925;
  double t927;
  double t930;
  double t931;
  double t943;
  double t945;
  double t946;
  double t938;
  double t939;
  double t941;
  double t926;
  double t934;
  double t935;
  double t998;
  double t1000;
  double t1001;
  double t1002;
  double t1003;
  double t1004;
  double t1006;
  double t1007;
  double t1010;
  double t1011;
  double t1012;
  double t1013;
  double t1016;
  double t1017;
  double t1019;
  double t1020;
  double t1022;
  double t1023;
  double t1025;
  double t1026;
  double t1027;
  double t1029;
  double t1030;
  double t1031;
  double t1032;
  double t1033;
  double t1036;
  double t1039;
  double t1040;
  double t1045;
  double t1046;
  double t1047;
  double t1049;
  double t1051;
  double t1055;
  double t1056;
  double t1057;
  double t1059;
  double t948;
  double t952;
  double t957;
  double t968;
  double t974;
  double t979;
  double t1113;
  double t1115;
  double t1116;
  double t1117;
  double t1119;
  t104 = Cos(var1[7]);
  t95 = Cos(var1[4]);
  t98 = Cos(var1[6]);
  t106 = Sin(var1[5]);
  t116 = Cos(var1[5]);
  t118 = Sin(var1[6]);
  t133 = Sin(var1[7]);
  t107 = -1.*t98*t104*t106;
  t120 = -1.*t116*t104*t118;
  t121 = t107 + t120;
  t131 = 0.0318282514*t95*t121;
  t134 = -1.*t98*t106*t133;
  t137 = -1.*t116*t118*t133;
  t139 = t134 + t137;
  t146 = 0.0006779696*t95*t139;
  t147 = t131 + t146;
  t165 = Sin(var1[4]);
  t166 = t116*t98*t104;
  t168 = -1.*t104*t106*t118;
  t169 = t166 + t168;
  t270 = Sin(var1[3]);
  t273 = Cos(var1[3]);
  t179 = t116*t98*t133;
  t181 = -1.*t106*t118*t133;
  t183 = t179 + t181;
  t271 = t270*t165*t121;
  t275 = t273*t169;
  t276 = t271 + t275;
  t281 = 0.0318282514*t276;
  t291 = t270*t165*t139;
  t304 = t273*t183;
  t306 = t291 + t304;
  t308 = 0.0006779696*t306;
  t309 = t281 + t308;
  t222 = -1.*t104*t165;
  t173 = -1.*t165*t169;
  t174 = -1.*t95*t133;
  t175 = t173 + t174;
  t177 = t95*t104;
  t185 = -1.*t165*t183;
  t186 = t177 + t185;
  t352 = t98*t104*t106;
  t360 = t116*t104*t118;
  t380 = t352 + t360;
  t230 = -1.*t116*t98*t133;
  t231 = t106*t118*t133;
  t232 = t230 + t231;
  t313 = -1.*t95*t169;
  t314 = t165*t133;
  t327 = t313 + t314;
  t340 = -1.*t95*t183;
  t344 = t222 + t340;
  t534 = -1.*t273*t165*t121;
  t535 = t270*t169;
  t536 = t534 + t535;
  t537 = 0.0318282514*t536;
  t541 = -1.*t273*t165*t139;
  t542 = t270*t183;
  t560 = t541 + t542;
  t565 = 0.0006779696*t560;
  t567 = t537 + t565;
  t496 = t273*t380;
  t497 = -1.*t270*t175;
  t498 = t496 + t497;
  t400 = t98*t106*t133;
  t401 = t116*t118*t133;
  t403 = t400 + t401;
  t503 = -1.*t95*t104;
  t504 = -1.*t165*t232;
  t506 = t503 + t504;
  t645 = -1.*t98*t106;
  t646 = -1.*t116*t118;
  t649 = t645 + t646;
  t655 = -0.00112*t104;
  t657 = 0.05258*t133;
  t659 = t655 + t657;
  t661 = t116*t98*t659;
  t663 = -1.*t106*t118*t659;
  t664 = t661 + t663;
  t667 = -1.*t104;
  t668 = 1. + t667;
  t670 = 0.1265*t668;
  t671 = 0.17908*t104;
  t672 = 0.00112*t133;
  t673 = t670 + t671 + t672;
  t680 = t95*t664;
  t683 = t165*t673;
  t684 = t680 + t683;
  t207 = t95*t169;
  t208 = -1.*t165*t133;
  t211 = t207 + t208;
  t690 = t98*t106*t659;
  t691 = t116*t118*t659;
  t692 = t690 + t691;
  t665 = -1.*t165*t664;
  t675 = t95*t673;
  t677 = t665 + t675;
  t739 = -1.*t95*t664;
  t741 = -1.*t165*t673;
  t744 = t739 + t741;
  t686 = t116*t98;
  t687 = -1.*t106*t118;
  t689 = t686 + t687;
  t786 = t104*t165;
  t788 = t95*t183;
  t790 = t786 + t788;
  t678 = -1.*t165*t649*t677;
  t685 = t95*t649*t684;
  t693 = t689*t692;
  t695 = t678 + t685 + t693;
  t829 = -1.*t116*t98;
  t832 = t106*t118;
  t833 = t829 + t832;
  t843 = -1.*t98*t106*t659;
  t846 = -1.*t116*t118*t659;
  t849 = t843 + t846;
  t751 = -1.*t380*t692;
  t752 = -1.*t677*t175;
  t755 = -1.*t684*t211;
  t756 = t751 + t752 + t755;
  t797 = t165*t649*t677;
  t798 = -1.*t95*t649*t684;
  t800 = -1.*t689*t692;
  t802 = t797 + t798 + t800;
  t841 = Power(t95,2);
  t852 = Power(t165,2);
  t804 = t692*t403;
  t805 = t684*t790;
  t808 = t677*t186;
  t809 = t804 + t805 + t808;
  t828 = 9.e-6*t95*t121;
  t836 = 0.000817*t95*t833;
  t837 = -0.00003*t95*t139;
  t838 = t95*t121*t695;
  t839 = -1.*t165*t833*t677;
  t840 = t95*t833*t684;
  t851 = t841*t649*t849;
  t853 = t852*t649*t849;
  t855 = t649*t692;
  t856 = t689*t664;
  t857 = t839 + t840 + t851 + t853 + t855 + t856;
  t859 = t857*t211;
  t861 = t95*t833*t756;
  t862 = t165*t121*t677;
  t864 = -1.*t95*t121*t684;
  t865 = -1.*t169*t692;
  t867 = -1.*t380*t664;
  t868 = t165*t849*t175;
  t870 = -1.*t95*t849*t211;
  t871 = t862 + t864 + t865 + t867 + t868 + t870;
  t872 = t95*t649*t871;
  t873 = t838 + t859 + t861 + t872;
  t875 = 0.0006779696*t873;
  t876 = t95*t802*t139;
  t877 = t165*t833*t677;
  t880 = -1.*t95*t833*t684;
  t881 = -1.*t841*t649*t849;
  t883 = -1.*t852*t649*t849;
  t884 = -1.*t649*t692;
  t885 = -1.*t689*t664;
  t888 = t877 + t880 + t881 + t883 + t884 + t885;
  t890 = t888*t790;
  t892 = t95*t833*t809;
  t896 = -1.*t165*t677*t139;
  t897 = t95*t684*t139;
  t899 = t664*t403;
  t900 = t692*t183;
  t901 = t95*t849*t790;
  t903 = -1.*t165*t849*t186;
  t904 = t896 + t897 + t899 + t900 + t901 + t903;
  t905 = t95*t649*t904;
  t907 = t876 + t890 + t892 + t905;
  t909 = 0.0318282514*t907;
  t911 = t828 + t836 + t837 + t875 + t909;
  t233 = t95*t232;
  t234 = t222 + t233;
  t920 = 0.05258*t104;
  t921 = t920 + t672;
  t922 = t116*t98*t921;
  t924 = -1.*t106*t118*t921;
  t925 = t922 + t924;
  t927 = 0.00112*t104;
  t930 = -0.05258*t133;
  t931 = t927 + t930;
  t943 = t98*t106*t921;
  t945 = t116*t118*t921;
  t946 = t943 + t945;
  t938 = t95*t925;
  t939 = t165*t931;
  t941 = t938 + t939;
  t926 = -1.*t165*t925;
  t934 = t95*t931;
  t935 = t926 + t934;
  t998 = 0.000817*t649;
  t1000 = 9.e-6*t169;
  t1001 = -0.00003*t183;
  t1002 = t649*t664;
  t1003 = t693 + t1002;
  t1004 = t169*t1003;
  t1006 = -1.*t169*t849;
  t1007 = -1.*t121*t664;
  t1010 = t1006 + t865 + t1007 + t867;
  t1011 = t689*t1010;
  t1012 = t649*t849;
  t1013 = t833*t664;
  t1016 = t1012 + t855 + t856 + t1013;
  t1017 = t380*t1016;
  t1019 = -1.*t169*t664;
  t1020 = t673*t133;
  t1022 = t751 + t1019 + t1020;
  t1023 = t649*t1022;
  t1025 = t1004 + t1011 + t1017 + t1023;
  t1026 = 0.0006779696*t1025;
  t1027 = -1.*t649*t849;
  t1029 = -1.*t833*t664;
  t1030 = t1027 + t884 + t885 + t1029;
  t1031 = t1030*t403;
  t1032 = -1.*t649*t664;
  t1033 = t800 + t1032;
  t1036 = t1033*t183;
  t1039 = t664*t139;
  t1040 = t849*t183;
  t1045 = t1039 + t899 + t1040 + t900;
  t1046 = t689*t1045;
  t1047 = t104*t673;
  t1049 = t664*t183;
  t1051 = t1047 + t804 + t1049;
  t1055 = t649*t1051;
  t1056 = t1031 + t1036 + t1046 + t1055;
  t1057 = 0.0318282514*t1056;
  t1059 = t998 + t1000 + t1001 + t1026 + t1057;
  t948 = -1.*t689*t946;
  t952 = t380*t692;
  t957 = t946*t403;
  t968 = t689*t946;
  t974 = -1.*t380*t946;
  t979 = -1.*t692*t139;
  t1113 = Power(var2[7],2);
  t1115 = -9.e-6*t104;
  t1116 = 0.00003*t133;
  t1117 = t1115 + t1116;
  t1119 = -0.5*t1113*t1117;
  p_output1[0]=var2[7]*(-0.5*(0.0318282514*t175 + 0.0006779696*t186)*var2[4] - 0.5*t147*var2[5] - 0.5*t147*var2[6] - 0.5*(0.0006779696*t211 + 0.0318282514*t234)*var2[7]);
  p_output1[1]=var2[7]*(-0.5*(0.0318282514*(-1.*t175*t273 - 1.*t270*t380) + 0.0006779696*(-1.*t186*t273 - 1.*t270*t403))*var2[3] - 0.5*(-0.0318282514*t270*t327 - 0.0006779696*t270*t344)*var2[4] - 0.5*t309*var2[5] - 0.5*t309*var2[6] - 0.5*(0.0006779696*t498 + 0.0318282514*(t139*t273 - 1.*t270*t506))*var2[7]);
  p_output1[2]=var2[7]*(-0.5*(0.0006779696*(-1.*t186*t270 + t273*t403) + 0.0318282514*t498)*var2[3] - 0.5*(0.0318282514*t273*t327 + 0.0006779696*t273*t344)*var2[4] - 0.5*t567*var2[5] - 0.5*t567*var2[6] - 0.5*(0.0006779696*(t175*t273 + t270*t380) + 0.0318282514*(t139*t270 + t273*t506))*var2[7]);
  p_output1[3]=var2[7]*(-0.5*(9.e-6*t175 - 0.00003*t186 - 0.000817*t165*t649 + 0.0006779696*(t175*t695 + t211*(-1.*t165*t649*t684 - 1.*t165*t649*t744) - 1.*t165*t649*t756 + t649*(-1.*t211*t677 - 1.*t327*t677 - 1.*t175*t684 - 1.*t175*t744)*t95) + 0.0318282514*((t165*t649*t684 + t165*t649*t744)*t790 + t186*t802 - 1.*t165*t649*t809 + t649*(t344*t677 + t186*t684 + t186*t744 + t677*t790)*t95))*var2[4] - 0.5*t911*var2[5] - 0.5*t911*var2[6] - 0.5*(-0.00003*t211 + 9.e-6*t234 + 0.0318282514*(t211*t802 + t790*(t165*t649*t935 + t948 - 1.*t649*t941*t95) + t649*t95*(t175*t677 + t211*t684 + t186*t935 + t790*t941 + t952 + t957)) + 0.0006779696*(t234*t695 + t211*(-1.*t165*t649*t935 + t649*t941*t95 + t968) + t649*t95*(-1.*t506*t677 - 1.*t234*t684 - 1.*t175*t935 - 1.*t211*t941 + t974 + t979)))*var2[7]);
  p_output1[4]=var2[7]*(-0.5*t1059*var2[5] - 0.5*t1059*var2[6] - 0.5*(9.e-6*t139 - 0.00003*t380 + 0.0318282514*(t1033*t380 + t403*(-1.*t649*t925 + t948) + t689*(t169*t664 - 1.*t133*t673 + t183*t925 + t104*t931 + t952 + t957)) + 0.0006779696*(t1003*t139 + t380*(t649*t925 + t968) + t689*(t1047 - 1.*t232*t664 - 1.*t169*t925 + t133*t931 + t974 + t979)))*var2[7]);
  p_output1[5]=t1119;
  p_output1[6]=t1119;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 30 && ncols == 1) && 
      !(mrows == 1 && ncols == 30))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 30, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Ce1_vec8_NaoH25V50.hh"

namespace SymFunction
{

void Ce1_vec8_NaoH25V50_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
