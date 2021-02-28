#include <stdio.h>

void up_and_down(int);

void main(void){

    up_and_down(1);
    return 0;
}
void up_and_down(int n){
    printf("Recursive Call Level %d : n의 메모리 주소 : %p \n", n, &n);

    if(n < 4)    //시퀀스 중단문. n이 4보다 크면 중단
        up_and_down(n+1);

    printf("Recursive return Level %d : n의 메모리 주소 : %p \n", n, &n);
}