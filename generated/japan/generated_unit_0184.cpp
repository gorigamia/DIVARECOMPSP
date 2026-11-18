#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0184[4095] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 0, 0,
    8, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0,
    25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0,
    0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 51, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 61, 0, 62,
    0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 72, 0,
    0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0,
    81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 91, 92, 93, 0, 0, 94, 0, 95,
    0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 103, 104, 105, 0, 106, 0, 0,
    0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117,
    0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 0, 0, 0, 126, 127, 0, 0, 128,
    0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145,
    0, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0,
    157, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 167,
    0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174,
    0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 0, 184, 0, 0, 185, 0,
    186, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 190, 191, 0, 192, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 209,
    0, 210, 0, 0, 0, 211, 212, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222,
    0, 0, 0, 0, 0, 0, 223, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0,
    232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 242,
    0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0,
    0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 259, 260, 0, 261, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 0,
    0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0,
    0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 295,
    0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0,
    0, 0, 302, 0, 303, 0, 304, 0, 0, 305, 306, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0,
    311, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0,
    0, 321, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333,
    0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0,
    0, 0, 345, 346, 0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 356,
    0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0,
    372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0,
    0, 383, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0,
    0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410,
    0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0,
    421, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431,
    0, 432, 0, 433, 0, 0, 0, 0, 434, 435, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0,
    0, 0, 443, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 456, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 466,
    0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0,
    476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 482, 0, 0, 483, 0, 484, 0,
    0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0,
    0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499,
    0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 506,
    0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515,
    0, 516, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0,
    0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 537,
    0, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 0, 0, 548, 0, 549,
    0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 557, 0, 558, 559, 0, 0, 0, 560,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0,
    0, 570, 0, 571, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0,
    0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585,
    0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 589, 590, 0, 591, 0, 0, 592, 593, 0, 594, 0, 595, 0, 0,
    596, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 603, 0, 0,
    0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 610, 611, 0, 612, 0, 0, 0, 0, 0,
    0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 618, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 622,
    0, 623, 0, 0, 0, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 633, 0, 0, 634, 0,
    635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 0, 0,
    646, 0, 647, 0, 648, 649, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 654, 0, 655, 0, 0, 656, 0, 0,
    657, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 666, 667, 0, 0, 668,
    0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0,
    0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 676, 0, 677, 0,
    678, 0, 679, 680, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 685, 686, 0, 687, 0, 688, 0, 689, 690, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 696,
    0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0,
    703, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 710, 0, 0,
    0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0,
    0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 0, 0,
    0, 727, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0,
    0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 749, 750, 751, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 0, 0, 0, 757, 0, 758, 0, 0, 0,
    759, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 778, 0, 0, 779, 780, 0, 781, 782, 0, 0, 0, 0, 0, 0, 0, 783,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 792,
    0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 795, 0, 0, 796, 0, 0, 0, 0, 797, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 801, 0, 802,
    0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0,
    811, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0,
    0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 825, 0, 826, 0,
    0, 0, 0, 827, 0, 828, 0, 829, 0, 830, 0, 0, 0, 831, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 0, 0, 0,
    0, 838, 0, 839, 0, 840, 0, 0, 0, 841, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0,
    848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0,
    860, 0, 0, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0,
    866, 0, 867, 0, 0, 868, 0, 869, 0, 0, 0, 0, 870, 0, 0, 871, 0, 872, 0, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 876,
    0, 877, 878, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 881, 0, 882, 0, 0, 0, 883, 0, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0,
    0, 888, 0, 0, 0, 0, 889, 0, 890, 0, 891, 0, 892, 0, 0, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 0, 898, 0,
    899, 0, 900, 0, 0, 0, 901, 0, 902, 0, 903, 0, 0, 904, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 908, 0, 0, 909, 0, 0, 0, 0,
    0, 0, 910, 0, 0, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 0, 0, 0, 0,
    0, 0, 922, 0, 923, 0, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 0, 0, 926, 0, 0, 0, 0, 0, 927, 0, 0, 0, 928, 0,
    929, 0, 0, 930, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 932, 0, 933, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 934, 935, 0, 936, 0, 0, 0, 937, 0, 0, 938, 0, 939, 0, 0, 0, 940, 0, 0, 941, 0, 942, 0, 0,
    943, 0, 944, 0, 0, 945, 0, 0, 0, 0, 946, 0, 947, 0, 0, 0, 0, 0, 948, 0, 949, 0, 0, 0, 950, 0, 951, 0, 952, 0, 953, 0,
    954, 0, 0, 0, 0, 0, 0, 0, 955, 0, 956, 0, 957, 0, 0, 0, 958, 0, 959, 0, 960, 0, 0, 961, 0, 0, 962, 0, 963, 0, 964, 0,
    0, 965, 0, 966, 0, 0, 0, 967, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0, 969, 0, 0, 970, 0, 0, 971, 0, 972, 0, 973, 0, 974, 0,
    975, 0, 976, 0, 977, 0, 978, 0, 979, 0, 980, 0, 981, 0, 0, 0, 0, 0, 0, 982, 0, 983, 0, 0, 0, 0, 0, 0, 984, 0, 985, 0,
    0, 0, 0, 0, 986, 0, 0, 987, 0, 0, 0, 0, 0, 0, 988, 0, 989, 0, 990, 0, 0, 0, 0, 0, 0, 0, 0, 0, 991, 0, 0, 992,
    0, 993, 0, 0, 0, 994, 0, 0, 995, 0, 996, 0, 0, 997, 0, 998, 0, 0, 0, 999, 0, 0, 1000, 0, 0, 0, 0, 0, 1001, 0, 1002, 0,
    0, 1003, 0, 0, 0, 0, 0, 0, 1004, 0, 1005, 0, 0, 1006, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 1009, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1010, 0, 1011, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1012, 0, 1013, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014, 0, 1015, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1016, 0,
    1017, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1018, 0, 0, 0, 0, 0, 0, 0, 1019, 0, 0, 0, 0, 1020, 0, 0, 0, 0,
    0, 1021, 0, 0, 0, 0, 1022, 0, 1023, 0, 0, 0, 0, 1024, 0, 1025, 0, 0, 0, 1026, 0, 1027, 0, 0, 0, 1028, 0, 1029, 0, 1030, 0, 1031,
    0, 1032, 0, 0, 0, 0, 0, 1033, 0, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 1041, 0, 1042, 0, 1043, 0, 0, 0,
    1044, 0, 1045, 0, 0, 1046, 0, 0, 1047, 0, 1048, 0, 1049, 0, 0, 0, 1050, 1051, 0, 1052, 0, 0, 0, 1053, 0, 1054, 0, 0, 0, 1055, 0, 1056,
    0, 0, 0, 1057, 0, 1058, 0, 0, 1059, 0, 0, 0, 0, 0, 0, 0, 1060, 0, 0, 0, 1061, 0, 1062, 0, 1063, 0, 0, 0, 1064, 0, 0, 1065,
    0, 1066, 0, 0, 1067, 0, 0, 0, 0, 1068, 0, 1069, 0, 0, 0, 0, 1070, 0, 0, 1071, 0, 1072, 0, 1073, 0, 0, 1074, 0, 1075, 0, 1076, 0,
    0, 0, 1077, 0, 1078, 0, 1079, 0, 0, 1080, 0, 1081, 0, 1082, 0, 1083, 0, 1084, 0, 0, 0, 1085, 0, 0, 0, 1086, 0, 0, 0, 0, 0, 0,
    1087, 0, 1088, 0, 1089, 0, 0, 0, 1090, 0, 0, 0, 0, 0, 0, 0, 1091, 0, 1092, 0, 0, 0, 1093, 0, 0, 0, 1094, 1095, 0, 0, 1096, 0,
    1097, 0, 0, 0, 1098, 0, 0, 1099, 0, 1100, 0, 0, 0, 1101, 0, 0, 1102, 0, 1103, 0, 0, 1104, 0, 1105, 0, 0, 0, 0, 1106, 0, 1107, 0,
    1108, 0, 0, 1109, 0, 0, 1110, 0, 0, 1111, 0, 1112, 0, 0, 0, 1113, 0, 0, 0, 0, 1114, 0, 0, 1115, 0, 0, 1116, 0, 0, 0, 0, 0,
    1117, 0, 0, 1118, 0, 0, 0, 0, 1119, 0, 0, 0, 1120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1121, 0, 0, 0, 0, 0, 0, 1122, 0, 1123, 0, 0, 1124, 0, 1125, 0, 1126, 0, 1127, 0, 0, 1128, 0, 0, 1129, 0, 0, 1130,
    0, 1131, 1132, 0, 0, 0, 1133, 0, 1134, 0, 0, 1135, 0, 0, 1136, 0, 0, 1137, 0, 1138, 0, 1139, 1140, 1141, 0, 1142, 0, 0, 1143, 0, 0, 0,
    1144, 0, 0, 0, 1145, 0, 1146, 0, 1147, 0, 0, 0, 1148, 0, 0, 0, 1149, 1150, 0, 1151, 0, 0, 1152, 0, 0, 1153, 0, 0, 0, 1154, 0, 1155,
    0, 1156, 0, 0, 1157, 0, 0, 1158, 0, 0, 1159, 0, 1160, 0, 0, 1161, 0, 0, 0, 0, 0, 1162, 0, 1163, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1164, 0, 0, 1165, 0, 1166, 0, 0, 1167, 0, 0, 0, 1168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1169, 0, 1170,
};
void recomp_unit_0184_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0184[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE4000;
    case 2u: goto L_08AE4008;
    case 3u: goto L_08AE4010;
    case 4u: goto L_08AE4030;
    case 5u: goto L_08AE4038;
    case 6u: goto L_08AE4058;
    case 7u: goto L_08AE4060;
    case 8u: goto L_08AE4080;
    case 9u: goto L_08AE408C;
    case 10u: goto L_08AE40A4;
    case 11u: goto L_08AE40B8;
    case 12u: goto L_08AE40D0;
    case 13u: goto L_08AE40D8;
    case 14u: goto L_08AE40E4;
    case 15u: goto L_08AE40EC;
    case 16u: goto L_08AE40F4;
    case 17u: goto L_08AE40FC;
    case 18u: goto L_08AE411C;
    case 19u: goto L_08AE4124;
    case 20u: goto L_08AE4138;
    case 21u: goto L_08AE4140;
    case 22u: goto L_08AE4154;
    case 23u: goto L_08AE416C;
    case 24u: goto L_08AE4174;
    case 25u: goto L_08AE4180;
    case 26u: goto L_08AE4188;
    case 27u: goto L_08AE4190;
    case 28u: goto L_08AE4198;
    case 29u: goto L_08AE41A0;
    case 30u: goto L_08AE41C0;
    case 31u: goto L_08AE41C8;
    case 32u: goto L_08AE41DC;
    case 33u: goto L_08AE41E4;
    case 34u: goto L_08AE41F8;
    case 35u: goto L_08AE4210;
    case 36u: goto L_08AE421C;
    case 37u: goto L_08AE4228;
    case 38u: goto L_08AE4230;
    case 39u: goto L_08AE4244;
    case 40u: goto L_08AE424C;
    case 41u: goto L_08AE4254;
    case 42u: goto L_08AE4268;
    case 43u: goto L_08AE4270;
    case 44u: goto L_08AE4290;
    case 45u: goto L_08AE4298;
    case 46u: goto L_08AE42B8;
    case 47u: goto L_08AE42C0;
    case 48u: goto L_08AE42E0;
    case 49u: goto L_08AE42E8;
    case 50u: goto L_08AE4300;
    case 51u: goto L_08AE4314;
    case 52u: goto L_08AE4318;
    case 53u: goto L_08AE4320;
    case 54u: goto L_08AE432C;
    case 55u: goto L_08AE4334;
    case 56u: goto L_08AE4350;
    case 57u: goto L_08AE4354;
    case 58u: goto L_08AE4370;
    case 59u: goto L_08AE43E8;
    case 60u: goto L_08AE43EC;
    case 61u: goto L_08AE43F4;
    case 62u: goto L_08AE43FC;
    case 63u: goto L_08AE4404;
    case 64u: goto L_08AE440C;
    case 65u: goto L_08AE4424;
    case 66u: goto L_08AE442C;
    case 67u: goto L_08AE4434;
    case 68u: goto L_08AE443C;
    case 69u: goto L_08AE4450;
    case 70u: goto L_08AE4458;
    case 71u: goto L_08AE4470;
    case 72u: goto L_08AE4478;
    case 73u: goto L_08AE4490;
    case 74u: goto L_08AE44A8;
    case 75u: goto L_08AE44C8;
    case 76u: goto L_08AE44D0;
    case 77u: goto L_08AE44D8;
    case 78u: goto L_08AE44E0;
    case 79u: goto L_08AE44E8;
    case 80u: goto L_08AE44F8;
    case 81u: goto L_08AE4500;
    case 82u: goto L_08AE4508;
    case 83u: goto L_08AE4510;
    case 84u: goto L_08AE4518;
    case 85u: goto L_08AE4520;
    case 86u: goto L_08AE4530;
    case 87u: goto L_08AE4538;
    case 88u: goto L_08AE4540;
    case 89u: goto L_08AE4548;
    case 90u: goto L_08AE4550;
    case 91u: goto L_08AE4560;
    case 92u: goto L_08AE4564;
    case 93u: goto L_08AE4568;
    case 94u: goto L_08AE4574;
    case 95u: goto L_08AE457C;
    case 96u: goto L_08AE4584;
    case 97u: goto L_08AE458C;
    case 98u: goto L_08AE45A8;
    case 99u: goto L_08AE45B0;
    case 100u: goto L_08AE45B8;
    case 101u: goto L_08AE45C0;
    case 102u: goto L_08AE45C8;
    case 103u: goto L_08AE45E4;
    case 104u: goto L_08AE45E8;
    case 105u: goto L_08AE45EC;
    case 106u: goto L_08AE45F4;
    case 107u: goto L_08AE4608;
    case 108u: goto L_08AE4614;
    case 109u: goto L_08AE461C;
    case 110u: goto L_08AE4630;
    case 111u: goto L_08AE4638;
    case 112u: goto L_08AE464C;
    case 113u: goto L_08AE4654;
    case 114u: goto L_08AE4660;
    case 115u: goto L_08AE4668;
    case 116u: goto L_08AE4670;
    case 117u: goto L_08AE467C;
    case 118u: goto L_08AE4684;
    case 119u: goto L_08AE468C;
    case 120u: goto L_08AE46A0;
    case 121u: goto L_08AE46AC;
    case 122u: goto L_08AE46B4;
    case 123u: goto L_08AE46C8;
    case 124u: goto L_08AE46D0;
    case 125u: goto L_08AE46D8;
    case 126u: goto L_08AE46EC;
    case 127u: goto L_08AE46F0;
    case 128u: goto L_08AE46FC;
    case 129u: goto L_08AE4714;
    case 130u: goto L_08AE471C;
    case 131u: goto L_08AE4730;
    case 132u: goto L_08AE473C;
    case 133u: goto L_08AE4744;
    case 134u: goto L_08AE4750;
    case 135u: goto L_08AE4758;
    case 136u: goto L_08AE4760;
    case 137u: goto L_08AE4774;
    case 138u: goto L_08AE477C;
    case 139u: goto L_08AE479C;
    case 140u: goto L_08AE47A4;
    case 141u: goto L_08AE47C4;
    case 142u: goto L_08AE47CC;
    case 143u: goto L_08AE47EC;
    case 144u: goto L_08AE47F4;
    case 145u: goto L_08AE47FC;
    case 146u: goto L_08AE4808;
    case 147u: goto L_08AE4810;
    case 148u: goto L_08AE4818;
    case 149u: goto L_08AE4824;
    case 150u: goto L_08AE482C;
    case 151u: goto L_08AE4834;
    case 152u: goto L_08AE4848;
    case 153u: goto L_08AE4858;
    case 154u: goto L_08AE4860;
    case 155u: goto L_08AE4870;
    case 156u: goto L_08AE4878;
    case 157u: goto L_08AE4880;
    case 158u: goto L_08AE488C;
    case 159u: goto L_08AE4894;
    case 160u: goto L_08AE489C;
    case 161u: goto L_08AE48B0;
    case 162u: goto L_08AE48BC;
    case 163u: goto L_08AE48C4;
    case 164u: goto L_08AE48D8;
    case 165u: goto L_08AE48E0;
    case 166u: goto L_08AE48E8;
    case 167u: goto L_08AE48FC;
    case 168u: goto L_08AE4904;
    case 169u: goto L_08AE4924;
    case 170u: goto L_08AE492C;
    case 171u: goto L_08AE494C;
    case 172u: goto L_08AE4954;
    case 173u: goto L_08AE4974;
    case 174u: goto L_08AE497C;
    case 175u: goto L_08AE4984;
    case 176u: goto L_08AE4990;
    case 177u: goto L_08AE4998;
    case 178u: goto L_08AE49AC;
    case 179u: goto L_08AE49B4;
    case 180u: goto L_08AE49BC;
    case 181u: goto L_08AE49C8;
    case 182u: goto L_08AE49D0;
    case 183u: goto L_08AE49D8;
    case 184u: goto L_08AE49EC;
    case 185u: goto L_08AE49F8;
    case 186u: goto L_08AE4A00;
    case 187u: goto L_08AE4A14;
    case 188u: goto L_08AE4A1C;
    case 189u: goto L_08AE4A24;
    case 190u: goto L_08AE4A38;
    case 191u: goto L_08AE4A3C;
    case 192u: goto L_08AE4A44;
    case 193u: goto L_08AE4A48;
    case 194u: goto L_08AE4A5C;
    case 195u: goto L_08AE4A7C;
    case 196u: goto L_08AE4A84;
    case 197u: goto L_08AE4A8C;
    case 198u: goto L_08AE4A94;
    case 199u: goto L_08AE4A9C;
    case 200u: goto L_08AE4AAC;
    case 201u: goto L_08AE4AB4;
    case 202u: goto L_08AE4ABC;
    case 203u: goto L_08AE4AC4;
    case 204u: goto L_08AE4ACC;
    case 205u: goto L_08AE4AD4;
    case 206u: goto L_08AE4AE4;
    case 207u: goto L_08AE4AEC;
    case 208u: goto L_08AE4AF4;
    case 209u: goto L_08AE4AFC;
    case 210u: goto L_08AE4B04;
    case 211u: goto L_08AE4B14;
    case 212u: goto L_08AE4B18;
    case 213u: goto L_08AE4B1C;
    case 214u: goto L_08AE4B28;
    case 215u: goto L_08AE4B30;
    case 216u: goto L_08AE4B38;
    case 217u: goto L_08AE4B40;
    case 218u: goto L_08AE4B5C;
    case 219u: goto L_08AE4B64;
    case 220u: goto L_08AE4B6C;
    case 221u: goto L_08AE4B74;
    case 222u: goto L_08AE4B7C;
    case 223u: goto L_08AE4B98;
    case 224u: goto L_08AE4B9C;
    case 225u: goto L_08AE4BA4;
    case 226u: goto L_08AE4BAC;
    case 227u: goto L_08AE4BB4;
    case 228u: goto L_08AE4BC8;
    case 229u: goto L_08AE4BD0;
    case 230u: goto L_08AE4BE4;
    case 231u: goto L_08AE4BEC;
    case 232u: goto L_08AE4C00;
    case 233u: goto L_08AE4C08;
    case 234u: goto L_08AE4C1C;
    case 235u: goto L_08AE4C24;
    case 236u: goto L_08AE4C38;
    case 237u: goto L_08AE4C40;
    case 238u: goto L_08AE4C4C;
    case 239u: goto L_08AE4C54;
    case 240u: goto L_08AE4C5C;
    case 241u: goto L_08AE4C70;
    case 242u: goto L_08AE4C7C;
    case 243u: goto L_08AE4C84;
    case 244u: goto L_08AE4C90;
    case 245u: goto L_08AE4C98;
    case 246u: goto L_08AE4CA0;
    case 247u: goto L_08AE4CB4;
    case 248u: goto L_08AE4CC0;
    case 249u: goto L_08AE4CC8;
    case 250u: goto L_08AE4CD4;
    case 251u: goto L_08AE4CDC;
    case 252u: goto L_08AE4CE4;
    case 253u: goto L_08AE4CF8;
    case 254u: goto L_08AE4D04;
    case 255u: goto L_08AE4D0C;
    case 256u: goto L_08AE4D20;
    case 257u: goto L_08AE4D28;
    case 258u: goto L_08AE4D30;
    case 259u: goto L_08AE4D44;
    case 260u: goto L_08AE4D48;
    case 261u: goto L_08AE4D50;
    case 262u: goto L_08AE4D58;
    case 263u: goto L_08AE4D64;
    case 264u: goto L_08AE4D6C;
    case 265u: goto L_08AE4D74;
    case 266u: goto L_08AE4D88;
    case 267u: goto L_08AE4D90;
    case 268u: goto L_08AE4DB0;
    case 269u: goto L_08AE4DB8;
    case 270u: goto L_08AE4DD8;
    case 271u: goto L_08AE4DE0;
    case 272u: goto L_08AE4E00;
    case 273u: goto L_08AE4E08;
    case 274u: goto L_08AE4E10;
    case 275u: goto L_08AE4E1C;
    case 276u: goto L_08AE4E24;
    case 277u: goto L_08AE4E2C;
    case 278u: goto L_08AE4E38;
    case 279u: goto L_08AE4E40;
    case 280u: goto L_08AE4E48;
    case 281u: goto L_08AE4E5C;
    case 282u: goto L_08AE4E6C;
    case 283u: goto L_08AE4E74;
    case 284u: goto L_08AE4E84;
    case 285u: goto L_08AE4E8C;
    case 286u: goto L_08AE4E94;
    case 287u: goto L_08AE4EA0;
    case 288u: goto L_08AE4EA8;
    case 289u: goto L_08AE4EB0;
    case 290u: goto L_08AE4EC4;
    case 291u: goto L_08AE4ED0;
    case 292u: goto L_08AE4ED8;
    case 293u: goto L_08AE4EEC;
    case 294u: goto L_08AE4EF4;
    case 295u: goto L_08AE4EFC;
    case 296u: goto L_08AE4F10;
    case 297u: goto L_08AE4F18;
    case 298u: goto L_08AE4F38;
    case 299u: goto L_08AE4F40;
    case 300u: goto L_08AE4F60;
    case 301u: goto L_08AE4F68;
    case 302u: goto L_08AE4F88;
    case 303u: goto L_08AE4F90;
    case 304u: goto L_08AE4F98;
    case 305u: goto L_08AE4FA4;
    case 306u: goto L_08AE4FA8;
    case 307u: goto L_08AE4FBC;
    case 308u: goto L_08AE4FD0;
    case 309u: goto L_08AE4FE4;
    case 310u: goto L_08AE4FEC;
    case 311u: goto L_08AE5000;
    case 312u: goto L_08AE5008;
    case 313u: goto L_08AE501C;
    case 314u: goto L_08AE5024;
    case 315u: goto L_08AE5038;
    case 316u: goto L_08AE5044;
    case 317u: goto L_08AE504C;
    case 318u: goto L_08AE5060;
    case 319u: goto L_08AE5068;
    case 320u: goto L_08AE5070;
    case 321u: goto L_08AE5084;
    case 322u: goto L_08AE5088;
    case 323u: goto L_08AE5090;
    case 324u: goto L_08AE5098;
    case 325u: goto L_08AE50A0;
    case 326u: goto L_08AE50A8;
    case 327u: goto L_08AE50B0;
    case 328u: goto L_08AE50D0;
    case 329u: goto L_08AE50DC;
    case 330u: goto L_08AE50E4;
    case 331u: goto L_08AE50EC;
    case 332u: goto L_08AE50F4;
    case 333u: goto L_08AE50FC;
    case 334u: goto L_08AE510C;
    case 335u: goto L_08AE5118;
    case 336u: goto L_08AE5120;
    case 337u: goto L_08AE5128;
    case 338u: goto L_08AE5134;
    case 339u: goto L_08AE513C;
    case 340u: goto L_08AE5148;
    case 341u: goto L_08AE5150;
    case 342u: goto L_08AE5164;
    case 343u: goto L_08AE516C;
    case 344u: goto L_08AE5174;
    case 345u: goto L_08AE5188;
    case 346u: goto L_08AE518C;
    case 347u: goto L_08AE5194;
    case 348u: goto L_08AE51A8;
    case 349u: goto L_08AE51B0;
    case 350u: goto L_08AE51B8;
    case 351u: goto L_08AE51C4;
    case 352u: goto L_08AE51CC;
    case 353u: goto L_08AE51D4;
    case 354u: goto L_08AE51E8;
    case 355u: goto L_08AE51F4;
    case 356u: goto L_08AE51FC;
    case 357u: goto L_08AE5210;
    case 358u: goto L_08AE5218;
    case 359u: goto L_08AE5220;
    case 360u: goto L_08AE5234;
    case 361u: goto L_08AE523C;
    case 362u: goto L_08AE5250;
    case 363u: goto L_08AE5258;
    case 364u: goto L_08AE5278;
    case 365u: goto L_08AE5280;
    case 366u: goto L_08AE52A0;
    case 367u: goto L_08AE52A8;
    case 368u: goto L_08AE52C8;
    case 369u: goto L_08AE52D4;
    case 370u: goto L_08AE52DC;
    case 371u: goto L_08AE52EC;
    case 372u: goto L_08AE5300;
    case 373u: goto L_08AE5308;
    case 374u: goto L_08AE5314;
    case 375u: goto L_08AE531C;
    case 376u: goto L_08AE5328;
    case 377u: goto L_08AE5330;
    case 378u: goto L_08AE5344;
    case 379u: goto L_08AE534C;
    case 380u: goto L_08AE5354;
    case 381u: goto L_08AE5368;
    case 382u: goto L_08AE5370;
    case 383u: goto L_08AE5384;
    case 384u: goto L_08AE538C;
    case 385u: goto L_08AE53A0;
    case 386u: goto L_08AE53A8;
    case 387u: goto L_08AE53C8;
    case 388u: goto L_08AE53D0;
    case 389u: goto L_08AE53F0;
    case 390u: goto L_08AE53F8;
    case 391u: goto L_08AE5418;
    case 392u: goto L_08AE5420;
    case 393u: goto L_08AE5428;
    case 394u: goto L_08AE5434;
    case 395u: goto L_08AE5440;
    case 396u: goto L_08AE5448;
    case 397u: goto L_08AE5454;
    case 398u: goto L_08AE545C;
    case 399u: goto L_08AE5464;
    case 400u: goto L_08AE5478;
    case 401u: goto L_08AE5484;
    case 402u: goto L_08AE548C;
    case 403u: goto L_08AE54A0;
    case 404u: goto L_08AE54A8;
    case 405u: goto L_08AE54B0;
    case 406u: goto L_08AE54C4;
    case 407u: goto L_08AE54CC;
    case 408u: goto L_08AE54E0;
    case 409u: goto L_08AE54F4;
    case 410u: goto L_08AE54FC;
    case 411u: goto L_08AE5508;
    case 412u: goto L_08AE5510;
    case 413u: goto L_08AE5518;
    case 414u: goto L_08AE552C;
    case 415u: goto L_08AE5538;
    case 416u: goto L_08AE5540;
    case 417u: goto L_08AE5554;
    case 418u: goto L_08AE555C;
    case 419u: goto L_08AE5564;
    case 420u: goto L_08AE5578;
    case 421u: goto L_08AE5580;
    case 422u: goto L_08AE5594;
    case 423u: goto L_08AE559C;
    case 424u: goto L_08AE55A4;
    case 425u: goto L_08AE55B0;
    case 426u: goto L_08AE55B8;
    case 427u: goto L_08AE55C0;
    case 428u: goto L_08AE55D4;
    case 429u: goto L_08AE55E0;
    case 430u: goto L_08AE55E8;
    case 431u: goto L_08AE55FC;
    case 432u: goto L_08AE5604;
    case 433u: goto L_08AE560C;
    case 434u: goto L_08AE5620;
    case 435u: goto L_08AE5624;
    case 436u: goto L_08AE5634;
    case 437u: goto L_08AE563C;
    case 438u: goto L_08AE5648;
    case 439u: goto L_08AE5650;
    case 440u: goto L_08AE5664;
    case 441u: goto L_08AE566C;
    case 442u: goto L_08AE5674;
    case 443u: goto L_08AE5688;
    case 444u: goto L_08AE5690;
    case 445u: goto L_08AE56A4;
    case 446u: goto L_08AE56AC;
    case 447u: goto L_08AE56CC;
    case 448u: goto L_08AE56D4;
    case 449u: goto L_08AE56F4;
    case 450u: goto L_08AE56FC;
    case 451u: goto L_08AE571C;
    case 452u: goto L_08AE5728;
    case 453u: goto L_08AE5734;
    case 454u: goto L_08AE573C;
    case 455u: goto L_08AE576C;
    case 456u: goto L_08AE5770;
    case 457u: goto L_08AE5780;
    case 458u: goto L_08AE5798;
    case 459u: goto L_08AE57A0;
    case 460u: goto L_08AE57B4;
    case 461u: goto L_08AE57BC;
    case 462u: goto L_08AE57C4;
    case 463u: goto L_08AE57D8;
    case 464u: goto L_08AE57E0;
    case 465u: goto L_08AE57F4;
    case 466u: goto L_08AE57FC;
    case 467u: goto L_08AE5810;
    case 468u: goto L_08AE5818;
    case 469u: goto L_08AE582C;
    case 470u: goto L_08AE5834;
    case 471u: goto L_08AE5848;
    case 472u: goto L_08AE5858;
    case 473u: goto L_08AE5864;
    case 474u: goto L_08AE5870;
    case 475u: goto L_08AE5878;
    case 476u: goto L_08AE5880;
    case 477u: goto L_08AE5888;
    case 478u: goto L_08AE5894;
    case 479u: goto L_08AE589C;
    case 480u: goto L_08AE58CC;
    case 481u: goto L_08AE58D4;
    case 482u: goto L_08AE58E4;
    case 483u: goto L_08AE58F0;
    case 484u: goto L_08AE58F8;
    case 485u: goto L_08AE5908;
    case 486u: goto L_08AE5914;
    case 487u: goto L_08AE591C;
    case 488u: goto L_08AE592C;
    case 489u: goto L_08AE594C;
    case 490u: goto L_08AE5954;
    case 491u: goto L_08AE5964;
    case 492u: goto L_08AE5984;
    case 493u: goto L_08AE598C;
    case 494u: goto L_08AE599C;
    case 495u: goto L_08AE59BC;
    case 496u: goto L_08AE59C4;
    case 497u: goto L_08AE59D4;
    case 498u: goto L_08AE59F4;
    case 499u: goto L_08AE59FC;
    case 500u: goto L_08AE5A0C;
    case 501u: goto L_08AE5A2C;
    case 502u: goto L_08AE5A34;
    case 503u: goto L_08AE5A44;
    case 504u: goto L_08AE5A64;
    case 505u: goto L_08AE5A6C;
    case 506u: goto L_08AE5A7C;
    case 507u: goto L_08AE5A9C;
    case 508u: goto L_08AE5AA4;
    case 509u: goto L_08AE5AB4;
    case 510u: goto L_08AE5AD4;
    case 511u: goto L_08AE5ADC;
    case 512u: goto L_08AE5AE4;
    case 513u: goto L_08AE5AEC;
    case 514u: goto L_08AE5AF4;
    case 515u: goto L_08AE5AFC;
    case 516u: goto L_08AE5B04;
    case 517u: goto L_08AE5B0C;
    case 518u: goto L_08AE5B18;
    case 519u: goto L_08AE5B24;
    case 520u: goto L_08AE5B30;
    case 521u: goto L_08AE5B38;
    case 522u: goto L_08AE5B4C;
    case 523u: goto L_08AE5B54;
    case 524u: goto L_08AE5B5C;
    case 525u: goto L_08AE5B70;
    case 526u: goto L_08AE5B78;
    case 527u: goto L_08AE5B8C;
    case 528u: goto L_08AE5B9C;
    case 529u: goto L_08AE5BA4;
    case 530u: goto L_08AE5BB0;
    case 531u: goto L_08AE5BB8;
    case 532u: goto L_08AE5BC8;
    case 533u: goto L_08AE5BD0;
    case 534u: goto L_08AE5BDC;
    case 535u: goto L_08AE5BE8;
    case 536u: goto L_08AE5BF4;
    case 537u: goto L_08AE5BFC;
    case 538u: goto L_08AE5C08;
    case 539u: goto L_08AE5C14;
    case 540u: goto L_08AE5C1C;
    case 541u: goto L_08AE5C2C;
    case 542u: goto L_08AE5C38;
    case 543u: goto L_08AE5C40;
    case 544u: goto L_08AE5C48;
    case 545u: goto L_08AE5C54;
    case 546u: goto L_08AE5C5C;
    case 547u: goto L_08AE5C64;
    case 548u: goto L_08AE5C74;
    case 549u: goto L_08AE5C7C;
    case 550u: goto L_08AE5C84;
    case 551u: goto L_08AE5C90;
    case 552u: goto L_08AE5C9C;
    case 553u: goto L_08AE5CA8;
    case 554u: goto L_08AE5CB0;
    case 555u: goto L_08AE5CC4;
    case 556u: goto L_08AE5CCC;
    case 557u: goto L_08AE5CE0;
    case 558u: goto L_08AE5CE8;
    case 559u: goto L_08AE5CEC;
    case 560u: goto L_08AE5CFC;
    case 561u: goto L_08AE5D24;
    case 562u: goto L_08AE5D30;
    case 563u: goto L_08AE5D38;
    case 564u: goto L_08AE5D40;
    case 565u: goto L_08AE5D48;
    case 566u: goto L_08AE5D54;
    case 567u: goto L_08AE5D5C;
    case 568u: goto L_08AE5D68;
    case 569u: goto L_08AE5D70;
    case 570u: goto L_08AE5D84;
    case 571u: goto L_08AE5D8C;
    case 572u: goto L_08AE5D90;
    case 573u: goto L_08AE5DAC;
    case 574u: goto L_08AE5DB4;
    case 575u: goto L_08AE5DC0;
    case 576u: goto L_08AE5DCC;
    case 577u: goto L_08AE5DE8;
    case 578u: goto L_08AE5DF4;
    case 579u: goto L_08AE5E08;
    case 580u: goto L_08AE5E1C;
    case 581u: goto L_08AE5E34;
    case 582u: goto L_08AE5E38;
    case 583u: goto L_08AE5E50;
    case 584u: goto L_08AE5E6C;
    case 585u: goto L_08AE5E7C;
    case 586u: goto L_08AE5E88;
    case 587u: goto L_08AE5EA4;
    case 588u: goto L_08AE5EB4;
    case 589u: goto L_08AE5EC8;
    case 590u: goto L_08AE5ECC;
    case 591u: goto L_08AE5ED4;
    case 592u: goto L_08AE5EE0;
    case 593u: goto L_08AE5EE4;
    case 594u: goto L_08AE5EEC;
    case 595u: goto L_08AE5EF4;
    case 596u: goto L_08AE5F00;
    case 597u: goto L_08AE5F08;
    case 598u: goto L_08AE5F14;
    case 599u: goto L_08AE5F2C;
    case 600u: goto L_08AE5F34;
    case 601u: goto L_08AE5F48;
    case 602u: goto L_08AE5F70;
    case 603u: goto L_08AE5F74;
    case 604u: goto L_08AE5F84;
    case 605u: goto L_08AE5FA8;
    case 606u: goto L_08AE5FB0;
    case 607u: goto L_08AE60AC;
    case 608u: goto L_08AE60C0;
    case 609u: goto L_08AE60C8;
    case 610u: goto L_08AE60DC;
    case 611u: goto L_08AE60E0;
    case 612u: goto L_08AE60E8;
    case 613u: goto L_08AE6108;
    case 614u: goto L_08AE6118;
    case 615u: goto L_08AE6124;
    case 616u: goto L_08AE613C;
    case 617u: goto L_08AE6148;
    case 618u: goto L_08AE6150;
    case 619u: goto L_08AE615C;
    case 620u: goto L_08AE6164;
    case 621u: goto L_08AE6170;
    case 622u: goto L_08AE617C;
    case 623u: goto L_08AE6184;
    case 624u: goto L_08AE6198;
    case 625u: goto L_08AE61A0;
    case 626u: goto L_08AE61A8;
    case 627u: goto L_08AE61B4;
    case 628u: goto L_08AE61BC;
    case 629u: goto L_08AE61CC;
    case 630u: goto L_08AE61D4;
    case 631u: goto L_08AE61DC;
    case 632u: goto L_08AE61E4;
    case 633u: goto L_08AE61EC;
    case 634u: goto L_08AE61F8;
    case 635u: goto L_08AE6200;
    case 636u: goto L_08AE620C;
    case 637u: goto L_08AE6218;
    case 638u: goto L_08AE6224;
    case 639u: goto L_08AE6230;
    case 640u: goto L_08AE6238;
    case 641u: goto L_08AE624C;
    case 642u: goto L_08AE6254;
    case 643u: goto L_08AE625C;
    case 644u: goto L_08AE6268;
    case 645u: goto L_08AE6270;
    case 646u: goto L_08AE6280;
    case 647u: goto L_08AE6288;
    case 648u: goto L_08AE6290;
    case 649u: goto L_08AE6294;
    case 650u: goto L_08AE6298;
    case 651u: goto L_08AE62AC;
    case 652u: goto L_08AE62D4;
    case 653u: goto L_08AE62DC;
    case 654u: goto L_08AE62E0;
    case 655u: goto L_08AE62E8;
    case 656u: goto L_08AE62F4;
    case 657u: goto L_08AE6300;
    case 658u: goto L_08AE630C;
    case 659u: goto L_08AE6314;
    case 660u: goto L_08AE631C;
    case 661u: goto L_08AE6324;
    case 662u: goto L_08AE6338;
    case 663u: goto L_08AE6340;
    case 664u: goto L_08AE6354;
    case 665u: goto L_08AE635C;
    case 666u: goto L_08AE636C;
    case 667u: goto L_08AE6370;
    case 668u: goto L_08AE637C;
    case 669u: goto L_08AE639C;
    case 670u: goto L_08AE63BC;
    case 671u: goto L_08AE63F0;
    case 672u: goto L_08AE6404;
    case 673u: goto L_08AE6414;
    case 674u: goto L_08AE6450;
    case 675u: goto L_08AE646C;
    case 676u: goto L_08AE6470;
    case 677u: goto L_08AE6478;
    case 678u: goto L_08AE6480;
    case 679u: goto L_08AE6488;
    case 680u: goto L_08AE648C;
    case 681u: goto L_08AE6490;
    case 682u: goto L_08AE64C0;
    case 683u: goto L_08AE64C8;
    case 684u: goto L_08AE6524;
    case 685u: goto L_08AE6534;
    case 686u: goto L_08AE6538;
    case 687u: goto L_08AE6540;
    case 688u: goto L_08AE6548;
    case 689u: goto L_08AE6550;
    case 690u: goto L_08AE6554;
    case 691u: goto L_08AE6558;
    case 692u: goto L_08AE6588;
    case 693u: goto L_08AE6590;
    case 694u: goto L_08AE65E4;
    case 695u: goto L_08AE65F4;
    case 696u: goto L_08AE65FC;
    case 697u: goto L_08AE660C;
    case 698u: goto L_08AE6618;
    case 699u: goto L_08AE6620;
    case 700u: goto L_08AE6658;
    case 701u: goto L_08AE6660;
    case 702u: goto L_08AE6668;
    case 703u: goto L_08AE6680;
    case 704u: goto L_08AE6688;
    case 705u: goto L_08AE6698;
    case 706u: goto L_08AE66A4;
    case 707u: goto L_08AE66AC;
    case 708u: goto L_08AE66E4;
    case 709u: goto L_08AE66EC;
    case 710u: goto L_08AE66F4;
    case 711u: goto L_08AE670C;
    case 712u: goto L_08AE6714;
    case 713u: goto L_08AE6728;
    case 714u: goto L_08AE6730;
    case 715u: goto L_08AE6744;
    case 716u: goto L_08AE674C;
    case 717u: goto L_08AE676C;
    case 718u: goto L_08AE6774;
    case 719u: goto L_08AE6794;
    case 720u: goto L_08AE679C;
    case 721u: goto L_08AE67A4;
    case 722u: goto L_08AE67B0;
    case 723u: goto L_08AE67C4;
    case 724u: goto L_08AE67D8;
    case 725u: goto L_08AE67E4;
    case 726u: goto L_08AE67F0;
    case 727u: goto L_08AE6804;
    case 728u: goto L_08AE6810;
    case 729u: goto L_08AE6818;
    case 730u: goto L_08AE6820;
    case 731u: goto L_08AE6828;
    case 732u: goto L_08AE6830;
    case 733u: goto L_08AE6838;
    case 734u: goto L_08AE6840;
    case 735u: goto L_08AE6848;
    case 736u: goto L_08AE6850;
    case 737u: goto L_08AE6858;
    case 738u: goto L_08AE6860;
    case 739u: goto L_08AE6868;
    case 740u: goto L_08AE6870;
    case 741u: goto L_08AE6878;
    case 742u: goto L_08AE6884;
    case 743u: goto L_08AE688C;
    case 744u: goto L_08AE6894;
    case 745u: goto L_08AE689C;
    case 746u: goto L_08AE68BC;
    case 747u: goto L_08AE68C4;
    case 748u: goto L_08AE68D4;
    case 749u: goto L_08AE68DC;
    case 750u: goto L_08AE68E0;
    case 751u: goto L_08AE68E4;
    case 752u: goto L_08AE6930;
    case 753u: goto L_08AE6938;
    case 754u: goto L_08AE6940;
    case 755u: goto L_08AE6948;
    case 756u: goto L_08AE6954;
    case 757u: goto L_08AE6968;
    case 758u: goto L_08AE6970;
    case 759u: goto L_08AE6980;
    case 760u: goto L_08AE6988;
    case 761u: goto L_08AE699C;
    case 762u: goto L_08AE69A8;
    case 763u: goto L_08AE69BC;
    case 764u: goto L_08AE69C4;
    case 765u: goto L_08AE69D4;
    case 766u: goto L_08AE69E0;
    case 767u: goto L_08AE69E8;
    case 768u: goto L_08AE6A20;
    case 769u: goto L_08AE6A28;
    case 770u: goto L_08AE6A3C;
    case 771u: goto L_08AE6A44;
    case 772u: goto L_08AE6A54;
    case 773u: goto L_08AE6A60;
    case 774u: goto L_08AE6A68;
    case 775u: goto L_08AE6AA0;
    case 776u: goto L_08AE6AA8;
    case 777u: goto L_08AE6ABC;
    case 778u: goto L_08AE6AC0;
    case 779u: goto L_08AE6ACC;
    case 780u: goto L_08AE6AD0;
    case 781u: goto L_08AE6AD8;
    case 782u: goto L_08AE6ADC;
    case 783u: goto L_08AE6AFC;
    case 784u: goto L_08AE6B2C;
    case 785u: goto L_08AE6B34;
    case 786u: goto L_08AE6B3C;
    case 787u: goto L_08AE6B44;
    case 788u: goto L_08AE6B4C;
    case 789u: goto L_08AE6B58;
    case 790u: goto L_08AE6B60;
    case 791u: goto L_08AE6B68;
    case 792u: goto L_08AE6B7C;
    case 793u: goto L_08AE6B98;
    case 794u: goto L_08AE6BA0;
    case 795u: goto L_08AE6BA8;
    case 796u: goto L_08AE6BB4;
    case 797u: goto L_08AE6BC8;
    case 798u: goto L_08AE6BD0;
    case 799u: goto L_08AE6BE0;
    case 800u: goto L_08AE6BEC;
    case 801u: goto L_08AE6BF4;
    case 802u: goto L_08AE6BFC;
    case 803u: goto L_08AE6C08;
    case 804u: goto L_08AE6C10;
    case 805u: goto L_08AE6C2C;
    case 806u: goto L_08AE6C34;
    case 807u: goto L_08AE6C3C;
    case 808u: goto L_08AE6C44;
    case 809u: goto L_08AE6C4C;
    case 810u: goto L_08AE6C78;
    case 811u: goto L_08AE6C80;
    case 812u: goto L_08AE6C88;
    case 813u: goto L_08AE6CA8;
    case 814u: goto L_08AE6CB0;
    case 815u: goto L_08AE6CC4;
    case 816u: goto L_08AE6CCC;
    case 817u: goto L_08AE6CEC;
    case 818u: goto L_08AE6CF4;
    case 819u: goto L_08AE6D0C;
    case 820u: goto L_08AE6D14;
    case 821u: goto L_08AE6D2C;
    case 822u: goto L_08AE6D34;
    case 823u: goto L_08AE6D54;
    case 824u: goto L_08AE6D5C;
    case 825u: goto L_08AE6D70;
    case 826u: goto L_08AE6D78;
    case 827u: goto L_08AE6D8C;
    case 828u: goto L_08AE6D94;
    case 829u: goto L_08AE6D9C;
    case 830u: goto L_08AE6DA4;
    case 831u: goto L_08AE6DB4;
    case 832u: goto L_08AE6DBC;
    case 833u: goto L_08AE6DCC;
    case 834u: goto L_08AE6DD4;
    case 835u: goto L_08AE6DDC;
    case 836u: goto L_08AE6DE4;
    case 837u: goto L_08AE6DEC;
    case 838u: goto L_08AE6E04;
    case 839u: goto L_08AE6E0C;
    case 840u: goto L_08AE6E14;
    case 841u: goto L_08AE6E24;
    case 842u: goto L_08AE6E2C;
    case 843u: goto L_08AE6E34;
    case 844u: goto L_08AE6E40;
    case 845u: goto L_08AE6E48;
    case 846u: goto L_08AE6E58;
    case 847u: goto L_08AE6E78;
    case 848u: goto L_08AE6E80;
    case 849u: goto L_08AE6E90;
    case 850u: goto L_08AE6EB0;
    case 851u: goto L_08AE6EB8;
    case 852u: goto L_08AE6EC0;
    case 853u: goto L_08AE6EC8;
    case 854u: goto L_08AE6ED0;
    case 855u: goto L_08AE6ED8;
    case 856u: goto L_08AE6EE0;
    case 857u: goto L_08AE6EE8;
    case 858u: goto L_08AE6EF0;
    case 859u: goto L_08AE6EF8;
    case 860u: goto L_08AE6F00;
    case 861u: goto L_08AE6F20;
    case 862u: goto L_08AE6F28;
    case 863u: goto L_08AE6F48;
    case 864u: goto L_08AE6F50;
    case 865u: goto L_08AE6F68;
    case 866u: goto L_08AE6F80;
    case 867u: goto L_08AE6F88;
    case 868u: goto L_08AE6F94;
    case 869u: goto L_08AE6F9C;
    case 870u: goto L_08AE6FB0;
    case 871u: goto L_08AE6FBC;
    case 872u: goto L_08AE6FC4;
    case 873u: goto L_08AE6FD0;
    case 874u: goto L_08AE6FDC;
    case 875u: goto L_08AE6FE4;
    case 876u: goto L_08AE6FFC;
    case 877u: goto L_08AE7004;
    case 878u: goto L_08AE7008;
    case 879u: goto L_08AE701C;
    case 880u: goto L_08AE702C;
    case 881u: goto L_08AE7038;
    case 882u: goto L_08AE7040;
    case 883u: goto L_08AE7050;
    case 884u: goto L_08AE705C;
    case 885u: goto L_08AE7064;
    case 886u: goto L_08AE7070;
    case 887u: goto L_08AE7078;
    case 888u: goto L_08AE7084;
    case 889u: goto L_08AE7098;
    case 890u: goto L_08AE70A0;
    case 891u: goto L_08AE70A8;
    case 892u: goto L_08AE70B0;
    case 893u: goto L_08AE70C0;
    case 894u: goto L_08AE70C8;
    case 895u: goto L_08AE70D0;
    case 896u: goto L_08AE70D8;
    case 897u: goto L_08AE70E0;
    case 898u: goto L_08AE70F8;
    case 899u: goto L_08AE7100;
    case 900u: goto L_08AE7108;
    case 901u: goto L_08AE7118;
    case 902u: goto L_08AE7120;
    case 903u: goto L_08AE7128;
    case 904u: goto L_08AE7134;
    case 905u: goto L_08AE7140;
    case 906u: goto L_08AE7148;
    case 907u: goto L_08AE7150;
    case 908u: goto L_08AE7160;
    case 909u: goto L_08AE716C;
    case 910u: goto L_08AE7188;
    case 911u: goto L_08AE7198;
    case 912u: goto L_08AE71A0;
    case 913u: goto L_08AE71A8;
    case 914u: goto L_08AE71B0;
    case 915u: goto L_08AE71B8;
    case 916u: goto L_08AE71C0;
    case 917u: goto L_08AE71C8;
    case 918u: goto L_08AE71D0;
    case 919u: goto L_08AE71D8;
    case 920u: goto L_08AE71E0;
    case 921u: goto L_08AE71E8;
    case 922u: goto L_08AE7208;
    case 923u: goto L_08AE7210;
    case 924u: goto L_08AE7230;
    case 925u: goto L_08AE7238;
    case 926u: goto L_08AE7250;
    case 927u: goto L_08AE7268;
    case 928u: goto L_08AE7278;
    case 929u: goto L_08AE7280;
    case 930u: goto L_08AE728C;
    case 931u: goto L_08AE729C;
    case 932u: goto L_08AE72D8;
    case 933u: goto L_08AE72E0;
    case 934u: goto L_08AE7320;
    case 935u: goto L_08AE7324;
    case 936u: goto L_08AE732C;
    case 937u: goto L_08AE733C;
    case 938u: goto L_08AE7348;
    case 939u: goto L_08AE7350;
    case 940u: goto L_08AE7360;
    case 941u: goto L_08AE736C;
    case 942u: goto L_08AE7374;
    case 943u: goto L_08AE7380;
    case 944u: goto L_08AE7388;
    case 945u: goto L_08AE7394;
    case 946u: goto L_08AE73A8;
    case 947u: goto L_08AE73B0;
    case 948u: goto L_08AE73C8;
    case 949u: goto L_08AE73D0;
    case 950u: goto L_08AE73E0;
    case 951u: goto L_08AE73E8;
    case 952u: goto L_08AE73F0;
    case 953u: goto L_08AE73F8;
    case 954u: goto L_08AE7400;
    case 955u: goto L_08AE7420;
    case 956u: goto L_08AE7428;
    case 957u: goto L_08AE7430;
    case 958u: goto L_08AE7440;
    case 959u: goto L_08AE7448;
    case 960u: goto L_08AE7450;
    case 961u: goto L_08AE745C;
    case 962u: goto L_08AE7468;
    case 963u: goto L_08AE7470;
    case 964u: goto L_08AE7478;
    case 965u: goto L_08AE7484;
    case 966u: goto L_08AE748C;
    case 967u: goto L_08AE749C;
    case 968u: goto L_08AE74AC;
    case 969u: goto L_08AE74C8;
    case 970u: goto L_08AE74D4;
    case 971u: goto L_08AE74E0;
    case 972u: goto L_08AE74E8;
    case 973u: goto L_08AE74F0;
    case 974u: goto L_08AE74F8;
    case 975u: goto L_08AE7500;
    case 976u: goto L_08AE7508;
    case 977u: goto L_08AE7510;
    case 978u: goto L_08AE7518;
    case 979u: goto L_08AE7520;
    case 980u: goto L_08AE7528;
    case 981u: goto L_08AE7530;
    case 982u: goto L_08AE754C;
    case 983u: goto L_08AE7554;
    case 984u: goto L_08AE7570;
    case 985u: goto L_08AE7578;
    case 986u: goto L_08AE7590;
    case 987u: goto L_08AE759C;
    case 988u: goto L_08AE75B8;
    case 989u: goto L_08AE75C0;
    case 990u: goto L_08AE75C8;
    case 991u: goto L_08AE75F0;
    case 992u: goto L_08AE75FC;
    case 993u: goto L_08AE7604;
    case 994u: goto L_08AE7614;
    case 995u: goto L_08AE7620;
    case 996u: goto L_08AE7628;
    case 997u: goto L_08AE7634;
    case 998u: goto L_08AE763C;
    case 999u: goto L_08AE764C;
    case 1000u: goto L_08AE7658;
    case 1001u: goto L_08AE7670;
    case 1002u: goto L_08AE7678;
    case 1003u: goto L_08AE7684;
    case 1004u: goto L_08AE76A0;
    case 1005u: goto L_08AE76A8;
    case 1006u: goto L_08AE76B4;
    case 1007u: goto L_08AE76BC;
    case 1008u: goto L_08AE76F0;
    case 1009u: goto L_08AE76F8;
    case 1010u: goto L_08AE7730;
    case 1011u: goto L_08AE7738;
    case 1012u: goto L_08AE776C;
    case 1013u: goto L_08AE7774;
    case 1014u: goto L_08AE77AC;
    case 1015u: goto L_08AE77B4;
    case 1016u: goto L_08AE77F8;
    case 1017u: goto L_08AE7800;
    case 1018u: goto L_08AE7838;
    case 1019u: goto L_08AE7858;
    case 1020u: goto L_08AE786C;
    case 1021u: goto L_08AE7884;
    case 1022u: goto L_08AE7898;
    case 1023u: goto L_08AE78A0;
    case 1024u: goto L_08AE78B4;
    case 1025u: goto L_08AE78BC;
    case 1026u: goto L_08AE78CC;
    case 1027u: goto L_08AE78D4;
    case 1028u: goto L_08AE78E4;
    case 1029u: goto L_08AE78EC;
    case 1030u: goto L_08AE78F4;
    case 1031u: goto L_08AE78FC;
    case 1032u: goto L_08AE7904;
    case 1033u: goto L_08AE791C;
    case 1034u: goto L_08AE7928;
    case 1035u: goto L_08AE7930;
    case 1036u: goto L_08AE7938;
    case 1037u: goto L_08AE7940;
    case 1038u: goto L_08AE7948;
    case 1039u: goto L_08AE7950;
    case 1040u: goto L_08AE7958;
    case 1041u: goto L_08AE7960;
    case 1042u: goto L_08AE7968;
    case 1043u: goto L_08AE7970;
    case 1044u: goto L_08AE7980;
    case 1045u: goto L_08AE7988;
    case 1046u: goto L_08AE7994;
    case 1047u: goto L_08AE79A0;
    case 1048u: goto L_08AE79A8;
    case 1049u: goto L_08AE79B0;
    case 1050u: goto L_08AE79C0;
    case 1051u: goto L_08AE79C4;
    case 1052u: goto L_08AE79CC;
    case 1053u: goto L_08AE79DC;
    case 1054u: goto L_08AE79E4;
    case 1055u: goto L_08AE79F4;
    case 1056u: goto L_08AE79FC;
    case 1057u: goto L_08AE7A0C;
    case 1058u: goto L_08AE7A14;
    case 1059u: goto L_08AE7A20;
    case 1060u: goto L_08AE7A40;
    case 1061u: goto L_08AE7A50;
    case 1062u: goto L_08AE7A58;
    case 1063u: goto L_08AE7A60;
    case 1064u: goto L_08AE7A70;
    case 1065u: goto L_08AE7A7C;
    case 1066u: goto L_08AE7A84;
    case 1067u: goto L_08AE7A90;
    case 1068u: goto L_08AE7AA4;
    case 1069u: goto L_08AE7AAC;
    case 1070u: goto L_08AE7AC0;
    case 1071u: goto L_08AE7ACC;
    case 1072u: goto L_08AE7AD4;
    case 1073u: goto L_08AE7ADC;
    case 1074u: goto L_08AE7AE8;
    case 1075u: goto L_08AE7AF0;
    case 1076u: goto L_08AE7AF8;
    case 1077u: goto L_08AE7B08;
    case 1078u: goto L_08AE7B10;
    case 1079u: goto L_08AE7B18;
    case 1080u: goto L_08AE7B24;
    case 1081u: goto L_08AE7B2C;
    case 1082u: goto L_08AE7B34;
    case 1083u: goto L_08AE7B3C;
    case 1084u: goto L_08AE7B44;
    case 1085u: goto L_08AE7B54;
    case 1086u: goto L_08AE7B64;
    case 1087u: goto L_08AE7B80;
    case 1088u: goto L_08AE7B88;
    case 1089u: goto L_08AE7B90;
    case 1090u: goto L_08AE7BA0;
    case 1091u: goto L_08AE7BC0;
    case 1092u: goto L_08AE7BC8;
    case 1093u: goto L_08AE7BD8;
    case 1094u: goto L_08AE7BE8;
    case 1095u: goto L_08AE7BEC;
    case 1096u: goto L_08AE7BF8;
    case 1097u: goto L_08AE7C00;
    case 1098u: goto L_08AE7C10;
    case 1099u: goto L_08AE7C1C;
    case 1100u: goto L_08AE7C24;
    case 1101u: goto L_08AE7C34;
    case 1102u: goto L_08AE7C40;
    case 1103u: goto L_08AE7C48;
    case 1104u: goto L_08AE7C54;
    case 1105u: goto L_08AE7C5C;
    case 1106u: goto L_08AE7C70;
    case 1107u: goto L_08AE7C78;
    case 1108u: goto L_08AE7C80;
    case 1109u: goto L_08AE7C8C;
    case 1110u: goto L_08AE7C98;
    case 1111u: goto L_08AE7CA4;
    case 1112u: goto L_08AE7CAC;
    case 1113u: goto L_08AE7CBC;
    case 1114u: goto L_08AE7CD0;
    case 1115u: goto L_08AE7CDC;
    case 1116u: goto L_08AE7CE8;
    case 1117u: goto L_08AE7D00;
    case 1118u: goto L_08AE7D0C;
    case 1119u: goto L_08AE7D20;
    case 1120u: goto L_08AE7D30;
    case 1121u: goto L_08AE7D90;
    case 1122u: goto L_08AE7DAC;
    case 1123u: goto L_08AE7DB4;
    case 1124u: goto L_08AE7DC0;
    case 1125u: goto L_08AE7DC8;
    case 1126u: goto L_08AE7DD0;
    case 1127u: goto L_08AE7DD8;
    case 1128u: goto L_08AE7DE4;
    case 1129u: goto L_08AE7DF0;
    case 1130u: goto L_08AE7DFC;
    case 1131u: goto L_08AE7E04;
    case 1132u: goto L_08AE7E08;
    case 1133u: goto L_08AE7E18;
    case 1134u: goto L_08AE7E20;
    case 1135u: goto L_08AE7E2C;
    case 1136u: goto L_08AE7E38;
    case 1137u: goto L_08AE7E44;
    case 1138u: goto L_08AE7E4C;
    case 1139u: goto L_08AE7E54;
    case 1140u: goto L_08AE7E58;
    case 1141u: goto L_08AE7E5C;
    case 1142u: goto L_08AE7E64;
    case 1143u: goto L_08AE7E70;
    case 1144u: goto L_08AE7E80;
    case 1145u: goto L_08AE7E90;
    case 1146u: goto L_08AE7E98;
    case 1147u: goto L_08AE7EA0;
    case 1148u: goto L_08AE7EB0;
    case 1149u: goto L_08AE7EC0;
    case 1150u: goto L_08AE7EC4;
    case 1151u: goto L_08AE7ECC;
    case 1152u: goto L_08AE7ED8;
    case 1153u: goto L_08AE7EE4;
    case 1154u: goto L_08AE7EF4;
    case 1155u: goto L_08AE7EFC;
    case 1156u: goto L_08AE7F04;
    case 1157u: goto L_08AE7F10;
    case 1158u: goto L_08AE7F1C;
    case 1159u: goto L_08AE7F28;
    case 1160u: goto L_08AE7F30;
    case 1161u: goto L_08AE7F3C;
    case 1162u: goto L_08AE7F54;
    case 1163u: goto L_08AE7F5C;
    case 1164u: goto L_08AE7F84;
    case 1165u: goto L_08AE7F90;
    case 1166u: goto L_08AE7F98;
    case 1167u: goto L_08AE7FA4;
    case 1168u: goto L_08AE7FB4;
    case 1169u: goto L_08AE7FF0;
    case 1170u: goto L_08AE7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE4000:
    ctx.set_gpr(31, 0x08AE4008u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4008u) goto L_08AE4008;
    return;
L_08AE4008:
    ctx.set_gpr(31, 0x08AE4010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4010u) goto L_08AE4010;
    return;
L_08AE4010:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4030u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4030u) goto L_08AE4030;
    return;
