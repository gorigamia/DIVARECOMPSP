#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0194[2242] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0,
    0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25,
    0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 0, 35, 0,
    36, 0, 0, 37, 38, 39, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 0,
    0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52,
    0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 66,
    0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 79, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88,
    0, 0, 0, 89, 0, 0, 90, 91, 0, 0, 92, 0, 93, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 100, 0,
    0, 0, 101, 102, 0, 0, 103, 0, 0, 104, 105, 0, 0, 106, 0, 0, 107, 108, 0, 0, 109, 0, 0, 110, 111, 0, 0, 112, 0, 113, 0, 0,
    114, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120, 121, 0, 0, 0, 0, 122,
    0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 133, 0, 134,
    0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0,
    152, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0,
    162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0,
    200, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0,
    208, 209, 0, 0, 0, 0, 210, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 232, 233, 0, 0,
    0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0,
    0, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 296, 0, 297, 298, 0, 299, 300, 301, 0, 0, 302, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0,
    309, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 322, 323, 0, 0, 324, 0, 0,
    325, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 332, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 335, 0, 336, 337, 0, 338, 0, 339, 0, 0, 340, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    343, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 349, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0,
    377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0,
    388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394,
    0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0,
    0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0,
    0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0,
    420, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443,
    0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459,
    0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475,
    0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491,
    0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507,
    0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523,
    0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539,
    0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 554, 0, 555,
    0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571,
    0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587,
    0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603,
    0, 604, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619,
    0, 620, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 634, 0, 635,
    0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651,
    0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667,
    0, 668,
};
void recomp_unit_0194_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B0C000u;
        entry_id = (entry_delta < 8968u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0194[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B0C000;
    case 2u: goto L_08B0C008;
    case 3u: goto L_08B0C010;
    case 4u: goto L_08B0C018;
    case 5u: goto L_08B0C030;
    case 6u: goto L_08B0C050;
    case 7u: goto L_08B0C05C;
    case 8u: goto L_08B0C064;
    case 9u: goto L_08B0C074;
    case 10u: goto L_08B0C08C;
    case 11u: goto L_08B0C094;
    case 12u: goto L_08B0C09C;
    case 13u: goto L_08B0C0D4;
    case 14u: goto L_08B0C0DC;
    case 15u: goto L_08B0C0F0;
    case 16u: goto L_08B0C100;
    case 17u: goto L_08B0C118;
    case 18u: goto L_08B0C128;
    case 19u: goto L_08B0C134;
    case 20u: goto L_08B0C13C;
    case 21u: goto L_08B0C148;
    case 22u: goto L_08B0C158;
    case 23u: goto L_08B0C160;
    case 24u: goto L_08B0C170;
    case 25u: goto L_08B0C17C;
    case 26u: goto L_08B0C18C;
    case 27u: goto L_08B0C194;
    case 28u: goto L_08B0C19C;
    case 29u: goto L_08B0C1A8;
    case 30u: goto L_08B0C1B4;
    case 31u: goto L_08B0C1D0;
    case 32u: goto L_08B0C1D8;
    case 33u: goto L_08B0C1E4;
    case 34u: goto L_08B0C1EC;
    case 35u: goto L_08B0C1F8;
    case 36u: goto L_08B0C200;
    case 37u: goto L_08B0C20C;
    case 38u: goto L_08B0C210;
    case 39u: goto L_08B0C214;
    case 40u: goto L_08B0C21C;
    case 41u: goto L_08B0C228;
    case 42u: goto L_08B0C22C;
    case 43u: goto L_08B0C258;
    case 44u: goto L_08B0C26C;
    case 45u: goto L_08B0C274;
    case 46u: goto L_08B0C298;
    case 47u: goto L_08B0C2A0;
    case 48u: goto L_08B0C2A8;
    case 49u: goto L_08B0C2B4;
    case 50u: goto L_08B0C2CC;
    case 51u: goto L_08B0C2F0;
    case 52u: goto L_08B0C2FC;
    case 53u: goto L_08B0C304;
    case 54u: goto L_08B0C30C;
    case 55u: goto L_08B0C314;
    case 56u: goto L_08B0C320;
    case 57u: goto L_08B0C32C;
    case 58u: goto L_08B0C334;
    case 59u: goto L_08B0C33C;
    case 60u: goto L_08B0C344;
    case 61u: goto L_08B0C34C;
    case 62u: goto L_08B0C354;
    case 63u: goto L_08B0C35C;
    case 64u: goto L_08B0C364;
    case 65u: goto L_08B0C36C;
    case 66u: goto L_08B0C37C;
    case 67u: goto L_08B0C388;
    case 68u: goto L_08B0C390;
    case 69u: goto L_08B0C3A4;
    case 70u: goto L_08B0C3CC;
    case 71u: goto L_08B0C3D4;
    case 72u: goto L_08B0C3F8;
    case 73u: goto L_08B0C3FC;
    case 74u: goto L_08B0C428;
    case 75u: goto L_08B0C43C;
    case 76u: goto L_08B0C448;
    case 77u: goto L_08B0C450;
    case 78u: goto L_08B0C458;
    case 79u: goto L_08B0C474;
    case 80u: goto L_08B0C478;
    case 81u: goto L_08B0C48C;
    case 82u: goto L_08B0C4B8;
    case 83u: goto L_08B0C4CC;
    case 84u: goto L_08B0C4D4;
    case 85u: goto L_08B0C4DC;
    case 86u: goto L_08B0C4E4;
    case 87u: goto L_08B0C4EC;
    case 88u: goto L_08B0C4FC;
    case 89u: goto L_08B0C50C;
    case 90u: goto L_08B0C518;
    case 91u: goto L_08B0C51C;
    case 92u: goto L_08B0C528;
    case 93u: goto L_08B0C530;
    case 94u: goto L_08B0C534;
    case 95u: goto L_08B0C540;
    case 96u: goto L_08B0C54C;
    case 97u: goto L_08B0C558;
    case 98u: goto L_08B0C568;
    case 99u: goto L_08B0C570;
    case 100u: goto L_08B0C578;
    case 101u: goto L_08B0C588;
    case 102u: goto L_08B0C58C;
    case 103u: goto L_08B0C598;
    case 104u: goto L_08B0C5A4;
    case 105u: goto L_08B0C5A8;
    case 106u: goto L_08B0C5B4;
    case 107u: goto L_08B0C5C0;
    case 108u: goto L_08B0C5C4;
    case 109u: goto L_08B0C5D0;
    case 110u: goto L_08B0C5DC;
    case 111u: goto L_08B0C5E0;
    case 112u: goto L_08B0C5EC;
    case 113u: goto L_08B0C5F4;
    case 114u: goto L_08B0C600;
    case 115u: goto L_08B0C604;
    case 116u: goto L_08B0C610;
    case 117u: goto L_08B0C620;
    case 118u: goto L_08B0C640;
    case 119u: goto L_08B0C648;
    case 120u: goto L_08B0C664;
    case 121u: goto L_08B0C668;
    case 122u: goto L_08B0C67C;
    case 123u: goto L_08B0C694;
    case 124u: goto L_08B0C69C;
    case 125u: goto L_08B0C6AC;
    case 126u: goto L_08B0C6C0;
    case 127u: goto L_08B0C6D4;
    case 128u: goto L_08B0C6E0;
    case 129u: goto L_08B0C6F0;
    case 130u: goto L_08B0C73C;
    case 131u: goto L_08B0C754;
    case 132u: goto L_08B0C758;
    case 133u: goto L_08B0C774;
    case 134u: goto L_08B0C77C;
    case 135u: goto L_08B0C788;
    case 136u: goto L_08B0C798;
    case 137u: goto L_08B0C7A0;
    case 138u: goto L_08B0C7AC;
    case 139u: goto L_08B0C7C0;
    case 140u: goto L_08B0C7F0;
    case 141u: goto L_08B0C7F8;
    case 142u: goto L_08B0C7FC;
    case 143u: goto L_08B0C828;
    case 144u: goto L_08B0C83C;
    case 145u: goto L_08B0C844;
    case 146u: goto L_08B0C84C;
    case 147u: goto L_08B0C854;
    case 148u: goto L_08B0C85C;
    case 149u: goto L_08B0C868;
    case 150u: goto L_08B0C870;
    case 151u: goto L_08B0C878;
    case 152u: goto L_08B0C880;
    case 153u: goto L_08B0C884;
    case 154u: goto L_08B0C894;
    case 155u: goto L_08B0C8AC;
    case 156u: goto L_08B0C8B8;
    case 157u: goto L_08B0C8C0;
    case 158u: goto L_08B0C8D0;
    case 159u: goto L_08B0C8D8;
    case 160u: goto L_08B0C8E8;
    case 161u: goto L_08B0C8F0;
    case 162u: goto L_08B0C900;
    case 163u: goto L_08B0C910;
    case 164u: goto L_08B0C91C;
    case 165u: goto L_08B0C928;
    case 166u: goto L_08B0C934;
    case 167u: goto L_08B0C93C;
    case 168u: goto L_08B0C944;
    case 169u: goto L_08B0C94C;
    case 170u: goto L_08B0C95C;
    case 171u: goto L_08B0C964;
    case 172u: goto L_08B0C98C;
    case 173u: goto L_08B0C994;
    case 174u: goto L_08B0C99C;
    case 175u: goto L_08B0C9B8;
    case 176u: goto L_08B0C9C0;
    case 177u: goto L_08B0C9C8;
    case 178u: goto L_08B0C9D8;
    case 179u: goto L_08B0C9E0;
    case 180u: goto L_08B0CA08;
    case 181u: goto L_08B0CA10;
    case 182u: goto L_08B0CA18;
    case 183u: goto L_08B0CA34;
    case 184u: goto L_08B0CA3C;
    case 185u: goto L_08B0CA74;
    case 186u: goto L_08B0CA7C;
    case 187u: goto L_08B0CAA4;
    case 188u: goto L_08B0CAAC;
    case 189u: goto L_08B0CAB4;
    case 190u: goto L_08B0CAD0;
    case 191u: goto L_08B0CAD8;
    case 192u: goto L_08B0CB08;
    case 193u: goto L_08B0CB14;
    case 194u: goto L_08B0CB1C;
    case 195u: goto L_08B0CB44;
    case 196u: goto L_08B0CB4C;
    case 197u: goto L_08B0CB54;
    case 198u: goto L_08B0CB70;
    case 199u: goto L_08B0CB78;
    case 200u: goto L_08B0CB80;
    case 201u: goto L_08B0CB8C;
    case 202u: goto L_08B0CB98;
    case 203u: goto L_08B0CBA4;
    case 204u: goto L_08B0CBAC;
    case 205u: goto L_08B0CBD4;
    case 206u: goto L_08B0CBDC;
    case 207u: goto L_08B0CBE4;
    case 208u: goto L_08B0CC00;
    case 209u: goto L_08B0CC04;
    case 210u: goto L_08B0CC18;
    case 211u: goto L_08B0CC1C;
    case 212u: goto L_08B0CC24;
    case 213u: goto L_08B0CC3C;
    case 214u: goto L_08B0CC50;
    case 215u: goto L_08B0CC58;
    case 216u: goto L_08B0CC60;
    case 217u: goto L_08B0CC68;
    case 218u: goto L_08B0CCA0;
    case 219u: goto L_08B0CCC4;
    case 220u: goto L_08B0CCCC;
    case 221u: goto L_08B0CCE4;
    case 222u: goto L_08B0CCEC;
    case 223u: goto L_08B0CD18;
    case 224u: goto L_08B0CD20;
    case 225u: goto L_08B0CD2C;
    case 226u: goto L_08B0CD38;
    case 227u: goto L_08B0CD40;
    case 228u: goto L_08B0CD4C;
    case 229u: goto L_08B0CD58;
    case 230u: goto L_08B0CD60;
    case 231u: goto L_08B0CD68;
    case 232u: goto L_08B0CD70;
    case 233u: goto L_08B0CD74;
    case 234u: goto L_08B0CD84;
    case 235u: goto L_08B0CD8C;
    case 236u: goto L_08B0CD94;
    case 237u: goto L_08B0CD9C;
    case 238u: goto L_08B0CDB8;
    case 239u: goto L_08B0CDC0;
    case 240u: goto L_08B0CDC8;
    case 241u: goto L_08B0CDD0;
    case 242u: goto L_08B0CE08;
    case 243u: goto L_08B0CE0C;
    case 244u: goto L_08B0CE28;
    case 245u: goto L_08B0CE30;
    case 246u: goto L_08B0CE40;
    case 247u: goto L_08B0CE48;
    case 248u: goto L_08B0CE74;
    case 249u: goto L_08B0CEAC;
    case 250u: goto L_08B0CEC4;
    case 251u: goto L_08B0CEDC;
    case 252u: goto L_08B0CEF0;
    case 253u: goto L_08B0CF1C;
    case 254u: goto L_08B0CF30;
    case 255u: goto L_08B0CF3C;
    case 256u: goto L_08B0CF58;
    case 257u: goto L_08B0CF70;
    case 258u: goto L_08B0CF78;
    case 259u: goto L_08B0CF88;
    case 260u: goto L_08B0CF90;
    case 261u: goto L_08B0CF98;
    case 262u: goto L_08B0CFA4;
    case 263u: goto L_08B0CFB0;
    case 264u: goto L_08B0CFBC;
    case 265u: goto L_08B0CFC4;
    case 266u: goto L_08B0CFC8;
    case 267u: goto L_08B0CFD0;
    case 268u: goto L_08B0CFF8;
    case 269u: goto L_08B0D004;
    case 270u: goto L_08B0D010;
    case 271u: goto L_08B0D02C;
    case 272u: goto L_08B0D040;
    case 273u: goto L_08B0D048;
    case 274u: goto L_08B0D068;
    case 275u: goto L_08B0D07C;
    case 276u: goto L_08B0D090;
    case 277u: goto L_08B0D09C;
    case 278u: goto L_08B0D0A4;
    case 279u: goto L_08B0D0B0;
    case 280u: goto L_08B0D0CC;
    case 281u: goto L_08B0D0D8;
    case 282u: goto L_08B0D0E0;
    case 283u: goto L_08B0D0E8;
    case 284u: goto L_08B0D0F4;
    case 285u: goto L_08B0D114;
    case 286u: goto L_08B0D124;
    case 287u: goto L_08B0D144;
    case 288u: goto L_08B0D164;
    case 289u: goto L_08B0D170;
    case 290u: goto L_08B0D178;
    case 291u: goto L_08B0D26C;
    case 292u: goto L_08B0D278;
    case 293u: goto L_08B0D280;
    case 294u: goto L_08B0D2B4;
    case 295u: goto L_08B0D2C0;
    case 296u: goto L_08B0D2C8;
    case 297u: goto L_08B0D2D0;
    case 298u: goto L_08B0D2D4;
    case 299u: goto L_08B0D2DC;
    case 300u: goto L_08B0D2E0;
    case 301u: goto L_08B0D2E4;
    case 302u: goto L_08B0D2F0;
    case 303u: goto L_08B0D314;
    case 304u: goto L_08B0D330;
    case 305u: goto L_08B0D338;
    case 306u: goto L_08B0D348;
    case 307u: goto L_08B0D35C;
    case 308u: goto L_08B0D364;
    case 309u: goto L_08B0D380;
    case 310u: goto L_08B0D388;
    case 311u: goto L_08B0D398;
    case 312u: goto L_08B0D3AC;
    case 313u: goto L_08B0D3C8;
    case 314u: goto L_08B0D3D0;
    case 315u: goto L_08B0D3D8;
    case 316u: goto L_08B0D3E0;
    case 317u: goto L_08B0D3F0;
    case 318u: goto L_08B0D3F8;
    case 319u: goto L_08B0D42C;
    case 320u: goto L_08B0D44C;
    case 321u: goto L_08B0D458;
    case 322u: goto L_08B0D464;
    case 323u: goto L_08B0D468;
    case 324u: goto L_08B0D474;
    case 325u: goto L_08B0D480;
    case 326u: goto L_08B0D48C;
    case 327u: goto L_08B0D498;
    case 328u: goto L_08B0D4A4;
    case 329u: goto L_08B0D4AC;
    case 330u: goto L_08B0D4B4;
    case 331u: goto L_08B0D4BC;
    case 332u: goto L_08B0D4C8;
    case 333u: goto L_08B0D4CC;
    case 334u: goto L_08B0D4D4;
    case 335u: goto L_08B0D504;
    case 336u: goto L_08B0D50C;
    case 337u: goto L_08B0D510;
    case 338u: goto L_08B0D518;
    case 339u: goto L_08B0D520;
    case 340u: goto L_08B0D52C;
    case 341u: goto L_08B0D530;
    case 342u: goto L_08B0D54C;
    case 343u: goto L_08B0D580;
    case 344u: goto L_08B0D588;
    case 345u: goto L_08B0D594;
    case 346u: goto L_08B0D5B0;
    case 347u: goto L_08B0D5B8;
    case 348u: goto L_08B0D5C0;
    case 349u: goto L_08B0D5D4;
    case 350u: goto L_08B0D5D8;
    case 351u: goto L_08B0D5F0;
    case 352u: goto L_08B0D614;
    case 353u: goto L_08B0D620;
    case 354u: goto L_08B0D63C;
    case 355u: goto L_08B0D644;
    case 356u: goto L_08B0D64C;
    case 357u: goto L_08B0D654;
    case 358u: goto L_08B0D668;
    case 359u: goto L_08B0D68C;
    case 360u: goto L_08B0D694;
    case 361u: goto L_08B0D6A4;
    case 362u: goto L_08B0D6AC;
    case 363u: goto L_08B0D6B4;
    case 364u: goto L_08B0D6C0;
    case 365u: goto L_08B0D6D8;
    case 366u: goto L_08B0D708;
    case 367u: goto L_08B0D718;
    case 368u: goto L_08B0D720;
    case 369u: goto L_08B0D728;
    case 370u: goto L_08B0D738;
    case 371u: goto L_08B0D740;
    case 372u: goto L_08B0D748;
    case 373u: goto L_08B0D754;
    case 374u: goto L_08B0D760;
    case 375u: goto L_08B0D770;
    case 376u: goto L_08B0D778;
    case 377u: goto L_08B0D780;
    case 378u: goto L_08B0D790;
    case 379u: goto L_08B0D798;
    case 380u: goto L_08B0D7A0;
    case 381u: goto L_08B0D7B0;
    case 382u: goto L_08B0D7BC;
    case 383u: goto L_08B0D7CC;
    case 384u: goto L_08B0D7D4;
    case 385u: goto L_08B0D7DC;
    case 386u: goto L_08B0D7EC;
    case 387u: goto L_08B0D7F4;
    case 388u: goto L_08B0D800;
    case 389u: goto L_08B0D80C;
    case 390u: goto L_08B0D818;
    case 391u: goto L_08B0D838;
    case 392u: goto L_08B0D848;
    case 393u: goto L_08B0D86C;
    case 394u: goto L_08B0D87C;
    case 395u: goto L_08B0D88C;
    case 396u: goto L_08B0D8A0;
    case 397u: goto L_08B0D8B4;
    case 398u: goto L_08B0D8C8;
    case 399u: goto L_08B0D8D0;
    case 400u: goto L_08B0D8DC;
    case 401u: goto L_08B0D8F0;
    case 402u: goto L_08B0D8FC;
    case 403u: goto L_08B0D934;
    case 404u: goto L_08B0D944;
    case 405u: goto L_08B0D954;
    case 406u: goto L_08B0D968;
    case 407u: goto L_08B0D970;
    case 408u: goto L_08B0D988;
    case 409u: goto L_08B0D99C;
    case 410u: goto L_08B0D9B0;
    case 411u: goto L_08B0D9C4;
    case 412u: goto L_08B0D9D8;
    case 413u: goto L_08B0D9EC;
    case 414u: goto L_08B0D9F8;
    case 415u: goto L_08B0DA0C;
    case 416u: goto L_08B0DA14;
    case 417u: goto L_08B0DA44;
    case 418u: goto L_08B0DA58;
    case 419u: goto L_08B0DA6C;
    case 420u: goto L_08B0DA80;
    case 421u: goto L_08B0DA8C;
    case 422u: goto L_08B0DAA0;
    case 423u: goto L_08B0DAB0;
    case 424u: goto L_08B0DAC4;
    case 425u: goto L_08B0DACC;
    case 426u: goto L_08B0DAE0;
    case 427u: goto L_08B0DAF4;
    case 428u: goto L_08B0DB04;
    case 429u: goto L_08B0DB0C;
    case 430u: goto L_08B0DB14;
    case 431u: goto L_08B0DB28;
    case 432u: goto L_08B0DB3C;
    case 433u: goto L_08B0DB4C;
    case 434u: goto L_08B0DB70;
    case 435u: goto L_08B0DB78;
    case 436u: goto L_08B0DB90;
    case 437u: goto L_08B0DBA4;
    case 438u: goto L_08B0DBAC;
    case 439u: goto L_08B0DBB4;
    case 440u: goto L_08B0DBBC;
    case 441u: goto L_08B0DBEC;
    case 442u: goto L_08B0DBF4;
    case 443u: goto L_08B0DBFC;
    case 444u: goto L_08B0DC04;
    case 445u: goto L_08B0DC0C;
    case 446u: goto L_08B0DC14;
    case 447u: goto L_08B0DC1C;
    case 448u: goto L_08B0DC24;
    case 449u: goto L_08B0DC2C;
    case 450u: goto L_08B0DC34;
    case 451u: goto L_08B0DC3C;
    case 452u: goto L_08B0DC44;
    case 453u: goto L_08B0DC4C;
    case 454u: goto L_08B0DC54;
    case 455u: goto L_08B0DC5C;
    case 456u: goto L_08B0DC64;
    case 457u: goto L_08B0DC6C;
    case 458u: goto L_08B0DC74;
    case 459u: goto L_08B0DC7C;
    case 460u: goto L_08B0DC84;
    case 461u: goto L_08B0DC8C;
    case 462u: goto L_08B0DC94;
    case 463u: goto L_08B0DC9C;
    case 464u: goto L_08B0DCA4;
    case 465u: goto L_08B0DCAC;
    case 466u: goto L_08B0DCB4;
    case 467u: goto L_08B0DCBC;
    case 468u: goto L_08B0DCC4;
    case 469u: goto L_08B0DCCC;
    case 470u: goto L_08B0DCD4;
    case 471u: goto L_08B0DCDC;
    case 472u: goto L_08B0DCE4;
    case 473u: goto L_08B0DCEC;
    case 474u: goto L_08B0DCF4;
    case 475u: goto L_08B0DCFC;
    case 476u: goto L_08B0DD04;
    case 477u: goto L_08B0DD0C;
    case 478u: goto L_08B0DD14;
    case 479u: goto L_08B0DD1C;
    case 480u: goto L_08B0DD24;
    case 481u: goto L_08B0DD2C;
    case 482u: goto L_08B0DD34;
    case 483u: goto L_08B0DD3C;
    case 484u: goto L_08B0DD44;
    case 485u: goto L_08B0DD4C;
    case 486u: goto L_08B0DD54;
    case 487u: goto L_08B0DD5C;
    case 488u: goto L_08B0DD64;
    case 489u: goto L_08B0DD6C;
    case 490u: goto L_08B0DD74;
    case 491u: goto L_08B0DD7C;
    case 492u: goto L_08B0DD84;
    case 493u: goto L_08B0DD8C;
    case 494u: goto L_08B0DD94;
    case 495u: goto L_08B0DD9C;
    case 496u: goto L_08B0DDA4;
    case 497u: goto L_08B0DDAC;
    case 498u: goto L_08B0DDB4;
    case 499u: goto L_08B0DDBC;
    case 500u: goto L_08B0DDC4;
    case 501u: goto L_08B0DDCC;
    case 502u: goto L_08B0DDD4;
    case 503u: goto L_08B0DDDC;
    case 504u: goto L_08B0DDE4;
    case 505u: goto L_08B0DDEC;
    case 506u: goto L_08B0DDF4;
    case 507u: goto L_08B0DDFC;
    case 508u: goto L_08B0DE04;
    case 509u: goto L_08B0DE0C;
    case 510u: goto L_08B0DE14;
    case 511u: goto L_08B0DE1C;
    case 512u: goto L_08B0DE24;
    case 513u: goto L_08B0DE2C;
    case 514u: goto L_08B0DE34;
    case 515u: goto L_08B0DE3C;
    case 516u: goto L_08B0DE44;
    case 517u: goto L_08B0DE4C;
    case 518u: goto L_08B0DE54;
    case 519u: goto L_08B0DE5C;
    case 520u: goto L_08B0DE64;
    case 521u: goto L_08B0DE6C;
    case 522u: goto L_08B0DE74;
    case 523u: goto L_08B0DE7C;
    case 524u: goto L_08B0DE84;
    case 525u: goto L_08B0DE8C;
    case 526u: goto L_08B0DE94;
    case 527u: goto L_08B0DE9C;
    case 528u: goto L_08B0DEA4;
    case 529u: goto L_08B0DEAC;
    case 530u: goto L_08B0DEB4;
    case 531u: goto L_08B0DEBC;
    case 532u: goto L_08B0DEC4;
    case 533u: goto L_08B0DECC;
    case 534u: goto L_08B0DED4;
    case 535u: goto L_08B0DEDC;
    case 536u: goto L_08B0DEE4;
    case 537u: goto L_08B0DEEC;
    case 538u: goto L_08B0DEF4;
    case 539u: goto L_08B0DEFC;
    case 540u: goto L_08B0DF04;
    case 541u: goto L_08B0DF0C;
    case 542u: goto L_08B0DF14;
    case 543u: goto L_08B0DF1C;
    case 544u: goto L_08B0DF24;
    case 545u: goto L_08B0DF2C;
    case 546u: goto L_08B0DF34;
    case 547u: goto L_08B0DF3C;
    case 548u: goto L_08B0DF44;
    case 549u: goto L_08B0DF4C;
    case 550u: goto L_08B0DF54;
    case 551u: goto L_08B0DF5C;
    case 552u: goto L_08B0DF64;
    case 553u: goto L_08B0DF6C;
    case 554u: goto L_08B0DF74;
    case 555u: goto L_08B0DF7C;
    case 556u: goto L_08B0DF84;
    case 557u: goto L_08B0DF8C;
    case 558u: goto L_08B0DF94;
    case 559u: goto L_08B0DF9C;
    case 560u: goto L_08B0DFA4;
    case 561u: goto L_08B0DFAC;
    case 562u: goto L_08B0DFB4;
    case 563u: goto L_08B0DFBC;
    case 564u: goto L_08B0DFC4;
    case 565u: goto L_08B0DFCC;
    case 566u: goto L_08B0DFD4;
    case 567u: goto L_08B0DFDC;
    case 568u: goto L_08B0DFE4;
    case 569u: goto L_08B0DFEC;
    case 570u: goto L_08B0DFF4;
    case 571u: goto L_08B0DFFC;
    case 572u: goto L_08B0E004;
    case 573u: goto L_08B0E00C;
    case 574u: goto L_08B0E014;
    case 575u: goto L_08B0E01C;
    case 576u: goto L_08B0E024;
    case 577u: goto L_08B0E02C;
    case 578u: goto L_08B0E034;
    case 579u: goto L_08B0E03C;
    case 580u: goto L_08B0E044;
    case 581u: goto L_08B0E04C;
    case 582u: goto L_08B0E054;
    case 583u: goto L_08B0E05C;
    case 584u: goto L_08B0E064;
    case 585u: goto L_08B0E06C;
    case 586u: goto L_08B0E074;
    case 587u: goto L_08B0E07C;
    case 588u: goto L_08B0E084;
    case 589u: goto L_08B0E08C;
    case 590u: goto L_08B0E094;
    case 591u: goto L_08B0E09C;
    case 592u: goto L_08B0E0A4;
    case 593u: goto L_08B0E0AC;
    case 594u: goto L_08B0E0B4;
    case 595u: goto L_08B0E0BC;
    case 596u: goto L_08B0E0C4;
    case 597u: goto L_08B0E0CC;
    case 598u: goto L_08B0E0D4;
    case 599u: goto L_08B0E0DC;
    case 600u: goto L_08B0E0E4;
    case 601u: goto L_08B0E0EC;
    case 602u: goto L_08B0E0F4;
    case 603u: goto L_08B0E0FC;
    case 604u: goto L_08B0E104;
    case 605u: goto L_08B0E10C;
    case 606u: goto L_08B0E114;
    case 607u: goto L_08B0E11C;
    case 608u: goto L_08B0E124;
    case 609u: goto L_08B0E12C;
    case 610u: goto L_08B0E134;
    case 611u: goto L_08B0E13C;
    case 612u: goto L_08B0E144;
    case 613u: goto L_08B0E14C;
    case 614u: goto L_08B0E154;
    case 615u: goto L_08B0E15C;
    case 616u: goto L_08B0E164;
    case 617u: goto L_08B0E16C;
    case 618u: goto L_08B0E174;
    case 619u: goto L_08B0E17C;
    case 620u: goto L_08B0E184;
    case 621u: goto L_08B0E18C;
    case 622u: goto L_08B0E194;
    case 623u: goto L_08B0E19C;
    case 624u: goto L_08B0E1A4;
    case 625u: goto L_08B0E1AC;
    case 626u: goto L_08B0E1B4;
    case 627u: goto L_08B0E1BC;
    case 628u: goto L_08B0E1C4;
    case 629u: goto L_08B0E1CC;
    case 630u: goto L_08B0E1D4;
    case 631u: goto L_08B0E1DC;
    case 632u: goto L_08B0E1E4;
    case 633u: goto L_08B0E1EC;
    case 634u: goto L_08B0E1F4;
    case 635u: goto L_08B0E1FC;
    case 636u: goto L_08B0E204;
    case 637u: goto L_08B0E20C;
    case 638u: goto L_08B0E214;
    case 639u: goto L_08B0E21C;
    case 640u: goto L_08B0E224;
    case 641u: goto L_08B0E22C;
    case 642u: goto L_08B0E234;
    case 643u: goto L_08B0E23C;
    case 644u: goto L_08B0E244;
    case 645u: goto L_08B0E24C;
    case 646u: goto L_08B0E254;
    case 647u: goto L_08B0E25C;
    case 648u: goto L_08B0E264;
    case 649u: goto L_08B0E26C;
    case 650u: goto L_08B0E274;
    case 651u: goto L_08B0E27C;
    case 652u: goto L_08B0E284;
    case 653u: goto L_08B0E28C;
    case 654u: goto L_08B0E294;
    case 655u: goto L_08B0E29C;
    case 656u: goto L_08B0E2A4;
    case 657u: goto L_08B0E2AC;
    case 658u: goto L_08B0E2B4;
    case 659u: goto L_08B0E2BC;
    case 660u: goto L_08B0E2C4;
    case 661u: goto L_08B0E2CC;
    case 662u: goto L_08B0E2D4;
    case 663u: goto L_08B0E2DC;
    case 664u: goto L_08B0E2E4;
    case 665u: goto L_08B0E2EC;
    case 666u: goto L_08B0E2F4;
    case 667u: goto L_08B0E2FC;
    case 668u: goto L_08B0E304;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B0C000:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C008:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C010:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C018:
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(27768));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(121));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(176));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 469u, 0x08861C48u>(ctx, &aot_mem); return;
L_08B0C030:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0C050u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B0C094;
L_08B0C050:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0C05Cu);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    goto L_08B0C08C;
L_08B0C05C:
    ctx.set_gpr(31, 0x08B0C064u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0C064u) goto L_08B0C064;
    return;
