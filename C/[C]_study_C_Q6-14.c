#include <stdio.h>

int fx;
int main(void)
{
  int i;
  
  static double sa[5];
  for(i=0; i<5; i++){
    printf("sa[%d] = %f\n", i, sa[i]);
  }
  return 0;
}
