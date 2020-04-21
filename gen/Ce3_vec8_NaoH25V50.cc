/*
 * Automatically Generated from Mathematica.
 * Tue 10 Jul 2018 11:14:16 GMT-04:00
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
  double t41349;
  double t41693;
  double t41217;
  double t41448;
  double t41694;
  double t38427;
  double t41823;
  double t41780;
  double t41822;
  double t41783;
  double t41673;
  double t41705;
  double t41730;
  double t41785;
  double t41788;
  double t41816;
  double t41820;
  double t41825;
  double t41827;
  double t41963;
  double t41976;
  double t42013;
  double t42032;
  double t42033;
  double t42041;
  double t42047;
  double t42084;
  double t42111;
  double t42439;
  double t42496;
  double t42504;
  double t42519;
  double t42521;
  double t42522;
  double t42920;
  double t42922;
  double t42923;
  double t42968;
  double t42985;
  double t42986;
  double t42990;
  double t43040;
  double t43041;
  double t43054;
  double t43063;
  double t43064;
  double t43065;
  double t43066;
  double t43067;
  double t43073;
  double t43078;
  double t43079;
  double t43085;
  double t43092;
  double t43096;
  double t43042;
  double t43070;
  double t43071;
  double t43153;
  double t43157;
  double t43164;
  double t43129;
  double t43138;
  double t43142;
  double t43082;
  double t43083;
  double t43084;
  double t43227;
  double t43229;
  double t43231;
  double t43276;
  double t43277;
  double t43278;
  double t43282;
  double t43283;
  double t43286;
  double t43104;
  double t43337;
  double t43341;
  double t43348;
  double t43195;
  double t43362;
  double t43363;
  double t43364;
  double t43236;
  double t43248;
  double t43072;
  double t43080;
  double t43110;
  double t43360;
  double t43361;
  double t43196;
  double t43197;
  double t43199;
  double t43353;
  double t43355;
  double t43234;
  double t43235;
  double t43241;
  double t43429;
  double t43431;
  double t43394;
  double t43395;
  double t43249;
  double t43250;
  double t43251;
  double t43404;
  double t43407;
  double t43280;
  double t43287;
  double t43289;
  double t43290;
  double t43292;
  double t43294;
  double t43296;
  double t43297;
  double t43300;
  double t43301;
  double t43305;
  double t43308;
  double t43309;
  double t43310;
  double t43313;
  double t43315;
  double t43317;
  double t43318;
  double t43320;
  double t43321;
  double t43323;
  double t43324;
  double t43326;
  double t43328;
  double t43330;
  double t43331;
  double t43332;
  double t43334;
  double t43335;
  double t43336;
  double t43352;
  double t43354;
  double t43356;
  double t43358;
  double t43359;
  double t43365;
  double t43366;
  double t43368;
  double t43369;
  double t43370;
  double t43371;
  double t43372;
  double t43373;
  double t43374;
  double t43378;
  double t43397;
  double t43398;
  double t43399;
  double t43400;
  double t43401;
  double t43402;
  double t43403;
  double t43406;
  double t43409;
  double t43410;
  double t43411;
  double t43413;
  double t43414;
  double t43415;
  double t43417;
  double t43418;
  double t43419;
  double t43420;
  double t43421;
  double t43422;
  double t43424;
  double t43426;
  double t43427;
  double t43428;
  double t43430;
  double t43435;
  double t43436;
  double t43437;
  double t43438;
  double t43439;
  double t43440;
  double t43442;
  double t43444;
  double t43445;
  double t43446;
  double t43453;
  double t43455;
  double t43457;
  double t43459;
  double t43460;
  double t43461;
  double t43462;
  double t43463;
  double t43464;
  double t43465;
  double t43469;
  double t43470;
  double t43471;
  double t43472;
  double t43474;
  double t43475;
  double t43477;
  double t43478;
  double t43479;
  double t43480;
  double t43481;
  double t43483;
  double t43484;
  double t43487;
  double t43489;
  double t43494;
  double t43495;
  double t43500;
  double t42141;
  double t42173;
  double t42223;
  double t43556;
  double t43558;
  double t43562;
  double t43611;
  double t43612;
  double t43615;
  double t43616;
  double t43617;
  double t43619;
  double t43621;
  double t43622;
  double t43630;
  double t43631;
  double t43632;
  double t43501;
  double t43502;
  double t43618;
  double t43627;
  double t43636;
  double t43684;
  double t43689;
  double t43693;
  double t43668;
  double t43669;
  double t43670;
  double t43644;
  double t43650;
  double t43654;
  t41349 = Cos(var1[7]);
  t41693 = Cos(var1[5]);
  t41217 = Cos(var1[6]);
  t41448 = Sin(var1[5]);
  t41694 = Sin(var1[6]);
  t38427 = Sin(var1[3]);
  t41823 = Sin(var1[7]);
  t41780 = Cos(var1[3]);
  t41822 = Cos(var1[4]);
  t41783 = Sin(var1[4]);
  t41673 = t41217*t41349*t41448;
  t41705 = t41693*t41349*t41694;
  t41730 = t41673 + t41705;
  t41785 = t41693*t41217*t41349;
  t41788 = -1.*t41349*t41448*t41694;
  t41816 = t41785 + t41788;
  t41820 = -1.*t41783*t41816;
  t41825 = -1.*t41822*t41823;
  t41827 = t41820 + t41825;
  t41963 = t41217*t41448*t41823;
  t41976 = t41693*t41694*t41823;
  t42013 = t41963 + t41976;
  t42032 = t41822*t41349;
  t42033 = t41693*t41217*t41823;
  t42041 = -1.*t41448*t41694*t41823;
  t42047 = t42033 + t42041;
  t42084 = -1.*t41783*t42047;
  t42111 = t42032 + t42084;
  t42439 = -1.*t41822*t41816;
  t42496 = t41783*t41823;
  t42504 = t42439 + t42496;
  t42519 = -1.*t41349*t41783;
  t42521 = -1.*t41822*t42047;
  t42522 = t42519 + t42521;
  t42920 = -1.*t41217*t41448;
  t42922 = -1.*t41693*t41694;
  t42923 = t42920 + t42922;
  t42968 = -0.00112*t41349;
  t42985 = 0.05258*t41823;
  t42986 = t42968 + t42985;
  t42990 = t41693*t41217*t42986;
  t43040 = -1.*t41448*t41694*t42986;
  t43041 = t42990 + t43040;
  t43054 = -1.*t41349;
  t43063 = 1. + t43054;
  t43064 = 0.1265*t43063;
  t43065 = 0.17908*t41349;
  t43066 = 0.00112*t41823;
  t43067 = t43064 + t43065 + t43066;
  t43073 = t41822*t43041;
  t43078 = t41783*t43067;
  t43079 = t43073 + t43078;
  t43085 = t41217*t41448*t42986;
  t43092 = t41693*t41694*t42986;
  t43096 = t43085 + t43092;
  t43042 = -1.*t41783*t43041;
  t43070 = t41822*t43067;
  t43071 = t43042 + t43070;
  t43153 = t41822*t41816;
  t43157 = -1.*t41783*t41823;
  t43164 = t43153 + t43157;
  t43129 = -1.*t41822*t43041;
  t43138 = -1.*t41783*t43067;
  t43142 = t43129 + t43138;
  t43082 = t41693*t41217;
  t43083 = -1.*t41448*t41694;
  t43084 = t43082 + t43083;
  t43227 = t41349*t41783;
  t43229 = t41822*t42047;
  t43231 = t43227 + t43229;
  t43276 = -1.*t41217*t41349*t41448;
  t43277 = -1.*t41693*t41349*t41694;
  t43278 = t43276 + t43277;
  t43282 = -1.*t41217*t41448*t41823;
  t43283 = -1.*t41693*t41694*t41823;
  t43286 = t43282 + t43283;
  t43104 = t43084*t43096;
  t43337 = -1.*t41217*t41448*t42986;
  t43341 = -1.*t41693*t41694*t42986;
  t43348 = t43337 + t43341;
  t43195 = -1.*t41730*t43096;
  t43362 = -1.*t41693*t41217;
  t43363 = t41448*t41694;
  t43364 = t43362 + t43363;
  t43236 = -1.*t43084*t43096;
  t43248 = t43096*t42013;
  t43072 = -1.*t41783*t42923*t43071;
  t43080 = t41822*t42923*t43079;
  t43110 = t43072 + t43080 + t43104;
  t43360 = t42923*t43096;
  t43361 = t43084*t43041;
  t43196 = -1.*t43071*t41827;
  t43197 = -1.*t43079*t43164;
  t43199 = t43195 + t43196 + t43197;
  t43353 = -1.*t41816*t43096;
  t43355 = -1.*t41730*t43041;
  t43234 = t41783*t42923*t43071;
  t43235 = -1.*t41822*t42923*t43079;
  t43241 = t43234 + t43235 + t43236;
  t43429 = Power(t41822,2);
  t43431 = Power(t41783,2);
  t43394 = -1.*t42923*t43096;
  t43395 = -1.*t43084*t43041;
  t43249 = t43079*t43231;
  t43250 = t43071*t42111;
  t43251 = t43248 + t43249 + t43250;
  t43404 = t43041*t42013;
  t43407 = t43096*t42047;
  t43280 = -0.0318282514*t41822*t43278;
  t43287 = -0.0006779696*t41822*t43286;
  t43289 = t43280 + t43287;
  t43290 = -0.5*var2[0]*t43289;
  t43292 = t38427*t41783*t43278;
  t43294 = t41780*t41816;
  t43296 = t43292 + t43294;
  t43297 = -0.0318282514*t43296;
  t43300 = t38427*t41783*t43286;
  t43301 = t41780*t42047;
  t43305 = t43300 + t43301;
  t43308 = -0.0006779696*t43305;
  t43309 = t43297 + t43308;
  t43310 = -0.5*var2[1]*t43309;
  t43313 = -1.*t41780*t41783*t43278;
  t43315 = t38427*t41816;
  t43317 = t43313 + t43315;
  t43318 = -0.0318282514*t43317;
  t43320 = -1.*t41780*t41783*t43286;
  t43321 = t38427*t42047;
  t43323 = t43320 + t43321;
  t43324 = -0.0006779696*t43323;
  t43326 = t43318 + t43324;
  t43328 = -0.5*var2[2]*t43326;
  t43330 = -0.000817*t42923;
  t43331 = -9.e-6*t41816;
  t43332 = 0.00003*t42047;
  t43334 = t42923*t43041;
  t43335 = t43104 + t43334;
  t43336 = t41816*t43335;
  t43352 = -1.*t41816*t43348;
  t43354 = -1.*t43278*t43041;
  t43356 = t43352 + t43353 + t43354 + t43355;
  t43358 = t43084*t43356;
  t43359 = t42923*t43348;
  t43365 = t43364*t43041;
  t43366 = t43359 + t43360 + t43361 + t43365;
  t43368 = t41730*t43366;
  t43369 = -1.*t41816*t43041;
  t43370 = t43067*t41823;
  t43371 = t43195 + t43369 + t43370;
  t43372 = t42923*t43371;
  t43373 = t43336 + t43358 + t43368 + t43372;
  t43374 = -0.0006779696*t43373;
  t43378 = -1.*t42923*t43348;
  t43397 = -1.*t43364*t43041;
  t43398 = t43378 + t43394 + t43395 + t43397;
  t43399 = t43398*t42013;
  t43400 = -1.*t42923*t43041;
  t43401 = t43236 + t43400;
  t43402 = t43401*t42047;
  t43403 = t43041*t43286;
  t43406 = t43348*t42047;
  t43409 = t43403 + t43404 + t43406 + t43407;
  t43410 = t43084*t43409;
  t43411 = t41349*t43067;
  t43413 = t43041*t42047;
  t43414 = t43411 + t43248 + t43413;
  t43415 = t42923*t43414;
  t43417 = t43399 + t43402 + t43410 + t43415;
  t43418 = -0.0318282514*t43417;
  t43419 = t43330 + t43331 + t43332 + t43374 + t43418;
  t43420 = -0.5*var2[4]*t43419;
  t43421 = -9.e-6*t41822*t43278;
  t43422 = -0.000817*t41822*t43364;
  t43424 = 0.00003*t41822*t43286;
  t43426 = t41822*t43278*t43110;
  t43427 = -1.*t41783*t43364*t43071;
  t43428 = t41822*t43364*t43079;
  t43430 = t43429*t42923*t43348;
  t43435 = t43431*t42923*t43348;
  t43436 = t43427 + t43428 + t43430 + t43435 + t43360 + t43361;
  t43437 = t43436*t43164;
  t43438 = t41822*t43364*t43199;
  t43439 = t41783*t43278*t43071;
  t43440 = -1.*t41822*t43278*t43079;
  t43442 = t41783*t43348*t41827;
  t43444 = -1.*t41822*t43348*t43164;
  t43445 = t43439 + t43440 + t43353 + t43355 + t43442 + t43444;
  t43446 = t41822*t42923*t43445;
  t43453 = t43426 + t43437 + t43438 + t43446;
  t43455 = -0.0006779696*t43453;
  t43457 = t41822*t43241*t43286;
  t43459 = t41783*t43364*t43071;
  t43460 = -1.*t41822*t43364*t43079;
  t43461 = -1.*t43429*t42923*t43348;
  t43462 = -1.*t43431*t42923*t43348;
  t43463 = t43459 + t43460 + t43461 + t43462 + t43394 + t43395;
  t43464 = t43463*t43231;
  t43465 = t41822*t43364*t43251;
  t43469 = -1.*t41783*t43071*t43286;
  t43470 = t41822*t43079*t43286;
  t43471 = t41822*t43348*t43231;
  t43472 = -1.*t41783*t43348*t42111;
  t43474 = t43469 + t43470 + t43404 + t43407 + t43471 + t43472;
  t43475 = t41822*t42923*t43474;
  t43477 = t43457 + t43464 + t43465 + t43475;
  t43478 = -0.0318282514*t43477;
  t43479 = t43421 + t43422 + t43424 + t43455 + t43478;
  t43480 = -0.5*var2[3]*t43479;
  t43481 = t43290 + t43310 + t43328 + t43420 + t43480;
  t43483 = var2[7]*t43481;
  t43484 = 9.e-6*t41349;
  t43487 = -0.00003*t41823;
  t43489 = t43484 + t43487;
  t43494 = -1.*t41693*t41217*t41823;
  t43495 = t41448*t41694*t41823;
  t43500 = t43494 + t43495;
  t42141 = t41780*t41730;
  t42173 = -1.*t38427*t41827;
  t42223 = t42141 + t42173;
  t43556 = -1.*t41822*t41349;
  t43558 = -1.*t41783*t43500;
  t43562 = t43556 + t43558;
  t43611 = 0.05258*t41349;
  t43612 = t43611 + t43066;
  t43615 = t41217*t41448*t43612;
  t43616 = t41693*t41694*t43612;
  t43617 = t43615 + t43616;
  t43619 = t41693*t41217*t43612;
  t43621 = -1.*t41448*t41694*t43612;
  t43622 = t43619 + t43621;
  t43630 = 0.00112*t41349;
  t43631 = -0.05258*t41823;
  t43632 = t43630 + t43631;
  t43501 = t41822*t43500;
  t43502 = t42519 + t43501;
  t43618 = -1.*t43084*t43617;
  t43627 = t41730*t43096;
  t43636 = t43617*t42013;
  t43684 = t41822*t43622;
  t43689 = t41783*t43632;
  t43693 = t43684 + t43689;
  t43668 = -1.*t41783*t43622;
  t43669 = t41822*t43632;
  t43670 = t43668 + t43669;
  t43644 = t43084*t43617;
  t43650 = -1.*t41730*t43617;
  t43654 = -1.*t43096*t43286;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(-0.0318282514*(-1.*t38427*t41730 - 1.*t41780*t41827) - 0.0006779696*(-1.*t38427*t42013 - 1.*t41780*t42111))*var2[1] - 0.5*(-0.0006779696*(t41780*t42013 - 1.*t38427*t42111) - 0.0318282514*t42223)*var2[2])*var2[7];
  p_output1[4]=(-0.5*(-0.0318282514*t41827 - 0.0006779696*t42111)*var2[0] - 0.5*(0.0318282514*t38427*t42504 + 0.0006779696*t38427*t42522)*var2[1] - 0.5*(-0.0318282514*t41780*t42504 - 0.0006779696*t41780*t42522)*var2[2] - 0.5*(-9.e-6*t41827 + 0.00003*t42111 + 0.000817*t41783*t42923 - 0.0006779696*(t41827*t43110 + (-1.*t41783*t42923*t43079 - 1.*t41783*t42923*t43142)*t43164 + t41822*t42923*(-1.*t42504*t43071 - 1.*t41827*t43079 - 1.*t41827*t43142 - 1.*t43071*t43164) - 1.*t41783*t42923*t43199) - 0.0318282514*((t41783*t42923*t43079 + t41783*t42923*t43142)*t43231 + t41822*t42923*(t42522*t43071 + t42111*t43079 + t42111*t43142 + t43071*t43231) + t42111*t43241 - 1.*t41783*t42923*t43251))*var2[3])*var2[7];
  p_output1[5]=t43483;
  p_output1[6]=t43483;
  p_output1[7]=(-0.5*(-0.0006779696*t43164 - 0.0318282514*t43502)*var2[0] - 0.5*(-0.0006779696*t42223 - 0.0318282514*(t41780*t43286 - 1.*t38427*t43562))*var2[1] - 0.5*(-0.0006779696*(t38427*t41730 + t41780*t41827) - 0.0318282514*(t38427*t43286 + t41780*t43562))*var2[2] - 0.5*(0.00003*t43164 - 9.e-6*t43502 - 0.0006779696*(t43110*t43502 + t43164*(t43644 - 1.*t41783*t42923*t43670 + t41822*t42923*t43693) + t41822*t42923*(-1.*t43079*t43502 - 1.*t43071*t43562 + t43650 + t43654 - 1.*t41827*t43670 - 1.*t43164*t43693)) - 0.0318282514*(t43164*t43241 + t43231*(t43618 + t41783*t42923*t43670 - 1.*t41822*t42923*t43693) + t41822*t42923*(t41827*t43071 + t43079*t43164 + t43627 + t43636 + t42111*t43670 + t43231*t43693)))*var2[3] - 0.5*(0.00003*t41730 - 9.e-6*t43286 - 0.0318282514*(t41730*t43401 + t42013*(t43618 - 1.*t42923*t43622) + t43084*(t41816*t43041 - 1.*t41823*t43067 + t42047*t43622 + t43627 + t41349*t43632 + t43636)) - 0.0006779696*(t43286*t43335 + t41730*(t42923*t43622 + t43644) + t43084*(t43411 - 1.*t43041*t43500 - 1.*t41816*t43622 + t41823*t43632 + t43650 + t43654)))*var2[4] - 0.5*t43489*var2[5] - 0.5*t43489*var2[6])*var2[7];
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

#include "Ce3_vec8_NaoH25V50.hh"

namespace SymFunction
{

void Ce3_vec8_NaoH25V50_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
