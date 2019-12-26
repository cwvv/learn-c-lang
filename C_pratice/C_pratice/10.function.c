#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int a) {
	if (a < 2) return 1;
	return a * fact(a-1);
}

int fibonachi(int a) {
	if (a < 2) return a;
	return fibonachi(a-1) + fibonachi(a - 2);
}


int main(void) {
	int n;
	printf("in number\n");
	scanf("%d", &n);

	printf("피보나치는 %d입니다.\n", fibonachi(n));
	printf("팩토리얼은 %d입니다.\n", fact(n));
	return 0;
}