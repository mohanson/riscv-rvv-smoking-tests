#include <stddef.h>
#include <stdint.h>

void vmsle_vv(size_t n, const uint64_t x[][4], const uint64_t y[][4], uint64_t z[][4]);

int main() {
  uint64_t x[100][4] = {{0x7c6bcb08155fac38, 0x9480583abdfb5837, 0x0000000100000000, 0x0000000000000000},
                        {0xb36eb1caa58ee7dc, 0x000000000003ed82, 0x14d93f0c55095499, 0x7c6bcb08155fac38},
                        {0x4fcf7212bebfdd89, 0x0ec6680cabb95f09, 0xf48119b103954df1, 0x000000000000000d},
                        {0xb9e2a99fdb7b2948, 0xb040414dd8c98a14, 0x31a7445bdf8bcb5c, 0xbe55668178139c8e},
                        {0x0000000380f3cf69, 0x93d7d7a9d87056f0, 0xb36eb1caa58ee7dc, 0xbd6192029dd91d60},
                        {0x6edd225600000000, 0x986a686578456056, 0xb1db9b0fecbfaabe, 0x1234769364d9eac9},
                        {0x2c1fb5204d248917, 0x7dc2ae94e4000000, 0x27429c30e8b6cff7, 0xdfd83d690e5f073e},
                        {0x62daff171a9fae42, 0xe5baa16ee5b5419e, 0x314320aa7da5b1ef, 0xa6a669d1baba633e},
                        {0x9d8dbb3a5bde4347, 0xca9d54bd4e78980e, 0xf5bad73c74be6d8a, 0x25474d793f2c7d32},
                        {0x314320aa7da5b1ef, 0xe35a000000000000, 0x314320aa7da5b1ef, 0x0000000000000000},
                        {0xfecee737556609f5, 0x0000000000000080, 0x000000000000015b, 0x00000000a865d7d4},
                        {0x05ada4e53975b451, 0xa73c905bcbc01878, 0x58aee9fdc3f41b74, 0xb9e2a99fdb7b2948},
                        {0x05ada4e53975b451, 0x27429c30e8b6cff7, 0xca9d54bd4e78980e, 0xa8519a5b46242cc0},
                        {0xf48119b103954df1, 0x6edd225600000000, 0xea59a91078581c00, 0x000000000dd2966b},
                        {0xdfd83d690e5f073e, 0x3d0e482377794618, 0x05ada4e53975b451, 0xea59a91078581c00},
                        {0x63eb500cce126b70, 0xb040414dd8c98a14, 0x000000000003ed82, 0xbe55668178139c8e},
                        {0x31523358d080e093, 0x3d0e482377794618, 0xf0fe55be95a18d13, 0x6465f271027abfa8},
                        {0xd251a40a022b9000, 0x4fcf7212bebfdd89, 0x68323fe289df33d1, 0x3b4de2fabe6d6476},
                        {0x0000000000400000, 0x7f2e6910bdea3ffd, 0x0000000000010000, 0x63eb500cce126b70},
                        {0x62daff171a9fae42, 0x0000000000400000, 0x38be984c83ce8648, 0x34f2a050c605b6b0},
                        {0x314320aa7da5b1ef, 0x4fcf7212bebfdd89, 0x16b3a918e4278c9d, 0x986a686578456056},
                        {0x2e00000000000000, 0x93d7d7a9d87056f0, 0xb9e2a99fdb7b2948, 0x3b4de2fabe6d6476},
                        {0xca9d54bd4e78980e, 0x9d8dbb3a5bde4347, 0x0000000001000000, 0x0000000000000080},
                        {0x9d8dbb3a5bde4347, 0xdfd3a0870f60e072, 0xb9e2a99fdb7b2948, 0xb040414dd8c98a14},
                        {0x262a15662b298944, 0x4a6c986967d5ace8, 0x0000000000000004, 0x8a4a182923bdf75a},
                        {0x7fc92593c865b4c2, 0x996d1b60923c18a6, 0x7dc2ae94e4000000, 0x6465f271027abfa8},
                        {0xea59a91078581c00, 0x0000000000000000, 0x0000000380f3cf69, 0x2e00000000000000},
                        {0x000000000000015b, 0x0000800000000000, 0xb040414dd8c98a14, 0x000000000003ed82},
                        {0x2d21e3da342cd6be, 0xdfd3a0870f60e072, 0x00000bea6a6af755, 0x00020e6dfbb7c441},
                        {0x79780d4e5b2b3b2a, 0xa6a669d1baba633e, 0x000000a3714b9ad2, 0x867e3492977cb1bb},
                        {0xca9d54bd4e78980e, 0x79780d4e5b2b3b2a, 0x38be984c83ce8648, 0x9480583abdfb5837},
                        {0x0000000000002000, 0xd251a40a022b9000, 0xc7dee68fffbaf900, 0x14d93f0c55095499},
                        {0x3b4de2fabe6d6476, 0xb9e2a99fdb7b2948, 0x79780d4e5b2b3b2a, 0xf48119b103954df1},
                        {0x0000000100000000, 0x000000000000000d, 0x44a705073f90be80, 0x00020e6dfbb7c441},
                        {0x000000000000015b, 0x2e00000000000000, 0xf5bad73c74be6d8a, 0xd0abd7d3688aa0d7},
                        {0x68323fe289df33d1, 0xd27d2fde3497614c, 0xa8519a5b46242cc0, 0x61fd04828c93ce01},
                        {0x00000000000075da, 0x0000000100000000, 0x2e00000000000000, 0x000000000000015b},
                        {0x000000a3714b9ad2, 0x8f09996552504a5d, 0x6d159abfb3030000, 0x0000000000000000},
                        {0x00129af7f2440efe, 0x90e1bc8ba22d3294, 0x00020e6dfbb7c441, 0x0000000000000000},
                        {0xdf9a26c8470349dd, 0x61fd04828c93ce01, 0x0000000380f3cf69, 0x0000000000000067},
                        {0x3b0d936889b10a5d, 0x986a686578456056, 0xdf9a26c8470349dd, 0x1735808ee4398bca},
                        {0x4a6c986967d5ace8, 0x1000000000000000, 0x996d1b60923c18a6, 0x00020e6dfbb7c441},
                        {0x25474d793f2c7d32, 0xfad4dc0000000000, 0x1000000000000000, 0x79780d4e5b2b3b2a},
                        {0x00000bea6a6af755, 0x58aee9fdc3f41b74, 0x4ab9cfc9a41744c4, 0x867e3492977cb1bb},
                        {0xf48119b103954df1, 0xc7dee68fffbaf900, 0x0000000100000000, 0x7c6bcb08155fac38},
                        {0xdfd83d690e5f073e, 0x9420000000000000, 0xea59a91078581c00, 0x44a705073f90be80},
                        {0xd0abd7d3688aa0d7, 0x9480583abdfb5837, 0xfad4dc0000000000, 0xf0fe55be95a18d13},
                        {0x000000000dd2966b, 0x0000000000000000, 0xc3bd5e2cd52318a8, 0x44a705073f90be80},
                        {0xfecee737556609f5, 0xbebf0929f41aa230, 0xb1db9b0fecbfaabe, 0x8c91e2fe14041a34},
                        {0x2e00000000000000, 0x4a6c986967d5ace8, 0x44a705073f90be80, 0xa6a669d1baba633e},
                        {0xc7dee68fffbaf900, 0x0000000000000080, 0x000000000000000d, 0x0000000000010000},
                        {0xf5bad73c74be6d8a, 0x62daff171a9fae42, 0xc7dee68fffbaf900, 0x0000000000000040},
                        {0x0000008000000000, 0x8c91e2fe14041a34, 0x61fd04828c93ce01, 0xc3bd5e2cd52318a8},
                        {0xe5baa16ee5b5419e, 0xffffffffffffffff, 0xbe55668178139c8e, 0x8c91e2fe14041a34},
                        {0x0000000000000067, 0x000000000dd2966b, 0xe35a000000000000, 0x6d159abfb3030000},
                        {0xa73c905bcbc01878, 0xca9d54bd4e78980e, 0x58aee9fdc3f41b74, 0xffffffffffffffff},
                        {0xc9d368e6546c1f00, 0xc10a152d71cb3f16, 0x0000000000400000, 0xdf09e5c90a990b56},
                        {0x8c91e2fe14041a34, 0x62daff171a9fae42, 0x25474d793f2c7d32, 0x0000000000002000},
                        {0x8000000000000000, 0x63eb500cce126b70, 0xa8519a5b46242cc0, 0xffffffffffffffff},
                        {0x0000000000000080, 0x000000000000015b, 0x27429c30e8b6cff7, 0x7f2e6910bdea3ffd},
                        {0xea59a91078581c00, 0x9d8dbb3a5bde4347, 0x27429c30e8b6cff7, 0x0000000000000000},
                        {0x6edd225600000000, 0xfad4dc0000000000, 0x61fd04828c93ce01, 0x8a4a182923bdf75a},
                        {0x6465f271027abfa8, 0x4ab9cfc9a41744c4, 0x00129af7f2440efe, 0x05ada4e53975b451},
                        {0x000000000000714c, 0x9480583abdfb5837, 0x0000000000000080, 0x4a6c986967d5ace8},
                        {0x0100000000000000, 0x3d0e482377794618, 0x0000000000000000, 0x34f2a050c605b6b0},
                        {0x986a686578456056, 0x62daff171a9fae42, 0x6465f271027abfa8, 0xb36eb1caa58ee7dc},
                        {0x00000000a865d7d4, 0x0000000380f3cf69, 0x3b4de2fabe6d6476, 0x90e1bc8ba22d3294},
                        {0x262a15662b298944, 0x8c91e2fe14041a34, 0xb040414dd8c98a14, 0x63eb500cce126b70},
                        {0x0000000380f3cf69, 0x7dc2ae94e4000000, 0x0000000000000004, 0x0000800000000000},
                        {0x00000000a865d7d4, 0x00004a9e26b7f794, 0x00000000000075da, 0x86ddce906c8cdb4d},
                        {0x58aee9fdc3f41b74, 0xc7dee68fffbaf900, 0x0000000380f3cf69, 0xbad28e0ca5854070},
                        {0x6465f271027abfa8, 0x1000000000000000, 0x0000000000000000, 0x38be984c83ce8648},
                        {0xea2177d8d5100000, 0x000000a3714b9ad2, 0xbebf0929f41aa230, 0x7f2e6910bdea3ffd},
                        {0xbe55668178139c8e, 0xb36eb1caa58ee7dc, 0x0ec6680cabb95f09, 0x31523358d080e093},
                        {0xc9d368e6546c1f00, 0xb1db9b0fecbfaabe, 0x0000020000000000, 0x4a6c986967d5ace8},
                        {0x2c1fb5204d248917, 0x34f2a050c605b6b0, 0x000000000000015b, 0xe5baa16ee5b5419e},
                        {0xe35a000000000000, 0x0000000000000067, 0xd251a40a022b9000, 0x31523358d080e093},
                        {0xdf09e5c90a990b56, 0x4cf560811e3465c5, 0x27429c30e8b6cff7, 0x9d8dbb3a5bde4347},
                        {0x8f09996552504a5d, 0x6d159abfb3030000, 0x0000008000000000, 0x1234769364d9eac9},
                        {0x1000000000000000, 0xf48119b103954df1, 0x0000020000000000, 0xf48119b103954df1},
                        {0xcb9848f06e9659f6, 0x0000000000000001, 0x996d1b60923c18a6, 0x9d8dbb3a5bde4347},
                        {0xe79541e25d0dba6b, 0x58aee9fdc3f41b74, 0xff98837fda2a5bdf, 0x6d159abfb3030000},
                        {0x00000000000075da, 0x3b0d936889b10a5d, 0x000000000000015b, 0x0000020000000000},
                        {0xe35a000000000000, 0xcb9848f06e9659f6, 0x5052886f7169c8c5, 0x0000000000000067},
                        {0x3b0d936889b10a5d, 0x0000000000400000, 0x00000000a865d7d4, 0xd27d2fde3497614c},
                        {0xbad28e0ca5854070, 0xdf09e5c90a990b56, 0x4ab9cfc9a41744c4, 0x90e1bc8ba22d3294},
                        {0x27429c30e8b6cff7, 0x0000000000002000, 0x2e00000000000000, 0xa73c905bcbc01878},
                        {0xf2a6b292a535dc4e, 0x0ec6680cabb95f09, 0x63eb500cce126b70, 0xca9d54bd4e78980e},
                        {0x00004a9e26b7f794, 0x9480583abdfb5837, 0x2c1fb5204d248917, 0x0000008000000000},
                        {0x4fcf7212bebfdd89, 0xbd6192029dd91d60, 0x3b4de2fabe6d6476, 0x986a686578456056},
                        {0xea59a91078581c00, 0x262a15662b298944, 0xfecee737556609f5, 0x0000000380f3cf69},
                        {0x000000000000714c, 0xbe55668178139c8e, 0x8b4eb00000000000, 0x0000008000000000},
                        {0x62daff171a9fae42, 0x0f812a265e560f2b, 0x000000000000714c, 0xf48119b103954df1},
                        {0x0000020000000000, 0x0f812a265e560f2b, 0x000000000dd2966b, 0xb040414dd8c98a14},
                        {0x0000000000000067, 0xf48119b103954df1, 0xe35a000000000000, 0x68323fe289df33d1},
                        {0xfad4dc0000000000, 0x0000000000000004, 0x8b4eb00000000000, 0x4ab9cfc9a41744c4},
                        {0xbebf0929f41aa230, 0x3d0e482377794618, 0xe5baa16ee5b5419e, 0x0010000000000000},
                        {0x3d0e482377794618, 0xff98837fda2a5bdf, 0xb1db9b0fecbfaabe, 0x0100000000000000},
                        {0x2c1fb5204d248917, 0xbd6192029dd91d60, 0xbebf0929f41aa230, 0xf2a6b292a535dc4e},
                        {0x4fcf7212bebfdd89, 0x7c6bcb08155fac38, 0xbad28e0ca5854070, 0x1000000000000000}};
  uint64_t y[100][4] = {{0x05ada4e53975b451, 0x68323fe289df33d1, 0x000000a3714b9ad2, 0xea2177d8d5100000},
                        {0xb040414dd8c98a14, 0x1735808ee4398bca, 0xb040414dd8c98a14, 0x0000008000000000},
                        {0x00004a9e26b7f794, 0x0010000000000000, 0x0da24e08451a8d1a, 0x0ec6680cabb95f09},
                        {0x31a7445bdf8bcb5c, 0x58aee9fdc3f41b74, 0x1000000000000000, 0x00004a9e26b7f794},
                        {0x0000000000000000, 0x27429c30e8b6cff7, 0xf2a6b292a535dc4e, 0x6d159abfb3030000},
                        {0x0010000000000000, 0x3b4de2fabe6d6476, 0x93d7d7a9d87056f0, 0x1000000000000000},
                        {0x00004a9e26b7f794, 0xf2a6b292a535dc4e, 0x0000000000000001, 0xbd6192029dd91d60},
                        {0x8a4a182923bdf75a, 0x0000000100000000, 0x0000000000000040, 0x8b4eb00000000000},
                        {0x00004a9e26b7f794, 0x00000bea6a6af755, 0x68323fe289df33d1, 0x3b0d936889b10a5d},
                        {0xb9e2a99fdb7b2948, 0xca9d54bd4e78980e, 0x9d8dbb3a5bde4347, 0xe79541e25d0dba6b},
                        {0xca9d54bd4e78980e, 0x25474d793f2c7d32, 0xc10a152d71cb3f16, 0x1234769364d9eac9},
                        {0x31523358d080e093, 0x6465f271027abfa8, 0x0010000000000000, 0xbd6192029dd91d60},
                        {0xdfd83d690e5f073e, 0xea59a91078581c00, 0xff98837fda2a5bdf, 0xea59a91078581c00},
                        {0x31a7445bdf8bcb5c, 0xe5baa16ee5b5419e, 0xc9d368e6546c1f00, 0xff98837fda2a5bdf},
                        {0x61fd04828c93ce01, 0x0000000000000001, 0x314320aa7da5b1ef, 0x37269c228e8e3db1},
                        {0xfad4dc0000000000, 0xca9d54bd4e78980e, 0xf5bad73c74be6d8a, 0x1234769364d9eac9},
                        {0x0000000000000000, 0x1735808ee4398bca, 0xff98837fda2a5bdf, 0x9d8dbb3a5bde4347},
                        {0xa6a669d1baba633e, 0x2d21e3da342cd6be, 0x7f2e6910bdea3ffd, 0xbebf0929f41aa230},
                        {0x2e00000000000000, 0x0000000000000004, 0x4cf560811e3465c5, 0x79780d4e5b2b3b2a},
                        {0xff98837fda2a5bdf, 0x3b4de2fabe6d6476, 0x3d0e482377794618, 0x1000000000000000},
                        {0xf5bad73c74be6d8a, 0xdfd83d690e5f073e, 0x25474d793f2c7d32, 0xa73c905bcbc01878},
                        {0x7dc2ae94e4000000, 0x9d8dbb3a5bde4347, 0x0000800000000000, 0x93d7d7a9d87056f0},
                        {0xa73c905bcbc01878, 0xea59a91078581c00, 0x8000000000000000, 0x1234769364d9eac9},
                        {0x00004a9e26b7f794, 0xb9e2a99fdb7b2948, 0x4a6c986967d5ace8, 0xc10a152d71cb3f16},
                        {0x6465f271027abfa8, 0x0000000000000040, 0xea59a91078581c00, 0xd0abd7d3688aa0d7},
                        {0x0f812a265e560f2b, 0x9480583abdfb5837, 0x8c91e2fe14041a34, 0x4cf560811e3465c5},
                        {0x00004a9e26b7f794, 0x0000000000000080, 0xea59a91078581c00, 0x8c91e2fe14041a34},
                        {0x3b0d936889b10a5d, 0x0000800000000000, 0x000000000000015b, 0x2c1fb5204d248917},
                        {0x1234769364d9eac9, 0xdfd83d690e5f073e, 0x7dc2ae94e4000000, 0xea59a91078581c00},
                        {0xf48119b103954df1, 0x4fcf7212bebfdd89, 0x27429c30e8b6cff7, 0x05ada4e53975b451},
                        {0x000000a3714b9ad2, 0x4fcf7212bebfdd89, 0xf48119b103954df1, 0x00000000a865d7d4},
                        {0xdf09e5c90a990b56, 0xff98837fda2a5bdf, 0xa73c905bcbc01878, 0x62daff171a9fae42},
                        {0x9d8dbb3a5bde4347, 0x686f332000000000, 0x14d93f0c55095499, 0x8f09996552504a5d},
                        {0x867e3492977cb1bb, 0x0000020000000000, 0x0000000001000000, 0x000000000003ed82},
                        {0x4ab9cfc9a41744c4, 0x4ab9cfc9a41744c4, 0x00000bea6a6af755, 0xdfd3a0870f60e072},
                        {0x6465f271027abfa8, 0x000000000000000d, 0x58aee9fdc3f41b74, 0x27429c30e8b6cff7},
                        {0x0000000100000000, 0x79780d4e5b2b3b2a, 0xc10a152d71cb3f16, 0x4ab9cfc9a41744c4},
                        {0xe5baa16ee5b5419e, 0x0000000001000000, 0x25474d793f2c7d32, 0x79780d4e5b2b3b2a},
                        {0x0000000000010000, 0x62daff171a9fae42, 0x0f812a265e560f2b, 0x79780d4e5b2b3b2a},
                        {0x2c1fb5204d248917, 0x0000000000000040, 0x38be984c83ce8648, 0x4a6c986967d5ace8},
                        {0xaf29109cc0000000, 0xea2177d8d5100000, 0x7f2e6910bdea3ffd, 0x000000000dd2966b},
                        {0xc9d368e6546c1f00, 0x8a4a182923bdf75a, 0x7fc92593c865b4c2, 0xca9d54bd4e78980e},
                        {0x4a6c986967d5ace8, 0x93d7d7a9d87056f0, 0xff98837fda2a5bdf, 0x686f332000000000},
                        {0xdfd83d690e5f073e, 0x3b0d936889b10a5d, 0x8a4a182923bdf75a, 0xf3fbe985738811dd},
                        {0x4fcf7212bebfdd89, 0xb9e2a99fdb7b2948, 0xaf29109cc0000000, 0x14d93f0c55095499},
                        {0x000000a3714b9ad2, 0xc7dee68fffbaf900, 0x3b4de2fabe6d6476, 0x7dc2ae94e4000000},
                        {0x58aee9fdc3f41b74, 0x68323fe289df33d1, 0x31523358d080e093, 0xcb9848f06e9659f6},
                        {0x00129af7f2440efe, 0x61fd04828c93ce01, 0x1000000000000000, 0x8b4eb00000000000},
                        {0x1000000000000000, 0x000000000dd2966b, 0x0000000000000000, 0x0ec6680cabb95f09},
                        {0xd27d2fde3497614c, 0x000000a3714b9ad2, 0xb040414dd8c98a14, 0x0ec6680cabb95f09},
                        {0x37269c228e8e3db1, 0xd251a40a022b9000, 0x7fc92593c865b4c2, 0x000000000dd2966b},
                        {0xc10a152d71cb3f16, 0x93d7d7a9d87056f0, 0x3b4de2fabe6d6476, 0xd27d2fde3497614c},
                        {0x9420000000000000, 0x996d1b60923c18a6, 0x7fc92593c865b4c2, 0x00000000000075da},
                        {0x27429c30e8b6cff7, 0x6465f271027abfa8, 0xc9d368e6546c1f00, 0x0010000000000000},
                        {0x00020e6dfbb7c441, 0x0000000001000000, 0x0000000000000000, 0x00020e6dfbb7c441},
                        {0xea2177d8d5100000, 0xc3bd5e2cd52318a8, 0x0000000000010000, 0x68323fe289df33d1},
                        {0x0f812a265e560f2b, 0xd27d2fde3497614c, 0x7dc2ae94e4000000, 0x0da24e08451a8d1a},
                        {0x4cf560811e3465c5, 0x0000000100000000, 0xa73c905bcbc01878, 0x00000bea6a6af755},
                        {0x31a7445bdf8bcb5c, 0xa73c905bcbc01878, 0xc3bd5e2cd52318a8, 0x000000000003ed82},
                        {0xf0fe55be95a18d13, 0x0000000000000004, 0x1000000000000000, 0x4cf560811e3465c5},
                        {0x00129af7f2440efe, 0x68323fe289df33d1, 0x00000bea6a6af755, 0xcb9848f06e9659f6},
                        {0x0100000000000000, 0x0000000000000040, 0x000000000000000d, 0x8000000000000000},
                        {0xf3fbe985738811dd, 0xa6a669d1baba633e, 0x27429c30e8b6cff7, 0xca9d54bd4e78980e},
                        {0xea59a91078581c00, 0x0000000000000001, 0xd0abd7d3688aa0d7, 0x000000a3714b9ad2},
                        {0x000000000000015b, 0xa8519a5b46242cc0, 0xbd6192029dd91d60, 0xbe55668178139c8e},
                        {0xf5bad73c74be6d8a, 0x9420000000000000, 0x00000000000075da, 0x686f332000000000},
                        {0x00000000a865d7d4, 0x686f332000000000, 0x00000000a865d7d4, 0x0000000000000067},
                        {0x0f812a265e560f2b, 0x6d159abfb3030000, 0xff98837fda2a5bdf, 0x05ada4e53975b451},
                        {0x000000000003ed82, 0xb9e2a99fdb7b2948, 0xd251a40a022b9000, 0x68323fe289df33d1},
                        {0x000000000000714c, 0x3d0e482377794618, 0x0100000000000000, 0x6edd225600000000},
                        {0x63eb500cce126b70, 0x31a7445bdf8bcb5c, 0x314320aa7da5b1ef, 0x37269c228e8e3db1},
                        {0x79780d4e5b2b3b2a, 0xd0abd7d3688aa0d7, 0xdf9a26c8470349dd, 0x686f332000000000},
                        {0xdfd3a0870f60e072, 0x262a15662b298944, 0x00000000a865d7d4, 0xf0fe55be95a18d13},
                        {0x3b4de2fabe6d6476, 0xca9d54bd4e78980e, 0x0000000000000067, 0x1234769364d9eac9},
                        {0x2e00000000000000, 0xf48119b103954df1, 0x0000800000000000, 0x00129af7f2440efe},
                        {0x0000000000000001, 0x8a4a182923bdf75a, 0x986a686578456056, 0x0010000000000000},
                        {0x0000000100000000, 0x25474d793f2c7d32, 0x0ec6680cabb95f09, 0x79780d4e5b2b3b2a},
                        {0x9d8dbb3a5bde4347, 0x0000800000000000, 0x14d93f0c55095499, 0x1735808ee4398bca},
                        {0x0000000000000000, 0x0000020000000000, 0x0000000100000000, 0xff98837fda2a5bdf},
                        {0x000000000dd2966b, 0x1000000000000000, 0x14d93f0c55095499, 0x3b0d936889b10a5d},
                        {0xcb9848f06e9659f6, 0x00000bea6a6af755, 0xdf09e5c90a990b56, 0x1735808ee4398bca},
                        {0x68323fe289df33d1, 0x0000000000000004, 0x0000000000002000, 0x16b3a918e4278c9d},
                        {0xff98837fda2a5bdf, 0x0000000380f3cf69, 0x000000000003ed82, 0x000000000dd2966b},
                        {0x58aee9fdc3f41b74, 0x0000000000000000, 0x3b4de2fabe6d6476, 0xca9d54bd4e78980e},
                        {0x2d21e3da342cd6be, 0xe5baa16ee5b5419e, 0x00000000a865d7d4, 0xf5bad73c74be6d8a},
                        {0x37269c228e8e3db1, 0x31523358d080e093, 0xaf29109cc0000000, 0xe5baa16ee5b5419e},
                        {0x0000000000000004, 0xf2a6b292a535dc4e, 0x7fc92593c865b4c2, 0x14d93f0c55095499},
                        {0x000000000000714c, 0x02ab7bb54e687499, 0xca9d54bd4e78980e, 0x000000000000015b},
                        {0x986a686578456056, 0x4a6c986967d5ace8, 0x00004a9e26b7f794, 0x0da24e08451a8d1a},
                        {0x8a4a182923bdf75a, 0x1234769364d9eac9, 0x3d0e482377794618, 0x000000000003ed82},
                        {0x0100000000000000, 0x2d21e3da342cd6be, 0xf3fbe985738811dd, 0xaf29109cc0000000},
                        {0x6465f271027abfa8, 0x0000008000000000, 0x34f2a050c605b6b0, 0xbd6192029dd91d60},
                        {0x79780d4e5b2b3b2a, 0x0100000000000000, 0x0000000000000040, 0x25474d793f2c7d32},
                        {0xbebf0929f41aa230, 0xbe55668178139c8e, 0xfecee737556609f5, 0x3d0e482377794618},
                        {0x00000000a865d7d4, 0x0000000000000000, 0x61fd04828c93ce01, 0x1735808ee4398bca},
                        {0x1234769364d9eac9, 0x8f09996552504a5d, 0x86ddce906c8cdb4d, 0xb1db9b0fecbfaabe},
                        {0xc3bd5e2cd52318a8, 0x2d21e3da342cd6be, 0x7dc2ae94e4000000, 0x58aee9fdc3f41b74},
                        {0x0000000000000040, 0xc9d368e6546c1f00, 0x1000000000000000, 0x93d7d7a9d87056f0},
                        {0x00000000000075da, 0x000000000000714c, 0xa73c905bcbc01878, 0xd0abd7d3688aa0d7},
                        {0x0100000000000000, 0xe79541e25d0dba6b, 0x9d8dbb3a5bde4347, 0x0010000000000000}};
  uint64_t z[100][4];
  uint64_t e[100][4] = {{0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000001, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000},
                        {0x0000000000000000, 0x0000000000000000, 0x0000000000000000, 0x0000000000000000}};

  vmsle_vv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }

  return 0;
}