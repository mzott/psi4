#include <stdio.h>
#include "libint.h"
#include "vrr_header.h"

  /* Computes quartets necessary to compute (g0|fd) integrals */

void vrr_order_g0fd(Libint_t * Libint, prim_data *Data)
{
 REALTYPE *vrr_stack = Libint->vrr_stack;
 REALTYPE *tmp, *target_ptr;
 int i, am[2];
 _BUILD_p000(Data,vrr_stack+0, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+3, Data->F+4, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+6, Data->F+2, Data->F+3, NULL, NULL, NULL);
 _BUILD_00p0(Data,vrr_stack+9, Data->F+4, Data->F+5, NULL, NULL, NULL);
 _BUILD_p0p0(Data,vrr_stack+12, vrr_stack+3, vrr_stack+9, NULL, NULL, Data->F+4);
 _BUILD_p0p0(Data,vrr_stack+21, vrr_stack+6, vrr_stack+3, NULL, NULL, Data->F+3);
 _BUILD_d0p0(Data,vrr_stack+30, vrr_stack+21, vrr_stack+12, vrr_stack+6, vrr_stack+3, vrr_stack+0);
 _BUILD_00d0(Data,vrr_stack+48, vrr_stack+3, vrr_stack+9, Data->F+3, Data->F+4, NULL);
 _BUILD_00d0(Data,vrr_stack+54, vrr_stack+6, vrr_stack+3, Data->F+2, Data->F+3, NULL);
 _BUILD_p0d0(Data,vrr_stack+60, vrr_stack+54, vrr_stack+48, NULL, NULL, vrr_stack+3);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+1, Data->F+2, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+78, vrr_stack+0, vrr_stack+6, Data->F+1, Data->F+2, NULL);
 _BUILD_p0d0(Data,vrr_stack+84, vrr_stack+78, vrr_stack+54, NULL, NULL, vrr_stack+6);
 _BUILD_00p0(Data,vrr_stack+102, Data->F+5, Data->F+6, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+105, vrr_stack+9, vrr_stack+102, Data->F+4, Data->F+5, NULL);
 _BUILD_p0d0(Data,vrr_stack+111, vrr_stack+48, vrr_stack+105, NULL, NULL, vrr_stack+9);
 _BUILD_d0d0(Data,vrr_stack+129, vrr_stack+60, vrr_stack+111, vrr_stack+54, vrr_stack+48, vrr_stack+12);
 _BUILD_d0d0(Data,vrr_stack+165, vrr_stack+84, vrr_stack+60, vrr_stack+78, vrr_stack+54, vrr_stack+21);
 _BUILD_f0d0(Data,vrr_stack+201, vrr_stack+165, vrr_stack+129, vrr_stack+84, vrr_stack+60, vrr_stack+30);
 _BUILD_00f0(Data,vrr_stack+12, vrr_stack+54, vrr_stack+48, vrr_stack+6, vrr_stack+3, NULL);
 _BUILD_00f0(Data,vrr_stack+22, vrr_stack+78, vrr_stack+54, vrr_stack+0, vrr_stack+6, NULL);
 _BUILD_00f0(Data,vrr_stack+32, vrr_stack+48, vrr_stack+105, vrr_stack+3, vrr_stack+9, NULL);
 _BUILD_p0f0(Data,vrr_stack+261, vrr_stack+12, vrr_stack+32, NULL, NULL, vrr_stack+48);
 _BUILD_p0f0(Data,vrr_stack+291, vrr_stack+22, vrr_stack+12, NULL, NULL, vrr_stack+54);
 _BUILD_d0f0(Data,vrr_stack+321, vrr_stack+291, vrr_stack+261, vrr_stack+22, vrr_stack+12, vrr_stack+60);
 _BUILD_00p0(Data,vrr_stack+60, Data->F+0, Data->F+1, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+3, vrr_stack+60, vrr_stack+0, Data->F+0, Data->F+1, NULL);
 _BUILD_00f0(Data,vrr_stack+63, vrr_stack+3, vrr_stack+78, vrr_stack+60, vrr_stack+0, NULL);
 _BUILD_p0f0(Data,vrr_stack+381, vrr_stack+63, vrr_stack+22, NULL, NULL, vrr_stack+78);
 _BUILD_d0f0(Data,vrr_stack+411, vrr_stack+381, vrr_stack+291, vrr_stack+63, vrr_stack+22, vrr_stack+84);
 _BUILD_00p0(Data,vrr_stack+0, Data->F+6, Data->F+7, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+42, vrr_stack+102, vrr_stack+0, Data->F+5, Data->F+6, NULL);
 _BUILD_00f0(Data,vrr_stack+84, vrr_stack+105, vrr_stack+42, vrr_stack+9, vrr_stack+102, NULL);
 _BUILD_p0f0(Data,vrr_stack+471, vrr_stack+32, vrr_stack+84, NULL, NULL, vrr_stack+105);
 _BUILD_d0f0(Data,vrr_stack+501, vrr_stack+261, vrr_stack+471, vrr_stack+12, vrr_stack+32, vrr_stack+111);
 _BUILD_f0f0(Data,vrr_stack+561, vrr_stack+321, vrr_stack+501, vrr_stack+291, vrr_stack+261, vrr_stack+129);
 _BUILD_f0f0(Data,vrr_stack+661, vrr_stack+411, vrr_stack+321, vrr_stack+381, vrr_stack+291, vrr_stack+165);
 _BUILD_00g0(Data,vrr_stack+381, vrr_stack+12, vrr_stack+32, vrr_stack+54, vrr_stack+48, NULL);
 _BUILD_00g0(Data,vrr_stack+396, vrr_stack+22, vrr_stack+12, vrr_stack+78, vrr_stack+54, NULL);
 _BUILD_00g0(Data,vrr_stack+111, vrr_stack+32, vrr_stack+84, vrr_stack+48, vrr_stack+105, NULL);
 _BUILD_p0g0(Data,vrr_stack+126, vrr_stack+381, vrr_stack+111, NULL, NULL, vrr_stack+32);
 _BUILD_p0g0(Data,vrr_stack+761, vrr_stack+396, vrr_stack+381, NULL, NULL, vrr_stack+12);
 _BUILD_d0g0(Data,vrr_stack+806, vrr_stack+761, vrr_stack+126, vrr_stack+396, vrr_stack+381, vrr_stack+261);
 _BUILD_00g0(Data,vrr_stack+48, vrr_stack+63, vrr_stack+22, vrr_stack+3, vrr_stack+78, NULL);
 _BUILD_p0g0(Data,vrr_stack+896, vrr_stack+48, vrr_stack+396, NULL, NULL, vrr_stack+22);
 _BUILD_d0g0(Data,vrr_stack+941, vrr_stack+896, vrr_stack+761, vrr_stack+48, vrr_stack+396, vrr_stack+291);
 _BUILD_00p0(Data,vrr_stack+3, Data->F+7, Data->F+8, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+6, vrr_stack+0, vrr_stack+3, Data->F+6, Data->F+7, NULL);
 _BUILD_00f0(Data,vrr_stack+261, vrr_stack+42, vrr_stack+6, vrr_stack+102, vrr_stack+0, NULL);
 _BUILD_00g0(Data,vrr_stack+271, vrr_stack+84, vrr_stack+261, vrr_stack+105, vrr_stack+42, NULL);
 _BUILD_p0g0(Data,vrr_stack+1031, vrr_stack+111, vrr_stack+271, NULL, NULL, vrr_stack+84);
 _BUILD_d0g0(Data,vrr_stack+1076, vrr_stack+126, vrr_stack+1031, vrr_stack+381, vrr_stack+111, vrr_stack+471);
 _BUILD_f0g0(Data,vrr_stack+1166, vrr_stack+806, vrr_stack+1076, vrr_stack+761, vrr_stack+126, vrr_stack+501);
 _BUILD_f0g0(Data,vrr_stack+1316, vrr_stack+941, vrr_stack+806, vrr_stack+896, vrr_stack+761, vrr_stack+321);
 _BUILD_00h0(Data,vrr_stack+896, vrr_stack+381, vrr_stack+111, vrr_stack+12, vrr_stack+32, NULL);
 _BUILD_00h0(Data,vrr_stack+917, vrr_stack+396, vrr_stack+381, vrr_stack+22, vrr_stack+12, NULL);
 _BUILD_00h0(Data,vrr_stack+471, vrr_stack+111, vrr_stack+271, vrr_stack+32, vrr_stack+84, NULL);
 _BUILD_p0h0(Data,vrr_stack+492, vrr_stack+896, vrr_stack+471, NULL, NULL, vrr_stack+111);
 _BUILD_p0h0(Data,vrr_stack+1466, vrr_stack+917, vrr_stack+896, NULL, NULL, vrr_stack+381);
 _BUILD_d0h0(Data,vrr_stack+1529, vrr_stack+1466, vrr_stack+492, vrr_stack+917, vrr_stack+896, vrr_stack+126);
 _BUILD_00h0(Data,vrr_stack+286, vrr_stack+48, vrr_stack+396, vrr_stack+63, vrr_stack+22, NULL);
 _BUILD_p0h0(Data,vrr_stack+94, vrr_stack+286, vrr_stack+917, NULL, NULL, vrr_stack+396);
 _BUILD_d0h0(Data,vrr_stack+1655, vrr_stack+94, vrr_stack+1466, vrr_stack+286, vrr_stack+917, vrr_stack+761);
 _BUILD_00p0(Data,vrr_stack+761, Data->F+8, Data->F+9, NULL, NULL, NULL);
 _BUILD_00d0(Data,vrr_stack+555, vrr_stack+3, vrr_stack+761, Data->F+7, Data->F+8, NULL);
 _BUILD_00f0(Data,vrr_stack+761, vrr_stack+6, vrr_stack+555, vrr_stack+0, vrr_stack+3, NULL);
 _BUILD_00g0(Data,vrr_stack+771, vrr_stack+261, vrr_stack+761, vrr_stack+42, vrr_stack+6, NULL);
 _BUILD_00h0(Data,vrr_stack+0, vrr_stack+271, vrr_stack+771, vrr_stack+84, vrr_stack+261, NULL);
 _BUILD_p0h0(Data,vrr_stack+21, vrr_stack+471, vrr_stack+0, NULL, NULL, vrr_stack+271);
 _BUILD_d0h0(Data,vrr_stack+1781, vrr_stack+492, vrr_stack+21, vrr_stack+896, vrr_stack+471, vrr_stack+1031);
 _BUILD_f0h0(Data,vrr_stack+1907, vrr_stack+1529, vrr_stack+1781, vrr_stack+1466, vrr_stack+492, vrr_stack+1076);
 _BUILD_f0h0(Data,vrr_stack+2117, vrr_stack+1655, vrr_stack+1529, vrr_stack+94, vrr_stack+1466, vrr_stack+806);
 _BUILD_g0f0(Data,vrr_stack+0, vrr_stack+661, vrr_stack+561, vrr_stack+411, vrr_stack+321, vrr_stack+201);
   tmp = vrr_stack + 0;
   target_ptr = Libint->vrr_classes[4][3];
   for(i=0;i<150;i++)
     target_ptr[i] += tmp[i];
 _BUILD_g0g0(Data,vrr_stack+150, vrr_stack+1316, vrr_stack+1166, vrr_stack+941, vrr_stack+806, vrr_stack+561);
   tmp = vrr_stack + 150;
   target_ptr = Libint->vrr_classes[4][4];
   for(i=0;i<225;i++)
     target_ptr[i] += tmp[i];
 _BUILD_g0h0(Data,vrr_stack+375, vrr_stack+2117, vrr_stack+1907, vrr_stack+1655, vrr_stack+1529, vrr_stack+1166);
   tmp = vrr_stack + 375;
   target_ptr = Libint->vrr_classes[4][5];
   for(i=0;i<315;i++)
     target_ptr[i] += tmp[i];

}
