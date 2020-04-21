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
  double t29692;
  double t24148;
  double t24446;
  double t29825;
  double t23034;
  double t23641;
  double t28906;
  double t29840;
  double t29855;
  double t32772;
  double t33305;
  double t35774;
  double t36773;
  double t36894;
  double t37819;
  double t38154;
  double t38499;
  double t38782;
  double t39254;
  double t39345;
  double t39353;
  double t39539;
  double t39581;
  double t39873;
  double t38636;
  double t38964;
  double t38968;
  double t41469;
  double t41667;
  double t41671;
  double t39109;
  double t40588;
  double t40672;
  double t40859;
  double t40873;
  double t40973;
  double t40975;
  double t40976;
  double t41013;
  double t41779;
  double t41850;
  double t41851;
  double t41857;
  double t41848;
  double t41942;
  double t41952;
  double t41968;
  double t41973;
  double t41975;
  double t42067;
  double t42068;
  double t42073;
  double t42191;
  double t42192;
  double t42193;
  double t42194;
  double t42195;
  double t42196;
  double t42301;
  double t42302;
  double t42304;
  double t42323;
  double t42324;
  double t42328;
  double t42256;
  double t42282;
  double t42294;
  double t42312;
  double t42314;
  double t42317;
  double t42339;
  double t42366;
  double t42372;
  double t42248;
  double t42297;
  double t42298;
  double t42461;
  double t42465;
  double t42478;
  double t42432;
  double t42437;
  double t42438;
  double t42305;
  double t42306;
  double t42309;
  double t42580;
  double t42585;
  double t42591;
  double t42616;
  double t42617;
  double t42628;
  double t42634;
  double t42637;
  double t42638;
  double t42177;
  double t42181;
  double t42190;
  double t42153;
  double t42161;
  double t42167;
  double t42235;
  double t42239;
  double t42242;
  double t42441;
  double t42452;
  double t42456;
  double t42497;
  double t42506;
  double t42508;
  double t42479;
  double t42654;
  double t42655;
  double t42656;
  double t42510;
  double t42048;
  double t42074;
  double t42075;
  double t42087;
  double t42091;
  double t42092;
  double t42778;
  double t42779;
  double t42780;
  double t42094;
  double t42101;
  double t42107;
  double t42659;
  double t42660;
  double t42664;
  double t42714;
  double t42727;
  double t42728;
  double t42480;
  double t42483;
  double t42489;
  double t42658;
  double t42667;
  double t42511;
  double t42512;
  double t42513;
  double t42740;
  double t42742;
  double t42601;
  double t42602;
  double t42611;
  double t42613;
  double t42629;
  double t42631;
  double t42632;
  double t42633;
  double t42642;
  double t42645;
  double t42646;
  double t42647;
  double t42650;
  double t42651;
  double t42652;
  double t42653;
  double t42657;
  double t42666;
  double t42668;
  double t42670;
  double t42678;
  double t42689;
  double t42700;
  double t42731;
  double t42741;
  double t42743;
  double t42746;
  double t42748;
  double t42752;
  double t42756;
  double t42767;
  double t42771;
  double t42773;
  double t42774;
  double t42775;
  double t42776;
  double t42777;
  double t42781;
  double t42782;
  double t42784;
  double t42787;
  double t42788;
  double t42789;
  double t42790;
  double t42791;
  double t42792;
  double t42794;
  double t42795;
  double t42796;
  double t42799;
  double t42800;
  double t42801;
  double t42802;
  double t42803;
  double t42804;
  double t42805;
  double t42808;
  double t42829;
  double t42865;
  double t42877;
  double t42880;
  double t42884;
  double t42885;
  double t42891;
  double t42894;
  double t42899;
  double t42900;
  double t42907;
  double t42911;
  double t42918;
  double t42934;
  double t42935;
  double t42927;
  double t42928;
  double t42931;
  double t42925;
  double t42932;
  double t42933;
  double t42940;
  double t42950;
  double t42953;
  double t42956;
  double t42957;
  double t42958;
  double t42959;
  double t42960;
  double t42961;
  double t42962;
  double t42991;
  double t42992;
  double t42996;
  double t43003;
  double t43024;
  double t43033;
  double t43034;
  double t43036;
  double t43039;
  double t43044;
  double t43046;
  double t43045;
  double t43047;
  double t43050;
  double t43055;
  double t43060;
  double t43061;
  double t43168;
  double t43174;
  double t43185;
  double t43190;
  double t43191;
  double t43192;
  double t43121;
  double t43122;
  double t43127;
  double t42518;
  double t43203;
  double t43204;
  double t43205;
  double t43162;
  double t43187;
  double t43224;
  double t43225;
  double t43198;
  double t43242;
  double t43243;
  double t43246;
  double t43237;
  double t43239;
  double t43240;
  double t43201;
  t29692 = Cos(var1[5]);
  t24148 = Cos(var1[6]);
  t24446 = Sin(var1[5]);
  t29825 = Sin(var1[6]);
  t23034 = Sin(var1[3]);
  t23641 = Sin(var1[4]);
  t28906 = -1.*t24148*t24446;
  t29840 = -1.*t29692*t29825;
  t29855 = t28906 + t29840;
  t32772 = t23034*t23641*t29855;
  t33305 = Cos(var1[3]);
  t35774 = t29692*t24148;
  t36773 = -1.*t24446*t29825;
  t36894 = t35774 + t36773;
  t37819 = t33305*t36894;
  t38154 = t32772 + t37819;
  t38499 = Cos(var1[7]);
  t38782 = Sin(var1[7]);
  t39254 = -1.*t38499;
  t39345 = 1. + t39254;
  t39353 = 0.1265*t39345;
  t39539 = 0.17908*t38499;
  t39581 = 0.00112*t38782;
  t39873 = t39353 + t39539 + t39581;
  t38636 = -0.00112*t38499;
  t38964 = 0.05258*t38782;
  t38968 = t38636 + t38964;
  t41469 = t33305*t23641*t29855;
  t41667 = -1.*t23034*t36894;
  t41671 = t41469 + t41667;
  t39109 = t38499*t38968;
  t40588 = -1.*t39873*t38782;
  t40672 = t39109 + t40588;
  t40859 = t38499*t40672;
  t40873 = -1.*t38499*t39873;
  t40973 = -1.*t38968*t38782;
  t40975 = t40873 + t40973;
  t40976 = -1.*t38782*t40975;
  t41013 = t40859 + t40976;
  t41779 = Cos(var1[4]);
  t41850 = -1.e-5*t29692*t24148;
  t41851 = 1.e-5*t24446*t29825;
  t41857 = t41850 + t41851;
  t41848 = -0.09908*t23641;
  t41942 = -1.*t41779*t41857;
  t41952 = t41848 + t41942;
  t41968 = 0.09908*t23641;
  t41973 = t41779*t41857;
  t41975 = t41968 + t41973;
  t42067 = 0.09908*t41779;
  t42068 = -1.*t23641*t41857;
  t42073 = t42067 + t42068;
  t42191 = t29692*t24148*t38499;
  t42192 = -1.*t38499*t24446*t29825;
  t42193 = t42191 + t42192;
  t42194 = -1.*t23641*t42193;
  t42195 = -1.*t41779*t38782;
  t42196 = t42194 + t42195;
  t42301 = t29692*t24148*t38968;
  t42302 = -1.*t24446*t29825*t38968;
  t42304 = t42301 + t42302;
  t42323 = -1.*t23641*t42304;
  t42324 = t41779*t39873;
  t42328 = t42323 + t42324;
  t42256 = t29692*t24148*t38782;
  t42282 = -1.*t24446*t29825*t38782;
  t42294 = t42256 + t42282;
  t42312 = t41779*t42304;
  t42314 = t23641*t39873;
  t42317 = t42312 + t42314;
  t42339 = t41779*t42193;
  t42366 = -1.*t23641*t38782;
  t42372 = t42339 + t42366;
  t42248 = t41779*t38499;
  t42297 = -1.*t23641*t42294;
  t42298 = t42248 + t42297;
  t42461 = t24148*t24446*t38968;
  t42465 = t29692*t29825*t38968;
  t42478 = t42461 + t42465;
  t42432 = t38499*t23641;
  t42437 = t41779*t42294;
  t42438 = t42432 + t42437;
  t42305 = -1.*t41779*t42304;
  t42306 = -1.*t23641*t39873;
  t42309 = t42305 + t42306;
  t42580 = -1.*t29692*t24148;
  t42585 = t24446*t29825;
  t42591 = t42580 + t42585;
  t42616 = t23034*t29855;
  t42617 = -1.*t33305*t23641*t42591;
  t42628 = t42616 + t42617;
  t42634 = t33305*t29855;
  t42637 = t23034*t23641*t42591;
  t42638 = t42634 + t42637;
  t42177 = 5.e-6*t38499;
  t42181 = -0.000958*t38782;
  t42190 = t42177 + t42181;
  t42153 = -0.00003*t38499;
  t42161 = -9.e-6*t38782;
  t42167 = t42153 + t42161;
  t42235 = 0.000985*t38499;
  t42239 = -5.e-6*t38782;
  t42242 = t42235 + t42239;
  t42441 = t24148*t38499*t24446;
  t42452 = t29692*t38499*t29825;
  t42456 = t42441 + t42452;
  t42497 = t24148*t24446*t38782;
  t42506 = t29692*t29825*t38782;
  t42508 = t42497 + t42506;
  t42479 = t42456*t42478;
  t42654 = -1.*t24148*t24446*t38968;
  t42655 = -1.*t29692*t29825*t38968;
  t42656 = t42654 + t42655;
  t42510 = -1.*t42478*t42508;
  t42048 = -1.*t23641*t41975;
  t42074 = -1.*t41779*t42073;
  t42075 = t42048 + t42074;
  t42087 = -1.e-5*t24148*t24446;
  t42091 = -1.e-5*t29692*t29825;
  t42092 = t42087 + t42091;
  t42778 = 1.e-5*t24148*t24446;
  t42779 = 1.e-5*t29692*t29825;
  t42780 = t42778 + t42779;
  t42094 = t24148*t24446;
  t42101 = t29692*t29825;
  t42107 = t42094 + t42101;
  t42659 = -1.*t24148*t38499*t24446;
  t42660 = -1.*t29692*t38499*t29825;
  t42664 = t42659 + t42660;
  t42714 = -1.*t24148*t24446*t38782;
  t42727 = -1.*t29692*t29825*t38782;
  t42728 = t42714 + t42727;
  t42480 = t42328*t42196;
  t42483 = t42317*t42372;
  t42489 = t42479 + t42480 + t42483;
  t42658 = t42193*t42478;
  t42667 = t42456*t42304;
  t42511 = -1.*t42317*t42438;
  t42512 = -1.*t42328*t42298;
  t42513 = t42510 + t42511 + t42512;
  t42740 = -1.*t42304*t42508;
  t42742 = -1.*t42478*t42294;
  t42601 = 7.842e-7*t41779*t42591;
  t42602 = -0.60533*t41779*t42591*t41013;
  t42611 = t42601 + t42602;
  t42613 = -0.5*var2[0]*t42611;
  t42629 = 7.842e-7*t42628;
  t42631 = -0.60533*t42628*t41013;
  t42632 = t42629 + t42631;
  t42633 = -0.5*var2[2]*t42632;
  t42642 = 7.842e-7*t42638;
  t42645 = -0.60533*t42638*t41013;
  t42646 = t42642 + t42645;
  t42647 = -0.5*var2[1]*t42646;
  t42650 = -7.7698536e-8*t36894;
  t42651 = -1.*t42193*t42190;
  t42652 = -1.*t29855*t42167;
  t42653 = -1.*t42242*t42294;
  t42657 = t42193*t42656;
  t42666 = t42664*t42304;
  t42668 = t42657 + t42658 + t42666 + t42667;
  t42670 = t42668*t42508;
  t42678 = t42193*t42304;
  t42689 = t42479 + t42678 + t40588;
  t42700 = t42294*t42689;
  t42731 = -1.*t42304*t42728;
  t42741 = -1.*t42656*t42294;
  t42743 = t42731 + t42740 + t42741 + t42742;
  t42746 = t42456*t42743;
  t42748 = -1.*t42304*t42294;
  t42752 = t40873 + t42510 + t42748;
  t42756 = t42193*t42752;
  t42767 = t42670 + t42700 + t42746 + t42756;
  t42771 = -0.60533*t41013*t42767;
  t42773 = t42650 + t42651 + t42652 + t42653 + t42771;
  t42774 = -0.5*var2[4]*t42773;
  t42775 = t41779*t29855*t42075;
  t42776 = t42092*t36894;
  t42777 = Power(t41779,2);
  t42781 = t42777*t42780*t36894;
  t42782 = Power(t23641,2);
  t42784 = t42782*t42780*t36894;
  t42787 = t42107*t41857;
  t42788 = t41779*t29855*t41975;
  t42789 = -1.*t23641*t29855*t42073;
  t42790 = t42776 + t42781 + t42784 + t42787 + t42788 + t42789;
  t42791 = t23641*t42790;
  t42792 = t42775 + t42791;
  t42794 = 7.842e-7*t42792;
  t42795 = -1.*t41779*t42664*t42190;
  t42796 = -1.*t41779*t42591*t42167;
  t42799 = -1.*t41779*t42242*t42728;
  t42800 = t41779*t42728*t42489;
  t42801 = -1.*t23641*t42664*t42328;
  t42802 = t41779*t42664*t42317;
  t42803 = -1.*t23641*t42656*t42196;
  t42804 = t41779*t42656*t42372;
  t42805 = t42801 + t42802 + t42658 + t42667 + t42803 + t42804;
  t42808 = t42805*t42438;
  t42829 = t41779*t42664*t42513;
  t42865 = t23641*t42328*t42728;
  t42877 = -1.*t41779*t42317*t42728;
  t42880 = -1.*t41779*t42656*t42438;
  t42884 = t23641*t42656*t42298;
  t42885 = t42865 + t42877 + t42740 + t42742 + t42880 + t42884;
  t42891 = t42372*t42885;
  t42894 = t42800 + t42808 + t42829 + t42891;
  t42899 = -0.60533*t41013*t42894;
  t42900 = t42794 + t42795 + t42796 + t42799 + t42899;
  t42907 = -0.5*var2[3]*t42900;
  t42911 = t42613 + t42633 + t42647 + t42774 + t42907;
  t42918 = var2[6]*t42911;
  t42934 = 0.05258*t38499;
  t42935 = t42934 + t39581;
  t42927 = 0.00112*t38499;
  t42928 = -0.05258*t38782;
  t42931 = t42927 + t42928;
  t42925 = -1.*t38782*t40672;
  t42932 = -1.*t38499*t42931;
  t42933 = -1.*t38499*t38968;
  t42940 = -1.*t42935*t38782;
  t42950 = t39873*t38782;
  t42953 = t42932 + t42933 + t42940 + t42950;
  t42956 = -1.*t38782*t42953;
  t42957 = -1.*t38499*t40975;
  t42958 = t38499*t42935;
  t42959 = -1.*t42931*t38782;
  t42960 = t42958 + t40873 + t42959 + t40973;
  t42961 = t38499*t42960;
  t42962 = t42925 + t42956 + t42957 + t42961;
  t42991 = -5.e-6*t38499;
  t42992 = -0.000985*t38782;
  t42996 = t42991 + t42992;
  t43003 = -1.*t38499*t42996;
  t43024 = t38499*t42190;
  t43033 = -0.000958*t38499;
  t43034 = t43033 + t42239;
  t43036 = t43034*t38782;
  t43039 = t42242*t38782;
  t43044 = Power(t24148,2);
  t43046 = Power(t29825,2);
  t43045 = t43044*t38499*t38968;
  t43047 = t38499*t43046*t38968;
  t43050 = t43045 + t43047 + t40588;
  t43055 = -1.*t43044*t38968*t38782;
  t43060 = -1.*t43046*t38968*t38782;
  t43061 = t40873 + t43055 + t43060;
  t43168 = t24148*t24446*t42935;
  t43174 = t29692*t29825*t42935;
  t43185 = t43168 + t43174;
  t43190 = t29692*t24148*t42935;
  t43191 = -1.*t24446*t29825*t42935;
  t43192 = t43190 + t43191;
  t43121 = -9.e-6*t38499;
  t43122 = 0.00003*t38782;
  t43127 = t43121 + t43122;
  t42518 = -1.*t38499*t23641;
  t43203 = -1.*t29692*t24148*t38782;
  t43204 = t24446*t29825*t38782;
  t43205 = t43203 + t43204;
  t43162 = -1.*t42456*t42478;
  t43187 = -1.*t43185*t42508;
  t43224 = t41779*t43205;
  t43225 = t42518 + t43224;
  t43198 = t42456*t43185;
  t43242 = -1.*t23641*t43192;
  t43243 = t41779*t42931;
  t43246 = t43242 + t43243;
  t43237 = t41779*t43192;
  t43239 = t23641*t42931;
  t43240 = t43237 + t43239;
  t43201 = t42478*t42728;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=(-0.5*(7.842e-7*t41671 - 0.60533*t41013*t41671)*var2[1] - 0.5*(7.842e-7*t38154 - 0.60533*t38154*t41013)*var2[2])*var2[6];
  p_output1[4]=(-0.5*(-7.842e-7*t23641*t29855 + 0.60533*t23641*t29855*t41013)*var2[0] - 0.5*(7.842e-7*t23034*t29855*t41779 - 0.60533*t23034*t29855*t41013*t41779)*var2[1] - 0.5*(-7.842e-7*t29855*t33305*t41779 + 0.60533*t29855*t33305*t41013*t41779)*var2[2] - 0.5*(-6.e-6*t41779 + 7.842e-7*(t23641*(-1.*t23641*t36894*t41952 - 1.*t23641*t36894*t41975) + t36894*t41779*(-1.*t41779*t41952 - 1.*t41779*t41975) - 1.*t23641*t36894*t42075 + t41779*(t36894*t41779*t41975 - 1.*t23641*t36894*t42073 + t42092*t42107)) + t23641*t29855*t42167 - 1.*t42190*t42196 - 1.*t42242*t42298 - 0.60533*t41013*((t42196*t42309 + t42196*t42317 + (t23641*t38782 - 1.*t41779*t42193)*t42328 + t42328*t42372)*t42438 + t42298*t42489 + t42196*t42513 + t42372*(-1.*t42298*t42309 - 1.*t42298*t42317 - 1.*t42328*t42438 - 1.*t42328*(-1.*t41779*t42294 + t42518))))*var2[3])*var2[6];
  p_output1[5]=t42918;
  p_output1[6]=t42918;
  p_output1[7]=var2[6]*(0.302665*t29855*t41779*t42962*var2[0] + 0.302665*t38154*t42962*var2[1] + 0.302665*(-1.*t23641*t29855*t33305 + t23034*t36894)*t42962*var2[2] - 0.5*(-1.*t42242*t42372 - 0.60533*(t42438*t42489 + t42372*t42513)*t42962 - 1.*t42438*t42996 - 1.*t42372*t43034 - 1.*t29855*t41779*t43127 - 1.*t42190*t43225 - 0.60533*t41013*(t42372*t42489 + t42513*t43225 + t42438*(t43198 + t43201 + t42328*(-1.*t38499*t41779 - 1.*t23641*t43205) + t42317*t43225 + t42372*t43240 + t42196*t43246) + t42372*(-1.*t42196*t42328 - 1.*t42317*t42372 + t43162 + t43187 - 1.*t42438*t43240 - 1.*t42298*t43246)))*var2[3] - 0.5*(-1.*t42242*t42456 - 1.*t42190*t42728 - 0.60533*(t42508*t42689 + t42456*t42752)*t42962 - 1.*t42508*t42996 - 1.*t42456*t43034 - 1.*t36894*t43127 - 0.60533*t41013*(t42456*t42689 + t42728*t42752 + t42456*(-1.*t42193*t42304 + t42932 + t42950 + t43162 + t43187 - 1.*t42294*t43192) + t42508*(t40873 + t42959 + t42193*t43192 + t43198 + t43201 + t42304*t43205)))*var2[4] - 0.5*(t43003 + t43024 + t43036 + t43039 - 0.60533*t41013*(-1.*t38782*(t42932 + t42950 - 1.*t38499*t38968*t43044 - 1.*t38782*t42935*t43044 - 1.*t38499*t38968*t43046 - 1.*t38782*t42935*t43046) - 1.*t38782*t43050 + t38499*(t40873 + t42959 + t38499*t42935*t43044 + t38499*t42935*t43046 + t43055 + t43060) - 1.*t38499*t43061) - 0.60533*t42962*(t38499*t43050 - 1.*t38782*t43061))*var2[5] - 0.5*(-1.21066*t41013*t42962 + t43003 + t43024 + t43036 + t43039)*var2[6] - 0.5*(9.e-6*t38499 - 0.00003*t38782)*var2[7]);
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

#include "Ce3_vec7_NaoH25V50.hh"

namespace SymFunction
{

void Ce3_vec7_NaoH25V50_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
