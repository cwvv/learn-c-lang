#include <stdio.h>

int main(void) {
	int data[5][4] = {
		{ 3, 1, 2, 50 },
		{ 1, 2, 3, 99 },
		{ 1, 2, 4, 0  },
		{ 4, 4, 4, 4  },
		{ 6, 8, 3, 9  },
	};

	int a, b;

	a = 0;
	b = 0;
	while (a < 5) {
			b = 0;
			while (b < 4) {
				printf("%d층 %d호에는 %d명 살아요.\n", a + 1, b + 1, data[a][b]);
			b++;
			}
			printf("\n");
			a++;
	}

	return 0;
}