L_08AE4030:
    ctx.set_gpr(31, 0x08AE4038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4038u) goto L_08AE4038;
    return;
L_08AE4038:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4058u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4058u) goto L_08AE4058;
    return;
L_08AE4058:
    ctx.set_gpr(31, 0x08AE4060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4060u) goto L_08AE4060;
    return;
L_08AE4060:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4080u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4080u) goto L_08AE4080;
    return;
L_08AE4080:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AE40B8;
      }
      goto L_08AE408C;
    }
L_08AE408C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE40A4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE40A4u) goto L_08AE40A4;
    return;
L_08AE40A4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(401));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08AE40B8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7376));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE40B8u) goto L_08AE40B8;
    return;
L_08AE40B8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE40D0;
    }
L_08AE40D0:
    ctx.set_gpr(31, 0x08AE40D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE40D8u) goto L_08AE40D8;
    return;
L_08AE40D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE40E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE40E4u) goto L_08AE40E4;
    return;
L_08AE40E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE416C;
      }
      goto L_08AE40EC;
    }
L_08AE40EC:
    ctx.set_gpr(31, 0x08AE40F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE40F4u) goto L_08AE40F4;
    return;
L_08AE40F4:
    ctx.set_gpr(31, 0x08AE40FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE40FCu) goto L_08AE40FC;
    return;