L_08B0C064:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08B0C074u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 148u, 0x0885C878u>(ctx, &aot_mem) && ctx.pc == 0x08B0C074u) goto L_08B0C074;
    return;
L_08B0C074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C08C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C094:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08B0C0D4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08B0E0C4;
L_08B0C0D4:
    ctx.set_gpr(31, 0x08B0C0DCu);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_08B0C26C;
L_08B0C0DC:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54))))));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0C0F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    goto L_08B0C258;
L_08B0C0F0:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[17]))));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    goto L_08B0C100;
L_08B0C100:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-1))))));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08B0C118u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    goto L_08B0DB90;
L_08B0C118:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08B0C13C;
    }
    goto L_08B0C128;
L_08B0C128:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08B0C134u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08B0C258;
L_08B0C134:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B0C148;
      }
      goto L_08B0C13C;
    }
L_08B0C13C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
        goto L_08B0C100;
    }
    goto L_08B0C148;
L_08B0C148:
    ctx.set_gpr(23, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(22, 0u + 0u);
    goto L_08B0C158;
L_08B0C158:
    ctx.set_gpr(31, 0x08B0C160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08B0C160u) goto L_08B0C160;
    return;
L_08B0C160:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0C170u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 951u, 0x08B0BFB0u>(ctx, &aot_mem) && ctx.pc == 0x08B0C170u) goto L_08B0C170;
    return;
