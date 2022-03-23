#include <stddef.h>
#include <stdint.h>

void vsll_vv(size_t n, const uint64_t x[], const uint64_t y[], uint64_t z[]);

int main() {
  uint64_t x[100] = {
      0x46bdafd6fd2ed0df, 0x8feb7d31d026268d, 0x4d7217ae837a01e8, 0x3c90eabec9370731, 0xbc875e3b350884a8,
      0x9d77c14810844229, 0x3af4b3e49ef33fb4, 0x470258e84d9c9c2a, 0xec6ba47f6dc135e5, 0xf0d3c9911495fc67,
      0x46dd34405191d5e4, 0xb4ae4c83a364685a, 0x404ded8eed030f31, 0x0148e7d2166eb70e, 0x9aa3823c43add118,
      0x60271b7397aab303, 0xf724cb262bfc8b85, 0xb2db626a32384af9, 0x5664bdf8928a4c95, 0xef574a9ebc870d58,
      0x709408a0074b4d53, 0xc11db8a89bf004d2, 0xbb41926b1a4a2b9d, 0x9f060b5acfde970e, 0x1cf91e61f2eb2437,
      0xae76803720e91d84, 0xb73917bbb3d2503b, 0xc5e4afa3e1303fe9, 0x019559e5303ddc30, 0x0c573bda6b1d4071,
      0x9f6e673099873949, 0x91e313ea8e1ee3c8, 0xa4ccc6e62bfe276c, 0x2593f65992ee0aaa, 0x359e401e78f69b49,
      0xace1e8660c5dbe20, 0xe98d499ab8787232, 0xf250c5ef37ac2a47, 0x6d32d3befa82aed6, 0xf043f5d9ca58d367,
      0xd1757b18edcf9c60, 0x86b1224af3a81be8, 0x9165bd25fdc88546, 0x4f64ec0da9e28419, 0xfc8e7fab83b6ab94,
      0x60ff91eccc4a7701, 0xd26374966f45dd87, 0xe35d123367bdafc7, 0x7633730c34490dff, 0x85115c76df487e51,
      0xdd01eccf1e51d00d, 0xda8d63f33e3d9477, 0xd49a2d2041eb87c2, 0x5a2440b748918040, 0x861aaf0c0f1809f7,
      0x24084ac3110334dc, 0xb415e05e97e6a280, 0x0323b7d120668577, 0xd453eb2a411e17d7, 0x0d24dd2e8b059b2b,
      0x92c9ab749b3e1395, 0x4157f42f4b25811f, 0xd9d40cb7cdc1cbd3, 0x4d3e02a3b3b88683, 0xc290fec6058984bd,
      0x3a63a2ade9eeab7f, 0xf66aed9ba391ac75, 0x58d4be850eede40d, 0x3ee251ed0b37ec51, 0x61eb9a68f72d1b02,
      0x4bd105c3e7cc86b9, 0x4167d012f865a9c8, 0x1e84ac090e687fb4, 0xe8e6cf5162ebbc03, 0xa796ad268b58ba9d,
      0x3bc8b1dc9aaf9462, 0xc4b40bdb4812ae9b, 0x52acd8bbdf72992e, 0x6e10a4547f21c0d3, 0x4e2e7c10a3b56f6b,
      0x1f7448f57f9b1584, 0xe8092f520c6814be, 0xd9fe71acd197c247, 0xf424584f36b5ca01, 0x6744dcce7705aa38,
      0xc1296dc785bb7540, 0xfd80fec785ad3e6f, 0x640239d268ac02d0, 0xd24ee2d739e606d9, 0x6e56e6da88a51c35,
      0xb82eb8b57f0ac349, 0x9cdf9a1c4255ac1f, 0x00575a964af4dde4, 0xf8882ad67e182476, 0x33b9fa0206e2a267,
      0xc9d6f03ad96ab581, 0xc1a664b8b89b8c88, 0x941b1dc6f3f40946, 0xf432dfee7deb32ed, 0x754d03def65dc0b8};
  uint64_t y[100] = {
      0x953ba18b742b9252, 0xfc6b75adb80ea070, 0xb37dd637d6ed8e4a, 0xe285141c5c74d662, 0x10a185fafe6cc644,
      0xad860d7fdc827f4c, 0xffa56ce947615bed, 0xbe144fef084a607a, 0x537cef0cbb73037a, 0xe9f04fe5e551015e,
      0x151cf2c407c2c7b0, 0x16ee16ad33190dd0, 0x7ae6ca2961291f54, 0x646f9b85eccd1c00, 0xe472057394c10d25,
      0x052584ad4c1a49e0, 0xd867359bc62e8ab8, 0x063bb2f94490888a, 0xb81c0156b0be48b0, 0x096c3fbe777605ce,
      0x3b73829190431561, 0x74966ff1988a8982, 0xa3ddac35a47e7912, 0x9e49e850d99ba165, 0xc1fea5092a685aa7,
      0xfd0edfa76d993886, 0x16a629d2147135a5, 0x63f79cc8d68db165, 0xad3bc961f264bec6, 0xf91e3d5565896f35,
      0x0b8b62c56dea8d34, 0x837e0615c2da85cc, 0xbb650cdb0ce03f54, 0x526a02a0351f0408, 0xc7bfec1bb09a8c4d,
      0x31c0adc8ad02d44f, 0x6d723a8ec11162e1, 0x26715f974b3fa17f, 0x3b193088b4e96a29, 0x3eda042a19bdf1ed,
      0xcb8586e4406ae33d, 0x81e182b9b203cbff, 0xe240f7742bb581ee, 0xc640446148e13c53, 0x9d2cacfc6279658e,
      0x95dcb1b9e80895a5, 0x3550e9cba58acb83, 0x339fa2695553a401, 0xbada29ed0ef65362, 0xe9315fcc0c556296,
      0x1c287cb9b3578f87, 0xa795e39030996d57, 0xf3674b291fd2b239, 0xbaafa5d2cda7e812, 0xdb5d29b20f34cffc,
      0x740acfbaf063c62c, 0xfa04247372b29e58, 0xaae482701ff29d78, 0xbea86462f268ab0b, 0x9f80c0555b0569d0,
      0x74cd5fe5b3210d15, 0x2f5c0d12a64f0851, 0x15071c71964549e6, 0x70236add2220aa44, 0x86a9eb6a45101eff,
      0x2e32f6daab7bc42a, 0x0e01e8be85479a1f, 0x8d36ad699459f77b, 0xb19c3ecec6ad4db5, 0x0b037b5a1c65d78a,
      0x8970d74492168d3a, 0xa5ce8b21699862f8, 0x0edd4036ce77d644, 0xc13aa99d8d5f4c4b, 0xc096d2134a0da4b4,
      0x75f3c7dc73c749ac, 0x2b4267ff01819233, 0xe6379e9ce6bc17bb, 0x92aaf220b468c390, 0xd9544c0905210c9a,
      0x8ff924e8aa2f10e5, 0x5b83989fac089ce6, 0xb46b20eb08d40551, 0xc0e4b919f33ec963, 0x02ddc3c829fc9003,
      0x177b9bfa8fc44201, 0xa27afc96a37205d7, 0xfb44c48a0105a311, 0x95b42fed94477a88, 0x08331bccf12d182f,
      0x481ff25084605ef4, 0x2baf5aac073c2cff, 0xac7875e643f213fd, 0xe997a7fe5fc6e9c6, 0xc2e55e929f021780,
      0xb1f5a83630f134f9, 0xa6f8957b90ce0f36, 0x04039d1a85e45369, 0x6317ea70e4353a20, 0x4c200b44861fb5d2};
  uint64_t z[100];

  vsll_vv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != (x[i] << (y[i] & 0x3f))) {
      return 1;
    }
  }

  return 0;
}
