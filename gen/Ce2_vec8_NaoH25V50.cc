/*
 * Automatically Generated from Mathematica.
 * Tue 10 Jul 2018 11:12:59 GMT-04:00
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
  double t464;
  double t425;
  double t696;
  double t1804;
  double t2785;
  double t5778;
  double t3260;
  double t5766;
  double t5767;
  double t5770;
  double t5789;
  double t6307;
  double t6324;
  double t6942;
  double t6056;
  double t6126;
  double t6128;
  double t6968;
  double t153;
  double t219;
  double t244;
  double t283;
  double t317;
  double t322;
  double t326;
  double t390;
  double t5893;
  double t6135;
  double t7050;
  double t7608;
  double t6769;
  double t6999;
  double t8263;
  double t8470;
  double t8691;
  double t8662;
  double t8667;
  double t8677;
  double t8678;
  double t8696;
  double t8699;
  double t8705;
  double t8706;
  double t8707;
  double t8715;
  double t8718;
  double t8730;
  double t8770;
  double t8782;
  double t8787;
  double t8800;
  double t8802;
  double t8830;
  double t8847;
  double t8849;
  double t8856;
  double t8876;
  double t8911;
  double t8965;
  double t8967;
  double t8971;
  double t8975;
  double t8976;
  double t8978;
  double t9206;
  double t9225;
  double t9229;
  double t8996;
  double t9012;
  double t9017;
  double t9036;
  double t9037;
  double t9041;
  double t9054;
  double t9062;
  double t9063;
  double t9156;
  double t9197;
  double t9198;
  double t9277;
  double t9278;
  double t9279;
  double t9388;
  double t9393;
  double t9394;
  double t9438;
  double t9439;
  double t9563;
  double t9677;
  double t9678;
  double t9687;
  double t9691;
  double t9692;
  double t9693;
  double t9668;
  double t9669;
  double t9671;
  double t9421;
  double t9609;
  double t9630;
  double t9731;
  double t9697;
  double t9698;
  double t9661;
  double t9662;
  double t9982;
  double t10014;
  double t10018;
  double t10020;
  double t10021;
  double t10022;
  double t9690;
  double t9702;
  double t10305;
  double t10313;
  double t10329;
  double t10294;
  double t10295;
  double t10296;
  double t10062;
  double t10072;
  double t10073;
  double t9732;
  double t9750;
  double t10019;
  double t10027;
  double t10028;
  double t9768;
  double t9772;
  double t10335;
  double t10337;
  double t10049;
  double t10050;
  double t9794;
  double t9807;
  double t9841;
  double t9844;
  double t2908;
  double t6052;
  double t6055;
  double t6195;
  double t6427;
  double t6772;
  double t6773;
  double t6987;
  double t6994;
  double t6995;
  double t7012;
  double t7022;
  double t7034;
  double t10742;
  double t10744;
  double t10745;
  double t7377;
  double t7626;
  double t7627;
  double t7814;
  double t7880;
  double t7906;
  double t7920;
  double t8100;
  double t8119;
  double t8187;
  double t8471;
  double t8472;
  double t8484;
  double t8492;
  double t8617;
  double t8656;
  double t8657;
  double t9269;
  double t9270;
  double t9271;
  double t9233;
  double t9237;
  double t9260;
  double t9264;
  double t9266;
  double t9267;
  double t9272;
  double t9273;
  double t9030;
  double t9046;
  double t9047;
  double t9152;
  double t9199;
  double t9201;
  double t9660;
  double t9663;
  double t9664;
  double t9666;
  double t9673;
  double t9694;
  double t9695;
  double t9696;
  double t9699;
  double t9703;
  double t9705;
  double t9710;
  double t9711;
  double t9730;
  double t9734;
  double t9735;
  double t9736;
  double t9741;
  double t9752;
  double t9755;
  double t9757;
  double t9767;
  double t9769;
  double t9771;
  double t9774;
  double t9775;
  double t9780;
  double t9786;
  double t9788;
  double t9789;
  double t9796;
  double t9798;
  double t9806;
  double t9810;
  double t9811;
  double t9840;
  double t9842;
  double t9845;
  double t9846;
  double t9847;
  double t9848;
  double t10041;
  double t10051;
  double t10052;
  double t10058;
  double t10074;
  double t10303;
  double t10330;
  double t10331;
  double t10334;
  double t10338;
  double t10342;
  double t10379;
  double t10380;
  double t10381;
  double t10388;
  double t10408;
  double t10451;
  double t10473;
  double t10478;
  double t10479;
  double t10495;
  double t10498;
  double t10499;
  double t10515;
  double t10519;
  double t10539;
  double t10545;
  double t10547;
  double t10550;
  double t10566;
  double t10570;
  double t10655;
  double t10660;
  double t10671;
  double t10677;
  double t10683;
  double t10684;
  double t10697;
  double t10698;
  double t10699;
  double t10705;
  double t10708;
  double t10709;
  double t10710;
  double t10715;
  double t10716;
  double t10722;
  double t10725;
  double t10726;
  double t10889;
  double t10890;
  double t10891;
  double t8982;
  double t8990;
  double t9048;
  double t9202;
  double t9203;
  double t10791;
  double t10792;
  double t10793;
  double t10800;
  double t10801;
  double t10061;
  double t10386;
  double t10494;
  double t10659;
  double t10727;
  double t10728;
  double t10854;
  double t10855;
  double t10856;
  double t10865;
  double t10869;
  double t10876;
  double t11136;
  double t11140;
  double t11213;
  double t11229;
  double t11246;
  double t11264;
  double t11367;
  double t11339;
  double t11345;
  double t11346;
  double t11349;
  double t11350;
  double t11351;
  double t11368;
  double t11380;
  double t11381;
  double t11388;
  double t11389;
  double t11391;
  double t11392;
  double t11394;
  double t11395;
  double t11400;
  double t11401;
  double t11410;
  double t11412;
  double t11272;
  double t11284;
  double t11552;
  double t9667;
  double t9713;
  double t9742;
  double t9787;
  double t9849;
  double t9967;
  double t10831;
  double t10838;
  double t10841;
  double t10848;
  double t10849;
  double t10850;
  double t10985;
  double t10989;
  double t10991;
  double t10994;
  double t10998;
  double t10999;
  double t11897;
  double t11567;
  double t11569;
  double t11646;
  double t11450;
  double t11455;
  double t11456;
  double t11890;
  double t11891;
  double t11892;
  double t11896;
  double t11898;
  double t11908;
  double t11909;
  double t11989;
  double t11992;
  double t12005;
  double t14982;
  double t15138;
  double t15446;
  double t15685;
  double t15800;
  double t17024;
  double t11482;
  double t11538;
  double t11539;
  double t11791;
  double t11798;
  double t17171;
  double t11559;
  double t11560;
  double t11561;
  double t11562;
  double t11563;
  double t11657;
  double t18225;
  double t18181;
  double t18182;
  double t18188;
  double t18194;
  double t18199;
  double t18207;
  double t18210;
  double t18211;
  double t18214;
  double t18231;
  double t18238;
  double t18239;
  double t18241;
  double t18242;
  double t18011;
  double t18012;
  double t18086;
  double t17106;
  double t17116;
  double t11481;
  double t11540;
  double t18087;
  double t18262;
  double t18269;
  double t18270;
  double t18305;
  double t18313;
  double t18330;
  double t18334;
  double t18339;
  double t17036;
  double t17068;
  double t18450;
  double t18467;
  double t18474;
  double t18525;
  double t18828;
  double t11416;
  double t11457;
  double t8701;
  double t8731;
  double t8733;
  double t10916;
  double t10920;
  double t10921;
  double t10759;
  double t10769;
  double t10770;
  double t11800;
  double t11801;
  double t11803;
  double t11285;
  double t11288;
  double t11293;
  t464 = Cos(var1[7]);
  t425 = Sin(var1[7]);
  t696 = -0.00112*t464;
  t1804 = 0.05258*t425;
  t2785 = t696 + t1804;
  t5778 = 0.00112*t425;
  t3260 = -1.*t464;
  t5766 = 1. + t3260;
  t5767 = 0.1265*t5766;
  t5770 = 0.17908*t464;
  t5789 = t5767 + t5770 + t5778;
  t6307 = 0.05258*t464;
  t6324 = t6307 + t5778;
  t6942 = -1.*t464*t5789;
  t6056 = 0.00112*t464;
  t6126 = -0.05258*t425;
  t6128 = t6056 + t6126;
  t6968 = -1.*t2785*t425;
  t153 = Cos(var1[4]);
  t219 = Cos(var1[6]);
  t244 = Sin(var1[5]);
  t283 = -1.*t219*t244;
  t317 = Cos(var1[5]);
  t322 = Sin(var1[6]);
  t326 = -1.*t317*t322;
  t390 = t283 + t326;
  t5893 = -1.*t5789*t425;
  t6135 = -1.*t464*t6128;
  t7050 = Power(t219,2);
  t7608 = Power(t322,2);
  t6769 = t5789*t425;
  t6999 = -1.*t6128*t425;
  t8263 = -1.*t7050*t2785*t425;
  t8470 = -1.*t7608*t2785*t425;
  t8691 = Sin(var1[4]);
  t8662 = t317*t219*t464;
  t8667 = -1.*t464*t244*t322;
  t8677 = t8662 + t8667;
  t8678 = t153*t8677;
  t8696 = -1.*t8691*t425;
  t8699 = t8678 + t8696;
  t8705 = -1.*t464*t8691;
  t8706 = -1.*t317*t219*t425;
  t8707 = t244*t322*t425;
  t8715 = t8706 + t8707;
  t8718 = t153*t8715;
  t8730 = t8705 + t8718;
  t8770 = t464*t8691;
  t8782 = t317*t219*t425;
  t8787 = -1.*t244*t322*t425;
  t8800 = t8782 + t8787;
  t8802 = t153*t8800;
  t8830 = t8770 + t8802;
  t8847 = Sin(var1[3]);
  t8849 = t219*t464*t244;
  t8856 = t317*t464*t322;
  t8876 = t8849 + t8856;
  t8911 = t8847*t8876;
  t8965 = Cos(var1[3]);
  t8967 = -1.*t8691*t8677;
  t8971 = -1.*t153*t425;
  t8975 = t8967 + t8971;
  t8976 = t8965*t8975;
  t8978 = t8911 + t8976;
  t9206 = t8965*t8876;
  t9225 = -1.*t8847*t8975;
  t9229 = t9206 + t9225;
  t8996 = t219*t244*t425;
  t9012 = t317*t322*t425;
  t9017 = t8996 + t9012;
  t9036 = t153*t464;
  t9037 = -1.*t8691*t8800;
  t9041 = t9036 + t9037;
  t9054 = -1.*t219*t244*t425;
  t9062 = -1.*t317*t322*t425;
  t9063 = t9054 + t9062;
  t9156 = -1.*t153*t464;
  t9197 = -1.*t8691*t8715;
  t9198 = t9156 + t9197;
  t9277 = t317*t219;
  t9278 = -1.*t244*t322;
  t9279 = t9277 + t9278;
  t9388 = t219*t244*t2785;
  t9393 = t317*t322*t2785;
  t9394 = t9388 + t9393;
  t9438 = t317*t219*t2785;
  t9439 = -1.*t244*t322*t2785;
  t9563 = t9438 + t9439;
  t9677 = t219*t244*t6324;
  t9678 = t317*t322*t6324;
  t9687 = t9677 + t9678;
  t9691 = t317*t219*t6324;
  t9692 = -1.*t244*t322*t6324;
  t9693 = t9691 + t9692;
  t9668 = -1.*t9279*t9394;
  t9669 = -1.*t390*t9563;
  t9671 = t9668 + t9669;
  t9421 = t9279*t9394;
  t9609 = t390*t9563;
  t9630 = t9421 + t9609;
  t9731 = t464*t5789;
  t9697 = t8876*t9394;
  t9698 = t8677*t9563;
  t9661 = -1.*t8876*t9394;
  t9662 = -1.*t8677*t9563;
  t9982 = -1.*t8691*t9563;
  t10014 = t153*t5789;
  t10018 = t9982 + t10014;
  t10020 = t153*t9563;
  t10021 = t8691*t5789;
  t10022 = t10020 + t10021;
  t9690 = -1.*t9279*t9687;
  t9702 = t9687*t9017;
  t10305 = t153*t9693;
  t10313 = t8691*t6128;
  t10329 = t10305 + t10313;
  t10294 = -1.*t8691*t9693;
  t10295 = t153*t6128;
  t10296 = t10294 + t10295;
  t10062 = t8691*t390*t10018;
  t10072 = -1.*t153*t390*t10022;
  t10073 = t10062 + t10072 + t9668;
  t9732 = t9394*t9017;
  t9750 = t9279*t9687;
  t10019 = -1.*t8691*t390*t10018;
  t10027 = t153*t390*t10022;
  t10028 = t10019 + t10027 + t9421;
  t9768 = -1.*t8876*t9687;
  t9772 = -1.*t9394*t9063;
  t10335 = t10018*t8975;
  t10337 = t10022*t8699;
  t10049 = -1.*t10018*t8975;
  t10050 = -1.*t10022*t8699;
  t9794 = -1.*t9687*t9017;
  t9807 = -1.*t9394*t9017;
  t9841 = t8876*t9687;
  t9844 = t9394*t9063;
  t2908 = t464*t2785;
  t6052 = t2908 + t5893;
  t6055 = -1.*t425*t6052;
  t6195 = -1.*t464*t2785;
  t6427 = -1.*t6324*t425;
  t6772 = t6135 + t6195 + t6427 + t6769;
  t6773 = -1.*t425*t6772;
  t6987 = t6942 + t6968;
  t6994 = -1.*t464*t6987;
  t6995 = t464*t6324;
  t7012 = t6995 + t6942 + t6999 + t6968;
  t7022 = t464*t7012;
  t7034 = t6055 + t6773 + t6994 + t7022;
  t10742 = t8847*t8691*t390;
  t10744 = t8965*t9279;
  t10745 = t10742 + t10744;
  t7377 = t7050*t464*t2785;
  t7626 = t464*t7608*t2785;
  t7627 = t7377 + t7626 + t5893;
  t7814 = -1.*t425*t7627;
  t7880 = -1.*t7050*t464*t2785;
  t7906 = -1.*t464*t7608*t2785;
  t7920 = -1.*t7050*t6324*t425;
  t8100 = -1.*t7608*t6324*t425;
  t8119 = t6135 + t7880 + t7906 + t7920 + t8100 + t6769;
  t8187 = -1.*t425*t8119;
  t8471 = t6942 + t8263 + t8470;
  t8472 = -1.*t464*t8471;
  t8484 = t7050*t464*t6324;
  t8492 = t464*t7608*t6324;
  t8617 = t8484 + t8492 + t6942 + t6999 + t8263 + t8470;
  t8656 = t464*t8617;
  t8657 = t7814 + t8187 + t8472 + t8656;
  t9269 = t8965*t9063;
  t9270 = -1.*t8847*t9198;
  t9271 = t9269 + t9270;
  t9233 = 0.60533*t9229*t8830;
  t9237 = 0.60533*t9229*t8730;
  t9260 = t8965*t9017;
  t9264 = -1.*t8847*t9041;
  t9266 = t9260 + t9264;
  t9267 = 0.60533*t8699*t9266;
  t9272 = 0.60533*t8699*t9271;
  t9273 = t9233 + t9237 + t9267 + t9272;
  t9030 = t8847*t9017;
  t9046 = t8965*t9041;
  t9047 = t9030 + t9046;
  t9152 = t8847*t9063;
  t9199 = t8965*t9198;
  t9201 = t9152 + t9199;
  t9660 = t8876*t9630;
  t9663 = t9661 + t9662 + t6769;
  t9664 = t9279*t9663;
  t9666 = t9660 + t9664;
  t9673 = t8876*t9671;
  t9694 = -1.*t390*t9693;
  t9695 = t9690 + t9694;
  t9696 = t9695*t9017;
  t9699 = t464*t6128;
  t9703 = t9693*t8800;
  t9705 = t9697 + t9698 + t9699 + t5893 + t9702 + t9703;
  t9710 = t9279*t9705;
  t9711 = t9673 + t9696 + t9710;
  t9730 = t9671*t9017;
  t9734 = t9563*t8800;
  t9735 = t9731 + t9732 + t9734;
  t9736 = t9279*t9735;
  t9741 = t9730 + t9736;
  t9752 = t390*t9693;
  t9755 = t9750 + t9752;
  t9757 = t8876*t9755;
  t9767 = t9630*t9063;
  t9769 = -1.*t8677*t9693;
  t9771 = t6128*t425;
  t9774 = -1.*t9563*t8715;
  t9775 = t9768 + t9769 + t9731 + t9771 + t9772 + t9774;
  t9780 = t9279*t9775;
  t9786 = t9757 + t9767 + t9780;
  t9788 = t9697 + t9698 + t5893;
  t9789 = t8876*t9788;
  t9796 = -1.*t9693*t8800;
  t9798 = t9661 + t9662 + t6135 + t6769 + t9794 + t9796;
  t9806 = t8876*t9798;
  t9810 = -1.*t9563*t8800;
  t9811 = t6942 + t9807 + t9810;
  t9840 = t9063*t9811;
  t9842 = t8677*t9693;
  t9845 = t9563*t8715;
  t9846 = t9841 + t9842 + t6942 + t6999 + t9844 + t9845;
  t9847 = t9017*t9846;
  t9848 = t9789 + t9806 + t9840 + t9847;
  t10041 = t10028*t8699;
  t10051 = t9661 + t10049 + t10050;
  t10052 = t153*t390*t10051;
  t10058 = t10041 + t10052;
  t10074 = t10073*t8699;
  t10303 = t8691*t390*t10296;
  t10330 = -1.*t153*t390*t10329;
  t10331 = t10303 + t10330 + t9690;
  t10334 = t10331*t8830;
  t10338 = t10329*t8830;
  t10342 = t10296*t9041;
  t10379 = t9697 + t10335 + t10337 + t9702 + t10338 + t10342;
  t10380 = t153*t390*t10379;
  t10381 = t10074 + t10334 + t10380;
  t10388 = t10073*t8830;
  t10408 = t10022*t8830;
  t10451 = t10018*t9041;
  t10473 = t9732 + t10408 + t10451;
  t10478 = t153*t390*t10473;
  t10479 = t10388 + t10478;
  t10495 = -1.*t8691*t390*t10296;
  t10498 = t153*t390*t10329;
  t10499 = t10495 + t10498 + t9750;
  t10515 = t10499*t8699;
  t10519 = t10028*t8730;
  t10539 = -1.*t10296*t8975;
  t10545 = -1.*t10329*t8699;
  t10547 = -1.*t10022*t8730;
  t10550 = -1.*t10018*t9198;
  t10566 = t9768 + t10539 + t10545 + t9772 + t10547 + t10550;
  t10570 = t153*t390*t10566;
  t10655 = t10515 + t10519 + t10570;
  t10660 = t9697 + t10335 + t10337;
  t10671 = t8699*t10660;
  t10677 = -1.*t10329*t8830;
  t10683 = -1.*t10296*t9041;
  t10684 = t9661 + t10049 + t10050 + t9794 + t10677 + t10683;
  t10697 = t8699*t10684;
  t10698 = -1.*t10022*t8830;
  t10699 = -1.*t10018*t9041;
  t10705 = t9807 + t10698 + t10699;
  t10708 = t8730*t10705;
  t10709 = t10296*t8975;
  t10710 = t10329*t8699;
  t10715 = t10022*t8730;
  t10716 = t10018*t9198;
  t10722 = t9841 + t10709 + t10710 + t9844 + t10715 + t10716;
  t10725 = t8830*t10722;
  t10726 = t10671 + t10697 + t10708 + t10725;
  t10889 = -1.*t8965*t8691*t390;
  t10890 = t8847*t9279;
  t10891 = t10889 + t10890;
  t8982 = 0.60533*t8978*t8830;
  t8990 = 0.60533*t8978*t8730;
  t9048 = 0.60533*t8699*t9047;
  t9202 = 0.60533*t8699*t9201;
  t9203 = t8982 + t8990 + t9048 + t9202;
  t10791 = 0.60533*t9229*t9047;
  t10792 = 0.60533*t8978*t9266;
  t10793 = 0.60533*t9229*t9201;
  t10800 = 0.60533*t8978*t9271;
  t10801 = t10791 + t10792 + t10793 + t10800;
  t10061 = 0.60533*t8699*t10058;
  t10386 = 0.60533*t8699*t10381;
  t10494 = 0.60533*t8730*t10479;
  t10659 = 0.60533*t8830*t10655;
  t10727 = 0.60533*t153*t390*t10726;
  t10728 = t10061 + t10386 + t10494 + t10659 + t10727;
  t10854 = 0.60533*t9229*t10058;
  t10855 = 0.60533*t9229*t10381;
  t10856 = 0.60533*t9271*t10479;
  t10865 = 0.60533*t9266*t10655;
  t10869 = 0.60533*t10745*t10726;
  t10876 = t10854 + t10855 + t10856 + t10865 + t10869;
  t11136 = 0.60533*t8978*t10058;
  t11140 = 0.60533*t8978*t10381;
  t11213 = 0.60533*t9201*t10479;
  t11229 = 0.60533*t9047*t10655;
  t11246 = 0.60533*t10891*t10726;
  t11264 = t11136 + t11140 + t11213 + t11229 + t11246;
  t11367 = 5.e-6*t8699;
  t11339 = 9.e-6*t153*t390;
  t11345 = 0.000958*t8699;
  t11346 = 5.e-6*t8830;
  t11349 = t11339 + t11345 + t11346;
  t11350 = -1.*t464*t11349;
  t11351 = -0.00003*t153*t390;
  t11368 = 0.000985*t8830;
  t11380 = t11351 + t11367 + t11368;
  t11381 = -1.*t425*t11380;
  t11388 = 0.000985*t8699;
  t11389 = 5.e-6*t8730;
  t11391 = t11388 + t11389;
  t11392 = t464*t11391;
  t11394 = 0.000958*t8730;
  t11395 = t11367 + t11394;
  t11400 = -1.*t425*t11395;
  t11401 = t10660*t8830;
  t11410 = t8699*t10705;
  t11412 = t11401 + t11410;
  t11272 = -0.00003*t8699;
  t11284 = 9.e-6*t8730;
  t11552 = t11272 + t11284;
  t9667 = 0.60533*t8699*t9666;
  t9713 = 0.60533*t8699*t9711;
  t9742 = 0.60533*t8730*t9741;
  t9787 = 0.60533*t8830*t9786;
  t9849 = 0.60533*t153*t390*t9848;
  t9967 = t9667 + t9713 + t9742 + t9787 + t9849;
  t10831 = 0.60533*t9229*t9666;
  t10838 = 0.60533*t9229*t9711;
  t10841 = 0.60533*t9741*t9271;
  t10848 = 0.60533*t9266*t9786;
  t10849 = 0.60533*t10745*t9848;
  t10850 = t10831 + t10838 + t10841 + t10848 + t10849;
  t10985 = 0.60533*t8978*t9666;
  t10989 = 0.60533*t8978*t9711;
  t10991 = 0.60533*t9741*t9201;
  t10994 = 0.60533*t9047*t9786;
  t10998 = 0.60533*t10891*t9848;
  t10999 = t10985 + t10989 + t10991 + t10994 + t10998;
  t11897 = 5.e-6*t8876;
  t11567 = t9017*t9788;
  t11569 = t8876*t9811;
  t11646 = t11567 + t11569;
  t11450 = t464*t6052;
  t11455 = -1.*t425*t6987;
  t11456 = t11450 + t11455;
  t11890 = 0.000985*t8876;
  t11891 = 5.e-6*t9063;
  t11892 = t11890 + t11891;
  t11896 = t464*t11892;
  t11898 = 0.000958*t9063;
  t11908 = t11897 + t11898;
  t11909 = -1.*t425*t11908;
  t11989 = 0.000958*t8876;
  t11992 = 9.e-6*t9279;
  t12005 = 5.e-6*t9017;
  t14982 = t11989 + t11992 + t12005;
  t15138 = -1.*t464*t14982;
  t15446 = -0.00003*t9279;
  t15685 = 0.000985*t9017;
  t15800 = t11897 + t15446 + t15685;
  t17024 = -1.*t425*t15800;
  t11482 = t464*t7627;
  t11538 = -1.*t425*t8471;
  t11539 = t11482 + t11538;
  t11791 = -0.00003*t8876;
  t11798 = 9.e-6*t9063;
  t17171 = t11791 + t11798;
  t11559 = 0.60533*t10058*t9786;
  t11560 = 0.60533*t9741*t10381;
  t11561 = 0.60533*t9848*t11412;
  t11562 = 0.60533*t9711*t10479;
  t11563 = 0.60533*t9666*t10655;
  t11657 = 0.60533*t11646*t10726;
  t18225 = -5.e-6*t425;
  t18181 = -5.e-6*t464;
  t18182 = -0.000985*t425;
  t18188 = t18181 + t18182;
  t18194 = t464*t18188;
  t18199 = 5.e-6*t464;
  t18207 = -0.000958*t425;
  t18210 = t18199 + t18207;
  t18211 = -1.*t464*t18210;
  t18214 = -0.000958*t464;
  t18231 = t18214 + t18225;
  t18238 = -1.*t18231*t425;
  t18239 = 0.000985*t464;
  t18241 = t18239 + t18225;
  t18242 = -1.*t18241*t425;
  t18011 = -9.e-6*t464;
  t18012 = 0.00003*t425;
  t18086 = t18011 + t18012;
  t17106 = 0.60533*t8657*t11646;
  t17116 = 0.60533*t11539*t9848;
  t11481 = 0.60533*t8657*t11412;
  t11540 = 0.60533*t11539*t10726;
  t18087 = -0.5*var2[7]*t18086;
  t18262 = 0.60533*t7034*t11539;
  t18269 = 0.60533*t11456*t8657;
  t18270 = t18194 + t18211 + t18238 + t18242 + t18262 + t18269;
  t18305 = t8876*t18231;
  t18313 = t8876*t18241;
  t18330 = t9279*t18086;
  t18334 = t18210*t9063;
  t18339 = t18188*t9017;
  t17036 = 0.60533*t7034*t11646;
  t17068 = 0.60533*t11456*t9848;
  t18450 = t153*t390*t18086;
  t18467 = t18231*t8699;
  t18474 = t18241*t8699;
  t18525 = t18188*t8830;
  t18828 = t18210*t8730;
  t11416 = 0.60533*t7034*t11412;
  t11457 = 0.60533*t11456*t10726;
  t8701 = 0.0006779696*t8699;
  t8731 = 0.0318282514*t8730;
  t8733 = t8701 + t8731;
  t10916 = 0.0006779696*t8978;
  t10920 = 0.0318282514*t9201;
  t10921 = t10916 + t10920;
  t10759 = 0.0006779696*t9229;
  t10769 = 0.0318282514*t9271;
  t10770 = t10759 + t10769;
  t11800 = 0.0318282514*t9711;
  t11801 = 0.0006779696*t9786;
  t11803 = t11791 + t11798 + t11800 + t11801;
  t11285 = 0.0318282514*t10381;
  t11288 = 0.0006779696*t10655;
  t11293 = t11272 + t11284 + t11285 + t11288;
  p_output1[0]=var2[7]*(-0.5*(1.21066*t8699*t8730 + 1.21066*t8699*t8830)*var2[0] - 0.5*t9273*var2[1] - 0.5*t9203*var2[2] - 0.5*t10728*var2[3] - 0.5*t9967*var2[4] - 0.302665*t153*t390*t8657*var2[5] - 0.302665*t153*t390*t7034*var2[6] - 0.5*t8733*var2[7]);
  p_output1[1]=var2[7]*(-0.5*t9273*var2[0] - 0.5*(1.21066*t9229*t9266 + 1.21066*t9229*t9271)*var2[1] - 0.5*t10801*var2[2] - 0.5*t10876*var2[3] - 0.5*t10850*var2[4] - 0.302665*t10745*t8657*var2[5] - 0.302665*t10745*t7034*var2[6] - 0.5*t10770*var2[7]);
  p_output1[2]=var2[7]*(-0.5*t9203*var2[0] - 0.5*t10801*var2[1] - 0.5*(1.21066*t8978*t9047 + 1.21066*t8978*t9201)*var2[2] - 0.5*t11264*var2[3] - 0.5*t10999*var2[4] - 0.302665*t10891*t8657*var2[5] - 0.302665*t10891*t7034*var2[6] - 0.5*t10921*var2[7]);
  p_output1[3]=var2[7]*(-0.5*t10728*var2[0] - 0.5*t10876*var2[1] - 0.5*t11264*var2[2] - 0.5*(1.21066*t10381*t10479 + 1.21066*t10058*t10655 + 1.21066*t10726*t11412 + t11552*t153*t390 + t11380*t8699 + t11395*t8699 + t11349*t8730 + t11391*t8830)*var2[3] - 0.5*(t11559 + t11560 + t11561 + t11562 + t11563 + t11657 + t11380*t8876 + t11395*t8876 + t11391*t9017 + t11349*t9063 + t11552*t9279)*var2[4] - 0.5*(t11350 + t11381 + t11392 + t11400 + t11481 + t11540)*var2[5] - 0.5*(t11350 + t11381 + t11392 + t11400 + t11416 + t11457)*var2[6] - 0.5*t11293*var2[7]);
  p_output1[4]=var2[7]*(-0.5*t9967*var2[0] - 0.5*t10850*var2[1] - 0.5*t10999*var2[2] - 0.5*(t11559 + t11560 + t11561 + t11562 + t11563 + t11657 + t153*t17171*t390 + t11908*t8699 + t15800*t8699 + t14982*t8730 + t11892*t8830)*var2[3] - 0.5*(t11908*t8876 + t15800*t8876 + t11892*t9017 + t14982*t9063 + t17171*t9279 + 1.21066*t9711*t9741 + 1.21066*t9666*t9786 + 1.21066*t11646*t9848)*var2[4] - 0.5*(t11896 + t11909 + t15138 + t17024 + t17106 + t17116)*var2[5] - 0.5*(t11896 + t11909 + t15138 + t17024 + t17036 + t17068)*var2[6] - 0.5*t11803*var2[7]);
  p_output1[5]=(t18087 - 0.302665*t153*t390*t8657*var2[0] - 0.302665*t10745*t8657*var2[1] - 0.302665*t10891*t8657*var2[2] - 0.5*(t11481 + t11540 + t18450 + t18467 + t18474 + t18525 + t18828)*var2[3] - 0.5*(t17106 + t17116 + t18305 + t18313 + t18330 + t18334 + t18339)*var2[4] - 0.5*(t18194 + t18211 + t18238 + t18242 + 1.21066*t11539*t8657)*var2[5] - 0.5*t18270*var2[6])*var2[7];
  p_output1[6]=(t18087 - 0.302665*t153*t390*t7034*var2[0] - 0.302665*t10745*t7034*var2[1] - 0.302665*t10891*t7034*var2[2] - 0.5*(t11416 + t11457 + t18450 + t18467 + t18474 + t18525 + t18828)*var2[3] - 0.5*(t17036 + t17068 + t18305 + t18313 + t18330 + t18334 + t18339)*var2[4] - 0.5*t18270*var2[5] - 0.5*(t18194 + t18211 + t18238 + t18242 + 1.21066*t11456*t7034)*var2[6])*var2[7];
  p_output1[7]=(-0.5*t8733*var2[0] - 0.5*t10770*var2[1] - 0.5*t10921*var2[2] - 0.5*t11293*var2[3] - 0.5*t11803*var2[4] - 0.5*t18086*var2[5] - 0.5*t18086*var2[6])*var2[7];
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

#include "Ce2_vec8_NaoH25V50.hh"

namespace SymFunction
{

void Ce2_vec8_NaoH25V50_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
