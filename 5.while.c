#include <stdio.h>

int main(void)
{
  int input, n;

  printf("자연수를 입력하세요\n");
  scanf("%d", &input);

  n = 0;
  while (input+1 > n) {
    printf("%d\n", n);
    n++;
  }

  return 0;
}
