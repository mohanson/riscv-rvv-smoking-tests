    .text
    .balign 4
    .global vmsbc_vx
vmsbc_vx:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vmsbc.vx v2, v0, a2
    vsetivli t0, 1, e8, m1, ta, ma
    vse8.v v2, (a3)
      add a3, a3, t0
      bnez a0, vmsbc_vx
      ret