L_08AE40FC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4138;
      }
      goto L_08AE411C;
    }
L_08AE411C:
    ctx.set_gpr(31, 0x08AE4124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4124u) goto L_08AE4124;
    return;
L_08AE4124:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4138u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4138u) goto L_08AE4138;
    return;
L_08AE4138:
    ctx.set_gpr(31, 0x08AE4140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4140u) goto L_08AE4140;
    return;
L_08AE4140:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4154u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4154u) goto L_08AE4154;
    return;
L_08AE4154:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE416C;
    }
L_08AE416C:
    ctx.set_gpr(31, 0x08AE4174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4174u) goto L_08AE4174;
    return;
L_08AE4174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4180u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE4180u) goto L_08AE4180;
    return;
L_08AE4180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE4188;
    }
L_08AE4188:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE4190;
    }
L_08AE4190:
    ctx.set_gpr(31, 0x08AE4198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4198u) goto L_08AE4198;
    return;
L_08AE4198:
    ctx.set_gpr(31, 0x08AE41A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE41A0u) goto L_08AE41A0;
    return;
L_08AE41A0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE41DC;
      }
      goto L_08AE41C0;
    }
L_08AE41C0:
    ctx.set_gpr(31, 0x08AE41C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE41C8u) goto L_08AE41C8;
    return;
L_08AE41C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE41DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE41DCu) goto L_08AE41DC;
    return;
L_08AE41DC:
    ctx.set_gpr(31, 0x08AE41E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE41E4u) goto L_08AE41E4;
    return;
L_08AE41E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE41F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE41F8u) goto L_08AE41F8;
    return;
L_08AE41F8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE4210;
    }
L_08AE4210:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(141)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE421C;
    }
L_08AE421C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE424C;
      }
      goto L_08AE4228;
    }
L_08AE4228:
    ctx.set_gpr(31, 0x08AE4230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4230u) goto L_08AE4230;
    return;
L_08AE4230:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4244u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4244u) goto L_08AE4244;
    return;
L_08AE4244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4268;
      }
      goto L_08AE424C;
    }
L_08AE424C:
    ctx.set_gpr(31, 0x08AE4254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4254u) goto L_08AE4254;
    return;
L_08AE4254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4268u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4268u) goto L_08AE4268;
    return;
L_08AE4268:
    ctx.set_gpr(31, 0x08AE4270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4270u) goto L_08AE4270;
    return;
L_08AE4270:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4290u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4290u) goto L_08AE4290;
    return;
L_08AE4290:
    ctx.set_gpr(31, 0x08AE4298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4298u) goto L_08AE4298;
    return;
L_08AE4298:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE42B8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE42B8u) goto L_08AE42B8;
    return;
L_08AE42B8:
    ctx.set_gpr(31, 0x08AE42C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE42C0u) goto L_08AE42C0;
    return;
L_08AE42C0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE42E0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE42E0u) goto L_08AE42E0;
    return;
L_08AE42E0:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
        goto L_08AE4318;
    }
    goto L_08AE42E8;
L_08AE42E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE4300u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE4300u) goto L_08AE4300;
    return;
L_08AE4300:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(401));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08AE4314u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7376));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4314u) goto L_08AE4314;
    return;
L_08AE4314:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    goto L_08AE4318;
L_08AE4318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE432C;
      }
      goto L_08AE4320;
    }
L_08AE4320:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE432C;
    }
L_08AE432C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4350;
      }
      goto L_08AE4334;
    }
L_08AE4334:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4354;
      }
      goto L_08AE4350;
    }
L_08AE4350:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE4354;
L_08AE4354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 20971u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34079u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, ctx.gpr[8] >> 31u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(3, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26215u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[6] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, ctx.hi);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE43EC;
      }
      goto L_08AE43E8;
    }
L_08AE43E8:
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    goto L_08AE43EC;
L_08AE43EC:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
        goto L_08AE43FC;
    }
    goto L_08AE43F4;
L_08AE43F4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-10));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    goto L_08AE43FC;
L_08AE43FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE442C;
      }
      goto L_08AE4404;
    }
L_08AE4404:
    ctx.set_gpr(31, 0x08AE440Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE440Cu) goto L_08AE440C;
    return;
L_08AE440C:
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4424u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4424u) goto L_08AE4424;
    return;
L_08AE4424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4450;
      }
      goto L_08AE442C;
    }
L_08AE442C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4450;
      }
      goto L_08AE4434;
    }
L_08AE4434:
    ctx.set_gpr(31, 0x08AE443Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE443Cu) goto L_08AE443C;
    return;
L_08AE443C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4450u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4450u) goto L_08AE4450;
    return;
L_08AE4450:
    ctx.set_gpr(31, 0x08AE4458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4458u) goto L_08AE4458;
    return;
L_08AE4458:
    ctx.set_gpr(8, ctx.gpr[18] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08AE4470u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4470u) goto L_08AE4470;
    return;
L_08AE4470:
    ctx.set_gpr(31, 0x08AE4478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4478u) goto L_08AE4478;
    return;
L_08AE4478:
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(45));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE4490u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4490u) goto L_08AE4490;
    return;
L_08AE4490:
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
L_08AE44A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(161)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE4568;
      }
      goto L_08AE44C8;
    }
L_08AE44C8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4500;
      }
      goto L_08AE44D0;
    }
L_08AE44D0:
    ctx.set_gpr(31, 0x08AE44D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE44D8u) goto L_08AE44D8;
    return;
L_08AE44D8:
    ctx.set_gpr(31, 0x08AE44E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE44E0u) goto L_08AE44E0;
    return;
L_08AE44E0:
    ctx.set_gpr(31, 0x08AE44E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE44E8u) goto L_08AE44E8;
    return;
L_08AE44E8:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE44F8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7512));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE44F8u) goto L_08AE44F8;
    return;
L_08AE44F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4564;
      }
      goto L_08AE4500;
    }
L_08AE4500:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4538;
      }
      goto L_08AE4508;
    }
L_08AE4508:
    ctx.set_gpr(31, 0x08AE4510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4510u) goto L_08AE4510;
    return;
L_08AE4510:
    ctx.set_gpr(31, 0x08AE4518u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4518u) goto L_08AE4518;
    return;
L_08AE4518:
    ctx.set_gpr(31, 0x08AE4520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4520u) goto L_08AE4520;
    return;
L_08AE4520:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4530u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7552));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4530u) goto L_08AE4530;
    return;
L_08AE4530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4560;
      }
      goto L_08AE4538;
    }
L_08AE4538:
    ctx.set_gpr(31, 0x08AE4540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4540u) goto L_08AE4540;
    return;
L_08AE4540:
    ctx.set_gpr(31, 0x08AE4548u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4548u) goto L_08AE4548;
    return;
L_08AE4548:
    ctx.set_gpr(31, 0x08AE4550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4550u) goto L_08AE4550;
    return;
L_08AE4550:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4560u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7588));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4560u) goto L_08AE4560;
    return;
L_08AE4560:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE4564;
L_08AE4564:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AE4568;
L_08AE4568:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE45EC;
      }
      goto L_08AE4574;
    }
L_08AE4574:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE45B0;
      }
      goto L_08AE457C;
    }
L_08AE457C:
    ctx.set_gpr(31, 0x08AE4584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4584u) goto L_08AE4584;
    return;
L_08AE4584:
    ctx.set_gpr(31, 0x08AE458Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE458Cu) goto L_08AE458C;
    return;
L_08AE458C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08AE45A8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE45A8u) goto L_08AE45A8;
    return;
