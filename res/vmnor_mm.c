#include <stddef.h>
#include <stdint.h>

void vmnor_mm(size_t n, const uint8_t x[], const uint8_t y[], const uint8_t z[]);

int main() {
  uint8_t x[12] = {0x2c, 0x29, 0x62, 0x88, 0x76, 0xfd, 0xb9, 0xec, 0xa2, 0x18, 0x97, 0xfd};
  uint8_t y[12] = {0x6e, 0xa9, 0xef, 0x30, 0x60, 0x8f, 0xfd, 0x04, 0x9e, 0x38, 0xae, 0x1c};
  uint8_t z[12];
  uint8_t e[12] = {0x91, 0x56, 0x10, 0x47, 0x89, 0x00, 0x02, 0x13, 0x41, 0xc7, 0x40, 0x02};

  vmnor_mm(96, x, y, z);

  for (int i = 0; i < 12; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}