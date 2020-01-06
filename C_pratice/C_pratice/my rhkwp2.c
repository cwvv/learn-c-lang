#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[200];
	char str2[200];
	
	printf("in word\n");
	scanf("%s", str1);

	strcpy(str2, str1);

	int i, n, m;

	i = strlen(str1);
	m = strlen(str1) - 1;

	n = 0;
	while (n < i) {
		str2[n] = str2[m - n];
		n++;
	}

	if (strcmp(str1, str2) == 0) {
		printf("same");
	} else {
		printf("different");
	}


	return 0;
}