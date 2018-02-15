/*
  ビット単位の論理演算
*/
#include <stdio.h>

int count_bits(unsigned x) /*xが*/
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
unsigned set(unsigned x, int pos)
{
    int i;
    for(i = int_bits() -  1; i>=0; i--)
    {
        putchar((i==pos-1) ? '1' :(((x>>i)&1U) ? '1' : '0'));
    }
    return 0;
}
unsigned reset(unsigned x, int pos)
{
    int i;
    for(i = int_bits() -  1; i>=0; i--)
    {
        putchar((i==pos-1) ? '0' :(((x>>i)&1U) ? '1' : '0'));
    }
    return 0;
}
unsigned inverse(unsigned x, int pos)
{
    int i;
    for(i = int_bits() -  1; i>=0; i--)
    {
        putchar((i==pos-1) ? ((x>>i)&1U ? '0': '1'): (((x>>i)&1U) ? '1' : '0'));
    }
    return 0;
}
int main(void)
{
  unsigned nx, pos;
  printf("非負の整数: "); scanf("%u", &nx);
  printf("第何ビットを操作しますか: "); scanf("%u", &pos);
  printf("\n元の数は "); print_bits(nx);
  printf("\n第%dビットを1にすると = ", pos); set(nx, pos);
  printf("\n第%dビットを0にすると = ", pos); reset(nx, pos);
  printf("\n第%dビットを反転すると = ", pos); inverse(nx, pos);
  putchar('\n');

  return 0;
}
