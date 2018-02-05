#include<stdio.h>

int main(void)
{
  int i;
  int ch;

  i = 0;
  puts("Enter sentences as much as you like");
  while((ch = getchar()) != EOF){
    if(ch == '\n'){
      i ++;
    }
  }
  printf("The number of rows you enterd is %d\n", i);
  return 0;
}
