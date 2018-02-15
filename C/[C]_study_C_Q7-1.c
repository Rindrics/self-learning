#include <stdio.h>
#include <limits.h>

int main(void)
{
  int n;
  printf("size of 1  = %u\n", (unsigned) sizeof 1);/*符号なし整数のサイズ*/
  printf("size of +1 = %d\n", (signed) sizeof +1);/*符号あり整数のサイズ*/
  printf("size of -1 = %d\n", (signed) sizeof -1);/*符号あり整数のサイズ*/
  printf("size of (unsigned)-1  = %u\n", (unsigned) sizeof(unsigned)-1);/*符号なし整数のサイズから1を引いたもの*/
  printf("size of (double)  -1  = %f\n", (double) sizeof(double) -1);/*実数のサイズから1を引いたもの*/
  printf("size of ((double) -1) = %f\n", (double) sizeof((double)-1));/*実数のサイズ*/
  printf("size of n+2 = %u\n", (unsigned)sizeof n+2);/*符号なし整数のサイズに2を足したもの*/
  printf("size of (n+2) = %u\n", (unsigned)sizeof (n+2));/*符号なし整数のサイズ*/
  printf("size of (n+2.0) = %f\n", (double)sizeof (n+2.0));/*実数のサイズ*/
  return 0;
}
