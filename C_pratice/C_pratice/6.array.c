#include <stdio.h>

int main(void)
{
  int n, length;
  int array[] = {
    1, 9, 7, 4, 0, 9, 99
  };

  length = sizeof(array) / sizeof(array[0]);      // 7 = 28 / 4
  n = 0;

  while (n < length) {
    printf("%d\n", array[n]);
    n++;
  }

  return 0;
}
