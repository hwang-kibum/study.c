#include <stdio.h>

int main()
{

    int x = 10;

    int *pnData = &x;

    printf("x : %d\n", x);

    *pnData = 20;
    printf("x : %d\n", x);

    printf("%d\n", *&pnData);

    return 0;
}