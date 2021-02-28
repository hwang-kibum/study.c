#include <stdio.h>

int main(){
    int a, b;
    int *p;

    a=1234;

    p=&a;
    printf("a=%d\n", a);
    printf("*p=%d\n", *p);

    *p=5678;
    printf("a=%d\n", a);
    printf("*p=%d\n", *p);

    b=*p;
    printf("a=%d\n", a);
    printf("*p=%d\n", *p);
    printf("b=%d\n", b);
    
    *p=20;
    printf("a=%d\n", a);
    printf("*p=%d\n", *p);
    printf("b=%d\n", b);

}