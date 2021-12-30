#include <stddef.h>
#include <stdint.h>

void vwaddu_wv(size_t n, const uint64_t x[][8], const uint64_t y[][4], uint64_t z[][8]);

int main() {
uint64_t x[100][8] = 
{{0xea2177d8d5100000,0xca9d54bd4e78980e,0x000000000003ed82,0xf5bad73c74be6d8a,0x68323fe289df33d1,0xb1db9b0fecbfaabe,0xd0abd7d3688aa0d7,0x86ddce906c8cdb4d},{0x79780d4e5b2b3b2a,0xdfd83d690e5f073e,0x3b4de2fabe6d6476,0xfecee737556609f5,0x44a705073f90be80,0x3d0e482377794618,0x6465f271027abfa8,0x000000000dd2966b},{0xd251a40a022b9000,0x6d159abfb3030000,0xdfd3a0870f60e072,0x4ab9cfc9a41744c4,0x6d159abfb3030000,0x000000000000000d,0xfad4dc0000000000,0x0000000000000000},{0x0000000000000067,0x000000000000000d,0x7fc92593c865b4c2,0x14d93f0c55095499,0x262a15662b298944,0xbebf0929f41aa230,0x986a686578456056,0xca9d54bd4e78980e},{0xbad28e0ca5854070,0x986a686578456056,0x4fcf7212bebfdd89,0xb040414dd8c98a14,0x7f2e6910bdea3ffd,0xd0abd7d3688aa0d7,0x000000000000000d,0xbd6192029dd91d60},{0x79780d4e5b2b3b2a,0x0000000100000000,0x2d21e3da342cd6be,0x0000020000000000,0x63eb500cce126b70,0x0000000000400000,0x0000000000000001,0xdfd83d690e5f073e},{0x0000000000000000,0x686f332000000000,0x0000000000000067,0xaf29109cc0000000,0x9480583abdfb5837,0x0000020000000000,0xbebf0929f41aa230,0x314320aa7da5b1ef},{0xf2a6b292a535dc4e,0x000000000000714c,0x0000000001000000,0x0000000000400000,0xea2177d8d5100000,0xb9e2a99fdb7b2948,0xf5bad73c74be6d8a,0x0000000001000000},{0x986a686578456056,0x68323fe289df33d1,0x000000000dd2966b,0xd0abd7d3688aa0d7,0x93d7d7a9d87056f0,0xf2a6b292a535dc4e,0x0010000000000000,0x986a686578456056},{0x0000000380f3cf69,0x0000000000010000,0xbad28e0ca5854070,0xa6a669d1baba633e,0x0000000000000000,0xbd6192029dd91d60,0x62daff171a9fae42,0xfad4dc0000000000},{0x0000000000000067,0x996d1b60923c18a6,0x00000bea6a6af755,0xe35a000000000000,0xd251a40a022b9000,0xb040414dd8c98a14,0xbebf0929f41aa230,0x262a15662b298944},{0x0f812a265e560f2b,0x63eb500cce126b70,0xaf29109cc0000000,0x16b3a918e4278c9d,0x000000000000015b,0x3b4de2fabe6d6476,0xa6a669d1baba633e,0x8a4a182923bdf75a},{0x16b3a918e4278c9d,0x6465f271027abfa8,0x37269c228e8e3db1,0x867e3492977cb1bb,0xca9d54bd4e78980e,0x2d21e3da342cd6be,0xea2177d8d5100000,0xf0fe55be95a18d13},{0xb1db9b0fecbfaabe,0x6edd225600000000,0x0000000001000000,0x93d7d7a9d87056f0,0x8a4a182923bdf75a,0x000000000000015b,0x686f332000000000,0x61fd04828c93ce01},{0x9420000000000000,0x38be984c83ce8648,0xdfd83d690e5f073e,0x0000008000000000,0xd27d2fde3497614c,0x62daff171a9fae42,0x0000000000000040,0xffffffffffffffff},{0x00004a9e26b7f794,0xe35a000000000000,0xdfd83d690e5f073e,0x37269c228e8e3db1,0x000000000000714c,0x37269c228e8e3db1,0x0000000000000080,0xbe55668178139c8e},{0x44a705073f90be80,0xffffffffffffffff,0x0000000001000000,0x05ada4e53975b451,0x31a7445bdf8bcb5c,0xa8519a5b46242cc0,0x0000000000000040,0xa6a669d1baba633e},{0xaf29109cc0000000,0x6d159abfb3030000,0x0000000000000001,0x000000a3714b9ad2,0x4fcf7212bebfdd89,0xb36eb1caa58ee7dc,0x0000000000000000,0x3d0e482377794618},{0xc7dee68fffbaf900,0xea2177d8d5100000,0xdf09e5c90a990b56,0x31a7445bdf8bcb5c,0xc7dee68fffbaf900,0xfad4dc0000000000,0xca9d54bd4e78980e,0x686f332000000000},{0xd27d2fde3497614c,0x14d93f0c55095499,0x2d21e3da342cd6be,0xdf9a26c8470349dd,0x7f2e6910bdea3ffd,0x2e00000000000000,0xbad28e0ca5854070,0x0100000000000000},{0x8b4eb00000000000,0x0000020000000000,0xc10a152d71cb3f16,0xf3fbe985738811dd,0x79780d4e5b2b3b2a,0x0da24e08451a8d1a,0xea2177d8d5100000,0x31523358d080e093},{0xbe55668178139c8e,0xffffffffffffffff,0x00020e6dfbb7c441,0x867e3492977cb1bb,0x90e1bc8ba22d3294,0x9480583abdfb5837,0xc10a152d71cb3f16,0x000000000000000d},{0x1735808ee4398bca,0x4ab9cfc9a41744c4,0xfecee737556609f5,0xdf09e5c90a990b56,0x93d7d7a9d87056f0,0xea2177d8d5100000,0xc10a152d71cb3f16,0x2c1fb5204d248917},{0x3b4de2fabe6d6476,0x000000a3714b9ad2,0xfecee737556609f5,0x0f812a265e560f2b,0x0f812a265e560f2b,0x000000000dd2966b,0xc3bd5e2cd52318a8,0xdf09e5c90a990b56},{0x31a7445bdf8bcb5c,0x31a7445bdf8bcb5c,0x90e1bc8ba22d3294,0x6d159abfb3030000,0x0000000100000000,0x000000000000015b,0x0da24e08451a8d1a,0x986a686578456056},{0x4cf560811e3465c5,0xf2a6b292a535dc4e,0x000000000000714c,0xea2177d8d5100000,0xe5baa16ee5b5419e,0x000000000000015b,0xe5baa16ee5b5419e,0x3d0e482377794618},{0xe5baa16ee5b5419e,0x34f2a050c605b6b0,0xea2177d8d5100000,0x4cf560811e3465c5,0x9420000000000000,0x2e00000000000000,0xfecee737556609f5,0xaf29109cc0000000},{0xbd6192029dd91d60,0xea59a91078581c00,0xea59a91078581c00,0x686f332000000000,0x2e00000000000000,0xd0abd7d3688aa0d7,0x8b4eb00000000000,0xffffffffffffffff},{0x4fcf7212bebfdd89,0x0000000000400000,0x3b4de2fabe6d6476,0x7dc2ae94e4000000,0x16b3a918e4278c9d,0xf5bad73c74be6d8a,0x00129af7f2440efe,0x90e1bc8ba22d3294},{0x37269c228e8e3db1,0x38be984c83ce8648,0x58aee9fdc3f41b74,0xcb9848f06e9659f6,0xdf9a26c8470349dd,0xc10a152d71cb3f16,0x86ddce906c8cdb4d,0x7dc2ae94e4000000},{0x7c6bcb08155fac38,0xffffffffffffffff,0xaf29109cc0000000,0x6edd225600000000,0x34f2a050c605b6b0,0x262a15662b298944,0x63eb500cce126b70,0x1234769364d9eac9},{0x31a7445bdf8bcb5c,0x31a7445bdf8bcb5c,0x867e3492977cb1bb,0xaf29109cc0000000,0x1234769364d9eac9,0x0000000100000000,0x34f2a050c605b6b0,0xff98837fda2a5bdf},{0x9d8dbb3a5bde4347,0x6d159abfb3030000,0x867e3492977cb1bb,0x3d0e482377794618,0x31523358d080e093,0xa8519a5b46242cc0,0xb1db9b0fecbfaabe,0xa73c905bcbc01878},{0x9480583abdfb5837,0x37269c228e8e3db1,0x58aee9fdc3f41b74,0x1000000000000000,0x00004a9e26b7f794,0x0f812a265e560f2b,0x262a15662b298944,0x68323fe289df33d1},{0x7fc92593c865b4c2,0x02ab7bb54e687499,0xea2177d8d5100000,0x000000000000015b,0x4cf560811e3465c5,0x0000000380f3cf69,0x0000000000000000,0xc3bd5e2cd52318a8},{0x0000000001000000,0x000000000000000d,0x27429c30e8b6cff7,0x0000000000000080,0x7fc92593c865b4c2,0x314320aa7da5b1ef,0x86ddce906c8cdb4d,0xbebf0929f41aa230},{0x0000008000000000,0x02ab7bb54e687499,0x05ada4e53975b451,0xbad28e0ca5854070,0x7fc92593c865b4c2,0x000000000000015b,0x0000000100000000,0x3d0e482377794618},{0xc7dee68fffbaf900,0x4ab9cfc9a41744c4,0x867e3492977cb1bb,0xea2177d8d5100000,0x61fd04828c93ce01,0xdf09e5c90a990b56,0x0000000000000067,0x63eb500cce126b70},{0xc9d368e6546c1f00,0x000000a3714b9ad2,0xffffffffffffffff,0xff98837fda2a5bdf,0x000000000000015b,0xfad4dc0000000000,0x1234769364d9eac9,0x4cf560811e3465c5},{0xf3fbe985738811dd,0x8000000000000000,0x4a6c986967d5ace8,0x68323fe289df33d1,0xdf09e5c90a990b56,0x9d8dbb3a5bde4347,0x0000008000000000,0x0000800000000000},{0x000000000003ed82,0x0000000000000000,0x3b4de2fabe6d6476,0xa73c905bcbc01878,0xf3fbe985738811dd,0xe5baa16ee5b5419e,0x8f09996552504a5d,0x05ada4e53975b451},{0x4a6c986967d5ace8,0x8b4eb00000000000,0xe79541e25d0dba6b,0xbe55668178139c8e,0x4fcf7212bebfdd89,0x314320aa7da5b1ef,0x6edd225600000000,0xd27d2fde3497614c},{0x7c6bcb08155fac38,0x0000020000000000,0x1234769364d9eac9,0x2c1fb5204d248917,0x7f2e6910bdea3ffd,0xd27d2fde3497614c,0x0000000001000000,0xf3fbe985738811dd},{0x6465f271027abfa8,0xd251a40a022b9000,0x3b4de2fabe6d6476,0x0000000380f3cf69,0x00129af7f2440efe,0x0000000000000067,0xb040414dd8c98a14,0x37269c228e8e3db1},{0xca9d54bd4e78980e,0x58aee9fdc3f41b74,0x0000000000010000,0x31a7445bdf8bcb5c,0xdfd83d690e5f073e,0x7f2e6910bdea3ffd,0x2e00000000000000,0x25474d793f2c7d32},{0x63eb500cce126b70,0x8b4eb00000000000,0x00000000a865d7d4,0x4ab9cfc9a41744c4,0x000000000000000d,0x0000000000000040,0x4cf560811e3465c5,0x37269c228e8e3db1},{0xb36eb1caa58ee7dc,0xbe55668178139c8e,0xbad28e0ca5854070,0xfecee737556609f5,0x00000bea6a6af755,0xc9d368e6546c1f00,0x25474d793f2c7d32,0x00004a9e26b7f794},{0x986a686578456056,0x68323fe289df33d1,0x686f332000000000,0x0010000000000000,0x1234769364d9eac9,0x0000000000000080,0x0000000001000000,0xff98837fda2a5bdf},{0x63eb500cce126b70,0x6edd225600000000,0x9420000000000000,0x0000000000000001,0xd251a40a022b9000,0x000000000dd2966b,0x7f2e6910bdea3ffd,0xa8519a5b46242cc0},{0x58aee9fdc3f41b74,0xc3bd5e2cd52318a8,0x62daff171a9fae42,0xfad4dc0000000000,0x0000000000000080,0xf3fbe985738811dd,0x44a705073f90be80,0xb1db9b0fecbfaabe},{0x000000000dd2966b,0x90e1bc8ba22d3294,0xf3fbe985738811dd,0xffffffffffffffff,0xbd6192029dd91d60,0x0000000000000040,0xb36eb1caa58ee7dc,0x0ec6680cabb95f09},{0x63eb500cce126b70,0xa73c905bcbc01878,0x8c91e2fe14041a34,0x31523358d080e093,0xdf09e5c90a990b56,0x61fd04828c93ce01,0xa73c905bcbc01878,0xc7dee68fffbaf900},{0x9420000000000000,0x25474d793f2c7d32,0x61fd04828c93ce01,0x0000000000000040,0x00020e6dfbb7c441,0xa8519a5b46242cc0,0x8c91e2fe14041a34,0x0000000000000004},{0xca9d54bd4e78980e,0x0000008000000000,0xd27d2fde3497614c,0xff98837fda2a5bdf,0x16b3a918e4278c9d,0xea2177d8d5100000,0xea2177d8d5100000,0x38be984c83ce8648},{0x00004a9e26b7f794,0x0000000000000001,0x4a6c986967d5ace8,0x000000000000714c,0x000000000000714c,0xbe55668178139c8e,0xb36eb1caa58ee7dc,0xf48119b103954df1},{0x00000000000075da,0xb36eb1caa58ee7dc,0x8f09996552504a5d,0x62daff171a9fae42,0xf3fbe985738811dd,0xd251a40a022b9000,0x986a686578456056,0x4fcf7212bebfdd89},{0x986a686578456056,0xdfd3a0870f60e072,0x686f332000000000,0x25474d793f2c7d32,0x6edd225600000000,0xe35a000000000000,0x25474d793f2c7d32,0x3d0e482377794618},{0xffffffffffffffff,0xaf29109cc0000000,0xca9d54bd4e78980e,0x0010000000000000,0x3b4de2fabe6d6476,0x00020e6dfbb7c441,0xcb9848f06e9659f6,0xbebf0929f41aa230},{0x00020e6dfbb7c441,0x8000000000000000,0x0000020000000000,0x00004a9e26b7f794,0x3b0d936889b10a5d,0xaf29109cc0000000,0xffffffffffffffff,0x000000000000000d},{0xdfd83d690e5f073e,0x68323fe289df33d1,0xd27d2fde3497614c,0xe79541e25d0dba6b,0x86ddce906c8cdb4d,0xfecee737556609f5,0x16b3a918e4278c9d,0x31a7445bdf8bcb5c},{0x0000008000000000,0xca9d54bd4e78980e,0xd0abd7d3688aa0d7,0x00000000000075da,0x00000000000075da,0xdfd3a0870f60e072,0xea59a91078581c00,0xca9d54bd4e78980e},{0xf3fbe985738811dd,0x686f332000000000,0xfecee737556609f5,0x0000000000000001,0xb040414dd8c98a14,0x000000000003ed82,0xf0fe55be95a18d13,0x000000000000000d},{0x1735808ee4398bca,0x000000000000000d,0x0000008000000000,0xbebf0929f41aa230,0x8c91e2fe14041a34,0x05ada4e53975b451,0x2c1fb5204d248917,0x0da24e08451a8d1a},{0xf0fe55be95a18d13,0x27429c30e8b6cff7,0x0000000000000080,0x2d21e3da342cd6be,0x7fc92593c865b4c2,0x262a15662b298944,0xbe55668178139c8e,0x61fd04828c93ce01},{0x2c1fb5204d248917,0xa6a669d1baba633e,0xf3fbe985738811dd,0x8c91e2fe14041a34,0x314320aa7da5b1ef,0x867e3492977cb1bb,0xf2a6b292a535dc4e,0x02ab7bb54e687499},{0x262a15662b298944,0x0000000001000000,0x34f2a050c605b6b0,0xbe55668178139c8e,0x4fcf7212bebfdd89,0x000000000dd2966b,0xffffffffffffffff,0xfecee737556609f5},{0x000000000000015b,0x0ec6680cabb95f09,0x0000000000000001,0x000000000003ed82,0xf0fe55be95a18d13,0x90e1bc8ba22d3294,0x93d7d7a9d87056f0,0x31a7445bdf8bcb5c},{0xd251a40a022b9000,0x0010000000000000,0xe79541e25d0dba6b,0xa73c905bcbc01878,0x8b4eb00000000000,0x00000bea6a6af755,0x7c6bcb08155fac38,0xfecee737556609f5},{0x1234769364d9eac9,0xa73c905bcbc01878,0xbe55668178139c8e,0xaf29109cc0000000,0xbad28e0ca5854070,0xaf29109cc0000000,0xffffffffffffffff,0xa73c905bcbc01878},{0xb9e2a99fdb7b2948,0x0000000000000004,0x79780d4e5b2b3b2a,0x9480583abdfb5837,0xc7dee68fffbaf900,0x2d21e3da342cd6be,0x4fcf7212bebfdd89,0xe79541e25d0dba6b},{0x314320aa7da5b1ef,0xfecee737556609f5,0x8b4eb00000000000,0x0000800000000000,0x262a15662b298944,0xff98837fda2a5bdf,0xbd6192029dd91d60,0x6465f271027abfa8},{0xe35a000000000000,0x6edd225600000000,0x0010000000000000,0x5052886f7169c8c5,0x7dc2ae94e4000000,0x63eb500cce126b70,0xa8519a5b46242cc0,0xdf09e5c90a990b56},{0x0000000001000000,0x0000020000000000,0xaf29109cc0000000,0x000000000dd2966b,0x61fd04828c93ce01,0xb040414dd8c98a14,0x9420000000000000,0x0000000000000067},{0x02ab7bb54e687499,0x1234769364d9eac9,0x9480583abdfb5837,0xc7dee68fffbaf900,0x3d0e482377794618,0x986a686578456056,0x00000000a865d7d4,0x996d1b60923c18a6},{0xdfd83d690e5f073e,0xb1db9b0fecbfaabe,0x7f2e6910bdea3ffd,0x6d159abfb3030000,0x000000000000015b,0xc3bd5e2cd52318a8,0x000000000003ed82,0xbd6192029dd91d60},{0xca9d54bd4e78980e,0x0000000380f3cf69,0xf48119b103954df1,0x2c1fb5204d248917,0x0000000000000040,0x44a705073f90be80,0x9420000000000000,0x6465f271027abfa8},{0x00129af7f2440efe,0x8000000000000000,0xa8519a5b46242cc0,0xd0abd7d3688aa0d7,0xea59a91078581c00,0x7dc2ae94e4000000,0x000000000000714c,0x93d7d7a9d87056f0},{0xb040414dd8c98a14,0xea59a91078581c00,0x00004a9e26b7f794,0x2e00000000000000,0x0000000100000000,0x867e3492977cb1bb,0xbebf0929f41aa230,0xaf29109cc0000000},{0xea59a91078581c00,0x62daff171a9fae42,0x2e00000000000000,0xc10a152d71cb3f16,0xc10a152d71cb3f16,0x996d1b60923c18a6,0x000000000000000d,0x0000000000000004},{0x79780d4e5b2b3b2a,0x86ddce906c8cdb4d,0x68323fe289df33d1,0xa73c905bcbc01878,0xc3bd5e2cd52318a8,0x0000000000002000,0x0000020000000000,0x0000000000002000},{0x000000a3714b9ad2,0xe5baa16ee5b5419e,0x0da24e08451a8d1a,0x0000000380f3cf69,0x314320aa7da5b1ef,0x000000000000714c,0x86ddce906c8cdb4d,0x38be984c83ce8648},{0x000000000000015b,0xb9e2a99fdb7b2948,0xc3bd5e2cd52318a8,0x000000000003ed82,0x0010000000000000,0xf2a6b292a535dc4e,0x2d21e3da342cd6be,0xfad4dc0000000000},{0x4fcf7212bebfdd89,0x63eb500cce126b70,0x4cf560811e3465c5,0x00000000000075da,0x7c6bcb08155fac38,0x3b0d936889b10a5d,0x867e3492977cb1bb,0x8f09996552504a5d},{0x7fc92593c865b4c2,0xf2a6b292a535dc4e,0x68323fe289df33d1,0x0000000000000080,0x8b4eb00000000000,0xbe55668178139c8e,0x00004a9e26b7f794,0x00000000a865d7d4},{0x79780d4e5b2b3b2a,0x58aee9fdc3f41b74,0x867e3492977cb1bb,0x37269c228e8e3db1,0x4ab9cfc9a41744c4,0x8f09996552504a5d,0x6edd225600000000,0x0f812a265e560f2b},{0xa73c905bcbc01878,0xd251a40a022b9000,0x31523358d080e093,0x6d159abfb3030000,0xf2a6b292a535dc4e,0xff98837fda2a5bdf,0xfad4dc0000000000,0x38be984c83ce8648},{0x93d7d7a9d87056f0,0xaf29109cc0000000,0x2e00000000000000,0x27429c30e8b6cff7,0x867e3492977cb1bb,0x0000000000000067,0x90e1bc8ba22d3294,0x0000000000000080},{0x996d1b60923c18a6,0x0000000000000004,0x5052886f7169c8c5,0x6d159abfb3030000,0x6edd225600000000,0x63eb500cce126b70,0x37269c228e8e3db1,0xff98837fda2a5bdf},{0xdfd83d690e5f073e,0x44a705073f90be80,0x00000000000075da,0x38be984c83ce8648,0x00020e6dfbb7c441,0xfecee737556609f5,0x0000000000000004,0x986a686578456056},{0x5052886f7169c8c5,0xdf9a26c8470349dd,0xbad28e0ca5854070,0x9d8dbb3a5bde4347,0xdfd3a0870f60e072,0x25474d793f2c7d32,0x3b0d936889b10a5d,0x0ec6680cabb95f09},{0x8a4a182923bdf75a,0x00000000000075da,0x0000000000000004,0x0000000100000000,0xdf9a26c8470349dd,0x8f09996552504a5d,0x86ddce906c8cdb4d,0x86ddce906c8cdb4d},{0x3b4de2fabe6d6476,0x0000008000000000,0x27429c30e8b6cff7,0x6edd225600000000,0x7dc2ae94e4000000,0x00004a9e26b7f794,0x37269c228e8e3db1,0xea2177d8d5100000},{0x0f812a265e560f2b,0xdfd83d690e5f073e,0x7fc92593c865b4c2,0x0000000001000000,0xca9d54bd4e78980e,0x02ab7bb54e687499,0x1000000000000000,0x4ab9cfc9a41744c4},{0x62daff171a9fae42,0x27429c30e8b6cff7,0x2e00000000000000,0x1000000000000000,0x8c91e2fe14041a34,0x3b0d936889b10a5d,0x8c91e2fe14041a34,0xbd6192029dd91d60},{0x62daff171a9fae42,0x8c91e2fe14041a34,0x4ab9cfc9a41744c4,0xf0fe55be95a18d13,0xd251a40a022b9000,0xcb9848f06e9659f6,0x0000800000000000,0x0000000000000067},{0x6465f271027abfa8,0x00129af7f2440efe,0x867e3492977cb1bb,0x62daff171a9fae42,0x00000000a865d7d4,0x0000000380f3cf69,0x3d0e482377794618,0x0000000000000001},{0xdf09e5c90a990b56,0xbad28e0ca5854070,0x00004a9e26b7f794,0xb040414dd8c98a14,0xf3fbe985738811dd,0xdfd3a0870f60e072,0x00000000000075da,0xd0abd7d3688aa0d7},{0xdfd83d690e5f073e,0x8c91e2fe14041a34,0x4ab9cfc9a41744c4,0x27429c30e8b6cff7,0x86ddce906c8cdb4d,0xc3bd5e2cd52318a8,0x8b4eb00000000000,0x93d7d7a9d87056f0},{0x000000000000714c,0x986a686578456056,0x0000020000000000,0x0ec6680cabb95f09,0x61fd04828c93ce01,0xc10a152d71cb3f16,0x000000a3714b9ad2,0x31a7445bdf8bcb5c},{0x6edd225600000000,0x8c91e2fe14041a34,0x86ddce906c8cdb4d,0x14d93f0c55095499,0x61fd04828c93ce01,0x0f812a265e560f2b,0x1000000000000000,0x0000000000000040}};
uint64_t y[100][4] = 
{{0x314320aa7da5b1ef,0xea2177d8d5100000,0xea59a91078581c00,0xa6a669d1baba633e},{0x27429c30e8b6cff7,0xb9e2a99fdb7b2948,0x0000000000000000,0xc9d368e6546c1f00},{0xea2177d8d5100000,0x6d159abfb3030000,0xbd6192029dd91d60,0xf5bad73c74be6d8a},{0xa73c905bcbc01878,0x16b3a918e4278c9d,0x3b4de2fabe6d6476,0x0000008000000000},{0xf2a6b292a535dc4e,0x34f2a050c605b6b0,0x86ddce906c8cdb4d,0x90e1bc8ba22d3294},{0xa6a669d1baba633e,0x0000000100000000,0xdf9a26c8470349dd,0xf48119b103954df1},{0x8f09996552504a5d,0x0000000000000004,0xc9d368e6546c1f00,0x0ec6680cabb95f09},{0x2d21e3da342cd6be,0x3b0d936889b10a5d,0xfecee737556609f5,0xdfd83d690e5f073e},{0x000000000003ed82,0x34f2a050c605b6b0,0x58aee9fdc3f41b74,0x4ab9cfc9a41744c4},{0x000000000003ed82,0xb36eb1caa58ee7dc,0x000000000000714c,0x31523358d080e093},{0x37269c228e8e3db1,0x1234769364d9eac9,0xea59a91078581c00,0xb1db9b0fecbfaabe},{0x79780d4e5b2b3b2a,0x4cf560811e3465c5,0xf0fe55be95a18d13,0xea59a91078581c00},{0x314320aa7da5b1ef,0xbad28e0ca5854070,0x686f332000000000,0xfad4dc0000000000},{0xdfd3a0870f60e072,0x34f2a050c605b6b0,0x16b3a918e4278c9d,0x1234769364d9eac9},{0x7fc92593c865b4c2,0xaf29109cc0000000,0x0000000000400000,0xaf29109cc0000000},{0x0000000000000080,0x000000000000015b,0x00004a9e26b7f794,0x4a6c986967d5ace8},{0xe35a000000000000,0x4fcf7212bebfdd89,0x000000000dd2966b,0x2d21e3da342cd6be},{0x000000000dd2966b,0xb040414dd8c98a14,0x0000000000000067,0xdf09e5c90a990b56},{0xb36eb1caa58ee7dc,0x25474d793f2c7d32,0x000000000000015b,0x14d93f0c55095499},{0x0000000380f3cf69,0xe5baa16ee5b5419e,0x1000000000000000,0xaf29109cc0000000},{0x4ab9cfc9a41744c4,0x5052886f7169c8c5,0xb36eb1caa58ee7dc,0xdfd83d690e5f073e},{0x867e3492977cb1bb,0x63eb500cce126b70,0x000000000000000d,0x3d0e482377794618},{0x000000000003ed82,0x37269c228e8e3db1,0xe5baa16ee5b5419e,0x68323fe289df33d1},{0x68323fe289df33d1,0x4cf560811e3465c5,0x61fd04828c93ce01,0x1735808ee4398bca},{0x2d21e3da342cd6be,0xdf09e5c90a990b56,0x31a7445bdf8bcb5c,0x2e00000000000000},{0xdf9a26c8470349dd,0x63eb500cce126b70,0xd0abd7d3688aa0d7,0x00129af7f2440efe},{0xc10a152d71cb3f16,0x02ab7bb54e687499,0x0000000000010000,0x0000000000010000},{0x27429c30e8b6cff7,0x986a686578456056,0x37269c228e8e3db1,0xd251a40a022b9000},{0xcb9848f06e9659f6,0xe79541e25d0dba6b,0x9420000000000000,0xb1db9b0fecbfaabe},{0x05ada4e53975b451,0x62daff171a9fae42,0xbe55668178139c8e,0x4ab9cfc9a41744c4},{0xdf9a26c8470349dd,0x86ddce906c8cdb4d,0x4fcf7212bebfdd89,0x0000000000002000},{0x000000000003ed82,0xaf29109cc0000000,0x000000000003ed82,0x0000008000000000},{0xf2a6b292a535dc4e,0x0f812a265e560f2b,0x1735808ee4398bca,0x58aee9fdc3f41b74},{0x31a7445bdf8bcb5c,0xea2177d8d5100000,0xd27d2fde3497614c,0x0000000000010000},{0x1000000000000000,0x79780d4e5b2b3b2a,0x90e1bc8ba22d3294,0x37269c228e8e3db1},{0x2d21e3da342cd6be,0x3b0d936889b10a5d,0xbebf0929f41aa230,0x5052886f7169c8c5},{0xf48119b103954df1,0x0000800000000000,0x90e1bc8ba22d3294,0xa73c905bcbc01878},{0x00000bea6a6af755,0x00020e6dfbb7c441,0x3d0e482377794618,0x00000000a865d7d4},{0xe79541e25d0dba6b,0xffffffffffffffff,0x4fcf7212bebfdd89,0x8a4a182923bdf75a},{0x4fcf7212bebfdd89,0x000000000003ed82,0xe35a000000000000,0x2c1fb5204d248917},{0x3d0e482377794618,0x0000000000000067,0x000000000000714c,0x93d7d7a9d87056f0},{0xca9d54bd4e78980e,0x000000000000000d,0x63eb500cce126b70,0x61fd04828c93ce01},{0xf5bad73c74be6d8a,0x000000000000015b,0x0da24e08451a8d1a,0xf2a6b292a535dc4e},{0x0000000000000000,0x0000020000000000,0x25474d793f2c7d32,0xffffffffffffffff},{0x5052886f7169c8c5,0x6465f271027abfa8,0xd0abd7d3688aa0d7,0x0000000000002000},{0x0000000001000000,0xdfd3a0870f60e072,0x79780d4e5b2b3b2a,0x0000800000000000},{0x68323fe289df33d1,0x0000008000000000,0x0000000000400000,0x79780d4e5b2b3b2a},{0xfad4dc0000000000,0x8f09996552504a5d,0x25474d793f2c7d32,0x7dc2ae94e4000000},{0x0000000000000040,0x0ec6680cabb95f09,0x262a15662b298944,0x0000008000000000},{0x0000000100000000,0xbd6192029dd91d60,0xa73c905bcbc01878,0x0ec6680cabb95f09},{0xc9d368e6546c1f00,0x3d0e482377794618,0x7f2e6910bdea3ffd,0xc3bd5e2cd52318a8},{0xe79541e25d0dba6b,0x0000000000010000,0x7dc2ae94e4000000,0x00000000a865d7d4},{0x44a705073f90be80,0x62daff171a9fae42,0x8f09996552504a5d,0x7c6bcb08155fac38},{0x7c6bcb08155fac38,0x6d159abfb3030000,0x00129af7f2440efe,0x0000000000000004},{0xd0abd7d3688aa0d7,0x000000000000714c,0x0000020000000000,0x58aee9fdc3f41b74},{0xf48119b103954df1,0x000000000000000d,0x63eb500cce126b70,0x0000000000000080},{0x9d8dbb3a5bde4347,0xc7dee68fffbaf900,0x34f2a050c605b6b0,0x686f332000000000},{0xcb9848f06e9659f6,0x2e00000000000000,0x6d159abfb3030000,0x38be984c83ce8648},{0x0100000000000000,0x000000000dd2966b,0xe5baa16ee5b5419e,0xe79541e25d0dba6b},{0x93d7d7a9d87056f0,0x4ab9cfc9a41744c4,0x58aee9fdc3f41b74,0xcb9848f06e9659f6},{0x93d7d7a9d87056f0,0xdf9a26c8470349dd,0x8f09996552504a5d,0xf3fbe985738811dd},{0xc9d368e6546c1f00,0x44a705073f90be80,0xd27d2fde3497614c,0x90e1bc8ba22d3294},{0x16b3a918e4278c9d,0x0000020000000000,0x31a7445bdf8bcb5c,0x000000000000015b},{0xc9d368e6546c1f00,0x0000000000000004,0x3b4de2fabe6d6476,0x0000000380f3cf69},{0xbad28e0ca5854070,0xca9d54bd4e78980e,0x7dc2ae94e4000000,0x00000000000075da},{0x0000020000000000,0xc3bd5e2cd52318a8,0xff98837fda2a5bdf,0x8c91e2fe14041a34},{0x0000008000000000,0x000000000003ed82,0xd0abd7d3688aa0d7,0x31a7445bdf8bcb5c},{0x0000000000000040,0xf48119b103954df1,0x00000bea6a6af755,0x4fcf7212bebfdd89},{0x2e00000000000000,0xc9d368e6546c1f00,0x00000bea6a6af755,0x2d21e3da342cd6be},{0x0da24e08451a8d1a,0xf48119b103954df1,0x0000000000000000,0x0000020000000000},{0x0000000000002000,0xd0abd7d3688aa0d7,0xcb9848f06e9659f6,0xc3bd5e2cd52318a8},{0xa8519a5b46242cc0,0x0000800000000000,0xc7dee68fffbaf900,0x5052886f7169c8c5},{0x1234769364d9eac9,0x44a705073f90be80,0x8a4a182923bdf75a,0x0000000000000080},{0x686f332000000000,0xa6a669d1baba633e,0x0000008000000000,0x58aee9fdc3f41b74},{0x9420000000000000,0x27429c30e8b6cff7,0xc3bd5e2cd52318a8,0x000000000000000d},{0xd27d2fde3497614c,0xffffffffffffffff,0xa6a669d1baba633e,0xf5bad73c74be6d8a},{0x7dc2ae94e4000000,0x14d93f0c55095499,0xdf09e5c90a990b56,0x8c91e2fe14041a34},{0x31a7445bdf8bcb5c,0xb9e2a99fdb7b2948,0x000000000000000d,0x31523358d080e093},{0xd251a40a022b9000,0xb040414dd8c98a14,0x05ada4e53975b451,0x25474d793f2c7d32},{0x00020e6dfbb7c441,0x4a6c986967d5ace8,0x63eb500cce126b70,0x314320aa7da5b1ef},{0xdf9a26c8470349dd,0x05ada4e53975b451,0xb36eb1caa58ee7dc,0x7dc2ae94e4000000},{0x4a6c986967d5ace8,0x1234769364d9eac9,0xfecee737556609f5,0x0000000000000067},{0x686f332000000000,0x4ab9cfc9a41744c4,0xdfd3a0870f60e072,0x0000000000002000},{0x314320aa7da5b1ef,0x000000000000015b,0x61fd04828c93ce01,0x9480583abdfb5837},{0x0000800000000000,0xc9d368e6546c1f00,0x8f09996552504a5d,0x0000000000000001},{0xd251a40a022b9000,0x0000000000000000,0x0ec6680cabb95f09,0x9480583abdfb5837},{0x3d0e482377794618,0x262a15662b298944,0x000000000000000d,0x62daff171a9fae42},{0x986a686578456056,0x37269c228e8e3db1,0x0000000000000080,0x2c1fb5204d248917},{0x61fd04828c93ce01,0xbad28e0ca5854070,0xf2a6b292a535dc4e,0x16b3a918e4278c9d},{0xffffffffffffffff,0xdf9a26c8470349dd,0xe35a000000000000,0x996d1b60923c18a6},{0x44a705073f90be80,0xb36eb1caa58ee7dc,0x867e3492977cb1bb,0x1234769364d9eac9},{0xcb9848f06e9659f6,0x000000000000714c,0xc7dee68fffbaf900,0x0000000000010000},{0x00129af7f2440efe,0xf48119b103954df1,0x0000000000000040,0x7fc92593c865b4c2},{0xbebf0929f41aa230,0x000000a3714b9ad2,0x0000000100000000,0xbe55668178139c8e},{0x16b3a918e4278c9d,0x6d159abfb3030000,0x867e3492977cb1bb,0x2c1fb5204d248917},{0x2e00000000000000,0x1234769364d9eac9,0xbad28e0ca5854070,0x9480583abdfb5837},{0x38be984c83ce8648,0x14d93f0c55095499,0x1000000000000000,0x0000800000000000},{0xe79541e25d0dba6b,0xea2177d8d5100000,0x7dc2ae94e4000000,0x9480583abdfb5837},{0xaf29109cc0000000,0x00000000a865d7d4,0xb040414dd8c98a14,0x0000008000000000},{0x63eb500cce126b70,0x0000008000000000,0xf3fbe985738811dd,0xaf29109cc0000000}};
uint64_t e[100][8] = 
{{0x1b64988352b5b1ef,0xb4becc962388980f,0xea59a910785c0983,0x9c61410e2f78d0c8,0x68323fe289df33d2,0xb1db9b0fecbfaabe,0xd0abd7d3688aa0d7,0x86ddce906c8cdb4d},{0xa0baa97f43e20b21,0x99bae708e9da3086,0x3b4de2fabe6d6477,0xc8a2501da9d228f5,0x44a705073f90be81,0x3d0e482377794618,0x6465f271027abfa8,0x000000000dd2966b},{0xbc731be2d73b9000,0xda2b357f66060001,0x9d353289ad39fdd2,0x4074a70618d5b24f,0x6d159abfb3030001,0x000000000000000d,0xfad4dc0000000000,0x0000000000000000},{0xa73c905bcbc018df,0x16b3a918e4278caa,0xbb17088e86d31938,0x14d93f8c55095499,0x262a15662b298944,0xbebf0929f41aa230,0x986a686578456056,0xca9d54bd4e78980e},{0xad79409f4abb1cbe,0xcd5d08b63e4b1707,0xd6ad40a32b4cb8d6,0x4121fdd97af6bca8,0x7f2e6910bdea3ffe,0xd0abd7d3688aa0d7,0x000000000000000d,0xbd6192029dd91d60},{0x201e772015e59e68,0x0000000200000001,0x0cbc0aa27b30209b,0xf4811bb103954df2,0x63eb500cce126b70,0x0000000000400000,0x0000000000000001,0xdfd83d690e5f073e},{0x8f09996552504a5d,0x686f332000000004,0xc9d368e6546c1f67,0xbdef78a96bb95f09,0x9480583abdfb5837,0x0000020000000000,0xbebf0929f41aa230,0x314320aa7da5b1ef},{0x1fc8966cd962b30c,0x3b0d936889b17baa,0xfecee737566609f5,0xdfd83d690e9f073e,0xea2177d8d5100000,0xb9e2a99fdb7b2948,0xf5bad73c74be6d8a,0x0000000001000000},{0x986a686578494dd8,0x9d24e0334fe4ea81,0x58aee9fdd1c6b1df,0x1b65a79d0ca1e59b,0x93d7d7a9d87056f1,0xf2a6b292a535dc4e,0x0010000000000000,0x986a686578456056},{0x0000000380f7bceb,0xb36eb1caa58fe7dc,0xbad28e0ca585b1bc,0xd7f89d2a8b3b43d1,0x0000000000000000,0xbd6192029dd91d60,0x62daff171a9fae42,0xfad4dc0000000000},{0x37269c228e8e3e18,0xaba191f3f716036f,0xea59b4fae2c31355,0x95359b0fecbfaabe,0xd251a40a022b9001,0xb040414dd8c98a14,0xbebf0929f41aa230,0x262a15662b298944},{0x88f93774b9814a55,0xb0e0b08dec46d135,0xa027665b55a18d13,0x010d52295c7fa89e,0x000000000000015c,0x3b4de2fabe6d6476,0xa6a669d1baba633e,0x8a4a182923bdf75a},{0x47f6c9c361cd3e8c,0x1f38807da8000018,0x9f95cf428e8e3db2,0x81531092977cb1bb,0xca9d54bd4e78980f,0x2d21e3da342cd6be,0xea2177d8d5100000,0xf0fe55be95a18d13},{0x91af3b96fc208b30,0xa3cfc2a6c605b6b1,0x16b3a918e5278c9d,0xa60c4e3d3d4a41b9,0x8a4a182923bdf75a,0x000000000000015b,0x686f332000000000,0x61fd04828c93ce01},{0x13e92593c865b4c2,0xe7e7a8e943ce8649,0xdfd83d690e9f073e,0xaf29111cc0000000,0xd27d2fde3497614c,0x62daff171a9fae42,0x0000000000000040,0xffffffffffffffff},{0x00004a9e26b7f814,0xe35a00000000015b,0xdfd888073516fed2,0x8193348bf663ea99,0x000000000000714c,0x37269c228e8e3db1,0x0000000000000080,0xbe55668178139c8e},{0x280105073f90be80,0x4fcf7212bebfdd89,0x000000000ed2966c,0x32cf88bf6da28b0f,0x31a7445bdf8bcb5c,0xa8519a5b46242cc0,0x0000000000000040,0xa6a669d1baba633e},{0xaf29109ccdd2966b,0x1d55dc0d8bcc8a14,0x0000000000000069,0xdf09e66c7be4a628,0x4fcf7212bebfdd89,0xb36eb1caa58ee7dc,0x0000000000000000,0x3d0e482377794618},{0x7b4d985aa549e0dc,0x0f68c552143c7d33,0xdf09e5c90a990cb2,0x4680836834951ff5,0xc7dee68fffbaf900,0xfad4dc0000000000,0xca9d54bd4e78980e,0x686f332000000000},{0xd27d2fe1b58b30b5,0xfa93e07b3abe9637,0x3d21e3da342cd6be,0x8ec33765070349dd,0x7f2e6910bdea3ffe,0x2e00000000000000,0xbad28e0ca5854070,0x0100000000000000},{0xd6087fc9a41744c4,0x50528a6f7169c8c5,0x7478c6f8175a26f2,0xd3d426ee81e7191c,0x79780d4e5b2b3b2b,0x0da24e08451a8d1a,0xea2177d8d5100000,0x31523358d080e093},{0x44d39b140f904e49,0x63eb500cce126b70,0x00020e6dfbb7c44f,0xc38c7cb60ef5f7d3,0x90e1bc8ba22d3294,0x9480583abdfb5837,0xc10a152d71cb3f16,0x000000000000000d},{0x1735808ee43d794c,0x81e06bec32a58275,0xe48988a63b1b4b93,0x473c25ab94783f28,0x93d7d7a9d87056f1,0xea2177d8d5100000,0xc10a152d71cb3f16,0x2c1fb5204d248917},{0xa38022dd484c9847,0x4cf561248f800097,0x60cbebb9e1f9d7f6,0x26b6aab5428f9af6,0x0f812a265e560f2b,0x000000000dd2966b,0xc3bd5e2cd52318a8,0xdf09e5c90a990b56},{0x5ec9283613b8a21a,0x10b12a24ea24d6b2,0xc28900e781b8fdf1,0x9b159abfb3030000,0x0000000100000000,0x000000000000015b,0x0da24e08451a8d1a,0x986a686578456056},{0x2c8f87496537afa2,0x5692029f734847bf,0xd0abd7d3688b1224,0xea3412d0c7540efe,0xe5baa16ee5b5419e,0x000000000000015b,0xe5baa16ee5b5419e,0x3d0e482377794618},{0xa6c4b69c578080b4,0x379e1c06146e2b4a,0xea2177d8d5110000,0x4cf560811e3565c5,0x9420000000000000,0x2e00000000000000,0xfecee737556609f5,0xaf29109cc0000000},{0xe4a42e33868fed57,0x82c41175f09d7c56,0x2180453306e659b2,0x3ac0d72a022b9001,0x2e00000000000001,0xd0abd7d3688aa0d7,0x8b4eb00000000000,0xffffffffffffffff},{0x1b67bb032d56377f,0xe79541e25d4dba6c,0xcf6de2fabe6d6476,0x2f9e49a4d0bfaabe,0x16b3a918e4278c9e,0xf5bad73c74be6d8a,0x00129af7f2440efe,0x90e1bc8ba22d3294},{0x3cd44107c803f202,0x9b9997639e6e348a,0x1704507f3c07b802,0x165218ba12ad9ebb,0xdf9a26c8470349de,0xc10a152d71cb3f16,0x86ddce906c8cdb4d,0x7dc2ae94e4000000},{0x5c05f1d05c62f615,0x86ddce906c8cdb4d,0xfef882af7ebfdd8a,0x6edd225600002000,0x34f2a050c605b6b0,0x262a15662b298944,0x63eb500cce126b70,0x1234769364d9eac9},{0x31a7445bdf8fb8de,0xe0d054f89f8bcb5c,0x867e349297809f3d,0xaf29111cc0000000,0x1234769364d9eac9,0x0000000100000000,0x34f2a050c605b6b0,0xff98837fda2a5bdf},{0x90346dcd01141f95,0x7c96c4e611590f2c,0x9db3b5217bb63d85,0x95bd32213b6d618c,0x31523358d080e093,0xa8519a5b46242cc0,0xb1db9b0fecbfaabe,0xa73c905bcbc01878},{0xc6279c969d872393,0x214813fb639e3db1,0x2b2c19dbf88b7cc1,0x1000000000010001,0x00004a9e26b7f794,0x0f812a265e560f2b,0x262a15662b298944,0x68323fe289df33d1},{0x8fc92593c865b4c2,0x7c238903a993afc3,0x7b033464773d3294,0x37269c228e8e3f0d,0x4cf560811e3465c5,0x0000000380f3cf69,0x0000000000000000,0xc3bd5e2cd52318a8},{0x2d21e3da352cd6be,0x3b0d936889b10a6a,0xe601a55adcd17227,0x5052886f7169c945,0x7fc92593c865b4c2,0x314320aa7da5b1ef,0x86ddce906c8cdb4d,0xbebf0929f41aa230},{0xf4811a3103954df1,0x02abfbb54e687499,0x968f6170dba2e6e5,0x620f1e68714558e8,0x7fc92593c865b4c3,0x000000000000015b,0x0000000100000000,0x3d0e482377794618},{0xc7def27a6a25f055,0x4abbde379fcf0905,0xc38c7cb60ef5f7d3,0xea2177d97d75d7d4,0x61fd04828c93ce01,0xdf09e5c90a990b56,0x0000000000000067,0x63eb500cce126b70},{0xb168aac8b179d96b,0x000000a3714b9ad2,0x4fcf7212bebfdd89,0x89e29ba8fde8533a,0x000000000000015c,0xfad4dc0000000000,0x1234769364d9eac9,0x4cf560811e3465c5},{0x43cb5b983247ef66,0x800000000003ed83,0x2dc6986967d5ace8,0x9451f502d703bce9,0xdf09e5c90a990b56,0x9d8dbb3a5bde4347,0x0000008000000000,0x0000800000000000},{0x3d0e4823777d339a,0x0000000000000067,0x3b4de2fabe6dd5c2,0x3b146805a4306f68,0xf3fbe985738811de,0xe5baa16ee5b5419e,0x8f09996552504a5d,0x05ada4e53975b451},{0x1509ed26b64e44f6,0x8b4eb0000000000e,0x4b8091ef2b2025db,0x20526b0404a76a90,0x4fcf7212bebfdd8a,0x314320aa7da5b1ef,0x6edd225600000000,0xd27d2fde3497614c},{0x7226a2448a1e19c2,0x000002000000015c,0x1fd6c49ba9f477e3,0x1ec667b2f25a6565,0x7f2e6910bdea3ffe,0xd27d2fde3497614c,0x0000000001000000,0xf3fbe985738811dd},{0x6465f271027abfa8,0xd251a60a022b9000,0x60953073fd99e1a8,0x0000000380f3cf68,0x00129af7f2440eff,0x0000000000000067,0xb040414dd8c98a14,0x37269c228e8e3db1},{0x1aefdd2cbfe260d3,0xbd14dc6ec66edb1d,0xd0abd7d3688ba0d7,0x31a7445bdf8beb5c,0xdfd83d690e5f073e,0x7f2e6910bdea3ffd,0x2e00000000000000,0x25474d793f2c7d32},{0x63eb500ccf126b70,0x6b2250870f60e072,0x79780d4f039112ff,0x4aba4fc9a41744c4,0x000000000000000d,0x0000000000000040,0x4cf560811e3465c5,0x37269c228e8e3db1},{0x1ba0f1ad2f6e1bad,0xbe55670178139c8f,0xbad28e0ca5c54070,0x7846f485b091451f,0x00000bea6a6af756,0xc9d368e6546c1f00,0x25474d793f2c7d32,0x00004a9e26b7f794},{0x933f446578456056,0xf73bd947dc2f7e2f,0x8db680993f2c7d32,0x7dd2ae94e4000000,0x1234769364d9eac9,0x0000000000000080,0x0000000001000000,0xff98837fda2a5bdf},{0x63eb500cce126bb0,0x7da38a62abb95f09,0xba4a15662b298944,0x0000008000000001,0xd251a40a022b9000,0x000000000dd2966b,0x7f2e6910bdea3ffd,0xa8519a5b46242cc0},{0x58aee9fec3f41b74,0x811ef02f72fc3608,0x0a178f72e65fc6bb,0x099b440cabb95f0a,0x0000000000000081,0xf3fbe985738811dd,0x44a705073f90be80,0xb1db9b0fecbfaabe},{0xc9d368e6623eb56b,0xcdf004af19a678ac,0x732a5296317251da,0xc3bd5e2cd52318a8,0xbd6192029dd91d61,0x0000000000000040,0xb36eb1caa58ee7dc,0x0ec6680cabb95f09},{0x4b8091ef2b2025db,0xa73c905bcbc11879,0x0a549192f8041a34,0x3152335978e6b868,0xdf09e5c90a990b56,0x61fd04828c93ce01,0xa73c905bcbc01878,0xc7dee68fffbaf900},{0xd8c705073f90be80,0x88224c9059cc2b74,0xf1069de7dee4185e,0x7c6bcb08155fac78,0x00020e6dfbb7c441,0xa8519a5b46242cc0,0x8c91e2fe14041a34,0x0000000000000004},{0x47091fc563d84446,0x6d159b3fb3030001,0xd28fcad626db704a,0xff98837fda2a5be3,0x16b3a918e4278c9d,0xea2177d8d5100000,0xea2177d8d5100000,0x38be984c83ce8648},{0xd0ac22718f42986b,0x000000000000714d,0x4a6c9a6967d5ace8,0x58aee9fdc3f48cc0,0x000000000000714c,0xbe55668178139c8e,0xb36eb1caa58ee7dc,0xf48119b103954df1},{0xf48119b10395c3cb,0xb36eb1caa58ee7e9,0xf2f4e9722062b5cd,0x62daff171a9faec2,0xf3fbe985738811dd,0xd251a40a022b9000,0x986a686578456056,0x4fcf7212bebfdd89},{0x35f8239fd423a39d,0xa7b287170f1bd973,0x9d61d370c605b6b1,0x8db680993f2c7d32,0x6edd225600000000,0xe35a000000000000,0x25474d793f2c7d32,0x3d0e482377794618},{0xcb9848f06e9659f5,0xdd29109cc0000001,0x37b2ef7d017b980e,0x38ce984c83ce8649,0x3b4de2fabe6d6476,0x00020e6dfbb7c441,0xcb9848f06e9659f6,0xbebf0929f41aa230},{0x01020e6dfbb7c441,0x800000000dd2966b,0xe5baa36ee5b5419e,0xe7958c8083c5b1ff,0x3b0d936889b10a5d,0xaf29109cc0000000,0xffffffffffffffff,0x000000000000000d},{0x73b01512e6cf5e2e,0xb2ec0fac2df67896,0x2b2c19dbf88b7cc0,0xb32d8ad2cba41462,0x86ddce906c8cdb4e,0xfecee737556609f5,0x16b3a918e4278c9d,0x31a7445bdf8bcb5c},{0x93d7d829d87056f0,0xaa377b85957be1eb,0x5fb57138badaeb35,0xf3fbe985738887b8,0x00000000000075da,0xdfd3a0870f60e072,0xea59a91078581c00,0xca9d54bd4e78980e},{0xbdcf526bc7f430dd,0xad1638273f90be81,0xd14c171589fd6b41,0x90e1bc8ba22d3296,0xb040414dd8c98a14,0x000000000003ed82,0xf0fe55be95a18d13,0x000000000000000d},{0x2de929a7c8611867,0x000002000000000d,0x31a744dbdf8bcb5c,0xbebf0929f41aa38b,0x8c91e2fe14041a34,0x05ada4e53975b451,0x2c1fb5204d248917,0x0da24e08451a8d1a},{0xbad1bea4ea0dac13,0x27429c30e8b6cffc,0x3b4de2fabe6d64f6,0x2d21e3ddb520a627,0x7fc92593c865b4c2,0x262a15662b298944,0xbe55668178139c8e,0x61fd04828c93ce01},{0xe6f2432cf2a9c987,0x7143be8f0932fb4c,0x71be981a578811de,0x8c91e2fe1404900f,0x314320aa7da5b1ef,0x867e3492977cb1bb,0xf2a6b292a535dc4e,0x02ab7bb54e687499},{0x262a17662b298944,0xc3bd5e2cd62318a8,0x348b23d0a030128f,0x4ae7497f8c17b6c3,0x4fcf7212bebfdd8a,0x000000000dd2966b,0xffffffffffffffff,0xfecee737556609f5},{0x000000800000015b,0x0ec6680cabbd4c8b,0xd0abd7d3688aa0d8,0x31a7445bdf8fb8de,0xf0fe55be95a18d13,0x90e1bc8ba22d3294,0x93d7d7a9d87056f0,0x31a7445bdf8bcb5c},{0xd251a40a022b9040,0xf49119b103954df1,0xe7954dccc778b1c0,0xf70c026e8a7ff601,0x8b4eb00000000000,0x00000bea6a6af755,0x7c6bcb08155fac38,0xfecee737556609f5},{0x4034769364d9eac9,0x710ff942202c3778,0xbe55726be27e93e4,0xdc4af476f42cd6be,0xbad28e0ca5854070,0xaf29109cc0000000,0xffffffffffffffff,0xa73c905bcbc01878},{0xc784f7a82095b662,0xf48119b103954df5,0x79780d4e5b2b3b2a,0x94805a3abdfb5837,0xc7dee68fffbaf900,0x2d21e3da342cd6be,0x4fcf7212bebfdd89,0xe79541e25d0dba6b},{0x314320aa7da5d1ef,0xcf7abf0abdf0aacc,0x56e6f8f06e9659f7,0xc3bdde2cd52318a9,0x262a15662b298944,0xff98837fda2a5bdf,0xbd6192029dd91d60,0x6465f271027abfa8},{0x8bab9a5b46242cc0,0x6edda25600000001,0xc7eee68fffbaf900,0xa0a510dee2d3918a,0x7dc2ae94e4000000,0x63eb500cce126b70,0xa8519a5b46242cc0,0xdf09e5c90a990b56},{0x1234769365d9eac9,0x44a707073f90be80,0x397328c5e3bdf75a,0x000000000dd296ec,0x61fd04828c93ce01,0xb040414dd8c98a14,0x9420000000000000,0x0000000000000067},{0x6b1aaed54e687499,0xb8dae0651f944e07,0x948058babdfb5837,0x208dd08dc3af1474,0x3d0e482377794619,0x986a686578456056,0x00000000a865d7d4,0x996d1b60923c18a6},{0x73f83d690e5f073e,0xd91e3740d5767ab6,0x42ebc73d930d58a5,0x6d159abfb303000e,0x000000000000015b,0xc3bd5e2cd52318a8,0x000000000003ed82,0xbd6192029dd91d60},{0x9d1a849b830ff95a,0x0000000380f3cf69,0x9b278382be4fb130,0x21da8c5cc1e2f6a2,0x0000000000000041,0x44a705073f90be80,0x9420000000000000,0x6465f271027abfa8},{0x7dd5498cd6440efe,0x94d93f0c55095499,0x875b802450bd3816,0x5d3dbad17c8ebb0c,0xea59a91078581c01,0x7dc2ae94e4000000,0x000000000000714c,0x93d7d7a9d87056f0},{0xe1e785a9b8555570,0xa43c52b053d34548,0x00004a9e26b7f7a2,0x5f523358d080e093,0x0000000100000000,0x867e3492977cb1bb,0xbebf0929f41aa230,0xaf29109cc0000000},{0xbcab4d1a7a83ac00,0x131b4064f3693857,0x33ada4e53975b452,0xe65162a6b0f7bc48,0xc10a152d71cb3f16,0x996d1b60923c18a6,0x000000000000000d,0x0000000000000004},{0x797a1bbc56e2ff6b,0xd14a66f9d4628835,0xcc1d8fef57f19f41,0xd87fb1064965ca67,0xc3bd5e2cd52318a8,0x0000000000002000,0x0000020000000000,0x0000000000002000},{0xdf9a276bb84ee4af,0xeb6846541f2af5ef,0xc110ffd2eaa974f6,0x7dc2ae9864f3cf69,0x314320aa7da5b1ef,0x000000000000714c,0x86ddce906c8cdb4d,0x38be984c83ce8648},{0x4a6c986967d5ae43,0xcc17203340551411,0xc28c45642a89229d,0x000000000003edea,0x0010000000000000,0xf2a6b292a535dc4e,0x2d21e3da342cd6be,0xfad4dc0000000000},{0xb83ea532bebfdd89,0xaea51fd67229b034,0x2cc901082d954637,0x00000000000095db,0x7c6bcb08155fac38,0x3b0d936889b10a5d,0x867e3492977cb1bb,0x8f09996552504a5d},{0xb10c463e460b66b1,0xf2a6b292a535dda9,0xca2f4465167301d2,0x9480583abdfb58b7,0x8b4eb00000000000,0xbe55668178139c8e,0x00004a9e26b7f794,0x00000000a865d7d4},{0x79788d4e5b2b3b2a,0x228252e418603a74,0x1587cdf7e9ccfc19,0x37269c228e8e3db3,0x4ab9cfc9a41744c4,0x8f09996552504a5d,0x6edd225600000000,0x0f812a265e560f2b},{0x798e3465cdeba878,0xd251a40a022b9001,0x40189b657c3a3f9c,0x0195f2fa70fe5837,0xf2a6b292a535dc4f,0xff98837fda2a5bdf,0xfad4dc0000000000,0x38be984c83ce8648},{0xd0e61fcd4fe99d08,0xd5532602eb298944,0x2e0000000000000d,0x8a1d9b4803567e39,0x867e3492977cb1bb,0x0000000000000067,0x90e1bc8ba22d3294,0x0000000000000080},{0x31d783c60a8178fc,0x37269c228e8e3db6,0x5052886f7169c945,0x99354fe000278917,0x6edd225600000000,0x63eb500cce126b70,0x37269c228e8e3db1,0xff98837fda2a5bdf},{0x41d541eb9af2d53f,0xff799313e515fef1,0xf2a6b292a5365228,0x4f72416567f612e5,0x00020e6dfbb7c441,0xfecee737556609f5,0x0000000000000004,0x986a686578456056},{0x5052886f7169c8c4,0xbf344d908e0693bb,0x9e2c8e0ca5854071,0x36fad69aee1a5bee,0xdfd3a0870f60e073,0x25474d793f2c7d32,0x3b0d936889b10a5d,0x0ec6680cabb95f09},{0xcef11d30634eb5da,0xb36eb1caa58f5db6,0x867e3492977cb1bf,0x1234769464d9eac9,0xdf9a26c8470349dd,0x8f09996552504a5d,0x86ddce906c8cdb4d,0x86ddce906c8cdb4d},{0x06e62beb2d03be6c,0x000000800000714d,0xef2182c0e871c8f7,0x6edd225600010000,0x7dc2ae94e4000000,0x00004a9e26b7f794,0x37269c228e8e3db1,0xea2177d8d5100000},{0x0f93c51e509a1e29,0xd459571a11f4552f,0x7fc92593c865b503,0x7fc92593c965b4c2,0xca9d54bd4e78980e,0x02ab7bb54e687499,0x1000000000000000,0x4ab9cfc9a41744c4},{0x219a08410eba5072,0x27429cd45a026aca,0x2e00000100000000,0xce55668178139c8e,0x8c91e2fe14041a34,0x3b0d936889b10a5d,0x8c91e2fe14041a34,0xbd6192029dd91d60},{0x798ea82ffec73adf,0xf9a77dbdc7071a34,0xd138045c3b93f67f,0x1d1e0adee2c6162a,0xd251a40a022b9001,0xcb9848f06e9659f6,0x0000800000000000,0x0000000000000067},{0x9265f271027abfa8,0x1247118b571df9c7,0x4150c29f3d01f22b,0xf75b5751d89b067a,0x00000000a865d7d4,0x0000000380f3cf69,0x3d0e482377794618,0x0000000000000001},{0x17c87e158e67919e,0xcfabcd18fa8e950a,0x10004a9e26b7f794,0xb040c14dd8c98a14,0xf3fbe985738811dd,0xdfd3a0870f60e072,0x00000000000075da,0xd0abd7d3688aa0d7},{0xc76d7f4b6b6cc1a9,0x76b35ad6e9141a35,0xc87c7e5e881744c5,0xbbc2f46ba6b2282e,0x86ddce906c8cdb4d,0xc3bd5e2cd52318a8,0x8b4eb00000000000,0x93d7d7a9d87056f0},{0xaf29109cc000714c,0x986a686620ab382a,0xb040434dd8c98a14,0x0ec6688cabb95f09,0x61fd04828c93ce01,0xc10a152d71cb3f16,0x000000a3714b9ad2,0x31a7445bdf8bcb5c},{0xd2c87262ce126b70,0x8c91e37e14041a34,0x7ad9b815e014ed2a,0xc4024fa91509549a,0x61fd04828c93ce01,0x0f812a265e560f2b,0x1000000000000000,0x0000000000000040}};

  uint64_t z[100][8];
  vwaddu_wv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 8; j++) {
      if (z[i][j] != e[i][j]) {
        return 1 + i;
      }
    }
  }

  return 0;
}
