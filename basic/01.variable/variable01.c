/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/01.variable/01.variable.c 
TITLE : 변수 선언
*/
#include <stdio.h>
#include <string.h>  //문자열 관련 함수들을 사용할 때 선언함

//bool사용시 
#define FALSE 0
#define TRUE 1

void main (void) 
{
    //현재 사용중인 C언어 VERSION INFO
    printf("__STDC_VERSION__=%ld\n", __STDC_VERSION__);

    //Linux x86_64 Ubuntu20.04  gcc 9.3.0 version C data size
    //1byte 8bit
    char C_var = -128;  //-128 ~ 127  
    unsigned char UC_var = 65;   //0~255
    __int8_t _8var = -128;   
    __uint8_t _u8var = 255;

    //2byte 16bit
    short S_var = -32768;  //-32768~32767   
    unsigned short US_var = 65535;  //0 ~ 65535
    __int16_t _16var = -32768;
    __uint16_t _u16var = 65535; 

    //4byte 32bit
    int I_var = -2147483648; //-2147483648 ~ 2147483647   
    unsigned int UI_var = 4294967295U;  //0 ~ 4294967295
    __int32_t _32var = -2147483648;
    __uint32_t _u32var = 4294967295U;
//실수
    float F_var = 1.2;   //소수6자리

    //8byte 64bit
    long L_var = -922337203685477580L;   //-9223372036854775808 ~ 9223372036854775807
    unsigned long UL_var = 4294967295;     //0 ~ 4294967295
    __int64_t _64var = -922337203685477580L;
    __uint64_t _u64var = 4294967295;
//실수 
    double D_var = 1.23;  //소수15자리

    //16byte 128bit
    long long LL_var = -9223372032;  //-9223372036854775808 ~ 9223372036854775807
    //unsigned long long ULL_var = 12345678901234567890; //0~18446744073709551615 

    //16byte 128bit
    __int128_t _128var = 1234;  
    __uint128_t _u128var = 1234;
//실수 
    long double LD_var = 1.23456;  


//배열
    int Int_array1[] = {1, 2, 3, 4};

    int Int_array2[5];
    Int_array2[0] =1;
    Int_array2[1] =2;

    int Int_array3[3] = {1, 2, 3};
    int Int_array4[2][3] = {
                            {1,2,3},{4,5,6}
                            };
    int Int_array5[2][4][3]=
    {
        {
            {0,1,2},{3,4,5},{6,7,8},{9,10,11}
            },
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12}
            }
    };

    
    //char %c %hd %hu %d
    printf("=========<char, __8int_t>==========\nchar %ld byte, __int8_t %ld byte \n------------------------------------\n", sizeof(char), sizeof(__int8_t));
    printf("unsigned char %c \n",UC_var);    
    printf("unsigned char %hu \n",UC_var);
    printf("char %hd \n", C_var);
    printf("__int8_t %d \n", _8var);
    printf("__uint8_t %d \n", _u8var);

    printf("=========<short, __int16_t>==========\nshort %ld byte, __int16_t %ld byte \n------------------------------------\n", sizeof(short), sizeof(__int16_t));
    printf("%d \n", S_var);
    printf("%d \n", US_var);
    printf("%d \n", _16var);
    printf("%d \n", _u16var);

    printf("=========<int, __int32_t>========== \nint %ld byte, __int32_t %ld byte \n------------------------------------\n", sizeof(int),sizeof(__int32_t));
    printf("%d \n", I_var);
    printf("%u \n", UI_var);
    printf("%d \n", _32var);
    printf("%u \n", _u32var);

    printf("=========<long, __int64_t>========== \nlong %ld byte, __int64_t %ld byte \n------------------------------------\n", sizeof(long),sizeof(__int64_t));
    printf("%ld \n", L_var);
    printf("%ld \n", UL_var);
    printf("%ld \n", _64var);
    printf("%lu \n", _u64var);

    //printf("=========<__int128_t>========== \n__int128_t %lld byte \n------------------------------------\n", sizeof(__int128_t));
    //printf("%lld \n", _128var);  //16byte 데이터 출력방법 확인필요
    //printf("%lld \n", _u128var);

    printf("=========<float>========== \nfloat %ld byte \n------------------------------------\n", sizeof(float));
    printf("%f \n", F_var);

    printf("=========<double>========== \ndouble %ld byte \n------------------------------------\n", sizeof(double));
    printf("%lf \n", D_var);

    printf("=========<long double>========== \nlong double %ld byte \n------------------------------------\n", sizeof(long double));
    printf("%Lf \n", LD_var);

    //실수의 표현방법
    double num1 = 3 + 2.134;
    printf("기본 format %%F : %f\n", num1);
    printf(".0 format %%.0F : %.0f\n", num1);
    printf(".1 format %%.1F : %.1f\n", num1);
    printf(".2 format %%.2F : %.2f\n", num1);    
    printf(".3 format %%3F : %.3f\n", num1);
    printf(".4 format %%3F : %.4f\n", num1);


//지수 처리
    int num2 = 10e2;
    float num3 = 10e-3;

    printf("지수 처리 양수 : %d\n",num2);
    printf("지수 처리 음수 : %.3f\n",num3);
    printf("%%e 0.00001234 처리 : %e\n", 0.00001234);   //지수 표현: 1.0 * 10^-5 
    printf("%%e 101.2342 처리 : %e\n", 101.2345);           //지수 표현: 1.0 * 10^2 






//구조체
//멤버들의 순서에 맞춰서 초깃값을 기술해야한다.
   struct profile {
       float height;
       float weight;
   };

   struct student1 {
       int number;
       char name [20];
       int age;
       struct profile pf;
   };

    //typedef를 앞에 구조체 작성시 구조체 변수 선언할때 struct를 사용안해도 된다.
    //단 뒤 에도 구조체명을 붙여줘야한다.
    typedef struct teacher {
        char name[20];
        int age;
        char subject[10];
    }teacher;
    
    struct student1 st_kim; //사용자 변수 선언

    teacher tea_park;


    st_kim.number=1;
    st_kim.age=20;
    strcpy(st_kim.name, "김길동");
    st_kim.pf.weight=74.3;
    st_kim.pf.height=178,6;

    printf(" %d,\n %d,\n %s,\n %fcm,\n %fkg,\n", st_kim.number, st_kim.age, st_kim.name, st_kim.pf.height, st_kim.pf.weight);


//구조체 배열    

    typedef struct user {
        int no;
        char name[10];
    }user;

    user userList[4] ={
        {7, "홍길동"},
        {10, "임꺽정"}, 
        {23, "이순신"}
    };
//구조체 동적할당
    

//공용체
    union student2 {
        int num;
        double grande;
    };

    typedef union student3 {
        int num;
        double grande;
    }student3;


    union student2 std1;
    student3 std2;
    std1.num=2;
    std2.num=3;

    printf("union student2 %d,\n %f\n", std1.num, std1.grande);
    printf("union student3 %d,\n %f\n", std2.num, std2.grande);

/*
    //boolean
    _Bool boolean;
    printf("_Bool data Type %d\n", boolean);
    printf("0 or 1 input bit : ");
    scanf("&d", &boolean);

    if(boolean == 0) {
        printf("FALSE\n\n");
    } else if(boolean == 1) {
        printf("TRUE\n\n");
    } else {
        printf("NULL\n\n"); //잘못된 내용이지만 문법맞출려고 넣은 것.
    }

*/    
    
    

}