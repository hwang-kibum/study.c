#include <stdio.h>

int main()
{
    char a = 10;
    char *b = &a;

    printf("a value : %d\n", a);
    printf("b variable a value : %d\n", *b);
    printf("b value : %p\n", *b);

    return 0;

}