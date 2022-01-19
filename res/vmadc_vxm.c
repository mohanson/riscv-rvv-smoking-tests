#include <stddef.h>
#include <stdint.h>

void vmadc_vxm(size_t n, const uint64_t x[][4], const uint64_t y, const uint8_t m[], uint8_t z[]);

int main() {
  uint64_t x[96][4] = {{0xe79541e25d0dba6b, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x262a15662b298944, 0x0da24e08451a8d1a, 0xe5baa16ee5b5419e, 0x44a705073f90be80},
                       {0x25474d793f2c7d32, 0x1735808ee4398bca, 0xa73c905bcbc01878, 0xffffffffffffffff},
                       {0xf3fbe985738811dd, 0x0000000000000067, 0x000000000000714c, 0x0000000000002000},
                       {0xea2177d8d5100000, 0x63eb500cce126b70, 0x63eb500cce126b70, 0x000000000003ed82},
                       {0x3d0e482377794618, 0xbad28e0ca5854070, 0x8a4a182923bdf75a, 0x44a705073f90be80},
                       {0xf3fbe985738811dd, 0xcb9848f06e9659f6, 0x0f812a265e560f2b, 0xea2177d8d5100000},
                       {0x7dc2ae94e4000000, 0x0000000000000001, 0x6edd225600000000, 0xbebf0929f41aa230},
                       {0x7fc92593c865b4c2, 0x0000000000400000, 0x0010000000000000, 0x314320aa7da5b1ef},
                       {0x0000000000000000, 0x9420000000000000, 0x7f2e6910bdea3ffd, 0x314320aa7da5b1ef},
                       {0x7dc2ae94e4000000, 0x0000000000000000, 0x4fcf7212bebfdd89, 0xa8519a5b46242cc0},
                       {0x0010000000000000, 0xf0fe55be95a18d13, 0x00000000000075da, 0xea59a91078581c00},
                       {0x8a4a182923bdf75a, 0x8000000000000000, 0x000000000000000d, 0xbad28e0ca5854070},
                       {0xaf29109cc0000000, 0x00129af7f2440efe, 0x00004a9e26b7f794, 0x02ab7bb54e687499},
                       {0xf0fe55be95a18d13, 0x05ada4e53975b451, 0x00000bea6a6af755, 0x2d21e3da342cd6be},
                       {0x0100000000000000, 0x0000000000000004, 0x686f332000000000, 0x6465f271027abfa8},
                       {0xdfd83d690e5f073e, 0x0000000000002000, 0x16b3a918e4278c9d, 0x9420000000000000},
                       {0x0000000000400000, 0xa6a669d1baba633e, 0x00020e6dfbb7c441, 0x6465f271027abfa8},
                       {0x02ab7bb54e687499, 0x9d8dbb3a5bde4347, 0xc7dee68fffbaf900, 0x62daff171a9fae42},
                       {0x0000000001000000, 0x14d93f0c55095499, 0xb040414dd8c98a14, 0x6465f271027abfa8},
                       {0x0000000000002000, 0x31a7445bdf8bcb5c, 0x31523358d080e093, 0xb36eb1caa58ee7dc},
                       {0x44a705073f90be80, 0xbad28e0ca5854070, 0x000000000000000d, 0x6465f271027abfa8},
                       {0x0ec6680cabb95f09, 0xf5bad73c74be6d8a, 0xea2177d8d5100000, 0x79780d4e5b2b3b2a},
                       {0x6edd225600000000, 0x6edd225600000000, 0x62daff171a9fae42, 0xb040414dd8c98a14},
                       {0xdf9a26c8470349dd, 0x9420000000000000, 0x0000000000000001, 0xa73c905bcbc01878},
                       {0xbad28e0ca5854070, 0xe5baa16ee5b5419e, 0x0000000100000000, 0x0ec6680cabb95f09},
                       {0x0100000000000000, 0x38be984c83ce8648, 0x996d1b60923c18a6, 0x0000000001000000},
                       {0x7f2e6910bdea3ffd, 0x90e1bc8ba22d3294, 0xc9d368e6546c1f00, 0x000000000000714c},
                       {0x0000020000000000, 0xf48119b103954df1, 0x986a686578456056, 0x93d7d7a9d87056f0},
                       {0x3b4de2fabe6d6476, 0x000000000000015b, 0x90e1bc8ba22d3294, 0x0da24e08451a8d1a},
                       {0xc9d368e6546c1f00, 0x000000000000714c, 0x02ab7bb54e687499, 0x9d8dbb3a5bde4347},
                       {0x000000000000000d, 0xaf29109cc0000000, 0xdf9a26c8470349dd, 0x000000000dd2966b},
                       {0x000000a3714b9ad2, 0xa6a669d1baba633e, 0xfecee737556609f5, 0x9480583abdfb5837},
                       {0x0000000000000001, 0xf48119b103954df1, 0x4cf560811e3465c5, 0x16b3a918e4278c9d},
                       {0xf3fbe985738811dd, 0x00129af7f2440efe, 0x4fcf7212bebfdd89, 0xc10a152d71cb3f16},
                       {0x867e3492977cb1bb, 0xa8519a5b46242cc0, 0x7fc92593c865b4c2, 0x3d0e482377794618},
                       {0x000000a3714b9ad2, 0xffffffffffffffff, 0xf5bad73c74be6d8a, 0xea59a91078581c00},
                       {0xd0abd7d3688aa0d7, 0x0000008000000000, 0x686f332000000000, 0x8000000000000000},
                       {0xc9d368e6546c1f00, 0xc7dee68fffbaf900, 0x0000020000000000, 0xb9e2a99fdb7b2948},
                       {0x0000000000002000, 0x986a686578456056, 0xb9e2a99fdb7b2948, 0x0010000000000000},
                       {0xb36eb1caa58ee7dc, 0x93d7d7a9d87056f0, 0xff98837fda2a5bdf, 0xdf09e5c90a990b56},
                       {0x000000000000015b, 0x1234769364d9eac9, 0xf2a6b292a535dc4e, 0xa8519a5b46242cc0},
                       {0xd27d2fde3497614c, 0x4a6c986967d5ace8, 0x0000000000000080, 0x25474d793f2c7d32},
                       {0x34f2a050c605b6b0, 0x00000000000075da, 0x0000000000010000, 0x000000000000015b},
                       {0xe5baa16ee5b5419e, 0xffffffffffffffff, 0x0ec6680cabb95f09, 0x0000020000000000},
                       {0x7fc92593c865b4c2, 0xbad28e0ca5854070, 0x90e1bc8ba22d3294, 0x8f09996552504a5d},
                       {0xaf29109cc0000000, 0xea2177d8d5100000, 0xcb9848f06e9659f6, 0x6465f271027abfa8},
                       {0x6d159abfb3030000, 0x31a7445bdf8bcb5c, 0x00000bea6a6af755, 0xc10a152d71cb3f16},
                       {0x0000020000000000, 0x0000000000010000, 0x44a705073f90be80, 0x000000000003ed82},
                       {0x1234769364d9eac9, 0x6edd225600000000, 0x34f2a050c605b6b0, 0x0ec6680cabb95f09},
                       {0x0000000000000067, 0xdf9a26c8470349dd, 0x1735808ee4398bca, 0x6edd225600000000},
                       {0x7dc2ae94e4000000, 0xbebf0929f41aa230, 0x9480583abdfb5837, 0x68323fe289df33d1},
                       {0x986a686578456056, 0x4ab9cfc9a41744c4, 0xc3bd5e2cd52318a8, 0xea59a91078581c00},
                       {0xc10a152d71cb3f16, 0x00020e6dfbb7c441, 0xe5baa16ee5b5419e, 0x6edd225600000000},
                       {0xffffffffffffffff, 0xbebf0929f41aa230, 0x16b3a918e4278c9d, 0x14d93f0c55095499},
                       {0x62daff171a9fae42, 0xbe55668178139c8e, 0x2e00000000000000, 0xfecee737556609f5},
                       {0x7f2e6910bdea3ffd, 0x000000000dd2966b, 0x00020e6dfbb7c441, 0x4fcf7212bebfdd89},
                       {0x05ada4e53975b451, 0xc3bd5e2cd52318a8, 0x00004a9e26b7f794, 0x0000000000000067},
                       {0x6465f271027abfa8, 0x2e00000000000000, 0x62daff171a9fae42, 0x0da24e08451a8d1a},
                       {0x58aee9fdc3f41b74, 0xdfd83d690e5f073e, 0x00000bea6a6af755, 0xf5bad73c74be6d8a},
                       {0x79780d4e5b2b3b2a, 0xaf29109cc0000000, 0xc10a152d71cb3f16, 0xea2177d8d5100000},
                       {0xdfd83d690e5f073e, 0x0ec6680cabb95f09, 0x3d0e482377794618, 0x4fcf7212bebfdd89},
                       {0x0ec6680cabb95f09, 0x0000000000000067, 0xd0abd7d3688aa0d7, 0xb36eb1caa58ee7dc},
                       {0xc3bd5e2cd52318a8, 0x05ada4e53975b451, 0xb9e2a99fdb7b2948, 0x4a6c986967d5ace8},
                       {0xa6a669d1baba633e, 0xf3fbe985738811dd, 0x0000000000400000, 0x05ada4e53975b451},
                       {0x8000000000000000, 0x1000000000000000, 0x34f2a050c605b6b0, 0x0000000000010000},
                       {0x314320aa7da5b1ef, 0x00004a9e26b7f794, 0x7f2e6910bdea3ffd, 0x7f2e6910bdea3ffd},
                       {0x7f2e6910bdea3ffd, 0xfad4dc0000000000, 0x0000000000000001, 0xbd6192029dd91d60},
                       {0xb040414dd8c98a14, 0xb040414dd8c98a14, 0xe35a000000000000, 0x4ab9cfc9a41744c4},
                       {0xb1db9b0fecbfaabe, 0x7c6bcb08155fac38, 0x27429c30e8b6cff7, 0x8a4a182923bdf75a},
                       {0x00000000000075da, 0xc9d368e6546c1f00, 0xa6a669d1baba633e, 0x3b4de2fabe6d6476},
                       {0x79780d4e5b2b3b2a, 0x25474d793f2c7d32, 0x0000008000000000, 0x93d7d7a9d87056f0},
                       {0xf5bad73c74be6d8a, 0x14d93f0c55095499, 0x262a15662b298944, 0x7c6bcb08155fac38},
                       {0x8a4a182923bdf75a, 0x0000000000010000, 0x000000000003ed82, 0x0000000000000067},
                       {0x0000000001000000, 0x6465f271027abfa8, 0xfad4dc0000000000, 0x000000000000714c},
                       {0x63eb500cce126b70, 0x27429c30e8b6cff7, 0xdf09e5c90a990b56, 0x0000000000000080},
                       {0xc3bd5e2cd52318a8, 0x0000000000010000, 0xff98837fda2a5bdf, 0xbd6192029dd91d60},
                       {0x0000000001000000, 0xd251a40a022b9000, 0x31523358d080e093, 0x0000000000000000},
                       {0x90e1bc8ba22d3294, 0xc10a152d71cb3f16, 0xfecee737556609f5, 0xe5baa16ee5b5419e},
                       {0x6d159abfb3030000, 0x0100000000000000, 0x000000000dd2966b, 0x0100000000000000},
                       {0x4fcf7212bebfdd89, 0x0000000000000000, 0xb1db9b0fecbfaabe, 0x90e1bc8ba22d3294},
                       {0x686f332000000000, 0x0000000000000001, 0xe35a000000000000, 0xea59a91078581c00},
                       {0x000000a3714b9ad2, 0x7c6bcb08155fac38, 0x05ada4e53975b451, 0x0f812a265e560f2b},
                       {0xa8519a5b46242cc0, 0xe5baa16ee5b5419e, 0xff98837fda2a5bdf, 0x8c91e2fe14041a34},
                       {0xe5baa16ee5b5419e, 0xa73c905bcbc01878, 0x31523358d080e093, 0x16b3a918e4278c9d},
                       {0x000000000003ed82, 0xe79541e25d0dba6b, 0x3d0e482377794618, 0x000000000000015b},
                       {0x0000000380f3cf69, 0xb1db9b0fecbfaabe, 0x31523358d080e093, 0x996d1b60923c18a6},
                       {0xffffffffffffffff, 0xd0abd7d3688aa0d7, 0x0000000000000080, 0x4a6c986967d5ace8},
                       {0x34f2a050c605b6b0, 0x6465f271027abfa8, 0x0000000380f3cf69, 0xc7dee68fffbaf900},
                       {0x00000000000075da, 0x6d159abfb3030000, 0xb1db9b0fecbfaabe, 0xf48119b103954df1},
                       {0x61fd04828c93ce01, 0xa8519a5b46242cc0, 0x9480583abdfb5837, 0x3b0d936889b10a5d},
                       {0x000000000003ed82, 0x9d8dbb3a5bde4347, 0x8b4eb00000000000, 0xa73c905bcbc01878},
                       {0x0ec6680cabb95f09, 0xdfd83d690e5f073e, 0x05ada4e53975b451, 0x2d21e3da342cd6be},
                       {0x1735808ee4398bca, 0x16b3a918e4278c9d, 0x0000008000000000, 0x90e1bc8ba22d3294},
                       {0x8000000000000000, 0xff98837fda2a5bdf, 0x0000000000000001, 0x4ab9cfc9a41744c4},
                       {0x31523358d080e093, 0x0000800000000000, 0x62daff171a9fae42, 0x000000000003ed82}};
  uint64_t y = 0x7fffffffffffffff;
  uint8_t m[12] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
  uint8_t z[12];
  uint8_t e[12] = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

  vmadc_vxm(96, x, y, m, z);

  for (int i = 0; i < 12; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
