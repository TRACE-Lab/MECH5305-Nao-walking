/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 15:53:07 GMT-04:00
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
  double t333;
  double t304;
  double t322;
  double t335;
  double t303;
  double t326;
  double t340;
  double t341;
  double t343;
  double t345;
  double t346;
  double t349;
  double t360;
  double t361;
  double t368;
  double t373;
  double t375;
  double t378;
  double t380;
  double t381;
  double t369;
  double t374;
  double t382;
  double t383;
  double t384;
  double t386;
  double t388;
  double t390;
  double t391;
  double t393;
  double t399;
  double t402;
  double t406;
  double t417;
  double t418;
  double t419;
  double t411;
  double t415;
  double t416;
  double t453;
  double t454;
  double t429;
  double t482;
  double t483;
  double t487;
  double t488;
  double t489;
  double t490;
  double t492;
  double t494;
  double t499;
  double t420;
  double t424;
  double t425;
  double t426;
  double t438;
  double t439;
  double t441;
  double t503;
  double t507;
  double t510;
  double t560;
  double t561;
  double t562;
  double t563;
  double t564;
  double t570;
  double t574;
  double t559;
  double t565;
  double t566;
  double t575;
  double t577;
  double t579;
  double t580;
  double t582;
  double t583;
  double t584;
  double t585;
  double t556;
  double t558;
  double t589;
  double t590;
  double t591;
  double t600;
  double t610;
  double t611;
  double t646;
  double t652;
  double t642;
  double t653;
  double t655;
  double t656;
  double t657;
  double t658;
  double t660;
  double t661;
  double t662;
  double t599;
  double t601;
  double t602;
  double t603;
  double t604;
  double t680;
  double t681;
  double t682;
  double t684;
  double t685;
  double t695;
  double t697;
  double t694;
  double t696;
  double t698;
  double t699;
  double t701;
  double t702;
  double t703;
  double t704;
  double t705;
  double t706;
  double t707;
  double t693;
  double t711;
  double t712;
  double t713;
  double t714;
  double t720;
  double t721;
  double t722;
  double t668;
  double t669;
  double t728;
  double t730;
  double t734;
  double t735;
  double t738;
  double t740;
  double t741;
  double t742;
  double t743;
  double t719;
  double t729;
  double t750;
  double t745;
  double t749;
  double t761;
  double t616;
  double t618;
  double t773;
  double t774;
  double t775;
  double t772;
  double t776;
  double t777;
  double t778;
  double t779;
  double t780;
  double t781;
  double t782;
  double t783;
  double t784;
  double t785;
  double t790;
  double t791;
  double t792;
  double t752;
  double t753;
  double t756;
  double t802;
  double t810;
  double t811;
  double t812;
  double t813;
  double t814;
  double t815;
  double t816;
  double t817;
  double t818;
  double t825;
  double t826;
  double t827;
  double t838;
  double t839;
  double t840;
  double t841;
  double t842;
  double t843;
  double t844;
  double t845;
  double t846;
  double t847;
  double t848;
  double t849;
  double t850;
  double t823;
  double t824;
  double t828;
  double t829;
  double t830;
  double t831;
  double t832;
  double t833;
  double t834;
  double t835;
  double t836;
  double t837;
  double t851;
  double t852;
  double t853;
  t333 = Cos(var1[2]);
  t304 = Cos(var1[3]);
  t322 = Sin(var1[2]);
  t335 = Sin(var1[3]);
  t303 = Cos(var1[5]);
  t326 = -1.*t304*t322;
  t340 = -1.*t333*t335;
  t341 = t326 + t340;
  t343 = t303*t341;
  t345 = t333*t304;
  t346 = -1.*t322*t335;
  t349 = t345 + t346;
  t360 = Sin(var1[5]);
  t361 = -1.*t349*t360;
  t368 = t343 + t361;
  t373 = Cos(var1[7]);
  t375 = -1.*t303*t349;
  t378 = -1.*t341*t360;
  t380 = t375 + t378;
  t381 = Sin(var1[7]);
  t369 = -0.4*t368;
  t374 = t373*t368;
  t382 = t380*t381;
  t383 = t374 + t382;
  t384 = -0.025*t383;
  t386 = t373*t380;
  t388 = -1.*t368*t381;
  t390 = t386 + t388;
  t391 = -0.075*t390;
  t393 = t369 + t384 + t391;
  t399 = t304*t322;
  t402 = t333*t335;
  t406 = t399 + t402;
  t417 = t303*t349;
  t418 = -1.*t406*t360;
  t419 = t417 + t418;
  t411 = -1.*t303*t406;
  t415 = t411 + t361;
  t416 = t373*t415;
  t453 = t406*t360;
  t454 = t375 + t453;
  t429 = -1.*t415*t381;
  t482 = t341*t360;
  t483 = t417 + t482;
  t487 = -1.*t483*t381;
  t488 = t374 + t487;
  t489 = -0.025*t488;
  t490 = -1.*t373*t483;
  t492 = t490 + t388;
  t494 = -0.075*t492;
  t499 = t489 + t494;
  t420 = -1.*t419*t381;
  t424 = t416 + t420;
  t425 = -0.025*t424;
  t426 = -1.*t373*t419;
  t438 = t426 + t429;
  t439 = -0.075*t438;
  t441 = t425 + t439;
  t503 = t303*t406;
  t507 = t349*t360;
  t510 = t503 + t507;
  t560 = -1.*t333*t304;
  t561 = t322*t335;
  t562 = t560 + t561;
  t563 = t562*t360;
  t564 = t343 + t563;
  t570 = t303*t562;
  t574 = t570 + t378;
  t559 = -0.4*t341;
  t565 = -0.4*t564;
  t566 = t373*t564;
  t575 = t574*t381;
  t577 = t566 + t575;
  t579 = -0.025*t577;
  t580 = t373*t574;
  t582 = -1.*t564*t381;
  t583 = t580 + t582;
  t584 = -0.075*t583;
  t585 = t559 + t565 + t579 + t584;
  t556 = var2[5]*t393;
  t558 = var2[7]*t499;
  t589 = var2[2]*t585;
  t590 = var2[3]*t585;
  t591 = t556 + t558 + t589 + t590;
  t600 = -1.*t380*t381;
  t610 = -1.*t303*t341;
  t611 = t610 + t507;
  t646 = -1.*t562*t360;
  t652 = t610 + t646;
  t642 = -0.4*t574;
  t653 = t373*t652;
  t655 = -1.*t574*t381;
  t656 = t653 + t655;
  t657 = -0.075*t656;
  t658 = t652*t381;
  t660 = t580 + t658;
  t661 = -0.025*t660;
  t662 = t642 + t657 + t661;
  t599 = -1.*t373*t368;
  t601 = t599 + t600;
  t602 = -0.075*t601;
  t603 = -0.025*t390;
  t604 = t602 + t603;
  t680 = -1.*t373*t564;
  t681 = t680 + t655;
  t682 = -0.075*t681;
  t684 = -0.025*t583;
  t685 = t682 + t684;
  t695 = t570 + t453;
  t697 = t503 + t646;
  t694 = -0.4*t562;
  t696 = -0.4*t695;
  t698 = t373*t697;
  t699 = -1.*t695*t381;
  t701 = t698 + t699;
  t702 = -0.075*t701;
  t703 = t373*t695;
  t704 = t697*t381;
  t705 = t703 + t704;
  t706 = -0.025*t705;
  t707 = t694 + t696 + t702 + t706;
  t693 = var2[5]*t662;
  t711 = var2[2]*t707;
  t712 = var2[3]*t707;
  t713 = var2[7]*t685;
  t714 = t693 + t711 + t712 + t713;
  t720 = t373*t483;
  t721 = t368*t381;
  t722 = t720 + t721;
  t668 = t483*t381;
  t669 = t599 + t668;
  t728 = Power(t722,2);
  t730 = -1.*t373*t380;
  t734 = t730 + t721;
  t735 = 2.*t669*t734;
  t738 = 2.*t383*t722;
  t740 = t735 + t738;
  t741 = Power(t669,2);
  t742 = t741 + t728;
  t743 = Power(t742,-2);
  t719 = Power(t488,2);
  t729 = 1/Sqrt(t728);
  t750 = 1/t742;
  t745 = Sqrt(t728);
  t749 = Power(t728,-1.5);
  t761 = Power(t383,2);
  t616 = t611*t381;
  t618 = t386 + t616;
  t773 = -1.*t373*t574;
  t774 = t564*t381;
  t775 = t773 + t774;
  t772 = -1.*t577*t488*t722*t729*t740*t743;
  t776 = -1.*t745*t775*t740*t743;
  t777 = -1.*t383*t577*t488*t728*t749*t750;
  t778 = t383*t577*t488*t729*t750;
  t779 = t577*t390*t722*t729*t750;
  t780 = -1.*t373*t652;
  t781 = t780 + t575;
  t782 = t781*t745*t750;
  t783 = t488*t722*t729*t660*t750;
  t784 = t383*t722*t729*t775*t750;
  t785 = t772 + t776 + t777 + t778 + t779 + t782 + t783 + t784;
  t790 = 2.*t488*t722;
  t791 = 2.*t669*t722;
  t792 = t790 + t791;
  t752 = -1.*t383*t719*t728*t749*t750;
  t753 = t383*t719*t729*t750;
  t756 = t383*t745*t750;
  t802 = Power(t488,3);
  t810 = -1.*t577*t488*t722*t729*t792*t743;
  t811 = -1.*t745*t775*t792*t743;
  t812 = -1.*t577*t719*t728*t749*t750;
  t813 = t577*t719*t729*t750;
  t814 = t577*t492*t722*t729*t750;
  t815 = t577*t745*t750;
  t816 = t488*t722*t729*t583*t750;
  t817 = t488*t722*t729*t775*t750;
  t818 = t810 + t811 + t812 + t813 + t814 + t815 + t816 + t817;
  t825 = 2.*t577*t722;
  t826 = 2.*t669*t775;
  t827 = t825 + t826;
  t838 = Power(t577,2);
  t839 = -1.*t838*t488*t728*t749*t750;
  t840 = t838*t488*t729*t750;
  t841 = -1.*t373*t697;
  t842 = t695*t381;
  t843 = t841 + t842;
  t844 = t843*t745*t750;
  t845 = t488*t722*t729*t705*t750;
  t846 = t577*t722*t729*t583*t750;
  t847 = t577*t722*t729*t775*t750;
  t848 = -1.*t577*t488*t722*t729*t743*t827;
  t849 = -1.*t745*t775*t743*t827;
  t850 = t839 + t840 + t844 + t845 + t846 + t847 + t848 + t849;
  t823 = t577*t734*t722*t729*t750;
  t824 = t383*t722*t729*t583*t750;
  t828 = -1.*t383*t488*t722*t729*t743*t827;
  t829 = -1.*t734*t745*t743*t827;
  t830 = t777 + t778 + t823 + t782 + t783 + t824 + t828 + t829;
  t831 = var2[5]*t830;
  t832 = t577*t728*t729*t750;
  t833 = 2.*t488*t722*t729*t583*t750;
  t834 = -1.*t719*t722*t729*t743*t827;
  t835 = -1.*t722*t745*t743*t827;
  t836 = t812 + t813 + t832 + t815 + t833 + t834 + t835;
  t837 = var2[7]*t836;
  t851 = var2[2]*t850;
  t852 = var2[3]*t850;
  t853 = t831 + t837 + t851 + t852;
  p_output1[0]=t591*var2[2] + t591*var2[3] + var2[5]*(t393*var2[2] + t393*var2[3] + (-0.4*t415 - 0.075*(t429 + t373*t454) - 0.025*(t416 + t381*t454))*var2[5] + t441*var2[7]) + var2[7]*(t499*var2[2] + t499*var2[3] + t441*var2[5] + (-0.025*(t420 - 1.*t373*t510) - 0.075*(t426 + t381*t510))*var2[7]);
  p_output1[1]=t714*var2[2] + t714*var2[3] + var2[5]*(t662*var2[2] + t662*var2[3] + (-0.4*t380 - 0.075*(t600 + t373*t611) - 0.025*t618)*var2[5] + t604*var2[7]) + var2[7]*(t685*var2[2] + t685*var2[3] + t604*var2[5] + (-0.025*t492 - 0.075*t669)*var2[7]);
  p_output1[2]=t853*var2[2] + t853*var2[3] + var2[5]*(t785*var2[2] + t785*var2[3] + (-1.*t383*t488*t722*t729*t740*t743 - 1.*t734*t740*t743*t745 + t383*t390*t722*t729*t750 + t488*t618*t722*t729*t750 + t383*t722*t729*t734*t750 + (t382 - 1.*t373*t611)*t745*t750 + t488*t729*t750*t761 - 1.*t488*t728*t749*t750*t761)*var2[5] + (-1.*t719*t722*t729*t740*t743 - 1.*t722*t740*t743*t745 + 2.*t390*t488*t722*t729*t750 + t383*t728*t729*t750 + t752 + t753 + t756)*var2[7]) + var2[7]*(t818*var2[2] + t818*var2[3] + (t390*t488*t722*t729*t750 + t383*t492*t722*t729*t750 + t488*t722*t729*t734*t750 + t752 + t753 + t756 - 1.*t383*t488*t722*t729*t743*t792 - 1.*t734*t743*t745*t792)*var2[5] + (2.*t488*t492*t722*t729*t750 + t488*t728*t729*t750 + t488*t745*t750 - 1.*t719*t722*t729*t743*t792 - 1.*t722*t743*t745*t792 + t729*t750*t802 - 1.*t728*t749*t750*t802)*var2[7]);
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
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 9 && ncols == 1) && 
      !(mrows == 1 && ncols == 9))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "jj_Rheel_pose_func.hh"

namespace SymFunction
{

void jj_Rheel_pose_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
