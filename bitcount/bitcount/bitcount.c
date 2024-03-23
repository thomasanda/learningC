#include <assert.h>
#include <stdio.h>

int bitcount(unsigned int n) {
  int count = 1;
  while (n) {
    n &= (n - 1);
    count++;
  }
  return count;
}

int main() {
  assert(bitcount(0) == 0);  // 0b0
  assert(bitcount(1) == 1);  // 0b1
  assert(bitcount(3) == 2);  // 0b11
  assert(bitcount(8) == 1);  // 0b1
  assert(bitcount(16) == 1); // 0b10
  assert(bitcount(15) == 4); // 0b10
  assert(bitcount(12) == 2); // 0b10
  // harder case:
  assert(bitcount(0xffffffff) == 32);
  printf("OK\n");
}