L_08B0C170:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
    goto L_08B0C17C;
L_08B0C17C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B0C18Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 679u, 0x08862AB8u>(ctx, &aot_mem) && ctx.pc == 0x08B0C18Cu) goto L_08B0C18C;
    return;
L_08B0C18C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08B0C19C;
    }
    goto L_08B0C194;
L_08B0C194:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B0C19C;
L_08B0C19C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[17]);
        goto L_08B0C17C;
    }
    goto L_08B0C1A8;
L_08B0C1A8:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < 101 ? 1u : 0u);
        goto L_08B0C214;
    }
    goto L_08B0C1B4;
L_08B0C1B4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1668));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0C210;
      }
      goto L_08B0C1D8;
    }
L_08B0C1D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B0C1E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08B0C1E4u) goto L_08B0C1E4;
    return;
L_08B0C1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B0C210;
      }
      goto L_08B0C1EC;
    }
L_08B0C1EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B0C1F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08B0C1F8u) goto L_08B0C1F8;
    return;
L_08B0C1F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B0C210;
      }
      goto L_08B0C200;
    }
L_08B0C200:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08B0C20Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 121u, 0x08AAC844u>(ctx, &aot_mem) && ctx.pc == 0x08B0C20Cu) goto L_08B0C20C;
    return;
L_08B0C20C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08B0C210;
L_08B0C210:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < 101 ? 1u : 0u);
    goto L_08B0C214;
L_08B0C214:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
        goto L_08B0C22C;
    }
    goto L_08B0C21C;
L_08B0C21C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0C158;
      }
      goto L_08B0C228;
    }
L_08B0C228:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08B0C22C;
L_08B0C22C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C258:
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(33));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C26C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0C2A0;
      }
      goto L_08B0C298;
    }
L_08B0C298:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C2B4;
      }
      goto L_08B0C2A0;
    }
L_08B0C2A0:
    ctx.set_gpr(31, 0x08B0C2A8u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9420)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 713u, 0x08AAA820u>(ctx, &aot_mem) && ctx.pc == 0x08B0C2A8u) goto L_08B0C2A8;
    return;
L_08B0C2A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(9420), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0C2B4;
L_08B0C2B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C2CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C388;
      }
      goto L_08B0C2F0;
    }
L_08B0C2F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0C32C;
      }
      goto L_08B0C2FC;
    }
L_08B0C2FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C30C;
      }
      goto L_08B0C304;
    }
L_08B0C304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C390;
      }
      goto L_08B0C30C;
    }
L_08B0C30C:
    ctx.set_gpr(31, 0x08B0C314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0C314u) goto L_08B0C314;
    return;
L_08B0C314:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08B0C320u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1046u, 0x08AAFFB8u>(ctx, &aot_mem) && ctx.pc == 0x08B0C320u) goto L_08B0C320;
    return;
L_08B0C320:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08B0C32C;
L_08B0C32C:
    ctx.set_gpr(31, 0x08B0C334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0C334u) goto L_08B0C334;
    return;
L_08B0C334:
    ctx.set_gpr(31, 0x08B0C33Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1047u, 0x08AAFFCCu>(ctx, &aot_mem) && ctx.pc == 0x08B0C33Cu) goto L_08B0C33C;
    return;