L_08AE45A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE45E8;
      }
      goto L_08AE45B0;
    }
L_08AE45B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE45E4;
      }
      goto L_08AE45B8;
    }
L_08AE45B8:
    ctx.set_gpr(31, 0x08AE45C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE45C0u) goto L_08AE45C0;
    return;
L_08AE45C0:
    ctx.set_gpr(31, 0x08AE45C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE45C8u) goto L_08AE45C8;
    return;
L_08AE45C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(31, 0x08AE45E4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE45E4u) goto L_08AE45E4;
    return;
L_08AE45E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE45E8;
L_08AE45E8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AE45EC;
L_08AE45EC:
    ctx.set_gpr(31, 0x08AE45F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE45F4u) goto L_08AE45F4;
    return;
L_08AE45F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE4608u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4608u) goto L_08AE4608;
    return;
L_08AE4608:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4630;
      }
      goto L_08AE4614;
    }
L_08AE4614:
    ctx.set_gpr(31, 0x08AE461Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE461Cu) goto L_08AE461C;
    return;
L_08AE461C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4630u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4630u) goto L_08AE4630;
    return;
L_08AE4630:
    ctx.set_gpr(31, 0x08AE4638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4638u) goto L_08AE4638;
    return;
L_08AE4638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE464Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE464Cu) goto L_08AE464C;
    return;
L_08AE464C:
    ctx.set_gpr(31, 0x08AE4654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4654u) goto L_08AE4654;
    return;
L_08AE4654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4660u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE4660u) goto L_08AE4660;
    return;
L_08AE4660:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4684;
      }
      goto L_08AE4668;
    }
L_08AE4668:
    ctx.set_gpr(31, 0x08AE4670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4670u) goto L_08AE4670;
    return;
L_08AE4670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE467Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE467Cu) goto L_08AE467C;
    return;
L_08AE467C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE473C;
      }
      goto L_08AE4684;
    }
L_08AE4684:
    ctx.set_gpr(31, 0x08AE468Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE468Cu) goto L_08AE468C;
    return;
L_08AE468C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE46A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE46A0u) goto L_08AE46A0;
    return;
L_08AE46A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE46D0;
      }
      goto L_08AE46AC;
    }
L_08AE46AC:
    ctx.set_gpr(31, 0x08AE46B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE46B4u) goto L_08AE46B4;
    return;
L_08AE46B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE46C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE46C8u) goto L_08AE46C8;
    return;
L_08AE46C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE46F0;
      }
      goto L_08AE46D0;
    }
L_08AE46D0:
    ctx.set_gpr(31, 0x08AE46D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE46D8u) goto L_08AE46D8;
    return;
L_08AE46D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE46ECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE46ECu) goto L_08AE46EC;
    return;
L_08AE46EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE46F0;
L_08AE46F0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AE46FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1104u, 0x08A93DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE46FCu) goto L_08AE46FC;
    return;
L_08AE46FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AE4A48;
    }
    goto L_08AE4714;
L_08AE4714:
    ctx.set_gpr(31, 0x08AE471Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE471Cu) goto L_08AE471C;
    return;
L_08AE471C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4730u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4730u) goto L_08AE4730;
    return;
L_08AE4730:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A48;
      }
      goto L_08AE473C;
    }
L_08AE473C:
    ctx.set_gpr(31, 0x08AE4744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4744u) goto L_08AE4744;
    return;
L_08AE4744:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4750u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE4750u) goto L_08AE4750;
    return;
L_08AE4750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4810;
      }
      goto L_08AE4758;
    }
L_08AE4758:
    ctx.set_gpr(31, 0x08AE4760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4760u) goto L_08AE4760;
    return;
L_08AE4760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4774u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4774u) goto L_08AE4774;
    return;
L_08AE4774:
    ctx.set_gpr(31, 0x08AE477Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE477Cu) goto L_08AE477C;
    return;
L_08AE477C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE479Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE479Cu) goto L_08AE479C;
    return;
L_08AE479C:
    ctx.set_gpr(31, 0x08AE47A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE47A4u) goto L_08AE47A4;
    return;
L_08AE47A4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE47C4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE47C4u) goto L_08AE47C4;
    return;
L_08AE47C4:
    ctx.set_gpr(31, 0x08AE47CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE47CCu) goto L_08AE47CC;
    return;
L_08AE47CC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE47ECu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE47ECu) goto L_08AE47EC;
    return;
L_08AE47EC:
    ctx.set_gpr(31, 0x08AE47F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE47F4u) goto L_08AE47F4;
    return;
L_08AE47F4:
    ctx.set_gpr(31, 0x08AE47FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE47FCu) goto L_08AE47FC;
    return;
L_08AE47FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AE4808u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4808u) goto L_08AE4808;
    return;
L_08AE4808:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE4A48;
      }
      goto L_08AE4810;
    }
L_08AE4810:
    ctx.set_gpr(31, 0x08AE4818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4818u) goto L_08AE4818;
    return;
L_08AE4818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4824u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE4824u) goto L_08AE4824;
    return;
L_08AE4824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4878;
      }
      goto L_08AE482C;
    }
L_08AE482C:
    ctx.set_gpr(31, 0x08AE4834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4834u) goto L_08AE4834;
    return;
L_08AE4834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4848u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4848u) goto L_08AE4848;
    return;
L_08AE4848:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE4858u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4858u) goto L_08AE4858;
    return;
L_08AE4858:
    ctx.set_gpr(31, 0x08AE4860u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4860u) goto L_08AE4860;
    return;
L_08AE4860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4870u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4870u) goto L_08AE4870;
    return;
L_08AE4870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A44;
      }
      goto L_08AE4878;
    }
L_08AE4878:
    ctx.set_gpr(31, 0x08AE4880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4880u) goto L_08AE4880;
    return;
L_08AE4880:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE488Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE488Cu) goto L_08AE488C;
    return;
L_08AE488C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE49B4;
      }
      goto L_08AE4894;
    }
L_08AE4894:
    ctx.set_gpr(31, 0x08AE489Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE489Cu) goto L_08AE489C;
    return;
L_08AE489C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE48B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE48B0u) goto L_08AE48B0;
    return;
L_08AE48B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE48E0;
      }
      goto L_08AE48BC;
    }
L_08AE48BC:
    ctx.set_gpr(31, 0x08AE48C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE48C4u) goto L_08AE48C4;
    return;
L_08AE48C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE48D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE48D8u) goto L_08AE48D8;
    return;
L_08AE48D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE48FC;
      }
      goto L_08AE48E0;
    }
L_08AE48E0:
    ctx.set_gpr(31, 0x08AE48E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE48E8u) goto L_08AE48E8;
    return;
L_08AE48E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE48FCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE48FCu) goto L_08AE48FC;
    return;
L_08AE48FC:
    ctx.set_gpr(31, 0x08AE4904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4904u) goto L_08AE4904;
    return;
L_08AE4904:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4924u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4924u) goto L_08AE4924;
    return;
L_08AE4924:
    ctx.set_gpr(31, 0x08AE492Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE492Cu) goto L_08AE492C;
    return;
L_08AE492C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE494Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE494Cu) goto L_08AE494C;
    return;
L_08AE494C:
    ctx.set_gpr(31, 0x08AE4954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4954u) goto L_08AE4954;
    return;
L_08AE4954:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4974u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4974u) goto L_08AE4974;
    return;
L_08AE4974:
    ctx.set_gpr(31, 0x08AE497Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE497Cu) goto L_08AE497C;
    return;
L_08AE497C:
    ctx.set_gpr(31, 0x08AE4984u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4984u) goto L_08AE4984;
    return;
L_08AE4984:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AE4990u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4990u) goto L_08AE4990;
    return;
L_08AE4990:
    ctx.set_gpr(31, 0x08AE4998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4998u) goto L_08AE4998;
    return;
L_08AE4998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08AE49ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE49ACu) goto L_08AE49AC;
    return;
L_08AE49AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A44;
      }
      goto L_08AE49B4;
    }
L_08AE49B4:
    ctx.set_gpr(31, 0x08AE49BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE49BCu) goto L_08AE49BC;
    return;
L_08AE49BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE49C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE49C8u) goto L_08AE49C8;
    return;
L_08AE49C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A44;
      }
      goto L_08AE49D0;
    }
L_08AE49D0:
    ctx.set_gpr(31, 0x08AE49D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE49D8u) goto L_08AE49D8;
    return;
L_08AE49D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE49ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE49ECu) goto L_08AE49EC;
    return;
L_08AE49EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A1C;
      }
      goto L_08AE49F8;
    }
L_08AE49F8:
    ctx.set_gpr(31, 0x08AE4A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A00u) goto L_08AE4A00;
    return;
L_08AE4A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4A14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4A14u) goto L_08AE4A14;
    return;
L_08AE4A14:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE4A3C;
      }
      goto L_08AE4A1C;
    }
L_08AE4A1C:
    ctx.set_gpr(31, 0x08AE4A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A24u) goto L_08AE4A24;
    return;
L_08AE4A24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4A38u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4A38u) goto L_08AE4A38;
    return;
L_08AE4A38:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    goto L_08AE4A3C;
L_08AE4A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4A48;
      }
      goto L_08AE4A44;
    }
L_08AE4A44:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE4A48;
L_08AE4A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4A5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(161)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE4B1C;
      }
      goto L_08AE4A7C;
    }
L_08AE4A7C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4AB4;
      }
      goto L_08AE4A84;
    }
L_08AE4A84:
    ctx.set_gpr(31, 0x08AE4A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A8Cu) goto L_08AE4A8C;
    return;
L_08AE4A8C:
    ctx.set_gpr(31, 0x08AE4A94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A94u) goto L_08AE4A94;
    return;
L_08AE4A94:
    ctx.set_gpr(31, 0x08AE4A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4A9Cu) goto L_08AE4A9C;
    return;
L_08AE4A9C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4AACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7628));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4AACu) goto L_08AE4AAC;
    return;
L_08AE4AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4B18;
      }
      goto L_08AE4AB4;
    }
L_08AE4AB4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4AEC;
      }
      goto L_08AE4ABC;
    }
L_08AE4ABC:
    ctx.set_gpr(31, 0x08AE4AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4AC4u) goto L_08AE4AC4;
    return;
L_08AE4AC4:
    ctx.set_gpr(31, 0x08AE4ACCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4ACCu) goto L_08AE4ACC;
    return;
L_08AE4ACC:
    ctx.set_gpr(31, 0x08AE4AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4AD4u) goto L_08AE4AD4;
    return;
L_08AE4AD4:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4AE4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7672));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4AE4u) goto L_08AE4AE4;
    return;
L_08AE4AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4B14;
      }
      goto L_08AE4AEC;
    }
L_08AE4AEC:
    ctx.set_gpr(31, 0x08AE4AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4AF4u) goto L_08AE4AF4;
    return;
L_08AE4AF4:
    ctx.set_gpr(31, 0x08AE4AFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4AFCu) goto L_08AE4AFC;
    return;
L_08AE4AFC:
    ctx.set_gpr(31, 0x08AE4B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B04u) goto L_08AE4B04;
    return;
L_08AE4B04:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4B14u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7712));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE4B14u) goto L_08AE4B14;
    return;
L_08AE4B14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE4B18;
L_08AE4B18:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08AE4B1C;
L_08AE4B1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08AE4BA4;
    }
    goto L_08AE4B28;
L_08AE4B28:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4B64;
      }
      goto L_08AE4B30;
    }
L_08AE4B30:
    ctx.set_gpr(31, 0x08AE4B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B38u) goto L_08AE4B38;
    return;
L_08AE4B38:
    ctx.set_gpr(31, 0x08AE4B40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B40u) goto L_08AE4B40;
    return;
L_08AE4B40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08AE4B5Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B5Cu) goto L_08AE4B5C;
    return;
L_08AE4B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4B9C;
      }
      goto L_08AE4B64;
    }
L_08AE4B64:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4B98;
      }
      goto L_08AE4B6C;
    }
L_08AE4B6C:
    ctx.set_gpr(31, 0x08AE4B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B74u) goto L_08AE4B74;
    return;
L_08AE4B74:
    ctx.set_gpr(31, 0x08AE4B7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B7Cu) goto L_08AE4B7C;
    return;
L_08AE4B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(31, 0x08AE4B98u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B98u) goto L_08AE4B98;
    return;
L_08AE4B98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE4B9C;
L_08AE4B9C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_08AE4BA4;
L_08AE4BA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4BC8;
      }
      goto L_08AE4BAC;
    }
L_08AE4BAC:
    ctx.set_gpr(31, 0x08AE4BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4BB4u) goto L_08AE4BB4;
    return;
L_08AE4BB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4BC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4BC8u) goto L_08AE4BC8;
    return;
L_08AE4BC8:
    ctx.set_gpr(31, 0x08AE4BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4BD0u) goto L_08AE4BD0;
    return;
L_08AE4BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE4BE4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4BE4u) goto L_08AE4BE4;
    return;
L_08AE4BE4:
    ctx.set_gpr(31, 0x08AE4BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4BECu) goto L_08AE4BEC;
    return;
L_08AE4BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE4C00u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4C00u) goto L_08AE4C00;
    return;
L_08AE4C00:
    ctx.set_gpr(31, 0x08AE4C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4C08u) goto L_08AE4C08;
    return;
L_08AE4C08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE4C1Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4C1Cu) goto L_08AE4C1C;
    return;
L_08AE4C1C:
    ctx.set_gpr(31, 0x08AE4C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4C24u) goto L_08AE4C24;
    return;
L_08AE4C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE4C38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4C38u) goto L_08AE4C38;
    return;
L_08AE4C38:
    ctx.set_gpr(31, 0x08AE4C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4C40u) goto L_08AE4C40;
    return;
L_08AE4C40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4C4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE4C4Cu) goto L_08AE4C4C;
    return;
L_08AE4C4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4C7C;
      }
      goto L_08AE4C54;
    }
L_08AE4C54:
    ctx.set_gpr(31, 0x08AE4C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4C5Cu) goto L_08AE4C5C;
    return;
L_08AE4C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4C70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4C70u) goto L_08AE4C70;
    return;
L_08AE4C70:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4FA8;
      }
      goto L_08AE4C7C;
    }
L_08AE4C7C:
    ctx.set_gpr(31, 0x08AE4C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4C84u) goto L_08AE4C84;
    return;
L_08AE4C84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4C90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4C90u) goto L_08AE4C90;
    return;
L_08AE4C90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4CC0;
      }
      goto L_08AE4C98;
    }
L_08AE4C98:
    ctx.set_gpr(31, 0x08AE4CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4CA0u) goto L_08AE4CA0;
    return;
L_08AE4CA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4CB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4CB4u) goto L_08AE4CB4;
    return;
L_08AE4CB4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4FA8;
      }
      goto L_08AE4CC0;
    }
L_08AE4CC0:
    ctx.set_gpr(31, 0x08AE4CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4CC8u) goto L_08AE4CC8;
    return;
L_08AE4CC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4CD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4CD4u) goto L_08AE4CD4;
    return;
L_08AE4CD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4D50;
      }
      goto L_08AE4CDC;
    }
L_08AE4CDC:
    ctx.set_gpr(31, 0x08AE4CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4CE4u) goto L_08AE4CE4;
    return;
L_08AE4CE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4CF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4CF8u) goto L_08AE4CF8;
    return;
L_08AE4CF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4D28;
      }
      goto L_08AE4D04;
    }
L_08AE4D04:
    ctx.set_gpr(31, 0x08AE4D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D0Cu) goto L_08AE4D0C;
    return;
L_08AE4D0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4D20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D20u) goto L_08AE4D20;
    return;
L_08AE4D20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4D48;
      }
      goto L_08AE4D28;
    }
L_08AE4D28:
    ctx.set_gpr(31, 0x08AE4D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D30u) goto L_08AE4D30;
    return;
L_08AE4D30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4D44u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D44u) goto L_08AE4D44;
    return;
L_08AE4D44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE4D48;
L_08AE4D48:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AE4FA8;
      }
      goto L_08AE4D50;
    }
L_08AE4D50:
    ctx.set_gpr(31, 0x08AE4D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D58u) goto L_08AE4D58;
    return;
L_08AE4D58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4D64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D64u) goto L_08AE4D64;
    return;
L_08AE4D64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4E24;
      }
      goto L_08AE4D6C;
    }
L_08AE4D6C:
    ctx.set_gpr(31, 0x08AE4D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D74u) goto L_08AE4D74;
    return;
L_08AE4D74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4D88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4D88u) goto L_08AE4D88;
    return;
L_08AE4D88:
    ctx.set_gpr(31, 0x08AE4D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4D90u) goto L_08AE4D90;
    return;
L_08AE4D90:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4DB0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4DB0u) goto L_08AE4DB0;
    return;
L_08AE4DB0:
    ctx.set_gpr(31, 0x08AE4DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4DB8u) goto L_08AE4DB8;
    return;
L_08AE4DB8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4DD8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4DD8u) goto L_08AE4DD8;
    return;
L_08AE4DD8:
    ctx.set_gpr(31, 0x08AE4DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4DE0u) goto L_08AE4DE0;
    return;
L_08AE4DE0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4E00u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E00u) goto L_08AE4E00;
    return;
L_08AE4E00:
    ctx.set_gpr(31, 0x08AE4E08u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E08u) goto L_08AE4E08;
    return;
L_08AE4E08:
    ctx.set_gpr(31, 0x08AE4E10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E10u) goto L_08AE4E10;
    return;
L_08AE4E10:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AE4E1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E1Cu) goto L_08AE4E1C;
    return;
L_08AE4E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE4FA8;
      }
      goto L_08AE4E24;
    }
L_08AE4E24:
    ctx.set_gpr(31, 0x08AE4E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E2Cu) goto L_08AE4E2C;
    return;
L_08AE4E2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4E38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E38u) goto L_08AE4E38;
    return;
L_08AE4E38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4E8C;
      }
      goto L_08AE4E40;
    }
L_08AE4E40:
    ctx.set_gpr(31, 0x08AE4E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E48u) goto L_08AE4E48;
    return;
L_08AE4E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4E5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E5Cu) goto L_08AE4E5C;
    return;
L_08AE4E5C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AE4E6Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E6Cu) goto L_08AE4E6C;
    return;
L_08AE4E6C:
    ctx.set_gpr(31, 0x08AE4E74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E74u) goto L_08AE4E74;
    return;
L_08AE4E74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4E84u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E84u) goto L_08AE4E84;
    return;
L_08AE4E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4FA4;
      }
      goto L_08AE4E8C;
    }
L_08AE4E8C:
    ctx.set_gpr(31, 0x08AE4E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E94u) goto L_08AE4E94;
    return;
L_08AE4E94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE4EA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4EA0u) goto L_08AE4EA0;
    return;
L_08AE4EA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4FA4;
      }
      goto L_08AE4EA8;
    }
L_08AE4EA8:
    ctx.set_gpr(31, 0x08AE4EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EB0u) goto L_08AE4EB0;
    return;
L_08AE4EB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE4EC4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EC4u) goto L_08AE4EC4;
    return;
L_08AE4EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4EF4;
      }
      goto L_08AE4ED0;
    }
L_08AE4ED0:
    ctx.set_gpr(31, 0x08AE4ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4ED8u) goto L_08AE4ED8;
    return;
L_08AE4ED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4EECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EECu) goto L_08AE4EEC;
    return;
L_08AE4EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4F10;
      }
      goto L_08AE4EF4;
    }
L_08AE4EF4:
    ctx.set_gpr(31, 0x08AE4EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4EFCu) goto L_08AE4EFC;
    return;
L_08AE4EFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE4F10u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F10u) goto L_08AE4F10;
    return;
L_08AE4F10:
    ctx.set_gpr(31, 0x08AE4F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F18u) goto L_08AE4F18;
    return;
L_08AE4F18:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4F38u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F38u) goto L_08AE4F38;
    return;
L_08AE4F38:
    ctx.set_gpr(31, 0x08AE4F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F40u) goto L_08AE4F40;
    return;
L_08AE4F40:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4F60u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F60u) goto L_08AE4F60;
    return;
L_08AE4F60:
    ctx.set_gpr(31, 0x08AE4F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F68u) goto L_08AE4F68;
    return;
L_08AE4F68:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE4F88u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F88u) goto L_08AE4F88;
    return;
L_08AE4F88:
    ctx.set_gpr(31, 0x08AE4F90u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F90u) goto L_08AE4F90;
    return;
L_08AE4F90:
    ctx.set_gpr(31, 0x08AE4F98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F98u) goto L_08AE4F98;
    return;
L_08AE4F98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AE4FA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4FA4u) goto L_08AE4FA4;
    return;
L_08AE4FA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE4FA8;
L_08AE4FA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4FBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AE4FD0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FD0u) goto L_08AE4FD0;
    return;
L_08AE4FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE4FE4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4FE4u) goto L_08AE4FE4;
    return;
L_08AE4FE4:
    ctx.set_gpr(31, 0x08AE4FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FECu) goto L_08AE4FEC;
    return;
L_08AE4FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE5000u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5000u) goto L_08AE5000;
    return;
L_08AE5000:
    ctx.set_gpr(31, 0x08AE5008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5008u) goto L_08AE5008;
    return;
L_08AE5008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE501Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE501Cu) goto L_08AE501C;
    return;
L_08AE501C:
    ctx.set_gpr(31, 0x08AE5024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5024u) goto L_08AE5024;
    return;
L_08AE5024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE5038u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5038u) goto L_08AE5038;
    return;
L_08AE5038:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5068;
      }
      goto L_08AE5044;
    }
L_08AE5044:
    ctx.set_gpr(31, 0x08AE504Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE504Cu) goto L_08AE504C;
    return;
L_08AE504C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5060u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5060u) goto L_08AE5060;
    return;
L_08AE5060:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
      if (branch_taken) {
          goto L_08AE5088;
      }
      goto L_08AE5068;
    }
L_08AE5068:
    ctx.set_gpr(31, 0x08AE5070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5070u) goto L_08AE5070;
    return;
L_08AE5070:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5084u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5084u) goto L_08AE5084;
    return;
L_08AE5084:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    goto L_08AE5088;
L_08AE5088:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(161)));
        goto L_08AE50DC;
    }
    goto L_08AE5090;
L_08AE5090:
    ctx.set_gpr(31, 0x08AE5098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE5098u) goto L_08AE5098;
    return;
L_08AE5098:
    ctx.set_gpr(31, 0x08AE50A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AE50A0u) goto L_08AE50A0;
    return;
L_08AE50A0:
    ctx.set_gpr(31, 0x08AE50A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE50A8u) goto L_08AE50A8;
    return;
L_08AE50A8:
    ctx.set_gpr(31, 0x08AE50B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE50B0u) goto L_08AE50B0;
    return;
L_08AE50B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08AE50D0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE50D0u) goto L_08AE50D0;
    return;
L_08AE50D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(161)));
    goto L_08AE50DC;
L_08AE50DC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(141)));
        goto L_08AE5118;
    }
    goto L_08AE50E4;
L_08AE50E4:
    ctx.set_gpr(31, 0x08AE50ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE50ECu) goto L_08AE50EC;
    return;
L_08AE50EC:
    ctx.set_gpr(31, 0x08AE50F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE50F4u) goto L_08AE50F4;
    return;
