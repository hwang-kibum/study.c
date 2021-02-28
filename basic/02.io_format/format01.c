/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/02.io_format/format01.c
TITLE : 상수와 데이터포멧
*/
#include <stdio.h>

void main(void)
{
    const int num1 = 10;
    int num2 = 20;
    //num = 20;  //const 로 선언된 변수는 바꿀수없다. Error "‘num’ undeclared (first use in this function); did you mean ‘num1’?"

    int *ptr_num1;
    ptr_num1 = &num1;  //warnning 발생 const 변수를 pointer로 사용했기때문인듯...assignment discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
    //*ptr_num1 = 20; //포인터로 간접지정을 해도 안된다. assignment discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]

    printf("num1 value : %d\n", num1);
    printf("num1 pointer : %d\n", *ptr_num1);

    ptr_num1 = &num2;

    printf("num1 value : %d\n", num2);
    printf("num1 pointer : %d\n\n\n", *ptr_num1);


    printf("format test \n============================\n");
    

}