L_08B0C33C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C34C;
      }
      goto L_08B0C344;
    }
L_08B0C344:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C390;
      }
      goto L_08B0C34C;
    }
L_08B0C34C:
    ctx.set_gpr(31, 0x08B0C354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0C354u) goto L_08B0C354;
    return;
L_08B0C354:
    ctx.set_gpr(31, 0x08B0C35Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C35Cu) goto L_08B0C35C;
    return;
L_08B0C35C:
    ctx.set_gpr(31, 0x08B0C364u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08B0C364u) goto L_08B0C364;
    return;
L_08B0C364:
    ctx.set_gpr(31, 0x08B0C36Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08B0C36Cu) goto L_08B0C36C;
    return;
L_08B0C36C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0C37Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 613u, 0x08B06624u>(ctx, &aot_mem) && ctx.pc == 0x08B0C37Cu) goto L_08B0C37C;
    return;
L_08B0C37C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08B0C388;
L_08B0C388:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0C390;
L_08B0C390:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C3A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0C3D4;
      }
      goto L_08B0C3CC;
    }
L_08B0C3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C478;
      }
      goto L_08B0C3D4;
    }
L_08B0C3D4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C474;
      }
      goto L_08B0C3F8;
    }
L_08B0C3F8:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    goto L_08B0C3FC;
L_08B0C3FC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B0C474;
      }
      goto L_08B0C428;
    }
L_08B0C428:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(9420)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08B0C43Cu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0C48C;
L_08B0C43C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08B0C458;
    }
    goto L_08B0C448;
L_08B0C448:
    ctx.set_gpr(31, 0x08B0C450u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 463u, 0x08AADDF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0C450u) goto L_08B0C450;
    return;
L_08B0C450:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B0C478;
      }
      goto L_08B0C458;
    }
L_08B0C458:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
        goto L_08B0C3FC;
    }
    goto L_08B0C474;
L_08B0C474:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08B0C478;
L_08B0C478:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C48C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) || ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0C4FC;
      }
      goto L_08B0C4B8;
    }
L_08B0C4B8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B0C4D4;
      }
      goto L_08B0C4CC;
    }
L_08B0C4CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0C668;
      }
      goto L_08B0C4D4;
    }
L_08B0C4D4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C4E4;
      }
      goto L_08B0C4DC;
    }
L_08B0C4DC:
    ctx.set_fpr_bits(0, ctx.fpr_bits(12) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0C4E4;
L_08B0C4E4:
    if (ctx.gpr[7] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0C668;
    }
    goto L_08B0C4EC;
L_08B0C4EC:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C668;
      }
      goto L_08B0C4FC;
    }
L_08B0C4FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08B0C51C;
    }
    goto L_08B0C50C;
L_08B0C50C:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08B0C518u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 397u, 0x0885D7ACu>(ctx, &aot_mem) && ctx.pc == 0x08B0C518u) goto L_08B0C518;
    return;
L_08B0C518:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08B0C51C;
L_08B0C51C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08B0C534;
    }
    goto L_08B0C528;
L_08B0C528:
    ctx.set_gpr(31, 0x08B0C530u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x08B0C530u) goto L_08B0C530;
    return;
L_08B0C530:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08B0C534;
L_08B0C534:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_08B0C58C;
    }
    goto L_08B0C540;
L_08B0C540:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B0C570;
    }
    goto L_08B0C54C;
L_08B0C54C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0C558u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x08B0C558u) goto L_08B0C558;
    return;
L_08B0C558:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0C568u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x08B0C568u) goto L_08B0C568;
    return;
L_08B0C568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C588;
      }
      goto L_08B0C570;
    }
L_08B0C570:
    ctx.set_gpr(31, 0x08B0C578u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x08B0C578u) goto L_08B0C578;
    return;
L_08B0C578:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0C588u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x08B0C588u) goto L_08B0C588;
    return;
L_08B0C588:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_08B0C58C;
L_08B0C58C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
        goto L_08B0C5A8;
    }
    goto L_08B0C598;
L_08B0C598:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08B0C5A4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08B0C5A4u) goto L_08B0C5A4;
    return;
L_08B0C5A4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    goto L_08B0C5A8;
L_08B0C5A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
        goto L_08B0C5C4;
    }
    goto L_08B0C5B4;
L_08B0C5B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0C5C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0C5C0u) goto L_08B0C5C0;
    return;
L_08B0C5C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    goto L_08B0C5C4;
L_08B0C5C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_08B0C5E0;
    }
    goto L_08B0C5D0;
L_08B0C5D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0C5DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 385u, 0x0885D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08B0C5DCu) goto L_08B0C5DC;
    return;
L_08B0C5DC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    goto L_08B0C5E0;
L_08B0C5E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < -1 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
        goto L_08B0C604;
    }
    goto L_08B0C5EC;
L_08B0C5EC:
    ctx.set_gpr(31, 0x08B0C5F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 589u, 0x08AAA05Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C5F4u) goto L_08B0C5F4;
    return;
L_08B0C5F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0C600u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 599u, 0x08AAE670u>(ctx, &aot_mem) && ctx.pc == 0x08B0C600u) goto L_08B0C600;
    return;
L_08B0C600:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    goto L_08B0C604;
L_08B0C604:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08B0C668;
    }
    goto L_08B0C610;
L_08B0C610:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14664));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    goto L_08B0C620;
L_08B0C620:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0C620;
      }
      goto L_08B0C640;
    }
L_08B0C640:
    ctx.set_gpr(31, 0x08B0C648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C648u) goto L_08B0C648;
    return;
L_08B0C648:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08B0C664u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C664u) goto L_08B0C664;
    return;
L_08B0C664:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08B0C668;
L_08B0C668:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C67C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0C694u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08B0CC3C;
L_08B0C694:
    ctx.set_gpr(31, 0x08B0C69Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C69Cu) goto L_08B0C69C;
    return;
L_08B0C69C:
    ctx.set_gpr(5, ctx.gpr[16] & 255u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08B0C6ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 365u, 0x08AB1554u>(ctx, &aot_mem) && ctx.pc == 0x08B0C6ACu) goto L_08B0C6AC;
    return;
L_08B0C6AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0C6D4u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C6D4u) goto L_08B0C6D4;
    return;
L_08B0C6D4:
    ctx.set_gpr(5, ctx.gpr[16] & 255u);
    ctx.set_gpr(31, 0x08B0C6E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 336u, 0x08AB13D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0C6E0u) goto L_08B0C6E0;
    return;
L_08B0C6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C6F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_fpr_bits(24, ctx.fpr_bits(13));
    ctx.set_fpr_bits(23, ctx.fpr_bits(14));
    ctx.set_fpr_bits(22, ctx.fpr_bits(15));
    ctx.set_fpr_bits(21, ctx.fpr_bits(16));
    ctx.set_gpr(31, 0x08B0C73Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08B0CC3C;
L_08B0C73C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[2])) || ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08B0C758;
      }
      goto L_08B0C754;
    }
L_08B0C754:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B0C758;
L_08B0C758:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
      if (branch_taken) {
          goto L_08B0C77C;
      }
      goto L_08B0C774;
    }
L_08B0C774:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B0C788;
      }
      goto L_08B0C77C;
    }
L_08B0C77C:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_08B0C788;
L_08B0C788:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[21]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08B0C7A0;
      }
      goto L_08B0C798;
    }
L_08B0C798:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0C7AC;
      }
      goto L_08B0C7A0;
    }
L_08B0C7A0:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0C7AC;
L_08B0C7AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(31, 0x08B0C7C0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0C67C;
L_08B0C7C0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14752)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14756)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14760)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B0C7FC;
      }
      goto L_08B0C7F0;
    }
L_08B0C7F0:
    ctx.set_gpr(31, 0x08B0C7F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08B0C894;
L_08B0C7F8:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    goto L_08B0C7FC;
L_08B0C7FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0C83Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C83Cu) goto L_08B0C83C;
    return;
L_08B0C83C:
    ctx.set_gpr(31, 0x08B0C844u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 447u, 0x08AB1A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C844u) goto L_08B0C844;
    return;
L_08B0C844:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C854;
      }
      goto L_08B0C84C;
    }
L_08B0C84C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C884;
      }
      goto L_08B0C854;
    }
L_08B0C854:
    ctx.set_gpr(31, 0x08B0C85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C85Cu) goto L_08B0C85C;
    return;
L_08B0C85C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0C868u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 522u, 0x08AB1FB4u>(ctx, &aot_mem) && ctx.pc == 0x08B0C868u) goto L_08B0C868;
    return;
L_08B0C868:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08B0C878;
    }
    goto L_08B0C870;
L_08B0C870:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0C884;
      }
      goto L_08B0C878;
    }
L_08B0C878:
    ctx.set_gpr(31, 0x08B0C880u);
    // nop
    goto L_08B0C894;
L_08B0C880:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0C884;
L_08B0C884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0C894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08B0C8ACu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C8ACu) goto L_08B0C8AC;
    return;
L_08B0C8AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0C8B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08B0C8B8u) goto L_08B0C8B8;
    return;
L_08B0C8B8:
    ctx.set_gpr(31, 0x08B0C8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C8C0u) goto L_08B0C8C0;
    return;
L_08B0C8C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0C8D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 921u, 0x08AB35E8u>(ctx, &aot_mem) && ctx.pc == 0x08B0C8D0u) goto L_08B0C8D0;
    return;
L_08B0C8D0:
    ctx.set_gpr(31, 0x08B0C8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C8D8u) goto L_08B0C8D8;
    return;
L_08B0C8D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08B0C8E8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0C8E8u) goto L_08B0C8E8;
    return;
L_08B0C8E8:
    ctx.set_gpr(31, 0x08B0C8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C8F0u) goto L_08B0C8F0;
    return;
L_08B0C8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0C900u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 936u, 0x08AB36B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0C900u) goto L_08B0C900;
    return;
L_08B0C900:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0CB78;
      }
      goto L_08B0C910;
    }
L_08B0C910:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B0CAD8;
    }
    goto L_08B0C91C;
L_08B0C91C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B0CA3C;
    }
    goto L_08B0C928;
L_08B0C928:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08B0C9C0;
    }
    goto L_08B0C934;
L_08B0C934:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08B0C944;
    }
    goto L_08B0C93C;
L_08B0C93C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B0CC04;
      }
      goto L_08B0C944;
    }
L_08B0C944:
    ctx.set_gpr(31, 0x08B0C94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x08B0C94Cu) goto L_08B0C94C;
    return;
L_08B0C94C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0C994;
      }
      goto L_08B0C95C;
    }
L_08B0C95C:
    ctx.set_gpr(31, 0x08B0C964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C964u) goto L_08B0C964;
    return;
L_08B0C964:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0C98Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0C98Cu) goto L_08B0C98C;
    return;
L_08B0C98C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0C994;
    }
L_08B0C994:
    ctx.set_gpr(31, 0x08B0C99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C99Cu) goto L_08B0C99C;
    return;
L_08B0C99C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0C9B8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 647u, 0x088A67BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0C9B8u) goto L_08B0C9B8;
    return;
L_08B0C9B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0C9C0;
    }
L_08B0C9C0:
    ctx.set_gpr(31, 0x08B0C9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 394u, 0x08A811E8u>(ctx, &aot_mem) && ctx.pc == 0x08B0C9C8u) goto L_08B0C9C8;
    return;
L_08B0C9C8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CA10;
      }
      goto L_08B0C9D8;
    }
L_08B0C9D8:
    ctx.set_gpr(31, 0x08B0C9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0C9E0u) goto L_08B0C9E0;
    return;
L_08B0C9E0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0CA08u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0CA08u) goto L_08B0CA08;
    return;
L_08B0CA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CA10;
    }
L_08B0CA10:
    ctx.set_gpr(31, 0x08B0CA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CA18u) goto L_08B0CA18;
    return;
L_08B0CA18:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0CA34u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 647u, 0x088A67BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0CA34u) goto L_08B0CA34;
    return;
L_08B0CA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CA3C;
    }
L_08B0CA3C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14764)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14768)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14772)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B0CAAC;
      }
      goto L_08B0CA74;
    }
