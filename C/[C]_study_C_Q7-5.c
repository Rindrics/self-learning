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
unsigned set_n(unsigned x, int pos, int n)
{
    int i;
    for(i = int_bits() -  1; i>=0; i--)
    {
        putchar((i>=(pos-1) && i<=(pos+n-2)) ? '1' :(((x>>i)&1U) ? '1' : '0'));
    }
    return 0;
}
unsigned reset_n(unsigned x, int pos, int n)
{
    int i;
    for(i = int_bits() -  1; i>=0; i--)
    {
        putchar((i>=(pos-1) && i<=(pos+n-2)) ? '0' :(((x>>i)&1U) ? '1' : '0'));
    }
    return 0;
}
unsigned inverse_n(unsigned x, int pos, int n)
{
    int i;
    for(i = int_bits() -  1; i>=0; i--)
    {
        putchar((i>=(pos-1) && i<=(pos+n-2)) ? ((x>>i)&1U ? '0': '1'): (((x>>i)&1U) ? '1' : '0'));
    }
    return 0;
}
int main(void)
{
  unsigned nx, pos, n;
  printf("非負の整数: "); scanf("%u", &nx);
  printf("第何ビットを操作しますか: "); scanf("%u", &pos);
  printf("第何ビットまで操作しますか: "); scanf("%u", &n);
  printf("\n元の数は "); print_bits(nx);
  printf("\n第%dビットから第%dビットまでを1にすると = ", pos, pos + n - 1); set_n(nx, pos, n);
  printf("\n第%dビットから第%dビットまでを0にすると = ", pos, pos + n - 1); reset_n(nx, pos, n);
  printf("\n第%dビットから第%dビットまでを反転すると = ", pos, pos + n - 1); inverse_n(nx, pos, n);
  putchar('\n');

  return 0;
}
