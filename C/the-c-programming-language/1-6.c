#include <stdio.h>

int main(void) {
  int c;
  int space = 0;
  int tab = 0;
  int cr = 0;

  printf("enter text:");
  while ((c = getchar()) != EOF) {

    if (c == ' ')
      ++space;

    if (c == '\t')
      ++tab;

    if (c == '\r')
      ++cr;

    printf("space: %d;   tab: %d;   CR: %d\n", space, tab, cr);
  }
}
