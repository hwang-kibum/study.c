#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d",(a < b ? a : b) < c ?(a < b ? a : b):c ); 
    //(a가 b보다 작으면 (T)a : (F) b ) 나온값에 c 비교시 c작으면...
    //(a가 b보다 작으면 (T)a : (F) b )이거나 c가 출력 된다.
    return 0;
}