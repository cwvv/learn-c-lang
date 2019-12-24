#include <stdio.h>

int main(void)
{
  int a, b, result;

  printf("정수를 입력하세요\n");
  scanf("%d", &a);

  printf("정수를 입력하세요\n");
  scanf("%d", &b);

  result = a + b;
  printf("당신이 입력한 총합은 %d입니다.\n", result);

  return 0;
}
