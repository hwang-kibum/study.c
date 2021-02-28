/* 
INFO : WSL2_/ ubuntu_x86_64_20.04/ gcc version 9.3.0 
PATH : /home/hwang890/C_study/basic/01.variable/endian.c
TITLE : 빅엔디안, 리틀엔디안 확인방법
*/
#include <stdio.h>

union A {
     int i;   //4byte
     char j;  //1byte
};

union B {
    int i;   //4byte
    short j;  //2byte
};

int main() {
     
    union A a;

    a.i = 0x12345678;

    printf("union A int total size : %ldbyte ,\nResult : %x\n\n", sizeof(a), a.i);
    printf("union A char size : %ldbyte ,\nResult : %x\n\n\n", sizeof(a), a.j);

///////////////////////////////

    union B b;

    b.i = 0x12345678;

    printf("union B int total size : %ldbyte ,\nResult : %x\n\n", sizeof(b), b.i);
    printf("union B short size : %ldbyte ,\nResult : %x\n\n\n", sizeof(b), b.j);


    union uon {
        int no;    //4byte
        char name[9];    //9byte
        double weight;    //8byte
    };

    union non {
        int no;  //4byte
        short age;  //2byte
    };

    union onu {
        int no;    //4byte
        char name[25];  //25byte
        double weight;  //8byte
    };

        union onu_test {
        int no;    //4byte
        char name[25];  //25byte
        //double weight;  //8byte
    };

    printf("union size\n");

    union uon u1;
    union non u2;
    union onu u3;
    union onu_test u4;

    char CH_NAME_10SIZE [10];

    printf("uon u1 size : %ld \n", sizeof(u1));
    printf("non u2 size : %ld \n", sizeof(u2));
    printf("onu u3 size : %ld \n", sizeof(u3));
    printf("onu u3 size : %ld \n", sizeof(u4));
    printf("test char array[10] size : %ld \n", sizeof(CH_NAME_10SIZE));

    return 0;
}