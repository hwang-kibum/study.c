/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/01.variable/basic_casting01.c 
TITLE : 형 변환
*/
#include <stdio.h>

void main (void)
{
    char a = 65;
    short b ;
    int c;
    long d;
    float e;
    double f;
    long double g;
//명시적 형변환.
    printf("%c\n", a);    //'A'
    printf("%d\n", a);    //65

    b=a; //short <-- char 
    printf("short <-- char value : %d, type size : %ld byte\n", b, sizeof(b));

    c=b; //int <-- short   
    printf("int <-- short value : %d, type size : %ld byte\n", c, sizeof(c));

    d=c; // long <-- int
    printf("long <-- int value : %ld, type size : %ld byte\n", d, sizeof(d));

    e=d;   //float <-- long
    printf("float <-- long value : %f, type size : %ld byte\n", e, sizeof(e));

    f=e;   //double <-- float
    printf("double <-- float value : %lf, type size : %ld byte\n", f, sizeof(f));

    g=f;  //long double <-- double
    printf("long double <-- double value : %Lf, type size : %ld byte\n\n\n", g, sizeof(g));


//강제적 형변환
    printf("강제적 형변환 \n");
    printf("double <--int value : %lf, type size : %ld byte\n",(double)c , sizeof((double)c));


}