#include<stdio.h>

int main(){
    int a = 10;
    int *ptr=NULL;

    ptr = &a;

    printf("ptr %p\n", &ptr );
    printf("a %p\n", &a);

    printf("ptr %x\n", ptr);
    printf("a %d\n", a);

    *ptr = 30;
    ptr = 20;
    

    printf("a %d\n", a);

    printf("a %d\n", ptr);
}