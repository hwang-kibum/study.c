#include <stdio.h>

#pragma pack(push,1)  //구조체 메모리 공백 없애는 법 start. 1byte단위로 맞춘다는 의미, 파일저장이나 읽어올떄, 네트워크로 송수신할때 오류 확인필요. 
struct student1 {    
    int no;   //4byte
    int age;  //4byte
    double height;   //8byte
    char name[10];    //10byte
//                  26
};
#pragma pack(pop) //구조체 메모리 공백 없애는 법 end

struct student2 {
    int no;   //4byte
    int age;  //4byte
    double height;   //8byte
    char name[10];    //10byte
//                  26
};

//비트필드(bitfield) 자주사용되진 않으나 device제어시 자주 사용.
//구조체 멤버가 byte가 아닌 bit단위 데이터를 다둘때 사용
typedef struct DATAFLAG {
    unsigned char main : 1;   //8비트중 오른쪽 기준 1비트
    unsigned char left : 2;   //오른쪽 기준 2~3번쨰 비트
    unsigned char right : 3;   //오른쪽 기준 4~6번쨰 비트
    unsigned char top : 2;     //오른쪽 기준 7~8번쨰 비트

}DATAFLAG;


//동적할당용 구조체




int main() {

    struct student1 st1;
    struct student2 st2;

    printf("struct student size : %ld \n", sizeof(st1));   //구조체 메모리 공백을 없음
    printf("struct student size : %ld \n", sizeof(st2));    //구조체 공백 갖고있음.

    //1bit 표현범위 : 0~1
    //2bit 표현범위 : 0~3 (4는 범위를 넘어선값.)
    //3bit 표현범위 : 0~7
    DATAFLAG flagSwitch = {0,3,7,4}; 

    printf("%d\n", flagSwitch.main);
    printf("%d\n", flagSwitch.left);    
    printf("%d\n", flagSwitch.right);
    printf("%d\n", flagSwitch.top);  //4는 2비트 표현범위를 넘어선 값이므로 출력할 수 없다.(0 출력)

    printf("%X\n", *((unsigned char *)&flagSwitch));  //?

    printf("%d byte \n", sizeof(flagSwitch));

    return 0;
}