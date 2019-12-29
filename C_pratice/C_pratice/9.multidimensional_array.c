#include <stdio.h>

int main(void) {
	int data[5][4] = {
		{ 3, 1, 2, 50 },
		{ 1, 2, 3, 99 },
		{ 1, 2, 4, 0  },
		{ 4, 4, 4, 4  },
		{ 6, 8, 3, 9  },
	};

	int a, b, column, row;

	row = sizeof(data[0]) / sizeof(data[0][0]);											//	4 = 16 / 4 [one row byte / element byte]
	column = sizeof(data) / sizeof(data[0]);											//	5 = 80 / 16 [all byte / one row byte]

	a = 0;
	while (a < column) {																
			b = 0;
			while (b < row) {															
				printf("%dlayer %dnumber in %dpeople.\n", a + 1, b + 1, data[a][b]);
				b++;
			}
			printf("\n");
			a++;
	}

	return 0;
}