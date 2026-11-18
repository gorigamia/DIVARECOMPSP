#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0159[4096] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 0, 12, 0,
    0, 0, 0, 13, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 25,
    0, 26, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 37, 0, 38, 0,
    39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0,
    51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0, 61, 0,
    0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0,
    74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 90,
    0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0,
    0, 103, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0,
    0, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0,
    127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 139, 0, 140,
    0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0,
    152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169,
    0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0,
    0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0,
    0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0,
    196, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 206,
    0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 217,
    0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0,
    226, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 233, 0, 234, 0, 0, 0,
    235, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 244, 245, 0, 0, 246, 0, 0, 247, 0,
    0, 248, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 258, 0, 259,
    0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0,
    269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 278, 279, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0,
    283, 0, 284, 0, 285, 0, 0, 0, 286, 287, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 294, 295, 0,
    296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 303, 0, 304,
    0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0,
    0, 315, 0, 316, 0, 0, 0, 317, 318, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    325, 0, 326, 0, 327, 0, 0, 0, 328, 329, 0, 330, 0, 0, 331, 332, 0, 0, 0, 0, 333, 0, 334, 0, 0, 335, 0, 336, 0, 337, 0, 338,
    0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 345, 0, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0,
    0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363,
    0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 374,
    0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0,
    386, 0, 387, 0, 0, 388, 389, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395,
    0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410,
    0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416,
    0, 417, 0, 0, 418, 0, 419, 0, 420, 0, 0, 421, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 0, 430, 0, 431, 432, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0,
    0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 450, 451, 0, 0, 452, 453, 0, 0, 454, 455, 0, 0, 0, 456, 0,
    457, 458, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 464, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 469,
    0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 0,
    479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488,
    0, 489, 490, 491, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0,
    0, 499, 0, 500, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 506, 507, 0, 0, 0, 508, 0, 509,
    0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 517, 0, 518, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525,
    0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0,
    528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 531,
    0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 541,
    0, 0, 0, 0, 542, 543, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 560, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 564, 565, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 573, 574, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 582, 583, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 587, 0, 588, 0, 589, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0,
    0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 597, 0, 598, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 0, 603, 0,
    604, 0, 605, 0, 0, 0, 0, 0, 606, 607, 0, 608, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0,
    614, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 622, 0,
    623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0,
    633, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 638, 639, 640, 0, 0, 0, 0, 0, 0, 0,
    641, 0, 642, 0, 643, 0, 644, 645, 646, 0, 0, 0, 0, 0, 0, 0, 647, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0,
    652, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 661, 0, 662, 0, 663, 0, 0,
    664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 668, 669, 670, 0, 0, 671, 0, 672, 673, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0,
    0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 688,
    0, 0, 0, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 697, 698, 0, 699, 0, 0, 0, 0,
    0, 700, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0,
    0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 713, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0,
    0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0,
    0, 728, 0, 729, 730, 731, 0, 0, 732, 0, 0, 733, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 739, 0,
    740, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0,
    0, 0, 752, 0, 753, 754, 755, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 762, 0, 763,
    0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 768, 769, 770, 0, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0,
    775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0, 779, 780, 781, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0,
    0, 786, 0, 0, 787, 0, 788, 789, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 797, 0, 798, 0,
    799, 0, 800, 0, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 804, 805, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 808, 0, 809, 810, 811,
    0, 0, 812, 0, 0, 813, 0, 814, 0, 815, 816, 817, 0, 818, 0, 819, 0, 0, 820, 0, 0, 821, 0, 822, 0, 823, 0, 0, 824, 0, 0, 825,
    0, 826, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0,
    0, 0, 834, 0, 0, 835, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0,
    0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 849, 0, 850,
    0, 851, 0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 857, 0, 858, 859, 860, 0, 0, 0, 861, 0,
    0, 862, 0, 863, 0, 0, 864, 0, 0, 865, 0, 866, 867, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 874, 0, 0, 875, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879,
    0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 881, 0, 882, 0, 0, 0, 883, 0, 884, 0, 0, 885, 0, 886, 0, 0, 0, 0, 887, 0, 0,
    0, 0, 0, 0, 888, 0, 0, 889, 0, 890, 0, 891, 0, 0, 892, 0, 0, 893, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0,
    897, 0, 898, 899, 900, 0, 0, 0, 901, 0, 0, 902, 0, 903, 0, 904, 0, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 908, 0, 909, 0, 0, 0, 910, 0, 0, 911, 0, 912, 0, 0, 0, 913, 0, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0,
    916, 0, 0, 0, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 919, 0, 920, 0, 0, 921, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0,
    0, 924, 0, 0, 925, 0, 926, 0, 927, 0, 0, 0, 0, 928, 0, 0, 0, 0, 929, 0, 0, 930, 0, 931, 0, 932, 0, 0, 0, 0, 933, 0,
    0, 0, 0, 934, 0, 0, 935, 0, 936, 0, 937, 0, 0, 938, 0, 939, 0, 940, 0, 0, 0, 0, 941, 0, 942, 0, 0, 943, 0, 0, 0, 944,
    0, 945, 946, 947, 0, 0, 948, 0, 0, 949, 0, 950, 0, 0, 951, 0, 952, 0, 953, 0, 0, 0, 0, 954, 0, 0, 0, 955, 0, 956, 957, 958,
    0, 0, 959, 0, 960, 961, 0, 962, 0, 963, 0, 964, 0, 0, 965, 0, 966, 0, 0, 967, 0, 968, 0, 0, 969, 0, 0, 970, 0, 0, 0, 971,
    0, 972, 973, 974, 0, 0, 975, 0, 0, 976, 0, 977, 0, 978, 0, 0, 0, 979, 0, 0, 0, 0, 980, 0, 981, 982, 0, 983, 0, 984, 985, 986,
    0, 0, 0, 0, 987, 0, 988, 0, 0, 989, 0, 0, 990, 0, 991, 0, 0, 992, 0, 0, 0, 993, 994, 0, 995, 0, 0, 0, 996, 0, 997, 998,
    999, 0, 0, 0, 0, 1000, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 0, 1004, 0, 0, 0, 0, 1005, 0, 1006, 0, 0, 0,
    1007, 0, 0, 0, 0, 1008, 1009, 0, 0, 0, 1010, 0, 1011, 0, 1012, 0, 0, 1013, 0, 1014, 0, 0, 1015, 0, 0, 1016, 0, 0, 1017, 0, 1018, 0,
    1019, 0, 0, 0, 0, 1020, 0, 1021, 0, 1022, 0, 1023, 0, 0, 0, 0, 1024, 0, 1025, 1026, 0, 1027, 0, 0, 0, 1028, 0, 0, 1029, 0, 1030, 0,
    1031, 0, 0, 0, 0, 1032, 0, 1033, 1034, 0, 1035, 0, 0, 1036, 0, 0, 1037, 0, 1038, 0, 0, 0, 0, 1039, 0, 1040, 1041, 0, 1042, 0, 1043, 1044,
    1045, 0, 0, 1046, 0, 0, 1047, 0, 1048, 0, 0, 0, 1049, 0, 1050, 0, 1051, 0, 0, 1052, 0, 1053, 0, 0, 0, 0, 1054, 0, 0, 1055, 0, 0,
    1056, 1057, 0, 1058, 0, 1059, 0, 1060, 0, 1061, 0, 1062, 0, 0, 1063, 0, 0, 1064, 0, 0, 1065, 1066, 0, 0, 1067, 0, 1068, 1069, 1070, 0, 0, 0,
    1071, 0, 1072, 0, 0, 1073, 0, 0, 0, 1074, 0, 0, 0, 0, 1075, 0, 0, 1076, 0, 0, 0, 0, 1077, 0, 1078, 1079, 1080, 0, 0, 0, 1081, 0,
    1082, 0, 0, 1083, 0, 0, 0, 1084, 0, 0, 0, 0, 1085, 0, 0, 1086, 0, 0, 0, 0, 1087, 0, 1088, 1089, 1090, 0, 0, 0, 1091, 0, 1092, 0,
    0, 1093, 0, 0, 0, 1094, 0, 0, 0, 0, 1095, 0, 0, 1096, 0, 0, 0, 0, 1097, 0, 1098, 1099, 1100, 0, 0, 0, 1101, 0, 1102, 0, 0, 1103,
    0, 0, 0, 1104, 0, 0, 0, 0, 1105, 0, 0, 1106, 0, 0, 1107, 0, 1108, 0, 0, 0, 0, 1109, 0, 1110, 0, 1111, 0, 0, 0, 0, 1112, 0,
    1113, 0, 1114, 0, 0, 0, 0, 1115, 0, 0, 1116, 0, 0, 1117, 1118, 0, 1119, 0, 1120, 0, 1121, 0, 1122, 0, 0, 0, 1123, 1124, 0, 1125, 0, 0,
    1126, 0, 0, 1127, 1128, 0, 0, 1129, 0, 1130, 1131, 1132, 0, 0, 0, 1133, 0, 0, 0, 1134, 0, 1135, 1136, 1137, 0, 0, 0, 1138, 0, 0, 1139, 1140,
    0, 1141, 0, 1142, 0, 0, 0, 0, 1143, 0, 1144, 0, 1145, 0, 0, 0, 0, 1146, 1147, 0, 0, 0, 1148, 0, 0, 1149, 0, 1150, 0, 0, 0, 0,
    1151, 1152, 0, 1153, 0, 0, 0, 1154, 0, 1155, 0, 0, 0, 1156, 0, 0, 0, 1157, 0, 1158, 0, 0, 1159, 0, 1160, 0, 0, 0, 1161, 0, 0, 0,
    0, 1162, 0, 0, 1163, 0, 1164, 1165, 1166, 0, 0, 0, 0, 0, 0, 0, 1167, 0, 0, 0, 0, 1168, 0, 1169, 0, 1170, 0, 0, 1171, 0, 1172, 0,
    0, 0, 1173, 0, 0, 0, 0, 1174, 0, 0, 1175, 0, 1176, 1177, 1178, 0, 0, 0, 0, 0, 0, 0, 1179, 0, 0, 0, 0, 1180, 0, 1181, 0, 1182,
    0, 0, 0, 0, 1183, 0, 1184, 1185, 1186, 0, 0, 1187, 0, 0, 1188, 0, 1189, 0, 1190, 0, 0, 0, 0, 1191, 0, 0, 0, 0, 0, 1192, 1193, 0,
    0, 0, 0, 0, 0, 0, 1194, 0, 1195, 1196, 1197, 0, 0, 0, 0, 1198, 0, 1199, 1200, 1201, 0, 0, 0, 1202, 1203, 0, 1204, 0, 0, 0, 0, 0,
    1205, 0, 1206, 1207, 1208, 0, 0, 0, 1209, 0, 1210, 0, 1211, 0, 0, 1212, 0, 1213, 0, 0, 0, 0, 0, 1214, 0, 1215, 0, 0, 0, 0, 0, 0,
    0, 1216, 0, 1217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1218, 0, 1219, 0, 0, 0, 0, 1220, 0, 1221, 0, 1222, 0, 0, 0, 0, 0, 0, 0,
    1223, 0, 1224, 0, 0, 0, 0, 0, 1225, 1226, 0, 0, 0, 0, 1227, 0, 0, 0, 1228, 0, 1229, 0, 0, 0, 0, 1230, 0, 0, 1231, 0, 1232, 0,
    0, 0, 0, 0, 0, 1233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1234, 0, 1235,
    0, 0, 0, 0, 0, 1236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1237, 0, 1238,
    0, 0, 0, 0, 0, 1239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1240, 0, 1241, 0, 0,
    0, 0, 1242, 0, 1243, 0, 0, 0, 0, 0, 1244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1245, 0, 1246, 0, 0, 0, 0, 1247, 1248, 0, 0, 1249, 0, 1250, 0, 1251, 0, 0, 1252, 0, 1253, 1254, 1255, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1256, 0, 1257, 0, 0, 0, 1258, 0, 1259, 1260, 1261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1262, 1263, 0, 0, 1264, 0, 1265, 0, 1266, 0, 0, 1267, 0, 1268, 0, 1269, 0, 0, 1270, 0, 1271, 1272, 1273, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1274, 0, 1275, 0, 0, 0, 0, 0, 1276, 0, 1277, 0, 1278, 0, 0, 1279, 0, 1280, 1281, 1282, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1283, 0, 1284, 0, 0, 0, 0, 0, 1285, 1286, 0, 1287, 0, 1288, 0, 0, 1289, 0, 1290, 0, 1291, 0, 0, 1292, 0, 1293, 1294, 1295, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1296, 0, 1297, 0, 0, 0, 0, 0, 1298, 0, 1299, 0, 1300, 0, 0, 1301, 0, 1302, 1303, 1304, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1305, 0, 1306, 0, 0, 0, 0, 0, 1307, 1308, 0, 1309, 0, 1310, 0, 0, 1311, 0, 1312, 0, 1313,
};
void recomp_unit_0159_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A80000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0159[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A80000;
    case 2u: goto L_08A80014;
    case 3u: goto L_08A8001C;
    case 4u: goto L_08A8002C;
    case 5u: goto L_08A80034;
    case 6u: goto L_08A8003C;
    case 7u: goto L_08A80048;
    case 8u: goto L_08A80050;
    case 9u: goto L_08A80058;
    case 10u: goto L_08A80060;
    case 11u: goto L_08A80068;
    case 12u: goto L_08A80078;
    case 13u: goto L_08A8008C;
    case 14u: goto L_08A80098;
    case 15u: goto L_08A800A0;
    case 16u: goto L_08A800A8;
    case 17u: goto L_08A800B0;
    case 18u: goto L_08A800B8;
    case 19u: goto L_08A800C0;
    case 20u: goto L_08A800C8;
    case 21u: goto L_08A800D8;
    case 22u: goto L_08A800E0;
    case 23u: goto L_08A800E8;
    case 24u: goto L_08A800F4;
    case 25u: goto L_08A800FC;
    case 26u: goto L_08A80104;
    case 27u: goto L_08A8010C;
    case 28u: goto L_08A80114;
    case 29u: goto L_08A80124;
    case 30u: goto L_08A8012C;
    case 31u: goto L_08A8013C;
    case 32u: goto L_08A80144;
    case 33u: goto L_08A8014C;
    case 34u: goto L_08A80154;
    case 35u: goto L_08A8015C;
    case 36u: goto L_08A80164;
    case 37u: goto L_08A80170;
    case 38u: goto L_08A80178;
    case 39u: goto L_08A80180;
    case 40u: goto L_08A80188;
    case 41u: goto L_08A80190;
    case 42u: goto L_08A801A8;
    case 43u: goto L_08A801B0;
    case 44u: goto L_08A801C4;
    case 45u: goto L_08A801CC;
    case 46u: goto L_08A801D4;
    case 47u: goto L_08A801DC;
    case 48u: goto L_08A801E4;
    case 49u: goto L_08A801EC;
    case 50u: goto L_08A801F8;
    case 51u: goto L_08A80200;
    case 52u: goto L_08A80208;
    case 53u: goto L_08A80210;
    case 54u: goto L_08A80218;
    case 55u: goto L_08A80230;
    case 56u: goto L_08A80238;
    case 57u: goto L_08A80250;
    case 58u: goto L_08A80258;
    case 59u: goto L_08A80268;
    case 60u: goto L_08A80270;
    case 61u: goto L_08A80278;
    case 62u: goto L_08A80284;
    case 63u: goto L_08A8028C;
    case 64u: goto L_08A80294;
    case 65u: goto L_08A8029C;
    case 66u: goto L_08A802A4;
    case 67u: goto L_08A802B4;
    case 68u: goto L_08A802C8;
    case 69u: goto L_08A802D4;
    case 70u: goto L_08A802DC;
    case 71u: goto L_08A802E4;
    case 72u: goto L_08A802F0;
    case 73u: goto L_08A802F8;
    case 74u: goto L_08A80300;
    case 75u: goto L_08A80308;
    case 76u: goto L_08A80310;
    case 77u: goto L_08A80318;
    case 78u: goto L_08A80348;
    case 79u: goto L_08A80350;
    case 80u: goto L_08A80360;
    case 81u: goto L_08A8036C;
    case 82u: goto L_08A80374;
    case 83u: goto L_08A80384;
    case 84u: goto L_08A803A4;
    case 85u: goto L_08A803AC;
    case 86u: goto L_08A803BC;
    case 87u: goto L_08A803DC;
    case 88u: goto L_08A803E4;
    case 89u: goto L_08A803F4;
    case 90u: goto L_08A803FC;
    case 91u: goto L_08A80408;
    case 92u: goto L_08A80410;
    case 93u: goto L_08A80418;
    case 94u: goto L_08A80420;
    case 95u: goto L_08A80428;
    case 96u: goto L_08A80438;
    case 97u: goto L_08A80440;
    case 98u: goto L_08A80454;
    case 99u: goto L_08A8045C;
    case 100u: goto L_08A80464;
    case 101u: goto L_08A8046C;
    case 102u: goto L_08A80478;
    case 103u: goto L_08A80484;
    case 104u: goto L_08A8048C;
    case 105u: goto L_08A80494;
    case 106u: goto L_08A8049C;
    case 107u: goto L_08A804A8;
    case 108u: goto L_08A804B0;
    case 109u: goto L_08A804BC;
    case 110u: goto L_08A804C8;
    case 111u: goto L_08A804D0;
    case 112u: goto L_08A804E4;
    case 113u: goto L_08A804EC;
    case 114u: goto L_08A804F4;
    case 115u: goto L_08A80508;
    case 116u: goto L_08A80510;
    case 117u: goto L_08A8051C;
    case 118u: goto L_08A80524;
    case 119u: goto L_08A8052C;
    case 120u: goto L_08A80538;
    case 121u: goto L_08A80540;
    case 122u: goto L_08A80550;
    case 123u: goto L_08A80558;
    case 124u: goto L_08A80564;
    case 125u: goto L_08A8056C;
    case 126u: goto L_08A80574;
    case 127u: goto L_08A80580;
    case 128u: goto L_08A8058C;
    case 129u: goto L_08A80598;
    case 130u: goto L_08A805A0;
    case 131u: goto L_08A805A8;
    case 132u: goto L_08A805B4;
    case 133u: goto L_08A805BC;
    case 134u: goto L_08A805C4;
    case 135u: goto L_08A805D0;
    case 136u: goto L_08A805D8;
    case 137u: goto L_08A805E0;
    case 138u: goto L_08A805EC;
    case 139u: goto L_08A805F4;
    case 140u: goto L_08A805FC;
    case 141u: goto L_08A8060C;
    case 142u: goto L_08A80614;
    case 143u: goto L_08A8061C;
    case 144u: goto L_08A80628;
    case 145u: goto L_08A80630;
    case 146u: goto L_08A8063C;
    case 147u: goto L_08A8064C;
    case 148u: goto L_08A80654;
    case 149u: goto L_08A80660;
    case 150u: goto L_08A80668;
    case 151u: goto L_08A80670;
    case 152u: goto L_08A80680;
    case 153u: goto L_08A80688;
    case 154u: goto L_08A80690;
    case 155u: goto L_08A8069C;
    case 156u: goto L_08A806A4;
    case 157u: goto L_08A806AC;
    case 158u: goto L_08A806B0;
    case 159u: goto L_08A806D0;
    case 160u: goto L_08A806D8;
    case 161u: goto L_08A806EC;
    case 162u: goto L_08A80708;
    case 163u: goto L_08A80710;
    case 164u: goto L_08A80720;
    case 165u: goto L_08A80734;
    case 166u: goto L_08A8075C;
    case 167u: goto L_08A80768;
    case 168u: goto L_08A80774;
    case 169u: goto L_08A8077C;
    case 170u: goto L_08A80784;
    case 171u: goto L_08A80790;
    case 172u: goto L_08A8079C;
    case 173u: goto L_08A807AC;
    case 174u: goto L_08A807BC;
    case 175u: goto L_08A807C8;
    case 176u: goto L_08A807E8;
    case 177u: goto L_08A807F0;
    case 178u: goto L_08A807F8;
    case 179u: goto L_08A80804;
    case 180u: goto L_08A80810;
    case 181u: goto L_08A80830;
    case 182u: goto L_08A80838;
    case 183u: goto L_08A80844;
    case 184u: goto L_08A80860;
    case 185u: goto L_08A80868;
    case 186u: goto L_08A80874;
    case 187u: goto L_08A80890;
    case 188u: goto L_08A80898;
    case 189u: goto L_08A808A0;
    case 190u: goto L_08A808A8;
    case 191u: goto L_08A808B4;
    case 192u: goto L_08A808BC;
    case 193u: goto L_08A808DC;
    case 194u: goto L_08A808EC;
    case 195u: goto L_08A808F4;
    case 196u: goto L_08A80900;
    case 197u: goto L_08A80908;
    case 198u: goto L_08A80918;
    case 199u: goto L_08A80920;
    case 200u: goto L_08A8092C;
    case 201u: goto L_08A80934;
    case 202u: goto L_08A8093C;
    case 203u: goto L_08A80948;
    case 204u: goto L_08A80950;
    case 205u: goto L_08A8095C;
    case 206u: goto L_08A8097C;
    case 207u: goto L_08A80984;
    case 208u: goto L_08A809A0;
    case 209u: goto L_08A809A8;
    case 210u: goto L_08A809B8;
    case 211u: goto L_08A809BC;
    case 212u: goto L_08A809C4;
    case 213u: goto L_08A809CC;
    case 214u: goto L_08A809D8;
    case 215u: goto L_08A809E0;
    case 216u: goto L_08A809E8;
    case 217u: goto L_08A809FC;
    case 218u: goto L_08A80A08;
    case 219u: goto L_08A80A14;
    case 220u: goto L_08A80A20;
    case 221u: goto L_08A80A2C;
    case 222u: goto L_08A80A38;
    case 223u: goto L_08A80A54;
    case 224u: goto L_08A80A5C;
    case 225u: goto L_08A80A78;
    case 226u: goto L_08A80A80;
    case 227u: goto L_08A80A88;
    case 228u: goto L_08A80AA4;
    case 229u: goto L_08A80AAC;
    case 230u: goto L_08A80AC8;
    case 231u: goto L_08A80AD0;
    case 232u: goto L_08A80ADC;
    case 233u: goto L_08A80AE8;
    case 234u: goto L_08A80AF0;
    case 235u: goto L_08A80B00;
    case 236u: goto L_08A80B08;
    case 237u: goto L_08A80B10;
    case 238u: goto L_08A80B1C;
    case 239u: goto L_08A80B24;
    case 240u: goto L_08A80B30;
    case 241u: goto L_08A80B38;
    case 242u: goto L_08A80B40;
    case 243u: goto L_08A80B48;
    case 244u: goto L_08A80B5C;
    case 245u: goto L_08A80B60;
    case 246u: goto L_08A80B6C;
    case 247u: goto L_08A80B78;
    case 248u: goto L_08A80B84;
    case 249u: goto L_08A80B90;
    case 250u: goto L_08A80B98;
    case 251u: goto L_08A80BA4;
    case 252u: goto L_08A80BAC;
    case 253u: goto L_08A80BB8;
    case 254u: goto L_08A80BC0;
    case 255u: goto L_08A80BD0;
    case 256u: goto L_08A80BDC;
    case 257u: goto L_08A80BE4;
    case 258u: goto L_08A80BF4;
    case 259u: goto L_08A80BFC;
    case 260u: goto L_08A80C04;
    case 261u: goto L_08A80C14;
    case 262u: goto L_08A80C20;
    case 263u: goto L_08A80C2C;
    case 264u: goto L_08A80C34;
    case 265u: goto L_08A80C3C;
    case 266u: goto L_08A80C4C;
    case 267u: goto L_08A80C5C;
    case 268u: goto L_08A80C6C;
    case 269u: goto L_08A80C80;
    case 270u: goto L_08A80C88;
    case 271u: goto L_08A80C90;
    case 272u: goto L_08A80C98;
    case 273u: goto L_08A80CA0;
    case 274u: goto L_08A80CA8;
    case 275u: goto L_08A80CB0;
    case 276u: goto L_08A80CB8;
    case 277u: goto L_08A80CC0;
    case 278u: goto L_08A80CD0;
    case 279u: goto L_08A80CD4;
    case 280u: goto L_08A80CE0;
    case 281u: goto L_08A80CEC;
    case 282u: goto L_08A80CF4;
    case 283u: goto L_08A80D00;
    case 284u: goto L_08A80D08;
    case 285u: goto L_08A80D10;
    case 286u: goto L_08A80D20;
    case 287u: goto L_08A80D24;
    case 288u: goto L_08A80D2C;
    case 289u: goto L_08A80D38;
    case 290u: goto L_08A80D48;
    case 291u: goto L_08A80D50;
    case 292u: goto L_08A80D5C;
    case 293u: goto L_08A80D64;
    case 294u: goto L_08A80D74;
    case 295u: goto L_08A80D78;
    case 296u: goto L_08A80D80;
    case 297u: goto L_08A80D98;
    case 298u: goto L_08A80DA0;
    case 299u: goto L_08A80DA8;
    case 300u: goto L_08A80DC4;
    case 301u: goto L_08A80DD8;
    case 302u: goto L_08A80DE4;
    case 303u: goto L_08A80DF4;
    case 304u: goto L_08A80DFC;
    case 305u: goto L_08A80E04;
    case 306u: goto L_08A80E10;
    case 307u: goto L_08A80E20;
    case 308u: goto L_08A80E28;
    case 309u: goto L_08A80E34;
    case 310u: goto L_08A80E44;
    case 311u: goto L_08A80E54;
    case 312u: goto L_08A80E68;
    case 313u: goto L_08A80E70;
    case 314u: goto L_08A80E78;
    case 315u: goto L_08A80E84;
    case 316u: goto L_08A80E8C;
    case 317u: goto L_08A80E9C;
    case 318u: goto L_08A80EA0;
    case 319u: goto L_08A80EA8;
    case 320u: goto L_08A80EB4;
    case 321u: goto L_08A80EC0;
    case 322u: goto L_08A80ECC;
    case 323u: goto L_08A80ED4;
    case 324u: goto L_08A80EF0;
    case 325u: goto L_08A80F00;
    case 326u: goto L_08A80F08;
    case 327u: goto L_08A80F10;
    case 328u: goto L_08A80F20;
    case 329u: goto L_08A80F24;
    case 330u: goto L_08A80F2C;
    case 331u: goto L_08A80F38;
    case 332u: goto L_08A80F3C;
    case 333u: goto L_08A80F50;
    case 334u: goto L_08A80F58;
    case 335u: goto L_08A80F64;
    case 336u: goto L_08A80F6C;
    case 337u: goto L_08A80F74;
    case 338u: goto L_08A80F7C;
    case 339u: goto L_08A80F88;
    case 340u: goto L_08A80F94;
    case 341u: goto L_08A80F9C;
    case 342u: goto L_08A80FA4;
    case 343u: goto L_08A80FAC;
    case 344u: goto L_08A80FB8;
    case 345u: goto L_08A80FBC;
    case 346u: goto L_08A80FCC;
    case 347u: goto L_08A80FD4;
    case 348u: goto L_08A80FDC;
    case 349u: goto L_08A80FE4;
    case 350u: goto L_08A80FEC;
    case 351u: goto L_08A81004;
    case 352u: goto L_08A8100C;
    case 353u: goto L_08A81014;
    case 354u: goto L_08A8101C;
    case 355u: goto L_08A81028;
    case 356u: goto L_08A81034;
    case 357u: goto L_08A8103C;
    case 358u: goto L_08A81044;
    case 359u: goto L_08A8104C;
    case 360u: goto L_08A8105C;
    case 361u: goto L_08A81064;
    case 362u: goto L_08A8106C;
    case 363u: goto L_08A8107C;
    case 364u: goto L_08A81088;
    case 365u: goto L_08A81098;
    case 366u: goto L_08A810AC;
    case 367u: goto L_08A810B4;
    case 368u: goto L_08A810BC;
    case 369u: goto L_08A810C4;
    case 370u: goto L_08A810CC;
    case 371u: goto L_08A810D8;
    case 372u: goto L_08A810E8;
    case 373u: goto L_08A810F0;
    case 374u: goto L_08A810FC;
    case 375u: goto L_08A81108;
    case 376u: goto L_08A8111C;
    case 377u: goto L_08A81124;
    case 378u: goto L_08A8112C;
    case 379u: goto L_08A81138;
    case 380u: goto L_08A81140;
    case 381u: goto L_08A81150;
    case 382u: goto L_08A81160;
    case 383u: goto L_08A81168;
    case 384u: goto L_08A81170;
    case 385u: goto L_08A81178;
    case 386u: goto L_08A81180;
    case 387u: goto L_08A81188;
    case 388u: goto L_08A81194;
    case 389u: goto L_08A81198;
    case 390u: goto L_08A8119C;
    case 391u: goto L_08A811B8;
    case 392u: goto L_08A811C0;
    case 393u: goto L_08A811E0;
    case 394u: goto L_08A811E8;
    case 395u: goto L_08A811FC;
    case 396u: goto L_08A81204;
    case 397u: goto L_08A81214;
    case 398u: goto L_08A81230;
    case 399u: goto L_08A81240;
    case 400u: goto L_08A81258;
    case 401u: goto L_08A81268;
    case 402u: goto L_08A81280;
    case 403u: goto L_08A81288;
    case 404u: goto L_08A81290;
    case 405u: goto L_08A81298;
    case 406u: goto L_08A812B4;
    case 407u: goto L_08A812C0;
    case 408u: goto L_08A812C8;
    case 409u: goto L_08A812F4;
    case 410u: goto L_08A812FC;
    case 411u: goto L_08A81304;
    case 412u: goto L_08A81334;
    case 413u: goto L_08A81338;
    case 414u: goto L_08A81358;
    case 415u: goto L_08A81370;
    case 416u: goto L_08A8137C;
    case 417u: goto L_08A81384;
    case 418u: goto L_08A81390;
    case 419u: goto L_08A81398;
    case 420u: goto L_08A813A0;
    case 421u: goto L_08A813AC;
    case 422u: goto L_08A813B0;
    case 423u: goto L_08A813C0;
    case 424u: goto L_08A81404;
    case 425u: goto L_08A8140C;
    case 426u: goto L_08A81414;
    case 427u: goto L_08A81424;
    case 428u: goto L_08A81430;
    case 429u: goto L_08A81438;
    case 430u: goto L_08A81448;
    case 431u: goto L_08A81450;
    case 432u: goto L_08A81454;
    case 433u: goto L_08A81458;
    case 434u: goto L_08A81468;
    case 435u: goto L_08A81484;
    case 436u: goto L_08A8148C;
    case 437u: goto L_08A81498;
    case 438u: goto L_08A814A0;
    case 439u: goto L_08A814A8;
    case 440u: goto L_08A814B0;
    case 441u: goto L_08A814D0;
    case 442u: goto L_08A814D8;
    case 443u: goto L_08A814EC;
    case 444u: goto L_08A814F4;
    case 445u: goto L_08A81508;
    case 446u: goto L_08A81518;
    case 447u: goto L_08A81524;
    case 448u: goto L_08A81538;
    case 449u: goto L_08A81540;
    case 450u: goto L_08A81544;
    case 451u: goto L_08A81548;
    case 452u: goto L_08A81554;
    case 453u: goto L_08A81558;
    case 454u: goto L_08A81564;
    case 455u: goto L_08A81568;
    case 456u: goto L_08A81578;
    case 457u: goto L_08A81580;
    case 458u: goto L_08A81584;
    case 459u: goto L_08A81588;
    case 460u: goto L_08A81594;
    case 461u: goto L_08A8159C;
    case 462u: goto L_08A815A8;
    case 463u: goto L_08A815B0;
    case 464u: goto L_08A815B4;
    case 465u: goto L_08A815B8;
    case 466u: goto L_08A815C4;
    case 467u: goto L_08A815D8;
    case 468u: goto L_08A815F0;
    case 469u: goto L_08A815FC;
    case 470u: goto L_08A81614;
    case 471u: goto L_08A81620;
    case 472u: goto L_08A81638;
    case 473u: goto L_08A81644;
    case 474u: goto L_08A8164C;
    case 475u: goto L_08A81658;
    case 476u: goto L_08A81660;
    case 477u: goto L_08A8166C;
    case 478u: goto L_08A81674;
    case 479u: goto L_08A81680;
    case 480u: goto L_08A81694;
    case 481u: goto L_08A816A0;
    case 482u: goto L_08A816A8;
    case 483u: goto L_08A816B0;
    case 484u: goto L_08A816B8;
    case 485u: goto L_08A816D0;
    case 486u: goto L_08A816D8;
    case 487u: goto L_08A816EC;
    case 488u: goto L_08A816FC;
    case 489u: goto L_08A81704;
    case 490u: goto L_08A81708;
    case 491u: goto L_08A8170C;
    case 492u: goto L_08A8172C;
    case 493u: goto L_08A81734;
    case 494u: goto L_08A81744;
    case 495u: goto L_08A8174C;
    case 496u: goto L_08A8175C;
    case 497u: goto L_08A81764;
    case 498u: goto L_08A81778;
    case 499u: goto L_08A81784;
    case 500u: goto L_08A8178C;
    case 501u: goto L_08A817A0;
    case 502u: goto L_08A817A8;
    case 503u: goto L_08A817BC;
    case 504u: goto L_08A817D4;
    case 505u: goto L_08A817DC;
    case 506u: goto L_08A817E0;
    case 507u: goto L_08A817E4;
    case 508u: goto L_08A817F4;
    case 509u: goto L_08A817FC;
    case 510u: goto L_08A81804;
    case 511u: goto L_08A81810;
    case 512u: goto L_08A81818;
    case 513u: goto L_08A81830;
    case 514u: goto L_08A81838;
    case 515u: goto L_08A81858;
    case 516u: goto L_08A81860;
    case 517u: goto L_08A81888;
    case 518u: goto L_08A81890;
    case 519u: goto L_08A818A4;
    case 520u: goto L_08A818AC;
    case 521u: goto L_08A818B4;
    case 522u: goto L_08A818D4;
    case 523u: goto L_08A818DC;
    case 524u: goto L_08A818F4;
    case 525u: goto L_08A818FC;
    case 526u: goto L_08A81918;
    case 527u: goto L_08A81978;
    case 528u: goto L_08A81980;
    case 529u: goto L_08A81998;
    case 530u: goto L_08A819F8;
    case 531u: goto L_08A819FC;
    case 532u: goto L_08A81A10;
    case 533u: goto L_08A81A20;
    case 534u: goto L_08A81A28;
    case 535u: goto L_08A81A3C;
    case 536u: goto L_08A81A48;
    case 537u: goto L_08A81A50;
    case 538u: goto L_08A81A58;
    case 539u: goto L_08A81A6C;
    case 540u: goto L_08A81A74;
    case 541u: goto L_08A81A7C;
    case 542u: goto L_08A81A90;
    case 543u: goto L_08A81A94;
    case 544u: goto L_08A81A9C;
    case 545u: goto L_08A81AA4;
    case 546u: goto L_08A81AB0;
    case 547u: goto L_08A81AB8;
    case 548u: goto L_08A81AC0;
    case 549u: goto L_08A81AC8;
    case 550u: goto L_08A81AD0;
    case 551u: goto L_08A81AD4;
    case 552u: goto L_08A81AD8;
    case 553u: goto L_08A81B0C;
    case 554u: goto L_08A81B14;
    case 555u: goto L_08A81B2C;
    case 556u: goto L_08A81B34;
    case 557u: goto L_08A81B3C;
    case 558u: goto L_08A81B44;
    case 559u: goto L_08A81B4C;
    case 560u: goto L_08A81B50;
    case 561u: goto L_08A81B54;
    case 562u: goto L_08A81B88;
    case 563u: goto L_08A81B90;
    case 564u: goto L_08A81BA8;
    case 565u: goto L_08A81BAC;
    case 566u: goto L_08A81BB4;
    case 567u: goto L_08A81BBC;
    case 568u: goto L_08A81BC8;
    case 569u: goto L_08A81BD0;
    case 570u: goto L_08A81BD8;
    case 571u: goto L_08A81BE0;
    case 572u: goto L_08A81BE8;
    case 573u: goto L_08A81BEC;
    case 574u: goto L_08A81BF0;
    case 575u: goto L_08A81C24;
    case 576u: goto L_08A81C2C;
    case 577u: goto L_08A81C44;
    case 578u: goto L_08A81C4C;
    case 579u: goto L_08A81C54;
    case 580u: goto L_08A81C5C;
    case 581u: goto L_08A81C64;
    case 582u: goto L_08A81C68;
    case 583u: goto L_08A81C6C;
    case 584u: goto L_08A81CA0;
    case 585u: goto L_08A81CA8;
    case 586u: goto L_08A81CC0;
    case 587u: goto L_08A81CC4;
    case 588u: goto L_08A81CCC;
    case 589u: goto L_08A81CD4;
    case 590u: goto L_08A81CE0;
    case 591u: goto L_08A81CE8;
    case 592u: goto L_08A81CF0;
    case 593u: goto L_08A81D08;
    case 594u: goto L_08A81D10;
    case 595u: goto L_08A81D18;
    case 596u: goto L_08A81D30;
    case 597u: goto L_08A81D34;
    case 598u: goto L_08A81D3C;
    case 599u: goto L_08A81D44;
    case 600u: goto L_08A81D50;
    case 601u: goto L_08A81D58;
    case 602u: goto L_08A81D60;
    case 603u: goto L_08A81D78;
    case 604u: goto L_08A81D80;
    case 605u: goto L_08A81D88;
    case 606u: goto L_08A81DA0;
    case 607u: goto L_08A81DA4;
    case 608u: goto L_08A81DAC;
    case 609u: goto L_08A81DB4;
    case 610u: goto L_08A81DC8;
    case 611u: goto L_08A81DD8;
    case 612u: goto L_08A81DE8;
    case 613u: goto L_08A81DF4;
    case 614u: goto L_08A81E00;
    case 615u: goto L_08A81E0C;
    case 616u: goto L_08A81E14;
    case 617u: goto L_08A81E34;
    case 618u: goto L_08A81E3C;
    case 619u: goto L_08A81E5C;
    case 620u: goto L_08A81E6C;
    case 621u: goto L_08A81E74;
    case 622u: goto L_08A81E78;
    case 623u: goto L_08A81E80;
    case 624u: goto L_08A81E88;
    case 625u: goto L_08A81E90;
    case 626u: goto L_08A81E98;
    case 627u: goto L_08A81EA0;
    case 628u: goto L_08A81EA8;
    case 629u: goto L_08A81EC8;
    case 630u: goto L_08A81ED0;
    case 631u: goto L_08A81ED8;
    case 632u: goto L_08A81EE0;
    case 633u: goto L_08A81F00;
    case 634u: goto L_08A81F04;
    case 635u: goto L_08A81F34;
    case 636u: goto L_08A81F44;
    case 637u: goto L_08A81F50;
    case 638u: goto L_08A81F58;
    case 639u: goto L_08A81F5C;
    case 640u: goto L_08A81F60;
    case 641u: goto L_08A81F80;
    case 642u: goto L_08A81F88;
    case 643u: goto L_08A81F90;
    case 644u: goto L_08A81F98;
    case 645u: goto L_08A81F9C;
    case 646u: goto L_08A81FA0;
    case 647u: goto L_08A81FC0;
    case 648u: goto L_08A81FC4;
    case 649u: goto L_08A81FD4;
    case 650u: goto L_08A81FE8;
    case 651u: goto L_08A81FF4;
    case 652u: goto L_08A82000;
    case 653u: goto L_08A82008;
    case 654u: goto L_08A82014;
    case 655u: goto L_08A8201C;
    case 656u: goto L_08A82034;
    case 657u: goto L_08A82040;
    case 658u: goto L_08A82048;
    case 659u: goto L_08A82054;
    case 660u: goto L_08A82060;
    case 661u: goto L_08A82064;
    case 662u: goto L_08A8206C;
    case 663u: goto L_08A82074;
    case 664u: goto L_08A82080;
    case 665u: goto L_08A82088;
    case 666u: goto L_08A820A0;
    case 667u: goto L_08A820AC;
    case 668u: goto L_08A820B4;
    case 669u: goto L_08A820B8;
    case 670u: goto L_08A820BC;
    case 671u: goto L_08A820C8;
    case 672u: goto L_08A820D0;
    case 673u: goto L_08A820D4;
    case 674u: goto L_08A820DC;
    case 675u: goto L_08A820E4;
    case 676u: goto L_08A820F0;
    case 677u: goto L_08A820F8;
    case 678u: goto L_08A82108;
    case 679u: goto L_08A82114;
    case 680u: goto L_08A82120;
    case 681u: goto L_08A82128;
    case 682u: goto L_08A8212C;
    case 683u: goto L_08A82134;
    case 684u: goto L_08A8214C;
    case 685u: goto L_08A82154;
    case 686u: goto L_08A82168;
    case 687u: goto L_08A82170;
    case 688u: goto L_08A8217C;
    case 689u: goto L_08A82190;
    case 690u: goto L_08A82198;
    case 691u: goto L_08A821A4;
    case 692u: goto L_08A821AC;
    case 693u: goto L_08A821BC;
    case 694u: goto L_08A821C8;
    case 695u: goto L_08A821D4;
    case 696u: goto L_08A821DC;
    case 697u: goto L_08A821E0;
    case 698u: goto L_08A821E4;
    case 699u: goto L_08A821EC;
    case 700u: goto L_08A82204;
    case 701u: goto L_08A82210;
    case 702u: goto L_08A82224;
    case 703u: goto L_08A8222C;
    case 704u: goto L_08A82238;
    case 705u: goto L_08A8224C;
    case 706u: goto L_08A82254;
    case 707u: goto L_08A82260;
    case 708u: goto L_08A82268;
    case 709u: goto L_08A82278;
    case 710u: goto L_08A82290;
    case 711u: goto L_08A822A8;
    case 712u: goto L_08A822B4;
    case 713u: goto L_08A822C4;
    case 714u: goto L_08A822CC;
    case 715u: goto L_08A822D4;
    case 716u: goto L_08A822E0;
    case 717u: goto L_08A822E8;
    case 718u: goto L_08A822F8;
    case 719u: goto L_08A82310;
    case 720u: goto L_08A8232C;
    case 721u: goto L_08A82338;
    case 722u: goto L_08A82348;
    case 723u: goto L_08A82350;
    case 724u: goto L_08A82358;
    case 725u: goto L_08A82364;
    case 726u: goto L_08A8236C;
    case 727u: goto L_08A82378;
    case 728u: goto L_08A82384;
    case 729u: goto L_08A8238C;
    case 730u: goto L_08A82390;
    case 731u: goto L_08A82394;
    case 732u: goto L_08A823A0;
    case 733u: goto L_08A823AC;
    case 734u: goto L_08A823B4;
    case 735u: goto L_08A823C0;
    case 736u: goto L_08A823DC;
    case 737u: goto L_08A823E4;
    case 738u: goto L_08A823EC;
    case 739u: goto L_08A823F8;
    case 740u: goto L_08A82400;
    case 741u: goto L_08A82408;
    case 742u: goto L_08A8241C;
    case 743u: goto L_08A82424;
    case 744u: goto L_08A8242C;
    case 745u: goto L_08A82434;
    case 746u: goto L_08A8243C;
    case 747u: goto L_08A82448;
    case 748u: goto L_08A82450;
    case 749u: goto L_08A82464;
    case 750u: goto L_08A8246C;
    case 751u: goto L_08A82478;
    case 752u: goto L_08A82488;
    case 753u: goto L_08A82490;
    case 754u: goto L_08A82494;
    case 755u: goto L_08A82498;
    case 756u: goto L_08A824A4;
    case 757u: goto L_08A824B4;
    case 758u: goto L_08A824BC;
    case 759u: goto L_08A824D0;
    case 760u: goto L_08A824D8;
    case 761u: goto L_08A824E0;
    case 762u: goto L_08A824F4;
    case 763u: goto L_08A824FC;
    case 764u: goto L_08A82508;
    case 765u: goto L_08A82514;
    case 766u: goto L_08A82520;
    case 767u: goto L_08A8252C;
    case 768u: goto L_08A82534;
    case 769u: goto L_08A82538;
    case 770u: goto L_08A8253C;
    case 771u: goto L_08A82548;
    case 772u: goto L_08A8255C;
    case 773u: goto L_08A82564;
    case 774u: goto L_08A82578;
    case 775u: goto L_08A82580;
    case 776u: goto L_08A82588;
    case 777u: goto L_08A8259C;
    case 778u: goto L_08A825AC;
    case 779u: goto L_08A825B4;
    case 780u: goto L_08A825B8;
    case 781u: goto L_08A825BC;
    case 782u: goto L_08A825D4;
    case 783u: goto L_08A825DC;
    case 784u: goto L_08A825F0;
    case 785u: goto L_08A825F8;
    case 786u: goto L_08A82604;
    case 787u: goto L_08A82610;
    case 788u: goto L_08A82618;
    case 789u: goto L_08A8261C;
    case 790u: goto L_08A82624;
    case 791u: goto L_08A8262C;
    case 792u: goto L_08A82640;
    case 793u: goto L_08A82648;
    case 794u: goto L_08A82650;
    case 795u: goto L_08A8265C;
    case 796u: goto L_08A82664;
    case 797u: goto L_08A82670;
    case 798u: goto L_08A82678;
    case 799u: goto L_08A82680;
    case 800u: goto L_08A82688;
    case 801u: goto L_08A82694;
    case 802u: goto L_08A826AC;
    case 803u: goto L_08A826B4;
    case 804u: goto L_08A826B8;
    case 805u: goto L_08A826BC;
    case 806u: goto L_08A826CC;
    case 807u: goto L_08A826D8;
    case 808u: goto L_08A826EC;
    case 809u: goto L_08A826F4;
    case 810u: goto L_08A826F8;
    case 811u: goto L_08A826FC;
    case 812u: goto L_08A82708;
    case 813u: goto L_08A82714;
    case 814u: goto L_08A8271C;
    case 815u: goto L_08A82724;
    case 816u: goto L_08A82728;
    case 817u: goto L_08A8272C;
    case 818u: goto L_08A82734;
    case 819u: goto L_08A8273C;
    case 820u: goto L_08A82748;
    case 821u: goto L_08A82754;
    case 822u: goto L_08A8275C;
    case 823u: goto L_08A82764;
    case 824u: goto L_08A82770;
    case 825u: goto L_08A8277C;
    case 826u: goto L_08A82784;
    case 827u: goto L_08A82788;
    case 828u: goto L_08A82790;
    case 829u: goto L_08A827A8;
    case 830u: goto L_08A827B8;
    case 831u: goto L_08A827C0;
    case 832u: goto L_08A827F0;
    case 833u: goto L_08A827F8;
    case 834u: goto L_08A82808;
    case 835u: goto L_08A82814;
    case 836u: goto L_08A8281C;
    case 837u: goto L_08A8282C;
    case 838u: goto L_08A8284C;
    case 839u: goto L_08A82854;
    case 840u: goto L_08A82864;
    case 841u: goto L_08A82884;
    case 842u: goto L_08A8288C;
    case 843u: goto L_08A8289C;
    case 844u: goto L_08A828A4;
    case 845u: goto L_08A828B0;
    case 846u: goto L_08A828B8;
    case 847u: goto L_08A828CC;
    case 848u: goto L_08A828E8;
    case 849u: goto L_08A828F4;
    case 850u: goto L_08A828FC;
    case 851u: goto L_08A82904;
    case 852u: goto L_08A82910;
    case 853u: goto L_08A8291C;
    case 854u: goto L_08A82924;
    case 855u: goto L_08A82938;
    case 856u: goto L_08A8294C;
    case 857u: goto L_08A82958;
    case 858u: goto L_08A82960;
    case 859u: goto L_08A82964;
    case 860u: goto L_08A82968;
    case 861u: goto L_08A82978;
    case 862u: goto L_08A82984;
    case 863u: goto L_08A8298C;
    case 864u: goto L_08A82998;
    case 865u: goto L_08A829A4;
    case 866u: goto L_08A829AC;
    case 867u: goto L_08A829B0;
    case 868u: goto L_08A829B8;
    case 869u: goto L_08A829D0;
    case 870u: goto L_08A829E0;
    case 871u: goto L_08A829E8;
    case 872u: goto L_08A82A18;
    case 873u: goto L_08A82A20;
    case 874u: goto L_08A82A30;
    case 875u: goto L_08A82A3C;
    case 876u: goto L_08A82A44;
    case 877u: goto L_08A82A54;
    case 878u: goto L_08A82A74;
    case 879u: goto L_08A82A7C;
    case 880u: goto L_08A82A8C;
    case 881u: goto L_08A82AAC;
    case 882u: goto L_08A82AB4;
    case 883u: goto L_08A82AC4;
    case 884u: goto L_08A82ACC;
    case 885u: goto L_08A82AD8;
    case 886u: goto L_08A82AE0;
    case 887u: goto L_08A82AF4;
    case 888u: goto L_08A82B10;
    case 889u: goto L_08A82B1C;
    case 890u: goto L_08A82B24;
    case 891u: goto L_08A82B2C;
    case 892u: goto L_08A82B38;
    case 893u: goto L_08A82B44;
    case 894u: goto L_08A82B4C;
    case 895u: goto L_08A82B60;
    case 896u: goto L_08A82B74;
    case 897u: goto L_08A82B80;
    case 898u: goto L_08A82B88;
    case 899u: goto L_08A82B8C;
    case 900u: goto L_08A82B90;
    case 901u: goto L_08A82BA0;
    case 902u: goto L_08A82BAC;
    case 903u: goto L_08A82BB4;
    case 904u: goto L_08A82BBC;
    case 905u: goto L_08A82BCC;
    case 906u: goto L_08A82BD4;
    case 907u: goto L_08A82BDC;
    case 908u: goto L_08A82C0C;
    case 909u: goto L_08A82C14;
    case 910u: goto L_08A82C24;
    case 911u: goto L_08A82C30;
    case 912u: goto L_08A82C38;
    case 913u: goto L_08A82C48;
    case 914u: goto L_08A82C68;
    case 915u: goto L_08A82C70;
    case 916u: goto L_08A82C80;
    case 917u: goto L_08A82CA0;
    case 918u: goto L_08A82CA8;
    case 919u: goto L_08A82CB8;
    case 920u: goto L_08A82CC0;
    case 921u: goto L_08A82CCC;
    case 922u: goto L_08A82CD4;
    case 923u: goto L_08A82CE8;
    case 924u: goto L_08A82D04;
    case 925u: goto L_08A82D10;
    case 926u: goto L_08A82D18;
    case 927u: goto L_08A82D20;
    case 928u: goto L_08A82D34;
    case 929u: goto L_08A82D48;
    case 930u: goto L_08A82D54;
    case 931u: goto L_08A82D5C;
    case 932u: goto L_08A82D64;
    case 933u: goto L_08A82D78;
    case 934u: goto L_08A82D8C;
    case 935u: goto L_08A82D98;
    case 936u: goto L_08A82DA0;
    case 937u: goto L_08A82DA8;
    case 938u: goto L_08A82DB4;
    case 939u: goto L_08A82DBC;
    case 940u: goto L_08A82DC4;
    case 941u: goto L_08A82DD8;
    case 942u: goto L_08A82DE0;
    case 943u: goto L_08A82DEC;
    case 944u: goto L_08A82DFC;
    case 945u: goto L_08A82E04;
    case 946u: goto L_08A82E08;
    case 947u: goto L_08A82E0C;
    case 948u: goto L_08A82E18;
    case 949u: goto L_08A82E24;
    case 950u: goto L_08A82E2C;
    case 951u: goto L_08A82E38;
    case 952u: goto L_08A82E40;
    case 953u: goto L_08A82E48;
    case 954u: goto L_08A82E5C;
    case 955u: goto L_08A82E6C;
    case 956u: goto L_08A82E74;
    case 957u: goto L_08A82E78;
    case 958u: goto L_08A82E7C;
    case 959u: goto L_08A82E88;
    case 960u: goto L_08A82E90;
    case 961u: goto L_08A82E94;
    case 962u: goto L_08A82E9C;
    case 963u: goto L_08A82EA4;
    case 964u: goto L_08A82EAC;
    case 965u: goto L_08A82EB8;
    case 966u: goto L_08A82EC0;
    case 967u: goto L_08A82ECC;
    case 968u: goto L_08A82ED4;
    case 969u: goto L_08A82EE0;
    case 970u: goto L_08A82EEC;
    case 971u: goto L_08A82EFC;
    case 972u: goto L_08A82F04;
    case 973u: goto L_08A82F08;
    case 974u: goto L_08A82F0C;
    case 975u: goto L_08A82F18;
    case 976u: goto L_08A82F24;
    case 977u: goto L_08A82F2C;
    case 978u: goto L_08A82F34;
    case 979u: goto L_08A82F44;
    case 980u: goto L_08A82F58;
    case 981u: goto L_08A82F60;
    case 982u: goto L_08A82F64;
    case 983u: goto L_08A82F6C;
    case 984u: goto L_08A82F74;
    case 985u: goto L_08A82F78;
    case 986u: goto L_08A82F7C;
    case 987u: goto L_08A82F90;
    case 988u: goto L_08A82F98;
    case 989u: goto L_08A82FA4;
    case 990u: goto L_08A82FB0;
    case 991u: goto L_08A82FB8;
    case 992u: goto L_08A82FC4;
    case 993u: goto L_08A82FD4;
    case 994u: goto L_08A82FD8;
    case 995u: goto L_08A82FE0;
    case 996u: goto L_08A82FF0;
    case 997u: goto L_08A82FF8;
    case 998u: goto L_08A82FFC;
    case 999u: goto L_08A83000;
    case 1000u: goto L_08A83014;
    case 1001u: goto L_08A8301C;
    case 1002u: goto L_08A8303C;
    case 1003u: goto L_08A83044;
    case 1004u: goto L_08A83054;
    case 1005u: goto L_08A83068;
    case 1006u: goto L_08A83070;
    case 1007u: goto L_08A83080;
    case 1008u: goto L_08A83094;
    case 1009u: goto L_08A83098;
    case 1010u: goto L_08A830A8;
    case 1011u: goto L_08A830B0;
    case 1012u: goto L_08A830B8;
    case 1013u: goto L_08A830C4;
    case 1014u: goto L_08A830CC;
    case 1015u: goto L_08A830D8;
    case 1016u: goto L_08A830E4;
    case 1017u: goto L_08A830F0;
    case 1018u: goto L_08A830F8;
    case 1019u: goto L_08A83100;
    case 1020u: goto L_08A83114;
    case 1021u: goto L_08A8311C;
    case 1022u: goto L_08A83124;
    case 1023u: goto L_08A8312C;
    case 1024u: goto L_08A83140;
    case 1025u: goto L_08A83148;
    case 1026u: goto L_08A8314C;
    case 1027u: goto L_08A83154;
    case 1028u: goto L_08A83164;
    case 1029u: goto L_08A83170;
    case 1030u: goto L_08A83178;
    case 1031u: goto L_08A83180;
    case 1032u: goto L_08A83194;
    case 1033u: goto L_08A8319C;
    case 1034u: goto L_08A831A0;
    case 1035u: goto L_08A831A8;
    case 1036u: goto L_08A831B4;
    case 1037u: goto L_08A831C0;
    case 1038u: goto L_08A831C8;
    case 1039u: goto L_08A831DC;
    case 1040u: goto L_08A831E4;
    case 1041u: goto L_08A831E8;
    case 1042u: goto L_08A831F0;
    case 1043u: goto L_08A831F8;
    case 1044u: goto L_08A831FC;
    case 1045u: goto L_08A83200;
    case 1046u: goto L_08A8320C;
    case 1047u: goto L_08A83218;
    case 1048u: goto L_08A83220;
    case 1049u: goto L_08A83230;
    case 1050u: goto L_08A83238;
    case 1051u: goto L_08A83240;
    case 1052u: goto L_08A8324C;
    case 1053u: goto L_08A83254;
    case 1054u: goto L_08A83268;
    case 1055u: goto L_08A83274;
    case 1056u: goto L_08A83280;
    case 1057u: goto L_08A83284;
    case 1058u: goto L_08A8328C;
    case 1059u: goto L_08A83294;
    case 1060u: goto L_08A8329C;
    case 1061u: goto L_08A832A4;
    case 1062u: goto L_08A832AC;
    case 1063u: goto L_08A832B8;
    case 1064u: goto L_08A832C4;
    case 1065u: goto L_08A832D0;
    case 1066u: goto L_08A832D4;
    case 1067u: goto L_08A832E0;
    case 1068u: goto L_08A832E8;
    case 1069u: goto L_08A832EC;
    case 1070u: goto L_08A832F0;
    case 1071u: goto L_08A83300;
    case 1072u: goto L_08A83308;
    case 1073u: goto L_08A83314;
    case 1074u: goto L_08A83324;
    case 1075u: goto L_08A83338;
    case 1076u: goto L_08A83344;
    case 1077u: goto L_08A83358;
    case 1078u: goto L_08A83360;
    case 1079u: goto L_08A83364;
    case 1080u: goto L_08A83368;
    case 1081u: goto L_08A83378;
    case 1082u: goto L_08A83380;
    case 1083u: goto L_08A8338C;
    case 1084u: goto L_08A8339C;
    case 1085u: goto L_08A833B0;
    case 1086u: goto L_08A833BC;
    case 1087u: goto L_08A833D0;
    case 1088u: goto L_08A833D8;
    case 1089u: goto L_08A833DC;
    case 1090u: goto L_08A833E0;
    case 1091u: goto L_08A833F0;
    case 1092u: goto L_08A833F8;
    case 1093u: goto L_08A83404;
    case 1094u: goto L_08A83414;
    case 1095u: goto L_08A83428;
    case 1096u: goto L_08A83434;
    case 1097u: goto L_08A83448;
    case 1098u: goto L_08A83450;
    case 1099u: goto L_08A83454;
    case 1100u: goto L_08A83458;
    case 1101u: goto L_08A83468;
    case 1102u: goto L_08A83470;
    case 1103u: goto L_08A8347C;
    case 1104u: goto L_08A8348C;
    case 1105u: goto L_08A834A0;
    case 1106u: goto L_08A834AC;
    case 1107u: goto L_08A834B8;
    case 1108u: goto L_08A834C0;
    case 1109u: goto L_08A834D4;
    case 1110u: goto L_08A834DC;
    case 1111u: goto L_08A834E4;
    case 1112u: goto L_08A834F8;
    case 1113u: goto L_08A83500;
    case 1114u: goto L_08A83508;
    case 1115u: goto L_08A8351C;
    case 1116u: goto L_08A83528;
    case 1117u: goto L_08A83534;
    case 1118u: goto L_08A83538;
    case 1119u: goto L_08A83540;
    case 1120u: goto L_08A83548;
    case 1121u: goto L_08A83550;
    case 1122u: goto L_08A83558;
    case 1123u: goto L_08A83568;
    case 1124u: goto L_08A8356C;
    case 1125u: goto L_08A83574;
    case 1126u: goto L_08A83580;
    case 1127u: goto L_08A8358C;
    case 1128u: goto L_08A83590;
    case 1129u: goto L_08A8359C;
    case 1130u: goto L_08A835A4;
    case 1131u: goto L_08A835A8;
    case 1132u: goto L_08A835AC;
    case 1133u: goto L_08A835BC;
    case 1134u: goto L_08A835CC;
    case 1135u: goto L_08A835D4;
    case 1136u: goto L_08A835D8;
    case 1137u: goto L_08A835DC;
    case 1138u: goto L_08A835EC;
    case 1139u: goto L_08A835F8;
    case 1140u: goto L_08A835FC;
    case 1141u: goto L_08A83604;
    case 1142u: goto L_08A8360C;
    case 1143u: goto L_08A83620;
    case 1144u: goto L_08A83628;
    case 1145u: goto L_08A83630;
    case 1146u: goto L_08A83644;
    case 1147u: goto L_08A83648;
    case 1148u: goto L_08A83658;
    case 1149u: goto L_08A83664;
    case 1150u: goto L_08A8366C;
    case 1151u: goto L_08A83680;
    case 1152u: goto L_08A83684;
    case 1153u: goto L_08A8368C;
    case 1154u: goto L_08A8369C;
    case 1155u: goto L_08A836A4;
    case 1156u: goto L_08A836B4;
    case 1157u: goto L_08A836C4;
    case 1158u: goto L_08A836CC;
    case 1159u: goto L_08A836D8;
    case 1160u: goto L_08A836E0;
    case 1161u: goto L_08A836F0;
    case 1162u: goto L_08A83704;
    case 1163u: goto L_08A83710;
    case 1164u: goto L_08A83718;
    case 1165u: goto L_08A8371C;
    case 1166u: goto L_08A83720;
    case 1167u: goto L_08A83740;
    case 1168u: goto L_08A83754;
    case 1169u: goto L_08A8375C;
    case 1170u: goto L_08A83764;
    case 1171u: goto L_08A83770;
    case 1172u: goto L_08A83778;
    case 1173u: goto L_08A83788;
    case 1174u: goto L_08A8379C;
    case 1175u: goto L_08A837A8;
    case 1176u: goto L_08A837B0;
    case 1177u: goto L_08A837B4;
    case 1178u: goto L_08A837B8;
    case 1179u: goto L_08A837D8;
    case 1180u: goto L_08A837EC;
    case 1181u: goto L_08A837F4;
    case 1182u: goto L_08A837FC;
    case 1183u: goto L_08A83810;
    case 1184u: goto L_08A83818;
    case 1185u: goto L_08A8381C;
    case 1186u: goto L_08A83820;
    case 1187u: goto L_08A8382C;
    case 1188u: goto L_08A83838;
    case 1189u: goto L_08A83840;
    case 1190u: goto L_08A83848;
    case 1191u: goto L_08A8385C;
    case 1192u: goto L_08A83874;
    case 1193u: goto L_08A83878;
    case 1194u: goto L_08A83898;
    case 1195u: goto L_08A838A0;
    case 1196u: goto L_08A838A4;
    case 1197u: goto L_08A838A8;
    case 1198u: goto L_08A838BC;
    case 1199u: goto L_08A838C4;
    case 1200u: goto L_08A838C8;
    case 1201u: goto L_08A838CC;
    case 1202u: goto L_08A838DC;
    case 1203u: goto L_08A838E0;
    case 1204u: goto L_08A838E8;
    case 1205u: goto L_08A83900;
    case 1206u: goto L_08A83908;
    case 1207u: goto L_08A8390C;
    case 1208u: goto L_08A83910;
    case 1209u: goto L_08A83920;
    case 1210u: goto L_08A83928;
    case 1211u: goto L_08A83930;
    case 1212u: goto L_08A8393C;
    case 1213u: goto L_08A83944;
    case 1214u: goto L_08A8395C;
    case 1215u: goto L_08A83964;
    case 1216u: goto L_08A83984;
    case 1217u: goto L_08A8398C;
    case 1218u: goto L_08A839B4;
    case 1219u: goto L_08A839BC;
    case 1220u: goto L_08A839D0;
    case 1221u: goto L_08A839D8;
    case 1222u: goto L_08A839E0;
    case 1223u: goto L_08A83A00;
    case 1224u: goto L_08A83A08;
    case 1225u: goto L_08A83A20;
    case 1226u: goto L_08A83A24;
    case 1227u: goto L_08A83A38;
    case 1228u: goto L_08A83A48;
    case 1229u: goto L_08A83A50;
    case 1230u: goto L_08A83A64;
    case 1231u: goto L_08A83A70;
    case 1232u: goto L_08A83A78;
    case 1233u: goto L_08A83A94;
    case 1234u: goto L_08A83AF4;
    case 1235u: goto L_08A83AFC;
    case 1236u: goto L_08A83B14;
    case 1237u: goto L_08A83B74;
    case 1238u: goto L_08A83B7C;
    case 1239u: goto L_08A83B94;
    case 1240u: goto L_08A83BEC;
    case 1241u: goto L_08A83BF4;
    case 1242u: goto L_08A83C08;
    case 1243u: goto L_08A83C10;
    case 1244u: goto L_08A83C28;
    case 1245u: goto L_08A83C80;
    case 1246u: goto L_08A83C88;
    case 1247u: goto L_08A83C9C;
    case 1248u: goto L_08A83CA0;
    case 1249u: goto L_08A83CAC;
    case 1250u: goto L_08A83CB4;
    case 1251u: goto L_08A83CBC;
    case 1252u: goto L_08A83CC8;
    case 1253u: goto L_08A83CD0;
    case 1254u: goto L_08A83CD4;
    case 1255u: goto L_08A83CD8;
    case 1256u: goto L_08A83D18;
    case 1257u: goto L_08A83D20;
    case 1258u: goto L_08A83D30;
    case 1259u: goto L_08A83D38;
    case 1260u: goto L_08A83D3C;
    case 1261u: goto L_08A83D40;
    case 1262u: goto L_08A83D80;
    case 1263u: goto L_08A83D84;
    case 1264u: goto L_08A83D90;
    case 1265u: goto L_08A83D98;
    case 1266u: goto L_08A83DA0;
    case 1267u: goto L_08A83DAC;
    case 1268u: goto L_08A83DB4;
    case 1269u: goto L_08A83DBC;
    case 1270u: goto L_08A83DC8;
    case 1271u: goto L_08A83DD0;
    case 1272u: goto L_08A83DD4;
    case 1273u: goto L_08A83DD8;
    case 1274u: goto L_08A83E0C;
    case 1275u: goto L_08A83E14;
    case 1276u: goto L_08A83E2C;
    case 1277u: goto L_08A83E34;
    case 1278u: goto L_08A83E3C;
    case 1279u: goto L_08A83E48;
    case 1280u: goto L_08A83E50;
    case 1281u: goto L_08A83E54;
    case 1282u: goto L_08A83E58;
    case 1283u: goto L_08A83E8C;
    case 1284u: goto L_08A83E94;
    case 1285u: goto L_08A83EAC;
    case 1286u: goto L_08A83EB0;
    case 1287u: goto L_08A83EB8;
    case 1288u: goto L_08A83EC0;
    case 1289u: goto L_08A83ECC;
    case 1290u: goto L_08A83ED4;
    case 1291u: goto L_08A83EDC;
    case 1292u: goto L_08A83EE8;
    case 1293u: goto L_08A83EF0;
    case 1294u: goto L_08A83EF4;
    case 1295u: goto L_08A83EF8;
    case 1296u: goto L_08A83F2C;
    case 1297u: goto L_08A83F34;
    case 1298u: goto L_08A83F4C;
    case 1299u: goto L_08A83F54;
    case 1300u: goto L_08A83F5C;
    case 1301u: goto L_08A83F68;
    case 1302u: goto L_08A83F70;
    case 1303u: goto L_08A83F74;
    case 1304u: goto L_08A83F78;
    case 1305u: goto L_08A83FAC;
    case 1306u: goto L_08A83FB4;
    case 1307u: goto L_08A83FCC;
    case 1308u: goto L_08A83FD0;
    case 1309u: goto L_08A83FD8;
    case 1310u: goto L_08A83FE0;
    case 1311u: goto L_08A83FEC;
    case 1312u: goto L_08A83FF4;
    case 1313u: goto L_08A83FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A80000:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26884));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80014:
    ctx.set_gpr(31, 0x08A8001Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8001Cu) goto L_08A8001C;
    return;
