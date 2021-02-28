
/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/01.variable/basic_casting01.c 
TITLE : 형 변환시 주의사항
*/
#include<stdio.h>

void main(void)
{
    unsigned char  Uchar = -2;
    signed char Schar = -2;
    
    printf("unsigned char : %d\n" , Uchar);    //254
    printf("signed char : %d\n",Schar);        //-2
    
    unsigned int  Uint = -1;
    signed int Sint = -1;
    
    printf("unsigned int : %d\n" , Uint);    //-1
    printf("signed int : %d\n" , Sint);        //-1
 
    short s = 0x80;
    signed char Schar01 = 0x80;
    
    printf("%d\n",(int)s);                    //128
    printf("%x\n",(int)Schar01);                    //ffffff80


    double num1 = 5.15+19;
    printf("%.2f\n", num1);

    int a = 2;
    int b = 5;
    float result;  
    result = a / b;   
    printf("a / b result %f\n", result);   
    //0.0000 이나오는 이유는 두 피연산자 모두 int형이고 정수 나눗셈 몫은 0이기 때문에 
    //float형으로 치환해 저장된다.
    result = (float)a / b;   
    printf("(float)a / b result %.1f\n", result);   

/*
short s = 0x80
0000 0000 1000 0000 = 128 

(int)s 강제적 형변환을 하면  0000 0000 0000 0000  0000 0000 1000 0000 된다.
이떄 short은 2byte로,  최상위비트가 0 이므로 추가된 앞에 2byte를 모두 "0"으로 채워진다.

char sc1 = 0x80는 1000 0000 이다.
1000 0000 = 128

(int)Schar01 강제형변환을 하면 정수 승격이 발생하여 1111 1111 1111 1111 1000 0000 이 된다.
이때 char는 1byte 로, 최상위트가 1이므로 추가된 앞에 3byte 공간을 "1"로 채워진다.
*/

}

