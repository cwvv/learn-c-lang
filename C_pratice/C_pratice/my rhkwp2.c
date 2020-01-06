#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void invert_string(char x[]) {
	int i;

	i = strlen(x) - 1;

	while ( i >= 0 ) {
		printf("%c", x[i]);
		i--;
	}
}

int main(void) {
	char str[200];
	char str2[200] = { '\0' };
	
	printf("in word\n");
	scanf("%s", str);

	strcpy(str2, invert_string(str));

	if (strcmp(str, str2) == 0) {
		printf("same");
	} else {
		printf("different");
	}


	return 0;
}