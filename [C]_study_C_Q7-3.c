/*
  ビット単位の論理演算
*/
#include <stdio.h>

int count_bits(unsigned x)
{
  int bits = 0;
  while(x){
    if(x & 1U) bits++;
    x >>= 1;
  }
  return (bits);
}

int int_bits(void)
{
  return(count_bits(~0U));
}

void print_bits(unsigned x)
{
  int i;
  for(i = int_bits() - 1; i >= 0; i--)
  {
    putchar (((x>>i) & 1U) ? '1' : '0');
  }
}

unsigned rrotate(unsigned x, int n)
{
    int bits = int_bits();
    n %= bits;
    return (n ? (x >> n) | (x << (bits - n)): x); /*   (x >>n) | (x << (bits - n)がミソ!!!!!  */
}


unsigned lrotate(unsigned x, int n)
{
    int bits = int_bits();
    n %= bits;
    return (n ? (x << n) | (x >> (bits - n)): x);
}

int main(void)
{
  unsigned nx, no;
  printf("非負の整数: "); scanf("%u", &nx);
  printf("シフトするビット数: "); scanf("%u", &no);

  printf("\n回転前 = "); print_bits(nx);
  printf("\n右回転 = "); print_bits(rrotate(nx, no));
  printf("\n左回転 = "); print_bits(lrotate(nx, no));
  putchar('\n');

  return 0;
}
