#include <stdio.h>

int main(void) {
  int lower, upper, step;
  float fahr, celsius;

  lower = -18;
  upper = 150;
  step = 8;

  celsius = lower;
  printf("Celsius Fahrenheit\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0/5.0) + 32.0;
    printf(" %6.1f       %4.0f \n", celsius, fahr);
    celsius = celsius + step;
  }
}
