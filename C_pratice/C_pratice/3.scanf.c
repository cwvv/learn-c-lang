#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10], b[10];

    printf("�����ϳ�\n");
    scanf("%s", &a);

    printf("�����ϳ�\n");
    scanf("%s", &b);

    strcat(a, b);

    printf("�� ������ %s", a);
    return 0;
}
