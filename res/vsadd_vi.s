    .text
    .balign 4
    .global vsadd_vi
vsadd_vi:
    vsetvli t0, a0, e64, m1, ta, ma
    vle64.v v1, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vsadd.vi v2, v1, 15
    vse64.v v2, (a2)
      add a2, a2, t0
      bnez a0, vsadd_vi
      ret
