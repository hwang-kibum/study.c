#include <stdio.h>

int main(void)
{
    int code1, code2;
    scanf("%d-%d", &code1, &code2);
    printf("%06d%07d",code1, code2);
    return 0;
}
