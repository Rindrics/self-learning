#include <stdio.h>

int fx;
int main(void)
{
  int i;
  static int si;
  static double sd;
  static double sa[5];

  printf("fx = %d\n", fx);
  printf("si = %d\n", si);
  printf("sd = %f\n", sd);
  for(i=0; i<5; i++){
    printf("sa[%d] = %f\n", i, sa[i]);
  }
  return 0;
}
