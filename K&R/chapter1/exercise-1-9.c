#include <stdio.h>

int main() {
  int c;
  int pc;

  while ((c = getchar()) != EOF) {
    // Only print first space. example: 'sd  sd' c = ' ' pc = 'd' - print ' '
    if (c != ' ' || pc != ' ') {
      putchar(c);
    }
    pc = c;
  }
}
