static void femul(uint64_t out[7], const uint64_t in1[7], const uint64_t in2[7]) {
  { const uint64_t x14 = in1[6];
  { const uint64_t x15 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x26 = in2[6];
  { const uint64_t x27 = in2[5];
  { const uint64_t x25 = in2[4];
  { const uint64_t x23 = in2[3];
  { const uint64_t x21 = in2[2];
  { const uint64_t x19 = in2[1];
  { const uint64_t x17 = in2[0];
  { uint64_t x30;  uint64_t x29 = _mulx_u64(x5, x17, &x30);
  { uint64_t x33;  uint64_t x32 = _mulx_u64(x5, x19, &x33);
  { uint64_t x36;  uint64_t x35 = _mulx_u64(x5, x21, &x36);
  { uint64_t x39;  uint64_t x38 = _mulx_u64(x5, x23, &x39);
  { uint64_t x42;  uint64_t x41 = _mulx_u64(x5, x25, &x42);
  { uint64_t x45;  uint64_t x44 = _mulx_u64(x5, x27, &x45);
  { uint64_t x48;  uint64_t x47 = _mulx_u64(x5, x26, &x48);
  { uint64_t x50; uint8_t/*bool*/ x51 = _addcarryx_u64(0x0, x30, x32, &x50);
  { uint64_t x53; uint8_t/*bool*/ x54 = _addcarryx_u64(x51, x33, x35, &x53);
  { uint64_t x56; uint8_t/*bool*/ x57 = _addcarryx_u64(x54, x36, x38, &x56);
  { uint64_t x59; uint8_t/*bool*/ x60 = _addcarryx_u64(x57, x39, x41, &x59);
  { uint64_t x62; uint8_t/*bool*/ x63 = _addcarryx_u64(x60, x42, x44, &x62);
  { uint64_t x65; uint8_t/*bool*/ x66 = _addcarryx_u64(x63, x45, x47, &x65);
  { uint64_t x68; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x66, x48, &x68);
  { uint64_t _;  uint64_t x71 = _mulx_u64(x29, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x75;  uint64_t x74 = _mulx_u64(x71, 0xffffffffffffffe1L, &x75);
  { uint64_t x78;  uint64_t x77 = _mulx_u64(x71, 0xffffffffffffffffL, &x78);
  { uint64_t x81;  uint64_t x80 = _mulx_u64(x71, 0xffffffffffffffffL, &x81);
  { uint64_t x84;  uint64_t x83 = _mulx_u64(x71, 0xffffffffffffffffL, &x84);
  { uint64_t x87;  uint64_t x86 = _mulx_u64(x71, 0xffffffffffffffffL, &x87);
  { uint64_t x90;  uint64_t x89 = _mulx_u64(x71, 0xffffffffffffffffL, &x90);
  { uint64_t x93;  uint64_t x92 = _mulx_u64(x71, 0x1ffff, &x93);
  { uint64_t x95; uint8_t/*bool*/ x96 = _addcarryx_u64(0x0, x75, x77, &x95);
  { uint64_t x98; uint8_t/*bool*/ x99 = _addcarryx_u64(x96, x78, x80, &x98);
  { uint64_t x101; uint8_t/*bool*/ x102 = _addcarryx_u64(x99, x81, x83, &x101);
  { uint64_t x104; uint8_t/*bool*/ x105 = _addcarryx_u64(x102, x84, x86, &x104);
  { uint64_t x107; uint8_t/*bool*/ x108 = _addcarryx_u64(x105, x87, x89, &x107);
  { uint64_t x110; uint8_t/*bool*/ x111 = _addcarryx_u64(x108, x90, x92, &x110);
  { uint64_t x113; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x111, x93, &x113);
  { uint64_t _; uint8_t/*bool*/ x117 = _addcarryx_u64(0x0, x29, x74, &_);
  { uint64_t x119; uint8_t/*bool*/ x120 = _addcarryx_u64(x117, x50, x95, &x119);
  { uint64_t x122; uint8_t/*bool*/ x123 = _addcarryx_u64(x120, x53, x98, &x122);
  { uint64_t x125; uint8_t/*bool*/ x126 = _addcarryx_u64(x123, x56, x101, &x125);
  { uint64_t x128; uint8_t/*bool*/ x129 = _addcarryx_u64(x126, x59, x104, &x128);
  { uint64_t x131; uint8_t/*bool*/ x132 = _addcarryx_u64(x129, x62, x107, &x131);
  { uint64_t x134; uint8_t/*bool*/ x135 = _addcarryx_u64(x132, x65, x110, &x134);
  { uint64_t x137; uint8_t/*bool*/ x138 = _addcarryx_u64(x135, x68, x113, &x137);
  { uint64_t x141;  uint64_t x140 = _mulx_u64(x7, x17, &x141);
  { uint64_t x144;  uint64_t x143 = _mulx_u64(x7, x19, &x144);
  { uint64_t x147;  uint64_t x146 = _mulx_u64(x7, x21, &x147);
  { uint64_t x150;  uint64_t x149 = _mulx_u64(x7, x23, &x150);
  { uint64_t x153;  uint64_t x152 = _mulx_u64(x7, x25, &x153);
  { uint64_t x156;  uint64_t x155 = _mulx_u64(x7, x27, &x156);
  { uint64_t x159;  uint64_t x158 = _mulx_u64(x7, x26, &x159);
  { uint64_t x161; uint8_t/*bool*/ x162 = _addcarryx_u64(0x0, x141, x143, &x161);
  { uint64_t x164; uint8_t/*bool*/ x165 = _addcarryx_u64(x162, x144, x146, &x164);
  { uint64_t x167; uint8_t/*bool*/ x168 = _addcarryx_u64(x165, x147, x149, &x167);
  { uint64_t x170; uint8_t/*bool*/ x171 = _addcarryx_u64(x168, x150, x152, &x170);
  { uint64_t x173; uint8_t/*bool*/ x174 = _addcarryx_u64(x171, x153, x155, &x173);
  { uint64_t x176; uint8_t/*bool*/ x177 = _addcarryx_u64(x174, x156, x158, &x176);
  { uint64_t x179; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x177, x159, &x179);
  { uint64_t x182; uint8_t/*bool*/ x183 = _addcarryx_u64(0x0, x119, x140, &x182);
  { uint64_t x185; uint8_t/*bool*/ x186 = _addcarryx_u64(x183, x122, x161, &x185);
  { uint64_t x188; uint8_t/*bool*/ x189 = _addcarryx_u64(x186, x125, x164, &x188);
  { uint64_t x191; uint8_t/*bool*/ x192 = _addcarryx_u64(x189, x128, x167, &x191);
  { uint64_t x194; uint8_t/*bool*/ x195 = _addcarryx_u64(x192, x131, x170, &x194);
  { uint64_t x197; uint8_t/*bool*/ x198 = _addcarryx_u64(x195, x134, x173, &x197);
  { uint64_t x200; uint8_t/*bool*/ x201 = _addcarryx_u64(x198, x137, x176, &x200);
  { uint64_t x203; uint8_t/*bool*/ x204 = _addcarryx_u64(x201, x138, x179, &x203);
  { uint64_t _;  uint64_t x206 = _mulx_u64(x182, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x210;  uint64_t x209 = _mulx_u64(x206, 0xffffffffffffffe1L, &x210);
  { uint64_t x213;  uint64_t x212 = _mulx_u64(x206, 0xffffffffffffffffL, &x213);
  { uint64_t x216;  uint64_t x215 = _mulx_u64(x206, 0xffffffffffffffffL, &x216);
  { uint64_t x219;  uint64_t x218 = _mulx_u64(x206, 0xffffffffffffffffL, &x219);
  { uint64_t x222;  uint64_t x221 = _mulx_u64(x206, 0xffffffffffffffffL, &x222);
  { uint64_t x225;  uint64_t x224 = _mulx_u64(x206, 0xffffffffffffffffL, &x225);
  { uint64_t x228;  uint64_t x227 = _mulx_u64(x206, 0x1ffff, &x228);
  { uint64_t x230; uint8_t/*bool*/ x231 = _addcarryx_u64(0x0, x210, x212, &x230);
  { uint64_t x233; uint8_t/*bool*/ x234 = _addcarryx_u64(x231, x213, x215, &x233);
  { uint64_t x236; uint8_t/*bool*/ x237 = _addcarryx_u64(x234, x216, x218, &x236);
  { uint64_t x239; uint8_t/*bool*/ x240 = _addcarryx_u64(x237, x219, x221, &x239);
  { uint64_t x242; uint8_t/*bool*/ x243 = _addcarryx_u64(x240, x222, x224, &x242);
  { uint64_t x245; uint8_t/*bool*/ x246 = _addcarryx_u64(x243, x225, x227, &x245);
  { uint64_t x248; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x246, x228, &x248);
  { uint64_t _; uint8_t/*bool*/ x252 = _addcarryx_u64(0x0, x182, x209, &_);
  { uint64_t x254; uint8_t/*bool*/ x255 = _addcarryx_u64(x252, x185, x230, &x254);
  { uint64_t x257; uint8_t/*bool*/ x258 = _addcarryx_u64(x255, x188, x233, &x257);
  { uint64_t x260; uint8_t/*bool*/ x261 = _addcarryx_u64(x258, x191, x236, &x260);
  { uint64_t x263; uint8_t/*bool*/ x264 = _addcarryx_u64(x261, x194, x239, &x263);
  { uint64_t x266; uint8_t/*bool*/ x267 = _addcarryx_u64(x264, x197, x242, &x266);
  { uint64_t x269; uint8_t/*bool*/ x270 = _addcarryx_u64(x267, x200, x245, &x269);
  { uint64_t x272; uint8_t/*bool*/ x273 = _addcarryx_u64(x270, x203, x248, &x272);
  { uint8_t x274 = ((uint8_t)x273 + x204);
  { uint64_t x277;  uint64_t x276 = _mulx_u64(x9, x17, &x277);
  { uint64_t x280;  uint64_t x279 = _mulx_u64(x9, x19, &x280);
  { uint64_t x283;  uint64_t x282 = _mulx_u64(x9, x21, &x283);
  { uint64_t x286;  uint64_t x285 = _mulx_u64(x9, x23, &x286);
  { uint64_t x289;  uint64_t x288 = _mulx_u64(x9, x25, &x289);
  { uint64_t x292;  uint64_t x291 = _mulx_u64(x9, x27, &x292);
  { uint64_t x295;  uint64_t x294 = _mulx_u64(x9, x26, &x295);
  { uint64_t x297; uint8_t/*bool*/ x298 = _addcarryx_u64(0x0, x277, x279, &x297);
  { uint64_t x300; uint8_t/*bool*/ x301 = _addcarryx_u64(x298, x280, x282, &x300);
  { uint64_t x303; uint8_t/*bool*/ x304 = _addcarryx_u64(x301, x283, x285, &x303);
  { uint64_t x306; uint8_t/*bool*/ x307 = _addcarryx_u64(x304, x286, x288, &x306);
  { uint64_t x309; uint8_t/*bool*/ x310 = _addcarryx_u64(x307, x289, x291, &x309);
  { uint64_t x312; uint8_t/*bool*/ x313 = _addcarryx_u64(x310, x292, x294, &x312);
  { uint64_t x315; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x313, x295, &x315);
  { uint64_t x318; uint8_t/*bool*/ x319 = _addcarryx_u64(0x0, x254, x276, &x318);
  { uint64_t x321; uint8_t/*bool*/ x322 = _addcarryx_u64(x319, x257, x297, &x321);
  { uint64_t x324; uint8_t/*bool*/ x325 = _addcarryx_u64(x322, x260, x300, &x324);
  { uint64_t x327; uint8_t/*bool*/ x328 = _addcarryx_u64(x325, x263, x303, &x327);
  { uint64_t x330; uint8_t/*bool*/ x331 = _addcarryx_u64(x328, x266, x306, &x330);
  { uint64_t x333; uint8_t/*bool*/ x334 = _addcarryx_u64(x331, x269, x309, &x333);
  { uint64_t x336; uint8_t/*bool*/ x337 = _addcarryx_u64(x334, x272, x312, &x336);
  { uint64_t x339; uint8_t/*bool*/ x340 = _addcarryx_u64(x337, x274, x315, &x339);
  { uint64_t _;  uint64_t x342 = _mulx_u64(x318, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x346;  uint64_t x345 = _mulx_u64(x342, 0xffffffffffffffe1L, &x346);
  { uint64_t x349;  uint64_t x348 = _mulx_u64(x342, 0xffffffffffffffffL, &x349);
  { uint64_t x352;  uint64_t x351 = _mulx_u64(x342, 0xffffffffffffffffL, &x352);
  { uint64_t x355;  uint64_t x354 = _mulx_u64(x342, 0xffffffffffffffffL, &x355);
  { uint64_t x358;  uint64_t x357 = _mulx_u64(x342, 0xffffffffffffffffL, &x358);
  { uint64_t x361;  uint64_t x360 = _mulx_u64(x342, 0xffffffffffffffffL, &x361);
  { uint64_t x364;  uint64_t x363 = _mulx_u64(x342, 0x1ffff, &x364);
  { uint64_t x366; uint8_t/*bool*/ x367 = _addcarryx_u64(0x0, x346, x348, &x366);
  { uint64_t x369; uint8_t/*bool*/ x370 = _addcarryx_u64(x367, x349, x351, &x369);
  { uint64_t x372; uint8_t/*bool*/ x373 = _addcarryx_u64(x370, x352, x354, &x372);
  { uint64_t x375; uint8_t/*bool*/ x376 = _addcarryx_u64(x373, x355, x357, &x375);
  { uint64_t x378; uint8_t/*bool*/ x379 = _addcarryx_u64(x376, x358, x360, &x378);
  { uint64_t x381; uint8_t/*bool*/ x382 = _addcarryx_u64(x379, x361, x363, &x381);
  { uint64_t x384; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x382, x364, &x384);
  { uint64_t _; uint8_t/*bool*/ x388 = _addcarryx_u64(0x0, x318, x345, &_);
  { uint64_t x390; uint8_t/*bool*/ x391 = _addcarryx_u64(x388, x321, x366, &x390);
  { uint64_t x393; uint8_t/*bool*/ x394 = _addcarryx_u64(x391, x324, x369, &x393);
  { uint64_t x396; uint8_t/*bool*/ x397 = _addcarryx_u64(x394, x327, x372, &x396);
  { uint64_t x399; uint8_t/*bool*/ x400 = _addcarryx_u64(x397, x330, x375, &x399);
  { uint64_t x402; uint8_t/*bool*/ x403 = _addcarryx_u64(x400, x333, x378, &x402);
  { uint64_t x405; uint8_t/*bool*/ x406 = _addcarryx_u64(x403, x336, x381, &x405);
  { uint64_t x408; uint8_t/*bool*/ x409 = _addcarryx_u64(x406, x339, x384, &x408);
  { uint8_t x410 = ((uint8_t)x409 + x340);
  { uint64_t x413;  uint64_t x412 = _mulx_u64(x11, x17, &x413);
  { uint64_t x416;  uint64_t x415 = _mulx_u64(x11, x19, &x416);
  { uint64_t x419;  uint64_t x418 = _mulx_u64(x11, x21, &x419);
  { uint64_t x422;  uint64_t x421 = _mulx_u64(x11, x23, &x422);
  { uint64_t x425;  uint64_t x424 = _mulx_u64(x11, x25, &x425);
  { uint64_t x428;  uint64_t x427 = _mulx_u64(x11, x27, &x428);
  { uint64_t x431;  uint64_t x430 = _mulx_u64(x11, x26, &x431);
  { uint64_t x433; uint8_t/*bool*/ x434 = _addcarryx_u64(0x0, x413, x415, &x433);
  { uint64_t x436; uint8_t/*bool*/ x437 = _addcarryx_u64(x434, x416, x418, &x436);
  { uint64_t x439; uint8_t/*bool*/ x440 = _addcarryx_u64(x437, x419, x421, &x439);
  { uint64_t x442; uint8_t/*bool*/ x443 = _addcarryx_u64(x440, x422, x424, &x442);
  { uint64_t x445; uint8_t/*bool*/ x446 = _addcarryx_u64(x443, x425, x427, &x445);
  { uint64_t x448; uint8_t/*bool*/ x449 = _addcarryx_u64(x446, x428, x430, &x448);
  { uint64_t x451; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x449, x431, &x451);
  { uint64_t x454; uint8_t/*bool*/ x455 = _addcarryx_u64(0x0, x390, x412, &x454);
  { uint64_t x457; uint8_t/*bool*/ x458 = _addcarryx_u64(x455, x393, x433, &x457);
  { uint64_t x460; uint8_t/*bool*/ x461 = _addcarryx_u64(x458, x396, x436, &x460);
  { uint64_t x463; uint8_t/*bool*/ x464 = _addcarryx_u64(x461, x399, x439, &x463);
  { uint64_t x466; uint8_t/*bool*/ x467 = _addcarryx_u64(x464, x402, x442, &x466);
  { uint64_t x469; uint8_t/*bool*/ x470 = _addcarryx_u64(x467, x405, x445, &x469);
  { uint64_t x472; uint8_t/*bool*/ x473 = _addcarryx_u64(x470, x408, x448, &x472);
  { uint64_t x475; uint8_t/*bool*/ x476 = _addcarryx_u64(x473, x410, x451, &x475);
  { uint64_t _;  uint64_t x478 = _mulx_u64(x454, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x482;  uint64_t x481 = _mulx_u64(x478, 0xffffffffffffffe1L, &x482);
  { uint64_t x485;  uint64_t x484 = _mulx_u64(x478, 0xffffffffffffffffL, &x485);
  { uint64_t x488;  uint64_t x487 = _mulx_u64(x478, 0xffffffffffffffffL, &x488);
  { uint64_t x491;  uint64_t x490 = _mulx_u64(x478, 0xffffffffffffffffL, &x491);
  { uint64_t x494;  uint64_t x493 = _mulx_u64(x478, 0xffffffffffffffffL, &x494);
  { uint64_t x497;  uint64_t x496 = _mulx_u64(x478, 0xffffffffffffffffL, &x497);
  { uint64_t x500;  uint64_t x499 = _mulx_u64(x478, 0x1ffff, &x500);
  { uint64_t x502; uint8_t/*bool*/ x503 = _addcarryx_u64(0x0, x482, x484, &x502);
  { uint64_t x505; uint8_t/*bool*/ x506 = _addcarryx_u64(x503, x485, x487, &x505);
  { uint64_t x508; uint8_t/*bool*/ x509 = _addcarryx_u64(x506, x488, x490, &x508);
  { uint64_t x511; uint8_t/*bool*/ x512 = _addcarryx_u64(x509, x491, x493, &x511);
  { uint64_t x514; uint8_t/*bool*/ x515 = _addcarryx_u64(x512, x494, x496, &x514);
  { uint64_t x517; uint8_t/*bool*/ x518 = _addcarryx_u64(x515, x497, x499, &x517);
  { uint64_t x520; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x518, x500, &x520);
  { uint64_t _; uint8_t/*bool*/ x524 = _addcarryx_u64(0x0, x454, x481, &_);
  { uint64_t x526; uint8_t/*bool*/ x527 = _addcarryx_u64(x524, x457, x502, &x526);
  { uint64_t x529; uint8_t/*bool*/ x530 = _addcarryx_u64(x527, x460, x505, &x529);
  { uint64_t x532; uint8_t/*bool*/ x533 = _addcarryx_u64(x530, x463, x508, &x532);
  { uint64_t x535; uint8_t/*bool*/ x536 = _addcarryx_u64(x533, x466, x511, &x535);
  { uint64_t x538; uint8_t/*bool*/ x539 = _addcarryx_u64(x536, x469, x514, &x538);
  { uint64_t x541; uint8_t/*bool*/ x542 = _addcarryx_u64(x539, x472, x517, &x541);
  { uint64_t x544; uint8_t/*bool*/ x545 = _addcarryx_u64(x542, x475, x520, &x544);
  { uint8_t x546 = ((uint8_t)x545 + x476);
  { uint64_t x549;  uint64_t x548 = _mulx_u64(x13, x17, &x549);
  { uint64_t x552;  uint64_t x551 = _mulx_u64(x13, x19, &x552);
  { uint64_t x555;  uint64_t x554 = _mulx_u64(x13, x21, &x555);
  { uint64_t x558;  uint64_t x557 = _mulx_u64(x13, x23, &x558);
  { uint64_t x561;  uint64_t x560 = _mulx_u64(x13, x25, &x561);
  { uint64_t x564;  uint64_t x563 = _mulx_u64(x13, x27, &x564);
  { uint64_t x567;  uint64_t x566 = _mulx_u64(x13, x26, &x567);
  { uint64_t x569; uint8_t/*bool*/ x570 = _addcarryx_u64(0x0, x549, x551, &x569);
  { uint64_t x572; uint8_t/*bool*/ x573 = _addcarryx_u64(x570, x552, x554, &x572);
  { uint64_t x575; uint8_t/*bool*/ x576 = _addcarryx_u64(x573, x555, x557, &x575);
  { uint64_t x578; uint8_t/*bool*/ x579 = _addcarryx_u64(x576, x558, x560, &x578);
  { uint64_t x581; uint8_t/*bool*/ x582 = _addcarryx_u64(x579, x561, x563, &x581);
  { uint64_t x584; uint8_t/*bool*/ x585 = _addcarryx_u64(x582, x564, x566, &x584);
  { uint64_t x587; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x585, x567, &x587);
  { uint64_t x590; uint8_t/*bool*/ x591 = _addcarryx_u64(0x0, x526, x548, &x590);
  { uint64_t x593; uint8_t/*bool*/ x594 = _addcarryx_u64(x591, x529, x569, &x593);
  { uint64_t x596; uint8_t/*bool*/ x597 = _addcarryx_u64(x594, x532, x572, &x596);
  { uint64_t x599; uint8_t/*bool*/ x600 = _addcarryx_u64(x597, x535, x575, &x599);
  { uint64_t x602; uint8_t/*bool*/ x603 = _addcarryx_u64(x600, x538, x578, &x602);
  { uint64_t x605; uint8_t/*bool*/ x606 = _addcarryx_u64(x603, x541, x581, &x605);
  { uint64_t x608; uint8_t/*bool*/ x609 = _addcarryx_u64(x606, x544, x584, &x608);
  { uint64_t x611; uint8_t/*bool*/ x612 = _addcarryx_u64(x609, x546, x587, &x611);
  { uint64_t _;  uint64_t x614 = _mulx_u64(x590, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x618;  uint64_t x617 = _mulx_u64(x614, 0xffffffffffffffe1L, &x618);
  { uint64_t x621;  uint64_t x620 = _mulx_u64(x614, 0xffffffffffffffffL, &x621);
  { uint64_t x624;  uint64_t x623 = _mulx_u64(x614, 0xffffffffffffffffL, &x624);
  { uint64_t x627;  uint64_t x626 = _mulx_u64(x614, 0xffffffffffffffffL, &x627);
  { uint64_t x630;  uint64_t x629 = _mulx_u64(x614, 0xffffffffffffffffL, &x630);
  { uint64_t x633;  uint64_t x632 = _mulx_u64(x614, 0xffffffffffffffffL, &x633);
  { uint64_t x636;  uint64_t x635 = _mulx_u64(x614, 0x1ffff, &x636);
  { uint64_t x638; uint8_t/*bool*/ x639 = _addcarryx_u64(0x0, x618, x620, &x638);
  { uint64_t x641; uint8_t/*bool*/ x642 = _addcarryx_u64(x639, x621, x623, &x641);
  { uint64_t x644; uint8_t/*bool*/ x645 = _addcarryx_u64(x642, x624, x626, &x644);
  { uint64_t x647; uint8_t/*bool*/ x648 = _addcarryx_u64(x645, x627, x629, &x647);
  { uint64_t x650; uint8_t/*bool*/ x651 = _addcarryx_u64(x648, x630, x632, &x650);
  { uint64_t x653; uint8_t/*bool*/ x654 = _addcarryx_u64(x651, x633, x635, &x653);
  { uint64_t x656; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x654, x636, &x656);
  { uint64_t _; uint8_t/*bool*/ x660 = _addcarryx_u64(0x0, x590, x617, &_);
  { uint64_t x662; uint8_t/*bool*/ x663 = _addcarryx_u64(x660, x593, x638, &x662);
  { uint64_t x665; uint8_t/*bool*/ x666 = _addcarryx_u64(x663, x596, x641, &x665);
  { uint64_t x668; uint8_t/*bool*/ x669 = _addcarryx_u64(x666, x599, x644, &x668);
  { uint64_t x671; uint8_t/*bool*/ x672 = _addcarryx_u64(x669, x602, x647, &x671);
  { uint64_t x674; uint8_t/*bool*/ x675 = _addcarryx_u64(x672, x605, x650, &x674);
  { uint64_t x677; uint8_t/*bool*/ x678 = _addcarryx_u64(x675, x608, x653, &x677);
  { uint64_t x680; uint8_t/*bool*/ x681 = _addcarryx_u64(x678, x611, x656, &x680);
  { uint8_t x682 = ((uint8_t)x681 + x612);
  { uint64_t x685;  uint64_t x684 = _mulx_u64(x15, x17, &x685);
  { uint64_t x688;  uint64_t x687 = _mulx_u64(x15, x19, &x688);
  { uint64_t x691;  uint64_t x690 = _mulx_u64(x15, x21, &x691);
  { uint64_t x694;  uint64_t x693 = _mulx_u64(x15, x23, &x694);
  { uint64_t x697;  uint64_t x696 = _mulx_u64(x15, x25, &x697);
  { uint64_t x700;  uint64_t x699 = _mulx_u64(x15, x27, &x700);
  { uint64_t x703;  uint64_t x702 = _mulx_u64(x15, x26, &x703);
  { uint64_t x705; uint8_t/*bool*/ x706 = _addcarryx_u64(0x0, x685, x687, &x705);
  { uint64_t x708; uint8_t/*bool*/ x709 = _addcarryx_u64(x706, x688, x690, &x708);
  { uint64_t x711; uint8_t/*bool*/ x712 = _addcarryx_u64(x709, x691, x693, &x711);
  { uint64_t x714; uint8_t/*bool*/ x715 = _addcarryx_u64(x712, x694, x696, &x714);
  { uint64_t x717; uint8_t/*bool*/ x718 = _addcarryx_u64(x715, x697, x699, &x717);
  { uint64_t x720; uint8_t/*bool*/ x721 = _addcarryx_u64(x718, x700, x702, &x720);
  { uint64_t x723; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x721, x703, &x723);
  { uint64_t x726; uint8_t/*bool*/ x727 = _addcarryx_u64(0x0, x662, x684, &x726);
  { uint64_t x729; uint8_t/*bool*/ x730 = _addcarryx_u64(x727, x665, x705, &x729);
  { uint64_t x732; uint8_t/*bool*/ x733 = _addcarryx_u64(x730, x668, x708, &x732);
  { uint64_t x735; uint8_t/*bool*/ x736 = _addcarryx_u64(x733, x671, x711, &x735);
  { uint64_t x738; uint8_t/*bool*/ x739 = _addcarryx_u64(x736, x674, x714, &x738);
  { uint64_t x741; uint8_t/*bool*/ x742 = _addcarryx_u64(x739, x677, x717, &x741);
  { uint64_t x744; uint8_t/*bool*/ x745 = _addcarryx_u64(x742, x680, x720, &x744);
  { uint64_t x747; uint8_t/*bool*/ x748 = _addcarryx_u64(x745, x682, x723, &x747);
  { uint64_t _;  uint64_t x750 = _mulx_u64(x726, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x754;  uint64_t x753 = _mulx_u64(x750, 0xffffffffffffffe1L, &x754);
  { uint64_t x757;  uint64_t x756 = _mulx_u64(x750, 0xffffffffffffffffL, &x757);
  { uint64_t x760;  uint64_t x759 = _mulx_u64(x750, 0xffffffffffffffffL, &x760);
  { uint64_t x763;  uint64_t x762 = _mulx_u64(x750, 0xffffffffffffffffL, &x763);
  { uint64_t x766;  uint64_t x765 = _mulx_u64(x750, 0xffffffffffffffffL, &x766);
  { uint64_t x769;  uint64_t x768 = _mulx_u64(x750, 0xffffffffffffffffL, &x769);
  { uint64_t x772;  uint64_t x771 = _mulx_u64(x750, 0x1ffff, &x772);
  { uint64_t x774; uint8_t/*bool*/ x775 = _addcarryx_u64(0x0, x754, x756, &x774);
  { uint64_t x777; uint8_t/*bool*/ x778 = _addcarryx_u64(x775, x757, x759, &x777);
  { uint64_t x780; uint8_t/*bool*/ x781 = _addcarryx_u64(x778, x760, x762, &x780);
  { uint64_t x783; uint8_t/*bool*/ x784 = _addcarryx_u64(x781, x763, x765, &x783);
  { uint64_t x786; uint8_t/*bool*/ x787 = _addcarryx_u64(x784, x766, x768, &x786);
  { uint64_t x789; uint8_t/*bool*/ x790 = _addcarryx_u64(x787, x769, x771, &x789);
  { uint64_t x792; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x790, x772, &x792);
  { uint64_t _; uint8_t/*bool*/ x796 = _addcarryx_u64(0x0, x726, x753, &_);
  { uint64_t x798; uint8_t/*bool*/ x799 = _addcarryx_u64(x796, x729, x774, &x798);
  { uint64_t x801; uint8_t/*bool*/ x802 = _addcarryx_u64(x799, x732, x777, &x801);
  { uint64_t x804; uint8_t/*bool*/ x805 = _addcarryx_u64(x802, x735, x780, &x804);
  { uint64_t x807; uint8_t/*bool*/ x808 = _addcarryx_u64(x805, x738, x783, &x807);
  { uint64_t x810; uint8_t/*bool*/ x811 = _addcarryx_u64(x808, x741, x786, &x810);
  { uint64_t x813; uint8_t/*bool*/ x814 = _addcarryx_u64(x811, x744, x789, &x813);
  { uint64_t x816; uint8_t/*bool*/ x817 = _addcarryx_u64(x814, x747, x792, &x816);
  { uint8_t x818 = ((uint8_t)x817 + x748);
  { uint64_t x821;  uint64_t x820 = _mulx_u64(x14, x17, &x821);
  { uint64_t x824;  uint64_t x823 = _mulx_u64(x14, x19, &x824);
  { uint64_t x827;  uint64_t x826 = _mulx_u64(x14, x21, &x827);
  { uint64_t x830;  uint64_t x829 = _mulx_u64(x14, x23, &x830);
  { uint64_t x833;  uint64_t x832 = _mulx_u64(x14, x25, &x833);
  { uint64_t x836;  uint64_t x835 = _mulx_u64(x14, x27, &x836);
  { uint64_t x839;  uint64_t x838 = _mulx_u64(x14, x26, &x839);
  { uint64_t x841; uint8_t/*bool*/ x842 = _addcarryx_u64(0x0, x821, x823, &x841);
  { uint64_t x844; uint8_t/*bool*/ x845 = _addcarryx_u64(x842, x824, x826, &x844);
  { uint64_t x847; uint8_t/*bool*/ x848 = _addcarryx_u64(x845, x827, x829, &x847);
  { uint64_t x850; uint8_t/*bool*/ x851 = _addcarryx_u64(x848, x830, x832, &x850);
  { uint64_t x853; uint8_t/*bool*/ x854 = _addcarryx_u64(x851, x833, x835, &x853);
  { uint64_t x856; uint8_t/*bool*/ x857 = _addcarryx_u64(x854, x836, x838, &x856);
  { uint64_t x859; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x857, x839, &x859);
  { uint64_t x862; uint8_t/*bool*/ x863 = _addcarryx_u64(0x0, x798, x820, &x862);
  { uint64_t x865; uint8_t/*bool*/ x866 = _addcarryx_u64(x863, x801, x841, &x865);
  { uint64_t x868; uint8_t/*bool*/ x869 = _addcarryx_u64(x866, x804, x844, &x868);
  { uint64_t x871; uint8_t/*bool*/ x872 = _addcarryx_u64(x869, x807, x847, &x871);
  { uint64_t x874; uint8_t/*bool*/ x875 = _addcarryx_u64(x872, x810, x850, &x874);
  { uint64_t x877; uint8_t/*bool*/ x878 = _addcarryx_u64(x875, x813, x853, &x877);
  { uint64_t x880; uint8_t/*bool*/ x881 = _addcarryx_u64(x878, x816, x856, &x880);
  { uint64_t x883; uint8_t/*bool*/ x884 = _addcarryx_u64(x881, x818, x859, &x883);
  { uint64_t _;  uint64_t x886 = _mulx_u64(x862, 0xef7bdef7bdef7bdfL, &_);
  { uint64_t x890;  uint64_t x889 = _mulx_u64(x886, 0xffffffffffffffe1L, &x890);
  { uint64_t x893;  uint64_t x892 = _mulx_u64(x886, 0xffffffffffffffffL, &x893);
  { uint64_t x896;  uint64_t x895 = _mulx_u64(x886, 0xffffffffffffffffL, &x896);
  { uint64_t x899;  uint64_t x898 = _mulx_u64(x886, 0xffffffffffffffffL, &x899);
  { uint64_t x902;  uint64_t x901 = _mulx_u64(x886, 0xffffffffffffffffL, &x902);
  { uint64_t x905;  uint64_t x904 = _mulx_u64(x886, 0xffffffffffffffffL, &x905);
  { uint64_t x908;  uint64_t x907 = _mulx_u64(x886, 0x1ffff, &x908);
  { uint64_t x910; uint8_t/*bool*/ x911 = _addcarryx_u64(0x0, x890, x892, &x910);
  { uint64_t x913; uint8_t/*bool*/ x914 = _addcarryx_u64(x911, x893, x895, &x913);
  { uint64_t x916; uint8_t/*bool*/ x917 = _addcarryx_u64(x914, x896, x898, &x916);
  { uint64_t x919; uint8_t/*bool*/ x920 = _addcarryx_u64(x917, x899, x901, &x919);
  { uint64_t x922; uint8_t/*bool*/ x923 = _addcarryx_u64(x920, x902, x904, &x922);
  { uint64_t x925; uint8_t/*bool*/ x926 = _addcarryx_u64(x923, x905, x907, &x925);
  { uint64_t x928; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x926, x908, &x928);
  { uint64_t _; uint8_t/*bool*/ x932 = _addcarryx_u64(0x0, x862, x889, &_);
  { uint64_t x934; uint8_t/*bool*/ x935 = _addcarryx_u64(x932, x865, x910, &x934);
  { uint64_t x937; uint8_t/*bool*/ x938 = _addcarryx_u64(x935, x868, x913, &x937);
  { uint64_t x940; uint8_t/*bool*/ x941 = _addcarryx_u64(x938, x871, x916, &x940);
  { uint64_t x943; uint8_t/*bool*/ x944 = _addcarryx_u64(x941, x874, x919, &x943);
  { uint64_t x946; uint8_t/*bool*/ x947 = _addcarryx_u64(x944, x877, x922, &x946);
  { uint64_t x949; uint8_t/*bool*/ x950 = _addcarryx_u64(x947, x880, x925, &x949);
  { uint64_t x952; uint8_t/*bool*/ x953 = _addcarryx_u64(x950, x883, x928, &x952);
  { uint8_t x954 = ((uint8_t)x953 + x884);
  { uint64_t x956; uint8_t/*bool*/ x957 = _subborrow_u64(0x0, x934, 0xffffffffffffffe1L, &x956);
  { uint64_t x959; uint8_t/*bool*/ x960 = _subborrow_u64(x957, x937, 0xffffffffffffffffL, &x959);
  { uint64_t x962; uint8_t/*bool*/ x963 = _subborrow_u64(x960, x940, 0xffffffffffffffffL, &x962);
  { uint64_t x965; uint8_t/*bool*/ x966 = _subborrow_u64(x963, x943, 0xffffffffffffffffL, &x965);
  { uint64_t x968; uint8_t/*bool*/ x969 = _subborrow_u64(x966, x946, 0xffffffffffffffffL, &x968);
  { uint64_t x971; uint8_t/*bool*/ x972 = _subborrow_u64(x969, x949, 0xffffffffffffffffL, &x971);
  { uint64_t x974; uint8_t/*bool*/ x975 = _subborrow_u64(x972, x952, 0x1ffff, &x974);
  { uint64_t _; uint8_t/*bool*/ x978 = _subborrow_u64(x975, x954, 0x0, &_);
  { uint64_t x979 = cmovznz64(x978, x974, x952);
  { uint64_t x980 = cmovznz64(x978, x971, x949);
  { uint64_t x981 = cmovznz64(x978, x968, x946);
  { uint64_t x982 = cmovznz64(x978, x965, x943);
  { uint64_t x983 = cmovznz64(x978, x962, x940);
  { uint64_t x984 = cmovznz64(x978, x959, x937);
  { uint64_t x985 = cmovznz64(x978, x956, x934);
  out[0] = x985;
  out[1] = x984;
  out[2] = x983;
  out[3] = x982;
  out[4] = x981;
  out[5] = x980;
  out[6] = x979;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
