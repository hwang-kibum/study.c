/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/02.io_format/format02.c
TITLE : limits.h 자료형 최대, 최소 사이즈 및 format정보
*/
#include <stdio.h>
#include <limits.h>

void main (void)
{
    printf("char Bit : %d\n",CHAR_BIT);
    printf("char Max : %d\n",CHAR_MAX);
    printf("char Min : %d\n",CHAR_MIN);
    printf("signed char Max : %d\n",SCHAR_MAX);
    printf("signed char Min : %d\n",SCHAR_MIN);
    printf("unsigned char Max : %d\n",UCHAR_MAX);
    printf("short Max : %d\n",SHRT_MAX);
    printf("short Min : %d\n",SHRT_MIN);
    printf("unsined short Max: %d\n",USHRT_MAX);
    printf("int Max : %d\n",INT_MAX);
    printf("int Min : %d\n",INT_MIN);
    printf("unsigned int Max : %u\n",UINT_MAX);
    printf("long Max : %ld\n",LONG_MAX);
    printf("long Min : %ld\n",LONG_MIN);
    printf("unsigned long Max : %lu\n",ULONG_MAX);
    printf("long long Max : %lld\n",LLONG_MAX);
    printf("long long Min : %lld\n",LLONG_MIN);    
    printf("unsigned long long Max : %llu\n",ULLONG_MAX);  

}