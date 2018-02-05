#include<stdio.h>

#define swap(type, a, b) (a = a-b, b = b+a, a = b-a)

int main(void)
{
  int x = 5, y = 10;

  printf("x = %d, y = %d\n", x, y);
  swap(int, x, y);
  printf("x = %d, y = %d\n", x, y);

  return 0;
}
