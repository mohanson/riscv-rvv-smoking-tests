#include <stddef.h>
#include <stdint.h>

void vwmaccus_vx(size_t n, const uint64_t x, const uint32_t y[], uint64_t z[]);

int main() {
  uint64_t x = 2;
  uint32_t y[100] = {0xdf9647e7, 0xe478510a, 0x2260cd13, 0x74886804, 0x84e6e066, 0x19cead23, 0xb101bfa7, 0xfb754579,
                     0xc52d2ae7, 0x9b08b22e, 0x12f1a191, 0xbd983cda, 0x25fb9be6, 0xfc49c36e, 0x7c5dc38a, 0xac010c67,
                     0xe2181a38, 0xc4018c3c, 0x46a2ed51, 0xde3cc4ad, 0x55db481c, 0x5bb93cd8, 0x5c384fae, 0x55e526fd,
                     0x505f50cb, 0xcaee2e5f, 0x302ffcec, 0x28a088a8, 0xbc39a5c2, 0xa209fe26, 0x4d48f59f, 0x3c2e71b5,
                     0x1847e7a8, 0x05387853, 0xc8bea961, 0x4d32647c, 0xbd40eb38, 0x70a078bc, 0x0ce36da9, 0x34366ecf,
                     0x51f2e021, 0x0abdb82e, 0x8f3105a9, 0xcf5cef89, 0x765af574, 0x1cb9ddc4, 0x13415e90, 0xe72c0f18,
                     0x1eb3dd2b, 0xddfa876f, 0x10072f28, 0x30afe6c3, 0xe28c3bdc, 0x183405ab, 0x6bb27ff8, 0x9bad938f,
                     0xd4da4e2c, 0x82e01962, 0x7e34a5d7, 0xef60685c, 0xf2907b89, 0x290f9174, 0x58ddecd0, 0x2f42d9ab,
                     0xdfa142b2, 0xbf5b0457, 0xc90efcd6, 0x95019a6a, 0xae96ba89, 0x2c3dc737, 0xc99c1a64, 0xb8d7dab3,
                     0x879aee48, 0xf5278cf9, 0x84577d78, 0xe1b0caa8, 0xd88c1f51, 0x2c850d35, 0xc89fd756, 0x3bed3d26,
                     0x91459bdc, 0x7508a201, 0x0f1634c0, 0xe2bc6ee6, 0x1e516ed6, 0xae51fdf9, 0x011c159e, 0xdddc075b,
                     0xc3b0081b, 0x409a6eb7, 0xafc74216, 0x799e601a, 0x44f38656, 0x814decb4, 0xf8a096a1, 0xcd71c006,
                     0x95c7a631, 0xd968d17d, 0xe818ab28, 0xaaebd5a7};
  uint64_t z[100] = {
      0x9df481f4ca8a4b8b, 0x34066ece2c7b7e7c, 0xae9bf0748841ba8c, 0x514640a09a77ca93, 0x72cecdfc6f012caa,
      0x951688b4fd35099b, 0xfa586c5e0c895c6f, 0xdc0063173c02cb16, 0x144dcc5c67d58af4, 0xdbfb0aec4fbaefe5,
      0xef9799251b18dfe1, 0xda069af24e476323, 0xad95f545847be6d6, 0x4b9c9314bdb8331b, 0x89bc3b099184fa11,
      0x8c3f7de59eff0139, 0xdef8e0bb29b4fe95, 0xf204c5f7b9951c11, 0x415eb7974bb704b1, 0xd41bfa6039de99b2,
      0x2f0893e9cc8ed389, 0xc1c19d6603daf731, 0x368e80cda361c3b6, 0xc0c9e07c76bf5be3, 0x4b96da56f7185bab,
      0x43a3cd07555522a5, 0x74a47f7ed01c9f04, 0xbc4d4033c6b84cd5, 0x7550f6df41c9833d, 0x700d3ac7a9b8f98e,
      0xbbda5a924eada0ec, 0xeef77bb40aac0c65, 0xce1e76c0aa3a1d36, 0x22e88548227f0622, 0xf8e36e55ac45d1f4,
      0x17f007ea3b653e83, 0xf75d34da0629321e, 0x9db06cab6b58e91f, 0x26e1799a0be54790, 0x8c3cab5845776119,
      0xff916dd5b571815e, 0xc81395998c474176, 0xcb1dc40bd6a2eb32, 0xe6b77deb5091836e, 0xc4dde337238353f3,
      0xec2eacf6e83190c5, 0xf1e5ffd8749fe067, 0xb1f24d615604876a, 0x8ba8d74ecae00849, 0x528df6b4ec0d908d,
      0xc44ed212c7b07d8d, 0x2547fde71d2511e0, 0xc0bed81f51938170, 0x547732b576156aa7, 0x20706ce666b9262c,
      0xc7c74f2932fd99f0, 0xb3b18509dbc26e03, 0x4df5b2880fa336d6, 0xabc5ac6f61b75d0b, 0x3969489ebd6b5a17,
      0x7970f499b981f61d, 0x54e17a9a49970e90, 0xe9bed50a7caefb90, 0xaec8ca81b8bd2ff2, 0x63404edf1d78a060,
      0x13c773a400193f84, 0x2f8887ca1a64687e, 0xa305411b7c1c7a00, 0x2091e110cabe3de7, 0xbc0120dd8a5720c2,
      0x73ff7bf9a1c5ca55, 0xd3fc5eb9149853d1, 0x5d60670f7e259ce1, 0xa853544d125d0caa, 0xdb31a0542c65c1d8,
      0x9b31f80535532d85, 0x88c872e6883abaab, 0x126e30dcb9fb0c09, 0xced850dbc2196038, 0xa0153f805ce7304d,
      0xb8a8887189ade2fe, 0x8873697716ad044a, 0x19e99ede3cffcfcf, 0x3e5684ef52744b9c, 0x7e94c68d3fe9dcbc,
      0xafeba5901a5ec805, 0x92798a0dbbf26b9f, 0x0abb9fc72dcab8f3, 0xb2f6279d9d9e96a7, 0xb6e89796ff12821a,
      0x111d1e8958eee4f4, 0xb7ac50548b3f50e9, 0x5c8dd26065bf54f7, 0x1accd87d29703781, 0x6bb7c362e9282413,
      0x272a3d0ff1500263, 0x0ecbeab8dd4a208b, 0x6183ac3a80a9db6f, 0x801e736695a7b5b2, 0x55da584de8e97278};
  uint64_t e[100] = {
      0x9df481f489b6db59, 0x34066ecdf56c2090, 0xae9bf074cd0354b2, 0x514640a183889a9b, 0x72cecdfb78ceed76,
      0x951688b530d263e1, 0xfa586c5d6e8cdbbd, 0xdc00631732ed5608, 0x144dcc5bf22fe0c2, 0xdbfb0aeb85cc5441,
      0xef97992540fc2303, 0xda069af1c977dcd7, 0xad95f545d0731ea2, 0x4b9c9314b64bb9f7, 0x89bc3b0a8a408125,
      0x8c3f7de4f7011a07, 0xdef8e0baede53305, 0xf204c5f741983489, 0x415eb797d8fcdf53, 0xd41bfa5ff658230c,
      0x2f0893ea784563c1, 0xc1c19d66bb4d70e1, 0x368e80ce5bd26312, 0xc0c9e07d2289a9dd, 0x4b96da5797d6fd41,
      0x43a3cd06eb317f63, 0x74a47f7f307c98dc, 0xbc4d403417f95e25, 0x7550f6deba3ccec1, 0x700d3ac6edccf5da,
      0xbbda5a92e93f8c2a, 0xeef77bb48308efcf, 0xce1e76c0dac9ec86, 0x22e885482ceff6c8, 0xf8e36e553dc324b6,
      0x17f007ead5ca077b, 0xf75d34d980ab088e, 0x9db06cac4c99da97, 0x26e1799a25ac22e2, 0x8c3cab58ade43eb7,
      0xff916dd6595741a0, 0xc8139599a1c2b1d2, 0xcb1dc40af504f684, 0xe6b77deaef4b6280, 0xc4dde33810393edb,
      0xec2eacf721a54c4d, 0xf1e5ffd89b229d87, 0xb1f24d61245ca59a, 0x8ba8d74f0847c29f, 0x528df6b4a8029f6b,
      0xc44ed212e7bedbdd, 0x2547fde77e84df66, 0xc0bed81f16abf928, 0x547732b5a67d75fd, 0x20706ce73e1e261c,
      0xc7c74f286a58c10e, 0xb3b1850985770a5b, 0x4df5b2871563699a, 0xabc5ac705e20a8b9, 0x3969489e9c2c2acf,
      0x7970f4999ea2ed2f, 0x54e17a9a9bb63178, 0xe9bed50b2e6ad530, 0xaec8ca821742e348, 0x63404ededcbb25c4,
      0x13c773a37ecf4832, 0x2f8887c9ac82622a, 0xa305411aa61faed4, 0x2091e11027ebb2f9, 0xbc0120dde2d2af30,
      0x73ff7bf934fdff1d, 0xd3fc5eb886480937, 0x5d60670e8d5b7971, 0xa853544cfcac269c, 0xdb31a0533514bcc8,
      0x9b31f804f8b4c2d5, 0x88c872e63952f94d, 0x126e30dd13052673, 0xced850db53590ee4, 0xa0153f80d4c1aa99,
      0xb8a88870ac391ab6, 0x8873697800be484c, 0x19e99ede5b2c394f, 0x3e5684ef17ed2968, 0x7e94c68d7c8cba68,
      0xafeba58f7702c3f7, 0x92798a0dbe2a96db, 0x0abb9fc6e982c7a9, 0xb2f6279d24fea6dd, 0xb6e8979780475f88,
      0x111d1e88b87d6920, 0xb7ac50557e7c111d, 0x5c8dd260efa661a3, 0x1accd87c2c0c10e9, 0x6bb7c362da695155,
      0x272a3d0f8c33826f, 0x0ecbeab808d96ced, 0x6183ac3a337b7e69, 0x801e736665d90c02, 0x55da584d3ec11dc6};

  vwmaccus_vx(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != e[i]) {
      return 1;
    }
  }

  return 0;
}
