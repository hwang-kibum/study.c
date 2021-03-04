#include <stdio.h>

int main(void)
{
    int num;
    int n;

    scanf("%d", &num);

jump:
    scanf("%d", &n);

    if (num--!=0) {
        printf("%d\n", n);
        goto jump;
    }
    return 0;
}