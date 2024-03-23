#include <assert.h>
#include <stdio.h>

// int bitcount(unsigned int n) {
//   int count = 0;
//   while (n > 0) {
//     count += n & 0x1;
//     n >>= 1;
//   }
//   return count;
// };

int bitcount2(unsigned int n) {
  int count = 0;
  while (n) {
    n &= (n - 1);
    count++;
  }
  return count;
};

int main() {
  // assert(bitcount(0) == 0);
  // assert(bitcount(1) == 1);
  // assert(bitcount(3) == 2);
  // assert(bitcount(8) == 1);
  // assert(bitcount(12) == 2);
  // assert(bitcount(15) == 4);
  // assert(bitcount(16) == 1);
  // assert(bitcount(0xefffffff) == 31);
  // assert(bitcount(0xffffffff) == 32);

  assert(bitcount2(0) == 0);
  assert(bitcount2(1) == 1);
  assert(bitcount2(3) == 2);
  assert(bitcount2(8) == 1);
  assert(bitcount2(12) == 2);
  assert(bitcount2(15) == 4);
  assert(bitcount2(16) == 1);
  assert(bitcount2(0xefffffff) == 31);
  assert(bitcount2(0xffffffff) == 32);
  printf("OK\n");
}
