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
    int draw_line_number;

    printf("�� �� �������?\n");
    scanf("%d", &draw_line_number);
    draw_line(draw_line_number);

    printf("�� �� �������?.\n");
    scanf("%d", &draw_line_number);
    draw_line(draw_line_number);

    return 0;
}