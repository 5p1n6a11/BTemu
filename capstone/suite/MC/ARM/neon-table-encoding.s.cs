# CS_ARCH_ARM, CS_MODE_ARM, None
0xa0,0x08,0xf1,0xf3 = vtbl.8 d16, {d17}, d16
0xa2,0x09,0xf0,0xf3 = vtbl.8 d16, {d16, d17}, d18
0xa4,0x0a,0xf0,0xf3 = vtbl.8 d16, {d16, d17, d18}, d20
0xa4,0x0b,0xf0,0xf3 = vtbl.8 d16, {d16, d17, d18, d19}, d20
0xe1,0x28,0xf0,0xf3 = vtbx.8 d18, {d16}, d17
0xe2,0x39,0xf0,0xf3 = vtbx.8 d19, {d16, d17}, d18
0xe5,0x4a,0xf0,0xf3 = vtbx.8 d20, {d16, d17, d18}, d21
0xe5,0x4b,0xf0,0xf3 = vtbx.8 d20, {d16, d17, d18, d19}, d21
