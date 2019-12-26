#include <stdio.h>

int main(void)
{
  int password;

  printf("비밀번호를 입력하세요.\n");
  scanf("%d", &password);

  if (password == 1234) {
    printf("딩동댕.\n");
  } else {
    printf("땡.\n");
  }
  return 0;
}
