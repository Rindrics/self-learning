#include <stdio.h>

int main(void) {
  printf("hello, ");
  printf("world!");
  printf("\n");
  printf("\c");                 /* causes 'unknown-escape-sequence' warning */
  printf("\a");                 /* rings bell */
}
