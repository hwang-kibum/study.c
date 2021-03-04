#include <stdio.h>

int main(void)
{
    long long int a, b;
    long long int sum;

    scanf("%lld %lld", &a, &b); //데이터 타입이 커지면 그릇도 커져야한다  int = %d , long long int = %lld
    sum = a + b;
    printf("%lld", sum);

    return 0;
}