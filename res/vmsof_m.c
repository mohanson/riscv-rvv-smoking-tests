#include <stddef.h>
#include <stdint.h>

uint32_t vmsof_m(size_t n, const uint32_t x, const uint32_t m);

uint32_t sof(const uint32_t n, const uint32_t m) {
  uint32_t c = 0;
  for (int i = 0; i < 32; i++) {
    uint32_t nb = (n >> i) & 1;
    uint32_t mb = (m >> i) & 1;
    if (mb == 0) {
      continue;
    }
    if (nb) {
      c |= (1 << i);
      return c;
    }
  }
  return c;
}

int main() {
  uint32_t x[100] = {0xc18efc91, 0x69c67e6a, 0x61dd5474, 0xb07daef9, 0xa7e2bdc0, 0x90807981, 0x27378aa2, 0x2c4cf2c9,
                     0x1a012a55, 0x62efb0cd, 0x9c4f871b, 0x87c5bf76, 0xc7a04994, 0xd4f5f85e, 0x03e93276, 0x29baffcb,
                     0x65ec33af, 0x7d4c0dea, 0xdcd36b5b, 0xd5e3e9b8, 0xfaf04a79, 0x16037c25, 0xad8885d9, 0x4767c983,
                     0x1aa0d3ad, 0xd7970d20, 0xeb1f240d, 0xa27364ee, 0x5e4af0d2, 0x5aa8d075, 0xaf47d74a, 0x22d5927f,
                     0xe011c360, 0xbe4223b1, 0xb7cccb61, 0xa50d1b68, 0x66c90414, 0x62f18f41, 0xa1627278, 0xbcd37552,
                     0x87dc10a3, 0x9d40f9cc, 0xb40e21e1, 0xb0efd65b, 0x7ab83b68, 0x2fef08c5, 0xe8152045, 0xfc6b0c8e,
                     0x7555d8b8, 0x77db0d1c, 0x699869c4, 0x82ae804a, 0xd273feae, 0xc1a1ea50, 0xc1f263a8, 0x7f5c6a91,
                     0x84a6ebbc, 0x76aec776, 0x871ba6ae, 0xeddcce7a, 0xcd1f4c23, 0x6baab14f, 0x8beb58ca, 0xe51b2f2e,
                     0xbed49bff, 0x395446c5, 0x50180b59, 0xae63e4b2, 0x040d2bf8, 0x0ce0800e, 0x1b79b8a6, 0x654eaf83,
                     0x5d7d4832, 0x59418946, 0x319f4930, 0xb42c6182, 0x2869ca82, 0xcd8cacc8, 0x7488e0ed, 0x475c4b41,
                     0x1be28835, 0xe1cbe24c, 0xcb747b20, 0x89ca40bd, 0xcebda786, 0xbcf5f72f, 0x210471a8, 0x86164f3e,
                     0xbb6f1785, 0xa0d7d359, 0x08268293, 0x41011d15, 0x50275da9, 0xa8351b7d, 0x8a276734, 0x00d3cc41,
                     0xee2f15d0, 0x08b1ba61, 0x5ea625d7, 0xad103e22};
  uint32_t m[100] = {0x18c7179f, 0x2d48e7b2, 0xf50347e2, 0x589ac5ff, 0x48ab9061, 0xce17fd16, 0xad21ca7e, 0x76ce0adb,
                     0x38a0e6d9, 0xc9a217d4, 0x9e219f09, 0x61dc6a2f, 0x9f5935cf, 0xb3fb8cb3, 0xaba19790, 0x832e4d42,
                     0xbe4c72b2, 0x801850af, 0xd3b50444, 0x9840ac3a, 0x44566994, 0xecd22b4a, 0x1df0f08b, 0x519685c9,
                     0xc71d31c1, 0xbedbc129, 0x8caba4c2, 0xd168af29, 0xb6f20278, 0x4718fd0a, 0xc4556cac, 0x6e87e399,
                     0xcbbcf356, 0x18c7179f, 0x66ca923d, 0x900e9ac0, 0xf5e4f290, 0xd53187ba, 0x464720a7, 0x5008fded,
                     0xc924ee7a, 0x1e92a944, 0x9f2fc5aa, 0xb18ea45d, 0x7404c383, 0x9772bca5, 0xce9d4cdc, 0x9f738d42,
                     0xe891ba6c, 0x28e00f2b, 0x39738ffe, 0x0204fe73, 0x319b7f26, 0x671f2bcb, 0x1e7d5111, 0xc4202a9a,
                     0x3f30d290, 0xc431c3f2, 0x14f2e6aa, 0x375f2be5, 0x0012961f, 0x98658538, 0x67853f23, 0x1ab8578a,
                     0x72bb2dcd, 0x7d20418e, 0x09923647, 0x922f3671, 0x946a582b, 0x75be235d, 0x363a336a, 0x660ed8ab,
                     0xd4997ca4, 0x08c15ac6, 0x03ca1f7f, 0x0003bdd1, 0x0350e3d1, 0xef01071e, 0x539e5ec7, 0x400ce90d,
                     0xd24afd9e, 0xe5dab565, 0x4f9a1f21, 0x6b8c7ec0, 0x38113664, 0xd7db12d9, 0xdcac8c47, 0x8cedc80a,
                     0x5ebdf1c8, 0xfbdec091, 0xad86f128, 0x1a1ce175, 0xe5fad47e, 0x2f2228eb, 0x499295ca, 0x7591fd6a,
                     0xd2c10086, 0xfae62ad9, 0x945c70f5, 0xd56bdffe};

  for (int i = 0; i < 100; i++) {
    uint64_t y = vmsof_m(32, x[i], m[i]);
    if (y != sof(x[i], m[i])) {
      return 1;
    }
  }

  return 0;
}
