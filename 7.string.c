#include <stdio.h>
#include <string.h>

int main(void)
{
  char string[10] = "Hi";
  char str2[10];
  char str3[] = "Hia";
  char *str4;
  char str5[100] = "https://google.co.uk";
  char *str6;
  char str7[10] = "co";

  int length = strlen(string);
  printf("strlen: %d\n", length);

  strcpy(str2, string);
  puts(str2);

  printf("string과 str2의 비교 : %d\n", strcmp(string, str2));
  printf("string과 str3의 비교 : %d\n", strcmp(str3, string));

  printf("문자열 추가 : %s\n", strcat(string, "i"));

  str4 = strchr(string, 'i');
  printf("%s\n", str4);

  str6 = strstr(str5, str7);
  printf("%s\n", str6);
  return 0;
}
