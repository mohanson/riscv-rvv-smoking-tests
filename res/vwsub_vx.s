    .text
    .balign 4
    .global vwsub_vx
vwsub_vx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle32.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 2
      add a1, a1, t0
    vwsub.vx v4, v2, a2
    vse64.v v4, (a3)
      add a3, a3, t0
      add a3, a3, t0
      bnez a0, vwsub_vx
      ret
