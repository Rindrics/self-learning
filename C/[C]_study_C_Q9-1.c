#include<stdio.h>

int main(void)
{
  /*char str[] = "ABC\0DEF";
  */
  char str[8] = {'A' , 'B', 'C', '\0', 'D', 'E', 'F'};
  printf("The character string is \"%s\"\n", str);

  return 0;
}
