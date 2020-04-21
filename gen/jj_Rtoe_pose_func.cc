/*
 * Automatically Generated from Mathematica.
 * Mon 22 Oct 2018 15:53:06 GMT-04:00
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
  double t296;
  double t263;
  double t281;
  double t297;
  double t259;
  double t287;
  double t300;
  double t301;
  double t303;
  double t304;
  double t305;
  double t306;
  double t315;
  double t316;
  double t321;
  double t325;
  double t327;
  double t328;
  double t329;
  double t330;
  double t322;
  double t326;
  double t331;
  double t332;
  double t333;
  double t335;
  double t337;
  double t339;
  double t340;
  double t341;
  double t346;
  double t349;
  double t353;
  double t361;
  double t362;
  double t363;
  double t356;
  double t359;
  double t360;
  double t381;
  double t382;
  double t372;
  double t402;
  double t403;
  double t404;
  double t405;
  double t406;
  double t407;
  double t409;
  double t411;
  double t415;
  double t364;
  double t368;
  double t369;
  double t370;
  double t373;
  double t374;
  double t375;
  double t419;
  double t420;
  double t423;
  double t458;
  double t459;
  double t460;
  double t461;
  double t462;
  double t468;
  double t472;
  double t457;
  double t463;
  double t464;
  double t473;
  double t475;
  double t477;
  double t478;
  double t480;
  double t481;
  double t482;
  double t483;
  double t454;
  double t456;
  double t487;
  double t488;
  double t489;
  double t498;
  double t508;
  double t509;
  double t544;
  double t550;
  double t540;
  double t551;
  double t553;
  double t554;
  double t555;
  double t556;
  double t558;
  double t559;
  double t560;
  double t497;
  double t499;
  double t500;
  double t501;
  double t502;
  double t578;
  double t579;
  double t580;
  double t582;
  double t583;
  double t593;
  double t595;
  double t592;
  double t594;
  double t596;
  double t597;
  double t599;
  double t600;
  double t601;
  double t602;
  double t603;
  double t604;
  double t605;
  double t591;
  double t609;
  double t610;
  double t611;
  double t612;
  double t618;
  double t619;
  double t620;
  double t566;
  double t567;
  double t626;
  double t628;
  double t632;
  double t633;
  double t636;
  double t638;
  double t639;
  double t640;
  double t641;
  double t617;
  double t627;
  double t648;
  double t643;
  double t647;
  double t659;
  double t514;
  double t516;
  double t671;
  double t672;
  double t673;
  double t670;
  double t674;
  double t675;
  double t676;
  double t677;
  double t678;
  double t679;
  double t680;
  double t681;
  double t682;
  double t683;
  double t688;
  double t689;
  double t690;
  double t650;
  double t651;
  double t654;
  double t700;
  double t708;
  double t709;
  double t710;
  double t711;
  double t712;
  double t713;
  double t714;
  double t715;
  double t716;
  double t723;
  double t724;
  double t725;
  double t736;
  double t737;
  double t738;
  double t739;
  double t740;
  double t741;
  double t742;
  double t743;
  double t744;
  double t745;
  double t746;
  double t747;
  double t748;
  double t721;
  double t722;
  double t726;
  double t727;
  double t728;
  double t729;
  double t730;
  double t731;
  double t732;
  double t733;
  double t734;
  double t735;
  double t749;
  double t750;
  double t751;
  t296 = Cos(var1[2]);
  t263 = Cos(var1[3]);
  t281 = Sin(var1[2]);
  t297 = Sin(var1[3]);
  t259 = Cos(var1[5]);
  t287 = -1.*t263*t281;
  t300 = -1.*t296*t297;
  t301 = t287 + t300;
  t303 = t259*t301;
  t304 = t296*t263;
  t305 = -1.*t281*t297;
  t306 = t304 + t305;
  t315 = Sin(var1[5]);
  t316 = -1.*t306*t315;
  t321 = t303 + t316;
  t325 = Cos(var1[7]);
  t327 = -1.*t259*t306;
  t328 = -1.*t301*t315;
  t329 = t327 + t328;
  t330 = Sin(var1[7]);
  t322 = -0.4*t321;
  t326 = t325*t321;
  t331 = t329*t330;
  t332 = t326 + t331;
  t333 = -0.025*t332;
  t335 = t325*t329;
  t337 = -1.*t321*t330;
  t339 = t335 + t337;
  t340 = 0.075*t339;
  t341 = t322 + t333 + t340;
  t346 = t263*t281;
  t349 = t296*t297;
  t353 = t346 + t349;
  t361 = t259*t306;
  t362 = -1.*t353*t315;
  t363 = t361 + t362;
  t356 = -1.*t259*t353;
  t359 = t356 + t316;
  t360 = t325*t359;
  t381 = t353*t315;
  t382 = t327 + t381;
  t372 = -1.*t359*t330;
  t402 = t301*t315;
  t403 = t361 + t402;
  t404 = -1.*t403*t330;
  t405 = t326 + t404;
  t406 = -0.025*t405;
  t407 = -1.*t325*t403;
  t409 = t407 + t337;
  t411 = 0.075*t409;
  t415 = t406 + t411;
  t364 = -1.*t363*t330;
  t368 = t360 + t364;
  t369 = -0.025*t368;
  t370 = -1.*t325*t363;
  t373 = t370 + t372;
  t374 = 0.075*t373;
  t375 = t369 + t374;
  t419 = t259*t353;
  t420 = t306*t315;
  t423 = t419 + t420;
  t458 = -1.*t296*t263;
  t459 = t281*t297;
  t460 = t458 + t459;
  t461 = t460*t315;
  t462 = t303 + t461;
  t468 = t259*t460;
  t472 = t468 + t328;
  t457 = -0.4*t301;
  t463 = -0.4*t462;
  t464 = t325*t462;
  t473 = t472*t330;
  t475 = t464 + t473;
  t477 = -0.025*t475;
  t478 = t325*t472;
  t480 = -1.*t462*t330;
  t481 = t478 + t480;
  t482 = 0.075*t481;
  t483 = t457 + t463 + t477 + t482;
  t454 = var2[5]*t341;
  t456 = var2[7]*t415;
  t487 = var2[2]*t483;
  t488 = var2[3]*t483;
  t489 = t454 + t456 + t487 + t488;
  t498 = -1.*t329*t330;
  t508 = -1.*t259*t301;
  t509 = t508 + t420;
  t544 = -1.*t460*t315;
  t550 = t508 + t544;
  t540 = -0.4*t472;
  t551 = t325*t550;
  t553 = -1.*t472*t330;
  t554 = t551 + t553;
  t555 = 0.075*t554;
  t556 = t550*t330;
  t558 = t478 + t556;
  t559 = -0.025*t558;
  t560 = t540 + t555 + t559;
  t497 = -1.*t325*t321;
  t499 = t497 + t498;
  t500 = 0.075*t499;
  t501 = -0.025*t339;
  t502 = t500 + t501;
  t578 = -1.*t325*t462;
  t579 = t578 + t553;
  t580 = 0.075*t579;
  t582 = -0.025*t481;
  t583 = t580 + t582;
  t593 = t468 + t381;
  t595 = t419 + t544;
  t592 = -0.4*t460;
  t594 = -0.4*t593;
  t596 = t325*t595;
  t597 = -1.*t593*t330;
  t599 = t596 + t597;
  t600 = 0.075*t599;
  t601 = t325*t593;
  t602 = t595*t330;
  t603 = t601 + t602;
  t604 = -0.025*t603;
  t605 = t592 + t594 + t600 + t604;
  t591 = var2[5]*t560;
  t609 = var2[2]*t605;
  t610 = var2[3]*t605;
  t611 = var2[7]*t583;
  t612 = t591 + t609 + t610 + t611;
  t618 = t325*t403;
  t619 = t321*t330;
  t620 = t618 + t619;
  t566 = t403*t330;
  t567 = t497 + t566;
  t626 = Power(t620,2);
  t628 = -1.*t325*t329;
  t632 = t628 + t619;
  t633 = 2.*t567*t632;
  t636 = 2.*t332*t620;
  t638 = t633 + t636;
  t639 = Power(t567,2);
  t640 = t639 + t626;
  t641 = Power(t640,-2);
  t617 = Power(t405,2);
  t627 = 1/Sqrt(t626);
  t648 = 1/t640;
  t643 = Sqrt(t626);
  t647 = Power(t626,-1.5);
  t659 = Power(t332,2);
  t514 = t509*t330;
  t516 = t335 + t514;
  t671 = -1.*t325*t472;
  t672 = t462*t330;
  t673 = t671 + t672;
  t670 = -1.*t475*t405*t620*t627*t638*t641;
  t674 = -1.*t643*t673*t638*t641;
  t675 = -1.*t332*t475*t405*t626*t647*t648;
  t676 = t332*t475*t405*t627*t648;
  t677 = t475*t339*t620*t627*t648;
  t678 = -1.*t325*t550;
  t679 = t678 + t473;
  t680 = t679*t643*t648;
  t681 = t405*t620*t627*t558*t648;
  t682 = t332*t620*t627*t673*t648;
  t683 = t670 + t674 + t675 + t676 + t677 + t680 + t681 + t682;
  t688 = 2.*t405*t620;
  t689 = 2.*t567*t620;
  t690 = t688 + t689;
  t650 = -1.*t332*t617*t626*t647*t648;
  t651 = t332*t617*t627*t648;
  t654 = t332*t643*t648;
  t700 = Power(t405,3);
  t708 = -1.*t475*t405*t620*t627*t690*t641;
  t709 = -1.*t643*t673*t690*t641;
  t710 = -1.*t475*t617*t626*t647*t648;
  t711 = t475*t617*t627*t648;
  t712 = t475*t409*t620*t627*t648;
  t713 = t475*t643*t648;
  t714 = t405*t620*t627*t481*t648;
  t715 = t405*t620*t627*t673*t648;
  t716 = t708 + t709 + t710 + t711 + t712 + t713 + t714 + t715;
  t723 = 2.*t475*t620;
  t724 = 2.*t567*t673;
  t725 = t723 + t724;
  t736 = Power(t475,2);
  t737 = -1.*t736*t405*t626*t647*t648;
  t738 = t736*t405*t627*t648;
  t739 = -1.*t325*t595;
  t740 = t593*t330;
  t741 = t739 + t740;
  t742 = t741*t643*t648;
  t743 = t405*t620*t627*t603*t648;
  t744 = t475*t620*t627*t481*t648;
  t745 = t475*t620*t627*t673*t648;
  t746 = -1.*t475*t405*t620*t627*t641*t725;
  t747 = -1.*t643*t673*t641*t725;
  t748 = t737 + t738 + t742 + t743 + t744 + t745 + t746 + t747;
  t721 = t475*t632*t620*t627*t648;
  t722 = t332*t620*t627*t481*t648;
  t726 = -1.*t332*t405*t620*t627*t641*t725;
  t727 = -1.*t632*t643*t641*t725;
  t728 = t675 + t676 + t721 + t680 + t681 + t722 + t726 + t727;
  t729 = var2[5]*t728;
  t730 = t475*t626*t627*t648;
  t731 = 2.*t405*t620*t627*t481*t648;
  t732 = -1.*t617*t620*t627*t641*t725;
  t733 = -1.*t620*t643*t641*t725;
  t734 = t710 + t711 + t730 + t713 + t731 + t732 + t733;
  t735 = var2[7]*t734;
  t749 = var2[2]*t748;
  t750 = var2[3]*t748;
  t751 = t729 + t735 + t749 + t750;
  p_output1[0]=t489*var2[2] + t489*var2[3] + var2[5]*(t341*var2[2] + t341*var2[3] + (-0.4*t359 + 0.075*(t372 + t325*t382) - 0.025*(t360 + t330*t382))*var2[5] + t375*var2[7]) + var2[7]*(t415*var2[2] + t415*var2[3] + t375*var2[5] + (-0.025*(t364 - 1.*t325*t423) + 0.075*(t370 + t330*t423))*var2[7]);
  p_output1[1]=t612*var2[2] + t612*var2[3] + var2[5]*(t560*var2[2] + t560*var2[3] + (-0.4*t329 + 0.075*(t498 + t325*t509) - 0.025*t516)*var2[5] + t502*var2[7]) + var2[7]*(t583*var2[2] + t583*var2[3] + t502*var2[5] + (-0.025*t409 + 0.075*t567)*var2[7]);
  p_output1[2]=t751*var2[2] + t751*var2[3] + var2[5]*(t683*var2[2] + t683*var2[3] + (-1.*t332*t405*t620*t627*t638*t641 - 1.*t632*t638*t641*t643 + t332*t339*t620*t627*t648 + t405*t516*t620*t627*t648 + t332*t620*t627*t632*t648 + (t331 - 1.*t325*t509)*t643*t648 + t405*t627*t648*t659 - 1.*t405*t626*t647*t648*t659)*var2[5] + (-1.*t617*t620*t627*t638*t641 - 1.*t620*t638*t641*t643 + 2.*t339*t405*t620*t627*t648 + t332*t626*t627*t648 + t650 + t651 + t654)*var2[7]) + var2[7]*(t716*var2[2] + t716*var2[3] + (t339*t405*t620*t627*t648 + t332*t409*t620*t627*t648 + t405*t620*t627*t632*t648 + t650 + t651 + t654 - 1.*t332*t405*t620*t627*t641*t690 - 1.*t632*t641*t643*t690)*var2[5] + (2.*t405*t409*t620*t627*t648 + t405*t626*t627*t648 + t405*t643*t648 - 1.*t617*t620*t627*t641*t690 - 1.*t620*t641*t643*t690 + t627*t648*t700 - 1.*t626*t647*t648*t700)*var2[7]);
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

#include "jj_Rtoe_pose_func.hh"

namespace SymFunction
{

void jj_Rtoe_pose_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
