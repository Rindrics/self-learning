#include<math.h>
#include<stdio.h>

int main(void)
{
  float x, y;
  int i;
  
  for(x=0; x<=1.0; x += 0.01){
    i = x*100;
    y = i/100.0;
    printf("x = %f    y = %f\n", x, y);
  }
  return 0;
}
