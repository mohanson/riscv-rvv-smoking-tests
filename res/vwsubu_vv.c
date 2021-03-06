#include <stddef.h>
#include <stdint.h>

void vwsubu_vv(size_t n, const uint32_t x[], const uint32_t y[], uint64_t z[]);

int main() {
  uint32_t x[100] = {0x3ba04074, 0x780b580d, 0x233cfac3, 0xb4eaf57d, 0x1948a611, 0x2ba6ea23, 0x48f8c52f, 0x2656d1b3,
                     0x8c5fc566, 0xcba1016a, 0xc4433790, 0xb69a670a, 0x9cca3727, 0x545edb49, 0x55ccc475, 0x96ad239c,
                     0xc50a50e3, 0xd54eb50d, 0xc6bbac8e, 0xac8c58c1, 0x380148f2, 0x2315aa94, 0x411abbf8, 0x059bd801,
                     0x12287d01, 0x8dede983, 0x0ba3e58d, 0xa9fb83f4, 0xaa4b3049, 0xfe5f4fd3, 0x88f84011, 0xf8f9d968,
                     0x9b73ecb8, 0xfc3dcd4b, 0x128eb088, 0x59a012a9, 0x823bbc75, 0x1f3dc675, 0xb5dfd6ff, 0x51823752,
                     0x19266f32, 0xc5d45457, 0xab021b42, 0x9146c04e, 0x2e12a970, 0x8d5dd509, 0xc355992f, 0x6d67b538,
                     0x4c1ba0ce, 0xae844a2f, 0xc025c673, 0xb8d62612, 0x00d9c7d3, 0xe320291e, 0x1b3b7799, 0x9c5cdb09,
                     0x6502bc87, 0x9eb793fa, 0x845e8f4f, 0x85c89f77, 0x28c4def1, 0x239bad6f, 0x7b55af9c, 0x62002572,
                     0x59d76c84, 0xf5140ac0, 0xe6955cb9, 0x99a90c08, 0x639928b2, 0x6f24848d, 0x822802c4, 0xa30b1d36,
                     0xe950a66d, 0xc02a9794, 0xdcfce9aa, 0x2bd5f3f8, 0xe7668884, 0xc0f3c37d, 0xf4f2ecaa, 0x083ed092,
                     0x85286634, 0x040c63ce, 0xe1edc4b5, 0x51d6b050, 0xf26456fd, 0x681ab89d, 0x589533cf, 0xba7bb8f0,
                     0x1e1e8113, 0x621c21c0, 0x4c26cfc7, 0xbf8ae85d, 0x697c544d, 0x0de02c2f, 0x46566c0a, 0xbb7a64f7,
                     0x9bf4cfaa, 0xf6744ee7, 0x5c03b882, 0x8b3b2b4d};
  uint32_t y[100] = {0x74e6cabe, 0xfb918b55, 0xf2e97fa7, 0x3604b07b, 0x244a005d, 0x188aac01, 0xc4d7c8fb, 0xdbd6c3af,
                     0x064ea75a, 0xa2c331ff, 0x93edd23b, 0xe4ca7b9d, 0x32e69d37, 0x70c46d75, 0x9adf4cfd, 0x0c26246d,
                     0xaf971d4f, 0x492472a0, 0x5a49ffa3, 0x24519619, 0x9e7fee1a, 0x47da38de, 0x26ae3005, 0x2de5162e,
                     0x32448586, 0x35b219f5, 0xc3ea7fb7, 0xcaf74792, 0xc36cdfd1, 0x909c3bd1, 0x92acf057, 0x69de7df3,
                     0xabdaf385, 0x4636b01b, 0x4bbd7909, 0xfe7e78e6, 0x893bbc36, 0xe96ea775, 0x2d228623, 0xd5e44ed5,
                     0x0d918d44, 0x5baa11cb, 0xb288e58b, 0x6dc3d292, 0x23111a3d, 0x0b341d87, 0x6beb51a0, 0xe517628a,
                     0xe772922c, 0xb0453e09, 0xe241fc0d, 0x0df11d7c, 0x0d435992, 0xd0946bb9, 0x491c90bf, 0xbe21611b,
                     0x0d42ed71, 0x76b68a5a, 0x6cb95c4a, 0xd027eb1a, 0x4ffd1f9a, 0x697bcfc1, 0x736c626b, 0x49af29e2,
                     0xa7eed1f3, 0xd24baa04, 0xdd539da7, 0xd6ce7b4d, 0xd33eb344, 0x3267a7af, 0x316ac4fb, 0x08dda543,
                     0x27f40ffa, 0xb1393d71, 0x4616b62e, 0xc6cb0ad6, 0xf375ed0f, 0x2b12d880, 0x54928e5d, 0xdac39eab,
                     0xceec780d, 0xca756f44, 0xe58cf320, 0x30b8f364, 0x84b597fc, 0xa06950a1, 0x8060979e, 0x047c79c0,
                     0xbc49b466, 0x90b8c246, 0xd819c488, 0x32da9a90, 0xd113b8b6, 0xa4e8ca5a, 0xa6e40520, 0x6ec756d8,
                     0x2c907bb1, 0xc6186ec5, 0xd3ada2d5, 0xa02dc682};
  uint64_t z[100];

  vwsubu_vv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != (uint64_t)x[i] - (uint64_t)y[i]) {
      return 1;
    }
  }

  return 0;
}