L_08AE50F4:
    ctx.set_gpr(31, 0x08AE50FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE50FCu) goto L_08AE50FC;
    return;
L_08AE50FC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE510Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7732));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE510Cu) goto L_08AE510C;
    return;
L_08AE510C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(141)));
    goto L_08AE5118;
L_08AE5118:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5634;
      }
      goto L_08AE5120;
    }
L_08AE5120:
    ctx.set_gpr(31, 0x08AE5128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5128u) goto L_08AE5128;
    return;
L_08AE5128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5134u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE5134u) goto L_08AE5134;
    return;
L_08AE5134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE51B0;
      }
      goto L_08AE513C;
    }
L_08AE513C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE516C;
      }
      goto L_08AE5148;
    }
L_08AE5148:
    ctx.set_gpr(31, 0x08AE5150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5150u) goto L_08AE5150;
    return;
L_08AE5150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5164u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5164u) goto L_08AE5164;
    return;
L_08AE5164:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
      if (branch_taken) {
          goto L_08AE518C;
      }
      goto L_08AE516C;
    }
L_08AE516C:
    ctx.set_gpr(31, 0x08AE5174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5174u) goto L_08AE5174;
    return;
L_08AE5174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5188u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5188u) goto L_08AE5188;
    return;
L_08AE5188:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    goto L_08AE518C;
L_08AE518C:
    ctx.set_gpr(31, 0x08AE5194u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5194u) goto L_08AE5194;
    return;
L_08AE5194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE51A8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE51A8u) goto L_08AE51A8;
    return;
L_08AE51A8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
      if (branch_taken) {
          goto L_08AE5300;
      }
      goto L_08AE51B0;
    }
L_08AE51B0:
    ctx.set_gpr(31, 0x08AE51B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE51B8u) goto L_08AE51B8;
    return;
L_08AE51B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE51C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE51C4u) goto L_08AE51C4;
    return;
L_08AE51C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5300;
      }
      goto L_08AE51CC;
    }
L_08AE51CC:
    ctx.set_gpr(31, 0x08AE51D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE51D4u) goto L_08AE51D4;
    return;
L_08AE51D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE51E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE51E8u) goto L_08AE51E8;
    return;
L_08AE51E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5218;
      }
      goto L_08AE51F4;
    }
L_08AE51F4:
    ctx.set_gpr(31, 0x08AE51FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE51FCu) goto L_08AE51FC;
    return;
L_08AE51FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5210u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5210u) goto L_08AE5210;
    return;
L_08AE5210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5234;
      }
      goto L_08AE5218;
    }
L_08AE5218:
    ctx.set_gpr(31, 0x08AE5220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5220u) goto L_08AE5220;
    return;
L_08AE5220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5234u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5234u) goto L_08AE5234;
    return;
L_08AE5234:
    ctx.set_gpr(31, 0x08AE523Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE523Cu) goto L_08AE523C;
    return;
L_08AE523C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE5250u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5250u) goto L_08AE5250;
    return;
L_08AE5250:
    ctx.set_gpr(31, 0x08AE5258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5258u) goto L_08AE5258;
    return;
L_08AE5258:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE5278u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5278u) goto L_08AE5278;
    return;
L_08AE5278:
    ctx.set_gpr(31, 0x08AE5280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5280u) goto L_08AE5280;
    return;
L_08AE5280:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE52A0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE52A0u) goto L_08AE52A0;
    return;
L_08AE52A0:
    ctx.set_gpr(31, 0x08AE52A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE52A8u) goto L_08AE52A8;
    return;
L_08AE52A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE52C8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE52C8u) goto L_08AE52C8;
    return;
L_08AE52C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AE52D4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE52D4u) goto L_08AE52D4;
    return;
L_08AE52D4:
    ctx.set_gpr(31, 0x08AE52DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE52DCu) goto L_08AE52DC;
    return;
L_08AE52DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AE52ECu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE52ECu) goto L_08AE52EC;
    return;
L_08AE52EC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    goto L_08AE5300;
L_08AE5300:
    ctx.set_gpr(31, 0x08AE5308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5308u) goto L_08AE5308;
    return;
L_08AE5308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5314u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE5314u) goto L_08AE5314;
    return;
L_08AE5314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5440;
      }
      goto L_08AE531C;
    }
L_08AE531C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE534C;
      }
      goto L_08AE5328;
    }
L_08AE5328:
    ctx.set_gpr(31, 0x08AE5330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5330u) goto L_08AE5330;
    return;
L_08AE5330:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5344u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5344u) goto L_08AE5344;
    return;
L_08AE5344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5368;
      }
      goto L_08AE534C;
    }
L_08AE534C:
    ctx.set_gpr(31, 0x08AE5354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5354u) goto L_08AE5354;
    return;
L_08AE5354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5368u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5368u) goto L_08AE5368;
    return;
L_08AE5368:
    ctx.set_gpr(31, 0x08AE5370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5370u) goto L_08AE5370;
    return;
L_08AE5370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5384u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5384u) goto L_08AE5384;
    return;
L_08AE5384:
    ctx.set_gpr(31, 0x08AE538Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE538Cu) goto L_08AE538C;
    return;
L_08AE538C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE53A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE53A0u) goto L_08AE53A0;
    return;
L_08AE53A0:
    ctx.set_gpr(31, 0x08AE53A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE53A8u) goto L_08AE53A8;
    return;
L_08AE53A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE53C8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE53C8u) goto L_08AE53C8;
    return;
L_08AE53C8:
    ctx.set_gpr(31, 0x08AE53D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE53D0u) goto L_08AE53D0;
    return;
L_08AE53D0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE53F0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE53F0u) goto L_08AE53F0;
    return;
L_08AE53F0:
    ctx.set_gpr(31, 0x08AE53F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE53F8u) goto L_08AE53F8;
    return;
L_08AE53F8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE5418u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5418u) goto L_08AE5418;
    return;
L_08AE5418:
    ctx.set_gpr(31, 0x08AE5420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE5420u) goto L_08AE5420;
    return;
L_08AE5420:
    ctx.set_gpr(31, 0x08AE5428u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE5428u) goto L_08AE5428;
    return;
L_08AE5428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5434u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5434u) goto L_08AE5434;
    return;
L_08AE5434:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08AE576C;
      }
      goto L_08AE5440;
    }
L_08AE5440:
    ctx.set_gpr(31, 0x08AE5448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5448u) goto L_08AE5448;
    return;
L_08AE5448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5454u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE5454u) goto L_08AE5454;
    return;
L_08AE5454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE54F4;
      }
      goto L_08AE545C;
    }
L_08AE545C:
    ctx.set_gpr(31, 0x08AE5464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5464u) goto L_08AE5464;
    return;
L_08AE5464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5478u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5478u) goto L_08AE5478;
    return;
L_08AE5478:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE54A8;
      }
      goto L_08AE5484;
    }
L_08AE5484:
    ctx.set_gpr(31, 0x08AE548Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE548Cu) goto L_08AE548C;
    return;
L_08AE548C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE54A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE54A0u) goto L_08AE54A0;
    return;
L_08AE54A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE54C4;
      }
      goto L_08AE54A8;
    }
L_08AE54A8:
    ctx.set_gpr(31, 0x08AE54B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE54B0u) goto L_08AE54B0;
    return;
L_08AE54B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE54C4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE54C4u) goto L_08AE54C4;
    return;
L_08AE54C4:
    ctx.set_gpr(31, 0x08AE54CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE54CCu) goto L_08AE54CC;
    return;
L_08AE54CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08AE54E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE54E0u) goto L_08AE54E0;
    return;
L_08AE54E0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE5770;
      }
      goto L_08AE54F4;
    }
L_08AE54F4:
    ctx.set_gpr(31, 0x08AE54FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE54FCu) goto L_08AE54FC;
    return;
L_08AE54FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5508u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE5508u) goto L_08AE5508;
    return;
L_08AE5508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE559C;
      }
      goto L_08AE5510;
    }
L_08AE5510:
    ctx.set_gpr(31, 0x08AE5518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5518u) goto L_08AE5518;
    return;
L_08AE5518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE552Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE552Cu) goto L_08AE552C;
    return;
L_08AE552C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE555C;
      }
      goto L_08AE5538;
    }
L_08AE5538:
    ctx.set_gpr(31, 0x08AE5540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5540u) goto L_08AE5540;
    return;
L_08AE5540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5554u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5554u) goto L_08AE5554;
    return;
L_08AE5554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5578;
      }
      goto L_08AE555C;
    }
L_08AE555C:
    ctx.set_gpr(31, 0x08AE5564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5564u) goto L_08AE5564;
    return;
L_08AE5564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5578u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5578u) goto L_08AE5578;
    return;
L_08AE5578:
    ctx.set_gpr(31, 0x08AE5580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5580u) goto L_08AE5580;
    return;
L_08AE5580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08AE5594u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5594u) goto L_08AE5594;
    return;
L_08AE5594:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
      if (branch_taken) {
          goto L_08AE576C;
      }
      goto L_08AE559C;
    }
L_08AE559C:
    ctx.set_gpr(31, 0x08AE55A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE55A4u) goto L_08AE55A4;
    return;
L_08AE55A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE55B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE55B0u) goto L_08AE55B0;
    return;
L_08AE55B0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AE5770;
    }
    goto L_08AE55B8;
L_08AE55B8:
    ctx.set_gpr(31, 0x08AE55C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE55C0u) goto L_08AE55C0;
    return;
L_08AE55C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE55D4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE55D4u) goto L_08AE55D4;
    return;
L_08AE55D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5604;
      }
      goto L_08AE55E0;
    }
L_08AE55E0:
    ctx.set_gpr(31, 0x08AE55E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE55E8u) goto L_08AE55E8;
    return;
L_08AE55E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE55FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE55FCu) goto L_08AE55FC;
    return;
L_08AE55FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE5624;
      }
      goto L_08AE5604;
    }
L_08AE5604:
    ctx.set_gpr(31, 0x08AE560Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE560Cu) goto L_08AE560C;
    return;
L_08AE560C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5620u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5620u) goto L_08AE5620;
    return;
L_08AE5620:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE5624;
L_08AE5624:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE5770;
      }
      goto L_08AE5634;
    }
L_08AE5634:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE576C;
      }
      goto L_08AE563C;
    }
L_08AE563C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE566C;
      }
      goto L_08AE5648;
    }
L_08AE5648:
    ctx.set_gpr(31, 0x08AE5650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5650u) goto L_08AE5650;
    return;
L_08AE5650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5664u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5664u) goto L_08AE5664;
    return;
L_08AE5664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5688;
      }
      goto L_08AE566C;
    }
L_08AE566C:
    ctx.set_gpr(31, 0x08AE5674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5674u) goto L_08AE5674;
    return;
L_08AE5674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5688u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5688u) goto L_08AE5688;
    return;
L_08AE5688:
    ctx.set_gpr(31, 0x08AE5690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5690u) goto L_08AE5690;
    return;
L_08AE5690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE56A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE56A4u) goto L_08AE56A4;
    return;
L_08AE56A4:
    ctx.set_gpr(31, 0x08AE56ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE56ACu) goto L_08AE56AC;
    return;
L_08AE56AC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE56CCu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE56CCu) goto L_08AE56CC;
    return;
L_08AE56CC:
    ctx.set_gpr(31, 0x08AE56D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE56D4u) goto L_08AE56D4;
    return;
L_08AE56D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE56F4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE56F4u) goto L_08AE56F4;
    return;
L_08AE56F4:
    ctx.set_gpr(31, 0x08AE56FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE56FCu) goto L_08AE56FC;
    return;
L_08AE56FC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE571Cu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE571Cu) goto L_08AE571C;
    return;
L_08AE571C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5734;
      }
      goto L_08AE5728;
    }
L_08AE5728:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE576C;
      }
      goto L_08AE5734;
    }
L_08AE5734:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE576C;
      }
      goto L_08AE573C;
    }
L_08AE573C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE5770;
      }
      goto L_08AE576C;
    }
L_08AE576C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE5770;
L_08AE5770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE57BC;
      }
      goto L_08AE5798;
    }
L_08AE5798:
    ctx.set_gpr(31, 0x08AE57A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE57A0u) goto L_08AE57A0;
    return;
L_08AE57A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE57B4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE57B4u) goto L_08AE57B4;
    return;
L_08AE57B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE57D8;
      }
      goto L_08AE57BC;
    }
L_08AE57BC:
    ctx.set_gpr(31, 0x08AE57C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE57C4u) goto L_08AE57C4;
    return;
L_08AE57C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE57D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE57D8u) goto L_08AE57D8;
    return;
L_08AE57D8:
    ctx.set_gpr(31, 0x08AE57E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE57E0u) goto L_08AE57E0;
    return;
L_08AE57E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE57F4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE57F4u) goto L_08AE57F4;
    return;
L_08AE57F4:
    ctx.set_gpr(31, 0x08AE57FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE57FCu) goto L_08AE57FC;
    return;
L_08AE57FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE5810u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5810u) goto L_08AE5810;
    return;
L_08AE5810:
    ctx.set_gpr(31, 0x08AE5818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5818u) goto L_08AE5818;
    return;
L_08AE5818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE582Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE582Cu) goto L_08AE582C;
    return;
L_08AE582C:
    ctx.set_gpr(31, 0x08AE5834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5834u) goto L_08AE5834;
    return;
L_08AE5834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE5848u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5848u) goto L_08AE5848;
    return;
L_08AE5848:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE5C40;
      }
      goto L_08AE5858;
    }
L_08AE5858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE5BC8;
      }
      goto L_08AE5864;
    }
L_08AE5864:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE5B9C;
      }
      goto L_08AE5870;
    }
L_08AE5870:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5880;
      }
      goto L_08AE5878;
    }
L_08AE5878:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE5CEC;
      }
      goto L_08AE5880;
    }
L_08AE5880:
    ctx.set_gpr(31, 0x08AE5888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5888u) goto L_08AE5888;
    return;
L_08AE5888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5894u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE5894u) goto L_08AE5894;
    return;
L_08AE5894:
    ctx.set_gpr(31, 0x08AE589Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE589Cu) goto L_08AE589C;
    return;
L_08AE589C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(310));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(205));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AE58CCu);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE58CCu) goto L_08AE58CC;
    return;
L_08AE58CC:
    ctx.set_gpr(31, 0x08AE58D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE58D4u) goto L_08AE58D4;
    return;
L_08AE58D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE58E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE58E4u) goto L_08AE58E4;
    return;
L_08AE58E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE58F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE58F0u) goto L_08AE58F0;
    return;
L_08AE58F0:
    ctx.set_gpr(31, 0x08AE58F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE58F8u) goto L_08AE58F8;
    return;
L_08AE58F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5908u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5908u) goto L_08AE5908;
    return;
L_08AE5908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5914u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5914u) goto L_08AE5914;
    return;
L_08AE5914:
    ctx.set_gpr(31, 0x08AE591Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE591Cu) goto L_08AE591C;
    return;
L_08AE591C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE592Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE592Cu) goto L_08AE592C;
    return;
L_08AE592C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7752));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE594Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE594Cu) goto L_08AE594C;
    return;
L_08AE594C:
    ctx.set_gpr(31, 0x08AE5954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5954u) goto L_08AE5954;
    return;
L_08AE5954:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5964u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5964u) goto L_08AE5964;
    return;
L_08AE5964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7788));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5984u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE5984u) goto L_08AE5984;
    return;
L_08AE5984:
    ctx.set_gpr(31, 0x08AE598Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE598Cu) goto L_08AE598C;
    return;
L_08AE598C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE599Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE599Cu) goto L_08AE599C;
    return;
L_08AE599C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7824));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE59BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE59BCu) goto L_08AE59BC;
    return;
L_08AE59BC:
    ctx.set_gpr(31, 0x08AE59C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE59C4u) goto L_08AE59C4;
    return;
L_08AE59C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE59D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE59D4u) goto L_08AE59D4;
    return;
L_08AE59D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7864));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE59F4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE59F4u) goto L_08AE59F4;
    return;
L_08AE59F4:
    ctx.set_gpr(31, 0x08AE59FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE59FCu) goto L_08AE59FC;
    return;
L_08AE59FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5A0Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5A0Cu) goto L_08AE5A0C;
    return;
L_08AE5A0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7908));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5A2Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE5A2Cu) goto L_08AE5A2C;
    return;
L_08AE5A2C:
    ctx.set_gpr(31, 0x08AE5A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5A34u) goto L_08AE5A34;
    return;
L_08AE5A34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5A44u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5A44u) goto L_08AE5A44;
    return;
L_08AE5A44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7956));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5A64u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE5A64u) goto L_08AE5A64;
    return;
L_08AE5A64:
    ctx.set_gpr(31, 0x08AE5A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5A6Cu) goto L_08AE5A6C;
    return;
L_08AE5A6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5A7Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5A7Cu) goto L_08AE5A7C;
    return;
L_08AE5A7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7976));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5A9Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE5A9Cu) goto L_08AE5A9C;
    return;
L_08AE5A9C:
    ctx.set_gpr(31, 0x08AE5AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5AA4u) goto L_08AE5AA4;
    return;
L_08AE5AA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5AB4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5AB4u) goto L_08AE5AB4;
    return;
L_08AE5AB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8008));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5AD4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE5AD4u) goto L_08AE5AD4;
    return;
L_08AE5AD4:
    ctx.set_gpr(31, 0x08AE5ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE5ADCu) goto L_08AE5ADC;
    return;
L_08AE5ADC:
    ctx.set_gpr(31, 0x08AE5AE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE5AE4u) goto L_08AE5AE4;
    return;
L_08AE5AE4:
    ctx.set_gpr(31, 0x08AE5AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE5AECu) goto L_08AE5AEC;
    return;
L_08AE5AEC:
    ctx.set_gpr(31, 0x08AE5AF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AE5AF4u) goto L_08AE5AF4;
    return;
L_08AE5AF4:
    ctx.set_gpr(31, 0x08AE5AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE5AFCu) goto L_08AE5AFC;
    return;
L_08AE5AFC:
    ctx.set_gpr(31, 0x08AE5B04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B04u) goto L_08AE5B04;
    return;
L_08AE5B04:
    ctx.set_gpr(31, 0x08AE5B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B0Cu) goto L_08AE5B0C;
    return;
L_08AE5B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5B18u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B18u) goto L_08AE5B18;
    return;
L_08AE5B18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AE5B24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 950u, 0x08AE3478u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B24u) goto L_08AE5B24;
    return;
L_08AE5B24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5B54;
      }
      goto L_08AE5B30;
    }
L_08AE5B30:
    ctx.set_gpr(31, 0x08AE5B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B38u) goto L_08AE5B38;
    return;
L_08AE5B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5B4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5B4Cu) goto L_08AE5B4C;
    return;
L_08AE5B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5B70;
      }
      goto L_08AE5B54;
    }
L_08AE5B54:
    ctx.set_gpr(31, 0x08AE5B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B5Cu) goto L_08AE5B5C;
    return;
L_08AE5B5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE5B70u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5B70u) goto L_08AE5B70;
    return;
L_08AE5B70:
    ctx.set_gpr(31, 0x08AE5B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5B78u) goto L_08AE5B78;
    return;
L_08AE5B78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE5B8Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5B8Cu) goto L_08AE5B8C;
    return;
L_08AE5B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5B9C;
    }
L_08AE5B9C:
    ctx.set_gpr(31, 0x08AE5BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5BA4u) goto L_08AE5BA4;
    return;
L_08AE5BA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5BB0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5BB0u) goto L_08AE5BB0;
    return;
L_08AE5BB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5BB8;
    }
L_08AE5BB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5BC8;
    }
L_08AE5BC8:
    ctx.set_gpr(31, 0x08AE5BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5BD0u) goto L_08AE5BD0;
    return;
L_08AE5BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5BDCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE5BDCu) goto L_08AE5BDC;
    return;
L_08AE5BDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE5C1C;
      }
      goto L_08AE5BE8;
    }
L_08AE5BE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08AE5BFC;
    }
    goto L_08AE5BF4;
L_08AE5BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5BFC;
    }
L_08AE5BFC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE5C08u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C08u) goto L_08AE5C08;
    return;
L_08AE5C08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5C14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C14u) goto L_08AE5C14;
    return;
L_08AE5C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5C1C;
    }
L_08AE5C1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE5C2Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C2Cu) goto L_08AE5C2C;
    return;
L_08AE5C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5C38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C38u) goto L_08AE5C38;
    return;
L_08AE5C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5C40;
    }
L_08AE5C40:
    ctx.set_gpr(31, 0x08AE5C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C48u) goto L_08AE5C48;
    return;
L_08AE5C48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5C54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C54u) goto L_08AE5C54;
    return;
L_08AE5C54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CE8;
      }
      goto L_08AE5C5C;
    }
L_08AE5C5C:
    ctx.set_gpr(31, 0x08AE5C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C64u) goto L_08AE5C64;
    return;
L_08AE5C64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5C74u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5C74u) goto L_08AE5C74;
    return;
L_08AE5C74:
    ctx.set_gpr(31, 0x08AE5C7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C7Cu) goto L_08AE5C7C;
    return;
L_08AE5C7C:
    ctx.set_gpr(31, 0x08AE5C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C84u) goto L_08AE5C84;
    return;
L_08AE5C84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5C90u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5C90u) goto L_08AE5C90;
    return;
L_08AE5C90:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE5C9Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE5C9Cu) goto L_08AE5C9C;
    return;
L_08AE5C9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5CA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE5CA8u) goto L_08AE5CA8;
    return;
L_08AE5CA8:
    ctx.set_gpr(31, 0x08AE5CB0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5CB0u) goto L_08AE5CB0;
    return;
L_08AE5CB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE5CC4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5CC4u) goto L_08AE5CC4;
    return;
L_08AE5CC4:
    ctx.set_gpr(31, 0x08AE5CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE5CCCu) goto L_08AE5CCC;
    return;
L_08AE5CCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE5CE0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5CE0u) goto L_08AE5CE0;
    return;
L_08AE5CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE5CEC;
      }
      goto L_08AE5CE8;
    }
L_08AE5CE8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE5CEC;
L_08AE5CEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5CFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23068)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE5E1C;
      }
      goto L_08AE5D24;
    }
L_08AE5D24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE5DAC;
      }
      goto L_08AE5D30;
    }
L_08AE5D30:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5D40;
      }
      goto L_08AE5D38;
    }
L_08AE5D38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE5E38;
      }
      goto L_08AE5D40;
    }
L_08AE5D40:
    ctx.set_gpr(31, 0x08AE5D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5D48u) goto L_08AE5D48;
    return;
L_08AE5D48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5D54u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE5D54u) goto L_08AE5D54;
    return;
L_08AE5D54:
    ctx.set_gpr(31, 0x08AE5D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5D5Cu) goto L_08AE5D5C;
    return;
L_08AE5D5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5D68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08AE5D68u) goto L_08AE5D68;
    return;
L_08AE5D68:
    ctx.set_gpr(31, 0x08AE5D70u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08AE5D70u) goto L_08AE5D70;
    return;
L_08AE5D70:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AE5D8C;
      }
      goto L_08AE5D84;
    }
L_08AE5D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5D90;
      }
      goto L_08AE5D8C;
    }
