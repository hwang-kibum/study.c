#include <stdio.h>
#include <string.h>   //strcpy함수가 선언된 헤더파일

typedef struct student{  //구조체 이름(구조체이름은 없어도 된다.)
    char name[30];
    int age;
    char class;
}stu;  //구조체 별칭, 최근 구조체이름과 동일하게 사용.

void main(void)
{
    stu *stu_ptr;  //구조체 포인터 선언
    stu kim;     //구조체 생성
    stu_ptr = &kim;   //생선된 구조체 주소 구조체 포인터에 입력

    strcpy(stu_ptr->name, "kimkiki");
    stu_ptr->age = 20;
    stu_ptr->class = 1;

    printf("kim 학생 이름: %s\n", stu_ptr->name);
    printf("kim 학생 나이: %d\n", stu_ptr->age);
    printf("kim 학생 학년: %d\n", stu_ptr->class);

    stu hong;

    strcpy(hong.name,"hongkildong"); //점으로 구조체 멤버로 접근하는 값을 할당
    hong.age=20;
    hong.class=1;

    printf("hong 학생 이름: %s\n", hong.name);
    printf("hone 학생 나이: %d\n", hong.age);
    printf("hong 학생 학년: %d\n", hong.class);

    stu lee={.name="leesoonsin", .age=20, .class=1};

    printf("lee 학생 이름: %s\n", hong.name);
    printf("lee 학생 나이: %d\n", hong.age);
    printf("lee 학생 학년: %d\n", hong.class);

}