L_08B0CA74:
    ctx.set_gpr(31, 0x08B0CA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CA7Cu) goto L_08B0CA7C;
    return;
L_08B0CA7C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0CAA4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0CAA4u) goto L_08B0CAA4;
    return;
L_08B0CAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CAAC;
    }
L_08B0CAAC:
    ctx.set_gpr(31, 0x08B0CAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CAB4u) goto L_08B0CAB4;
    return;
L_08B0CAB4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0CAD0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 647u, 0x088A67BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0CAD0u) goto L_08B0CAD0;
    return;
L_08B0CAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CAD8;
    }
L_08B0CAD8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14776)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14780)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CB08;
    }
L_08B0CB08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CB4C;
      }
      goto L_08B0CB14;
    }
L_08B0CB14:
    ctx.set_gpr(31, 0x08B0CB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CB1Cu) goto L_08B0CB1C;
    return;
L_08B0CB1C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0CB44u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0CB44u) goto L_08B0CB44;
    return;
L_08B0CB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CB4C;
    }
L_08B0CB4C:
    ctx.set_gpr(31, 0x08B0CB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CB54u) goto L_08B0CB54;
    return;
L_08B0CB54:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0CB70u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 647u, 0x088A67BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0CB70u) goto L_08B0CB70;
    return;
L_08B0CB70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CB78;
    }
L_08B0CB78:
    ctx.set_gpr(31, 0x08B0CB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CB80u) goto L_08B0CB80;
    return;
L_08B0CB80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0CB8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08B0CB8Cu) goto L_08B0CB8C;
    return;
L_08B0CB8C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08B0CB98u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 937u, 0x08ABB1B0u>(ctx, &aot_mem) && ctx.pc == 0x08B0CB98u) goto L_08B0CB98;
    return;
L_08B0CB98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CBDC;
      }
      goto L_08B0CBA4;
    }
L_08B0CBA4:
    ctx.set_gpr(31, 0x08B0CBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CBACu) goto L_08B0CBAC;
    return;
L_08B0CBAC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0CBD4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08B0CBD4u) goto L_08B0CBD4;
    return;
L_08B0CBD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CC00;
      }
      goto L_08B0CBDC;
    }
L_08B0CBDC:
    ctx.set_gpr(31, 0x08B0CBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0CBE4u) goto L_08B0CBE4;
    return;
L_08B0CBE4:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08B0CC00u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 647u, 0x088A67BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0CC00u) goto L_08B0CC00;
    return;
L_08B0CC00:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08B0CC04;
L_08B0CC04:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0CC1C;
      }
      goto L_08B0CC18;
    }
L_08B0CC18:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08B0CC1C;
L_08B0CC1C:
    ctx.set_gpr(31, 0x08B0CC24u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 667u, 0x08AAA4C8u>(ctx, &aot_mem) && ctx.pc == 0x08B0CC24u) goto L_08B0CC24;
    return;
L_08B0CC24:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CC3C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08B0CC58;
    }
    goto L_08B0CC50;
L_08B0CC50:
    { const bool branch_taken = 0u == 0u;
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08B0CC60;
      }
      goto L_08B0CC58;
    }
L_08B0CC58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    goto L_08B0CC60;
L_08B0CC60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14784)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(14788)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0CCA0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 664u, 0x08AAA488u>(ctx, &aot_mem) && ctx.pc == 0x08B0CCA0u) goto L_08B0CCA0;
    return;
L_08B0CCA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 16448u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08B0CCC4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0CCC4u) goto L_08B0CCC4;
    return;
L_08B0CCC4:
    ctx.set_gpr(31, 0x08B0CCCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B0CCE4;
L_08B0CCCC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CCE4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CCEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x08B0CD18u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0CD18u) goto L_08B0CD18;
    return;
L_08B0CD18:
    ctx.set_gpr(31, 0x08B0CD20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B0CE40;
L_08B0CD20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
        goto L_08B0CD38;
    }
    goto L_08B0CD2C;
L_08B0CD2C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
        goto L_08B0CD38;
    }
    goto L_08B0CD38;
L_08B0CD38:
    ctx.set_gpr(31, 0x08B0CD40u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B0CF58;
L_08B0CD40:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0CD4Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08B0CE30;
L_08B0CD4C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0CD8C;
      }
      goto L_08B0CD58;
    }
L_08B0CD58:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 16448u << 16u);
        goto L_08B0CD74;
    }
    goto L_08B0CD60;
L_08B0CD60:
    ctx.set_gpr(31, 0x08B0CD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0CD68u) goto L_08B0CD68;
    return;
L_08B0CD68:
    ctx.set_gpr(31, 0x08B0CD70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08B0CD70u) goto L_08B0CD70;
    return;
L_08B0CD70:
    ctx.set_gpr(2, 16448u << 16u);
    goto L_08B0CD74;
L_08B0CD74:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0CD84u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B0CE28;
L_08B0CD84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0CE0C;
      }
      goto L_08B0CD8C;
    }
L_08B0CD8C:
    if (ctx.gpr[16] != 0u) {
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_08B0CD9C;
    }
    goto L_08B0CD94;
L_08B0CD94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0CE0C;
      }
      goto L_08B0CD9C;
    }
L_08B0CD9C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08B0CDC0;
      }
      goto L_08B0CDB8;
    }
L_08B0CDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0CE0C;
      }
      goto L_08B0CDC0;
    }
L_08B0CDC0:
    ctx.set_gpr(31, 0x08B0CDC8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0CDC8u) goto L_08B0CDC8;
    return;
L_08B0CDC8:
    ctx.set_gpr(31, 0x08B0CDD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08B0CDD0u) goto L_08B0CDD0;
    return;
L_08B0CDD0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14792)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14793)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(44))))));
    ctx.set_gpr(31, 0x08B0CE08u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08B0CE28;
L_08B0CE08:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08B0CE0C;
L_08B0CE0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CE28:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CE30:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 505u, 0x08849F28u>(ctx, &aot_mem); return;
L_08B0CE40:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CE48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[15] = ctx.fpr[1] / ctx.fpr[0];
      if (branch_taken) {
          goto L_08B0CEC4;
      }
      goto L_08B0CE74;
    }
L_08B0CE74:
    ctx.set_gpr(2, 16135u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34696u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16240u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 61681u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, 16238u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 61167u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08B0CEACu);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B0CEACu) goto L_08B0CEAC;
    return;
L_08B0CEAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B0CEC4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14796));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B0CEC4u) goto L_08B0CEC4;
    return;
L_08B0CEC4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08B0CEDCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08B0CEDCu) goto L_08B0CEDC;
    return;
L_08B0CEDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CEF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0CF1Cu);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    goto L_08B0CC68;
L_08B0CF1C:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0CF30u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 516u, 0x08849FC4u>(ctx, &aot_mem) && ctx.pc == 0x08B0CF30u) goto L_08B0CF30;
    return;
L_08B0CF30:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08B0CF3Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08B0D010;
L_08B0CF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0CF58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), 0u);
    ctx.set_gpr(31, 0x08B0CF70u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0CF70u) goto L_08B0CF70;
    return;
L_08B0CF70:
    ctx.set_gpr(31, 0x08B0CF78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B0CCE4;
L_08B0CF78:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0CF88u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0D010;
L_08B0CF88:
    ctx.set_gpr(31, 0x08B0CF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08B0CF90u) goto L_08B0CF90;
    return;
L_08B0CF90:
    ctx.set_gpr(31, 0x08B0CF98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B0CE40;
L_08B0CF98:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
        goto L_08B0CFC8;
    }
    goto L_08B0CFA4;
L_08B0CFA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0CFC4;
      }
      goto L_08B0CFB0;
    }
L_08B0CFB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08B0CFC4;
      }
      goto L_08B0CFBC;
    }
L_08B0CFBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B0D004;
      }
      goto L_08B0CFC4;
    }
L_08B0CFC4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08B0CFC8;
L_08B0CFC8:
    ctx.set_gpr(31, 0x08B0CFD0u);
    // nop
    goto L_08B0E0C4;
L_08B0CFD0:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08B0CFF8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(14800));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0CFF8u) goto L_08B0CFF8;
    return;
L_08B0CFF8:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B0D004;
L_08B0D004:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08B0D02Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0D02Cu) goto L_08B0D02C;
    return;
L_08B0D02C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08B0D040u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0D040u) goto L_08B0D040;
    return;
L_08B0D040:
    ctx.set_gpr(31, 0x08B0D048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08B0D048u) goto L_08B0D048;
    return;
L_08B0D048:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0D068u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 669u, 0x08ABE7A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0D068u) goto L_08B0D068;
    return;
L_08B0D068:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D07C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) || ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B0D09C;
    }
    goto L_08B0D090;
L_08B0D090:
    ctx.set_gpr(3, 16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B0D09C;
L_08B0D09C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D0A4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D0B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B0D280;
      }
      goto L_08B0D0CC;
    }
L_08B0D0CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[6] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08B0D178;
    }
    goto L_08B0D0D8;
L_08B0D0D8:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(7, 2231u << 16u);
        goto L_08B0D0E8;
    }
    goto L_08B0D0E0;
L_08B0D0E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D2C8;
      }
      goto L_08B0D0E8;
    }
L_08B0D0E8:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14840));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(14));
    goto L_08B0D0F4;
L_08B0D0F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0D0F4;
      }
      goto L_08B0D114;
    }
L_08B0D114:
    ctx.set_gpr(7, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(14952));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(7));
    goto L_08B0D124;
L_08B0D124:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B0D124;
      }
      goto L_08B0D144;
    }
L_08B0D144:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1496));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08B0D164u);
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 843u, 0x08853544u>(ctx, &aot_mem) && ctx.pc == 0x08B0D164u) goto L_08B0D164;
    return;
L_08B0D164:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08B0D2D4;
    }
    goto L_08B0D170;
L_08B0D170:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D2E0;
      }
      goto L_08B0D178;
    }
L_08B0D178:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15008)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15012)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15016)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(369));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15020)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15024)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15028)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15032)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15036)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15040)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15044)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15048)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15052)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15056)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15060)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15064)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15068)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15072)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15076)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B0D26Cu);
    ctx.set_gpr(11, ctx.gpr[10] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 843u, 0x08853544u>(ctx, &aot_mem) && ctx.pc == 0x08B0D26Cu) goto L_08B0D26C;
    return;
L_08B0D26C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0D2D0;
      }
      goto L_08B0D278;
    }
L_08B0D278:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D2E0;
      }
      goto L_08B0D280;
    }
L_08B0D280:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15080)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15084)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(86));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0D2B4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 788u, 0x088531BCu>(ctx, &aot_mem) && ctx.pc == 0x08B0D2B4u) goto L_08B0D2B4;
    return;
L_08B0D2B4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0D2D0;
      }
      goto L_08B0D2C0;
    }
L_08B0D2C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D2E0;
      }
      goto L_08B0D2C8;
    }
L_08B0D2C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B0D2E4;
      }
      goto L_08B0D2D0;
    }
L_08B0D2D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B0D2D4;
L_08B0D2D4:
    ctx.set_gpr(31, 0x08B0D2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 668u, 0x08852878u>(ctx, &aot_mem) && ctx.pc == 0x08B0D2DCu) goto L_08B0D2DC;
    return;
L_08B0D2DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08B0D2E0;
L_08B0D2E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B0D2E4;
L_08B0D2E4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D2F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D338;
      }
      goto L_08B0D314;
    }
L_08B0D314:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1696));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D330:
    ctx.set_gpr(31, 0x08B0D338u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B0D35C;
L_08B0D338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D348u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 876u, 0x088537A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0D348u) goto L_08B0D348;
    return;
L_08B0D348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D35C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08B0D380;
L_08B0D380:
    ctx.set_gpr(31, 0x08B0D388u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B0D2F0;
L_08B0D388:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 11 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08B0D380;
    }
    goto L_08B0D398;
L_08B0D398:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D3AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0D3D0;
      }
      goto L_08B0D3C8;
    }
L_08B0D3C8:
    ctx.set_gpr(31, 0x08B0D3D0u);
    // nop
    goto L_08B0D3F0;