L_08A8001C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8002Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8002Cu) goto L_08A8002C;
    return;
L_08A8002C:
    ctx.set_gpr(31, 0x08A80034u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A80034u) goto L_08A80034;
    return;
L_08A80034:
    ctx.set_gpr(31, 0x08A8003Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8003Cu) goto L_08A8003C;
    return;
L_08A8003C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80048u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80048u) goto L_08A80048;
    return;
L_08A80048:
    ctx.set_gpr(31, 0x08A80050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80050u) goto L_08A80050;
    return;
L_08A80050:
    ctx.set_gpr(31, 0x08A80058u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80058u) goto L_08A80058;
    return;
L_08A80058:
    ctx.set_gpr(31, 0x08A80060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A80060u) goto L_08A80060;
    return;
L_08A80060:
    ctx.set_gpr(31, 0x08A80068u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80068u) goto L_08A80068;
    return;
L_08A80068:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A80078u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A80078u) goto L_08A80078;
    return;
L_08A80078:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18124), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8008Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8008Cu) goto L_08A8008C;
    return;
L_08A8008C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A80098u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A80098u) goto L_08A80098;
    return;
L_08A80098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A800A0;
    }
L_08A800A0:
    ctx.set_gpr(31, 0x08A800A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A800A8u) goto L_08A800A8;
    return;
