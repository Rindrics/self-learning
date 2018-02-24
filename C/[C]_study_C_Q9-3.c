#include<stdio.h>

#define MAXN 128

int main(void)
{
  int i, j;
  char str[MAXN][MAXN];

  for(i = 0; i < MAXN; i++){
    printf("str[%d]: ", i);
    scanf("%s", str[i]);
    if(str[i] == "$"){
      for(j = 0; j < i; j++){
        printf("%s\n", str[j]);
      }
      break;
    }
  }
  return 0;
}
