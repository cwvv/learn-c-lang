#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void draw_line(int length) {
    int n = 0;
    while (length > n) {
        printf("_");
        n++;
    }
        printf("\n");
}

int main(void) {
    int a, b;

    printf("�ȳ��ϼ���?\n");
    scanf("%d", &a);
    draw_line(a);

    printf("�ݰ����ϴ�.\n");
    scanf("%d", &b);
    draw_line(b);

    return 0;
}