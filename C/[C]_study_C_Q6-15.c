#include <stdio.h>

void put_count(){
  static int i=1;
  printf("put_count: %d回目\n", i);
  i++;
}
int main(void)
{
  int i;
  put_count();
  put_count();
  put_count();
  return 0;
}
