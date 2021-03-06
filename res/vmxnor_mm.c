#include <stddef.h>
#include <stdint.h>

void vmxnor_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0x6b, 0x2d, 0x54, 0x41, 0xa9, 0xa0, 0x74, 0xdd, 0x86, 0x24, 0x67, 0x33};
  uint8_t y[12] = {0x2a, 0x3d, 0xbd, 0x22, 0xd8, 0x6f, 0xb7, 0x6d, 0xda, 0xc0, 0x6e, 0x80};
  uint8_t z[12];

  vmxnor_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    uint8_t e = ~(x[i] ^ y[i]);
    if (z[i] != e) {
      return 1;
    }
  }

  return 0;
}