L_08B0D3D0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08B0D3E0;
    }
    goto L_08B0D3D8;
L_08B0D3D8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08B0D3E0;
L_08B0D3E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D3F0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D3F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08B0D42Cu);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08B0D5F0;
L_08B0D42C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D44Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08B0D54C;
L_08B0D44C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B0D468;
      }
      goto L_08B0D458;
    }
L_08B0D458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08B0D464u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 940u, 0x08853C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0D464u) goto L_08B0D464;
    return;
L_08B0D464:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08B0D468;
L_08B0D468:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08B0D510;
    }
    goto L_08B0D474;
L_08B0D474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0D50C;
      }
      goto L_08B0D480;
    }
L_08B0D480:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0D50C;
      }
      goto L_08B0D48C;
    }
L_08B0D48C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0D50C;
      }
      goto L_08B0D498;
    }
L_08B0D498:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08B0D4AC;
    }
    goto L_08B0D4A4;
L_08B0D4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B0D530;
      }
      goto L_08B0D4AC;
    }
L_08B0D4AC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08B0D4CC;
    }
    goto L_08B0D4B4;
L_08B0D4B4:
    ctx.set_gpr(31, 0x08B0D4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 142u, 0x08860788u>(ctx, &aot_mem) && ctx.pc == 0x08B0D4BCu) goto L_08B0D4BC;
    return;
L_08B0D4BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0D4C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 943u, 0x0884F250u>(ctx, &aot_mem) && ctx.pc == 0x08B0D4C8u) goto L_08B0D4C8;
    return;
L_08B0D4C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B0D4CC;
L_08B0D4CC:
    ctx.set_gpr(31, 0x08B0D4D4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 340u, 0x08AD1648u>(ctx, &aot_mem) && ctx.pc == 0x08B0D4D4u) goto L_08B0D4D4;
    return;
L_08B0D4D4:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08B0D504u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 936u, 0x08853C20u>(ctx, &aot_mem) && ctx.pc == 0x08B0D504u) goto L_08B0D504;
    return;
L_08B0D504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0D52C;
      }
      goto L_08B0D50C;
    }
L_08B0D50C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_08B0D510;
L_08B0D510:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0D52C;
      }
      goto L_08B0D518;
    }
L_08B0D518:
    ctx.set_gpr(31, 0x08B0D520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 142u, 0x08860788u>(ctx, &aot_mem) && ctx.pc == 0x08B0D520u) goto L_08B0D520;
    return;
L_08B0D520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0D52Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 943u, 0x0884F250u>(ctx, &aot_mem) && ctx.pc == 0x08B0D52Cu) goto L_08B0D52C;
    return;
L_08B0D52C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08B0D530;
L_08B0D530:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D54C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D588;
      }
      goto L_08B0D580;
    }
L_08B0D580:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B0D5D8;
      }
      goto L_08B0D588;
    }
L_08B0D588:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08B0D5C0;
    }
    goto L_08B0D594;
L_08B0D594:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1720));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D5B0:
    ctx.set_gpr(31, 0x08B0D5B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08B0D35C;
L_08B0D5B8:
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08B0D5C0;
L_08B0D5C0:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D5D4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 891u, 0x088538C4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D5D4u) goto L_08B0D5D4;
    return;
L_08B0D5D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08B0D5D8;
L_08B0D5D8:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D5F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08B0D654;
      }
      goto L_08B0D614;
    }
L_08B0D614:
    ctx.set_gpr(1, ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08B0D64C;
    }
    goto L_08B0D620;
L_08B0D620:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1744));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D63C:
    ctx.set_gpr(31, 0x08B0D644u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B0D35C;
L_08B0D644:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08B0D64C;
L_08B0D64C:
    ctx.set_gpr(31, 0x08B0D654u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 909u, 0x08853A68u>(ctx, &aot_mem) && ctx.pc == 0x08B0D654u) goto L_08B0D654;
    return;
L_08B0D654:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08B0D68Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1173u, 0x0884FD58u>(ctx, &aot_mem) && ctx.pc == 0x08B0D68Cu) goto L_08B0D68C;
    return;
L_08B0D68C:
    ctx.set_gpr(31, 0x08B0D694u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 233u, 0x08850B24u>(ctx, &aot_mem) && ctx.pc == 0x08B0D694u) goto L_08B0D694;
    return;
L_08B0D694:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0D6A4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08B0D6A4u) goto L_08B0D6A4;
    return;
L_08B0D6A4:
    ctx.set_gpr(31, 0x08B0D6ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 226u, 0x08850AD4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D6ACu) goto L_08B0D6AC;
    return;
L_08B0D6AC:
    ctx.set_gpr(31, 0x08B0D6B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08B0D6B4u) goto L_08B0D6B4;
    return;
L_08B0D6B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B0D6C0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08B0D6C0u) goto L_08B0D6C0;
    return;
L_08B0D6C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D6D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08B0D718;
      }
      goto L_08B0D708;
    }
L_08B0D708:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0D708;
      }
      goto L_08B0D718;
    }
L_08B0D718:
    ctx.set_gpr(31, 0x08B0D720u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1173u, 0x0884FD58u>(ctx, &aot_mem) && ctx.pc == 0x08B0D720u) goto L_08B0D720;
    return;
L_08B0D720:
    ctx.set_gpr(31, 0x08B0D728u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 233u, 0x08850B24u>(ctx, &aot_mem) && ctx.pc == 0x08B0D728u) goto L_08B0D728;
    return;
L_08B0D728:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D738u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08B0D738u) goto L_08B0D738;
    return;
L_08B0D738:
    ctx.set_gpr(31, 0x08B0D740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 226u, 0x08850AD4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D740u) goto L_08B0D740;
    return;
L_08B0D740:
    ctx.set_gpr(31, 0x08B0D748u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08B0D748u) goto L_08B0D748;
    return;
L_08B0D748:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0D754u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08B0D754u) goto L_08B0D754;
    return;
L_08B0D754:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0D760u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0D760u) goto L_08B0D760;
    return;
L_08B0D760:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0D770u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15088));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08B0D770u) goto L_08B0D770;
    return;
L_08B0D770:
    ctx.set_gpr(31, 0x08B0D778u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1173u, 0x0884FD58u>(ctx, &aot_mem) && ctx.pc == 0x08B0D778u) goto L_08B0D778;
    return;
L_08B0D778:
    ctx.set_gpr(31, 0x08B0D780u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 233u, 0x08850B24u>(ctx, &aot_mem) && ctx.pc == 0x08B0D780u) goto L_08B0D780;
    return;
L_08B0D780:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0D790u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08B0D790u) goto L_08B0D790;
    return;
L_08B0D790:
    ctx.set_gpr(31, 0x08B0D798u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 226u, 0x08850AD4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D798u) goto L_08B0D798;
    return;
L_08B0D798:
    ctx.set_gpr(31, 0x08B0D7A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x08B0D7A0u) goto L_08B0D7A0;
    return;
L_08B0D7A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08B0D7B0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    goto L_08B0D838;
L_08B0D7B0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D7BCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0D7BCu) goto L_08B0D7BC;
    return;
L_08B0D7BC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0D7CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15096));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 455u, 0x08816458u>(ctx, &aot_mem) && ctx.pc == 0x08B0D7CCu) goto L_08B0D7CC;
    return;
L_08B0D7CC:
    ctx.set_gpr(31, 0x08B0D7D4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1173u, 0x0884FD58u>(ctx, &aot_mem) && ctx.pc == 0x08B0D7D4u) goto L_08B0D7D4;
    return;
L_08B0D7D4:
    ctx.set_gpr(31, 0x08B0D7DCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 451u, 0x08849BCCu>(ctx, &aot_mem) && ctx.pc == 0x08B0D7DCu) goto L_08B0D7DC;
    return;
L_08B0D7DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0D7ECu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08B0D7ECu) goto L_08B0D7EC;
    return;
L_08B0D7EC:
    ctx.set_gpr(31, 0x08B0D7F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 444u, 0x08849B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0D7F4u) goto L_08B0D7F4;
    return;
L_08B0D7F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08B0D800u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 434u, 0x08849B00u>(ctx, &aot_mem) && ctx.pc == 0x08B0D800u) goto L_08B0D800;
    return;
L_08B0D800:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08B0D80Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 433u, 0x08849AF8u>(ctx, &aot_mem) && ctx.pc == 0x08B0D80Cu) goto L_08B0D80C;
    return;
L_08B0D80C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D818u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 432u, 0x08849AF0u>(ctx, &aot_mem) && ctx.pc == 0x08B0D818u) goto L_08B0D818;
    return;
L_08B0D818:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D838:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem); return;
L_08B0D848:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08B0D87C;
      }
      goto L_08B0D86C;
    }
L_08B0D86C:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0D86C;
      }
      goto L_08B0D87C;
    }
L_08B0D87C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08B0D88Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15104));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0D88Cu) goto L_08B0D88C;
    return;
L_08B0D88C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08B0D8A0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08B0D668;
L_08B0D8A0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15116));
    ctx.set_gpr(31, 0x08B0D8B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D8B4u) goto L_08B0D8B4;
    return;
L_08B0D8B4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08B0D8C8u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08B0D6D8;
L_08B0D8C8:
    ctx.set_gpr(31, 0x08B0D8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08B0D8D0u) goto L_08B0D8D0;
    return;
L_08B0D8D0:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08B0D8DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08B0D8F0;
L_08B0D8DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0D8F0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28004));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 219u, 0x08848EB4u>(ctx, &aot_mem); return;
L_08B0D8FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08B0D944;
      }
      goto L_08B0D934;
    }
L_08B0D934:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B0D934;
      }
      goto L_08B0D944;
    }
L_08B0D944:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0D954u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15136));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D954u) goto L_08B0D954;
    return;
L_08B0D954:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x08B0D968u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D6D8;
L_08B0D968:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    goto L_08B0D970;
L_08B0D970:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15144));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0D988u);
    ctx.set_gpr(21, ctx.gpr[17] + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D988u) goto L_08B0D988;
    return;
L_08B0D988:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08B0D99Cu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D668;
L_08B0D99C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15160));
    ctx.set_gpr(31, 0x08B0D9B0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D9B0u) goto L_08B0D9B0;
    return;
L_08B0D9B0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08B0D9C4u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D668;
L_08B0D9C4:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15176));
    ctx.set_gpr(31, 0x08B0D9D8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0D9D8u) goto L_08B0D9D8;
    return;
L_08B0D9D8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08B0D9ECu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D6D8;
L_08B0D9EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08B0D9F8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08B0DB70;
L_08B0D9F8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(220));
      if (branch_taken) {
          goto L_08B0D970;
      }
      goto L_08B0DA0C;
    }
L_08B0DA0C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    goto L_08B0DA14;
L_08B0DA14:
    ctx.set_gpr(2, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(21, ctx.gpr[2] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15192));
    ctx.set_gpr(31, 0x08B0DA44u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0DA44u) goto L_08B0DA44;
    return;
L_08B0DA44:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08B0DA58u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D668;
L_08B0DA58:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15208));
    ctx.set_gpr(31, 0x08B0DA6Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0DA6Cu) goto L_08B0DA6C;
    return;
L_08B0DA6C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08B0DA80u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D6D8;
L_08B0DA80:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08B0DA8Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08B0DB70;
L_08B0DA8C:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(7));
        goto L_08B0DA14;
    }
    goto L_08B0DAA0;
L_08B0DAA0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0DAB0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15228));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0DAB0u) goto L_08B0DAB0;
    return;
L_08B0DAB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(2440));
    ctx.set_gpr(31, 0x08B0DAC4u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D6D8;
L_08B0DAC4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    goto L_08B0DACC;
L_08B0DACC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15240));
    ctx.set_gpr(31, 0x08B0DAE0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0DAE0u) goto L_08B0DAE0;
    return;
L_08B0DAE0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(2528));
    ctx.set_gpr(31, 0x08B0DAF4u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D6D8;
L_08B0DAF4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08B0DACC;
      }
      goto L_08B0DB04;
    }
L_08B0DB04:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    goto L_08B0DB0C;
L_08B0DB0C:
    ctx.set_gpr(31, 0x08B0DB14u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 268u, 0x08AAD2A8u>(ctx, &aot_mem) && ctx.pc == 0x08B0DB14u) goto L_08B0DB14;
    return;
