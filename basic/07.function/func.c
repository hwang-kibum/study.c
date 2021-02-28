#include <stdio.h>

void interchange(int u, int v);

int main(){
    int x=5, y=10;

    printf("main() 교환 전 x= %d, y=%d\n", x, y);
    interchange(x, y);
    printf("main() 교환 후 x= %d, y=%d\n", x, y);

    return 0;
}
void interchange(int u, int v){
    int temp;

    printf("interchange() 교환 전 x= %d, y=%d\n", u, v);
    temp=u;
    u=v;
    v=temp;
    printf("interchange() 교환 후 x= %d, y=%d\n", u, v);

}