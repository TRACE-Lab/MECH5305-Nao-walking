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
  double t249;
  double t216;
  double t231;
  double t251;
  double t213;
  double t234;
  double t256;
  double t257;
  double t259;
  double t263;
  double t264;
  double t265;
  double t272;
  double t274;
  double t280;
  double t284;
  double t289;
  double t290;
  double t292;
  double t293;
  double t281;
  double t287;
  double t294;
  double t295;
  double t296;
  double t297;
  double t298;
  double t299;
  double t300;
  double t301;
  double t305;
  double t306;
  double t310;
  double t316;
  double t317;
  double t318;
  double t313;
  double t314;
  double t315;
  double t330;
  double t331;
  double t324;
  double t349;
  double t350;
  double t351;
  double t352;
  double t353;
  double t354;
  double t355;
  double t356;
  double t359;
  double t319;
  double t321;
  double t322;
  double t323;
  double t325;
  double t326;
  double t327;
  double t363;
  double t364;
  double t367;
  double t385;
  double t386;
  double t387;
  double t388;
  double t389;
  double t393;
  double t394;
  double t384;
  double t390;
  double t391;
  double t395;
  double t396;
  double t398;
  double t399;
  double t400;
  double t401;
  double t402;
  double t403;
  double t382;
  double t383;
  double t404;
  double t405;
  double t406;
  double t414;
  double t421;
  double t422;
  double t443;
  double t448;
  double t441;
  double t449;
  double t451;
  double t452;
  double t453;
  double t454;
  double t456;
  double t457;
  double t458;
  double t413;
  double t415;
  double t416;
  double t417;
  double t418;
  double t476;
  double t477;
  double t478;
  double t480;
  double t481;
  double t491;
  double t493;
  double t490;
  double t492;
  double t494;
  double t495;
  double t497;
  double t498;
  double t499;
  double t500;
  double t501;
  double t502;
  double t503;
  double t489;
  double t507;
  double t508;
  double t509;
  double t510;
  double t516;
  double t517;
  double t518;
  double t464;
  double t465;
  double t524;
  double t526;
  double t530;
  double t531;
  double t534;
  double t536;
  double t537;
  double t538;
  double t539;
  double t515;
  double t525;
  double t546;
  double t541;
  double t545;
  double t557;
  double t426;
  double t428;
  double t569;
  double t570;
  double t571;
  double t568;
  double t572;
  double t573;
  double t574;
  double t575;
  double t576;
  double t577;
  double t578;
  double t579;
  double t580;
  double t581;
  double t586;
  double t587;
  double t588;
  double t548;
  double t549;
  double t552;
  double t598;
  double t606;
  double t607;
  double t608;
  double t609;
  double t610;
  double t611;
  double t612;
  double t613;
  double t614;
  double t621;
  double t622;
  double t623;
  double t634;
  double t635;
  double t636;
  double t637;
  double t638;
  double t639;
  double t640;
  double t641;
  double t642;
  double t643;
  double t644;
  double t645;
  double t646;
  double t619;
  double t620;
  double t624;
  double t625;
  double t626;
  double t627;
  double t628;
  double t629;
  double t630;
  double t631;
  double t632;
  double t633;
  double t647;
  double t648;
  double t649;
  t249 = Cos(var1[2]);
  t216 = Cos(var1[4]);
  t231 = Sin(var1[2]);
  t251 = Sin(var1[4]);
  t213 = Cos(var1[6]);
  t234 = -1.*t216*t231;
  t256 = -1.*t249*t251;
  t257 = t234 + t256;
  t259 = t213*t257;
  t263 = t249*t216;
  t264 = -1.*t231*t251;
  t265 = t263 + t264;
  t272 = Sin(var1[6]);
  t274 = -1.*t265*t272;
  t280 = t259 + t274;
  t284 = Cos(var1[8]);
  t289 = -1.*t213*t265;
  t290 = -1.*t257*t272;
  t292 = t289 + t290;
  t293 = Sin(var1[8]);
  t281 = -0.4*t280;
  t287 = t284*t280;
  t294 = t292*t293;
  t295 = t287 + t294;
  t296 = -0.025*t295;
  t297 = t284*t292;
  t298 = -1.*t280*t293;
  t299 = t297 + t298;
  t300 = -0.075*t299;
  t301 = t281 + t296 + t300;
  t305 = t216*t231;
  t306 = t249*t251;
  t310 = t305 + t306;
  t316 = t213*t265;
  t317 = -1.*t310*t272;
  t318 = t316 + t317;
  t313 = -1.*t213*t310;
  t314 = t313 + t274;
  t315 = t284*t314;
  t330 = t310*t272;
  t331 = t289 + t330;
  t324 = -1.*t314*t293;
  t349 = t257*t272;
  t350 = t316 + t349;
  t351 = -1.*t350*t293;
  t352 = t287 + t351;
  t353 = -0.025*t352;
  t354 = -1.*t284*t350;
  t355 = t354 + t298;
  t356 = -0.075*t355;
  t359 = t353 + t356;
  t319 = -1.*t318*t293;
  t321 = t315 + t319;
  t322 = -0.025*t321;
  t323 = -1.*t284*t318;
  t325 = t323 + t324;
  t326 = -0.075*t325;
  t327 = t322 + t326;
  t363 = t213*t310;
  t364 = t265*t272;
  t367 = t363 + t364;
  t385 = -1.*t249*t216;
  t386 = t231*t251;
  t387 = t385 + t386;
  t388 = t387*t272;
  t389 = t259 + t388;
  t393 = t213*t387;
  t394 = t393 + t290;
  t384 = -0.4*t257;
  t390 = -0.4*t389;
  t391 = t284*t389;
  t395 = t394*t293;
  t396 = t391 + t395;
  t398 = -0.025*t396;
  t399 = t284*t394;
  t400 = -1.*t389*t293;
  t401 = t399 + t400;
  t402 = -0.075*t401;
  t403 = t384 + t390 + t398 + t402;
  t382 = var2[6]*t301;
  t383 = var2[8]*t359;
  t404 = var2[2]*t403;
  t405 = var2[4]*t403;
  t406 = t382 + t383 + t404 + t405;
  t414 = -1.*t292*t293;
  t421 = -1.*t213*t257;
  t422 = t421 + t364;
  t443 = -1.*t387*t272;
  t448 = t421 + t443;
  t441 = -0.4*t394;
  t449 = t284*t448;
  t451 = -1.*t394*t293;
  t452 = t449 + t451;
  t453 = -0.075*t452;
  t454 = t448*t293;
  t456 = t399 + t454;
  t457 = -0.025*t456;
  t458 = t441 + t453 + t457;
  t413 = -1.*t284*t280;
  t415 = t413 + t414;
  t416 = -0.075*t415;
  t417 = -0.025*t299;
  t418 = t416 + t417;
  t476 = -1.*t284*t389;
  t477 = t476 + t451;
  t478 = -0.075*t477;
  t480 = -0.025*t401;
  t481 = t478 + t480;
  t491 = t393 + t330;
  t493 = t363 + t443;
  t490 = -0.4*t387;
  t492 = -0.4*t491;
  t494 = t284*t493;
  t495 = -1.*t491*t293;
  t497 = t494 + t495;
  t498 = -0.075*t497;
  t499 = t284*t491;
  t500 = t493*t293;
  t501 = t499 + t500;
  t502 = -0.025*t501;
  t503 = t490 + t492 + t498 + t502;
  t489 = var2[6]*t458;
  t507 = var2[2]*t503;
  t508 = var2[4]*t503;
  t509 = var2[8]*t481;
  t510 = t489 + t507 + t508 + t509;
  t516 = t284*t350;
  t517 = t280*t293;
  t518 = t516 + t517;
  t464 = t350*t293;
  t465 = t413 + t464;
  t524 = Power(t518,2);
  t526 = -1.*t284*t292;
  t530 = t526 + t517;
  t531 = 2.*t465*t530;
  t534 = 2.*t295*t518;
  t536 = t531 + t534;
  t537 = Power(t465,2);
  t538 = t537 + t524;
  t539 = Power(t538,-2);
  t515 = Power(t352,2);
  t525 = 1/Sqrt(t524);
  t546 = 1/t538;
  t541 = Sqrt(t524);
  t545 = Power(t524,-1.5);
  t557 = Power(t295,2);
  t426 = t422*t293;
  t428 = t297 + t426;
  t569 = -1.*t284*t394;
  t570 = t389*t293;
  t571 = t569 + t570;
  t568 = -1.*t396*t352*t518*t525*t536*t539;
  t572 = -1.*t541*t571*t536*t539;
  t573 = -1.*t295*t396*t352*t524*t545*t546;
  t574 = t295*t396*t352*t525*t546;
  t575 = t396*t299*t518*t525*t546;
  t576 = -1.*t284*t448;
  t577 = t576 + t395;
  t578 = t577*t541*t546;
  t579 = t352*t518*t525*t456*t546;
  t580 = t295*t518*t525*t571*t546;
  t581 = t568 + t572 + t573 + t574 + t575 + t578 + t579 + t580;
  t586 = 2.*t352*t518;
  t587 = 2.*t465*t518;
  t588 = t586 + t587;
  t548 = -1.*t295*t515*t524*t545*t546;
  t549 = t295*t515*t525*t546;
  t552 = t295*t541*t546;
  t598 = Power(t352,3);
  t606 = -1.*t396*t352*t518*t525*t588*t539;
  t607 = -1.*t541*t571*t588*t539;
  t608 = -1.*t396*t515*t524*t545*t546;
  t609 = t396*t515*t525*t546;
  t610 = t396*t355*t518*t525*t546;
  t611 = t396*t541*t546;
  t612 = t352*t518*t525*t401*t546;
  t613 = t352*t518*t525*t571*t546;
  t614 = t606 + t607 + t608 + t609 + t610 + t611 + t612 + t613;
  t621 = 2.*t396*t518;
  t622 = 2.*t465*t571;
  t623 = t621 + t622;
  t634 = Power(t396,2);
  t635 = -1.*t634*t352*t524*t545*t546;
  t636 = t634*t352*t525*t546;
  t637 = -1.*t284*t493;
  t638 = t491*t293;
  t639 = t637 + t638;
  t640 = t639*t541*t546;
  t641 = t352*t518*t525*t501*t546;
  t642 = t396*t518*t525*t401*t546;
  t643 = t396*t518*t525*t571*t546;
  t644 = -1.*t396*t352*t518*t525*t539*t623;
  t645 = -1.*t541*t571*t539*t623;
  t646 = t635 + t636 + t640 + t641 + t642 + t643 + t644 + t645;
  t619 = t396*t530*t518*t525*t546;
  t620 = t295*t518*t525*t401*t546;
  t624 = -1.*t295*t352*t518*t525*t539*t623;
  t625 = -1.*t530*t541*t539*t623;
  t626 = t573 + t574 + t619 + t578 + t579 + t620 + t624 + t625;
  t627 = var2[6]*t626;
  t628 = t396*t524*t525*t546;
  t629 = 2.*t352*t518*t525*t401*t546;
  t630 = -1.*t515*t518*t525*t539*t623;
  t631 = -1.*t518*t541*t539*t623;
  t632 = t608 + t609 + t628 + t611 + t629 + t630 + t631;
  t633 = var2[8]*t632;
  t647 = var2[2]*t646;
  t648 = var2[4]*t646;
  t649 = t627 + t633 + t647 + t648;
  p_output1[0]=t406*var2[2] + t406*var2[4] + var2[6]*(t301*var2[2] + t301*var2[4] + (-0.4*t314 - 0.075*(t324 + t284*t331) - 0.025*(t315 + t293*t331))*var2[6] + t327*var2[8]) + var2[8]*(t359*var2[2] + t359*var2[4] + t327*var2[6] + (-0.025*(t319 - 1.*t284*t367) - 0.075*(t323 + t293*t367))*var2[8]);
  p_output1[1]=t510*var2[2] + t510*var2[4] + var2[6]*(t458*var2[2] + t458*var2[4] + (-0.4*t292 - 0.075*(t414 + t284*t422) - 0.025*t428)*var2[6] + t418*var2[8]) + var2[8]*(t481*var2[2] + t481*var2[4] + t418*var2[6] + (-0.025*t355 - 0.075*t465)*var2[8]);
  p_output1[2]=t649*var2[2] + t649*var2[4] + var2[6]*(t581*var2[2] + t581*var2[4] + (-1.*t295*t352*t518*t525*t536*t539 - 1.*t530*t536*t539*t541 + t295*t299*t518*t525*t546 + t352*t428*t518*t525*t546 + t295*t518*t525*t530*t546 + (t294 - 1.*t284*t422)*t541*t546 + t352*t525*t546*t557 - 1.*t352*t524*t545*t546*t557)*var2[6] + (-1.*t515*t518*t525*t536*t539 - 1.*t518*t536*t539*t541 + 2.*t299*t352*t518*t525*t546 + t295*t524*t525*t546 + t548 + t549 + t552)*var2[8]) + var2[8]*(t614*var2[2] + t614*var2[4] + (t299*t352*t518*t525*t546 + t295*t355*t518*t525*t546 + t352*t518*t525*t530*t546 + t548 + t549 + t552 - 1.*t295*t352*t518*t525*t539*t588 - 1.*t530*t539*t541*t588)*var2[6] + (2.*t352*t355*t518*t525*t546 + t352*t524*t525*t546 + t352*t541*t546 - 1.*t515*t518*t525*t539*t588 - 1.*t518*t539*t541*t588 + t525*t546*t598 - 1.*t524*t545*t546*t598)*var2[8]);
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

#include "jj_Lheel_pose_func.hh"

namespace SymFunction
{

void jj_Lheel_pose_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
