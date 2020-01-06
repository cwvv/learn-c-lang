#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//앞뒤가 똑같은지 구별하기

int sd(char x) {
	char str[200];
	int i = strlen(str) - 1;

	while ( i >= 0 ) {
		printf("%c", str[i]);
		i--;
	}
}

int main(void) {
	char str[200];
	
	printf("in word\n");
	scanf("%s", str);

	if (strcmp(str, sd(str)) == 0) {
		printf("same");
	} else {
		printf("different");
	}


	return 0;
}