#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10], b[10];

    printf("숫자하나\n");
    scanf("%s", &a);

    printf("숫자하나\n");
    scanf("%s", &b);

    strcat(a, b);

    printf("한 문장은 %s", a);
    return 0;
}
