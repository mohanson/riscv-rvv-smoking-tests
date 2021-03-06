#include <stddef.h>
#include <stdint.h>

void vmor_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0x75, 0xbc, 0x2e, 0xc6, 0xd4, 0x39, 0x32, 0xf0, 0x27, 0x62, 0x92, 0xd6};
  uint8_t y[12] = {0x8e, 0x89, 0x99, 0x19, 0xc7, 0x40, 0x86, 0xd6, 0xed, 0x6b, 0x41, 0x0a};
  uint8_t z[12];

  vmor_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    if (z[i] != (x[i] | y[i])) {
      return 1;
    }
  }

  return 0;
}
