#include <stdio.h>
#include <limits.h>
int main(void){
  signed short int x, y, z;
  /*unsigned short int x, y, z;*/
  x = 37000;
  y = 30000;
  z = x + y;
  printf(" %d\n", SHRT_MAX);
  printf(" %d\n", USHRT_MAX);
  printf(" %d\n", z);
  return 0;
}

