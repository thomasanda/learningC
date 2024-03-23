// Write a program to count blanks, tabs and newlines
#include <stdio.h>

int main() {
  // character, new line, new tab and new white space
  int c, nl, nt, nw;
  nl = 0;
  nt = 0;
  nw = 0;

  // EOF == ctrl + d
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      nl++;
    }
    if (c == '\t') {
      nt++;
    }
    if (c == ' ') {
      nw++;
    }
  }
  printf("Number of new lines: %d\n Number of tabs: %d\n Number of white "
         "spaces: %d",
         nl, nt, nw);
}
