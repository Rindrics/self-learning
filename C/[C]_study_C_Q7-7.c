#include<stdio.h>
int main(void)
{
  float a;
  double b;
  long double c;

  printf("input number as a\n");
  scanf("%f", &a);
  printf("input number as b\n");
  scanf("%lf", &b);
  printf("input number as c\n");
  scanf("%lf", &c);

  printf("a = %f\n", a);
  printf("b = %lf\n", b);
  printf("c = %lf\n", c);
  return 0;
} 
