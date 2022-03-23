    .text
    .balign 4
    .global vwaddu_wx
vwaddu_wx:
    vsetvli t0, a0, e32, m1, ta, ma
    vle64.v v2, (a1)
      sub a0, a0, t0
      slli t0, t0, 3
      add a1, a1, t0
    vwaddu.wx v4, v2, a2
    vse64.v v4, (a3)
      add a3, a3, t0
      bnez a0, vwaddu_wx
      ret
