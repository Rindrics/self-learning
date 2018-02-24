#include<stdio.h>

int main(void)
{
  int i, j, ch;
  int cnt[10] = {0};

  while((ch = getchar()) != EOF){
    if(ch >= '0' && ch <= '9'){
      cnt[ch - '0']++;
    }
  }
  puts("Times of appearance of each number");
  for(i = 0; i < 10; i++){
    printf("'%d':", i);
    for(j = 0; j < cnt[i]; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