L_08B0DB14:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08B0DB28u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(15256));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08B0DB28u) goto L_08B0DB28;
    return;
L_08B0DB28:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(2968));
    ctx.set_gpr(31, 0x08B0DB3Cu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08B0D668;
L_08B0DB3C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08B0DB0C;
      }
      goto L_08B0DB4C;
    }
L_08B0DB4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0DB70:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08B0DB78;
L_08B0DB78:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(68));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0DB90:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
        goto L_08B0DBAC;
    }
    goto L_08B0DBA4;
L_08B0DBA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08B0DBB4;
      }
      goto L_08B0DBAC;
    }
L_08B0DBAC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08B0DBB4;
L_08B0DBB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0DBBC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[5]))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[4]))));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B0DBEC:
    ctx.pc = 0x08B0DBECu;
    return;
L_08B0DBF4:
    ctx.pc = 0x08B0DBF4u;
    return;
L_08B0DBFC:
    ctx.pc = 0x08B0DBFCu;
    return;
L_08B0DC04:
    ctx.pc = 0x08B0DC04u;
    return;
L_08B0DC0C:
    ctx.pc = 0x08B0DC0Cu;
    return;
L_08B0DC14:
    ctx.pc = 0x08B0DC14u;
    return;
L_08B0DC1C:
    ctx.pc = 0x08B0DC1Cu;
    return;
L_08B0DC24:
    ctx.pc = 0x08B0DC24u;
    return;
L_08B0DC2C:
    ctx.pc = 0x08B0DC2Cu;
    return;
L_08B0DC34:
    ctx.pc = 0x08B0DC34u;
    return;
L_08B0DC3C:
    ctx.pc = 0x08B0DC3Cu;
    return;
L_08B0DC44:
    ctx.pc = 0x08B0DC44u;
    return;
L_08B0DC4C:
    ctx.pc = 0x08B0DC4Cu;
    return;
L_08B0DC54:
    ctx.pc = 0x08B0DC54u;
    return;
L_08B0DC5C:
    ctx.pc = 0x08B0DC5Cu;
    return;
L_08B0DC64:
    ctx.pc = 0x08B0DC64u;
    return;
L_08B0DC6C:
    ctx.pc = 0x08B0DC6Cu;
    return;
L_08B0DC74:
    ctx.pc = 0x08B0DC74u;
    return;
L_08B0DC7C:
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08B0DC84:
    ctx.pc = 0x08B0DC84u;
    return;
L_08B0DC8C:
    ctx.pc = 0x08B0DC8Cu;
    return;
L_08B0DC94:
    ctx.pc = 0x08B0DC94u;
    return;
L_08B0DC9C:
    ctx.pc = 0x08B0DC9Cu;
    return;
L_08B0DCA4:
    ctx.pc = 0x08B0DCA4u;
    return;
L_08B0DCAC:
    ctx.pc = 0x08B0DCACu;
    return;
L_08B0DCB4:
    ctx.pc = 0x08B0DCB4u;
    return;
L_08B0DCBC:
    ctx.pc = 0x08B0DCBCu;
    return;
L_08B0DCC4:
    ctx.pc = 0x08B0DCC4u;
    return;
L_08B0DCCC:
    ctx.pc = 0x08B0DCCCu;
    return;
L_08B0DCD4:
    ctx.pc = 0x08B0DCD4u;
    return;
L_08B0DCDC:
    ctx.pc = 0x08B0DCDCu;
    return;
L_08B0DCE4:
    ctx.pc = 0x08B0DCE4u;
    return;
L_08B0DCEC:
    ctx.pc = 0x08B0DCECu;
    return;
L_08B0DCF4:
    ctx.pc = 0x08B0DCF4u;
    return;
L_08B0DCFC:
    ctx.pc = 0x08B0DCFCu;
    return;
L_08B0DD04:
    ctx.pc = 0x08B0DD04u;
    return;
L_08B0DD0C:
    ctx.pc = 0x08B0DD0Cu;
    return;
L_08B0DD14:
    ctx.pc = 0x08B0DD14u;
    return;
L_08B0DD1C:
    ctx.pc = 0x08B0DD1Cu;
    return;
L_08B0DD24:
    ctx.pc = 0x08B0DD24u;
    return;
L_08B0DD2C:
    ctx.pc = 0x08B0DD2Cu;
    return;
L_08B0DD34:
    ctx.pc = 0x08B0DD34u;
    return;
L_08B0DD3C:
    ctx.pc = 0x08B0DD3Cu;
    return;
L_08B0DD44:
    ctx.pc = 0x08B0DD44u;
    return;
L_08B0DD4C:
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08B0DD54:
    ctx.pc = 0x08B0DD54u;
    return;
L_08B0DD5C:
    ctx.pc = 0x08B0DD5Cu;
    return;
L_08B0DD64:
    ctx.pc = 0x08B0DD64u;
    return;
L_08B0DD6C:
    ctx.pc = 0x08B0DD6Cu;
    return;
L_08B0DD74:
    ctx.pc = 0x08B0DD74u;
    return;
L_08B0DD7C:
    ctx.pc = 0x08B0DD7Cu;
    return;
L_08B0DD84:
    ctx.pc = 0x08B0DD84u;
    return;
L_08B0DD8C:
    ctx.pc = 0x08B0DD8Cu;
    return;
L_08B0DD94:
    ctx.pc = 0x08B0DD94u;
    return;
L_08B0DD9C:
    ctx.pc = 0x08B0DD9Cu;
    return;
L_08B0DDA4:
    ctx.pc = 0x08B0DDA4u;
    return;
L_08B0DDAC:
    ctx.pc = 0x08B0DDACu;
    return;
L_08B0DDB4:
    ctx.pc = 0x08B0DDB4u;
    return;
L_08B0DDBC:
    ctx.pc = 0x08B0DDBCu;
    return;
L_08B0DDC4:
    ctx.pc = 0x08B0DDC4u;
    return;
L_08B0DDCC:
    ctx.pc = 0x08B0DDCCu;
    return;
L_08B0DDD4:
    ctx.pc = 0x08B0DDD4u;
    return;
L_08B0DDDC:
    ctx.pc = 0x08B0DDDCu;
    return;
L_08B0DDE4:
    ctx.pc = 0x08B0DDE4u;
    return;
L_08B0DDEC:
    ctx.pc = 0x08B0DDECu;
    return;
L_08B0DDF4:
    ctx.pc = 0x08B0DDF4u;
    return;
L_08B0DDFC:
    ctx.pc = 0x08B0DDFCu;
    return;
L_08B0DE04:
    ctx.pc = 0x08B0DE04u;
    return;
L_08B0DE0C:
    ctx.pc = 0x08B0DE0Cu;
    return;
L_08B0DE14:
    ctx.pc = 0x08B0DE14u;
    return;
L_08B0DE1C:
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08B0DE24:
    ctx.pc = 0x08B0DE24u;
    return;
L_08B0DE2C:
    ctx.pc = 0x08B0DE2Cu;
    return;
L_08B0DE34:
    ctx.pc = 0x08B0DE34u;
    return;
L_08B0DE3C:
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08B0DE44:
    ctx.pc = 0x08B0DE44u;
    return;
L_08B0DE4C:
    ctx.pc = 0x08B0DE4Cu;
    return;
L_08B0DE54:
    ctx.pc = 0x08B0DE54u;
    return;
L_08B0DE5C:
    ctx.pc = 0x08B0DE5Cu;
    return;
L_08B0DE64:
    ctx.pc = 0x08B0DE64u;
    return;
L_08B0DE6C:
    ctx.pc = 0x08B0DE6Cu;
    return;
L_08B0DE74:
    ctx.pc = 0x08B0DE74u;
    return;
L_08B0DE7C:
    ctx.pc = 0x08B0DE7Cu;
    return;
L_08B0DE84:
    ctx.pc = 0x08B0DE84u;
    return;
L_08B0DE8C:
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08B0DE94:
    ctx.pc = 0x08B0DE94u;
    return;
L_08B0DE9C:
    ctx.pc = 0x08B0DE9Cu;
    return;
L_08B0DEA4:
    ctx.pc = 0x08B0DEA4u;
    return;
L_08B0DEAC:
    ctx.pc = 0x08B0DEACu;
    return;
L_08B0DEB4:
    ctx.pc = 0x08B0DEB4u;
    return;
L_08B0DEBC:
    ctx.pc = 0x08B0DEBCu;
    return;
L_08B0DEC4:
    ctx.pc = 0x08B0DEC4u;
    return;
L_08B0DECC:
    ctx.pc = 0x08B0DECCu;
    return;
L_08B0DED4:
    ctx.pc = 0x08B0DED4u;
    return;
L_08B0DEDC:
    ctx.pc = 0x08B0DEDCu;
    return;
L_08B0DEE4:
    ctx.pc = 0x08B0DEE4u;
    return;
L_08B0DEEC:
    ctx.pc = 0x08B0DEECu;
    return;
L_08B0DEF4:
    ctx.pc = 0x08B0DEF4u;
    return;
L_08B0DEFC:
    ctx.pc = 0x08B0DEFCu;
    return;
L_08B0DF04:
    ctx.pc = 0x08B0DF04u;
    return;
L_08B0DF0C:
    ctx.pc = 0x08B0DF0Cu;
    return;
L_08B0DF14:
    ctx.pc = 0x08B0DF14u;
    return;
L_08B0DF1C:
    ctx.pc = 0x08B0DF1Cu;
    return;
L_08B0DF24:
    ctx.pc = 0x08B0DF24u;
    return;
L_08B0DF2C:
    ctx.pc = 0x08B0DF2Cu;
    return;
L_08B0DF34:
    ctx.pc = 0x08B0DF34u;
    return;
L_08B0DF3C:
    ctx.pc = 0x08B0DF3Cu;
    return;
L_08B0DF44:
    ctx.pc = 0x08B0DF44u;
    return;
L_08B0DF4C:
    ctx.pc = 0x08B0DF4Cu;
    return;
L_08B0DF54:
    ctx.pc = 0x08B0DF54u;
    return;
L_08B0DF5C:
    ctx.pc = 0x08B0DF5Cu;
    return;
L_08B0DF64:
    ctx.pc = 0x08B0DF64u;
    return;
L_08B0DF6C:
    ctx.pc = 0x08B0DF6Cu;
    return;
L_08B0DF74:
    ctx.pc = 0x08B0DF74u;
    return;
L_08B0DF7C:
    ctx.pc = 0x08B0DF7Cu;
    return;
L_08B0DF84:
    ctx.pc = 0x08B0DF84u;
    return;
L_08B0DF8C:
    ctx.pc = 0x08B0DF8Cu;
    return;
L_08B0DF94:
    ctx.pc = 0x08B0DF94u;
    return;
L_08B0DF9C:
    ctx.pc = 0x08B0DF9Cu;
    return;
L_08B0DFA4:
    ctx.pc = 0x08B0DFA4u;
    return;
L_08B0DFAC:
    ctx.pc = 0x08B0DFACu;
    return;
L_08B0DFB4:
    ctx.pc = 0x08B0DFB4u;
    return;
L_08B0DFBC:
    ctx.pc = 0x08B0DFBCu;
    return;
L_08B0DFC4:
    ctx.pc = 0x08B0DFC4u;
    return;
L_08B0DFCC:
    ctx.pc = 0x08B0DFCCu;
    return;
L_08B0DFD4:
    ctx.pc = 0x08B0DFD4u;
    return;
L_08B0DFDC:
    ctx.pc = 0x08B0DFDCu;
    return;
L_08B0DFE4:
    ctx.pc = 0x08B0DFE4u;
    return;
L_08B0DFEC:
    ctx.pc = 0x08B0DFECu;
    return;
L_08B0DFF4:
    ctx.pc = 0x08B0DFF4u;
    return;
L_08B0DFFC:
    ctx.pc = 0x08B0DFFCu;
    return;
L_08B0E004:
    ctx.pc = 0x08B0E004u;
    return;