L_08AE5D8C:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    goto L_08AE5D90;
L_08AE5D90:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23068)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23068), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE5E34;
      }
      goto L_08AE5DAC;
    }
L_08AE5DAC:
    ctx.set_gpr(31, 0x08AE5DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5DB4u) goto L_08AE5DB4;
    return;
L_08AE5DB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE5DC0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 441u, 0x08A91B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5DC0u) goto L_08AE5DC0;
    return;
L_08AE5DC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE5DCCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 440u, 0x08A91B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5DCCu) goto L_08AE5DCC;
    return;
L_08AE5DCC:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5DE8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 459u, 0x08AB1B04u>(ctx, &aot_mem) && ctx.pc == 0x08AE5DE8u) goto L_08AE5DE8;
    return;
L_08AE5DE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08AE5E08;
    }
    goto L_08AE5DF4;
L_08AE5DF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23068), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE5E38;
      }
      goto L_08AE5E08;
    }
L_08AE5E08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23068)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23068), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE5E34;
      }
      goto L_08AE5E1C;
    }
L_08AE5E1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23068), 0u);
      if (branch_taken) {
          goto L_08AE5E38;
      }
      goto L_08AE5E34;
    }
L_08AE5E34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE5E38;
L_08AE5E38:
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
L_08AE5E50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AE5E6Cu);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5E6Cu) goto L_08AE5E6C;
    return;
L_08AE5E6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE5E7Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 921u, 0x08AB35E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE5E7Cu) goto L_08AE5E7C;
    return;
L_08AE5E7C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
        goto L_08AE5ECC;
    }
    goto L_08AE5E88;
L_08AE5E88:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AE5EC8;
      }
      goto L_08AE5EA4;
    }
L_08AE5EA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08AE5EB4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5EB4u) goto L_08AE5EB4;
    return;
L_08AE5EB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1370));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5EC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5EC8u) goto L_08AE5EC8;
    return;
L_08AE5EC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    goto L_08AE5ECC;
L_08AE5ECC:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
        goto L_08AE5EE4;
    }
    goto L_08AE5ED4;
L_08AE5ED4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5EEC;
      }
      goto L_08AE5EE0;
    }
L_08AE5EE0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_08AE5EE4;
L_08AE5EE4:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AE5EEC;
L_08AE5EEC:
    ctx.set_gpr(31, 0x08AE5EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5EF4u) goto L_08AE5EF4;
    return;
L_08AE5EF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE5F00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE5F00u) goto L_08AE5F00;
    return;
L_08AE5F00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AE5F74;
    }
    goto L_08AE5F08;
L_08AE5F08:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5F2C;
      }
      goto L_08AE5F14;
    }
L_08AE5F14:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AE5F70;
      }
      goto L_08AE5F2C;
    }
L_08AE5F2C:
    ctx.set_gpr(31, 0x08AE5F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5F34u) goto L_08AE5F34;
    return;
L_08AE5F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1370));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE5F48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5F48u) goto L_08AE5F48;
    return;
L_08AE5F48:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 17008u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    goto L_08AE5F70;
L_08AE5F70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AE5F74;
L_08AE5F74:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, 17430u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
        goto L_08AE5FB0;
    }
    goto L_08AE5FA8;
L_08AE5FA8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    goto L_08AE5FB0;
L_08AE5FB0:
    ctx.set_gpr(2, 34952u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] | 34953u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(6, 20971u << 16u);
    ctx.set_gpr(7, 17530u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26215u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(6, ctx.gpr[6] | 34079u);
    ctx.set_gpr(7, ctx.hi);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[4] >> 31u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[7] << 4u);
    ctx.set_gpr(8, ctx.gpr[8] - ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, ctx.gpr[4] - ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(11, ctx.gpr[8] >> 31u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(8, ctx.hi);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[11]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(10, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(9, ctx.gpr[10] >> 31u);
    ctx.set_gpr(8, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.gpr[8] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[4] << 1u);
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.hi);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.hi);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE60C8;
      }
      goto L_08AE60AC;
    }
L_08AE60AC:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(185));
    ctx.set_gpr(31, 0x08AE60C0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8052));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE60C0u) goto L_08AE60C0;
    return;
L_08AE60C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AE60E0;
      }
      goto L_08AE60C8;
    }
L_08AE60C8:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE60DCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8052));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE60DCu) goto L_08AE60DC;
    return;
L_08AE60DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AE60E0;
L_08AE60E0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE60E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(31, 0x08AE6108u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6108u) goto L_08AE6108;
    return;
L_08AE6108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6118u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 921u, 0x08AB35E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6118u) goto L_08AE6118;
    return;
L_08AE6118:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE6124u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE62AC;
L_08AE6124:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE613C;
    }
L_08AE613C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE6148;
    }
L_08AE6148:
    ctx.set_gpr(31, 0x08AE6150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6150u) goto L_08AE6150;
    return;
L_08AE6150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE615Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE615Cu) goto L_08AE615C;
    return;
L_08AE615C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE61A0;
      }
      goto L_08AE6164;
    }
L_08AE6164:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE61A0;
      }
      goto L_08AE6170;
    }
L_08AE6170:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE617Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE617Cu) goto L_08AE617C;
    return;
L_08AE617C:
    ctx.set_gpr(31, 0x08AE6184u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6184u) goto L_08AE6184;
    return;
L_08AE6184:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6198u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(47));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 403u, 0x08A918D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6198u) goto L_08AE6198;
    return;
L_08AE6198:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AE6298;
      }
      goto L_08AE61A0;
    }
L_08AE61A0:
    ctx.set_gpr(31, 0x08AE61A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE61A8u) goto L_08AE61A8;
    return;
L_08AE61A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE61B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE61B4u) goto L_08AE61B4;
    return;
L_08AE61B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE61BC;
    }
L_08AE61BC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE61CC;
    }
L_08AE61CC:
    ctx.set_gpr(31, 0x08AE61D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE61D4u) goto L_08AE61D4;
    return;
L_08AE61D4:
    ctx.set_gpr(31, 0x08AE61DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE61DCu) goto L_08AE61DC;
    return;
L_08AE61DC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE61E4;
    }
L_08AE61E4:
    ctx.set_gpr(31, 0x08AE61ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE61ECu) goto L_08AE61EC;
    return;
L_08AE61EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE61F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE61F8u) goto L_08AE61F8;
    return;
L_08AE61F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6254;
      }
      goto L_08AE6200;
    }
L_08AE6200:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6254;
      }
      goto L_08AE620C;
    }
L_08AE620C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE6218u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AE6218u) goto L_08AE6218;
    return;
L_08AE6218:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6254;
      }
      goto L_08AE6224;
    }
L_08AE6224:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE6230u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6230u) goto L_08AE6230;
    return;
L_08AE6230:
    ctx.set_gpr(31, 0x08AE6238u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6238u) goto L_08AE6238;
    return;
L_08AE6238:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE624Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(47));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 403u, 0x08A918D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE624Cu) goto L_08AE624C;
    return;
L_08AE624C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE6254;
    }
L_08AE6254:
    ctx.set_gpr(31, 0x08AE625Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE625Cu) goto L_08AE625C;
    return;
L_08AE625C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6268u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE6268u) goto L_08AE6268;
    return;
L_08AE6268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE6270;
    }
L_08AE6270:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE6294;
      }
      goto L_08AE6280;
    }
L_08AE6280:
    ctx.set_gpr(31, 0x08AE6288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6288u) goto L_08AE6288;
    return;
L_08AE6288:
    ctx.set_gpr(31, 0x08AE6290u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE6290u) goto L_08AE6290;
    return;
L_08AE6290:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    goto L_08AE6294;
L_08AE6294:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AE6298;
L_08AE6298:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE62AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AE637C;
      }
      goto L_08AE62D4;
    }
L_08AE62D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AE637C;
      }
      goto L_08AE62DC;
    }
L_08AE62DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AE62E0;
L_08AE62E0:
    ctx.set_gpr(31, 0x08AE62E8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AE62E8u) goto L_08AE62E8;
    return;
L_08AE62E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE6354;
    }
    goto L_08AE62F4;
L_08AE62F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE6338;
    }
    goto L_08AE6300;
L_08AE6300:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE631C;
    }
    goto L_08AE630C;
L_08AE630C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AE6370;
    }
    goto L_08AE6314;
L_08AE6314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE636C;
      }
      goto L_08AE631C;
    }
L_08AE631C:
    ctx.set_gpr(31, 0x08AE6324u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 117u, 0x08A94820u>(ctx, &aot_mem) && ctx.pc == 0x08AE6324u) goto L_08AE6324;
    return;
L_08AE6324:
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AE636C;
      }
      goto L_08AE6338;
    }
L_08AE6338:
    ctx.set_gpr(31, 0x08AE6340u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 117u, 0x08A94820u>(ctx, &aot_mem) && ctx.pc == 0x08AE6340u) goto L_08AE6340;
    return;
L_08AE6340:
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08AE636C;
      }
      goto L_08AE6354;
    }
L_08AE6354:
    ctx.set_gpr(31, 0x08AE635Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 117u, 0x08A94820u>(ctx, &aot_mem) && ctx.pc == 0x08AE635Cu) goto L_08AE635C;
    return;
L_08AE635C:
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    goto L_08AE636C;
L_08AE636C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AE6370;
L_08AE6370:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE62E0;
    }
    goto L_08AE637C;
L_08AE637C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE639C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AE63BCu);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE63BCu) goto L_08AE63BC;
    return;
L_08AE63BC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1586), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1592), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1760), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AE63F0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 541u, 0x0884A154u>(ctx, &aot_mem) && ctx.pc == 0x08AE63F0u) goto L_08AE63F0;
    return;
L_08AE63F0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1268));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(1356));
    ctx.set_gpr(31, 0x08AE6404u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 516u, 0x08849FC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6404u) goto L_08AE6404;
    return;
L_08AE6404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6414:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AE6ACC;
      }
      goto L_08AE6450;
    }
L_08AE6450:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3072));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE646C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AE6470;
L_08AE6470:
    ctx.set_gpr(31, 0x08AE6478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6478u) goto L_08AE6478;
    return;
L_08AE6478:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 7u);
      if (branch_taken) {
          goto L_08AE648C;
      }
      goto L_08AE6480;
    }
L_08AE6480:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08AE6490;
    }
    goto L_08AE6488;
L_08AE6488:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE648C;
L_08AE648C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08AE6490;
L_08AE6490:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 16916u << 16u);
    ctx.set_gpr(5, 17164u << 16u);
    ctx.set_gpr(4, 16784u << 16u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
      if (branch_taken) {
          goto L_08AE64C8;
      }
      goto L_08AE64C0;
    }
L_08AE64C0:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08AE64C8;
L_08AE64C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.set_gpr(8, 17068u << 16u);
    ctx.set_gpr(10, 49608u << 16u);
    ctx.set_gpr(3, 16808u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AE6524u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE6524u) goto L_08AE6524;
    return;
L_08AE6524:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6470;
      }
      goto L_08AE6534;
    }
L_08AE6534:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AE6538;
L_08AE6538:
    ctx.set_gpr(31, 0x08AE6540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6540u) goto L_08AE6540;
    return;
L_08AE6540:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 7u);
      if (branch_taken) {
          goto L_08AE6554;
      }
      goto L_08AE6548;
    }
L_08AE6548:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08AE6558;
    }
    goto L_08AE6550;
L_08AE6550:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE6554;
L_08AE6554:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08AE6558;
L_08AE6558:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 16916u << 16u);
    ctx.set_gpr(5, 17164u << 16u);
    ctx.set_gpr(4, 16784u << 16u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 3u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
      if (branch_taken) {
          goto L_08AE6590;
      }
      goto L_08AE6588;
    }
L_08AE6588:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08AE6590;
L_08AE6590:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16864u << 16u);
    ctx.set_gpr(8, 17068u << 16u);
    ctx.set_gpr(3, 49608u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AE65E4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE65E4u) goto L_08AE65E4;
    return;
L_08AE65E4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6538;
      }
      goto L_08AE65F4;
    }
L_08AE65F4:
    ctx.set_gpr(31, 0x08AE65FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE65FCu) goto L_08AE65FC;
    return;
L_08AE65FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE660Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AE660Cu) goto L_08AE660C;
    return;
L_08AE660C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE6660;
      }
      goto L_08AE6618;
    }
L_08AE6618:
    ctx.set_gpr(31, 0x08AE6620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6620u) goto L_08AE6620;
    return;
L_08AE6620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AE6658u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE6658u) goto L_08AE6658;
    return;
L_08AE6658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6680;
      }
      goto L_08AE6660;
    }
L_08AE6660:
    ctx.set_gpr(31, 0x08AE6668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6668u) goto L_08AE6668;
    return;
L_08AE6668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE6680u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6680u) goto L_08AE6680;
    return;
L_08AE6680:
    ctx.set_gpr(31, 0x08AE6688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6688u) goto L_08AE6688;
    return;
L_08AE6688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE6698u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AE6698u) goto L_08AE6698;
    return;
L_08AE6698:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE66EC;
      }
      goto L_08AE66A4;
    }
L_08AE66A4:
    ctx.set_gpr(31, 0x08AE66ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE66ACu) goto L_08AE66AC;
    return;
L_08AE66AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x08AE66E4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE66E4u) goto L_08AE66E4;
    return;
L_08AE66E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE670C;
      }
      goto L_08AE66EC;
    }
L_08AE66EC:
    ctx.set_gpr(31, 0x08AE66F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE66F4u) goto L_08AE66F4;
    return;
L_08AE66F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE670Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE670Cu) goto L_08AE670C;
    return;
L_08AE670C:
    ctx.set_gpr(31, 0x08AE6714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6714u) goto L_08AE6714;
    return;
L_08AE6714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE6728u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6728u) goto L_08AE6728;
    return;
L_08AE6728:
    ctx.set_gpr(31, 0x08AE6730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6730u) goto L_08AE6730;
    return;
L_08AE6730:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE6744u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6744u) goto L_08AE6744;
    return;
L_08AE6744:
    ctx.set_gpr(31, 0x08AE674Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE674Cu) goto L_08AE674C;
    return;
L_08AE674C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE676Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE676Cu) goto L_08AE676C;
    return;
L_08AE676C:
    ctx.set_gpr(31, 0x08AE6774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6774u) goto L_08AE6774;
    return;
L_08AE6774:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE6794u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE6794u) goto L_08AE6794;
    return;
L_08AE6794:
    ctx.set_gpr(31, 0x08AE679Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE679Cu) goto L_08AE679C;
    return;
L_08AE679C:
    ctx.set_gpr(31, 0x08AE67A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE67A4u) goto L_08AE67A4;
    return;
L_08AE67A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE67B0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE67B0u) goto L_08AE67B0;
    return;
L_08AE67B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE67C4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE67C4u) goto L_08AE67C4;
    return;
L_08AE67C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE67D8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1099u, 0x08AEB5A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE67D8u) goto L_08AE67D8;
    return;
L_08AE67D8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE67E4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AE6AFC;
L_08AE67E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AE67F0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08AE67F0u) goto L_08AE67F0;
    return;
L_08AE67F0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1780), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE6804u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1784), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08AE6804u) goto L_08AE6804;
    return;
L_08AE6804:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AE6810u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 56u, 0x08AE84E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6810u) goto L_08AE6810;
    return;
L_08AE6810:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AE6AD0;
      }
      goto L_08AE6818;
    }
L_08AE6818:
    ctx.set_gpr(31, 0x08AE6820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 695u, 0x08AEA104u>(ctx, &aot_mem) && ctx.pc == 0x08AE6820u) goto L_08AE6820;
    return;
L_08AE6820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6ACC;
      }
      goto L_08AE6828;
    }
L_08AE6828:
    ctx.set_gpr(31, 0x08AE6830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 743u, 0x08AEA338u>(ctx, &aot_mem) && ctx.pc == 0x08AE6830u) goto L_08AE6830;
    return;
L_08AE6830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6ACC;
      }
      goto L_08AE6838;
    }
L_08AE6838:
    ctx.set_gpr(31, 0x08AE6840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 874u, 0x08AEA9ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE6840u) goto L_08AE6840;
    return;
L_08AE6840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6ACC;
      }
      goto L_08AE6848;
    }
L_08AE6848:
    ctx.set_gpr(31, 0x08AE6850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 997u, 0x08AEB104u>(ctx, &aot_mem) && ctx.pc == 0x08AE6850u) goto L_08AE6850;
    return;
L_08AE6850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6ACC;
      }
      goto L_08AE6858;
    }
L_08AE6858:
    ctx.set_gpr(31, 0x08AE6860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1324u, 0x08AEBF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6860u) goto L_08AE6860;
    return;
L_08AE6860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6ACC;
      }
      goto L_08AE6868;
    }
L_08AE6868:
    ctx.set_gpr(31, 0x08AE6870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6870u) goto L_08AE6870;
    return;
L_08AE6870:
    ctx.set_gpr(31, 0x08AE6878u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6878u) goto L_08AE6878;
    return;
L_08AE6878:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6884u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 468u, 0x08A7DEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE6884u) goto L_08AE6884;
    return;
L_08AE6884:
    ctx.set_gpr(31, 0x08AE688Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE688Cu) goto L_08AE688C;
    return;
L_08AE688C:
    ctx.set_gpr(31, 0x08AE6894u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6894u) goto L_08AE6894;
    return;
L_08AE6894:
    ctx.set_gpr(31, 0x08AE689Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE689Cu) goto L_08AE689C;
    return;
L_08AE689C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE68BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE68BCu) goto L_08AE68BC;
    return;
L_08AE68BC:
    ctx.set_gpr(31, 0x08AE68C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE68C4u) goto L_08AE68C4;
    return;
L_08AE68C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(5, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08AE68E0;
      }
      goto L_08AE68D4;
    }
L_08AE68D4:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
        goto L_08AE68E4;
    }
    goto L_08AE68DC;
L_08AE68DC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08AE68E0;
L_08AE68E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08AE68E4;
L_08AE68E4:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 16328u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 62915u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.set_gpr(3, 17264u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AE6930u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE6930u) goto L_08AE6930;
    return;
L_08AE6930:
    ctx.set_gpr(31, 0x08AE6938u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1083u, 0x08AEB4D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6938u) goto L_08AE6938;
    return;
L_08AE6938:
    ctx.set_gpr(31, 0x08AE6940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6940u) goto L_08AE6940;
    return;
L_08AE6940:
    ctx.set_gpr(31, 0x08AE6948u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6948u) goto L_08AE6948;
    return;
L_08AE6948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE6954u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6954u) goto L_08AE6954;
    return;
L_08AE6954:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6968u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6968u) goto L_08AE6968;
    return;
L_08AE6968:
    ctx.set_gpr(31, 0x08AE6970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE6970u) goto L_08AE6970;
    return;
L_08AE6970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE6980u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6980u) goto L_08AE6980;
    return;
L_08AE6980:
    ctx.set_gpr(31, 0x08AE6988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6988u) goto L_08AE6988;
    return;
L_08AE6988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x08AE699Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE699Cu) goto L_08AE699C;
    return;
L_08AE699C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(31, 0x08AE69A8u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE69A8u) goto L_08AE69A8;
    return;
L_08AE69A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08AE69BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE69BCu) goto L_08AE69BC;
    return;
L_08AE69BC:
    ctx.set_gpr(31, 0x08AE69C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE69C4u) goto L_08AE69C4;
    return;
L_08AE69C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE69D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AE69D4u) goto L_08AE69D4;
    return;
L_08AE69D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE6A3C;
      }
      goto L_08AE69E0;
    }
L_08AE69E0:
    ctx.set_gpr(31, 0x08AE69E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE69E8u) goto L_08AE69E8;
    return;
L_08AE69E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(31, 0x08AE6A20u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE6A20u) goto L_08AE6A20;
    return;
L_08AE6A20:
    ctx.set_gpr(31, 0x08AE6A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6A28u) goto L_08AE6A28;
    return;
L_08AE6A28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE6A3Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6A3Cu) goto L_08AE6A3C;
    return;
L_08AE6A3C:
    ctx.set_gpr(31, 0x08AE6A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6A44u) goto L_08AE6A44;
    return;
L_08AE6A44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE6A54u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AE6A54u) goto L_08AE6A54;
    return;
L_08AE6A54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AE6AC0;
    }
    goto L_08AE6A60;
L_08AE6A60:
    ctx.set_gpr(31, 0x08AE6A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6A68u) goto L_08AE6A68;
    return;
L_08AE6A68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x08AE6AA0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE6AA0u) goto L_08AE6AA0;
    return;
L_08AE6AA0:
    ctx.set_gpr(31, 0x08AE6AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6AA8u) goto L_08AE6AA8;
    return;
L_08AE6AA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE6ABCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6ABCu) goto L_08AE6ABC;
    return;
L_08AE6ABC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AE6AC0;
L_08AE6AC0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE6ADC;
      }
      goto L_08AE6ACC;
    }
L_08AE6ACC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_08AE6AD0;
L_08AE6AD0:
    ctx.set_gpr(31, 0x08AE6AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08AE6AD8u) goto L_08AE6AD8;
    return;
L_08AE6AD8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE6ADC;
L_08AE6ADC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.set_gpr(31, 0x08AE6B2Cu);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(655), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AE6B2Cu) goto L_08AE6B2C;
    return;
L_08AE6B2C:
    ctx.set_gpr(31, 0x08AE6B34u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(500));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AE6B34u) goto L_08AE6B34;
    return;
L_08AE6B34:
    ctx.set_gpr(31, 0x08AE6B3Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(488));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6B3Cu) goto L_08AE6B3C;
    return;
L_08AE6B3C:
    ctx.set_gpr(31, 0x08AE6B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6B44u) goto L_08AE6B44;
    return;
L_08AE6B44:
    ctx.set_gpr(31, 0x08AE6B4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6B4Cu) goto L_08AE6B4C;
    return;
L_08AE6B4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6B58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 468u, 0x08A7DEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE6B58u) goto L_08AE6B58;
    return;
L_08AE6B58:
    ctx.set_gpr(31, 0x08AE6B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6B60u) goto L_08AE6B60;
    return;
L_08AE6B60:
    ctx.set_gpr(31, 0x08AE6B68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6B68u) goto L_08AE6B68;
    return;
L_08AE6B68:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 25u, 0x08AE81D4u>(ctx, &aot_mem); return;
    }
    goto L_08AE6B7C;
L_08AE6B7C:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3040));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6B98:
    ctx.set_gpr(31, 0x08AE6BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6BA0u) goto L_08AE6BA0;
    return;
L_08AE6BA0:
    ctx.set_gpr(31, 0x08AE6BA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6BA8u) goto L_08AE6BA8;
    return;
L_08AE6BA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE6BB4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6BB4u) goto L_08AE6BB4;
    return;
L_08AE6BB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE6BC8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6BC8u) goto L_08AE6BC8;
    return;
L_08AE6BC8:
    ctx.set_gpr(31, 0x08AE6BD0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6BD0u) goto L_08AE6BD0;
    return;
L_08AE6BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AE6BE0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32416)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6BE0u) goto L_08AE6BE0;
    return;
L_08AE6BE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6BF4;
      }
      goto L_08AE6BEC;
    }
L_08AE6BEC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE6C2C;
      }
      goto L_08AE6BF4;
    }
