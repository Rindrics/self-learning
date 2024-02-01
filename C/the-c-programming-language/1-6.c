#include <stdio.h>

int main(void) {
  int c;
  int space = 0;
  int tab = 0;
  int cr = 0;
  char inputtext[] = "The C Programming language	foo bar baz";

  printf("input text: %s\n", inputtext);
  for (int i = 0; i < sizeof(inputtext); i++) {
    c = inputtext[i];

    if (c == ' ')
      ++space;

    if (c == '\t')
      ++tab;

    if (c == '\r')
      ++cr;

  }
  printf("space: %d;   tab: %d;   CR: %d\n", space, tab, cr);
}
