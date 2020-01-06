#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, minute, result;

	scanf("%d", &hour);
	scanf("%d", &minute);

	result = hour * 60 + minute - 690;

	printf("%d hour %d minute", result / 60, result % 60);

	return 0;
}