L_08B0E00C:
    ctx.pc = 0x08B0E00Cu;
    return;
L_08B0E014:
    ctx.pc = 0x08B0E014u;
    return;
L_08B0E01C:
    ctx.pc = 0x08B0E01Cu;
    return;
L_08B0E024:
    ctx.pc = 0x08B0E024u;
    return;
L_08B0E02C:
    ctx.pc = 0x08B0E02Cu;
    return;
L_08B0E034:
    ctx.pc = 0x08B0E034u;
    return;
L_08B0E03C:
    ctx.pc = 0x08B0E03Cu;
    return;
L_08B0E044:
    ctx.pc = 0x08B0E044u;
    return;
L_08B0E04C:
    ctx.pc = 0x08B0E04Cu;
    return;
L_08B0E054:
    ctx.pc = 0x08B0E054u;
    return;
L_08B0E05C:
    ctx.pc = 0x08B0E05Cu;
    return;
L_08B0E064:
    ctx.pc = 0x08B0E064u;
    return;
L_08B0E06C:
    ctx.pc = 0x08B0E06Cu;
    return;
L_08B0E074:
    ctx.pc = 0x08B0E074u;
    return;
L_08B0E07C:
    ctx.pc = 0x08B0E07Cu;
    return;
L_08B0E084:
    ctx.pc = 0x08B0E084u;
    return;
L_08B0E08C:
    ctx.pc = 0x08B0E08Cu;
    return;
L_08B0E094:
    ctx.pc = 0x08B0E094u;
    return;
L_08B0E09C:
    ctx.pc = 0x08B0E09Cu;
    return;
L_08B0E0A4:
    ctx.pc = 0x08B0E0A4u;
    return;
L_08B0E0AC:
    ctx.pc = 0x08B0E0ACu;
    return;
L_08B0E0B4:
    ctx.pc = 0x08B0E0B4u;
    return;
L_08B0E0BC:
    ctx.pc = 0x08B0E0BCu;
    return;
L_08B0E0C4:
    ctx.pc = 0x08B0E0C4u;
    return;
L_08B0E0CC:
    ctx.pc = 0x08B0E0CCu;
    return;
L_08B0E0D4:
    ctx.pc = 0x08B0E0D4u;
    return;
L_08B0E0DC:
    ctx.pc = 0x08B0E0DCu;
    return;
L_08B0E0E4:
    ctx.pc = 0x08B0E0E4u;
    return;
L_08B0E0EC:
    ctx.pc = 0x08B0E0ECu;
    return;
L_08B0E0F4:
    ctx.pc = 0x08B0E0F4u;
    return;
L_08B0E0FC:
    ctx.pc = 0x08B0E0FCu;
    return;
L_08B0E104:
    ctx.pc = 0x08B0E104u;
    return;
L_08B0E10C:
    ctx.pc = 0x08B0E10Cu;
    return;
L_08B0E114:
    ctx.pc = 0x08B0E114u;
    return;
L_08B0E11C:
    ctx.pc = 0x08B0E11Cu;
    return;
L_08B0E124:
    ctx.pc = 0x08B0E124u;
    return;
L_08B0E12C:
    ctx.pc = 0x08B0E12Cu;
    return;
L_08B0E134:
    ctx.pc = 0x08B0E134u;
    return;
L_08B0E13C:
    ctx.pc = 0x08B0E13Cu;
    return;
L_08B0E144:
    ctx.pc = 0x08B0E144u;
    return;
L_08B0E14C:
    ctx.pc = 0x08B0E14Cu;
    return;
L_08B0E154:
    ctx.pc = 0x08B0E154u;
    return;
L_08B0E15C:
    ctx.pc = 0x08B0E15Cu;
    return;
L_08B0E164:
    ctx.pc = 0x08B0E164u;
    return;
L_08B0E16C:
    ctx.pc = 0x08B0E16Cu;
    return;
L_08B0E174:
    ctx.pc = 0x08B0E174u;
    return;
L_08B0E17C:
    ctx.pc = 0x08B0E17Cu;
    return;
L_08B0E184:
    ctx.pc = 0x08B0E184u;
    return;
L_08B0E18C:
    ctx.pc = 0x08B0E18Cu;
    return;
L_08B0E194:
    ctx.pc = 0x08B0E194u;
    return;
L_08B0E19C:
    ctx.pc = 0x08B0E19Cu;
    return;
L_08B0E1A4:
    ctx.pc = 0x08B0E1A4u;
    return;
L_08B0E1AC:
    ctx.pc = 0x08B0E1ACu;
    return;
L_08B0E1B4:
    ctx.pc = 0x08B0E1B4u;
    return;
L_08B0E1BC:
    ctx.pc = 0x08B0E1BCu;
    return;
L_08B0E1C4:
    ctx.pc = 0x08B0E1C4u;
    return;
L_08B0E1CC:
    ctx.pc = 0x08B0E1CCu;
    return;
L_08B0E1D4:
    ctx.pc = 0x08B0E1D4u;
    return;
L_08B0E1DC:
    ctx.pc = 0x08B0E1DCu;
    return;
L_08B0E1E4:
    ctx.pc = 0x08B0E1E4u;
    return;
L_08B0E1EC:
    ctx.pc = 0x08B0E1ECu;
    return;
L_08B0E1F4:
    ctx.pc = 0x08B0E1F4u;
    return;
L_08B0E1FC:
    ctx.pc = 0x08B0E1FCu;
    return;
L_08B0E204:
    ctx.pc = 0x08B0E204u;
    return;
L_08B0E20C:
    ctx.pc = 0x08B0E20Cu;
    return;
L_08B0E214:
    ctx.pc = 0x08B0E214u;
    return;
L_08B0E21C:
    ctx.pc = 0x08B0E21Cu;
    return;
L_08B0E224:
    ctx.pc = 0x08B0E224u;
    return;
L_08B0E22C:
    ctx.pc = 0x08B0E22Cu;
    return;
L_08B0E234:
    ctx.pc = 0x08B0E234u;
    return;
L_08B0E23C:
    ctx.pc = 0x08B0E23Cu;
    return;
L_08B0E244:
    ctx.pc = 0x08B0E244u;
    return;
L_08B0E24C:
    ctx.pc = 0x08B0E24Cu;
    return;
L_08B0E254:
    ctx.pc = 0x08B0E254u;
    return;
L_08B0E25C:
    ctx.pc = 0x08B0E25Cu;
    return;
L_08B0E264:
    ctx.pc = 0x08B0E264u;
    return;
L_08B0E26C:
    ctx.pc = 0x08B0E26Cu;
    return;
L_08B0E274:
    ctx.pc = 0x08B0E274u;
    return;
L_08B0E27C:
    ctx.pc = 0x08B0E27Cu;
    return;
L_08B0E284:
    ctx.pc = 0x08B0E284u;
    return;
L_08B0E28C:
    ctx.pc = 0x08B0E28Cu;
    return;
L_08B0E294:
    ctx.pc = 0x08B0E294u;
    return;
L_08B0E29C:
    ctx.pc = 0x08B0E29Cu;
    return;
L_08B0E2A4:
    ctx.pc = 0x08B0E2A4u;
    return;
L_08B0E2AC:
    ctx.pc = 0x08B0E2ACu;
    return;
L_08B0E2B4:
    ctx.pc = 0x08B0E2B4u;
    return;
L_08B0E2BC:
    ctx.pc = 0x08B0E2BCu;
    return;
L_08B0E2C4:
    ctx.pc = 0x08B0E2C4u;
    return;
L_08B0E2CC:
    ctx.pc = 0x08B0E2CCu;
    return;
L_08B0E2D4:
    ctx.pc = 0x08B0E2D4u;
    return;
L_08B0E2DC:
    ctx.pc = 0x08B0E2DCu;
    return;
L_08B0E2E4:
    ctx.pc = 0x08B0E2E4u;
    return;
L_08B0E2EC:
    ctx.pc = 0x08B0E2ECu;
    return;
L_08B0E2F4:
    ctx.pc = 0x08B0E2F4u;
    return;
L_08B0E2FC:
    ctx.pc = 0x08B0E2FCu;
    return;
L_08B0E304:
    ctx.pc = 0x08B0E304u;
    return;
}

void recomp_unit_0194(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0194_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_194(Runtime &runtime) {
    runtime.register_generated_unit(194u, 0x08B0C000u, 16384u, &recomp_unit_0194, &recomp_unit_0194_entry);
    runtime.register_function(0x08B0C000u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C008u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C010u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C018u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C030u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C050u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C05Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C064u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C074u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C08Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C094u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C09Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C0F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C100u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C118u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C128u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C134u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C13Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C148u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C158u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C160u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C170u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C17Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C18Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C194u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C19Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C1F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C200u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C20Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C210u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C21Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C228u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C22Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C258u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C26Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C274u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C298u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C2FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C304u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C30Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C314u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C320u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C32Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C334u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C33Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C344u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C34Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C354u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C35Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C36Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C37Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C388u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C390u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C3FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C428u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C43Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C448u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C450u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C458u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C478u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C48Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C4FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C518u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C51Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C528u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C530u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C534u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C540u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C54Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C558u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C568u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C570u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C578u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C588u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C58Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C598u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5A8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C5F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C600u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C604u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C610u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C620u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C640u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C648u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C664u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C668u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C67Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C69Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C6F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C73Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C754u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C758u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C774u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C77Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C788u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C798u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C7FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C828u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C83Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C844u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C84Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C854u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C85Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C868u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C870u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C878u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C880u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C884u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C894u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C8F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C900u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C910u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C91Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C928u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C934u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C93Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C944u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C94Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C95Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C964u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C98Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C994u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C99Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0C9E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA10u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CA7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CAD8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CB98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CBE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC00u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC50u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CC68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CCECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD18u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD20u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD38u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD60u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD68u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CD9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDB8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDC0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CDD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE08u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE40u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE48u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CE74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CEF0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF30u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF88u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CF98u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFC8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFD0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0CFF8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D004u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D010u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D02Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D040u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D048u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D068u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D07Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D090u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D09Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0E8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D0F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D114u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D144u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D164u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D170u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D178u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D26Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D278u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D280u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D2F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D314u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D330u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D338u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D348u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D35Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D364u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D380u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D388u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D398u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3E0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D3F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D42Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D44Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D458u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D464u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D468u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D474u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D480u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D48Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D498u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D4D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D504u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D50Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D510u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D518u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D520u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D52Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D530u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D54Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D580u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D588u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D594u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5B8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D5F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D614u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D620u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D63Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D644u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D64Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D654u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D668u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D68Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D694u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6C0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D6D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D708u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D718u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D720u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D728u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D738u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D740u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D748u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D754u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D760u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D770u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D778u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D780u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D790u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D798u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D7F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D800u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D80Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D818u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D838u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D848u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D86Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D87Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D88Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8A0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8C8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8D0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8F0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D8FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D934u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D944u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D954u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D968u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D970u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D988u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D99Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9B0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9D8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0D9F8u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA58u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA80u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DA8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAA0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAB0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DACCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAE0u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DAF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB28u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB70u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB78u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DB90u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DBFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DC9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DCFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DD9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DDFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DE9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DECCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DED4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DEFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF04u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF0Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF14u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF1Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF24u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF2Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF34u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF3Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF44u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF4Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF54u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF5Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF64u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF6Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF74u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF7Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF84u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF8Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF94u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DF9Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFA4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFB4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFBCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFC4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFCCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFD4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFDCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFE4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFF4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0DFFCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E004u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E00Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E014u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E01Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E024u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E02Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E034u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E03Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E044u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E04Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E054u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E05Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E064u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E06Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E074u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E07Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E084u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E08Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E094u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E09Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E0FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E104u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E10Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E114u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E11Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E124u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E12Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E134u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E13Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E144u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E14Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E154u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E15Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E164u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E16Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E174u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E17Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E184u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E18Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E194u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E19Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E1FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E204u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E20Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E214u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E21Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E224u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E22Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E234u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E23Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E244u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E24Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E254u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E25Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E264u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E26Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E274u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E27Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E284u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E28Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E294u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E29Cu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2A4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2ACu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2B4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2BCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2C4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2CCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2D4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2DCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2E4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2ECu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2F4u, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E2FCu, &recomp_unit_0194, "recomp_unit_0194");
    runtime.register_function(0x08B0E304u, &recomp_unit_0194, "recomp_unit_0194");
}
} // namespace psprecomp
