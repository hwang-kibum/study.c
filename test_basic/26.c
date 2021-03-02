#include <stdio.h>

int main(void)
{
    double d;

    scanf("%lf", &d);
    printf("%.11lf", d); //소수저 11번째 자리까지 출력됨.

    return 0;
}