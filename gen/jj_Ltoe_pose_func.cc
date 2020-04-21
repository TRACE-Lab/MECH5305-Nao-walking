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
  double t192;
  double t169;
  double t175;
  double t198;
  double t135;
  double t185;
  double t201;
  double t210;
  double t213;
  double t216;
  double t218;
  double t222;
  double t224;
  double t225;
  double t226;
  double t233;
  double t239;
  double t240;
  double t241;
  double t242;
  double t231;
  double t234;
  double t246;
  double t248;
  double t249;
  double t251;
  double t254;
  double t255;
  double t256;
  double t257;
  double t264;
  double t265;
  double t266;
  double t274;
  double t275;
  double t277;
  double t267;
  double t268;
  double t272;
  double t293;
  double t294;
  double t283;
  double t306;
  double t307;
  double t308;
  double t309;
  double t310;
  double t311;
  double t312;
  double t313;
  double t314;
  double t278;
  double t280;
  double t281;
  double t282;
  double t284;
  double t287;
  double t289;
  double t318;
  double t319;
  double t320;
  double t334;
  double t335;
  double t336;
  double t337;
  double t338;
  double t341;
  double t342;
  double t333;
  double t339;
  double t340;
  double t343;
  double t344;
  double t345;
  double t346;
  double t347;
  double t348;
  double t349;
  double t350;
  double t331;
  double t332;
  double t351;
  double t352;
  double t353;
  double t358;
  double t365;
  double t366;
  double t376;
  double t377;
  double t375;
  double t378;
  double t379;
  double t380;
  double t381;
  double t382;
  double t383;
  double t384;
  double t385;
  double t357;
  double t359;
  double t360;
  double t361;
  double t362;
  double t397;
  double t398;
  double t399;
  double t400;
  double t401;
  double t408;
  double t410;
  double t407;
  double t409;
  double t411;
  double t412;
  double t413;
  double t414;
  double t415;
  double t416;
  double t417;
  double t418;
  double t419;
  double t406;
  double t420;
  double t421;
  double t422;
  double t423;
  double t428;
  double t429;
  double t430;
  double t391;
  double t392;
  double t431;
  double t433;
  double t434;
  double t435;
  double t436;
  double t437;
  double t438;
  double t439;
  double t440;
  double t427;
  double t432;
  double t445;
  double t442;
  double t444;
  double t455;
  double t370;
  double t371;
  double t467;
  double t468;
  double t469;
  double t466;
  double t470;
  double t471;
  double t472;
  double t473;
  double t474;
  double t475;
  double t476;
  double t477;
  double t478;
  double t479;
  double t484;
  double t485;
  double t486;
  double t446;
  double t447;
  double t450;
  double t496;
  double t504;
  double t505;
  double t506;
  double t507;
  double t508;
  double t509;
  double t510;
  double t511;
  double t512;
  double t519;
  double t520;
  double t521;
  double t532;
  double t533;
  double t534;
  double t535;
  double t536;
  double t537;
  double t538;
  double t539;
  double t540;
  double t541;
  double t542;
  double t543;
  double t544;
  double t517;
  double t518;
  double t522;
  double t523;
  double t524;
  double t525;
  double t526;
  double t527;
  double t528;
  double t529;
  double t530;
  double t531;
  double t545;
  double t546;
  double t547;
  t192 = Cos(var1[2]);
  t169 = Cos(var1[4]);
  t175 = Sin(var1[2]);
  t198 = Sin(var1[4]);
  t135 = Cos(var1[6]);
  t185 = -1.*t169*t175;
  t201 = -1.*t192*t198;
  t210 = t185 + t201;
  t213 = t135*t210;
  t216 = t192*t169;
  t218 = -1.*t175*t198;
  t222 = t216 + t218;
  t224 = Sin(var1[6]);
  t225 = -1.*t222*t224;
  t226 = t213 + t225;
  t233 = Cos(var1[8]);
  t239 = -1.*t135*t222;
  t240 = -1.*t210*t224;
  t241 = t239 + t240;
  t242 = Sin(var1[8]);
  t231 = -0.4*t226;
  t234 = t233*t226;
  t246 = t241*t242;
  t248 = t234 + t246;
  t249 = -0.025*t248;
  t251 = t233*t241;
  t254 = -1.*t226*t242;
  t255 = t251 + t254;
  t256 = 0.075*t255;
  t257 = t231 + t249 + t256;
  t264 = t169*t175;
  t265 = t192*t198;
  t266 = t264 + t265;
  t274 = t135*t222;
  t275 = -1.*t266*t224;
  t277 = t274 + t275;
  t267 = -1.*t135*t266;
  t268 = t267 + t225;
  t272 = t233*t268;
  t293 = t266*t224;
  t294 = t239 + t293;
  t283 = -1.*t268*t242;
  t306 = t210*t224;
  t307 = t274 + t306;
  t308 = -1.*t307*t242;
  t309 = t234 + t308;
  t310 = -0.025*t309;
  t311 = -1.*t233*t307;
  t312 = t311 + t254;
  t313 = 0.075*t312;
  t314 = t310 + t313;
  t278 = -1.*t277*t242;
  t280 = t272 + t278;
  t281 = -0.025*t280;
  t282 = -1.*t233*t277;
  t284 = t282 + t283;
  t287 = 0.075*t284;
  t289 = t281 + t287;
  t318 = t135*t266;
  t319 = t222*t224;
  t320 = t318 + t319;
  t334 = -1.*t192*t169;
  t335 = t175*t198;
  t336 = t334 + t335;
  t337 = t336*t224;
  t338 = t213 + t337;
  t341 = t135*t336;
  t342 = t341 + t240;
  t333 = -0.4*t210;
  t339 = -0.4*t338;
  t340 = t233*t338;
  t343 = t342*t242;
  t344 = t340 + t343;
  t345 = -0.025*t344;
  t346 = t233*t342;
  t347 = -1.*t338*t242;
  t348 = t346 + t347;
  t349 = 0.075*t348;
  t350 = t333 + t339 + t345 + t349;
  t331 = var2[6]*t257;
  t332 = var2[8]*t314;
  t351 = var2[2]*t350;
  t352 = var2[4]*t350;
  t353 = t331 + t332 + t351 + t352;
  t358 = -1.*t241*t242;
  t365 = -1.*t135*t210;
  t366 = t365 + t319;
  t376 = -1.*t336*t224;
  t377 = t365 + t376;
  t375 = -0.4*t342;
  t378 = t233*t377;
  t379 = -1.*t342*t242;
  t380 = t378 + t379;
  t381 = 0.075*t380;
  t382 = t377*t242;
  t383 = t346 + t382;
  t384 = -0.025*t383;
  t385 = t375 + t381 + t384;
  t357 = -1.*t233*t226;
  t359 = t357 + t358;
  t360 = 0.075*t359;
  t361 = -0.025*t255;
  t362 = t360 + t361;
  t397 = -1.*t233*t338;
  t398 = t397 + t379;
  t399 = 0.075*t398;
  t400 = -0.025*t348;
  t401 = t399 + t400;
  t408 = t341 + t293;
  t410 = t318 + t376;
  t407 = -0.4*t336;
  t409 = -0.4*t408;
  t411 = t233*t410;
  t412 = -1.*t408*t242;
  t413 = t411 + t412;
  t414 = 0.075*t413;
  t415 = t233*t408;
  t416 = t410*t242;
  t417 = t415 + t416;
  t418 = -0.025*t417;
  t419 = t407 + t409 + t414 + t418;
  t406 = var2[6]*t385;
  t420 = var2[2]*t419;
  t421 = var2[4]*t419;
  t422 = var2[8]*t401;
  t423 = t406 + t420 + t421 + t422;
  t428 = t233*t307;
  t429 = t226*t242;
  t430 = t428 + t429;
  t391 = t307*t242;
  t392 = t357 + t391;
  t431 = Power(t430,2);
  t433 = -1.*t233*t241;
  t434 = t433 + t429;
  t435 = 2.*t392*t434;
  t436 = 2.*t248*t430;
  t437 = t435 + t436;
  t438 = Power(t392,2);
  t439 = t438 + t431;
  t440 = Power(t439,-2);
  t427 = Power(t309,2);
  t432 = 1/Sqrt(t431);
  t445 = 1/t439;
  t442 = Sqrt(t431);
  t444 = Power(t431,-1.5);
  t455 = Power(t248,2);
  t370 = t366*t242;
  t371 = t251 + t370;
  t467 = -1.*t233*t342;
  t468 = t338*t242;
  t469 = t467 + t468;
  t466 = -1.*t344*t309*t430*t432*t437*t440;
  t470 = -1.*t442*t469*t437*t440;
  t471 = -1.*t248*t344*t309*t431*t444*t445;
  t472 = t248*t344*t309*t432*t445;
  t473 = t344*t255*t430*t432*t445;
  t474 = -1.*t233*t377;
  t475 = t474 + t343;
  t476 = t475*t442*t445;
  t477 = t309*t430*t432*t383*t445;
  t478 = t248*t430*t432*t469*t445;
  t479 = t466 + t470 + t471 + t472 + t473 + t476 + t477 + t478;
  t484 = 2.*t309*t430;
  t485 = 2.*t392*t430;
  t486 = t484 + t485;
  t446 = -1.*t248*t427*t431*t444*t445;
  t447 = t248*t427*t432*t445;
  t450 = t248*t442*t445;
  t496 = Power(t309,3);
  t504 = -1.*t344*t309*t430*t432*t486*t440;
  t505 = -1.*t442*t469*t486*t440;
  t506 = -1.*t344*t427*t431*t444*t445;
  t507 = t344*t427*t432*t445;
  t508 = t344*t312*t430*t432*t445;
  t509 = t344*t442*t445;
  t510 = t309*t430*t432*t348*t445;
  t511 = t309*t430*t432*t469*t445;
  t512 = t504 + t505 + t506 + t507 + t508 + t509 + t510 + t511;
  t519 = 2.*t344*t430;
  t520 = 2.*t392*t469;
  t521 = t519 + t520;
  t532 = Power(t344,2);
  t533 = -1.*t532*t309*t431*t444*t445;
  t534 = t532*t309*t432*t445;
  t535 = -1.*t233*t410;
  t536 = t408*t242;
  t537 = t535 + t536;
  t538 = t537*t442*t445;
  t539 = t309*t430*t432*t417*t445;
  t540 = t344*t430*t432*t348*t445;
  t541 = t344*t430*t432*t469*t445;
  t542 = -1.*t344*t309*t430*t432*t440*t521;
  t543 = -1.*t442*t469*t440*t521;
  t544 = t533 + t534 + t538 + t539 + t540 + t541 + t542 + t543;
  t517 = t344*t434*t430*t432*t445;
  t518 = t248*t430*t432*t348*t445;
  t522 = -1.*t248*t309*t430*t432*t440*t521;
  t523 = -1.*t434*t442*t440*t521;
  t524 = t471 + t472 + t517 + t476 + t477 + t518 + t522 + t523;
  t525 = var2[6]*t524;
  t526 = t344*t431*t432*t445;
  t527 = 2.*t309*t430*t432*t348*t445;
  t528 = -1.*t427*t430*t432*t440*t521;
  t529 = -1.*t430*t442*t440*t521;
  t530 = t506 + t507 + t526 + t509 + t527 + t528 + t529;
  t531 = var2[8]*t530;
  t545 = var2[2]*t544;
  t546 = var2[4]*t544;
  t547 = t525 + t531 + t545 + t546;
  p_output1[0]=t353*var2[2] + t353*var2[4] + var2[6]*(t257*var2[2] + t257*var2[4] + (-0.4*t268 + 0.075*(t283 + t233*t294) - 0.025*(t272 + t242*t294))*var2[6] + t289*var2[8]) + var2[8]*(t314*var2[2] + t314*var2[4] + t289*var2[6] + (-0.025*(t278 - 1.*t233*t320) + 0.075*(t282 + t242*t320))*var2[8]);
  p_output1[1]=t423*var2[2] + t423*var2[4] + var2[6]*(t385*var2[2] + t385*var2[4] + (-0.4*t241 + 0.075*(t358 + t233*t366) - 0.025*t371)*var2[6] + t362*var2[8]) + var2[8]*(t401*var2[2] + t401*var2[4] + t362*var2[6] + (-0.025*t312 + 0.075*t392)*var2[8]);
  p_output1[2]=t547*var2[2] + t547*var2[4] + var2[6]*(t479*var2[2] + t479*var2[4] + (-1.*t248*t309*t430*t432*t437*t440 - 1.*t434*t437*t440*t442 + t248*t255*t430*t432*t445 + t309*t371*t430*t432*t445 + t248*t430*t432*t434*t445 + (t246 - 1.*t233*t366)*t442*t445 + t309*t432*t445*t455 - 1.*t309*t431*t444*t445*t455)*var2[6] + (-1.*t427*t430*t432*t437*t440 - 1.*t430*t437*t440*t442 + 2.*t255*t309*t430*t432*t445 + t248*t431*t432*t445 + t446 + t447 + t450)*var2[8]) + var2[8]*(t512*var2[2] + t512*var2[4] + (t255*t309*t430*t432*t445 + t248*t312*t430*t432*t445 + t309*t430*t432*t434*t445 + t446 + t447 + t450 - 1.*t248*t309*t430*t432*t440*t486 - 1.*t434*t440*t442*t486)*var2[6] + (2.*t309*t312*t430*t432*t445 + t309*t431*t432*t445 + t309*t442*t445 - 1.*t427*t430*t432*t440*t486 - 1.*t430*t440*t442*t486 + t432*t445*t496 - 1.*t431*t444*t445*t496)*var2[8]);
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

#include "jj_Ltoe_pose_func.hh"

namespace SymFunction
{

void jj_Ltoe_pose_func_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
