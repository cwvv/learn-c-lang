#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char str[200];
	int i;
	
	printf("in\n");
	scanf("%s", str);

	i = strlen(str) - 1;

	while (i >= 0) {
		printf("%c", str[i]);
		i--;
	}


	return 0;
}