#include <stdio.h>

void draw_line(int length) {
    int length, n;
    while ( length > n ) {
        printf("_____________\n");
        n++;
    }
}

int main(void) {
    printf("�ȳ��ϼ���?\n");
    draw_line(10);
    printf("�ݰ����ϴ�.\n");
    draw_line(5);

    return 0;
}