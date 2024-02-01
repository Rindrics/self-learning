#include <stdio.h>

char inputtext[] = "The  C Programming    language";
char lastprinted;

int main(void) {
  printf("original text: %s\n", inputtext);

  printf("processed text: ");

  printf("%c", inputtext[0]);
  lastprinted = inputtext[0];

  for (int i = 1; i < sizeof(inputtext); i++) {

    if ((lastprinted == ' ') && (inputtext[i] == ' ')) continue;

    printf("%c", inputtext[i]);

    lastprinted = inputtext[i];
  }
  printf("\n");
}
