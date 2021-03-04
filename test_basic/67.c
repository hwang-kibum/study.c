#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if(n>89){
        printf("A");
    }else if(n>69){
        printf("B");
    }else if(n>39){
        printf("C");
    }else{
        printf("D");
    }
    return 0;
}