L_08A800A8:
    ctx.set_gpr(31, 0x08A800B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A800B0u) goto L_08A800B0;
    return;
L_08A800B0:
    ctx.set_gpr(31, 0x08A800B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A800B8u) goto L_08A800B8;
    return;
L_08A800B8:
    ctx.set_gpr(31, 0x08A800C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A800C0u) goto L_08A800C0;
    return;
L_08A800C0:
    ctx.set_gpr(31, 0x08A800C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A800C8u) goto L_08A800C8;
    return;
L_08A800C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A800D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A800D8u) goto L_08A800D8;
    return;
L_08A800D8:
    ctx.set_gpr(31, 0x08A800E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A800E0u) goto L_08A800E0;
    return;
L_08A800E0:
    ctx.set_gpr(31, 0x08A800E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A800E8u) goto L_08A800E8;
    return;
L_08A800E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A800F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A800F4u) goto L_08A800F4;
    return;
L_08A800F4:
    ctx.set_gpr(31, 0x08A800FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A800FCu) goto L_08A800FC;
    return;
L_08A800FC:
    ctx.set_gpr(31, 0x08A80104u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80104u) goto L_08A80104;
    return;
L_08A80104:
    ctx.set_gpr(31, 0x08A8010Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8010Cu) goto L_08A8010C;
    return;
L_08A8010C:
    ctx.set_gpr(31, 0x08A80114u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80114u) goto L_08A80114;
    return;
