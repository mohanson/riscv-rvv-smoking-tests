    .text
    .balign 4
    .global vxsubint256
vxsubint256:
    vsetvli t0, a0, e256, m1, ta, ma
    vle256.v v0, (a1)
      sub a0, a0, t0
      slli t0, t0, 5
      add a1, a1, t0
    vsub.vx v1, v0, a2
    vse256.v v1, (a3)
      add a3, a3, t0
      bnez a0, vxsubint256
      ret
