#include <stdio.h>

int main() {
	//int 배열 선언 및 정의. 배열의 이름은 연속된 각요소들중
	//전체를 대표하는 0번쨰 요소에 대한 '주소 상수'이다.

	//포인터 변수는 주소를 저장히기 위한 변수.
	//배열은 이름은 0번 요소의 주소이며, 전체 배열의 대표하는 식별자다.
	//배열의 이름이 주소이므로 포인터 변수에 저장할수 있다.(int형 포인터에 int형 변수가 아닌 더 큰 사이즈의 배열도 담을수있다.

	int aList[5] = { 0 };
	//int에 대한 포인터 변수를 배열의 이름으로 정의한다.
	int* pnData = aList;
	
	//배열의 0번 요소의 값을 출력한다.
	printf("aList[0] : %d \n", aList[0]);

	//포인터가 가리키고 있는 배열의 0번째 요소의 값을 변경하고 출력한다. 
	*pnData = 20;
	printf("aList[0] : %d \n", aList[0]);
    //해당 포인터는 index 0 을 가르키기때문에 옆index에 값을넣을때는? {1,2,3,4}도 적용되진 않는다.
    //*pnData = 30; 
	*(pnData+1);
   	printf("aList[0] : %d \n", aList[0]);
	printf("aList[1] : %d \n", aList[1]);
	printf("aList[2] : %d \n", aList[2]);
	printf("aList[3] : %d \n", aList[3]);
	printf("aList[4] : %d \n", aList[4]);



	return 0;
}