L_08A80114:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A80124u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18124), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A80124u) goto L_08A80124;
    return;
L_08A80124:
    ctx.set_gpr(31, 0x08A8012Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8012Cu) goto L_08A8012C;
    return;
L_08A8012C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A8013C;
    }
L_08A8013C:
    ctx.set_gpr(31, 0x08A80144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A80144u) goto L_08A80144;
    return;
L_08A80144:
    ctx.set_gpr(31, 0x08A8014Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8014Cu) goto L_08A8014C;
    return;
L_08A8014C:
    ctx.set_gpr(31, 0x08A80154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A80154u) goto L_08A80154;
    return;
L_08A80154:
    ctx.set_gpr(31, 0x08A8015Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A8015Cu) goto L_08A8015C;
    return;
L_08A8015C:
    ctx.set_gpr(31, 0x08A80164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80164u) goto L_08A80164;
    return;
L_08A80164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80170u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80170u) goto L_08A80170;
    return;
L_08A80170:
    ctx.set_gpr(31, 0x08A80178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80178u) goto L_08A80178;
    return;
L_08A80178:
    ctx.set_gpr(31, 0x08A80180u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80180u) goto L_08A80180;
    return;
L_08A80180:
    ctx.set_gpr(31, 0x08A80188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A80188u) goto L_08A80188;
    return;
L_08A80188:
    ctx.set_gpr(31, 0x08A80190u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80190u) goto L_08A80190;
    return;
L_08A80190:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18124), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A801A8u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A801A8u) goto L_08A801A8;
    return;
L_08A801A8:
    ctx.set_gpr(31, 0x08A801B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A801B0u) goto L_08A801B0;
    return;
L_08A801B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18988), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A801C4;
    }
L_08A801C4:
    ctx.set_gpr(31, 0x08A801CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A801CCu) goto L_08A801CC;
    return;
L_08A801CC:
    ctx.set_gpr(31, 0x08A801D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A801D4u) goto L_08A801D4;
    return;
L_08A801D4:
    ctx.set_gpr(31, 0x08A801DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A801DCu) goto L_08A801DC;
    return;
L_08A801DC:
    ctx.set_gpr(31, 0x08A801E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A801E4u) goto L_08A801E4;
    return;
L_08A801E4:
    ctx.set_gpr(31, 0x08A801ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A801ECu) goto L_08A801EC;
    return;
L_08A801EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A801F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A801F8u) goto L_08A801F8;
    return;
L_08A801F8:
    ctx.set_gpr(31, 0x08A80200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80200u) goto L_08A80200;
    return;
L_08A80200:
    ctx.set_gpr(31, 0x08A80208u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80208u) goto L_08A80208;
    return;
L_08A80208:
    ctx.set_gpr(31, 0x08A80210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A80210u) goto L_08A80210;
    return;
L_08A80210:
    ctx.set_gpr(31, 0x08A80218u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80218u) goto L_08A80218;
    return;
L_08A80218:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18124), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A80230u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A80230u) goto L_08A80230;
    return;
L_08A80230:
    ctx.set_gpr(31, 0x08A80238u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A80238u) goto L_08A80238;
    return;
L_08A80238:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18988), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A80250;
    }
L_08A80250:
    ctx.set_gpr(31, 0x08A80258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80258u) goto L_08A80258;
    return;
L_08A80258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80268u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80268u) goto L_08A80268;
    return;
L_08A80268:
    ctx.set_gpr(31, 0x08A80270u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A80270u) goto L_08A80270;
    return;
L_08A80270:
    ctx.set_gpr(31, 0x08A80278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80278u) goto L_08A80278;
    return;
L_08A80278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80284u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80284u) goto L_08A80284;
    return;
L_08A80284:
    ctx.set_gpr(31, 0x08A8028Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8028Cu) goto L_08A8028C;
    return;
L_08A8028C:
    ctx.set_gpr(31, 0x08A80294u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80294u) goto L_08A80294;
    return;
L_08A80294:
    ctx.set_gpr(31, 0x08A8029Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8029Cu) goto L_08A8029C;
    return;
L_08A8029C:
    ctx.set_gpr(31, 0x08A802A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A802A4u) goto L_08A802A4;
    return;
L_08A802A4:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A802B4u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A802B4u) goto L_08A802B4;
    return;
L_08A802B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18124), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A802C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A802C8u) goto L_08A802C8;
    return;
L_08A802C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A802D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A802D4u) goto L_08A802D4;
    return;
L_08A802D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A802DC;
    }
L_08A802DC:
    ctx.set_gpr(31, 0x08A802E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A802E4u) goto L_08A802E4;
    return;
L_08A802E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A802F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A802F0u) goto L_08A802F0;
    return;
L_08A802F0:
    ctx.set_gpr(31, 0x08A802F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A802F8u) goto L_08A802F8;
    return;
L_08A802F8:
    ctx.set_gpr(31, 0x08A80300u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80300u) goto L_08A80300;
    return;
L_08A80300:
    ctx.set_gpr(31, 0x08A80308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A80308u) goto L_08A80308;
    return;
L_08A80308:
    ctx.set_gpr(31, 0x08A80310u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80310u) goto L_08A80310;
    return;
L_08A80310:
    ctx.set_gpr(31, 0x08A80318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80318u) goto L_08A80318;
    return;
L_08A80318:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A80348u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A80348u) goto L_08A80348;
    return;
L_08A80348:
    ctx.set_gpr(31, 0x08A80350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80350u) goto L_08A80350;
    return;
L_08A80350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80360u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80360u) goto L_08A80360;
    return;
L_08A80360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8036Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8036Cu) goto L_08A8036C;
    return;
L_08A8036C:
    ctx.set_gpr(31, 0x08A80374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80374u) goto L_08A80374;
    return;
L_08A80374:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80384u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80384u) goto L_08A80384;
    return;
L_08A80384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24784));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A803A4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A803A4u) goto L_08A803A4;
    return;
L_08A803A4:
    ctx.set_gpr(31, 0x08A803ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A803ACu) goto L_08A803AC;
    return;
L_08A803AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A803BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A803BCu) goto L_08A803BC;
    return;
L_08A803BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24744));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A803DCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A803DCu) goto L_08A803DC;
    return;
L_08A803DC:
    ctx.set_gpr(31, 0x08A803E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A803E4u) goto L_08A803E4;
    return;
L_08A803E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A803F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A803F4u) goto L_08A803F4;
    return;
L_08A803F4:
    ctx.set_gpr(31, 0x08A803FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A803FCu) goto L_08A803FC;
    return;
L_08A803FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80408u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A80408u) goto L_08A80408;
    return;
L_08A80408:
    ctx.set_gpr(31, 0x08A80410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A80410u) goto L_08A80410;
    return;
L_08A80410:
    ctx.set_gpr(31, 0x08A80418u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A80418u) goto L_08A80418;
    return;
L_08A80418:
    ctx.set_gpr(31, 0x08A80420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A80420u) goto L_08A80420;
    return;
L_08A80420:
    ctx.set_gpr(31, 0x08A80428u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A80428u) goto L_08A80428;
    return;
L_08A80428:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A80438;
    }
L_08A80438:
    ctx.set_gpr(31, 0x08A80440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A80440u) goto L_08A80440;
    return;
L_08A80440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A80454u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80454u) goto L_08A80454;
    return;
L_08A80454:
    ctx.set_gpr(31, 0x08A8045Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A8045Cu) goto L_08A8045C;
    return;
L_08A8045C:
    ctx.set_gpr(31, 0x08A80464u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A806EC;
L_08A80464:
    ctx.set_gpr(31, 0x08A8046Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 379u, 0x08A9A8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8046Cu) goto L_08A8046C;
    return;
L_08A8046C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A804EC;
      }
      goto L_08A80478;
    }
L_08A80478:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(ctx.gpr[3]));
        goto L_08A8048C;
    }
    goto L_08A80484;
L_08A80484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A8048C;
    }
L_08A8048C:
    ctx.set_gpr(31, 0x08A80494u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A80494u) goto L_08A80494;
    return;
L_08A80494:
    ctx.set_gpr(31, 0x08A8049Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A806D8;
L_08A8049C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A804A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A804A8u) goto L_08A804A8;
    return;
L_08A804A8:
    ctx.set_gpr(31, 0x08A804B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A804B0u) goto L_08A804B0;
    return;
L_08A804B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A804BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A804BCu) goto L_08A804BC;
    return;
L_08A804BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A804C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A806D0;
L_08A804C8:
    ctx.set_gpr(31, 0x08A804D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A804D0u) goto L_08A804D0;
    return;
L_08A804D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A804E4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A804E4u) goto L_08A804E4;
    return;
L_08A804E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A804EC;
    }
L_08A804EC:
    ctx.set_gpr(31, 0x08A804F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A804F4u) goto L_08A804F4;
    return;
L_08A804F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A80508u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80508u) goto L_08A80508;
    return;
L_08A80508:
    ctx.set_gpr(31, 0x08A80510u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A80510u) goto L_08A80510;
    return;
L_08A80510:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8051Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A8051Cu) goto L_08A8051C;
    return;
L_08A8051C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A80524;
    }
L_08A80524:
    ctx.set_gpr(31, 0x08A8052Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8052Cu) goto L_08A8052C;
    return;
L_08A8052C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80538u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A80538u) goto L_08A80538;
    return;
L_08A80538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A80540;
    }
L_08A80540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A80550;
    }
L_08A80550:
    ctx.set_gpr(31, 0x08A80558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80558u) goto L_08A80558;
    return;
L_08A80558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80564u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A80564u) goto L_08A80564;
    return;
L_08A80564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A8056C;
    }
L_08A8056C:
    ctx.set_gpr(31, 0x08A80574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80574u) goto L_08A80574;
    return;
L_08A80574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80580u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A80580u) goto L_08A80580;
    return;
L_08A80580:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
        goto L_08A805BC;
    }
    goto L_08A8058C;
L_08A8058C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08A805A0;
    }
    goto L_08A80598;
L_08A80598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A805A0;
    }
L_08A805A0:
    ctx.set_gpr(31, 0x08A805A8u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A805A8u) goto L_08A805A8;
    return;
L_08A805A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A805B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A805B4u) goto L_08A805B4;
    return;
L_08A805B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A805BC;
    }
L_08A805BC:
    ctx.set_gpr(31, 0x08A805C4u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A805C4u) goto L_08A805C4;
    return;
L_08A805C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A805D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A805D0u) goto L_08A805D0;
    return;
L_08A805D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A805D8;
    }
L_08A805D8:
    ctx.set_gpr(31, 0x08A805E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A805E0u) goto L_08A805E0;
    return;
L_08A805E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A805ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A805ECu) goto L_08A805EC;
    return;
L_08A805EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A805F4;
    }
L_08A805F4:
    ctx.set_gpr(31, 0x08A805FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A805FCu) goto L_08A805FC;
    return;
L_08A805FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8060Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8060Cu) goto L_08A8060C;
    return;
L_08A8060C:
    ctx.set_gpr(31, 0x08A80614u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A80614u) goto L_08A80614;
    return;
L_08A80614:
    ctx.set_gpr(31, 0x08A8061Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8061Cu) goto L_08A8061C;
    return;
L_08A8061C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80628u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80628u) goto L_08A80628;
    return;
L_08A80628:
    ctx.set_gpr(31, 0x08A80630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80630u) goto L_08A80630;
    return;
L_08A80630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8063Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A8063Cu) goto L_08A8063C;
    return;
L_08A8063C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A8064C;
    }
L_08A8064C:
    ctx.set_gpr(31, 0x08A80654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80654u) goto L_08A80654;
    return;
L_08A80654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80660u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A80660u) goto L_08A80660;
    return;
L_08A80660:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A80668;
    }
L_08A80668:
    ctx.set_gpr(31, 0x08A80670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80670u) goto L_08A80670;
    return;
L_08A80670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80680u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80680u) goto L_08A80680;
    return;
L_08A80680:
    ctx.set_gpr(31, 0x08A80688u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A80688u) goto L_08A80688;
    return;
L_08A80688:
    ctx.set_gpr(31, 0x08A80690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80690u) goto L_08A80690;
    return;
L_08A80690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8069Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8069Cu) goto L_08A8069C;
    return;
L_08A8069C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18136), 0u);
      if (branch_taken) {
          goto L_08A806AC;
      }
      goto L_08A806A4;
    }
L_08A806A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A806B0;
      }
      goto L_08A806AC;
    }
L_08A806AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A806B0;
L_08A806B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A806D0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A806D8:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(3348)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A806EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A80708;
L_08A80708:
    ctx.set_gpr(31, 0x08A80710u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 135u, 0x08AF0944u>(ctx, &aot_mem) && ctx.pc == 0x08A80710u) goto L_08A80710;
    return;
L_08A80710:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A80708;
    }
    goto L_08A80720;
L_08A80720:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A80734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A81124;
      }
      goto L_08A8075C;
    }
L_08A8075C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18340)));
        goto L_08A80918;
    }
    goto L_08A80768;
L_08A80768:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A808EC;
      }
      goto L_08A80774;
    }
L_08A80774:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18142));
        goto L_08A80784;
    }
    goto L_08A8077C;
L_08A8077C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81160;
      }
      goto L_08A80784;
    }
L_08A80784:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80790u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80790u) goto L_08A80790;
    return;
L_08A80790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8079Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18992), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8079Cu) goto L_08A8079C;
    return;
L_08A8079C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A807ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24724));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A807ACu) goto L_08A807AC;
    return;
L_08A807AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18128)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
        goto L_08A807F0;
    }
    goto L_08A807BC;
L_08A807BC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A807C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 192u, 0x08B04D70u>(ctx, &aot_mem) && ctx.pc == 0x08A807C8u) goto L_08A807C8;
    return;
L_08A807C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A807E8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A807E8u) goto L_08A807E8;
    return;
L_08A807E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80890;
      }
      goto L_08A807F0;
    }
L_08A807F0:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
        goto L_08A80868;
    }
    goto L_08A807F8;
L_08A807F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18460)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
        goto L_08A80838;
    }
    goto L_08A80804;
L_08A80804:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A80810u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 192u, 0x08B04D70u>(ctx, &aot_mem) && ctx.pc == 0x08A80810u) goto L_08A80810;
    return;
L_08A80810:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A80830u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80830u) goto L_08A80830;
    return;
L_08A80830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80890;
      }
      goto L_08A80838;
    }
L_08A80838:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80844u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 193u, 0x08B04DA0u>(ctx, &aot_mem) && ctx.pc == 0x08A80844u) goto L_08A80844;
    return;
L_08A80844:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A80860u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80860u) goto L_08A80860;
    return;
L_08A80860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80890;
      }
      goto L_08A80868;
    }
L_08A80868:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80874u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 193u, 0x08B04DA0u>(ctx, &aot_mem) && ctx.pc == 0x08A80874u) goto L_08A80874;
    return;
L_08A80874:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A80890u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80890u) goto L_08A80890;
    return;
L_08A80890:
    ctx.set_gpr(31, 0x08A80898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80898u) goto L_08A80898;
    return;
L_08A80898:
    ctx.set_gpr(31, 0x08A808A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A81290;
L_08A808A0:
    ctx.set_gpr(31, 0x08A808A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A808A8u) goto L_08A808A8;
    return;
L_08A808A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A808B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A808B4u) goto L_08A808B4;
    return;
L_08A808B4:
    ctx.set_gpr(31, 0x08A808BCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18340), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A808BCu) goto L_08A808BC;
    return;
L_08A808BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18340)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31988));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A808DCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A808DCu) goto L_08A808DC;
    return;
L_08A808DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A808EC;
    }
L_08A808EC:
    ctx.set_gpr(31, 0x08A808F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A808F4u) goto L_08A808F4;
    return;
L_08A808F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80900u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A80900u) goto L_08A80900;
    return;
L_08A80900:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
        goto L_08A81198;
    }
    goto L_08A80908;
L_08A80908:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A80918;
    }
L_08A80918:
    ctx.set_gpr(31, 0x08A80920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80920u) goto L_08A80920;
    return;
L_08A80920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8092Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8092Cu) goto L_08A8092C;
    return;
L_08A8092C:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18992)));
        goto L_08A809BC;
    }
    goto L_08A80934;
L_08A80934:
    ctx.set_gpr(31, 0x08A8093Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8093Cu) goto L_08A8093C;
    return;
L_08A8093C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80948u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A80948u) goto L_08A80948;
    return;
L_08A80948:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18340), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A80984;
      }
      goto L_08A80950;
    }
L_08A80950:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8095Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18992), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8095Cu) goto L_08A8095C;
    return;
L_08A8095C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18340)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31988));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A8097Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8097Cu) goto L_08A8097C;
    return;
L_08A8097C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A809B8;
      }
      goto L_08A80984;
    }
L_08A80984:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19900));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24712));
    ctx.set_gpr(31, 0x08A809A0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A809A0u) goto L_08A809A0;
    return;
L_08A809A0:
    ctx.set_gpr(31, 0x08A809A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A809A8u) goto L_08A809A8;
    return;
L_08A809A8:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A809B8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19900));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A809B8u) goto L_08A809B8;
    return;
L_08A809B8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18992)));
    goto L_08A809BC;
L_08A809BC:
    ctx.set_gpr(31, 0x08A809C4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08A81288;
L_08A809C4:
    ctx.set_gpr(31, 0x08A809CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 1106u, 0x08ABBA88u>(ctx, &aot_mem) && ctx.pc == 0x08A809CCu) goto L_08A809CC;
    return;
L_08A809CC:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A80AC8;
      }
      goto L_08A809D8;
    }
L_08A809D8:
    ctx.set_gpr(31, 0x08A809E0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08A81288;
L_08A809E0:
    ctx.set_gpr(31, 0x08A809E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 1106u, 0x08ABBA88u>(ctx, &aot_mem) && ctx.pc == 0x08A809E8u) goto L_08A809E8;
    return;
L_08A809E8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18992), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18340)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18128)));
        goto L_08A80A08;
    }
    goto L_08A809FC;
L_08A809FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18992), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18128)));
    goto L_08A80A08;
L_08A80A08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A80AC8;
      }
      goto L_08A80A14;
    }
L_08A80A14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18992)));
        goto L_08A80A80;
    }
    goto L_08A80A20;
L_08A80A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18460)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80AC8;
      }
      goto L_08A80A2C;
    }
L_08A80A2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18992)));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A80A5C;
    }
    goto L_08A80A38;
L_08A80A38:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A80A54u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80A54u) goto L_08A80A54;
    return;
L_08A80A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80AC8;
      }
      goto L_08A80A5C;
    }
L_08A80A5C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A80A78u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80A78u) goto L_08A80A78;
    return;
L_08A80A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80AC8;
      }
      goto L_08A80A80;
    }
L_08A80A80:
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A80AAC;
    }
    goto L_08A80A88;
L_08A80A88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A80AA4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80AA4u) goto L_08A80AA4;
    return;
L_08A80AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80AC8;
      }
      goto L_08A80AAC;
    }
L_08A80AAC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A80AC8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A80AC8u) goto L_08A80AC8;
    return;
L_08A80AC8:
    ctx.set_gpr(31, 0x08A80AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80AD0u) goto L_08A80AD0;
    return;
L_08A80AD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80ADCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A80ADCu) goto L_08A80ADC;
    return;
L_08A80ADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_08A80B60;
    }
    goto L_08A80AE8;
L_08A80AE8:
    ctx.set_gpr(31, 0x08A80AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80AF0u) goto L_08A80AF0;
    return;
L_08A80AF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80B00u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80B00u) goto L_08A80B00;
    return;
L_08A80B00:
    ctx.set_gpr(31, 0x08A80B08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A81280;
L_08A80B08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A80B5C;
      }
      goto L_08A80B10;
    }
L_08A80B10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18992)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A80B5C;
      }
      goto L_08A80B1C;
    }
L_08A80B1C:
    ctx.set_gpr(31, 0x08A80B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A80B24u) goto L_08A80B24;
    return;
L_08A80B24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80B30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A80B30u) goto L_08A80B30;
    return;
L_08A80B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80B5C;
      }
      goto L_08A80B38;
    }
L_08A80B38:
    ctx.set_gpr(31, 0x08A80B40u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 353u, 0x08B0572Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80B40u) goto L_08A80B40;
    return;
L_08A80B40:
    ctx.set_gpr(31, 0x08A80B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80B48u) goto L_08A80B48;
    return;
L_08A80B48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A80B5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80B5Cu) goto L_08A80B5C;
    return;
L_08A80B5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_08A80B60;
L_08A80B60:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A80B6Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A80B6Cu) goto L_08A80B6C;
    return;
L_08A80B6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A81014;
      }
      goto L_08A80B78;
    }
L_08A80B78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18404)));
        goto L_08A80F74;
    }
    goto L_08A80B84;
L_08A80B84:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18142));
        goto L_08A80B98;
    }
    goto L_08A80B90;
L_08A80B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A80B98;
    }
L_08A80B98:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80BA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80BA4u) goto L_08A80BA4;
    return;
L_08A80BA4:
    ctx.set_gpr(31, 0x08A80BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80BACu) goto L_08A80BAC;
    return;
L_08A80BAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80BB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A80BB8u) goto L_08A80BB8;
    return;
L_08A80BB8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A80DC4;
    }
    goto L_08A80BC0;
L_08A80BC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A80BDC;
    }
    goto L_08A80BD0;
L_08A80BD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18996), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A80BDC;
L_08A80BDC:
    ctx.set_gpr(31, 0x08A80BE4u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18302), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80BE4u) goto L_08A80BE4;
    return;
L_08A80BE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80BF4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80BF4u) goto L_08A80BF4;
    return;
L_08A80BF4:
    ctx.set_gpr(31, 0x08A80BFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A80BFCu) goto L_08A80BFC;
    return;
L_08A80BFC:
    ctx.set_gpr(31, 0x08A80C04u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80C04u) goto L_08A80C04;
    return;
L_08A80C04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80C14u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80C14u) goto L_08A80C14;
    return;
L_08A80C14:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A80C20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A81268;
L_08A80C20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A80C2Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08A81258;
L_08A80C2C:
    ctx.set_gpr(31, 0x08A80C34u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A81204;
L_08A80C34:
    ctx.set_gpr(31, 0x08A80C3Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 453u, 0x08A91BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A80C3Cu) goto L_08A80C3C;
    return;
L_08A80C3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A80C4Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80C4Cu) goto L_08A80C4C;
    return;
L_08A80C4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A80C88;
      }
      goto L_08A80C5C;
    }
L_08A80C5C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08A80C6Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19992));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80C6Cu) goto L_08A80C6C;
    return;
L_08A80C6C:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19992));
    ctx.set_gpr(31, 0x08A80C80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    goto L_08A811FC;
L_08A80C80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
      if (branch_taken) {
          goto L_08A80CD4;
      }
      goto L_08A80C88;
    }
L_08A80C88:
    ctx.set_gpr(31, 0x08A80C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80C90u) goto L_08A80C90;
    return;
L_08A80C90:
    ctx.set_gpr(31, 0x08A80C98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A80C98u) goto L_08A80C98;
    return;
L_08A80C98:
    ctx.set_gpr(31, 0x08A80CA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A80CA0u) goto L_08A80CA0;
    return;
L_08A80CA0:
    ctx.set_gpr(31, 0x08A80CA8u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80CA8u) goto L_08A80CA8;
    return;
L_08A80CA8:
    ctx.set_gpr(31, 0x08A80CB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A80CB0u) goto L_08A80CB0;
    return;
