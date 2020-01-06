#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int days, hour, min, sec, n;

	scanf("%d", &sec);

	days = sec / 86400;
	n = sec % 86400;

	hour = n / 3600;
	n = n % 3600;

	min = n / 60;

	sec = n % 60;

	printf("%d days %d hour %d min %d sec", days, hour, min, sec);

	return 0;
}