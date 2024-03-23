#include <stdio.h>

// 1.5.3 Line Counting K&R
int main() {
  int c, nl;
  nl = 0;
  // On my macbook EOF is equal to ctrl + D
  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
  printf("%d\n", nl);
}