L_08A80CB0:
    ctx.set_gpr(31, 0x08A80CB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A80CB8u) goto L_08A80CB8;
    return;
L_08A80CB8:
    ctx.set_gpr(31, 0x08A80CC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A80CC0u) goto L_08A80CC0;
    return;
L_08A80CC0:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80CD0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A811FC;
L_08A80CD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    goto L_08A80CD4;
L_08A80CD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
        goto L_08A80D24;
    }
    goto L_08A80CE0;
L_08A80CE0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A80D20;
      }
      goto L_08A80CEC;
    }
L_08A80CEC:
    ctx.set_gpr(31, 0x08A80CF4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A811E8;
L_08A80CF4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A80D00u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 442u, 0x08A91B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80D00u) goto L_08A80D00;
    return;
L_08A80D00:
    ctx.set_gpr(31, 0x08A80D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80D08u) goto L_08A80D08;
    return;
L_08A80D08:
    ctx.set_gpr(31, 0x08A80D10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A80D10u) goto L_08A80D10;
    return;
L_08A80D10:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80D20u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19992));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 451u, 0x08A9AE84u>(ctx, &aot_mem) && ctx.pc == 0x08A80D20u) goto L_08A80D20;
    return;
L_08A80D20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
    goto L_08A80D24;
L_08A80D24:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A80D78;
    }
    goto L_08A80D2C;
L_08A80D2C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A80D38u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 442u, 0x08A91B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80D38u) goto L_08A80D38;
    return;
L_08A80D38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A80D74;
      }
      goto L_08A80D48;
    }
L_08A80D48:
    ctx.set_gpr(31, 0x08A80D50u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A80D50u) goto L_08A80D50;
    return;
L_08A80D50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A80D5Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A80D5Cu) goto L_08A80D5C;
    return;
L_08A80D5C:
    ctx.set_gpr(31, 0x08A80D64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A80D64u) goto L_08A80D64;
    return;
L_08A80D64:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80D74u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A811FC;
L_08A80D74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A80D78;
L_08A80D78:
    ctx.set_gpr(31, 0x08A80D80u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 509u, 0x08A9B2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A80D80u) goto L_08A80D80;
    return;
L_08A80D80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A80D98u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80D98u) goto L_08A80D98;
    return;
L_08A80D98:
    ctx.set_gpr(31, 0x08A80DA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A811E0;
L_08A80DA0:
    ctx.set_gpr(31, 0x08A80DA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A811E8;
L_08A80DA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18308), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18400), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18404), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A80F64;
      }
      goto L_08A80DC4;
    }
L_08A80DC4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18142));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80DD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A80DD8u) goto L_08A80DD8;
    return;
L_08A80DD8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A80DE4u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18302), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 453u, 0x08A91BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A80DE4u) goto L_08A80DE4;
    return;
L_08A80DE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80DF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80DF4u) goto L_08A80DF4;
    return;
L_08A80DF4:
    ctx.set_gpr(31, 0x08A80DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80DFCu) goto L_08A80DFC;
    return;
L_08A80DFC:
    ctx.set_gpr(31, 0x08A80E04u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80E04u) goto L_08A80E04;
    return;
L_08A80E04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80E10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A80E10u) goto L_08A80E10;
    return;
L_08A80E10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A80E20u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80E20u) goto L_08A80E20;
    return;
L_08A80E20:
    ctx.set_gpr(31, 0x08A80E28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A80E28u) goto L_08A80E28;
    return;
L_08A80E28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80E34u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A811C0;
L_08A80E34:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80E44u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19992));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80E44u) goto L_08A80E44;
    return;
L_08A80E44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A80E70;
    }
    goto L_08A80E54;
L_08A80E54:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19992));
    ctx.set_gpr(31, 0x08A80E68u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    goto L_08A811FC;
L_08A80E68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A80EA0;
      }
      goto L_08A80E70;
    }
L_08A80E70:
    ctx.set_gpr(31, 0x08A80E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A80E78u) goto L_08A80E78;
    return;
L_08A80E78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A80E84u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A80E84u) goto L_08A80E84;
    return;
L_08A80E84:
    ctx.set_gpr(31, 0x08A80E8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A80E8Cu) goto L_08A80E8C;
    return;
L_08A80E8C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80E9Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A811FC;
L_08A80E9C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08A80EA0;
L_08A80EA0:
    ctx.set_gpr(31, 0x08A80EA8u);
    // nop
    goto L_08A81288;
L_08A80EA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80EB4u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 937u, 0x08ABB1B0u>(ctx, &aot_mem) && ctx.pc == 0x08A80EB4u) goto L_08A80EB4;
    return;
L_08A80EB4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
        goto L_08A80F24;
    }
    goto L_08A80EC0;
L_08A80EC0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A80ECCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 442u, 0x08A91B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80ECCu) goto L_08A80ECC;
    return;
L_08A80ECC:
    ctx.set_gpr(31, 0x08A80ED4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08A81288;
L_08A80ED4:
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19940));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A80EF0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(39));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 848u, 0x08ABAD30u>(ctx, &aot_mem) && ctx.pc == 0x08A80EF0u) goto L_08A80EF0;
    return;
L_08A80EF0:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A80F00u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19940));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1067u, 0x08A93A60u>(ctx, &aot_mem) && ctx.pc == 0x08A80F00u) goto L_08A80F00;
    return;
L_08A80F00:
    ctx.set_gpr(31, 0x08A80F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A80F08u) goto L_08A80F08;
    return;
L_08A80F08:
    ctx.set_gpr(31, 0x08A80F10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A80F10u) goto L_08A80F10;
    return;
L_08A80F10:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A80F20u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-19940));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 451u, 0x08A9AE84u>(ctx, &aot_mem) && ctx.pc == 0x08A80F20u) goto L_08A80F20;
    return;
L_08A80F20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
    goto L_08A80F24;
L_08A80F24:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
        goto L_08A80F3C;
    }
    goto L_08A80F2C;
L_08A80F2C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A80F38u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 442u, 0x08A91B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80F38u) goto L_08A80F38;
    return;
L_08A80F38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    goto L_08A80F3C;
L_08A80F3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A80F50u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A80F50u) goto L_08A80F50;
    return;
L_08A80F50:
    ctx.set_gpr(31, 0x08A80F58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A811E0;
L_08A80F58:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18308), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18400), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18404), static_cast<std::uint8_t>(0u));
    goto L_08A80F64;
L_08A80F64:
    ctx.set_gpr(31, 0x08A80F6Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A81358;
L_08A80F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A80F74;
    }
L_08A80F74:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A80F9C;
    }
    goto L_08A80F7C;
L_08A80F7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    ctx.set_gpr(31, 0x08A80F88u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80F88u) goto L_08A80F88;
    return;
L_08A80F88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A80F94u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 509u, 0x08A9B2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A80F94u) goto L_08A80F94;
    return;
L_08A80F94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18128)));
      if (branch_taken) {
          goto L_08A80FBC;
      }
      goto L_08A80F9C;
    }
L_08A80F9C:
    ctx.set_gpr(31, 0x08A80FA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A80FA4u) goto L_08A80FA4;
    return;
L_08A80FA4:
    ctx.set_gpr(31, 0x08A80FACu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08A81288;
L_08A80FAC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18400)));
    ctx.set_gpr(31, 0x08A80FB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 937u, 0x08ABB1B0u>(ctx, &aot_mem) && ctx.pc == 0x08A80FB8u) goto L_08A80FB8;
    return;
L_08A80FB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18128)));
    goto L_08A80FBC;
L_08A80FBC:
    ctx.set_gpr(2, ctx.gpr[2] ^ 6u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A80FDC;
      }
      goto L_08A80FCC;
    }
L_08A80FCC:
    ctx.set_gpr(31, 0x08A80FD4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15840));
    goto L_08A811B8;
L_08A80FD4:
    ctx.set_gpr(2, ctx.gpr[2] ^ 7u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A80FDC;
L_08A80FDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A80FE4;
    }
L_08A80FE4:
    ctx.set_gpr(31, 0x08A80FECu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A81358;
L_08A80FEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A81004u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A81004u) goto L_08A81004;
    return;
L_08A81004:
    ctx.set_gpr(31, 0x08A8100Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A811E0;
L_08A8100C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A81014;
    }
L_08A81014:
    ctx.set_gpr(31, 0x08A8101Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8101Cu) goto L_08A8101C;
    return;
L_08A8101C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81028u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A81028u) goto L_08A81028;
    return;
L_08A81028:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A810B4;
    }
    goto L_08A81034;
L_08A81034:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81044;
      }
      goto L_08A8103C;
    }
L_08A8103C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A81044;
    }
L_08A81044:
    ctx.set_gpr(31, 0x08A8104Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8104Cu) goto L_08A8104C;
    return;
L_08A8104C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8105Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8105Cu) goto L_08A8105C;
    return;
L_08A8105C:
    ctx.set_gpr(31, 0x08A81064u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A81064u) goto L_08A81064;
    return;
L_08A81064:
    ctx.set_gpr(31, 0x08A8106Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8106Cu) goto L_08A8106C;
    return;
L_08A8106C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8107Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8107Cu) goto L_08A8107C;
    return;
L_08A8107C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A81088u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A81268;
L_08A81088:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18302), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, 0x08A81098u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    goto L_08A811E8;
L_08A81098:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A810ACu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18308), ctx.gpr[2]);
    goto L_08A81298;
L_08A810AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A810B4;
    }
L_08A810B4:
    ctx.set_gpr(31, 0x08A810BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 161u, 0x08A94C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A810BCu) goto L_08A810BC;
    return;
L_08A810BC:
    ctx.set_gpr(31, 0x08A810C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A810C4u) goto L_08A810C4;
    return;
L_08A810C4:
    ctx.set_gpr(31, 0x08A810CCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A810CCu) goto L_08A810CC;
    return;
L_08A810CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A810D8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 77u, 0x08AFC5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A810D8u) goto L_08A810D8;
    return;
L_08A810D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A810E8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A810E8u) goto L_08A810E8;
    return;
L_08A810E8:
    ctx.set_gpr(31, 0x08A810F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A810F0u) goto L_08A810F0;
    return;
L_08A810F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A810FCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_08A81288;
L_08A810FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81108u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 937u, 0x08ABB1B0u>(ctx, &aot_mem) && ctx.pc == 0x08A81108u) goto L_08A81108;
    return;
L_08A81108:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18308), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8111Cu);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18302), static_cast<std::uint8_t>(0u));
    goto L_08A81298;
L_08A8111C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A81124;
    }
L_08A81124:
    ctx.set_gpr(31, 0x08A8112Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8112Cu) goto L_08A8112C;
    return;
L_08A8112C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81138u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A81138u) goto L_08A81138;
    return;
L_08A81138:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A81140;
    }
L_08A81140:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A81150u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A81150u) goto L_08A81150;
    return;
L_08A81150:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A81194;
      }
      goto L_08A81160;
    }
L_08A81160:
    ctx.set_gpr(31, 0x08A81168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1049u, 0x08A93944u>(ctx, &aot_mem) && ctx.pc == 0x08A81168u) goto L_08A81168;
    return;
L_08A81168:
    ctx.set_gpr(31, 0x08A81170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81170u) goto L_08A81170;
    return;
L_08A81170:
    ctx.set_gpr(31, 0x08A81178u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A81178u) goto L_08A81178;
    return;
L_08A81178:
    ctx.set_gpr(31, 0x08A81180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A81180u) goto L_08A81180;
    return;
L_08A81180:
    ctx.set_gpr(31, 0x08A81188u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A81188u) goto L_08A81188;
    return;
L_08A81188:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
      if (branch_taken) {
          goto L_08A8119C;
      }
      goto L_08A81194;
    }
L_08A81194:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    goto L_08A81198;
L_08A81198:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8119C;
L_08A8119C:
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
L_08A811B8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A811C0:
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23044)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A811E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem); return;
L_08A811E8:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16776));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A811FC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(18142));
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem); return;
L_08A81204:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1748u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    goto L_08A81214;
L_08A81214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A81230u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A81230u) goto L_08A81230;
    return;
L_08A81230:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(800));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A81240u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(800));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A81240u) goto L_08A81240;
    return;
L_08A81240:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81258:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    goto L_08A81214;
L_08A81268:
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81280:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(41)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81288:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81290:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem); return;
L_08A81298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A812B4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08A81358;
L_08A812B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A812FC;
    }
    goto L_08A812C0;
L_08A812C0:
    ctx.set_gpr(31, 0x08A812C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A812C8u) goto L_08A812C8;
    return;
L_08A812C8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18308)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A812F4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08A812F4u) goto L_08A812F4;
    return;
L_08A812F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18302)));
      if (branch_taken) {
          goto L_08A81338;
      }
      goto L_08A812FC;
    }
L_08A812FC:
    ctx.set_gpr(31, 0x08A81304u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81304u) goto L_08A81304;
    return;
L_08A81304:
    ctx.set_gpr(3, 17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 16544u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18308)));
    ctx.set_gpr(7, ctx.gpr[17] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A81334u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08A81334u) goto L_08A81334;
    return;
L_08A81334:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18302)));
    goto L_08A81338;
L_08A81338:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18303), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18304), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18304)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A813AC;
      }
      goto L_08A81370;
    }
L_08A81370:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18303)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A81398;
    }
    goto L_08A8137C;
L_08A8137C:
    ctx.set_gpr(31, 0x08A81384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81384u) goto L_08A81384;
    return;
L_08A81384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81390u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 352u, 0x08AB14ACu>(ctx, &aot_mem) && ctx.pc == 0x08A81390u) goto L_08A81390;
    return;
L_08A81390:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18304), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A813B0;
      }
      goto L_08A81398;
    }
L_08A81398:
    ctx.set_gpr(31, 0x08A813A0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A813A0u) goto L_08A813A0;
    return;
L_08A813A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A813ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 352u, 0x08AB14ACu>(ctx, &aot_mem) && ctx.pc == 0x08A813ACu) goto L_08A813AC;
    return;
L_08A813AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18304), static_cast<std::uint8_t>(0u));
    goto L_08A813B0;
L_08A813B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A813C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A8140C;
      }
      goto L_08A81404;
    }
L_08A81404:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A8140C;
L_08A8140C:
    ctx.set_gpr(31, 0x08A81414u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81414u) goto L_08A81414;
    return;
L_08A81414:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A81424u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08A81424u) goto L_08A81424;
    return;
L_08A81424:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
        goto L_08A81458;
    }
    goto L_08A81430;
L_08A81430:
    ctx.set_gpr(31, 0x08A81438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81438u) goto L_08A81438;
    return;
L_08A81438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A81448u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 663u, 0x0885E864u>(ctx, &aot_mem) && ctx.pc == 0x08A81448u) goto L_08A81448;
    return;
L_08A81448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81454;
      }
      goto L_08A81450;
    }
L_08A81450:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08A81454;
L_08A81454:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    goto L_08A81458;
L_08A81458:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 442u, 0x08A85884u>(ctx, &aot_mem); return;
    }
    goto L_08A81468;
L_08A81468:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26792));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A81484:
    ctx.set_gpr(31, 0x08A8148Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A8148Cu) goto L_08A8148C;
    return;
L_08A8148C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81498u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A81498u) goto L_08A81498;
    return;
L_08A81498:
    ctx.set_gpr(31, 0x08A814A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A814A0u) goto L_08A814A0;
    return;
L_08A814A0:
    ctx.set_gpr(31, 0x08A814A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A814A8u) goto L_08A814A8;
    return;
L_08A814A8:
    ctx.set_gpr(31, 0x08A814B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A814B0u) goto L_08A814B0;
    return;
L_08A814B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A814D0u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A814D0u) goto L_08A814D0;
    return;
L_08A814D0:
    ctx.set_gpr(31, 0x08A814D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A814D8u) goto L_08A814D8;
    return;
L_08A814D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A814ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A814ECu) goto L_08A814EC;
    return;
L_08A814EC:
    ctx.set_gpr(31, 0x08A814F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A814F4u) goto L_08A814F4;
    return;
L_08A814F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A81508u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81508u) goto L_08A81508;
    return;
L_08A81508:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18296), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A81518u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(16320), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 453u, 0x08A91BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A81518u) goto L_08A81518;
    return;
L_08A81518:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18204), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A81524u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81524u) goto L_08A81524;
    return;
L_08A81524:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A81544;
      }
      goto L_08A81538;
    }
L_08A81538:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A81548;
    }
    goto L_08A81540;
L_08A81540:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81544;
L_08A81544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A81548;
L_08A81548:
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A81558;
      }
      goto L_08A81554;
    }
L_08A81554:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A81558;
L_08A81558:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 196 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A81568;
      }
      goto L_08A81564;
    }
L_08A81564:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(196));
    goto L_08A81568;
L_08A81568:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A81584;
      }
      goto L_08A81578;
    }
L_08A81578:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A81588;
    }
    goto L_08A81580;
L_08A81580:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81584;
L_08A81584:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A81588;
L_08A81588:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A81594u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81594u) goto L_08A81594;
    return;
L_08A81594:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 16576u << 16u);
        goto L_08A815D8;
    }
    goto L_08A8159C;
L_08A8159C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A815B4;
      }
      goto L_08A815A8;
    }
L_08A815A8:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A815B8;
    }
    goto L_08A815B0;
L_08A815B0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A815B4;
L_08A815B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A815B8;
L_08A815B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A815C4u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A815C4u) goto L_08A815C4;
    return;
L_08A815C4:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
    ctx.set_gpr(2, 16576u << 16u);
    goto L_08A815D8;
L_08A815D8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A815F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A815F0u) goto L_08A815F0;
    return;
L_08A815F0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A815FCu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A815FCu) goto L_08A815FC;
    return;
L_08A815FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A81614u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A81614u) goto L_08A81614;
    return;
L_08A81614:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81620u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A81620u) goto L_08A81620;
    return;
L_08A81620:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A81638u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A81638u) goto L_08A81638;
    return;
L_08A81638:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81644u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A81644u) goto L_08A81644;
    return;
L_08A81644:
    ctx.set_gpr(31, 0x08A8164Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8164Cu) goto L_08A8164C;
    return;
L_08A8164C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81658u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 462u, 0x08A85A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81658u) goto L_08A81658;
    return;
L_08A81658:
    ctx.set_gpr(31, 0x08A81660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A81660u) goto L_08A81660;
    return;
L_08A81660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8166Cu);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 535u, 0x0884A0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8166Cu) goto L_08A8166C;
    return;
L_08A8166C:
    ctx.set_gpr(31, 0x08A81674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A81674u) goto L_08A81674;
    return;
L_08A81674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A81680u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 461u, 0x08A85A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81680u) goto L_08A81680;
    return;
L_08A81680:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A81694u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A81694u) goto L_08A81694;
    return;
L_08A81694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    goto L_08A816A0;
L_08A816A0:
    ctx.set_gpr(31, 0x08A816A8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A816A8u) goto L_08A816A8;
    return;
L_08A816A8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A816B0;
L_08A816B0:
    ctx.set_gpr(31, 0x08A816B8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 460u, 0x08A85A08u>(ctx, &aot_mem) && ctx.pc == 0x08A816B8u) goto L_08A816B8;
    return;
L_08A816B8:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(18784), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A816B0;
    }
    goto L_08A816D0;
L_08A816D0:
    ctx.set_gpr(31, 0x08A816D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A816D8u) goto L_08A816D8;
    return;
L_08A816D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A816ECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A816ECu) goto L_08A816EC;
    return;
L_08A816EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A81708;
      }
      goto L_08A816FC;
    }
L_08A816FC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A8170C;
    }
    goto L_08A81704;
L_08A81704:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81708;
L_08A81708:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A8170C;
L_08A8170C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A8172Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A8172Cu) goto L_08A8172C;
    return;
L_08A8172C:
    ctx.set_gpr(31, 0x08A81734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81734u) goto L_08A81734;
    return;
L_08A81734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A81744u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32368)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A81744u) goto L_08A81744;
    return;
L_08A81744:
    ctx.set_gpr(31, 0x08A8174Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8174Cu) goto L_08A8174C;
    return;
L_08A8174C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8175Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32372)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8175Cu) goto L_08A8175C;
    return;
L_08A8175C:
    ctx.set_gpr(31, 0x08A81764u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81764u) goto L_08A81764;
    return;
L_08A81764:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(31, 0x08A81778u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81778u) goto L_08A81778;
    return;
L_08A81778:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A81784u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 75u, 0x08A88444u>(ctx, &aot_mem) && ctx.pc == 0x08A81784u) goto L_08A81784;
    return;
L_08A81784:
    ctx.set_gpr(31, 0x08A8178Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8178Cu) goto L_08A8178C;
    return;
L_08A8178C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x08A817A0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A817A0u) goto L_08A817A0;
    return;
L_08A817A0:
    ctx.set_gpr(31, 0x08A817A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A817A8u) goto L_08A817A8;
    return;
L_08A817A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A817BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A817BCu) goto L_08A817BC;
    return;
L_08A817BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A817E0;
      }
      goto L_08A817D4;
    }
L_08A817D4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A817E4;
    }
    goto L_08A817DC;
L_08A817DC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A817E0;
L_08A817E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A817E4;
L_08A817E4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A818A4;
      }
      goto L_08A817F4;
    }
L_08A817F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
      if (branch_taken) {
          goto L_08A81804;
      }
      goto L_08A817FC;
    }
L_08A817FC:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A81804;
L_08A81804:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A818A4;
      }
      goto L_08A81810;
    }
L_08A81810:
    ctx.set_gpr(31, 0x08A81818u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81818u) goto L_08A81818;
    return;
L_08A81818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81830u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81830u) goto L_08A81830;
    return;
L_08A81830:
    ctx.set_gpr(31, 0x08A81838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81838u) goto L_08A81838;
    return;
L_08A81838:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A81858u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81858u) goto L_08A81858;
    return;
L_08A81858:
    ctx.set_gpr(31, 0x08A81860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81860u) goto L_08A81860;
    return;
L_08A81860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A81888u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A81888u) goto L_08A81888;
    return;
L_08A81888:
    ctx.set_gpr(31, 0x08A81890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81890u) goto L_08A81890;
    return;
L_08A81890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A818A4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A818A4u) goto L_08A818A4;
    return;
L_08A818A4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A818F4;
      }
      goto L_08A818AC;
    }
L_08A818AC:
    ctx.set_gpr(31, 0x08A818B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A818B4u) goto L_08A818B4;
    return;
L_08A818B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A818D4u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A818D4u) goto L_08A818D4;
    return;
L_08A818D4:
    ctx.set_gpr(31, 0x08A818DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A818DCu) goto L_08A818DC;
    return;
L_08A818DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A818F4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A818F4u) goto L_08A818F4;
    return;
L_08A818F4:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 17042u << 16u);
        goto L_08A81980;
    }
    goto L_08A818FC;
L_08A818FC:
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.set_gpr(31, 0x08A81918u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81918u) goto L_08A81918;
    return;
L_08A81918:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17221u << 16u);
    ctx.set_gpr(7, 17046u << 16u);
    ctx.set_gpr(3, 16688u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A81978u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A81978u) goto L_08A81978;
    return;
L_08A81978:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
      if (branch_taken) {
          goto L_08A819FC;
      }
      goto L_08A81980;
    }
L_08A81980:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.set_gpr(31, 0x08A81998u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81998u) goto L_08A81998;
    return;
L_08A81998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17225u << 16u);
    ctx.set_gpr(7, 17046u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A819F8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A819F8u) goto L_08A819F8;
    return;
