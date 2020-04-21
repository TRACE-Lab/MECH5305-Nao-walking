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
  double t39;
  double t34;
  double t41;
  double t43;
  double t44;
  double t53;
  double t47;
  double t48;
  double t51;
  double t52;
  double t55;
  double t72;
  double t73;
  double t81;
  double t64;
  double t65;
  double t67;
  double t82;
  double t12;
  double t17;
  double t21;
  double t22;
  double t25;
  double t31;
  double t32;
  double t96;
  double t46;
  double t57;
  double t60;
  double t83;
  double t10;
  double t108;
  double t109;
  double t110;
  double t99;
  double t102;
  double t103;
  double t111;
  double t112;
  double t113;
  double t62;
  double t68;
  double t69;
  double t74;
  double t76;
  double t78;
  double t79;
  double t85;
  double t87;
  double t89;
  double t91;
  double t93;
  double t94;
  double t122;
  double t125;
  double t126;
  double t127;
  double t128;
  double t142;
  double t143;
  double t145;
  double t153;
  double t155;
  double t158;
  double t160;
  double t162;
  double t164;
  double t123;
  double t129;
  double t130;
  double t190;
  double t192;
  double t193;
  double t195;
  double t200;
  double t201;
  double t216;
  double t217;
  double t218;
  double t213;
  double t219;
  double t221;
  double t224;
  double t226;
  double t228;
  double t244;
  double t245;
  double t246;
  double t283;
  double t284;
  double t286;
  double t287;
  double t288;
  double t290;
  double t292;
  double t294;
  double t295;
  double t301;
  double t302;
  double t303;
  double t315;
  double t316;
  double t317;
  double t333;
  double t334;
  double t335;
  double t328;
  double t330;
  double t331;
  double t336;
  double t337;
  double t339;
  double t366;
  double t367;
  double t369;
  double t354;
  double t357;
  double t358;
  double t319;
  double t322;
  double t326;
  double t242;
  double t247;
  double t250;
  double t255;
  double t257;
  double t258;
  double t418;
  double t419;
  double t422;
  double t260;
  double t262;
  double t263;
  double t437;
  double t438;
  double t439;
  double t445;
  double t447;
  double t448;
  double t363;
  double t364;
  double t365;
  double t371;
  double t372;
  double t376;
  double t378;
  double t469;
  double t471;
  double t472;
  double t381;
  double t384;
  double t385;
  double t386;
  double t388;
  double t390;
  double t392;
  double t413;
  double t415;
  double t417;
  double t423;
  double t425;
  double t427;
  double t429;
  double t430;
  double t431;
  double t432;
  double t433;
  double t434;
  double t435;
  double t440;
  double t442;
  double t449;
  double t450;
  double t451;
  double t454;
  double t455;
  double t456;
  double t457;
  double t458;
  double t460;
  double t461;
  double t463;
  double t464;
  double t468;
  double t473;
  double t474;
  double t475;
  double t476;
  double t477;
  double t479;
  double t480;
  double t481;
  double t482;
  double t483;
  double t485;
  double t487;
  double t489;
  double t490;
  double t492;
  double t494;
  double t395;
  double t508;
  double t516;
  double t517;
  double t518;
  double t519;
  double t520;
  double t550;
  double t551;
  double t554;
  double t544;
  double t545;
  double t546;
  double t561;
  double t562;
  double t564;
  double t555;
  double t557;
  double t558;
  double t598;
  double t599;
  double t601;
  double t602;
  double t603;
  double t606;
  double t607;
  double t608;
  double t609;
  double t611;
  double t612;
  double t613;
  double t615;
  double t617;
  double t618;
  double t621;
  double t622;
  double t623;
  double t624;
  double t626;
  double t628;
  double t629;
  double t630;
  double t632;
  double t635;
  double t637;
  double t638;
  double t639;
  double t647;
  double t540;
  double t548;
  double t572;
  double t576;
  double t707;
  double t722;
  double t725;
  double t723;
  double t726;
  double t729;
  double t735;
  double t737;
  double t738;
  double t696;
  double t697;
  double t698;
  double t699;
  double t701;
  double t703;
  double t704;
  double t705;
  double t706;
  double t709;
  double t711;
  double t714;
  double t718;
  double t719;
  t39 = Cos(var1[7]);
  t34 = Sin(var1[7]);
  t41 = -0.00112*t39;
  t43 = 0.05258*t34;
  t44 = t41 + t43;
  t53 = 0.00112*t34;
  t47 = -1.*t39;
  t48 = 1. + t47;
  t51 = 0.1265*t48;
  t52 = 0.17908*t39;
  t55 = t51 + t52 + t53;
  t72 = 0.05258*t39;
  t73 = t72 + t53;
  t81 = -1.*t39*t55;
  t64 = 0.00112*t39;
  t65 = -0.05258*t34;
  t67 = t64 + t65;
  t82 = -1.*t44*t34;
  t12 = Cos(var1[6]);
  t17 = Sin(var1[5]);
  t21 = -1.*t12*t17;
  t22 = Cos(var1[5]);
  t25 = Sin(var1[6]);
  t31 = -1.*t22*t25;
  t32 = t21 + t31;
  t96 = Sin(var1[4]);
  t46 = t39*t44;
  t57 = -1.*t55*t34;
  t60 = t46 + t57;
  t83 = t81 + t82;
  t10 = Cos(var1[4]);
  t108 = -1.*t22*t12;
  t109 = t17*t25;
  t110 = t108 + t109;
  t99 = t39*t60;
  t102 = -1.*t34*t83;
  t103 = t99 + t102;
  t111 = -7.842e-7*t10*t110;
  t112 = 0.60533*t10*t110*t103;
  t113 = t111 + t112;
  t62 = -1.*t34*t60;
  t68 = -1.*t39*t67;
  t69 = -1.*t39*t44;
  t74 = -1.*t73*t34;
  t76 = t55*t34;
  t78 = t68 + t69 + t74 + t76;
  t79 = -1.*t34*t78;
  t85 = -1.*t39*t83;
  t87 = t39*t73;
  t89 = -1.*t67*t34;
  t91 = t87 + t81 + t89 + t82;
  t93 = t39*t91;
  t94 = t62 + t79 + t85 + t93;
  t122 = Sin(var1[3]);
  t125 = Cos(var1[3]);
  t126 = t22*t12;
  t127 = -1.*t17*t25;
  t128 = t126 + t127;
  t142 = t125*t96*t32;
  t143 = -1.*t122*t128;
  t145 = t142 + t143;
  t153 = t125*t32;
  t155 = t122*t96*t110;
  t158 = t153 + t155;
  t160 = -7.842e-7*t158;
  t162 = 0.60533*t158*t103;
  t164 = t160 + t162;
  t123 = t122*t96*t32;
  t129 = t125*t128;
  t130 = t123 + t129;
  t190 = t122*t32;
  t192 = -1.*t125*t96*t110;
  t193 = t190 + t192;
  t195 = -7.842e-7*t193;
  t200 = 0.60533*t193*t103;
  t201 = t195 + t200;
  t216 = -1.e-5*t22*t12;
  t217 = 1.e-5*t17*t25;
  t218 = t216 + t217;
  t213 = -0.09908*t96;
  t219 = -1.*t10*t218;
  t221 = t213 + t219;
  t224 = 0.09908*t96;
  t226 = t10*t218;
  t228 = t224 + t226;
  t244 = 0.09908*t10;
  t245 = -1.*t96*t218;
  t246 = t244 + t245;
  t283 = t22*t12*t39;
  t284 = -1.*t39*t17*t25;
  t286 = t283 + t284;
  t287 = -1.*t96*t286;
  t288 = -1.*t10*t34;
  t290 = t287 + t288;
  t292 = t10*t39;
  t294 = t22*t12*t34;
  t295 = -1.*t17*t25*t34;
  t301 = t294 + t295;
  t302 = -1.*t96*t301;
  t303 = t292 + t302;
  t315 = t22*t12*t44;
  t316 = -1.*t17*t25*t44;
  t317 = t315 + t316;
  t333 = -1.*t96*t317;
  t334 = t10*t55;
  t335 = t333 + t334;
  t328 = t10*t317;
  t330 = t96*t55;
  t331 = t328 + t330;
  t336 = t10*t286;
  t337 = -1.*t96*t34;
  t339 = t336 + t337;
  t366 = t12*t17*t44;
  t367 = t22*t25*t44;
  t369 = t366 + t367;
  t354 = t39*t96;
  t357 = t10*t301;
  t358 = t354 + t357;
  t319 = -1.*t10*t317;
  t322 = -1.*t96*t55;
  t326 = t319 + t322;
  t242 = -1.*t96*t228;
  t247 = -1.*t10*t246;
  t250 = t242 + t247;
  t255 = -1.e-5*t12*t17;
  t257 = -1.e-5*t22*t25;
  t258 = t255 + t257;
  t418 = 1.e-5*t12*t17;
  t419 = 1.e-5*t22*t25;
  t422 = t418 + t419;
  t260 = t12*t17;
  t262 = t22*t25;
  t263 = t260 + t262;
  t437 = -1.*t12*t39*t17;
  t438 = -1.*t22*t39*t25;
  t439 = t437 + t438;
  t445 = -1.*t12*t17*t34;
  t447 = -1.*t22*t25*t34;
  t448 = t445 + t447;
  t363 = t12*t39*t17;
  t364 = t22*t39*t25;
  t365 = t363 + t364;
  t371 = t365*t369;
  t372 = t335*t290;
  t376 = t331*t339;
  t378 = t371 + t372 + t376;
  t469 = -1.*t12*t17*t44;
  t471 = -1.*t22*t25*t44;
  t472 = t469 + t471;
  t381 = t12*t17*t34;
  t384 = t22*t25*t34;
  t385 = t381 + t384;
  t386 = -1.*t369*t385;
  t388 = -1.*t331*t358;
  t390 = -1.*t335*t303;
  t392 = t386 + t388 + t390;
  t413 = t10*t32*t250;
  t415 = t258*t128;
  t417 = Power(t10,2);
  t423 = t417*t422*t128;
  t425 = Power(t96,2);
  t427 = t425*t422*t128;
  t429 = t263*t218;
  t430 = t10*t32*t228;
  t431 = -1.*t96*t32*t246;
  t432 = t415 + t423 + t427 + t429 + t430 + t431;
  t433 = t96*t432;
  t434 = t413 + t433;
  t435 = -7.842e-7*t434;
  t440 = 0.000958*t10*t439;
  t442 = 9.e-6*t10*t110;
  t449 = 5.e-6*t10*t448;
  t450 = t440 + t442 + t449;
  t451 = -1.*t34*t450;
  t454 = 5.e-6*t10*t439;
  t455 = -0.00003*t10*t110;
  t456 = 0.000985*t10*t448;
  t457 = t454 + t455 + t456;
  t458 = t39*t457;
  t460 = t10*t448*t378;
  t461 = -1.*t96*t439*t335;
  t463 = t10*t439*t331;
  t464 = t286*t369;
  t468 = t365*t317;
  t473 = -1.*t96*t472*t290;
  t474 = t10*t472*t339;
  t475 = t461 + t463 + t464 + t468 + t473 + t474;
  t476 = t475*t358;
  t477 = t10*t439*t392;
  t479 = t96*t335*t448;
  t480 = -1.*t10*t331*t448;
  t481 = -1.*t317*t385;
  t482 = -1.*t369*t301;
  t483 = -1.*t10*t472*t358;
  t485 = t96*t472*t303;
  t487 = t479 + t480 + t481 + t482 + t483 + t485;
  t489 = t339*t487;
  t490 = t460 + t476 + t477 + t489;
  t492 = 0.60533*t103*t490;
  t494 = t435 + t451 + t458 + t492;
  t395 = -1.*t39*t96;
  t508 = 5.e-6*t339;
  t516 = -1.*t22*t12*t34;
  t517 = t17*t25*t34;
  t518 = t516 + t517;
  t519 = t10*t518;
  t520 = t395 + t519;
  t550 = t22*t12*t73;
  t551 = -1.*t17*t25*t73;
  t554 = t550 + t551;
  t544 = t12*t17*t73;
  t545 = t22*t25*t73;
  t546 = t544 + t545;
  t561 = -1.*t96*t554;
  t562 = t10*t67;
  t564 = t561 + t562;
  t555 = t10*t554;
  t557 = t96*t67;
  t558 = t555 + t557;
  t598 = 7.7698536e-8*t128;
  t599 = 9.e-6*t32;
  t601 = 0.000958*t286;
  t602 = 5.e-6*t301;
  t603 = t599 + t601 + t602;
  t606 = -1.*t34*t603;
  t607 = -0.00003*t32;
  t608 = 5.e-6*t286;
  t609 = 0.000985*t301;
  t611 = t607 + t608 + t609;
  t612 = t39*t611;
  t613 = t286*t472;
  t615 = t439*t317;
  t617 = t613 + t464 + t615 + t468;
  t618 = t617*t385;
  t621 = t286*t317;
  t622 = t371 + t621 + t57;
  t623 = t301*t622;
  t624 = -1.*t317*t448;
  t626 = -1.*t472*t301;
  t628 = t624 + t481 + t626 + t482;
  t629 = t365*t628;
  t630 = -1.*t317*t301;
  t632 = t81 + t386 + t630;
  t635 = t286*t632;
  t637 = t618 + t623 + t629 + t635;
  t638 = 0.60533*t103*t637;
  t639 = t598 + t606 + t612 + t638;
  t647 = 5.e-6*t365;
  t540 = -1.*t365*t369;
  t548 = -1.*t546*t385;
  t572 = t365*t546;
  t576 = t369*t448;
  t707 = -5.e-6*t34;
  t722 = Power(t12,2);
  t725 = Power(t25,2);
  t723 = t722*t39*t44;
  t726 = t39*t725*t44;
  t729 = t723 + t726 + t57;
  t735 = -1.*t722*t44*t34;
  t737 = -1.*t725*t44*t34;
  t738 = t81 + t735 + t737;
  t696 = -5.e-6*t39;
  t697 = -0.000985*t34;
  t698 = t696 + t697;
  t699 = t39*t698;
  t701 = 5.e-6*t39;
  t703 = -0.000958*t34;
  t704 = t701 + t703;
  t705 = -1.*t39*t704;
  t706 = -0.000958*t39;
  t709 = t706 + t707;
  t711 = -1.*t709*t34;
  t714 = 0.000985*t39;
  t718 = t714 + t707;
  t719 = -1.*t718*t34;
  p_output1[0]=var2[6]*(-0.5*(7.842e-7*t32*t96 - 0.60533*t103*t32*t96)*var2[4] - 0.5*t113*var2[5] - 0.5*t113*var2[6] - 0.302665*t10*t32*t94*var2[7]);
  p_output1[1]=var2[6]*(-0.5*(-7.842e-7*t145 + 0.60533*t103*t145)*var2[3] - 0.5*(-7.842e-7*t10*t122*t32 + 0.60533*t10*t103*t122*t32)*var2[4] - 0.5*t164*var2[5] - 0.5*t164*var2[6] - 0.302665*t130*t94*var2[7]);
  p_output1[2]=var2[6]*(-0.5*(-7.842e-7*t130 + 0.60533*t103*t130)*var2[3] - 0.5*(7.842e-7*t10*t125*t32 - 0.60533*t10*t103*t125*t32)*var2[4] - 0.5*t201*var2[5] - 0.5*t201*var2[6] - 0.302665*t94*(t122*t128 - 1.*t125*t32*t96)*var2[7]);
  p_output1[3]=var2[6]*(-0.5*(6.e-6*t10 - 1.*t34*(0.000958*t290 + 5.e-6*t303 - 9.e-6*t32*t96) + t39*(5.e-6*t290 + 0.000985*t303 + 0.00003*t32*t96) - 7.842e-7*(t10*t128*(-1.*t10*t221 - 1.*t10*t228) - 1.*t128*t250*t96 + t96*(-1.*t128*t221*t96 - 1.*t128*t228*t96) + t10*(t10*t128*t228 + t258*t263 - 1.*t128*t246*t96)) + 0.60533*t103*(t303*t378 + t290*t392 + t339*(-1.*t303*t326 - 1.*t303*t331 - 1.*t335*t358 - 1.*t335*(-1.*t10*t301 + t395)) + t358*(t290*t326 + t290*t331 + t335*t339 + t335*(-1.*t10*t286 + t34*t96))))*var2[4] - 0.5*t494*var2[5] - 0.5*t494*var2[6] - 0.5*(-1.*(9.e-6*t10*t32 + 0.000958*t339 + 5.e-6*t358)*t39 - 1.*t34*(-0.00003*t10*t32 + 0.000985*t358 + t508) + t39*(0.000985*t339 + 5.e-6*t520) - 1.*t34*(t508 + 0.000958*t520) + 0.60533*(t358*t378 + t339*t392)*t94 + 0.60533*t103*(t339*t378 + t392*t520 + t339*(-1.*t290*t335 - 1.*t331*t339 + t540 + t548 - 1.*t358*t558 - 1.*t303*t564) + t358*(t331*t520 + t339*t558 + t290*t564 + t572 + t576 + t335*(-1.*t10*t39 - 1.*t518*t96))))*var2[7]);
  p_output1[4]=var2[6]*(-0.5*t639*var2[5] - 0.5*t639*var2[6] - 0.5*(-1.*(9.e-6*t128 + 0.000958*t365 + 5.e-6*t385)*t39 + t39*(0.000985*t365 + 5.e-6*t448) - 1.*t34*(-0.00003*t128 + 0.000985*t385 + t647) - 1.*t34*(0.000958*t448 + t647) + 0.60533*t103*(t365*t622 + t448*t632 + t365*(-1.*t286*t317 + t540 + t548 - 1.*t301*t554 + t68 + t76) + t385*(t317*t518 + t286*t554 + t572 + t576 + t81 + t89)) + 0.60533*(t385*t622 + t365*t632)*t94)*var2[7]);
  p_output1[5]=-0.5*(t699 + t705 + t711 + t719 + 0.60533*t103*(-1.*t34*t729 - 1.*t39*t738 - 1.*t34*(t68 - 1.*t39*t44*t722 - 1.*t39*t44*t725 - 1.*t34*t722*t73 - 1.*t34*t725*t73 + t76) + t39*(t39*t722*t73 + t39*t725*t73 + t735 + t737 + t81 + t89)) + 0.60533*(t39*t729 - 1.*t34*t738)*t94)*var2[6]*var2[7];
  p_output1[6]=-0.5*(t699 + t705 + t711 + t719 + 1.21066*t103*t94)*var2[6]*var2[7];
  p_output1[7]=-0.5*(0.00003*t34 - 9.e-6*t39)*var2[6]*var2[7];
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

#include "Ce1_vec7_NaoH25V50.hh"

namespace SymFunction
{

void Ce1_vec7_NaoH25V50_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
