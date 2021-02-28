/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/21.library/float.c
TITLE : float.h 자료형 최대, 최소 사이즈 및 format정보
*/
#include <stdio.h>
#include <float.h>

void main (void)
{   
    printf("float형의 가수부 비트수 : %d\n", FLT_MANT_DIG);
    printf("float형의 소수부 최소 유효 자릿수 : %d\n", FLT_DIG);
    printf("float형의 최대 유효숫자를 가진 최소 10진 음의 지수 : %e\n", FLT_MIN_10_EXP);
    printf("float형의 최대 10진수의 양의 지수 : %d\n", FLT_MAX_10_EXP);
    printf("float형의 최대 정밀도를 가진 양의 최소값 : %e\n", FLT_MIN);
    printf("float형의 양의 최대값: %e\n", FLT_MAX);
    printf("1.00과 1.00보다 큰 float형의 값의 차 : %e\n", FLT_EPSILON);
    printf("double형 최대값 : %e\n", DBL_MAX);
}