L_08A819F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    goto L_08A819FC;
L_08A819FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81A74;
      }
      goto L_08A81A10;
    }
L_08A81A10:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81A50;
      }
      goto L_08A81A20;
    }
L_08A81A20:
    ctx.set_gpr(31, 0x08A81A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81A28u) goto L_08A81A28;
    return;
L_08A81A28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A81A3Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81A3Cu) goto L_08A81A3C;
    return;
L_08A81A3C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(31, 0x08A81A48u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 442u, 0x08A91B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81A48u) goto L_08A81A48;
    return;
L_08A81A48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A81A94;
      }
      goto L_08A81A50;
    }
L_08A81A50:
    ctx.set_gpr(31, 0x08A81A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81A58u) goto L_08A81A58;
    return;
L_08A81A58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A81A6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81A6Cu) goto L_08A81A6C;
    return;
L_08A81A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81A90;
      }
      goto L_08A81A74;
    }
L_08A81A74:
    ctx.set_gpr(31, 0x08A81A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81A7Cu) goto L_08A81A7C;
    return;
L_08A81A7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A81A90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81A90u) goto L_08A81A90;
    return;
L_08A81A90:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A81A94;
L_08A81A94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
      if (branch_taken) {
          goto L_08A81AA4;
      }
      goto L_08A81A9C;
    }
L_08A81A9C:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A81AA4;
L_08A81AA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A81AB8;
      }
      goto L_08A81AB0;
    }
L_08A81AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81B34;
      }
      goto L_08A81AB8;
    }
L_08A81AB8:
    ctx.set_gpr(31, 0x08A81AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81AC0u) goto L_08A81AC0;
    return;
L_08A81AC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 3u);
      if (branch_taken) {
          goto L_08A81AD4;
      }
      goto L_08A81AC8;
    }
L_08A81AC8:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A81AD8;
    }
    goto L_08A81AD0;
L_08A81AD0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81AD4;
L_08A81AD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A81AD8;
L_08A81AD8:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 16688u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A81B0Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A81B0Cu) goto L_08A81B0C;
    return;
L_08A81B0C:
    ctx.set_gpr(31, 0x08A81B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81B14u) goto L_08A81B14;
    return;
L_08A81B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81B2Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81B2Cu) goto L_08A81B2C;
    return;
L_08A81B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A81BAC;
      }
      goto L_08A81B34;
    }
L_08A81B34:
    ctx.set_gpr(31, 0x08A81B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81B3Cu) goto L_08A81B3C;
    return;
L_08A81B3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 3u);
      if (branch_taken) {
          goto L_08A81B50;
      }
      goto L_08A81B44;
    }
L_08A81B44:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A81B54;
    }
    goto L_08A81B4C;
L_08A81B4C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81B50;
L_08A81B50:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A81B54;
L_08A81B54:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17208u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A81B88u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A81B88u) goto L_08A81B88;
    return;
L_08A81B88:
    ctx.set_gpr(31, 0x08A81B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81B90u) goto L_08A81B90;
    return;
L_08A81B90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81BA8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81BA8u) goto L_08A81BA8;
    return;
L_08A81BA8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A81BAC;
L_08A81BAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
      if (branch_taken) {
          goto L_08A81BBC;
      }
      goto L_08A81BB4;
    }
L_08A81BB4:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A81BBC;
L_08A81BBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A81BD0;
      }
      goto L_08A81BC8;
    }
L_08A81BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81C4C;
      }
      goto L_08A81BD0;
    }
L_08A81BD0:
    ctx.set_gpr(31, 0x08A81BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81BD8u) goto L_08A81BD8;
    return;
L_08A81BD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 3u);
      if (branch_taken) {
          goto L_08A81BEC;
      }
      goto L_08A81BE0;
    }
L_08A81BE0:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A81BF0;
    }
    goto L_08A81BE8;
L_08A81BE8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81BEC;
L_08A81BEC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A81BF0;
L_08A81BF0:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17220u << 16u);
    ctx.set_gpr(3, 16688u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A81C24u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A81C24u) goto L_08A81C24;
    return;
L_08A81C24:
    ctx.set_gpr(31, 0x08A81C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81C2Cu) goto L_08A81C2C;
    return;
L_08A81C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81C44u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81C44u) goto L_08A81C44;
    return;
L_08A81C44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A81CC4;
      }
      goto L_08A81C4C;
    }
L_08A81C4C:
    ctx.set_gpr(31, 0x08A81C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81C54u) goto L_08A81C54;
    return;
L_08A81C54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.set_gpr(3, ctx.gpr[16] & 3u);
      if (branch_taken) {
          goto L_08A81C68;
      }
      goto L_08A81C5C;
    }
L_08A81C5C:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A81C6C;
    }
    goto L_08A81C64;
L_08A81C64:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81C68;
L_08A81C68:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A81C6C;
L_08A81C6C:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A81CA0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A81CA0u) goto L_08A81CA0;
    return;
L_08A81CA0:
    ctx.set_gpr(31, 0x08A81CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81CA8u) goto L_08A81CA8;
    return;
L_08A81CA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81CC0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81CC0u) goto L_08A81CC0;
    return;
L_08A81CC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A81CC4;
L_08A81CC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A81CD4;
      }
      goto L_08A81CCC;
    }
L_08A81CCC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A81CD4;
L_08A81CD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A81CE8;
      }
      goto L_08A81CE0;
    }
L_08A81CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81D10;
      }
      goto L_08A81CE8;
    }
L_08A81CE8:
    ctx.set_gpr(31, 0x08A81CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81CF0u) goto L_08A81CF0;
    return;
L_08A81CF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81D08u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81D08u) goto L_08A81D08;
    return;
L_08A81D08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A81D34;
      }
      goto L_08A81D10;
    }
L_08A81D10:
    ctx.set_gpr(31, 0x08A81D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81D18u) goto L_08A81D18;
    return;
L_08A81D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81D30u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81D30u) goto L_08A81D30;
    return;
L_08A81D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A81D34;
L_08A81D34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A81D44;
      }
      goto L_08A81D3C;
    }
L_08A81D3C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A81D44;
L_08A81D44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A81D58;
      }
      goto L_08A81D50;
    }
L_08A81D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81D80;
      }
      goto L_08A81D58;
    }
L_08A81D58:
    ctx.set_gpr(31, 0x08A81D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81D60u) goto L_08A81D60;
    return;
L_08A81D60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81D78u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81D78u) goto L_08A81D78;
    return;
L_08A81D78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
      if (branch_taken) {
          goto L_08A81DA4;
      }
      goto L_08A81D80;
    }
L_08A81D80:
    ctx.set_gpr(31, 0x08A81D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81D88u) goto L_08A81D88;
    return;
L_08A81D88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A81DA0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A81DA0u) goto L_08A81DA0;
    return;
L_08A81DA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A81DA4;
L_08A81DA4:
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    goto L_08A81DAC;
L_08A81DAC:
    ctx.set_gpr(31, 0x08A81DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81DB4u) goto L_08A81DB4;
    return;
L_08A81DB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A81DC8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81DC8u) goto L_08A81DC8;
    return;
L_08A81DC8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A81DD8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 854u, 0x08A877A4u>(ctx, &aot_mem) && ctx.pc == 0x08A81DD8u) goto L_08A81DD8;
    return;
L_08A81DD8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81DAC;
      }
      goto L_08A81DE8;
    }
L_08A81DE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A81DF4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 495u, 0x08A85CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A81DF4u) goto L_08A81DF4;
    return;
L_08A81DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
        goto L_08A81F04;
    }
    goto L_08A81E00;
L_08A81E00:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81E34;
      }
      goto L_08A81E0C;
    }
L_08A81E0C:
    ctx.set_gpr(31, 0x08A81E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81E14u) goto L_08A81E14;
    return;
L_08A81E14:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A81E34u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81E34u) goto L_08A81E34;
    return;
L_08A81E34:
    ctx.set_gpr(31, 0x08A81E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81E3Cu) goto L_08A81E3C;
    return;
L_08A81E3C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A81E5Cu);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81E5Cu) goto L_08A81E5C;
    return;
L_08A81E5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A81E78;
      }
      goto L_08A81E6C;
    }
L_08A81E6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81E78;
      }
      goto L_08A81E74;
    }
L_08A81E74:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A81E78;
L_08A81E78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A81F00;
      }
      goto L_08A81E80;
    }
L_08A81E80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A81F00;
      }
      goto L_08A81E88;
    }
L_08A81E88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
      if (branch_taken) {
          goto L_08A81E98;
      }
      goto L_08A81E90;
    }
L_08A81E90:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A81E98;
L_08A81E98:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A81ED0;
    }
    goto L_08A81EA0;
L_08A81EA0:
    ctx.set_gpr(31, 0x08A81EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81EA8u) goto L_08A81EA8;
    return;
L_08A81EA8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A81EC8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81EC8u) goto L_08A81EC8;
    return;
L_08A81EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A81F00;
      }
      goto L_08A81ED0;
    }
L_08A81ED0:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A81F00;
      }
      goto L_08A81ED8;
    }
L_08A81ED8:
    ctx.set_gpr(31, 0x08A81EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A81EE0u) goto L_08A81EE0;
    return;
L_08A81EE0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A81F00u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A81F00u) goto L_08A81F00;
    return;
L_08A81F00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    goto L_08A81F04;
L_08A81F04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A81F34u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A81F34u) goto L_08A81F34;
    return;
L_08A81F34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
        goto L_08A81F88;
    }
    goto L_08A81F44;
L_08A81F44:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A81F5C;
      }
      goto L_08A81F50;
    }
L_08A81F50:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A81F60;
    }
    goto L_08A81F58;
L_08A81F58:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81F5C;
L_08A81F5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A81F60;
L_08A81F60:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A81F80u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A81F80u) goto L_08A81F80;
    return;
L_08A81F80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A81FC4;
      }
      goto L_08A81F88;
    }
L_08A81F88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A81F9C;
      }
      goto L_08A81F90;
    }
L_08A81F90:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A81FA0;
    }
    goto L_08A81F98;
L_08A81F98:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A81F9C;
L_08A81F9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A81FA0;
L_08A81FA0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A81FC0u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A81FC0u) goto L_08A81FC0;
    return;
L_08A81FC0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A81FC4;
L_08A81FC4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A81FD4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A81FD4u) goto L_08A81FD4;
    return;
L_08A81FD4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A81FE8u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08A81FE8u) goto L_08A81FE8;
    return;
L_08A81FE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    goto L_08A81FF4;
L_08A81FF4:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82000;
    }
L_08A82000:
    ctx.set_gpr(31, 0x08A82008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82008u) goto L_08A82008;
    return;
L_08A82008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82014u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A82014u) goto L_08A82014;
    return;
L_08A82014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8206C;
      }
      goto L_08A8201C;
    }
L_08A8201C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 24 ? 1u : 0u);
        goto L_08A82040;
    }
    goto L_08A82034;
L_08A82034:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82040;
    }
L_08A82040:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A82054;
    }
    goto L_08A82048;
L_08A82048:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A82054;
L_08A82054:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82064;
      }
      goto L_08A82060;
    }
L_08A82060:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82064;
L_08A82064:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A8206C;
    }
L_08A8206C:
    ctx.set_gpr(31, 0x08A82074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82074u) goto L_08A82074;
    return;
L_08A82074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82080u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A82080u) goto L_08A82080;
    return;
L_08A82080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A820DC;
      }
      goto L_08A82088;
    }
L_08A82088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
        goto L_08A820C8;
    }
    goto L_08A820A0;
L_08A820A0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A820B8;
      }
      goto L_08A820AC;
    }
L_08A820AC:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
        goto L_08A820BC;
    }
    goto L_08A820B4;
L_08A820B4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A820B8;
L_08A820B8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
    goto L_08A820BC;
L_08A820BC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A820C8;
    }
L_08A820C8:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A820D4;
      }
      goto L_08A820D0;
    }
L_08A820D0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_08A820D4;
L_08A820D4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A820DC;
    }
L_08A820DC:
    ctx.set_gpr(31, 0x08A820E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A820E4u) goto L_08A820E4;
    return;
L_08A820E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A820F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A820F0u) goto L_08A820F0;
    return;
L_08A820F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82190;
      }
      goto L_08A820F8;
    }
L_08A820F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A82E94;
    }
    goto L_08A82108;
L_08A82108:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
        goto L_08A82168;
    }
    goto L_08A82114;
L_08A82114:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A8212C;
      }
      goto L_08A82120;
    }
L_08A82120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8212C;
      }
      goto L_08A82128;
    }
L_08A82128:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A8212C;
L_08A8212C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A8214C;
    }
    goto L_08A82134;
L_08A82134:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A8214C;
    }
L_08A8214C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82154;
    }
L_08A82154:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82168;
    }
L_08A82168:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82170;
    }
L_08A82170:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A8217C;
    }
L_08A8217C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82190;
    }
L_08A82190:
    ctx.set_gpr(31, 0x08A82198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82198u) goto L_08A82198;
    return;
L_08A82198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A821A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A821A4u) goto L_08A821A4;
    return;
L_08A821A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8224C;
      }
      goto L_08A821AC;
    }
L_08A821AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A821BC;
    }
L_08A821BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
        goto L_08A82224;
    }
    goto L_08A821C8;
L_08A821C8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A821E0;
      }
      goto L_08A821D4;
    }
L_08A821D4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08A821E4;
    }
    goto L_08A821DC;
L_08A821DC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A821E0;
L_08A821E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08A821E4;
L_08A821E4:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82204;
    }
    goto L_08A821EC;
L_08A821EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82204;
    }
L_08A82204:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 196 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82210;
    }
L_08A82210:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82224;
    }
L_08A82224:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A8222C;
    }
L_08A8222C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82238;
    }
L_08A82238:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18196), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A8224C;
    }
L_08A8224C:
    ctx.set_gpr(31, 0x08A82254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82254u) goto L_08A82254;
    return;
L_08A82254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82260u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A82260u) goto L_08A82260;
    return;
L_08A82260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A822CC;
      }
      goto L_08A82268;
    }
L_08A82268:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), 0u);
        goto L_08A82290;
    }
    goto L_08A82278;
L_08A82278:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82290;
    }
L_08A82290:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A822A8;
L_08A822A8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A822B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 854u, 0x08A877A4u>(ctx, &aot_mem) && ctx.pc == 0x08A822B4u) goto L_08A822B4;
    return;
L_08A822B4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A822A8;
    }
    goto L_08A822C4;
L_08A822C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A822CC;
    }
L_08A822CC:
    ctx.set_gpr(31, 0x08A822D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A822D4u) goto L_08A822D4;
    return;
L_08A822D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A822E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A822E0u) goto L_08A822E0;
    return;
L_08A822E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82350;
      }
      goto L_08A822E8;
    }
L_08A822E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 193 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(196));
        goto L_08A82310;
    }
    goto L_08A822F8;
L_08A822F8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82310;
    }
L_08A82310:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A8232C;
L_08A8232C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A82338u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 854u, 0x08A877A4u>(ctx, &aot_mem) && ctx.pc == 0x08A82338u) goto L_08A82338;
    return;
L_08A82338:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A8232C;
    }
    goto L_08A82348;
L_08A82348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82350;
    }
L_08A82350:
    ctx.set_gpr(31, 0x08A82358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82358u) goto L_08A82358;
    return;
L_08A82358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82364u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A82364u) goto L_08A82364;
    return;
L_08A82364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82648;
      }
      goto L_08A8236C;
    }
L_08A8236C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82378;
    }
L_08A82378:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82390;
      }
      goto L_08A82384;
    }
L_08A82384:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82394;
    }
    goto L_08A8238C;
L_08A8238C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82390;
L_08A82390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82394;
L_08A82394:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A823A0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A823A0u) goto L_08A823A0;
    return;
L_08A823A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A823B4;
      }
      goto L_08A823AC;
    }
L_08A823AC:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A823B4;
L_08A823B4:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
        goto L_08A8261C;
    }
    goto L_08A823C0;
L_08A823C0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26820));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A823DC:
    ctx.set_gpr(31, 0x08A823E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A823E4u) goto L_08A823E4;
    return;
L_08A823E4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18302)));
        goto L_08A823F8;
    }
    goto L_08A823EC;
L_08A823EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A823F8;
    }
L_08A823F8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A82424;
    }
    goto L_08A82400;
L_08A82400:
    ctx.set_gpr(31, 0x08A82408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82408u) goto L_08A82408;
    return;
L_08A82408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8241Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8241Cu) goto L_08A8241C;
    return;
L_08A8241C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A82424;
    }
L_08A82424:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A8242C;
    }
L_08A8242C:
    ctx.set_gpr(31, 0x08A82434u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82434u) goto L_08A82434;
    return;
L_08A82434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82448;
      }
      goto L_08A8243C;
    }
L_08A8243C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A82448;
    }
L_08A82448:
    ctx.set_gpr(31, 0x08A82450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82450u) goto L_08A82450;
    return;
L_08A82450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82464u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82464u) goto L_08A82464;
    return;
L_08A82464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A8246C;
    }
L_08A8246C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A82478;
    }
L_08A82478:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82494;
      }
      goto L_08A82488;
    }
L_08A82488:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82498;
    }
    goto L_08A82490;
L_08A82490:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82494;
L_08A82494:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82498;
L_08A82498:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A824A4u);
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 453u, 0x08A91BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A824A4u) goto L_08A824A4;
    return;
L_08A824A4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A824D8;
      }
      goto L_08A824B4;
    }
L_08A824B4:
    ctx.set_gpr(31, 0x08A824BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A824BCu) goto L_08A824BC;
    return;
L_08A824BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A824D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A824D0u) goto L_08A824D0;
    return;
L_08A824D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A824D8;
    }
L_08A824D8:
    ctx.set_gpr(31, 0x08A824E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A824E0u) goto L_08A824E0;
    return;
L_08A824E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A824F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A824F4u) goto L_08A824F4;
    return;
L_08A824F4:
    ctx.set_gpr(31, 0x08A824FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A824FCu) goto L_08A824FC;
    return;
L_08A824FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82508u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A82508u) goto L_08A82508;
    return;
L_08A82508:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 441u, 0x08A85880u>(ctx, &aot_mem); return;
      }
      goto L_08A82514;
    }
L_08A82514:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A82578;
      }
      goto L_08A82520;
    }
L_08A82520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82538;
      }
      goto L_08A8252C;
    }
L_08A8252C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A8253C;
    }
    goto L_08A82534;
L_08A82534:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82538;
L_08A82538:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A8253C;
L_08A8253C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A82548u);
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A82548u) goto L_08A82548;
    return;
L_08A82548:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82578;
      }
      goto L_08A8255C;
    }
L_08A8255C:
    ctx.set_gpr(31, 0x08A82564u);
    ctx.set_gpr(20, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82564u) goto L_08A82564;
    return;
L_08A82564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82578u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82578u) goto L_08A82578;
    return;
L_08A82578:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A82580;
    }
L_08A82580:
    ctx.set_gpr(31, 0x08A82588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82588u) goto L_08A82588;
    return;
L_08A82588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8259Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8259Cu) goto L_08A8259C;
    return;
L_08A8259C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A825B8;
      }
      goto L_08A825AC;
    }
L_08A825AC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A825BC;
    }
    goto L_08A825B4;
L_08A825B4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    goto L_08A825B8;
L_08A825B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A825BC;
L_08A825BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18204), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82618;
      }
      goto L_08A825D4;
    }
L_08A825D4:
    ctx.set_gpr(31, 0x08A825DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A825DCu) goto L_08A825DC;
    return;
L_08A825DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A825F0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A825F0u) goto L_08A825F0;
    return;
L_08A825F0:
    ctx.set_gpr(31, 0x08A825F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A825F8u) goto L_08A825F8;
    return;
L_08A825F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82604u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A82604u) goto L_08A82604;
    return;
L_08A82604:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 441u, 0x08A85880u>(ctx, &aot_mem); return;
      }
      goto L_08A82610;
    }
L_08A82610:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    goto L_08A82618;
L_08A82618:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18136)));
    goto L_08A8261C;
L_08A8261C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82624;
    }
L_08A82624:
    ctx.set_gpr(31, 0x08A8262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8262Cu) goto L_08A8262C;
    return;
L_08A8262C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82640u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82640u) goto L_08A82640;
    return;
L_08A82640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82648;
    }
L_08A82648:
    ctx.set_gpr(31, 0x08A82650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82650u) goto L_08A82650;
    return;
L_08A82650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8265Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8265Cu) goto L_08A8265C;
    return;
L_08A8265C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82DA0;
      }
      goto L_08A82664;
    }
L_08A82664:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(12));
        goto L_08A83684;
    }
    goto L_08A82670;
L_08A82670:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A82680;
      }
      goto L_08A82678;
    }
L_08A82678:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A82680;
L_08A82680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82688;
    }
L_08A82688:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82694;
    }
L_08A82694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A826B8;
      }
      goto L_08A826AC;
    }
L_08A826AC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A826BC;
    }
    goto L_08A826B4;
L_08A826B4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A826B8;
L_08A826B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A826BC;
L_08A826BC:
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[5]);
    ctx.set_gpr(31, 0x08A826CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A826CCu) goto L_08A826CC;
    return;
L_08A826CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18448)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A8272C;
    }
    goto L_08A826D8;
L_08A826D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18772)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A826F8;
      }
      goto L_08A826EC;
    }
L_08A826EC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A826FC;
    }
    goto L_08A826F4;
L_08A826F4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A826F8;
L_08A826F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A826FC;
L_08A826FC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A82728;
      }
      goto L_08A82708;
    }
L_08A82708:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18776)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
      if (branch_taken) {
          goto L_08A8271C;
      }
      goto L_08A82714;
    }
L_08A82714:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A8271C;
L_08A8271C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A82728;
      }
      goto L_08A82724;
    }
L_08A82724:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    goto L_08A82728;
L_08A82728:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A8272C;
L_08A8272C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A8273C;
      }
      goto L_08A82734;
    }
L_08A82734:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A8273C;
L_08A8273C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A82BB4;
    }
    goto L_08A82748;
L_08A82748:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A8298C;
    }
    goto L_08A82754;
L_08A82754:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A82764;
    }
    goto L_08A8275C;
L_08A8275C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A82D5C;
      }
      goto L_08A82764;
    }
L_08A82764:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x08A82770u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82770u) goto L_08A82770;
    return;
L_08A82770:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A8277Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8277Cu) goto L_08A8277C;
    return;
L_08A8277C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8291C;
      }
      goto L_08A82784;
    }
L_08A82784:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A82788;
L_08A82788:
    ctx.set_gpr(31, 0x08A82790u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A82790u) goto L_08A82790;
    return;
L_08A82790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A827A8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08A827A8u) goto L_08A827A8;
    return;
L_08A827A8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A828FC;
    }
    goto L_08A827B8;
L_08A827B8:
    ctx.set_gpr(31, 0x08A827C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A827C0u) goto L_08A827C0;
    return;
L_08A827C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A827F0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A827F0u) goto L_08A827F0;
    return;
L_08A827F0:
    ctx.set_gpr(31, 0x08A827F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A827F8u) goto L_08A827F8;
    return;
L_08A827F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82808u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82808u) goto L_08A82808;
    return;
L_08A82808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82814u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82814u) goto L_08A82814;
    return;
L_08A82814:
    ctx.set_gpr(31, 0x08A8281Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8281Cu) goto L_08A8281C;
    return;
L_08A8281C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8282Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8282Cu) goto L_08A8282C;
    return;
L_08A8282C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24600));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8284Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8284Cu) goto L_08A8284C;
    return;
