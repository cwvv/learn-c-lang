#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//앞뒤가 똑같은지 구별하기

int sd(char x) {
	char y[200] = { x };
	int i;

	i = strlen(x) - 1;

	while ( i >= 0 ) {
		printf("%c", y[i]);
		i--;
	}
}

int main(void) {
	char str[200];
	char str2[200] = { '\0' };
	
	printf("in word\n");
	scanf("%s", str);

	strcpy(str2, sd(str));

	if (strcmp(str, str2) == 0) {
		printf("same");
	} else {
		printf("different");
	}


	return 0;
}