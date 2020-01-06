#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, m, a;
	a = 1;

	scanf("%d\n", &n);
	scanf("%d", &m);

	printf("%d\n", n);

	while (a < 10) {
		printf("%d\n", n + m * a);
			a++;
	}

	return 0;
}