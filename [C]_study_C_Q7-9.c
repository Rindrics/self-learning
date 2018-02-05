#include<math.h>
#include<stdio.h>

double side(double AREA)
{
  return sqrt(AREA);
}

int main(void)
{
  double AREA;

  printf("Enter the area of a regular square: ");
  scanf("%lf", &AREA);

  printf("The length of a side of the regular square is %f.\n", side(AREA));
}
