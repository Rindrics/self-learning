#include<stdio.h>
#include<math.h>

#define diff(x, y) (sqrt((x - y) * (x - y)))
int main(void)
{
  double x, y;
  printf("Enter two integers\n");
  printf("x: ");
  scanf("%lf", &x);
  printf("y: ");
  scanf("%lf", &y);
  printf("The difference between x and y is %f\n", diff(x, y));

  return 0;
}
