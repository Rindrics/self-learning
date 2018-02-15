#include<stdio.h>

int combination(int n, int r)
{
  int i, bunshi, bunbo;
  bunshi = 1;
  bunbo = 1;
  for(i = r; i >= 1; i--){
    bunbo   *= i;
    bunshi  *= (n + i - r);
  }
  return bunshi/bunbo;
}

int main(void)
{
  int N, r;
  puts("Enter two numbers");
  printf("Large one: "); scanf("%d", &N);
  printf("Small one: "); scanf("%d", &r);
  printf("%dC%d is %d\n", N, r, combination(N, r));

  return 0;
}
