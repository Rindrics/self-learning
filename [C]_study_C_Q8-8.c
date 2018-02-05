#include<stdio.h>
int gcd(int x, int y)
{
  int temp, remain;
  if(x > y){
  }else{
    temp  = x;
    x     = y;
    y     = temp;
  }
  remain = x % y;
  while(remain != 0){
    x       = y;
    y       = remain;
    remain  = x%y;
  }
  return y;
}

int main(void)
{
  int x, y;

  puts("Enter two integers");
  printf("First one: "); scanf("%d", &x);
  printf("Second one: "); scanf("%d", &y);
  printf("The greatest common devisor is %d\n", gcd(x, y));
  return 0;
}
