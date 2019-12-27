#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("숫자하나\n");
    scanf("%d", &a);
    
    printf("숫자하나\n");
    scanf("%d", &b);

    printf("곱한값은 %d\n", a*b);
    return 0;
}
