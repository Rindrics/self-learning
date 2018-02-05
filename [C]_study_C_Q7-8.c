#include <math.h>
#include <stdio.h>
int sizef(float a)
{
  return sizeof(a);
}
int sized(double b)
{
  return sizeof(b);
}
int sizel(long double c)
{
  return sizeof(c);
}

int main(void)
{
  float       a = 1234567890123456789;
  double      b = 1234567890123456789;
  long double c = 1234567890123456789;
  
  printf("Size of a is %d\n", sizef(a));
  printf("Size of b is %d\n", sized(b));
  printf("Size of c is %d\n", sizel(c));

  return 0;
}