L_08AE6BF4:
    ctx.set_gpr(31, 0x08AE6BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE6BFCu) goto L_08AE6BFC;
    return;
L_08AE6BFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08AE6C10;
      }
      goto L_08AE6C08;
    }
L_08AE6C08:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08AE6C10;
L_08AE6C10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32420));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE6C2Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE6C2Cu) goto L_08AE6C2C;
    return;
L_08AE6C2C:
    ctx.set_gpr(31, 0x08AE6C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C34u) goto L_08AE6C34;
    return;
L_08AE6C34:
    ctx.set_gpr(31, 0x08AE6C3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C3Cu) goto L_08AE6C3C;
    return;
L_08AE6C3C:
    ctx.set_gpr(31, 0x08AE6C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C44u) goto L_08AE6C44;
    return;
L_08AE6C44:
    ctx.set_gpr(31, 0x08AE6C4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C4Cu) goto L_08AE6C4C;
    return;
L_08AE6C4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AE6C78u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C78u) goto L_08AE6C78;
    return;
L_08AE6C78:
    ctx.set_gpr(31, 0x08AE6C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C80u) goto L_08AE6C80;
    return;
L_08AE6C80:
    ctx.set_gpr(31, 0x08AE6C88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6C88u) goto L_08AE6C88;
    return;
L_08AE6C88:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AE6CA8u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CA8u) goto L_08AE6CA8;
    return;
L_08AE6CA8:
    ctx.set_gpr(31, 0x08AE6CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CB0u) goto L_08AE6CB0;
    return;
L_08AE6CB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x08AE6CC4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6CC4u) goto L_08AE6CC4;
    return;
L_08AE6CC4:
    ctx.set_gpr(31, 0x08AE6CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CCCu) goto L_08AE6CCC;
    return;
L_08AE6CCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17034u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE6CECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(43));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CECu) goto L_08AE6CEC;
    return;
L_08AE6CEC:
    ctx.set_gpr(31, 0x08AE6CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6CF4u) goto L_08AE6CF4;
    return;
L_08AE6CF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE6D0Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(43));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6D0Cu) goto L_08AE6D0C;
    return;
L_08AE6D0C:
    ctx.set_gpr(31, 0x08AE6D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D14u) goto L_08AE6D14;
    return;
L_08AE6D14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE6D2Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D2Cu) goto L_08AE6D2C;
    return;
L_08AE6D2C:
    ctx.set_gpr(31, 0x08AE6D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D34u) goto L_08AE6D34;
    return;
L_08AE6D34:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE6D54u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6D54u) goto L_08AE6D54;
    return;
L_08AE6D54:
    ctx.set_gpr(31, 0x08AE6D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D5Cu) goto L_08AE6D5C;
    return;
L_08AE6D5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE6D70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6D70u) goto L_08AE6D70;
    return;
L_08AE6D70:
    ctx.set_gpr(31, 0x08AE6D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D78u) goto L_08AE6D78;
    return;
L_08AE6D78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE6D8Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6D8Cu) goto L_08AE6D8C;
    return;
L_08AE6D8C:
    ctx.set_gpr(31, 0x08AE6D94u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1099u, 0x08AEB5A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D94u) goto L_08AE6D94;
    return;
L_08AE6D94:
    ctx.set_gpr(31, 0x08AE6D9Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 678u, 0x08AE9FE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6D9Cu) goto L_08AE6D9C;
    return;
L_08AE6D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 24u, 0x08AE81D0u>(ctx, &aot_mem); return;
      }
      goto L_08AE6DA4;
    }
L_08AE6DA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE6DB4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1083u, 0x08AEB4D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DB4u) goto L_08AE6DB4;
    return;
L_08AE6DB4:
    ctx.set_gpr(31, 0x08AE6DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6DBCu) goto L_08AE6DBC;
    return;
L_08AE6DBC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6DCCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8184));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DCCu) goto L_08AE6DCC;
    return;
L_08AE6DCC:
    ctx.set_gpr(31, 0x08AE6DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DD4u) goto L_08AE6DD4;
    return;
L_08AE6DD4:
    ctx.set_gpr(31, 0x08AE6DDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DDCu) goto L_08AE6DDC;
    return;
L_08AE6DDC:
    ctx.set_gpr(31, 0x08AE6DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DE4u) goto L_08AE6DE4;
    return;
L_08AE6DE4:
    ctx.set_gpr(31, 0x08AE6DECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DECu) goto L_08AE6DEC;
    return;
L_08AE6DEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AE6E04u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E04u) goto L_08AE6E04;
    return;
L_08AE6E04:
    ctx.set_gpr(31, 0x08AE6E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E0Cu) goto L_08AE6E0C;
    return;
L_08AE6E0C:
    ctx.set_gpr(31, 0x08AE6E14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E14u) goto L_08AE6E14;
    return;
L_08AE6E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6E24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E24u) goto L_08AE6E24;
    return;
L_08AE6E24:
    ctx.set_gpr(31, 0x08AE6E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E2Cu) goto L_08AE6E2C;
    return;
L_08AE6E2C:
    ctx.set_gpr(31, 0x08AE6E34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E34u) goto L_08AE6E34;
    return;
L_08AE6E34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6E40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E40u) goto L_08AE6E40;
    return;
L_08AE6E40:
    ctx.set_gpr(31, 0x08AE6E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E48u) goto L_08AE6E48;
    return;
L_08AE6E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6E58u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6E58u) goto L_08AE6E58;
    return;
L_08AE6E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8176)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6E78u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E78u) goto L_08AE6E78;
    return;
L_08AE6E78:
    ctx.set_gpr(31, 0x08AE6E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E80u) goto L_08AE6E80;
    return;
L_08AE6E80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6E90u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6E90u) goto L_08AE6E90;
    return;
L_08AE6E90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8180)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6EB0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE6EB0u) goto L_08AE6EB0;
    return;
L_08AE6EB0:
    ctx.set_gpr(31, 0x08AE6EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE6EB8u) goto L_08AE6EB8;
    return;
L_08AE6EB8:
    ctx.set_gpr(31, 0x08AE6EC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE6EC0u) goto L_08AE6EC0;
    return;
L_08AE6EC0:
    ctx.set_gpr(31, 0x08AE6EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE6EC8u) goto L_08AE6EC8;
    return;
L_08AE6EC8:
    ctx.set_gpr(31, 0x08AE6ED0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE6ED0u) goto L_08AE6ED0;
    return;
L_08AE6ED0:
    ctx.set_gpr(31, 0x08AE6ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6ED8u) goto L_08AE6ED8;
    return;
L_08AE6ED8:
    ctx.set_gpr(31, 0x08AE6EE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6EE0u) goto L_08AE6EE0;
    return;
L_08AE6EE0:
    ctx.set_gpr(31, 0x08AE6EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE6EE8u) goto L_08AE6EE8;
    return;
L_08AE6EE8:
    ctx.set_gpr(31, 0x08AE6EF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6EF0u) goto L_08AE6EF0;
    return;
L_08AE6EF0:
    ctx.set_gpr(31, 0x08AE6EF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6EF8u) goto L_08AE6EF8;
    return;
L_08AE6EF8:
    ctx.set_gpr(31, 0x08AE6F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F00u) goto L_08AE6F00;
    return;
L_08AE6F00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16582u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE6F20u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F20u) goto L_08AE6F20;
    return;
L_08AE6F20:
    ctx.set_gpr(31, 0x08AE6F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F28u) goto L_08AE6F28;
    return;
L_08AE6F28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16582u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE6F48u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F48u) goto L_08AE6F48;
    return;
L_08AE6F48:
    ctx.set_gpr(31, 0x08AE6F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F50u) goto L_08AE6F50;
    return;
L_08AE6F50:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AE6F68u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE6F68u) goto L_08AE6F68;
    return;
L_08AE6F68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AE6F80u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F80u) goto L_08AE6F80;
    return;
L_08AE6F80:
    ctx.set_gpr(31, 0x08AE6F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F88u) goto L_08AE6F88;
    return;
L_08AE6F88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE6F94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F94u) goto L_08AE6F94;
    return;
L_08AE6F94:
    ctx.set_gpr(31, 0x08AE6F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6F9Cu) goto L_08AE6F9C;
    return;
L_08AE6F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE6FB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6FB0u) goto L_08AE6FB0;
    return;
L_08AE6FB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE6FBCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(655));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 693u, 0x08A97560u>(ctx, &aot_mem) && ctx.pc == 0x08AE6FBCu) goto L_08AE6FBC;
    return;
L_08AE6FBC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AE7004;
    }
    goto L_08AE6FC4;
L_08AE6FC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(655)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6FDC;
      }
      goto L_08AE6FD0;
    }
L_08AE6FD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE7008;
      }
      goto L_08AE6FDC;
    }
L_08AE6FDC:
    ctx.set_gpr(31, 0x08AE6FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE6FE4u) goto L_08AE6FE4;
    return;
L_08AE6FE4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AE6FFCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE6FFCu) goto L_08AE6FFC;
    return;
L_08AE6FFC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08AE7008;
      }
      goto L_08AE7004;
    }
L_08AE7004:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08AE7008;
L_08AE7008:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x08AE701Cu);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE701Cu) goto L_08AE701C;
    return;
L_08AE701C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE702Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE702Cu) goto L_08AE702C;
    return;
L_08AE702C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7038u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AE7038u) goto L_08AE7038;
    return;
L_08AE7038:
    ctx.set_gpr(31, 0x08AE7040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7040u) goto L_08AE7040;
    return;
L_08AE7040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7050u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7050u) goto L_08AE7050;
    return;
L_08AE7050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE705Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE705Cu) goto L_08AE705C;
    return;
L_08AE705C:
    ctx.set_gpr(31, 0x08AE7064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7064u) goto L_08AE7064;
    return;
L_08AE7064:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7070u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE7070u) goto L_08AE7070;
    return;
L_08AE7070:
    ctx.set_gpr(31, 0x08AE7078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7078u) goto L_08AE7078;
    return;
L_08AE7078:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AE7084u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AE7084u) goto L_08AE7084;
    return;
L_08AE7084:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE7098u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AE7098u) goto L_08AE7098;
    return;
L_08AE7098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 24u, 0x08AE81D0u>(ctx, &aot_mem); return;
      }
      goto L_08AE70A0;
    }
L_08AE70A0:
    ctx.set_gpr(31, 0x08AE70A8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1083u, 0x08AEB4D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE70A8u) goto L_08AE70A8;
    return;
L_08AE70A8:
    ctx.set_gpr(31, 0x08AE70B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE70B0u) goto L_08AE70B0;
    return;
L_08AE70B0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE70C0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8196));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE70C0u) goto L_08AE70C0;
    return;
L_08AE70C0:
    ctx.set_gpr(31, 0x08AE70C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE70C8u) goto L_08AE70C8;
    return;
L_08AE70C8:
    ctx.set_gpr(31, 0x08AE70D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE70D0u) goto L_08AE70D0;
    return;
L_08AE70D0:
    ctx.set_gpr(31, 0x08AE70D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE70D8u) goto L_08AE70D8;
    return;
L_08AE70D8:
    ctx.set_gpr(31, 0x08AE70E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE70E0u) goto L_08AE70E0;
    return;
L_08AE70E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AE70F8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE70F8u) goto L_08AE70F8;
    return;
L_08AE70F8:
    ctx.set_gpr(31, 0x08AE7100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7100u) goto L_08AE7100;
    return;
L_08AE7100:
    ctx.set_gpr(31, 0x08AE7108u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7108u) goto L_08AE7108;
    return;
L_08AE7108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7118u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AE7118u) goto L_08AE7118;
    return;
L_08AE7118:
    ctx.set_gpr(31, 0x08AE7120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7120u) goto L_08AE7120;
    return;
L_08AE7120:
    ctx.set_gpr(31, 0x08AE7128u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7128u) goto L_08AE7128;
    return;
L_08AE7128:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7134u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7134u) goto L_08AE7134;
    return;
L_08AE7134:
    ctx.set_gpr(17, 2231u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8072));
    goto L_08AE7140;
L_08AE7140:
    ctx.set_gpr(31, 0x08AE7148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7148u) goto L_08AE7148;
    return;
L_08AE7148:
    ctx.set_gpr(31, 0x08AE7150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7150u) goto L_08AE7150;
    return;
L_08AE7150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7160u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7160u) goto L_08AE7160;
    return;
L_08AE7160:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE716Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 667u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE716Cu) goto L_08AE716C;
    return;
L_08AE716C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7188u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE7188u) goto L_08AE7188;
    return;
L_08AE7188:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE7140;
      }
      goto L_08AE7198;
    }
L_08AE7198:
    ctx.set_gpr(31, 0x08AE71A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE71A0u) goto L_08AE71A0;
    return;
L_08AE71A0:
    ctx.set_gpr(31, 0x08AE71A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE71A8u) goto L_08AE71A8;
    return;
L_08AE71A8:
    ctx.set_gpr(31, 0x08AE71B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE71B0u) goto L_08AE71B0;
    return;
L_08AE71B0:
    ctx.set_gpr(31, 0x08AE71B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE71B8u) goto L_08AE71B8;
    return;
L_08AE71B8:
    ctx.set_gpr(31, 0x08AE71C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE71C0u) goto L_08AE71C0;
    return;
L_08AE71C0:
    ctx.set_gpr(31, 0x08AE71C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE71C8u) goto L_08AE71C8;
    return;
L_08AE71C8:
    ctx.set_gpr(31, 0x08AE71D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE71D0u) goto L_08AE71D0;
    return;
L_08AE71D0:
    ctx.set_gpr(31, 0x08AE71D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE71D8u) goto L_08AE71D8;
    return;
L_08AE71D8:
    ctx.set_gpr(31, 0x08AE71E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE71E0u) goto L_08AE71E0;
    return;
L_08AE71E0:
    ctx.set_gpr(31, 0x08AE71E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE71E8u) goto L_08AE71E8;
    return;
L_08AE71E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16582u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE7208u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7208u) goto L_08AE7208;
    return;
L_08AE7208:
    ctx.set_gpr(31, 0x08AE7210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7210u) goto L_08AE7210;
    return;
L_08AE7210:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16582u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE7230u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7230u) goto L_08AE7230;
    return;
L_08AE7230:
    ctx.set_gpr(31, 0x08AE7238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7238u) goto L_08AE7238;
    return;
L_08AE7238:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AE7250u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE7250u) goto L_08AE7250;
    return;
L_08AE7250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7268u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7268u) goto L_08AE7268;
    return;
L_08AE7268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1764));
    ctx.set_gpr(31, 0x08AE7278u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(1768));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 141u, 0x08A99580u>(ctx, &aot_mem) && ctx.pc == 0x08AE7278u) goto L_08AE7278;
    return;
L_08AE7278:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1764), 0u);
        goto L_08AE72E0;
    }
    goto L_08AE7280;
L_08AE7280:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(31, 0x08AE728Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 48u, 0x08AE8488u>(ctx, &aot_mem) && ctx.pc == 0x08AE728Cu) goto L_08AE728C;
    return;
L_08AE728C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1764), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1768)));
    ctx.set_gpr(31, 0x08AE729Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 52u, 0x08AE84B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE729Cu) goto L_08AE729C;
    return;
L_08AE729C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1768), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE72D8u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE72D8u) goto L_08AE72D8;
    return;
L_08AE72D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
      if (branch_taken) {
          goto L_08AE7324;
      }
      goto L_08AE72E0;
    }
L_08AE72E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1768), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7320u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7320u) goto L_08AE7320;
    return;
L_08AE7320:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    goto L_08AE7324;
L_08AE7324:
    ctx.set_gpr(31, 0x08AE732Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE732Cu) goto L_08AE732C;
    return;
L_08AE732C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE733Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE733Cu) goto L_08AE733C;
    return;
L_08AE733C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(31, 0x08AE7348u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AE7348u) goto L_08AE7348;
    return;
L_08AE7348:
    ctx.set_gpr(31, 0x08AE7350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7350u) goto L_08AE7350;
    return;
L_08AE7350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7360u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7360u) goto L_08AE7360;
    return;
L_08AE7360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE736Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE736Cu) goto L_08AE736C;
    return;
L_08AE736C:
    ctx.set_gpr(31, 0x08AE7374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7374u) goto L_08AE7374;
    return;
L_08AE7374:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7380u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE7380u) goto L_08AE7380;
    return;
L_08AE7380:
    ctx.set_gpr(31, 0x08AE7388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7388u) goto L_08AE7388;
    return;
L_08AE7388:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AE7394u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AE7394u) goto L_08AE7394;
    return;
L_08AE7394:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE73A8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AE73A8u) goto L_08AE73A8;
    return;
L_08AE73A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 24u, 0x08AE81D0u>(ctx, &aot_mem); return;
      }
      goto L_08AE73B0;
    }
L_08AE73B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE73C8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1083u, 0x08AEB4D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE73C8u) goto L_08AE73C8;
    return;
L_08AE73C8:
    ctx.set_gpr(31, 0x08AE73D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE73D0u) goto L_08AE73D0;
    return;
L_08AE73D0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE73E0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8208));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE73E0u) goto L_08AE73E0;
    return;
L_08AE73E0:
    ctx.set_gpr(31, 0x08AE73E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE73E8u) goto L_08AE73E8;
    return;
L_08AE73E8:
    ctx.set_gpr(31, 0x08AE73F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE73F0u) goto L_08AE73F0;
    return;
L_08AE73F0:
    ctx.set_gpr(31, 0x08AE73F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE73F8u) goto L_08AE73F8;
    return;
L_08AE73F8:
    ctx.set_gpr(31, 0x08AE7400u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7400u) goto L_08AE7400;
    return;
L_08AE7400:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(46));
    ctx.set_gpr(31, 0x08AE7420u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(47));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE7420u) goto L_08AE7420;
    return;
L_08AE7420:
    ctx.set_gpr(31, 0x08AE7428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7428u) goto L_08AE7428;
    return;
L_08AE7428:
    ctx.set_gpr(31, 0x08AE7430u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7430u) goto L_08AE7430;
    return;
L_08AE7430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7440u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AE7440u) goto L_08AE7440;
    return;
L_08AE7440:
    ctx.set_gpr(31, 0x08AE7448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7448u) goto L_08AE7448;
    return;
L_08AE7448:
    ctx.set_gpr(31, 0x08AE7450u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7450u) goto L_08AE7450;
    return;
L_08AE7450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE745Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE745Cu) goto L_08AE745C;
    return;
L_08AE745C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AE7468;
L_08AE7468:
    ctx.set_gpr(31, 0x08AE7470u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7470u) goto L_08AE7470;
    return;
L_08AE7470:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08AE74D4;
    }
    goto L_08AE7478;
L_08AE7478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7484u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7484u) goto L_08AE7484;
    return;
L_08AE7484:
    ctx.set_gpr(31, 0x08AE748Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE748Cu) goto L_08AE748C;
    return;
L_08AE748C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE749Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE749Cu) goto L_08AE749C;
    return;
L_08AE749C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE74ACu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE74ACu) goto L_08AE74AC;
    return;
L_08AE74AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE74C8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE74C8u) goto L_08AE74C8;
    return;
L_08AE74C8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AE74D4;
L_08AE74D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08AE7468;
    }
    goto L_08AE74E0;
L_08AE74E0:
    ctx.set_gpr(31, 0x08AE74E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE74E8u) goto L_08AE74E8;
    return;
L_08AE74E8:
    ctx.set_gpr(31, 0x08AE74F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE74F0u) goto L_08AE74F0;
    return;
L_08AE74F0:
    ctx.set_gpr(31, 0x08AE74F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE74F8u) goto L_08AE74F8;
    return;
L_08AE74F8:
    ctx.set_gpr(31, 0x08AE7500u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7500u) goto L_08AE7500;
    return;
L_08AE7500:
    ctx.set_gpr(31, 0x08AE7508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7508u) goto L_08AE7508;
    return;
L_08AE7508:
    ctx.set_gpr(31, 0x08AE7510u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7510u) goto L_08AE7510;
    return;
L_08AE7510:
    ctx.set_gpr(31, 0x08AE7518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7518u) goto L_08AE7518;
    return;
L_08AE7518:
    ctx.set_gpr(31, 0x08AE7520u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7520u) goto L_08AE7520;
    return;
L_08AE7520:
    ctx.set_gpr(31, 0x08AE7528u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7528u) goto L_08AE7528;
    return;
L_08AE7528:
    ctx.set_gpr(31, 0x08AE7530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7530u) goto L_08AE7530;
    return;
L_08AE7530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16784u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE754Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE754Cu) goto L_08AE754C;
    return;
L_08AE754C:
    ctx.set_gpr(31, 0x08AE7554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7554u) goto L_08AE7554;
    return;
L_08AE7554:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49216u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE7570u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7570u) goto L_08AE7570;
    return;
L_08AE7570:
    ctx.set_gpr(31, 0x08AE7578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7578u) goto L_08AE7578;
    return;
L_08AE7578:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AE7590u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE7590u) goto L_08AE7590;
    return;
L_08AE7590:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE759Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 884u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08AE759Cu) goto L_08AE759C;
    return;
L_08AE759C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(31, 0x08AE75B8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(632));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 772u, 0x08A97C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE75B8u) goto L_08AE75B8;
    return;
L_08AE75B8:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
        goto L_08AE75C8;
    }
    goto L_08AE75C0;
L_08AE75C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08AE75C8;
L_08AE75C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_08AE75F0;
L_08AE75F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AE7628;
    }
    goto L_08AE75FC;
L_08AE75FC:
    ctx.set_gpr(31, 0x08AE7604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7604u) goto L_08AE7604;
    return;
L_08AE7604:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7614u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7614u) goto L_08AE7614;
    return;
L_08AE7614:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7620u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AE7620u) goto L_08AE7620;
    return;
L_08AE7620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7634;
      }
      goto L_08AE7628;
    }
L_08AE7628:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE75F0;
      }
      goto L_08AE7634;
    }
L_08AE7634:
    ctx.set_gpr(31, 0x08AE763Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE763Cu) goto L_08AE763C;
    return;
L_08AE763C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE764Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE764Cu) goto L_08AE764C;
    return;
L_08AE764C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7658u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7658u) goto L_08AE7658;
    return;
L_08AE7658:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7670u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7670u) goto L_08AE7670;
    return;
L_08AE7670:
    ctx.set_gpr(31, 0x08AE7678u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AE7678u) goto L_08AE7678;
    return;
L_08AE7678:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AE7684u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7684u) goto L_08AE7684;
    return;
L_08AE7684:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AE76A0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE76A0u) goto L_08AE76A0;
    return;
L_08AE76A0:
    ctx.set_gpr(31, 0x08AE76A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE76A8u) goto L_08AE76A8;
    return;
L_08AE76A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE76B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE76B4u) goto L_08AE76B4;
    return;
L_08AE76B4:
    ctx.set_gpr(31, 0x08AE76BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE76BCu) goto L_08AE76BC;
    return;
L_08AE76BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17327u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17254u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(121));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(31, 0x08AE76F0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE76F0u) goto L_08AE76F0;
    return;
L_08AE76F0:
    ctx.set_gpr(31, 0x08AE76F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE76F8u) goto L_08AE76F8;
    return;
L_08AE76F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17327u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17254u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16371u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(122));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE7730u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE7730u) goto L_08AE7730;
    return;
