#include <stdio.h>

int main() {
  int c, nw;

  while ((c = getchar()) != EOF) {
    // loop until a space is encountered
    if (c == ' ' || c == '\n' || c == '\t') {
      putchar('\n');
    } else {
      putchar(c);
    }
  }
}
