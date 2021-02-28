#include <stdio.h>

int main() {

	union uon {
	    int no;    //4byte
	    char name[9];    //10byte
	    double weight;    //8byte
	};
    
	union non {
	    int no;  //4byte
	    short age;  //2byte
	};

	union onu {
	    int no;    //4byte
	    char name[9];  //9byte
	    double weight;  //8byte
	};
	 
	union uon u1;
	union non u2;
	union onu u3;
	char CH_NAME_10SIZE [10];

	printf("%ld \n", sizeof(u1));   //16byte
	printf("%ld \n", sizeof(u2));    //4byte
 	printf("%ld \n", sizeof(u3));     //16byte
	printf("%ld \n", sizeof(CH_NAME_10SIZE));     //10byte

	return 0;
}





