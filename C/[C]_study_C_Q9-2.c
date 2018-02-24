#include<stdio.h>

int main(void)
{
  char s[] = "ABC";

  s[0] = '\0';
  s[1] = '\0';
  s[2] = '\0';
  s[3] = '\0';
  printf("String is %s.\a\n", s);
  printf("Size of the string is %u.\n", (unsigned)sizeof(s));
  return 0;
}
