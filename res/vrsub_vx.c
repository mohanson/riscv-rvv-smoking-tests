#include <stddef.h>
#include <stdint.h>

void vrsub_vx(size_t n, const uint64_t x[][4], const uint64_t y, uint64_t z[][4]);

int main() {
  uint64_t x[100][4] = {{0xf3fbe985738811dd, 0xff98837fda2a5bdf, 0xb36eb1caa58ee7dc, 0xc7dee68fffbaf900},
                        {0xbe55668178139c8e, 0x34f2a050c605b6b0, 0xea2177d8d5100000, 0x1735808ee4398bca},
                        {0x62daff171a9fae42, 0xea2177d8d5100000, 0x0000000000400000, 0x000000a3714b9ad2},
                        {0xdfd3a0870f60e072, 0x1735808ee4398bca, 0x14d93f0c55095499, 0xdfd83d690e5f073e},
                        {0xf5bad73c74be6d8a, 0x0000000000002000, 0x2d21e3da342cd6be, 0x996d1b60923c18a6},
                        {0x7fc92593c865b4c2, 0x79780d4e5b2b3b2a, 0x63eb500cce126b70, 0xe5baa16ee5b5419e},
                        {0xe35a000000000000, 0x0da24e08451a8d1a, 0xea2177d8d5100000, 0x34f2a050c605b6b0},
                        {0x7dc2ae94e4000000, 0x0100000000000000, 0xf48119b103954df1, 0xc7dee68fffbaf900},
                        {0x0000000000000040, 0x2e00000000000000, 0x27429c30e8b6cff7, 0xf2a6b292a535dc4e},
                        {0xffffffffffffffff, 0xd27d2fde3497614c, 0x986a686578456056, 0x0000000000000000},
                        {0x00004a9e26b7f794, 0x1735808ee4398bca, 0xf0fe55be95a18d13, 0x3b0d936889b10a5d},
                        {0x02ab7bb54e687499, 0xfecee737556609f5, 0x0000000000000000, 0x00000000000075da},
                        {0x4cf560811e3465c5, 0x996d1b60923c18a6, 0x0010000000000000, 0xe5baa16ee5b5419e},
                        {0x6edd225600000000, 0x000000000003ed82, 0x0000008000000000, 0x9d8dbb3a5bde4347},
                        {0x34f2a050c605b6b0, 0x6edd225600000000, 0x1234769364d9eac9, 0xb040414dd8c98a14},
                        {0x0000000000000000, 0xdfd83d690e5f073e, 0xea2177d8d5100000, 0x79780d4e5b2b3b2a},
                        {0xa73c905bcbc01878, 0x63eb500cce126b70, 0xb1db9b0fecbfaabe, 0x9480583abdfb5837},
                        {0x6465f271027abfa8, 0x0000000100000000, 0xff98837fda2a5bdf, 0x4fcf7212bebfdd89},
                        {0xdf9a26c8470349dd, 0x0000000000000001, 0x000000000dd2966b, 0xbd6192029dd91d60},
                        {0x314320aa7da5b1ef, 0xcb9848f06e9659f6, 0xb1db9b0fecbfaabe, 0xd0abd7d3688aa0d7},
                        {0xd27d2fde3497614c, 0x1735808ee4398bca, 0x0000000000000040, 0x00020e6dfbb7c441},
                        {0x1735808ee4398bca, 0x0da24e08451a8d1a, 0x86ddce906c8cdb4d, 0x25474d793f2c7d32},
                        {0x63eb500cce126b70, 0x62daff171a9fae42, 0x0000000100000000, 0x4a6c986967d5ace8},
                        {0xffffffffffffffff, 0xffffffffffffffff, 0x58aee9fdc3f41b74, 0x0000020000000000},
                        {0xd251a40a022b9000, 0xb36eb1caa58ee7dc, 0x996d1b60923c18a6, 0xe35a000000000000},
                        {0x1234769364d9eac9, 0x2d21e3da342cd6be, 0x38be984c83ce8648, 0xbad28e0ca5854070},
                        {0xf2a6b292a535dc4e, 0x4ab9cfc9a41744c4, 0x686f332000000000, 0x0000000000000000},
                        {0xb9e2a99fdb7b2948, 0xb9e2a99fdb7b2948, 0x90e1bc8ba22d3294, 0x37269c228e8e3db1},
                        {0x00129af7f2440efe, 0xa73c905bcbc01878, 0xbad28e0ca5854070, 0x1735808ee4398bca},
                        {0xca9d54bd4e78980e, 0xdfd3a0870f60e072, 0x0000008000000000, 0x00000bea6a6af755},
                        {0x0000000000000040, 0x34f2a050c605b6b0, 0x05ada4e53975b451, 0x0000000100000000},
                        {0xe79541e25d0dba6b, 0x3b0d936889b10a5d, 0x02ab7bb54e687499, 0xbebf0929f41aa230},
                        {0x0000000000010000, 0x0000000000400000, 0xb36eb1caa58ee7dc, 0x8a4a182923bdf75a},
                        {0xe35a000000000000, 0x0010000000000000, 0x2c1fb5204d248917, 0x2d21e3da342cd6be},
                        {0x79780d4e5b2b3b2a, 0xc10a152d71cb3f16, 0x0000000000002000, 0xaf29109cc0000000},
                        {0x0000020000000000, 0x0000000000010000, 0x3b4de2fabe6d6476, 0x4ab9cfc9a41744c4},
                        {0x8000000000000000, 0xa6a669d1baba633e, 0x0000000000000040, 0x90e1bc8ba22d3294},
                        {0xaf29109cc0000000, 0x3b0d936889b10a5d, 0xc9d368e6546c1f00, 0x000000000003ed82},
                        {0x8000000000000000, 0x31523358d080e093, 0x37269c228e8e3db1, 0x2d21e3da342cd6be},
                        {0x16b3a918e4278c9d, 0x6edd225600000000, 0xf0fe55be95a18d13, 0xa8519a5b46242cc0},
                        {0xfad4dc0000000000, 0x8b4eb00000000000, 0x000000000000015b, 0x3d0e482377794618},
                        {0x4fcf7212bebfdd89, 0xcb9848f06e9659f6, 0x000000000dd2966b, 0x7fc92593c865b4c2},
                        {0xbad28e0ca5854070, 0x0000000000000000, 0x14d93f0c55095499, 0x996d1b60923c18a6},
                        {0x0100000000000000, 0x2e00000000000000, 0xb040414dd8c98a14, 0xbd6192029dd91d60},
                        {0x0ec6680cabb95f09, 0xaf29109cc0000000, 0x0000000000000080, 0x0000000000000040},
                        {0x9d8dbb3a5bde4347, 0xbad28e0ca5854070, 0x6d159abfb3030000, 0x00000000000075da},
                        {0xf5bad73c74be6d8a, 0xd251a40a022b9000, 0x00000bea6a6af755, 0x262a15662b298944},
                        {0x8000000000000000, 0x00020e6dfbb7c441, 0xaf29109cc0000000, 0x0000000000000004},
                        {0x0000000100000000, 0x0000000100000000, 0x0000000000000004, 0xa73c905bcbc01878},
                        {0xaf29109cc0000000, 0x8000000000000000, 0x986a686578456056, 0x38be984c83ce8648},
                        {0xc3bd5e2cd52318a8, 0xe79541e25d0dba6b, 0x68323fe289df33d1, 0xb36eb1caa58ee7dc},
                        {0x86ddce906c8cdb4d, 0x0000000000000000, 0x14d93f0c55095499, 0xf5bad73c74be6d8a},
                        {0x68323fe289df33d1, 0xdf9a26c8470349dd, 0x00129af7f2440efe, 0xffffffffffffffff},
                        {0x0000020000000000, 0x68323fe289df33d1, 0x0000000380f3cf69, 0xbad28e0ca5854070},
                        {0xb040414dd8c98a14, 0x31a7445bdf8bcb5c, 0xd27d2fde3497614c, 0x31a7445bdf8bcb5c},
                        {0x000000a3714b9ad2, 0x4fcf7212bebfdd89, 0x27429c30e8b6cff7, 0x00000000a865d7d4},
                        {0x00000000a865d7d4, 0xbebf0929f41aa230, 0xbebf0929f41aa230, 0x9d8dbb3a5bde4347},
                        {0x5052886f7169c8c5, 0xb9e2a99fdb7b2948, 0x00000000a865d7d4, 0xe35a000000000000},
                        {0x0000000000010000, 0x0000000000400000, 0x3d0e482377794618, 0xb1db9b0fecbfaabe},
                        {0x90e1bc8ba22d3294, 0x2e00000000000000, 0x7f2e6910bdea3ffd, 0x4ab9cfc9a41744c4},
                        {0xc3bd5e2cd52318a8, 0xdfd83d690e5f073e, 0x000000000003ed82, 0x0000000000010000},
                        {0x02ab7bb54e687499, 0x6465f271027abfa8, 0x2d21e3da342cd6be, 0xa6a669d1baba633e},
                        {0x3d0e482377794618, 0x0000000000000040, 0x986a686578456056, 0xbad28e0ca5854070},
                        {0x8a4a182923bdf75a, 0x0000000000400000, 0x31523358d080e093, 0x0000000000010000},
                        {0x1735808ee4398bca, 0x000000000000714c, 0x7f2e6910bdea3ffd, 0x0000000000400000},
                        {0x9420000000000000, 0xfad4dc0000000000, 0xc3bd5e2cd52318a8, 0x00004a9e26b7f794},
                        {0x34f2a050c605b6b0, 0xea59a91078581c00, 0x1735808ee4398bca, 0x686f332000000000},
                        {0x63eb500cce126b70, 0x996d1b60923c18a6, 0x867e3492977cb1bb, 0xe5baa16ee5b5419e},
                        {0xb040414dd8c98a14, 0x2c1fb5204d248917, 0x3b4de2fabe6d6476, 0x3b4de2fabe6d6476},
                        {0x58aee9fdc3f41b74, 0x0000020000000000, 0x93d7d7a9d87056f0, 0xca9d54bd4e78980e},
                        {0x0000800000000000, 0x0000000000000001, 0x0000000000000080, 0x986a686578456056},
                        {0x0000020000000000, 0x0000000001000000, 0x686f332000000000, 0x02ab7bb54e687499},
                        {0x27429c30e8b6cff7, 0xb9e2a99fdb7b2948, 0x0f812a265e560f2b, 0xbd6192029dd91d60},
                        {0x93d7d7a9d87056f0, 0xfecee737556609f5, 0xc7dee68fffbaf900, 0x6465f271027abfa8},
                        {0x0f812a265e560f2b, 0x0f812a265e560f2b, 0x314320aa7da5b1ef, 0x8f09996552504a5d},
                        {0x0000000000000001, 0xb36eb1caa58ee7dc, 0x7fc92593c865b4c2, 0x0000000001000000},
                        {0x6edd225600000000, 0x9420000000000000, 0x68323fe289df33d1, 0x3b0d936889b10a5d},
                        {0xff98837fda2a5bdf, 0x0000000000000004, 0x6465f271027abfa8, 0xf5bad73c74be6d8a},
                        {0x8f09996552504a5d, 0x9d8dbb3a5bde4347, 0xf3fbe985738811dd, 0x262a15662b298944},
                        {0x90e1bc8ba22d3294, 0xd251a40a022b9000, 0xb9e2a99fdb7b2948, 0x44a705073f90be80},
                        {0xffffffffffffffff, 0x0000000000000080, 0x8b4eb00000000000, 0xd251a40a022b9000},
                        {0x34f2a050c605b6b0, 0x62daff171a9fae42, 0x79780d4e5b2b3b2a, 0x262a15662b298944},
                        {0x6edd225600000000, 0x8b4eb00000000000, 0x0f812a265e560f2b, 0x9420000000000000},
                        {0x0000000380f3cf69, 0x2d21e3da342cd6be, 0xbd6192029dd91d60, 0x9d8dbb3a5bde4347},
                        {0x90e1bc8ba22d3294, 0x58aee9fdc3f41b74, 0x14d93f0c55095499, 0x000000000dd2966b},
                        {0x8b4eb00000000000, 0x6465f271027abfa8, 0x00129af7f2440efe, 0x867e3492977cb1bb},
                        {0xbad28e0ca5854070, 0x0000000000010000, 0x00000000000075da, 0xbe55668178139c8e},
                        {0x7dc2ae94e4000000, 0x0000020000000000, 0x25474d793f2c7d32, 0x4ab9cfc9a41744c4},
                        {0xe5baa16ee5b5419e, 0x0000000000400000, 0x7dc2ae94e4000000, 0xc9d368e6546c1f00},
                        {0x0000000000000000, 0x27429c30e8b6cff7, 0x1000000000000000, 0xdfd83d690e5f073e},
                        {0x00129af7f2440efe, 0xe35a000000000000, 0xfad4dc0000000000, 0xb9e2a99fdb7b2948},
                        {0x02ab7bb54e687499, 0xb9e2a99fdb7b2948, 0x867e3492977cb1bb, 0xfad4dc0000000000},
                        {0x867e3492977cb1bb, 0xdf9a26c8470349dd, 0x000000a3714b9ad2, 0x986a686578456056},
                        {0x27429c30e8b6cff7, 0x14d93f0c55095499, 0x4cf560811e3465c5, 0x0000000000000040},
                        {0x93d7d7a9d87056f0, 0x7f2e6910bdea3ffd, 0x0000000000000004, 0x000000000000000d},
                        {0x00129af7f2440efe, 0x8000000000000000, 0x00000000a865d7d4, 0x02ab7bb54e687499},
                        {0x0010000000000000, 0xbe55668178139c8e, 0xcb9848f06e9659f6, 0xd251a40a022b9000},
                        {0x0000000000400000, 0x79780d4e5b2b3b2a, 0x16b3a918e4278c9d, 0x31523358d080e093},
                        {0x86ddce906c8cdb4d, 0xcb9848f06e9659f6, 0x16b3a918e4278c9d, 0xd251a40a022b9000},
                        {0x0000000380f3cf69, 0x79780d4e5b2b3b2a, 0x2d21e3da342cd6be, 0x7fc92593c865b4c2}};
  uint64_t y = 0x1234567812345678;
  uint64_t z[100][4];
  uint64_t e[100][4] = {{0x1e386cf29eac449b, 0x00677c8025d5a420, 0x4c914e355a711823, 0x38211970004506ff},
                        {0x53deeff69a20b9ea, 0xcb0d5faf39fa494f, 0x15de88272aefffff, 0xe8ca7f711bc67435},
                        {0xaf595760f794a836, 0x15de88272aefffff, 0xffffffffffbfffff, 0xffffff5c8eb4652d},
                        {0x3260b5f102d37606, 0xe8ca7f711bc67435, 0xeb26c0f3aaf6ab66, 0x2027c296f1a0f8c1},
                        {0x1c797f3b9d75e8ee, 0xffffffffffffdfff, 0xd2de1c25cbd32941, 0x6692e49f6dc3e759},
                        {0x926b30e449cea1b6, 0x8687f2b1a4d4c4d5, 0x9c14aff331ed948f, 0x1a455e911a4abe61},
                        {0x2eda567812345678, 0xf25db1f7bae572e5, 0x15de88272aefffff, 0xcb0d5faf39fa494f},
                        {0x9471a7e32e345678, 0xfeffffffffffffff, 0x0b7ee64efc6ab20e, 0x38211970004506ff},
                        {0x1234567812345638, 0xd200000000000000, 0xd8bd63cf17493008, 0x0d594d6d5aca23b1},
                        {0x1234567812345679, 0x2d82d021cb689eb3, 0x6795979a87ba9fa9, 0xffffffffffffffff},
                        {0x12340bd9eb7c5ee4, 0xe8ca7f711bc67436, 0x0f01aa416a5e72ec, 0xc4f26c97764ef5a2},
                        {0x0f88dac2c3cbe1df, 0x013118c8aa99f60b, 0xffffffffffffffff, 0xffffffffffff8a25},
                        {0xc53ef5f6f3fff0b3, 0x6692e49f6dc3e759, 0xffefffffffffffff, 0x1a455e911a4abe61},
                        {0xa357342212345678, 0xfffffffffffc127d, 0xffffff7fffffffff, 0x627244c5a421bcb8},
                        {0xdd41b6274c2e9fc8, 0x9122dda9ffffffff, 0xedcb896c9b261536, 0x4fbfbeb2273675eb},
                        {0x1234567812345678, 0x2027c296f1a0f8c2, 0x15de88272aefffff, 0x8687f2b1a4d4c4d5},
                        {0x6af7c61c46743e00, 0x9c14aff331ed948f, 0x4e2464f013405541, 0x6b7fa7c54204a7c8},
                        {0xadce64070fb996d0, 0xfffffffeffffffff, 0x00677c8025d5a420, 0xb0308ded41402276},
                        {0x329a2fafcb310c9b, 0xfffffffffffffffe, 0xfffffffff22d6994, 0x429e6dfd6226e29f},
                        {0xe0f135cd948ea489, 0x3467b70f9169a609, 0x4e2464f013405541, 0x2f54282c97755f28},
                        {0x3fb72699dd9cf52c, 0xe8ca7f711bc67435, 0xffffffffffffffbf, 0xfffdf19204483bbe},
                        {0xfafed5e92dfacaae, 0xf25db1f7bae572e5, 0x7922316f937324b2, 0xdab8b286c0d382cd},
                        {0xae49066b4421eb08, 0x9d2500e8e56051bd, 0xfffffffeffffffff, 0xb5936796982a5317},
                        {0x1234567812345679, 0x0000000000000000, 0xa75116023c0be48b, 0xfffffdffffffffff},
                        {0x3fe2b26e1008c678, 0x4c914e355a711823, 0x6692e49f6dc3e759, 0x1ca5ffffffffffff},
                        {0xffffdfe4ad5a6baf, 0xd2de1c25cbd32941, 0xc74167b37c3179b7, 0x452d71f35a7abf8f},
                        {0x1f8da3e56cfe7a2a, 0xb54630365be8bb3b, 0x9790ccdfffffffff, 0xffffffffffffffff},
                        {0x5851acd836b92d30, 0x461d56602484d6b7, 0x6f1e43745dd2cd6b, 0xc8d963dd7171c24e},
                        {0x1221bb801ff0477a, 0x58c36fa4343fe788, 0x452d71f35a7abf8f, 0xe8ca7f711bc67435},
                        {0x479701bac3bbbe6a, 0x202c5f78f09f1f8d, 0xffffff7fffffffff, 0xfffff415959508aa},
                        {0x1234567812345638, 0xcb0d5faf39fa4950, 0xfa525b1ac68a4bae, 0xfffffffeffffffff},
                        {0x2a9f1495b5269c0d, 0xc4f26c97764ef5a2, 0xfd54844ab1978b66, 0x4140f6d60be55dcf},
                        {0x1234567812335678, 0xffffffffffc00000, 0x4c914e355a711823, 0x75b5e7d6dc4208a5},
                        {0x2eda567812345678, 0xffefffffffffffff, 0xd3e04adfb2db76e8, 0xd2de1c25cbd32941},
                        {0x98bc4929b7091b4e, 0x3ef5ead28e34c0e9, 0xffffffffffffdfff, 0x50d6ef633fffffff},
                        {0x1234547812345678, 0xffffffffffff0000, 0xc4b21d0541929b89, 0xb54630365be8bb3b},
                        {0x9234567812345678, 0x5959962e45459cc1, 0xffffffffffffffbf, 0x6f1e43745dd2cd6b},
                        {0x630b45db52345678, 0xc4f26c97764ef5a2, 0x362c9719ab93e0ff, 0xfffffffffffc127d},
                        {0x9234567812345678, 0xceadcca72f7f1f6c, 0xc8d963dd7171c24e, 0xd2de1c25cbd32941},
                        {0xfb80ad5f2e0cc9db, 0x9122dda9ffffffff, 0x0f01aa416a5e72ec, 0x57ae65a4b9dbd33f},
                        {0x175f7a7812345678, 0x74b14fffffffffff, 0xfffffffffffffea4, 0xc2f1b7dc8886b9e7},
                        {0xc264e465537478ef, 0x3467b70f9169a609, 0xfffffffff22d6994, 0x8036da6c379a4b3d},
                        {0x5761c86b6caf1608, 0xffffffffffffffff, 0xeb26c0f3aaf6ab66, 0x6692e49f6dc3e759},
                        {0x1134567812345678, 0xd200000000000000, 0x4fbfbeb2273675eb, 0x429e6dfd6226e29f},
                        {0x036dee6b667af76f, 0x50d6ef6340000000, 0xffffffffffffff7f, 0xffffffffffffffbf},
                        {0x74a69b3db6561331, 0x452d71f35a7abf8f, 0x92ea65404cfcffff, 0xffffffffffff8a25},
                        {0x1c797f3b9d75e8ee, 0x2dae5bf5fdd46fff, 0xfffff415959508aa, 0xd9d5ea99d4d676bb},
                        {0x9234567812345678, 0xfffdf19204483bbe, 0x50d6ef633fffffff, 0xfffffffffffffffb},
                        {0x1234567712345678, 0xffffffff00000000, 0xfffffffffffffffb, 0x58c36fa4343fe787},
                        {0x630b45db52345678, 0x7fffffffffffffff, 0x6795979a87ba9fa9, 0xc74167b37c3179b7},
                        {0x4e76f84b3d113dd0, 0x186abe1da2f24594, 0x97cdc01d7620cc2e, 0x4c914e355a711823},
                        {0x8b5687e7a5a77b2b, 0xffffffffffffffff, 0xeb26c0f3aaf6ab66, 0x0a4528c38b419275},
                        {0xaa021695885522a7, 0x2065d937b8fcb622, 0xffed65080dbbf101, 0x0000000000000000},
                        {0x1234547812345678, 0x97cdc01d7620cc2f, 0xfffffffc7f0c3096, 0x452d71f35a7abf8f},
                        {0x61f4152a396acc64, 0xce58bba4207434a3, 0x2d82d021cb689eb3, 0xce58bba4207434a3},
                        {0x123455d4a0e8bba6, 0xb0308ded41402277, 0xd8bd63cf17493008, 0xffffffff579a282b},
                        {0x1234567769ce7ea4, 0x4140f6d60be55dd0, 0x4140f6d60be55dcf, 0x627244c5a421bcb8},
                        {0xc1e1ce08a0ca8db3, 0x461d56602484d6b7, 0xffffffff579a282b, 0x1ca5ffffffffffff},
                        {0x1234567812335678, 0xffffffffffc00000, 0xc2f1b7dc8886b9e7, 0x4e2464f013405541},
                        {0x815299ec700723e4, 0xd1ffffffffffffff, 0x80d196ef4215c002, 0xb54630365be8bb3b},
                        {0x4e76f84b3d113dd0, 0x2027c296f1a0f8c1, 0xfffffffffffc127d, 0xfffffffffffeffff},
                        {0x0f88dac2c3cbe1df, 0x9b9a0d8efd854058, 0xd2de1c25cbd32941, 0x5959962e45459cc1},
                        {0xd5260e549abb1060, 0xffffffffffffffbf, 0x6795979a87ba9fa9, 0x452d71f35a7abf8f},
                        {0x87ea3e4eee765f1e, 0xffffffffffbfffff, 0xceadcca72f7f1f6c, 0xfffffffffffeffff},
                        {0xfafed5e92dfacaae, 0xffffffffffff8eb3, 0x80d196ef4215c002, 0xffffffffffbfffff},
                        {0x7e14567812345678, 0x052b23ffffffffff, 0x3c42a1d32adce757, 0xffffb561d948086b},
                        {0xdd41b6274c2e9fc8, 0x15a656ef87a7e3ff, 0xe8ca7f711bc67435, 0x9790ccdfffffffff},
                        {0xae49066b4421eb08, 0x6692e49f6dc3e759, 0x7981cb6d68834e44, 0x1a455e911a4abe61},
                        {0x61f4152a396acc64, 0xd3e04adfb2db76e8, 0xc4b21d0541929b89, 0xc4b21d0541929b89},
                        {0xb9856c7a4e403b04, 0xfffffdffffffffff, 0x6c282856278fa90f, 0x3562ab42b18767f1},
                        {0x1233d67812345678, 0xffffffffffffffff, 0xffffffffffffff7f, 0x6795979a87ba9fa9},
                        {0x1234547812345678, 0xffffffffff000000, 0x9790ccdfffffffff, 0xfd54844ab1978b66},
                        {0xeaf1ba47297d8681, 0x461d56602484d6b7, 0xf07ed5d9a1a9f0d4, 0x429e6dfd6226e29f},
                        {0x7e5c7ece39c3ff88, 0x013118c8aa99f60a, 0x38211970004506ff, 0x9b9a0d8efd854057},
                        {0x02b32c51b3de474d, 0xf07ed5d9a1a9f0d5, 0xcebcdf55825a4e10, 0x70f6669aadafb5a2},
                        {0x1234567812345677, 0x4c914e355a711824, 0x8036da6c379a4b3d, 0xfffffffffeffffff},
                        {0xa357342212345678, 0x6bdfffffffffffff, 0x97cdc01d7620cc2e, 0xc4f26c97764ef5a2},
                        {0x129bd2f83809fa99, 0xfffffffffffffffb, 0x9b9a0d8efd854057, 0x0a4528c38b419275},
                        {0x832abd12bfe40c1b, 0x627244c5a421bcb8, 0x0c04167a8c77ee22, 0xd9d5ea99d4d676bb},
                        {0x815299ec700723e4, 0x2dae5bf5fdd46fff, 0x461d56602484d6b7, 0xbb58faf8c06f417f},
                        {0x1234567812345679, 0xffffffffffffff7f, 0x74b14fffffffffff, 0x2dae5bf5fdd46fff},
                        {0xdd41b6274c2e9fc8, 0x9d2500e8e56051bd, 0x8687f2b1a4d4c4d5, 0xd9d5ea99d4d676bb},
                        {0xa357342212345678, 0x74b14fffffffffff, 0xf07ed5d9a1a9f0d4, 0x6bdfffffffffffff},
                        {0x123456749140870f, 0xd2de1c25cbd32942, 0x429e6dfd6226e29f, 0x627244c5a421bcb8},
                        {0x815299ec700723e4, 0xa75116023c0be48b, 0xeb26c0f3aaf6ab66, 0xfffffffff22d6994},
                        {0x86e5a67812345678, 0x9b9a0d8efd854057, 0xffed65080dbbf101, 0x7981cb6d68834e44},
                        {0x5761c86b6caf1608, 0xfffffffffffeffff, 0xffffffffffff8a25, 0x41aa997e87ec6371},
                        {0x9471a7e32e345678, 0xfffffdffffffffff, 0xdab8b286c0d382cd, 0xb54630365be8bb3b},
                        {0x2c79b5092c7f14da, 0xffffffffffbfffff, 0x823d516b1bffffff, 0x362c9719ab93e0ff},
                        {0x1234567812345678, 0xd8bd63cf17493009, 0xefffffffffffffff, 0x2027c296f1a0f8c1},
                        {0x1221bb801ff0477a, 0x1ca6000000000000, 0x052b23ffffffffff, 0x461d56602484d6b7},
                        {0x0f88dac2c3cbe1df, 0x461d56602484d6b8, 0x7981cb6d68834e44, 0x052b23ffffffffff},
                        {0x8bb621e57ab7a4bd, 0x2065d937b8fcb622, 0xffffff5c8eb4652d, 0x6795979a87ba9fa9},
                        {0xeaf1ba47297d8681, 0xeb26c0f3aaf6ab66, 0xb30a9f7ee1cb9a3a, 0xffffffffffffffbf},
                        {0x7e5c7ece39c3ff88, 0x80d196ef4215c002, 0xfffffffffffffffb, 0xfffffffffffffff2},
                        {0x1221bb801ff0477a, 0x8000000000000000, 0xffffffff579a282b, 0xfd54844ab1978b66},
                        {0x1224567812345678, 0x41aa997e87ec6372, 0x3467b70f9169a609, 0x2dae5bf5fdd46fff},
                        {0x1234567811f45678, 0x8687f2b1a4d4c4d6, 0xe94c56e71bd87362, 0xceadcca72f7f1f6c},
                        {0x8b5687e7a5a77b2b, 0x3467b70f9169a609, 0xe94c56e71bd87362, 0x2dae5bf5fdd46fff},
                        {0x123456749140870f, 0x8687f2b1a4d4c4d6, 0xd2de1c25cbd32941, 0x8036da6c379a4b3d}};

  vrsub_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 4; j++) {
      if (z[i][j] != e[i][j]) {
        return 1;
      }
    }
  }
  return 0;
}