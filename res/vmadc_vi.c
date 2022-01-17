#include <stddef.h>
#include <stdint.h>

void vmadc_vi(size_t n, const uint64_t x[][4], uint8_t z[13]);

int main() {
  uint64_t x[96][4] = {{0xbd6192029dd91d60, 0x00000000a865d7d4, 0x3b4de2fabe6d6476, 0xc3bd5e2cd52318a8},
                       {0xfffffffffffffffa, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x000000a3714b9ad2, 0xfecee737556609f5, 0x5052886f7169c8c5, 0xbe55668178139c8e},
                       {0x6edd225600000000, 0x5052886f7169c8c5, 0x38be984c83ce8648, 0x61fd04828c93ce01},
                       {0x1000000000000000, 0x9420000000000000, 0xc10a152d71cb3f16, 0x2d21e3da342cd6be},
                       {0xfffffffffffffff6, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xfffffffffffffff9, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xfffffffffffffffc, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x0000000000000001, 0xfad4dc0000000000, 0xf3fbe985738811dd, 0xb9e2a99fdb7b2948},
                       {0x1234769364d9eac9, 0x0000000000002000, 0xbd6192029dd91d60, 0xf2a6b292a535dc4e},
                       {0x000000000000015b, 0x2c1fb5204d248917, 0x00004a9e26b7f794, 0x000000000000000d},
                       {0x0000020000000000, 0x38be984c83ce8648, 0xa6a669d1baba633e, 0x0000000000000000},
                       {0x62daff171a9fae42, 0x8b4eb00000000000, 0x63eb500cce126b70, 0x0100000000000000},
                       {0xfffffffffffffff1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x000000000000015b, 0x1735808ee4398bca, 0x6465f271027abfa8, 0x0000008000000000},
                       {0x14d93f0c55095499, 0xf3fbe985738811dd, 0x8b4eb00000000000, 0x5052886f7169c8c5},
                       {0x7c6bcb08155fac38, 0x262a15662b298944, 0x34f2a050c605b6b0, 0xdfd3a0870f60e072},
                       {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x63eb500cce126b70, 0xf3fbe985738811dd, 0x0000000000000040, 0x0000000000000000},
                       {0xfffffffffffffff7, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x3b0d936889b10a5d, 0x000000000000015b, 0x63eb500cce126b70, 0x0000000000000004},
                       {0xaf29109cc0000000, 0x0da24e08451a8d1a, 0xd251a40a022b9000, 0x3d0e482377794618},
                       {0x00000000a865d7d4, 0x6465f271027abfa8, 0x000000a3714b9ad2, 0xea2177d8d5100000},
                       {0xe35a000000000000, 0x000000000dd2966b, 0x2c1fb5204d248917, 0xaf29109cc0000000},
                       {0x00020e6dfbb7c441, 0x867e3492977cb1bb, 0x3b4de2fabe6d6476, 0xe5baa16ee5b5419e},
                       {0xfffffffffffffff5, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x867e3492977cb1bb, 0x31523358d080e093, 0x0000000000000001, 0x3b0d936889b10a5d},
                       {0x00000bea6a6af755, 0x6465f271027abfa8, 0x0000000000000040, 0x262a15662b298944},
                       {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x9480583abdfb5837, 0x3b0d936889b10a5d, 0x1000000000000000, 0x000000000000015b},
                       {0x1234769364d9eac9, 0x2d21e3da342cd6be, 0x68323fe289df33d1, 0x0000000000000067},
                       {0xea59a91078581c00, 0x0000000000000000, 0xc7dee68fffbaf900, 0xf2a6b292a535dc4e},
                       {0x61fd04828c93ce01, 0x0000000001000000, 0x0000000000000001, 0x867e3492977cb1bb},
                       {0x000000000000714c, 0x0000000000400000, 0x1234769364d9eac9, 0xf2a6b292a535dc4e},
                       {0x27429c30e8b6cff7, 0xb1db9b0fecbfaabe, 0x63eb500cce126b70, 0xe35a000000000000},
                       {0x8a4a182923bdf75a, 0x2c1fb5204d248917, 0x61fd04828c93ce01, 0x1234769364d9eac9},
                       {0x31523358d080e093, 0xc9d368e6546c1f00, 0x1000000000000000, 0x0000000000000000},
                       {0xc9d368e6546c1f00, 0x0000800000000000, 0xf48119b103954df1, 0x000000000000000d},
                       {0x000000000003ed82, 0x9d8dbb3a5bde4347, 0x000000000000000d, 0xc7dee68fffbaf900},
                       {0xe79541e25d0dba6b, 0xb36eb1caa58ee7dc, 0x38be984c83ce8648, 0x44a705073f90be80},
                       {0x1234769364d9eac9, 0xbe55668178139c8e, 0x7dc2ae94e4000000, 0x79780d4e5b2b3b2a},
                       {0xfffffffffffffff8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x867e3492977cb1bb, 0xbebf0929f41aa230, 0x314320aa7da5b1ef, 0xc3bd5e2cd52318a8},
                       {0xfffffffffffffff5, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x7c6bcb08155fac38, 0x8b4eb00000000000, 0x0f812a265e560f2b, 0x1000000000000000},
                       {0xfffffffffffffff1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xfffffffffffffff8, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xdf9a26c8470349dd, 0x27429c30e8b6cff7, 0x86ddce906c8cdb4d, 0x44a705073f90be80},
                       {0x7c6bcb08155fac38, 0x0000000000000067, 0xe35a000000000000, 0x4fcf7212bebfdd89},
                       {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x00129af7f2440efe, 0x3b0d936889b10a5d, 0x00020e6dfbb7c441, 0xff98837fda2a5bdf},
                       {0x000000000000000d, 0x0000000000000067, 0x02ab7bb54e687499, 0xea59a91078581c00},
                       {0xff98837fda2a5bdf, 0x25474d793f2c7d32, 0x4a6c986967d5ace8, 0x8f09996552504a5d},
                       {0xb040414dd8c98a14, 0xbe55668178139c8e, 0x0000000000000000, 0x8f09996552504a5d},
                       {0xfffffffffffffff2, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xd251a40a022b9000, 0xa8519a5b46242cc0, 0x4ab9cfc9a41744c4, 0x38be984c83ce8648},
                       {0x000000000dd2966b, 0x6465f271027abfa8, 0x25474d793f2c7d32, 0x0ec6680cabb95f09},
                       {0x00000bea6a6af755, 0xff98837fda2a5bdf, 0x7fc92593c865b4c2, 0x8b4eb00000000000},
                       {0x1234769364d9eac9, 0x00000bea6a6af755, 0xfecee737556609f5, 0x000000a3714b9ad2},
                       {0xfffffffffffffff1, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x5052886f7169c8c5, 0xd27d2fde3497614c, 0xa8519a5b46242cc0, 0x00000000a865d7d4},
                       {0x8000000000000000, 0x31a7445bdf8bcb5c, 0x0000000000000067, 0xb36eb1caa58ee7dc},
                       {0x9480583abdfb5837, 0xea59a91078581c00, 0x9420000000000000, 0x6d159abfb3030000},
                       {0x9d8dbb3a5bde4347, 0x3d0e482377794618, 0xdfd3a0870f60e072, 0x1000000000000000},
                       {0xfad4dc0000000000, 0xc7dee68fffbaf900, 0x7c6bcb08155fac38, 0xc3bd5e2cd52318a8},
                       {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x0000000100000000, 0x000000000dd2966b, 0x0000000000000080, 0xd0abd7d3688aa0d7},
                       {0x0f812a265e560f2b, 0x8000000000000000, 0x38be984c83ce8648, 0x3d0e482377794618},
                       {0xffffffffffffffff, 0x0000000000000080, 0x3d0e482377794618, 0xc7dee68fffbaf900},
                       {0xfffffffffffffffe, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x4cf560811e3465c5, 0x9420000000000000, 0x4ab9cfc9a41744c4, 0x8000000000000000},
                       {0x7dc2ae94e4000000, 0x00129af7f2440efe, 0x79780d4e5b2b3b2a, 0x00000bea6a6af755},
                       {0xbd6192029dd91d60, 0x00020e6dfbb7c441, 0xf3fbe985738811dd, 0x2e00000000000000},
                       {0xfecee737556609f5, 0xfad4dc0000000000, 0x14d93f0c55095499, 0x000000000000714c},
                       {0xf3fbe985738811dd, 0x000000000000015b, 0xbe55668178139c8e, 0x00000000a865d7d4},
                       {0x4a6c986967d5ace8, 0x0000000000000067, 0x5052886f7169c8c5, 0x2c1fb5204d248917},
                       {0xe5baa16ee5b5419e, 0xbad28e0ca5854070, 0x00020e6dfbb7c441, 0x2d21e3da342cd6be},
                       {0xe35a000000000000, 0x986a686578456056, 0x6edd225600000000, 0xc7dee68fffbaf900},
                       {0xfffffffffffffffb, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x00000000000075da, 0xfecee737556609f5, 0x3d0e482377794618, 0x8b4eb00000000000},
                       {0x7fc92593c865b4c2, 0x0da24e08451a8d1a, 0x0010000000000000, 0x2d21e3da342cd6be},
                       {0xfffffffffffffffa, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x0000000000000004, 0xd27d2fde3497614c, 0x262a15662b298944, 0x0000008000000000},
                       {0x000000000000000d, 0xd251a40a022b9000, 0x262a15662b298944, 0x8f09996552504a5d},
                       {0xfffffffffffffff3, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x0da24e08451a8d1a, 0x02ab7bb54e687499, 0xa8519a5b46242cc0, 0x986a686578456056},
                       {0x996d1b60923c18a6, 0x3b4de2fabe6d6476, 0x2d21e3da342cd6be, 0x63eb500cce126b70},
                       {0xf48119b103954df1, 0xaf29109cc0000000, 0x0000000100000000, 0x0ec6680cabb95f09},
                       {0x0000000000000040, 0xbe55668178139c8e, 0x44a705073f90be80, 0x00000000a865d7d4},
                       {0xdf09e5c90a990b56, 0xa73c905bcbc01878, 0x38be984c83ce8648, 0x9d8dbb3a5bde4347},
                       {0xd0abd7d3688aa0d7, 0xbad28e0ca5854070, 0xa8519a5b46242cc0, 0x1000000000000000},
                       {0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff, 0xffffffffffffffff},
                       {0x68323fe289df33d1, 0xf5bad73c74be6d8a, 0xc7dee68fffbaf900, 0x00000000000075da},
                       {0xd251a40a022b9000, 0x6465f271027abfa8, 0xfecee737556609f5, 0xf5bad73c74be6d8a}};
  uint8_t y[12];
  uint8_t e[12] = {0xe2, 0x20, 0x0a, 0x12, 0x00, 0xea, 0x84, 0x10, 0x44, 0x80, 0x49, 0x20};

  vmadc_vi(96, x, y);

  for (int i = 0; i < 12; i++) {
    if (y[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}