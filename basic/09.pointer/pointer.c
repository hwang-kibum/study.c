#include <stdio.h>

int main() 
{
    char dt = 10;  
    char *P_dt;  //포인트 변수 선언
    P_dt = &dt;   //dt의 메모리주소를 포인트 변수에 담기
    char bc;

    printf("dt variable : %d\n", dt);  //10
    printf("dt memory address : %p\n", &dt); //dt주소값
    
    printf("*P_dt variable : %d\n", *P_dt); //10 
    printf("*P_dt memory address : %p\n", &P_dt); //P_dt의 주소값

    bc = *P_dt;
    printf("bc variable : %d\n", bc);  //10
    printf("bc memory address : %p\n\n\n", &bc);  //bc의 주소값
    
    
    //dt = 20;
    bc = *P_dt;
    dt = 20;
    printf("bt NEW init variable 20\n\n");

    printf("dt new variable : %d\n", dt);
    printf("dt memory address : %p\n", &dt);

    printf("*P_dt variable : %d\n", *P_dt);
    printf("*P_dt memory address : %p\n", &P_dt);

    printf("bc variable : %d\n", bc);
    printf("bc memory address : %p\n", &bc);
    


    return 0;
}