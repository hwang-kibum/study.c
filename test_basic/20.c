#include <stdio.h>

int main(void)
{
    char data[2001];
    fgets(data, 2000, stdin);  //입력함수 : fgets(변수, 배열사이즈, 키보드)  , stdin (표준 입력),  \n 개행이 기본 내장됨.
    printf("%s", data); 
    return 0;
}