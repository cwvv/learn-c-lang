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
    int length;

    printf("�� �� �������?\n");
    scanf("%d", &length);
    draw_line(length);

    printf("�� �� �������?.\n");
    scanf("%d", &length);
    draw_line(length);

    return 0;
}