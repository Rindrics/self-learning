#include<stdio.h>

int factorial(int n)
{
  int temp=1, i;
  for(i = 1; i <= n; i++){
    temp *= i;
  }
  return temp;
}
int main(void)
{
  int NUM, temp;
  printf("Enter integer: ");
  scanf("%d", &NUM);
  temp = factorial(NUM);
  printf("A factorial of %d is %d.", NUM, temp);
  return 0;
}
