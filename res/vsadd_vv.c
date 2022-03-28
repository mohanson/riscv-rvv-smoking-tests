#include <limits.h>
#include <stddef.h>
#include <stdint.h>

void vsadd_vv(size_t n, const uint64_t x[], const uint64_t y[], uint64_t z[]);

int64_t saturating_add(int64_t x, int64_t y) {
  int64_t sum = x + y;
  int64_t pos_overflow = !(x & LONG_MIN) && !(y & LONG_MIN) && (sum & LONG_MIN);
  int64_t neg_overflow = (x & LONG_MIN) && (y & LONG_MIN) && !(sum & LONG_MIN);
  (!pos_overflow || (sum = LONG_MAX)) && (!neg_overflow || (sum = LONG_MIN));
  return sum;
}

int main() {
  uint64_t x[100] = {
      0x469d3c80de8b821f, 0x0d602c1216296777, 0x1f7028f04d672fcd, 0x80c3b7747030f90c, 0x956457677baa20c2,
      0x2af774e5cce84e84, 0x57d37e2a8a225b2a, 0xb52228528bcc2366, 0xa739f2bcf2535f1b, 0x815f17953eda56cd,
      0x5174c68aac30b6eb, 0xf0aded0543494b41, 0x27e8f4af8b8aa293, 0xf51e765fa2c38500, 0x0117c09d7f8812a6,
      0x3b6f948efa095b9c, 0x9880707b4cfba0d8, 0x1796454e05c61f75, 0x800a8c7ae71b1012, 0x885928c4ffa491aa,
      0xd8d30d77e59255c9, 0x534ecfca98f5bcaa, 0x7b3db5ed629137af, 0xe4741fecc5cbdecc, 0xa86ddbe72279069f,
      0xe02d55215cfa668a, 0x2a2a78c220aa97ea, 0x733225dcd4c222fb, 0x23be3ee252c5c9a5, 0x98cd91ebdf910b42,
      0xa31129e2c0b4f090, 0x52b19d76d65fb457, 0xb6c104f8f0052152, 0xbbcad8bcede5275b, 0xa346741076c6d1f6,
      0xac07453eae2e0142, 0x2e52fba194bc2f2f, 0xb8386555b7135b2d, 0xe353d3e3bec6bc9f, 0xf1887a5f2a849309,
      0xc69a89cc51141766, 0xae7993c7fb4d489c, 0x8da7277654b1f5b5, 0x3b9f8f6e7a4371a6, 0x89e6e30d5151b91b,
      0xc2508dd6ffab5ff5, 0x76e0594cf0086a8b, 0x72c7e87ba41c8056, 0xd6ecfa0536bcef1e, 0x618e0fa9471a9e3e,
      0x085e029be03d9cf9, 0xce661ebaafc64ef7, 0x9839dfe06ca7ccc6, 0x531de6c1c7d26fde, 0xcfdc3ac70cac185f,
      0x66e87158221f0242, 0xa7a2979e475e0765, 0xd6bb8efeedd843f0, 0x39fcc35ad66b2978, 0xacff983c5dba2f14,
      0x12ab8e82196c2922, 0x4b415723ccaafa46, 0xbc07ff0550167f33, 0x5f7360806e75c742, 0x7b5227eac0db669c,
      0x137edaba688fbdbf, 0x853befbacca04072, 0x69a62402aacdfcad, 0x33cae9749c8a8859, 0x17fde6ccca7647e1,
      0x1da916cdda7c56b6, 0x1e5eb59ed118b832, 0x594ab70efa775006, 0x7df958791fc937e3, 0x7f8654c02ae1c43d,
      0x6c42c2397b7da816, 0xc65115aaf917571a, 0x4c8070b837bbf2b1, 0x63ab095a9569513c, 0xd2de79d7b7e6d515,
      0xe45c54be984106bb, 0x06ccbed8d52e598a, 0xc7af8b7f1aac43d1, 0x31d8a7f2e9a24f33, 0x5c1f698cf307f217,
      0xf766fb2f1972ffac, 0xe6a49cd1a6c20d4c, 0xc601a53e10f9d275, 0x533cb3ebbac04b57, 0x8298a41bb08b4809,
      0xc38120088dbcf2c9, 0x3d2e21d5f9ec34f0, 0x64e89c5eb479138b, 0x95058dfe723a50a8, 0x4682462ad9f9c303,
      0xec0d5058d8ba0035, 0x5c62e9c452fdafa6, 0x7c11d971e8c3e9f6, 0x0f4d942037112748, 0xac8beff1dd0dc5df};
  uint64_t y[100] = {
      0x7504fd7bfab63bc9, 0x82ec80714420adda, 0x22b53307ee448b76, 0x8b03a6160fd66e3d, 0x23a7ac3f289cc645,
      0x49567650e11b5d0b, 0xee8b18fc854c993c, 0xe0bf0688003b2859, 0x7694d5e1ef35def4, 0xaf6dbed012092cde,
      0x29f6f20b77266f32, 0xf23e571d9572bafb, 0x1061f8ae774e2442, 0xb9ae1a8b44395a0b, 0xf00db69b1e421c06,
      0x028120b9e38affb3, 0x595a7069cac57200, 0x60d13d6dd51dd699, 0xc3294a4133f96ebd, 0xea4fc1d784e61b78,
      0x30e4d389679fc2c6, 0xe9e58ebfaa7903e0, 0x539505e10e60f7d1, 0x1bb2616081aaab16, 0x3a9919edee64030f,
      0x116230e52d690870, 0xa579bd0cc89a7146, 0x101b5315527affae, 0x16dfa96f7d7364af, 0x935721cc6076bd09,
      0xb2a1db307c3523d6, 0xe8b7e465017409cc, 0x70e9400790288948, 0x88497efeada06ba1, 0xe8598c605d076637,
      0x38eb80a20dc86311, 0xa84e00d1a405c41b, 0x3501cd06ab593595, 0x925745da319f2047, 0x8633fc03323fae16,
      0x6ed940bf05a93db9, 0x3971615f06024919, 0xff4e41f78a84e2e0, 0x084ac0bd2e89dc45, 0x5de0703f4ec5826a,
      0xabdcd216edfd10ef, 0xa237f57a7dbecf4c, 0x7238d56542bde0fc, 0x0f0ef183fbb482b8, 0x3fc56b4a48fb459c,
      0xd4c4f08a1ac57a86, 0xf0372eb21f5faf99, 0xe04cc9c129fc3db9, 0xb3606599dcb868d7, 0x0eff266b977c7337,
      0x3e99600305a9aea5, 0x3a677d24e73eaa5e, 0x3c7a5edd8585a3aa, 0xa072c3c9898f5ce0, 0xf00980408cfd21e1,
      0x8a888d23fd3b3768, 0x8abaa1dfd5a31233, 0x37da82ffe2d527ca, 0x72f1b2b45bfc9dd4, 0x41ccf264839dfb68,
      0xb51f60c0d4abd840, 0x1ebcdd794753b121, 0x630928821984ff50, 0x992611a7c80f59eb, 0x6c4933a446ab5535,
      0xd9295dc747f0d3dd, 0xf3b01c877237d8ce, 0x6668bbd272a21bb5, 0x6d4436ee4a1f0a09, 0xa5e2e7c4070cb589,
      0x79482168f1c7f8c8, 0x62756981b4c6455e, 0x8ad4362d3e6e7541, 0x262ae11d3fb1d214, 0xc6a2663eaa1352b5,
      0xfd4ee46972bc93cb, 0xb65ab4078fc1e718, 0xbefa0453b02cdc32, 0x0393c0125cc88dc2, 0xc33e4dfe96beb6b7,
      0x4a99019351c29ff7, 0x829ba8c4869e84ef, 0x94239951e00406af, 0xc1d70c454162f306, 0x22a195d32b7968dd,
      0x4c81f0adeaab0383, 0x81e38d09dfc740df, 0x03c1ceda6d110435, 0xff827448f88f469c, 0x657672f60d77b7f3,
      0xfa50f0aa2d7ec725, 0xb8e55e0441ff3941, 0x6a3a6896c38a8b23, 0x36c4a2222d089a72, 0xae73017209867d44};
  uint64_t z[100];

  vsadd_vv(100, x, y, z);

  for (int i = 0; i < 100; i++) {
    if (z[i] != saturating_add(x[i], y[i])) {
      return 1;
    }
  }

  return 0;
}