L_08AE7730:
    ctx.set_gpr(31, 0x08AE7738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7738u) goto L_08AE7738;
    return;
L_08AE7738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17254u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08AE776Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE776Cu) goto L_08AE776C;
    return;
L_08AE776C:
    ctx.set_gpr(31, 0x08AE7774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7774u) goto L_08AE7774;
    return;
L_08AE7774:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17384u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17254u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE77ACu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE77ACu) goto L_08AE77AC;
    return;
L_08AE77AC:
    ctx.set_gpr(31, 0x08AE77B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE77B4u) goto L_08AE77B4;
    return;
L_08AE77B4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(7, 17327u << 16u);
    ctx.set_gpr(3, 17096u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(122));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 17254u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08AE77F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE77F8u) goto L_08AE77F8;
    return;
L_08AE77F8:
    ctx.set_gpr(31, 0x08AE7800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7800u) goto L_08AE7800;
    return;
L_08AE7800:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(122));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08AE7838u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7838u) goto L_08AE7838;
    return;
L_08AE7838:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(19, 2231u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE7858u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8224));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE7858u) goto L_08AE7858;
    return;
L_08AE7858:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(238));
    ctx.set_gpr(31, 0x08AE786Cu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE786Cu) goto L_08AE786C;
    return;
L_08AE786C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE7884u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE7884u) goto L_08AE7884;
    return;
L_08AE7884:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(251));
    ctx.set_gpr(31, 0x08AE7898u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(237));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7898u) goto L_08AE7898;
    return;
L_08AE7898:
    ctx.set_gpr(31, 0x08AE78A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE78A0u) goto L_08AE78A0;
    return;
L_08AE78A0:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AE78B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AE78B4u) goto L_08AE78B4;
    return;
L_08AE78B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 24u, 0x08AE81D0u>(ctx, &aot_mem); return;
      }
      goto L_08AE78BC;
    }
L_08AE78BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE78CCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1083u, 0x08AEB4D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE78CCu) goto L_08AE78CC;
    return;
L_08AE78CC:
    ctx.set_gpr(31, 0x08AE78D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE78D4u) goto L_08AE78D4;
    return;
L_08AE78D4:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE78E4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8260));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE78E4u) goto L_08AE78E4;
    return;
L_08AE78E4:
    ctx.set_gpr(31, 0x08AE78ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE78ECu) goto L_08AE78EC;
    return;
L_08AE78EC:
    ctx.set_gpr(31, 0x08AE78F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE78F4u) goto L_08AE78F4;
    return;
L_08AE78F4:
    ctx.set_gpr(31, 0x08AE78FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE78FCu) goto L_08AE78FC;
    return;
L_08AE78FC:
    ctx.set_gpr(31, 0x08AE7904u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7904u) goto L_08AE7904;
    return;
L_08AE7904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AE791Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE791Cu) goto L_08AE791C;
    return;
L_08AE791C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AE7928u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7928u) goto L_08AE7928;
    return;
L_08AE7928:
    ctx.set_gpr(31, 0x08AE7930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7930u) goto L_08AE7930;
    return;
L_08AE7930:
    ctx.set_gpr(31, 0x08AE7938u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE7938u) goto L_08AE7938;
    return;
L_08AE7938:
    ctx.set_gpr(31, 0x08AE7940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7940u) goto L_08AE7940;
    return;
L_08AE7940:
    ctx.set_gpr(31, 0x08AE7948u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7948u) goto L_08AE7948;
    return;
L_08AE7948:
    ctx.set_gpr(31, 0x08AE7950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7950u) goto L_08AE7950;
    return;
L_08AE7950:
    ctx.set_gpr(31, 0x08AE7958u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7958u) goto L_08AE7958;
    return;
L_08AE7958:
    ctx.set_gpr(31, 0x08AE7960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7960u) goto L_08AE7960;
    return;
L_08AE7960:
    ctx.set_gpr(31, 0x08AE7968u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7968u) goto L_08AE7968;
    return;
L_08AE7968:
    ctx.set_gpr(31, 0x08AE7970u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7970u) goto L_08AE7970;
    return;
L_08AE7970:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7980u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 606u, 0x08A96EBCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7980u) goto L_08AE7980;
    return;
L_08AE7980:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_08AE79A8;
    }
    goto L_08AE7988;
L_08AE7988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AE7994u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7994u) goto L_08AE7994;
    return;
L_08AE7994:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.set_gpr(31, 0x08AE79A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08AE79A0u) goto L_08AE79A0;
    return;
L_08AE79A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AE79C4;
      }
      goto L_08AE79A8;
    }
L_08AE79A8:
    ctx.set_gpr(31, 0x08AE79B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE79B0u) goto L_08AE79B0;
    return;
L_08AE79B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE79C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08AE79C0u) goto L_08AE79C0;
    return;
L_08AE79C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    goto L_08AE79C4;
L_08AE79C4:
    ctx.set_gpr(31, 0x08AE79CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE79CCu) goto L_08AE79CC;
    return;
L_08AE79CC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08AE79DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE79DCu) goto L_08AE79DC;
    return;
L_08AE79DC:
    ctx.set_gpr(31, 0x08AE79E4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE79E4u) goto L_08AE79E4;
    return;
L_08AE79E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08AE79F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08AE79F4u) goto L_08AE79F4;
    return;
L_08AE79F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7AA4;
      }
      goto L_08AE79FC;
    }
L_08AE79FC:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17592)));
    ctx.set_gpr(31, 0x08AE7A0Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A0Cu) goto L_08AE7A0C;
    return;
L_08AE7A0C:
    ctx.set_gpr(31, 0x08AE7A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A14u) goto L_08AE7A14;
    return;
L_08AE7A14:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1780)));
    ctx.set_gpr(31, 0x08AE7A20u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AE7A20u) goto L_08AE7A20;
    return;
L_08AE7A20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.set_gpr(31, 0x08AE7A40u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7A40u) goto L_08AE7A40;
    return;
L_08AE7A40:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(31, 0x08AE7A50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A50u) goto L_08AE7A50;
    return;
L_08AE7A50:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7A7C;
      }
      goto L_08AE7A58;
    }
L_08AE7A58:
    ctx.set_gpr(31, 0x08AE7A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7A60u) goto L_08AE7A60;
    return;
L_08AE7A60:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x08AE7A70u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(564));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A70u) goto L_08AE7A70;
    return;
L_08AE7A70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AE7A7Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A7Cu) goto L_08AE7A7C;
    return;
L_08AE7A7C:
    ctx.set_gpr(31, 0x08AE7A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A84u) goto L_08AE7A84;
    return;
L_08AE7A84:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1780)));
    ctx.set_gpr(31, 0x08AE7A90u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AE7A90u) goto L_08AE7A90;
    return;
L_08AE7A90:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1784)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7AA4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AE7AA4u) goto L_08AE7AA4;
    return;
L_08AE7AA4:
    ctx.set_gpr(31, 0x08AE7AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7AACu) goto L_08AE7AAC;
    return;
L_08AE7AAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AE7AC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7AC0u) goto L_08AE7AC0;
    return;
L_08AE7AC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7ACCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(648));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 606u, 0x08A96EBCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7ACCu) goto L_08AE7ACC;
    return;
L_08AE7ACC:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), 0u);
        goto L_08AE7ADC;
    }
    goto L_08AE7AD4;
L_08AE7AD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08AE7ADC;
L_08AE7ADC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AE7AE8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08AE7AE8u) goto L_08AE7AE8;
    return;
L_08AE7AE8:
    ctx.set_gpr(31, 0x08AE7AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7AF0u) goto L_08AE7AF0;
    return;
L_08AE7AF0:
    ctx.set_gpr(31, 0x08AE7AF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7AF8u) goto L_08AE7AF8;
    return;
L_08AE7AF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7B08u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B08u) goto L_08AE7B08;
    return;
L_08AE7B08:
    ctx.set_gpr(31, 0x08AE7B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B10u) goto L_08AE7B10;
    return;
L_08AE7B10:
    ctx.set_gpr(31, 0x08AE7B18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B18u) goto L_08AE7B18;
    return;
L_08AE7B18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7B24u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B24u) goto L_08AE7B24;
    return;
L_08AE7B24:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AE7B2C;
L_08AE7B2C:
    ctx.set_gpr(31, 0x08AE7B34u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B34u) goto L_08AE7B34;
    return;
L_08AE7B34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B88;
      }
      goto L_08AE7B3C;
    }
L_08AE7B3C:
    ctx.set_gpr(31, 0x08AE7B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B44u) goto L_08AE7B44;
    return;
L_08AE7B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7B54u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7B54u) goto L_08AE7B54;
    return;
L_08AE7B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7B64u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B64u) goto L_08AE7B64;
    return;
L_08AE7B64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE7B80u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B80u) goto L_08AE7B80;
    return;
L_08AE7B80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE7BEC;
      }
      goto L_08AE7B88;
    }
L_08AE7B88:
    ctx.set_gpr(31, 0x08AE7B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B90u) goto L_08AE7B90;
    return;
L_08AE7B90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7BA0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7BA0u) goto L_08AE7BA0;
    return;
L_08AE7BA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8272));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7BC0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE7BC0u) goto L_08AE7BC0;
    return;
L_08AE7BC0:
    ctx.set_gpr(31, 0x08AE7BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7BC8u) goto L_08AE7BC8;
    return;
L_08AE7BC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7BD8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7BD8u) goto L_08AE7BD8;
    return;
L_08AE7BD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE7BE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08AE7BE8u) goto L_08AE7BE8;
    return;
L_08AE7BE8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AE7BEC;
L_08AE7BEC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 20 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08AE7B2C;
    }
    goto L_08AE7BF8;
L_08AE7BF8:
    ctx.set_gpr(31, 0x08AE7C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C00u) goto L_08AE7C00;
    return;
L_08AE7C00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7C10u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7C10u) goto L_08AE7C10;
    return;
L_08AE7C10:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AE7C1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C1Cu) goto L_08AE7C1C;
    return;
L_08AE7C1C:
    ctx.set_gpr(31, 0x08AE7C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C24u) goto L_08AE7C24;
    return;
L_08AE7C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE7C34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7C34u) goto L_08AE7C34;
    return;
L_08AE7C34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7C40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C40u) goto L_08AE7C40;
    return;
L_08AE7C40:
    ctx.set_gpr(31, 0x08AE7C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C48u) goto L_08AE7C48;
    return;
L_08AE7C48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7C54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C54u) goto L_08AE7C54;
    return;
L_08AE7C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 24u, 0x08AE81D0u>(ctx, &aot_mem); return;
      }
      goto L_08AE7C5C;
    }
L_08AE7C5C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AE7C70u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1492), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1083u, 0x08AEB4D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C70u) goto L_08AE7C70;
    return;
L_08AE7C70:
    ctx.set_gpr(31, 0x08AE7C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C78u) goto L_08AE7C78;
    return;
L_08AE7C78:
    ctx.set_gpr(31, 0x08AE7C80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C80u) goto L_08AE7C80;
    return;
L_08AE7C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7C8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C8Cu) goto L_08AE7C8C;
    return;
L_08AE7C8C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7C98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 47u, 0x08AE8480u>(ctx, &aot_mem) && ctx.pc == 0x08AE7C98u) goto L_08AE7C98;
    return;
L_08AE7C98:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AE7CA4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CA4u) goto L_08AE7CA4;
    return;
L_08AE7CA4:
    ctx.set_gpr(31, 0x08AE7CACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CACu) goto L_08AE7CAC;
    return;
L_08AE7CAC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(31, 0x08AE7CBCu);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 46u, 0x08AE8458u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CBCu) goto L_08AE7CBC;
    return;
L_08AE7CBC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x08AE7CD0u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 91u, 0x08A01240u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CD0u) goto L_08AE7CD0;
    return;
L_08AE7CD0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(31, 0x08AE7CDCu);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CDCu) goto L_08AE7CDC;
    return;
L_08AE7CDC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1268));
    ctx.set_gpr(31, 0x08AE7CE8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 862u, 0x088439F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7CE8u) goto L_08AE7CE8;
    return;
L_08AE7CE8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x08AE7D00u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D00u) goto L_08AE7D00;
    return;
L_08AE7D00:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7D0Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D0Cu) goto L_08AE7D0C;
    return;
L_08AE7D0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1356), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 49842u << 16u);
    ctx.set_gpr(31, 0x08AE7D20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 431u, 0x08849ADCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7D20u) goto L_08AE7D20;
    return;
L_08AE7D20:
    ctx.set_gpr(2, 16704u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1360), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08AE7D30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 431u, 0x08849ADCu>(ctx, &aot_mem) && ctx.pc == 0x08AE7D30u) goto L_08AE7D30;
    return;
L_08AE7D30:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1364), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1368), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1372), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1376), 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1380), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 49472u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1384), ctx.gpr[2]);
    ctx.set_gpr(2, 16752u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1388), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1392), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1396), 0u);
    ctx.set_gpr(2, 16704u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1400), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(ctx.gpr[6]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1408), 0u);
    ctx.set_gpr(2, 15948u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1412), 0u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1348), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1268));
    ctx.set_gpr(31, 0x08AE7D90u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(1356));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 516u, 0x08849FC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D90u) goto L_08AE7D90;
    return;
L_08AE7D90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1585), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1216));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AE7DACu);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DACu) goto L_08AE7DAC;
    return;
L_08AE7DAC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1585)));
        goto L_08AE7E5C;
    }
    goto L_08AE7DB4;
L_08AE7DB4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1585), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE7DC0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7DC0u) goto L_08AE7DC0;
    return;
L_08AE7DC0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08AE7E08;
    }
    goto L_08AE7DC8;
L_08AE7DC8:
    ctx.set_gpr(31, 0x08AE7DD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DD0u) goto L_08AE7DD0;
    return;
L_08AE7DD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7E04;
      }
      goto L_08AE7DD8;
    }
L_08AE7DD8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7DE4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 47u, 0x08AE8480u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DE4u) goto L_08AE7DE4;
    return;
L_08AE7DE4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AE7DF0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DF0u) goto L_08AE7DF0;
    return;
L_08AE7DF0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    ctx.set_gpr(31, 0x08AE7DFCu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7DFCu) goto L_08AE7DFC;
    return;
L_08AE7DFC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1216), 0u);
      if (branch_taken) {
          goto L_08AE7E58;
      }
      goto L_08AE7E04;
    }
L_08AE7E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AE7E08;
L_08AE7E08:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1216));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AE7E18u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 56u, 0x08A989F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E18u) goto L_08AE7E18;
    return;
L_08AE7E18:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
        goto L_08AE7E4C;
    }
    goto L_08AE7E20;
L_08AE7E20:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7E2Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 47u, 0x08AE8480u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E2Cu) goto L_08AE7E2C;
    return;
L_08AE7E2C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AE7E38u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E38u) goto L_08AE7E38;
    return;
L_08AE7E38:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    ctx.set_gpr(31, 0x08AE7E44u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E44u) goto L_08AE7E44;
    return;
L_08AE7E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7E54;
      }
      goto L_08AE7E4C;
    }
L_08AE7E4C:
    ctx.set_gpr(31, 0x08AE7E54u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E54u) goto L_08AE7E54;
    return;
L_08AE7E54:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1216), 0u);
    goto L_08AE7E58;
L_08AE7E58:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1585)));
    goto L_08AE7E5C;
L_08AE7E5C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
        goto L_08AE7E98;
    }
    goto L_08AE7E64;
L_08AE7E64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08AE7E70u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7E70u) goto L_08AE7E70;
    return;
L_08AE7E70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08AE7E80u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7E80u) goto L_08AE7E80;
    return;
L_08AE7E80:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7E90u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 6u, 0x08AF005Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7E90u) goto L_08AE7E90;
    return;
L_08AE7E90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(704));
      if (branch_taken) {
          goto L_08AE7EC4;
      }
      goto L_08AE7E98;
    }
L_08AE7E98:
    ctx.set_gpr(31, 0x08AE7EA0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7EA0u) goto L_08AE7EA0;
    return;
L_08AE7EA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AE7EB0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7EB0u) goto L_08AE7EB0;
    return;
L_08AE7EB0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE7EC0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 6u, 0x08AF005Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7EC0u) goto L_08AE7EC0;
    return;
L_08AE7EC0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(704));
    goto L_08AE7EC4;
L_08AE7EC4:
    ctx.set_gpr(31, 0x08AE7ECCu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 29u, 0x08AE8208u>(ctx, &aot_mem) && ctx.pc == 0x08AE7ECCu) goto L_08AE7ECC;
    return;
L_08AE7ECC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1496));
    ctx.set_gpr(31, 0x08AE7ED8u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7ED8u) goto L_08AE7ED8;
    return;
L_08AE7ED8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1532));
    ctx.set_gpr(31, 0x08AE7EE4u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EE4u) goto L_08AE7EE4;
    return;
L_08AE7EE4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AE7EF4;
L_08AE7EF4:
    ctx.set_gpr(31, 0x08AE7EFCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EFCu) goto L_08AE7EFC;
    return;
L_08AE7EFC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AE7F10;
    }
    goto L_08AE7F04;
L_08AE7F04:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AE7F10;
L_08AE7F10:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08AE7EF4;
    }
    goto L_08AE7F1C;
L_08AE7F1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7F28u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1256));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 693u, 0x08A97560u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F28u) goto L_08AE7F28;
    return;
L_08AE7F28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 3u, 0x08AE8014u>(ctx, &aot_mem); return;
    }
    goto L_08AE7F30;
L_08AE7F30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1256)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 2u, 0x08AE8010u>(ctx, &aot_mem); return;
      }
      goto L_08AE7F3C;
    }
L_08AE7F3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.set_gpr(31, 0x08AE7F54u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(632));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 772u, 0x08A97C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F54u) goto L_08AE7F54;
    return;
L_08AE7F54:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08AE7F84;
    }
    goto L_08AE7F5C;
L_08AE7F5C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1260), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AE7F84;
L_08AE7F84:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.set_gpr(31, 0x08AE7F90u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(636));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 141u, 0x08A99580u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F90u) goto L_08AE7F90;
    return;
L_08AE7F90:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AE7FF8;
    }
    goto L_08AE7F98;
L_08AE7F98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(31, 0x08AE7FA4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 48u, 0x08AE8488u>(ctx, &aot_mem) && ctx.pc == 0x08AE7FA4u) goto L_08AE7FA4;
    return;
L_08AE7FA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE7FB4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 52u, 0x08AE84B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7FB4u) goto L_08AE7FB4;
    return;
L_08AE7FB4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE7FF0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7FF0u) goto L_08AE7FF0;
    return;
L_08AE7FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 2u, 0x08AE8010u>(ctx, &aot_mem); return;
      }
      goto L_08AE7FF8;
    }
L_08AE7FF8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8072)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08AE8000u; return;
}

void recomp_unit_0184(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0184_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_184(Runtime &runtime) {
    runtime.register_generated_unit(184u, 0x08AE4000u, 16384u, &recomp_unit_0184, &recomp_unit_0184_entry);
    runtime.register_function(0x08AE4000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4008u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4010u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4030u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4038u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4058u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4060u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4080u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE408Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE411Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4124u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4138u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4140u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4154u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE416Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4174u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4180u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4188u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4190u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4198u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4210u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE421Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4228u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4230u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4244u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE424Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4254u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4268u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4270u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4290u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4300u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4318u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4320u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE432Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4334u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4350u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4354u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4370u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4404u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE440Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4424u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE442Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4434u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE443Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4450u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4458u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4470u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4490u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4500u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4508u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4510u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4518u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4520u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4530u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4538u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4540u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4550u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4560u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4564u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4568u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4574u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE457Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4584u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE458Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4608u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4614u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE461Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4630u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4638u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE464Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4654u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4660u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4668u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4670u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE467Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4684u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE468Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4714u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE471Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE473Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4744u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4750u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4758u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4760u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4774u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE477Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE479Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4808u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4810u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4818u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE482Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4834u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4848u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4858u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4860u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4870u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4878u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4880u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE488Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4894u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE489Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4904u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4924u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE492Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE494Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4954u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4974u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE497Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4984u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4990u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4998u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ABCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ED0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5008u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE501Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5024u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5038u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5044u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE504Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5060u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5068u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5070u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5084u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5088u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5090u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5098u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE510Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5118u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5120u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5128u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5134u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE513Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5150u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5164u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE516Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5174u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5188u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE518Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5194u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5210u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5218u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5220u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5234u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE523Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5250u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5258u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5278u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5280u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5300u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5308u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE531Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5328u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5330u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5344u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE534Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5354u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5368u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5370u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5384u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE538Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5418u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5420u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5428u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5434u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5440u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5454u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE545Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5464u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5484u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE548Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5508u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5510u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5518u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE552Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5538u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5540u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5554u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE555Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5564u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5578u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5580u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5594u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE559Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5604u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE560Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5620u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5624u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5634u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE563Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5648u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5650u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5664u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE566Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5674u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5688u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5690u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE571Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5728u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5734u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE573Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE576Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5770u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5780u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5798u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5810u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5818u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE582Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5834u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5848u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5858u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5864u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5870u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5878u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5880u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5888u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5894u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE589Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5908u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5914u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE591Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE592Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE594Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5954u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5964u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5984u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE598Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE599Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ADCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ECCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ED4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6108u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6118u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6124u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE613Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6150u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE615Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6164u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6170u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE617Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6184u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6198u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6200u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE620Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6218u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6224u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6230u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6238u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE624Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6254u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE625Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6268u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6270u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6280u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6288u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6290u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6294u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6300u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE630Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE631Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6324u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6338u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6340u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6354u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE635Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE636Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6370u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE637Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE639Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6404u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6414u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6450u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE646Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6470u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6480u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6488u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE648Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6490u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6524u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6534u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6538u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6540u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6550u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6554u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6558u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6588u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6590u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE660Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6618u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6620u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6658u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6660u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6668u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6680u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6688u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6698u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE670Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6714u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6728u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6744u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE674Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE676Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6774u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6794u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE679Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6804u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6810u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6818u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6820u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6828u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6830u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6838u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6840u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6848u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6850u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6858u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6860u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6868u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6870u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6878u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6884u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE688Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6894u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE689Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6930u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6938u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6940u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6948u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6954u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6968u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6970u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6980u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6988u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE699Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ABCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ADCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ED0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7004u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7008u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE701Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE702Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7038u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7040u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7050u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE705Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7064u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7070u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7078u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7084u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7098u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7100u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7108u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7118u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7120u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7128u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7134u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7140u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7150u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7160u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE716Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7188u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7198u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7208u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7210u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7230u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7238u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7250u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7268u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7278u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7280u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE728Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE729Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7320u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7324u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE732Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE733Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7348u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7350u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7360u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE736Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7374u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7380u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7388u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7394u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7400u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7420u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7428u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7430u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7440u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7450u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE745Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7468u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7470u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7484u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE748Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE749Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7500u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7508u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7510u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7518u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7520u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7528u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7530u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE754Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7554u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7570u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7578u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7590u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE759Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7604u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7614u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7620u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7628u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7634u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE763Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE764Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7658u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7670u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7678u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7684u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7738u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE776Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7774u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7800u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7838u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7858u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE786Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7884u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7898u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7904u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE791Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7928u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7930u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7938u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7940u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7948u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7950u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7958u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7960u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7968u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7970u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7980u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7988u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7994u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ADCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ECCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FF8u, &recomp_unit_0184, "recomp_unit_0184");
}
} // namespace psprecomp