L_08A8284C:
    ctx.set_gpr(31, 0x08A82854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82854u) goto L_08A82854;
    return;
L_08A82854:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82864u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82864u) goto L_08A82864;
    return;
L_08A82864:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24552));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82884u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A82884u) goto L_08A82884;
    return;
L_08A82884:
    ctx.set_gpr(31, 0x08A8288Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8288Cu) goto L_08A8288C;
    return;
L_08A8288C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8289Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A8289Cu) goto L_08A8289C;
    return;
L_08A8289C:
    ctx.set_gpr(31, 0x08A828A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A828A4u) goto L_08A828A4;
    return;
L_08A828A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A828B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A828B0u) goto L_08A828B0;
    return;
L_08A828B0:
    ctx.set_gpr(31, 0x08A828B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A828B8u) goto L_08A828B8;
    return;
L_08A828B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A828CCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A828CCu) goto L_08A828CC;
    return;
L_08A828CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A828E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A828E8u) goto L_08A828E8;
    return;
L_08A828E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A828F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A828F4u) goto L_08A828F4;
    return;
L_08A828F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A828FC;
    }
L_08A828FC:
    ctx.set_gpr(31, 0x08A82904u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82904u) goto L_08A82904;
    return;
L_08A82904:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A82910u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A82910u) goto L_08A82910;
    return;
L_08A82910:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A82788;
    }
    goto L_08A8291C;
L_08A8291C:
    ctx.set_gpr(31, 0x08A82924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82924u) goto L_08A82924;
    return;
L_08A82924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82938u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82938u) goto L_08A82938;
    return;
L_08A82938:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A8294Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8294Cu) goto L_08A8294C;
    return;
L_08A8294C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82964;
      }
      goto L_08A82958;
    }
L_08A82958:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82968;
    }
    goto L_08A82960;
L_08A82960:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82964;
L_08A82964:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82968;
L_08A82968:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82978u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A82978u) goto L_08A82978;
    return;
L_08A82978:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82984u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82984u) goto L_08A82984;
    return;
L_08A82984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A8298C;
    }
L_08A8298C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(31, 0x08A82998u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82998u) goto L_08A82998;
    return;
L_08A82998:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A829A4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A829A4u) goto L_08A829A4;
    return;
L_08A829A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A82B44;
      }
      goto L_08A829AC;
    }
L_08A829AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A829B0;
L_08A829B0:
    ctx.set_gpr(31, 0x08A829B8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A829B8u) goto L_08A829B8;
    return;
L_08A829B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08A829D0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08A829D0u) goto L_08A829D0;
    return;
L_08A829D0:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A82B24;
    }
    goto L_08A829E0;
L_08A829E0:
    ctx.set_gpr(31, 0x08A829E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A829E8u) goto L_08A829E8;
    return;
L_08A829E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A82A18u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A82A18u) goto L_08A82A18;
    return;
L_08A82A18:
    ctx.set_gpr(31, 0x08A82A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82A20u) goto L_08A82A20;
    return;
L_08A82A20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82A30u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82A30u) goto L_08A82A30;
    return;
L_08A82A30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82A3Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82A3Cu) goto L_08A82A3C;
    return;
L_08A82A3C:
    ctx.set_gpr(31, 0x08A82A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82A44u) goto L_08A82A44;
    return;
L_08A82A44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82A54u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82A54u) goto L_08A82A54;
    return;
L_08A82A54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24600));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82A74u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A82A74u) goto L_08A82A74;
    return;
L_08A82A74:
    ctx.set_gpr(31, 0x08A82A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82A7Cu) goto L_08A82A7C;
    return;
L_08A82A7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82A8Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82A8Cu) goto L_08A82A8C;
    return;
L_08A82A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24552));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82AACu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A82AACu) goto L_08A82AAC;
    return;
L_08A82AAC:
    ctx.set_gpr(31, 0x08A82AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82AB4u) goto L_08A82AB4;
    return;
L_08A82AB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82AC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A82AC4u) goto L_08A82AC4;
    return;
L_08A82AC4:
    ctx.set_gpr(31, 0x08A82ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82ACCu) goto L_08A82ACC;
    return;
L_08A82ACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82AD8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A82AD8u) goto L_08A82AD8;
    return;
L_08A82AD8:
    ctx.set_gpr(31, 0x08A82AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82AE0u) goto L_08A82AE0;
    return;
L_08A82AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82AF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82AF4u) goto L_08A82AF4;
    return;
L_08A82AF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A82B10u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82B10u) goto L_08A82B10;
    return;
L_08A82B10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82B1Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82B1Cu) goto L_08A82B1C;
    return;
L_08A82B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82B24;
    }
L_08A82B24:
    ctx.set_gpr(31, 0x08A82B2Cu);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82B2Cu) goto L_08A82B2C;
    return;
L_08A82B2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A82B38u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A82B38u) goto L_08A82B38;
    return;
L_08A82B38:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A829B0;
    }
    goto L_08A82B44;
L_08A82B44:
    ctx.set_gpr(31, 0x08A82B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82B4Cu) goto L_08A82B4C;
    return;
L_08A82B4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82B60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82B60u) goto L_08A82B60;
    return;
L_08A82B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A82B74u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82B74u) goto L_08A82B74;
    return;
L_08A82B74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82B8C;
      }
      goto L_08A82B80;
    }
L_08A82B80:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82B90;
    }
    goto L_08A82B88;
L_08A82B88:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82B8C;
L_08A82B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82B90;
L_08A82B90:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82BA0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A82BA0u) goto L_08A82BA0;
    return;
L_08A82BA0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82BACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82BACu) goto L_08A82BAC;
    return;
L_08A82BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82BB4;
    }
L_08A82BB4:
    ctx.set_gpr(31, 0x08A82BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82BBCu) goto L_08A82BBC;
    return;
L_08A82BBC:
    ctx.set_gpr(5, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(5, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, 0x08A82BCCu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16328));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1269u, 0x08AEBD14u>(ctx, &aot_mem) && ctx.pc == 0x08A82BCCu) goto L_08A82BCC;
    return;
L_08A82BCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82D18;
      }
      goto L_08A82BD4;
    }
L_08A82BD4:
    ctx.set_gpr(31, 0x08A82BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82BDCu) goto L_08A82BDC;
    return;
L_08A82BDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A82C0Cu);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A82C0Cu) goto L_08A82C0C;
    return;
L_08A82C0C:
    ctx.set_gpr(31, 0x08A82C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82C14u) goto L_08A82C14;
    return;
L_08A82C14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82C24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82C24u) goto L_08A82C24;
    return;
L_08A82C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82C30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82C30u) goto L_08A82C30;
    return;
L_08A82C30:
    ctx.set_gpr(31, 0x08A82C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82C38u) goto L_08A82C38;
    return;
L_08A82C38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82C48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82C48u) goto L_08A82C48;
    return;
L_08A82C48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24516));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82C68u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A82C68u) goto L_08A82C68;
    return;
L_08A82C68:
    ctx.set_gpr(31, 0x08A82C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82C70u) goto L_08A82C70;
    return;
L_08A82C70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82C80u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82C80u) goto L_08A82C80;
    return;
L_08A82C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24744));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82CA0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A82CA0u) goto L_08A82CA0;
    return;
L_08A82CA0:
    ctx.set_gpr(31, 0x08A82CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82CA8u) goto L_08A82CA8;
    return;
L_08A82CA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A82CB8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A82CB8u) goto L_08A82CB8;
    return;
L_08A82CB8:
    ctx.set_gpr(31, 0x08A82CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A82CC0u) goto L_08A82CC0;
    return;
L_08A82CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82CCCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A82CCCu) goto L_08A82CCC;
    return;
L_08A82CCC:
    ctx.set_gpr(31, 0x08A82CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82CD4u) goto L_08A82CD4;
    return;
L_08A82CD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82CE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82CE8u) goto L_08A82CE8;
    return;
L_08A82CE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A82D04u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82D04u) goto L_08A82D04;
    return;
L_08A82D04:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82D10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D10u) goto L_08A82D10;
    return;
L_08A82D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82D18;
    }
L_08A82D18:
    ctx.set_gpr(31, 0x08A82D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D20u) goto L_08A82D20;
    return;
L_08A82D20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82D34u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D34u) goto L_08A82D34;
    return;
L_08A82D34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A82D48u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82D48u) goto L_08A82D48;
    return;
L_08A82D48:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82D54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D54u) goto L_08A82D54;
    return;
L_08A82D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82D5C;
    }
L_08A82D5C:
    ctx.set_gpr(31, 0x08A82D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D64u) goto L_08A82D64;
    return;
L_08A82D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82D78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D78u) goto L_08A82D78;
    return;
L_08A82D78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A82D8Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82D8Cu) goto L_08A82D8C;
    return;
L_08A82D8C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82D98u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 792u, 0x08A8714Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82D98u) goto L_08A82D98;
    return;
L_08A82D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82DA0;
    }
L_08A82DA0:
    ctx.set_gpr(31, 0x08A82DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82DA8u) goto L_08A82DA8;
    return;
L_08A82DA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82DB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A82DB4u) goto L_08A82DB4;
    return;
L_08A82DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E24;
      }
      goto L_08A82DBC;
    }
L_08A82DBC:
    ctx.set_gpr(31, 0x08A82DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82DC4u) goto L_08A82DC4;
    return;
L_08A82DC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82DD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82DD8u) goto L_08A82DD8;
    return;
L_08A82DD8:
    ctx.set_gpr(31, 0x08A82DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82DE0u) goto L_08A82DE0;
    return;
L_08A82DE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82DECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A82DECu) goto L_08A82DEC;
    return;
L_08A82DEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82E08;
      }
      goto L_08A82DFC;
    }
L_08A82DFC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82E0C;
    }
    goto L_08A82E04;
L_08A82E04:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82E08;
L_08A82E08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82E0C;
L_08A82E0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A82E18u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82E18u) goto L_08A82E18;
    return;
L_08A82E18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 441u, 0x08A85880u>(ctx, &aot_mem); return;
      }
      goto L_08A82E24;
    }
L_08A82E24:
    ctx.set_gpr(31, 0x08A82E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82E2Cu) goto L_08A82E2C;
    return;
L_08A82E2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82E38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A82E38u) goto L_08A82E38;
    return;
L_08A82E38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A82E90;
      }
      goto L_08A82E40;
    }
L_08A82E40:
    ctx.set_gpr(31, 0x08A82E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82E48u) goto L_08A82E48;
    return;
L_08A82E48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82E5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82E5Cu) goto L_08A82E5C;
    return;
L_08A82E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82E78;
      }
      goto L_08A82E6C;
    }
L_08A82E6C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82E7C;
    }
    goto L_08A82E74;
L_08A82E74:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82E78;
L_08A82E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82E7C;
L_08A82E7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A82E88u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A82E88u) goto L_08A82E88;
    return;
L_08A82E88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    goto L_08A82E90;
L_08A82E90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A82E94;
L_08A82E94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A82EA4;
      }
      goto L_08A82E9C;
    }
L_08A82E9C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A82EA4;
L_08A82EA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82EAC;
    }
L_08A82EAC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82EB8;
    }
L_08A82EB8:
    ctx.set_gpr(31, 0x08A82EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A82EC0u) goto L_08A82EC0;
    return;
L_08A82EC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A82ECCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A82ECCu) goto L_08A82ECC;
    return;
L_08A82ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A830B0;
      }
      goto L_08A82ED4;
    }
L_08A82ED4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82EE0;
    }
L_08A82EE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18448)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(8));
        goto L_08A82F64;
    }
    goto L_08A82EEC;
L_08A82EEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18772)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82F08;
      }
      goto L_08A82EFC;
    }
L_08A82EFC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82F0C;
    }
    goto L_08A82F04;
L_08A82F04:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82F08;
L_08A82F08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82F0C;
L_08A82F0C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A82F60;
      }
      goto L_08A82F18;
    }
L_08A82F18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18776)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
      if (branch_taken) {
          goto L_08A82F2C;
      }
      goto L_08A82F24;
    }
L_08A82F24:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A82F2C;
L_08A82F2C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A82F60;
      }
      goto L_08A82F34;
    }
L_08A82F34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A82F44u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82F44u) goto L_08A82F44;
    return;
L_08A82F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A82F58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A82F58u) goto L_08A82F58;
    return;
L_08A82F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A82F60;
    }
L_08A82F60:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    goto L_08A82F64;
L_08A82F64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82F78;
      }
      goto L_08A82F6C;
    }
L_08A82F6C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A82F7C;
    }
    goto L_08A82F74;
L_08A82F74:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82F78;
L_08A82F78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A82F7C;
L_08A82F7C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A82F98;
      }
      goto L_08A82F90;
    }
L_08A82F90:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A82F98;
L_08A82F98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18120)));
        goto L_08A82FB8;
    }
    goto L_08A82FA4;
L_08A82FA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18120)));
    ctx.set_gpr(31, 0x08A82FB0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 282u, 0x08A91268u>(ctx, &aot_mem) && ctx.pc == 0x08A82FB0u) goto L_08A82FB0;
    return;
L_08A82FB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A82FD8;
      }
      goto L_08A82FB8;
    }
L_08A82FB8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A82FC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 455u, 0x08A85998u>(ctx, &aot_mem) && ctx.pc == 0x08A82FC4u) goto L_08A82FC4;
    return;
L_08A82FC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18120)));
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08A82FD4u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08A82FD4u) goto L_08A82FD4;
    return;
L_08A82FD4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18388), ctx.gpr[2]);
    goto L_08A82FD8;
L_08A82FD8:
    if (ctx.gpr[17] == 0u) {
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), 0u);
        goto L_08A83070;
    }
    goto L_08A82FE0;
L_08A82FE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A82FFC;
      }
      goto L_08A82FF0;
    }
L_08A82FF0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83000;
    }
    goto L_08A82FF8;
L_08A82FF8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A82FFC;
L_08A82FFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83000;
L_08A83000:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18772), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A8301C;
      }
      goto L_08A83014;
    }
L_08A83014:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A8301C;
L_08A8301C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18776), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18448), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18456), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A83044;
      }
      goto L_08A8303C;
    }
L_08A8303C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83044;
L_08A83044:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18272), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18120)));
    ctx.set_gpr(31, 0x08A83054u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18452), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83054u) goto L_08A83054;
    return;
L_08A83054:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83068u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83068u) goto L_08A83068;
    return;
L_08A83068:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
      if (branch_taken) {
          goto L_08A83098;
      }
      goto L_08A83070;
    }
L_08A83070:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A83080u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18456), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83080u) goto L_08A83080;
    return;
L_08A83080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83094u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83094u) goto L_08A83094;
    return;
L_08A83094:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83098;
L_08A83098:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A830A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A830A8u) goto L_08A830A8;
    return;
L_08A830A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A830B0;
    }
L_08A830B0:
    ctx.set_gpr(31, 0x08A830B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A830B8u) goto L_08A830B8;
    return;
L_08A830B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A830C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A830C4u) goto L_08A830C4;
    return;
L_08A830C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A830CC;
    }
L_08A830CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A830D8;
    }
L_08A830D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18448)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08A8314C;
    }
    goto L_08A830E4;
L_08A830E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83148;
      }
      goto L_08A830F0;
    }
L_08A830F0:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08A8311C;
    }
    goto L_08A830F8;
L_08A830F8:
    ctx.set_gpr(31, 0x08A83100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83100u) goto L_08A83100;
    return;
L_08A83100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83114u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83114u) goto L_08A83114;
    return;
L_08A83114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A8311C;
    }
L_08A8311C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A83148;
      }
      goto L_08A83124;
    }
L_08A83124:
    ctx.set_gpr(31, 0x08A8312Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8312Cu) goto L_08A8312C;
    return;
L_08A8312C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83140u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83140u) goto L_08A83140;
    return;
L_08A83140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A83148;
    }
L_08A83148:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A8314C;
L_08A8314C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83664;
      }
      goto L_08A83154;
    }
L_08A83154:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18776)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08A831A0;
    }
    goto L_08A83164;
L_08A83164:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83178;
      }
      goto L_08A83170;
    }
L_08A83170:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A8319C;
      }
      goto L_08A83178;
    }
L_08A83178:
    ctx.set_gpr(31, 0x08A83180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83180u) goto L_08A83180;
    return;
L_08A83180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83194u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83194u) goto L_08A83194;
    return;
L_08A83194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A8319C;
    }
L_08A8319C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08A831A0;
L_08A831A0:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(8));
        goto L_08A831E8;
    }
    goto L_08A831A8;
L_08A831A8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A831C0;
      }
      goto L_08A831B4;
    }
L_08A831B4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A831E4;
      }
      goto L_08A831C0;
    }
L_08A831C0:
    ctx.set_gpr(31, 0x08A831C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A831C8u) goto L_08A831C8;
    return;
L_08A831C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A831DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A831DCu) goto L_08A831DC;
    return;
L_08A831DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A831E4;
    }
L_08A831E4:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_08A831E8;
L_08A831E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A831FC;
      }
      goto L_08A831F0;
    }
L_08A831F0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83200;
    }
    goto L_08A831F8;
L_08A831F8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A831FC;
L_08A831FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83200;
L_08A83200:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8320Cu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8320Cu) goto L_08A8320C;
    return;
L_08A8320C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A83220;
      }
      goto L_08A83218;
    }
L_08A83218:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83220;
L_08A83220:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18272), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A83238;
      }
      goto L_08A83230;
    }
L_08A83230:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83238;
L_08A83238:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83648;
    }
    goto L_08A83240;
L_08A83240:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A83500;
    }
    goto L_08A8324C;
L_08A8324C:
    ctx.set_gpr(31, 0x08A83254u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83254u) goto L_08A83254;
    return;
L_08A83254:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(21, ctx.gpr[21] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, 0x08A83268u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83268u) goto L_08A83268;
    return;
L_08A83268:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A83274u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A83274u) goto L_08A83274;
    return;
L_08A83274:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A832D4;
    }
    goto L_08A83280;
L_08A83280:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A83284;
L_08A83284:
    ctx.set_gpr(31, 0x08A8328Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8328Cu) goto L_08A8328C;
    return;
L_08A8328C:
    ctx.set_gpr(31, 0x08A83294u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 706u, 0x08A97638u>(ctx, &aot_mem) && ctx.pc == 0x08A83294u) goto L_08A83294;
    return;
L_08A83294:
    ctx.set_gpr(31, 0x08A8329Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 793u, 0x08A97E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8329Cu) goto L_08A8329C;
    return;
L_08A8329C:
    ctx.set_gpr(31, 0x08A832A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 154u, 0x08A9969Cu>(ctx, &aot_mem) && ctx.pc == 0x08A832A4u) goto L_08A832A4;
    return;
L_08A832A4:
    ctx.set_gpr(31, 0x08A832ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 615u, 0x08A96F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A832ACu) goto L_08A832AC;
    return;
L_08A832AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A832B8u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A832B8u) goto L_08A832B8;
    return;
L_08A832B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A832C4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A832C4u) goto L_08A832C4;
    return;
L_08A832C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A83284;
    }
    goto L_08A832D0;
L_08A832D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A832D4;
L_08A832D4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A832EC;
      }
      goto L_08A832E0;
    }
L_08A832E0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A832F0;
    }
    goto L_08A832E8;
L_08A832E8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A832EC;
L_08A832EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A832F0;
L_08A832F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A83300u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 404u, 0x08A95E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83300u) goto L_08A83300;
    return;
L_08A83300:
    ctx.set_gpr(31, 0x08A83308u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83308u) goto L_08A83308;
    return;
L_08A83308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83314u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83314u) goto L_08A83314;
    return;
L_08A83314:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83324u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83324u) goto L_08A83324;
    return;
L_08A83324:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83338u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A83338u) goto L_08A83338;
    return;
L_08A83338:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A83344u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A83344u) goto L_08A83344;
    return;
L_08A83344:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A83364;
      }
      goto L_08A83358;
    }
L_08A83358:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83368;
    }
    goto L_08A83360;
L_08A83360:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83364;
L_08A83364:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83368;
L_08A83368:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A83378u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 404u, 0x08A95E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83378u) goto L_08A83378;
    return;
L_08A83378:
    ctx.set_gpr(31, 0x08A83380u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83380u) goto L_08A83380;
    return;
L_08A83380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8338Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8338Cu) goto L_08A8338C;
    return;
L_08A8338C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8339Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8339Cu) goto L_08A8339C;
    return;
L_08A8339C:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A833B0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A833B0u) goto L_08A833B0;
    return;
L_08A833B0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A833BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A833BCu) goto L_08A833BC;
    return;
L_08A833BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A833DC;
      }
      goto L_08A833D0;
    }
L_08A833D0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A833E0;
    }
    goto L_08A833D8;
L_08A833D8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A833DC;
L_08A833DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A833E0;
L_08A833E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A833F0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 404u, 0x08A95E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A833F0u) goto L_08A833F0;
    return;
L_08A833F0:
    ctx.set_gpr(31, 0x08A833F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A833F8u) goto L_08A833F8;
    return;
L_08A833F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83404u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83404u) goto L_08A83404;
    return;
L_08A83404:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83414u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83414u) goto L_08A83414;
    return;
L_08A83414:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83428u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A83428u) goto L_08A83428;
    return;
L_08A83428:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A83434u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A83434u) goto L_08A83434;
    return;
L_08A83434:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A83454;
      }
      goto L_08A83448;
    }
L_08A83448:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83458;
    }
    goto L_08A83450;
L_08A83450:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83454;
L_08A83454:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83458;
L_08A83458:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83468u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 404u, 0x08A95E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83468u) goto L_08A83468;
    return;
L_08A83468:
    ctx.set_gpr(31, 0x08A83470u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83470u) goto L_08A83470;
    return;
L_08A83470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8347Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8347Cu) goto L_08A8347C;
    return;
L_08A8347C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8348Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8348Cu) goto L_08A8348C;
    return;
L_08A8348C:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A834A0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A834A0u) goto L_08A834A0;
    return;
L_08A834A0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A834ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A834ACu) goto L_08A834AC;
    return;
L_08A834AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A834DC;
      }
      goto L_08A834B8;
    }
L_08A834B8:
    ctx.set_gpr(31, 0x08A834C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A834C0u) goto L_08A834C0;
    return;
L_08A834C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A834D4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A834D4u) goto L_08A834D4;
    return;
L_08A834D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83644;
      }
      goto L_08A834DC;
    }
L_08A834DC:
    ctx.set_gpr(31, 0x08A834E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A834E4u) goto L_08A834E4;
    return;
L_08A834E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A834F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A834F8u) goto L_08A834F8;
    return;
L_08A834F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83644;
      }
      goto L_08A83500;
    }
L_08A83500:
    ctx.set_gpr(31, 0x08A83508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83508u) goto L_08A83508;
    return;
L_08A83508:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(21, ctx.gpr[21] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, 0x08A8351Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8351Cu) goto L_08A8351C;
    return;
L_08A8351C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A83528u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A83528u) goto L_08A83528;
    return;
L_08A83528:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A83590;
    }
    goto L_08A83534;
L_08A83534:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A83538;
L_08A83538:
    ctx.set_gpr(31, 0x08A83540u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A83540u) goto L_08A83540;
    return;
L_08A83540:
    ctx.set_gpr(31, 0x08A83548u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08A83548u) goto L_08A83548;
    return;
L_08A83548:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A8356C;
    }
    goto L_08A83550;
L_08A83550:
    ctx.set_gpr(31, 0x08A83558u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83558u) goto L_08A83558;
    return;
