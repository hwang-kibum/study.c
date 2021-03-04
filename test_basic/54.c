#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", (a||b)); //OR
/*
    if ( a || b ){
        printf("1");
    } else {
        printf("0");
    }
    */
    return 0;
}