L_08A83558:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A83568u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A83568u) goto L_08A83568;
    return;
L_08A83568:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A8356C;
L_08A8356C:
    ctx.set_gpr(31, 0x08A83574u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83574u) goto L_08A83574;
    return;
L_08A83574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A83580u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A83580u) goto L_08A83580;
    return;
L_08A83580:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A83538;
    }
    goto L_08A8358C;
L_08A8358C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A83590;
L_08A83590:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A835A8;
      }
      goto L_08A8359C;
    }
L_08A8359C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A835AC;
    }
    goto L_08A835A4;
L_08A835A4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A835A8;
L_08A835A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A835AC;
L_08A835AC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18388)));
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A835BCu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A835BCu) goto L_08A835BC;
    return;
L_08A835BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A835D8;
      }
      goto L_08A835CC;
    }
L_08A835CC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A835DC;
    }
    goto L_08A835D4;
L_08A835D4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A835D8;
L_08A835D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A835DC;
L_08A835DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A835ECu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 404u, 0x08A95E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A835ECu) goto L_08A835EC;
    return;
L_08A835EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A835FC;
    }
    goto L_08A835F8;
L_08A835F8:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18989), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A835FC;
L_08A835FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83628;
      }
      goto L_08A83604;
    }
L_08A83604:
    ctx.set_gpr(31, 0x08A8360Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8360Cu) goto L_08A8360C;
    return;
L_08A8360C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83620u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83620u) goto L_08A83620;
    return;
L_08A83620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83644;
      }
      goto L_08A83628;
    }
L_08A83628:
    ctx.set_gpr(31, 0x08A83630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83630u) goto L_08A83630;
    return;
L_08A83630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83644u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83644u) goto L_08A83644;
    return;
L_08A83644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83648;
L_08A83648:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A83658u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A83658u) goto L_08A83658;
    return;
L_08A83658:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A83680;
      }
      goto L_08A83664;
    }
L_08A83664:
    ctx.set_gpr(31, 0x08A8366Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8366Cu) goto L_08A8366C;
    return;
L_08A8366C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A83680u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83680u) goto L_08A83680;
    return;
L_08A83680:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(12));
    goto L_08A83684;
L_08A83684:
    ctx.set_gpr(31, 0x08A8368Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8368Cu) goto L_08A8368C;
    return;
L_08A8368C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8369Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 447u, 0x08A858ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8369Cu) goto L_08A8369C;
    return;
L_08A8369C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18277)));
        goto L_08A838E0;
    }
    goto L_08A836A4;
L_08A836A4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A83684;
      }
      goto L_08A836B4;
    }
L_08A836B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < -4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A837F4;
      }
      goto L_08A836C4;
    }
L_08A836C4:
    ctx.set_gpr(31, 0x08A836CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A836CCu) goto L_08A836CC;
    return;
L_08A836CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A836D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A836D8u) goto L_08A836D8;
    return;
L_08A836D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8375C;
      }
      goto L_08A836E0;
    }
L_08A836E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A83704;
    }
    goto L_08A836F0;
L_08A836F0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A83704;
L_08A83704:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A8371C;
      }
      goto L_08A83710;
    }
L_08A83710:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83720;
    }
    goto L_08A83718;
L_08A83718:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A8371C;
L_08A8371C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83720;
L_08A83720:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A83740u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A83740u) goto L_08A83740;
    return;
L_08A83740:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A83754u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A83754u) goto L_08A83754;
    return;
L_08A83754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A838DC;
      }
      goto L_08A8375C;
    }
L_08A8375C:
    ctx.set_gpr(31, 0x08A83764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A83764u) goto L_08A83764;
    return;
L_08A83764:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83770u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A83770u) goto L_08A83770;
    return;
L_08A83770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A838DC;
      }
      goto L_08A83778;
    }
L_08A83778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 193 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A8379C;
    }
    goto L_08A83788;
L_08A83788:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18200), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A8379C;
L_08A8379C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A837B4;
      }
      goto L_08A837A8;
    }
L_08A837A8:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A837B8;
    }
    goto L_08A837B0;
L_08A837B0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A837B4;
L_08A837B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A837B8;
L_08A837B8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(70));
    ctx.set_gpr(31, 0x08A837D8u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08A837D8u) goto L_08A837D8;
    return;
L_08A837D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18120), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(31, 0x08A837ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A837ECu) goto L_08A837EC;
    return;
L_08A837EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A838DC;
      }
      goto L_08A837F4;
    }
L_08A837F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A838DC;
      }
      goto L_08A837FC;
    }
L_08A837FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A8381C;
      }
      goto L_08A83810;
    }
L_08A83810:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
        goto L_08A83820;
    }
    goto L_08A83818;
L_08A83818:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A8381C;
L_08A8381C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    goto L_08A83820;
L_08A83820:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(18784))))));
    ctx.set_gpr(31, 0x08A8382Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18780), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8382Cu) goto L_08A8382C;
    return;
L_08A8382C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A83838u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A83838u) goto L_08A83838;
    return;
L_08A83838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A838DC;
      }
      goto L_08A83840;
    }
L_08A83840:
    ctx.set_gpr(31, 0x08A83848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83848u) goto L_08A83848;
    return;
L_08A83848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8385Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8385Cu) goto L_08A8385C;
    return;
L_08A8385C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18277), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18780)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08A83878;
    }
    goto L_08A83874;
L_08A83874:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A83878;
L_08A83878:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18780), ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 3u);
      if (branch_taken) {
          goto L_08A838A4;
      }
      goto L_08A83898;
    }
L_08A83898:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
        goto L_08A838A8;
    }
    goto L_08A838A0;
L_08A838A0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08A838A4;
L_08A838A4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    goto L_08A838A8;
L_08A838A8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(18784), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A838C8;
      }
      goto L_08A838BC;
    }
L_08A838BC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A838CC;
    }
    goto L_08A838C4;
L_08A838C4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A838C8;
L_08A838C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A838CC;
L_08A838CC:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18780)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A838DCu);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 446u, 0x08A858D8u>(ctx, &aot_mem) && ctx.pc == 0x08A838DCu) goto L_08A838DC;
    return;
L_08A838DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(18277)));
    goto L_08A838E0;
L_08A838E0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 127u, 0x08A8484Cu>(ctx, &aot_mem); return;
    }
    goto L_08A838E8;
L_08A838E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A8390C;
      }
      goto L_08A83900;
    }
L_08A83900:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
        goto L_08A83910;
    }
    goto L_08A83908;
L_08A83908:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A8390C;
L_08A8390C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    goto L_08A83910;
L_08A83910:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A839D0;
      }
      goto L_08A83920;
    }
L_08A83920:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
      if (branch_taken) {
          goto L_08A83930;
      }
      goto L_08A83928;
    }
L_08A83928:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83930;
L_08A83930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A839D0;
      }
      goto L_08A8393C;
    }
L_08A8393C:
    ctx.set_gpr(31, 0x08A83944u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83944u) goto L_08A83944;
    return;
L_08A83944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8395Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8395Cu) goto L_08A8395C;
    return;
L_08A8395C:
    ctx.set_gpr(31, 0x08A83964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83964u) goto L_08A83964;
    return;
L_08A83964:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A83984u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83984u) goto L_08A83984;
    return;
L_08A83984:
    ctx.set_gpr(31, 0x08A8398Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8398Cu) goto L_08A8398C;
    return;
L_08A8398C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A839B4u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A839B4u) goto L_08A839B4;
    return;
L_08A839B4:
    ctx.set_gpr(31, 0x08A839BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A839BCu) goto L_08A839BC;
    return;
L_08A839BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A839D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A839D0u) goto L_08A839D0;
    return;
L_08A839D0:
    if (ctx.gpr[21] != 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
        goto L_08A83A24;
    }
    goto L_08A839D8;
L_08A839D8:
    ctx.set_gpr(31, 0x08A839E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A839E0u) goto L_08A839E0;
    return;
L_08A839E0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A83A00u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83A00u) goto L_08A83A00;
    return;
L_08A83A00:
    ctx.set_gpr(31, 0x08A83A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83A08u) goto L_08A83A08;
    return;
L_08A83A08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A83A20u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A83A20u) goto L_08A83A20;
    return;
L_08A83A20:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    goto L_08A83A24;
L_08A83A24:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 17042u << 16u);
        goto L_08A83C10;
    }
    goto L_08A83A38;
L_08A83A38:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 17042u << 16u);
        goto L_08A83B7C;
    }
    goto L_08A83A48;
L_08A83A48:
    ctx.set_gpr(31, 0x08A83A50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83A50u) goto L_08A83A50;
    return;
L_08A83A50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A83A64u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83A64u) goto L_08A83A64;
    return;
L_08A83A64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(31, 0x08A83A70u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 442u, 0x08A91B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83A70u) goto L_08A83A70;
    return;
L_08A83A70:
    if (ctx.gpr[21] == 0u) {
    ctx.set_gpr(2, 17042u << 16u);
        goto L_08A83AFC;
    }
    goto L_08A83A78;
L_08A83A78:
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.set_gpr(31, 0x08A83A94u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83A94u) goto L_08A83A94;
    return;
L_08A83A94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17221u << 16u);
    ctx.set_gpr(7, 17046u << 16u);
    ctx.set_gpr(3, 16688u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83AF4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83AF4u) goto L_08A83AF4;
    return;
L_08A83AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A83CA0;
      }
      goto L_08A83AFC;
    }
L_08A83AFC:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.set_gpr(31, 0x08A83B14u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83B14u) goto L_08A83B14;
    return;
L_08A83B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18204)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18200)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 17225u << 16u);
    ctx.set_gpr(7, 17046u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83B74u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83B74u) goto L_08A83B74;
    return;
L_08A83B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83C9C;
      }
      goto L_08A83B7C;
    }
L_08A83B7C:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.set_gpr(31, 0x08A83B94u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83B94u) goto L_08A83B94;
    return;
L_08A83B94:
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(7, 17046u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83BECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83BECu) goto L_08A83BEC;
    return;
L_08A83BEC:
    ctx.set_gpr(31, 0x08A83BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83BF4u) goto L_08A83BF4;
    return;
L_08A83BF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A83C08u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83C08u) goto L_08A83C08;
    return;
L_08A83C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83C9C;
      }
      goto L_08A83C10;
    }
L_08A83C10:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.set_gpr(31, 0x08A83C28u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83C28u) goto L_08A83C28;
    return;
L_08A83C28:
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(7, 17046u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83C80u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83C80u) goto L_08A83C80;
    return;
L_08A83C80:
    ctx.set_gpr(31, 0x08A83C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83C88u) goto L_08A83C88;
    return;
L_08A83C88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08A83C9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A83C9Cu) goto L_08A83C9C;
    return;
L_08A83C9C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A83CA0;
L_08A83CA0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A83D84;
    }
    goto L_08A83CAC;
L_08A83CAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A83D80;
      }
      goto L_08A83CB4;
    }
L_08A83CB4:
    ctx.set_gpr(31, 0x08A83CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83CBCu) goto L_08A83CBC;
    return;
L_08A83CBC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A83CD4;
      }
      goto L_08A83CC8;
    }
L_08A83CC8:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A83CD8;
    }
    goto L_08A83CD0;
L_08A83CD0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83CD4;
L_08A83CD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A83CD8;
L_08A83CD8:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 17042u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17223u << 16u);
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 17046u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A83D18u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83D18u) goto L_08A83D18;
    return;
L_08A83D18:
    ctx.set_gpr(31, 0x08A83D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83D20u) goto L_08A83D20;
    return;
L_08A83D20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A83D3C;
      }
      goto L_08A83D30;
    }
L_08A83D30:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A83D40;
    }
    goto L_08A83D38;
L_08A83D38:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83D3C;
L_08A83D3C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A83D40;
L_08A83D40:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 17042u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17208u << 16u);
    ctx.set_gpr(7, 17026u << 16u);
    ctx.set_gpr(3, 17046u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A83D80u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83D80u) goto L_08A83D80;
    return;
L_08A83D80:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A83D84;
L_08A83D84:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < -4 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
        goto L_08A83FD0;
    }
    goto L_08A83D90;
L_08A83D90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
      if (branch_taken) {
          goto L_08A83DA0;
      }
      goto L_08A83D98;
    }
L_08A83D98:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83DA0;
L_08A83DA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A83DB4;
      }
      goto L_08A83DAC;
    }
L_08A83DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83E34;
      }
      goto L_08A83DB4;
    }
L_08A83DB4:
    ctx.set_gpr(31, 0x08A83DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83DBCu) goto L_08A83DBC;
    return;
L_08A83DBC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A83DD4;
      }
      goto L_08A83DC8;
    }
L_08A83DC8:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A83DD8;
    }
    goto L_08A83DD0;
L_08A83DD0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83DD4;
L_08A83DD4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A83DD8;
L_08A83DD8:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17204u << 16u);
    ctx.set_gpr(3, 16688u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83E0Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83E0Cu) goto L_08A83E0C;
    return;
L_08A83E0C:
    ctx.set_gpr(31, 0x08A83E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83E14u) goto L_08A83E14;
    return;
L_08A83E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A83E2Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A83E2Cu) goto L_08A83E2C;
    return;
L_08A83E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
      if (branch_taken) {
          goto L_08A83EB0;
      }
      goto L_08A83E34;
    }
L_08A83E34:
    ctx.set_gpr(31, 0x08A83E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83E3Cu) goto L_08A83E3C;
    return;
L_08A83E3C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A83E54;
      }
      goto L_08A83E48;
    }
L_08A83E48:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A83E58;
    }
    goto L_08A83E50;
L_08A83E50:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83E54;
L_08A83E54:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A83E58;
L_08A83E58:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17208u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83E8Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83E8Cu) goto L_08A83E8C;
    return;
L_08A83E8C:
    ctx.set_gpr(31, 0x08A83E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83E94u) goto L_08A83E94;
    return;
L_08A83E94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A83EACu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A83EACu) goto L_08A83EAC;
    return;
L_08A83EAC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A83EB0;
L_08A83EB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
      if (branch_taken) {
          goto L_08A83EC0;
      }
      goto L_08A83EB8;
    }
L_08A83EB8:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83EC0;
L_08A83EC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A83ED4;
      }
      goto L_08A83ECC;
    }
L_08A83ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83F54;
      }
      goto L_08A83ED4;
    }
L_08A83ED4:
    ctx.set_gpr(31, 0x08A83EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83EDCu) goto L_08A83EDC;
    return;
L_08A83EDC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A83EF4;
      }
      goto L_08A83EE8;
    }
L_08A83EE8:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A83EF8;
    }
    goto L_08A83EF0;
L_08A83EF0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83EF4;
L_08A83EF4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A83EF8;
L_08A83EF8:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17221u << 16u);
    ctx.set_gpr(3, 16688u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83F2Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83F2Cu) goto L_08A83F2C;
    return;
L_08A83F2C:
    ctx.set_gpr(31, 0x08A83F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83F34u) goto L_08A83F34;
    return;
L_08A83F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A83F4Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A83F4Cu) goto L_08A83F4C;
    return;
L_08A83F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A83FCC;
      }
      goto L_08A83F54;
    }
L_08A83F54:
    ctx.set_gpr(31, 0x08A83F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83F5Cu) goto L_08A83F5C;
    return;
L_08A83F5C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08A83F74;
      }
      goto L_08A83F68;
    }
L_08A83F68:
    if (ctx.gpr[3] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
        goto L_08A83F78;
    }
    goto L_08A83F70;
L_08A83F70:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A83F74;
L_08A83F74:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A83F78;
L_08A83F78:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[21] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08A83FACu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A83FACu) goto L_08A83FAC;
    return;
L_08A83FAC:
    ctx.set_gpr(31, 0x08A83FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83FB4u) goto L_08A83FB4;
    return;
L_08A83FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A83FCCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A83FCCu) goto L_08A83FCC;
    return;
L_08A83FCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(18196)));
    goto L_08A83FD0;
L_08A83FD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A83FE0;
      }
      goto L_08A83FD8;
    }
L_08A83FD8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A83FE0;
L_08A83FE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A83FF4;
      }
      goto L_08A83FEC;
    }
L_08A83FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 3u, 0x08A8401Cu>(ctx, &aot_mem); return;
      }
      goto L_08A83FF4;
    }
L_08A83FF4:
    ctx.set_gpr(31, 0x08A83FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A83FFCu) goto L_08A83FFC;
    return;
L_08A83FFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = 0x08A84000u; return;
}

void recomp_unit_0159(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0159_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_159(Runtime &runtime) {
    runtime.register_generated_unit(159u, 0x08A80000u, 16384u, &recomp_unit_0159, &recomp_unit_0159_entry);
    runtime.register_function(0x08A80000u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80014u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8001Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8002Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80034u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8003Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80048u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80050u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80058u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80060u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80068u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80078u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8008Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80098u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A800FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80104u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8010Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80114u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80124u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8012Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8013Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80144u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8014Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80154u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8015Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80164u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80170u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80178u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80180u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80188u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80190u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A801F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80200u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80208u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80210u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80218u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80230u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80238u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80250u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80258u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80268u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80270u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80278u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80284u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8028Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80294u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8029Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A802F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80300u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80308u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80310u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80318u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80348u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80350u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80360u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8036Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80374u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80384u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A803FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80408u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80410u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80418u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80420u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80428u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80438u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80440u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80454u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8045Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80464u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8046Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80478u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80484u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8048Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80494u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8049Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A804F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80508u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80510u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8051Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80524u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8052Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80538u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80540u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80550u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80558u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80564u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8056Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80574u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80580u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8058Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80598u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A805FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8060Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80614u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8061Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80628u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80630u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8063Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8064Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80654u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80660u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80668u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80670u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80680u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80688u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80690u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8069Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A806A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A806ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A806B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A806D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A806D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A806ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80708u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80710u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80720u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80734u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8075Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80768u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80774u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8077Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80784u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80790u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8079Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A807F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80804u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80810u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80830u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80838u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80844u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80860u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80868u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80874u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80890u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80898u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A808F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80900u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80908u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80918u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80920u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8092Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80934u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8093Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80948u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80950u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8095Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8097Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80984u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A809FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80A88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80AA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80AACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80AC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80AD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80ADCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80AE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80AF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80B98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80BFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80C98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80CF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80D98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80DFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80E9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80ECCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80ED4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80EF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80F9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FE4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A80FECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81004u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8100Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81014u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8101Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81028u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81034u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8103Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81044u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8104Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8105Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81064u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8106Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8107Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81088u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81098u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A810FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81108u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8111Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81124u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8112Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81138u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81140u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81150u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81160u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81168u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81170u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81178u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81180u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81188u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81194u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81198u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8119Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A811FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81204u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81214u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81230u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81240u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81258u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81268u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81280u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81288u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81290u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81298u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A812FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81304u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81334u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81338u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81358u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81370u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8137Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81384u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81390u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81398u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A813C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81404u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8140Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81414u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81424u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81430u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81438u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81448u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81450u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81454u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81458u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81468u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81484u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8148Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81498u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A814F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81508u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81518u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81524u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81538u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81540u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81544u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81548u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81554u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81558u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81564u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81568u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81578u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81580u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81584u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81588u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81594u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8159Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A815FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81614u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81620u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81638u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81644u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8164Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81658u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81660u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8166Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81674u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81680u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81694u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A816FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81704u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81708u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8170Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8172Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81734u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81744u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8174Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8175Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81764u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81778u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81784u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8178Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A817FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81804u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81810u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81818u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81830u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81838u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81858u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81860u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81888u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81890u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A818FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81918u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81978u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81980u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81998u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A819F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A819FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81A9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81AD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81B90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81BF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81C6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81CF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81D88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81DF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81E98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81ED0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81ED8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81EE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81F9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A81FF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82000u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82008u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82014u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8201Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82034u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82040u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82048u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82054u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82060u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82064u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8206Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82074u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82080u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82088u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A820F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82108u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82114u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82120u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82128u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8212Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82134u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8214Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82154u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82168u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82170u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8217Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82190u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82198u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A821ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82204u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82210u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82224u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8222Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82238u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8224Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82254u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82260u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82268u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82278u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82290u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A822F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82310u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8232Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82338u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82348u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82350u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82358u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82364u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8236Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82378u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82384u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8238Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82390u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82394u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A823F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82400u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82408u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8241Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82424u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8242Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82434u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8243Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82448u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82450u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82464u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8246Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82478u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82488u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82490u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82494u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82498u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A824FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82508u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82514u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82520u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8252Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82534u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82538u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8253Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82548u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8255Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82564u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82578u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82580u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82588u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8259Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A825F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82604u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82610u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82618u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8261Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82624u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8262Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82640u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82648u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82650u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8265Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82664u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82670u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82678u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82680u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82688u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82694u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A826FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82708u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82714u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8271Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82724u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82728u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8272Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82734u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8273Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82748u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82754u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8275Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82764u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82770u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8277Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82784u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82788u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82790u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A827F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82808u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82814u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8281Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8282Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8284Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82854u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82864u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82884u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8288Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8289Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A828FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82904u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82910u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8291Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82924u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82938u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8294Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82958u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82960u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82964u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82968u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82978u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82984u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8298Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82998u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A829E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82A8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82ACCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82AF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B1Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82B90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82BDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82C80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82CE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82D98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DA8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82DFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82E9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82ECCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82ED4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82EFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F04u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F44u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F60u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F6Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82F98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FA4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FC4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A82FFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83000u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83014u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8301Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8303Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83044u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83054u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83068u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83070u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83080u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83094u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83098u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A830F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83100u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83114u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8311Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83124u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8312Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83140u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83148u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8314Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83154u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83164u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83170u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83178u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83180u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83194u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8319Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A831FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83200u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8320Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83218u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83220u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83230u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83238u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83240u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8324Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83254u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83268u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83274u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83280u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83284u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8328Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83294u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8329Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A832F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83300u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83308u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83314u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83324u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83338u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83344u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83358u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83360u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83364u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83368u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83378u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83380u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8338Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8339Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A833F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83404u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83414u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83428u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83434u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83448u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83450u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83454u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83458u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83468u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83470u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8347Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8348Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834C0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834E4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A834F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83500u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83508u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8351Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83528u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83534u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83538u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83540u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83548u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83550u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83558u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83568u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8356Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83574u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83580u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8358Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83590u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8359Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835ACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835D4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835F8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A835FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83604u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8360Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83620u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83628u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83630u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83644u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83648u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83658u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83664u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8366Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83680u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83684u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8368Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8369Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A836F0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83704u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83710u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83718u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8371Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83720u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83740u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83754u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8375Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83764u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83770u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83778u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83788u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8379Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837B0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837B8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837ECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837F4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A837FCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83810u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83818u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8381Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83820u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8382Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83838u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83840u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83848u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8385Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83874u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83878u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83898u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838A0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838A4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838A8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838C4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838C8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838CCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838DCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A838E8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83900u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83908u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8390Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83910u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83920u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83928u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83930u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8393Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83944u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8395Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83964u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83984u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A8398Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839B4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839BCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839D0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839D8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A839E0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A00u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A24u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A64u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83A94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83AFCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B7Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83B94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83BF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C08u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C10u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C28u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C88u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83C9Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83CD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D18u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D20u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D30u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D38u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D40u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D80u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D84u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D90u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83D98u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DA0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DBCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DC8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DD4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83DD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E0Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E14u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E3Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E48u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E50u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E58u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E8Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83E94u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EB0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EB8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EC0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83ECCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83ED4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EDCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EE8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EF0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83EF8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F2Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F34u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F4Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F54u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F5Cu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F68u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F70u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F74u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83F78u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FACu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FB4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FCCu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FD0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FD8u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FE0u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FECu, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FF4u, &recomp_unit_0159, "recomp_unit_0159");
    runtime.register_function(0x08A83FFCu, &recomp_unit_0159, "recomp_unit_0159");
}
} // namespace psprecomp
