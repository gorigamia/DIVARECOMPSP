#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0026[4094] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18,
    19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0,
    28, 0, 29, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39,
    0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 48, 49, 0,
    0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0,
    0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 64, 65, 0, 0, 0, 66, 0, 0, 0, 0,
    0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0,
    0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 88, 0, 0, 0, 0,
    89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101,
    0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 114,
    0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127,
    0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 137, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0,
    143, 0, 0, 0, 0, 0, 144, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0,
    152, 0, 153, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0,
    0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 207, 0,
    208, 0, 209, 0, 210, 0, 211, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0,
    227, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0,
    0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0,
    0, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0,
    0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 266, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 277, 0,
    278, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0,
    0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 293, 294, 295, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 302, 0, 303, 0,
    304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0,
    0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 324, 0, 325,
    0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0,
    0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 0,
    347, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 351, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 359, 360, 0, 361, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 367, 0, 368, 0,
    369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 374, 0, 375, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 381, 0, 382, 0,
    383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 387, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0,
    0, 395, 0, 396, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 403, 404, 0, 405, 0, 406, 0,
    0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 411, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 418, 0, 419, 0, 420, 0,
    0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 431, 432, 0, 433, 0, 434, 0,
    0, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 444,
    0, 0, 445, 0, 0, 446, 0, 447, 448, 0, 449, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 455, 0, 456, 0, 457, 0, 0, 458,
    0, 0, 459, 0, 0, 460, 0, 461, 462, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 468, 469, 0, 470, 0, 471, 0, 0, 472,
    0, 0, 473, 0, 0, 474, 0, 475, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484,
    485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0,
    496, 0, 0, 497, 0, 498, 499, 0, 500, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 506, 0, 507, 0, 508, 0, 0, 509, 0, 0,
    510, 0, 0, 511, 0, 512, 513, 0, 514, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 520, 0, 521, 0, 522, 0, 0, 523, 0, 0,
    524, 0, 0, 525, 0, 526, 527, 0, 528, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 533, 534, 0, 535, 0, 536, 0, 0, 537, 0, 0,
    538, 0, 0, 539, 0, 540, 541, 0, 542, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 548, 0, 549, 0, 550, 0, 0, 0, 551, 0,
    0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 560, 0, 0, 561, 0,
    0, 562, 0, 563, 564, 0, 565, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 570, 571, 0, 572, 0, 573, 0, 0, 574, 0, 0, 575, 0,
    0, 576, 0, 577, 578, 0, 579, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 584, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0,
    0, 590, 0, 591, 592, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 601, 0, 0, 0,
    0, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 608, 0, 609, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613,
    0, 614, 615, 0, 616, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 622, 0, 623, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627,
    0, 628, 629, 0, 630, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 636, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641,
    0, 642, 643, 0, 644, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 650, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 655,
    0, 656, 0, 0, 0, 0, 0, 657, 0, 658, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0, 665,
    0, 666, 0, 667, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 0, 0, 0, 0, 675, 0, 676, 677, 0,
    0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0,
    0, 0, 689, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 693, 0, 694, 695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698,
    0, 0, 699, 0, 0, 0, 700, 0, 701, 702, 0, 703, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 708, 709, 0, 710, 0, 711, 0,
    0, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721,
    0, 0, 722, 0, 0, 0, 723, 0, 724, 725, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 731, 0, 0, 0, 0, 0, 732, 0,
    733, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 740, 741, 0, 742, 0, 743, 0, 0, 0,
    744, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0, 0, 748, 0, 749, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0, 0, 754,
    0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0,
    763, 0, 0, 764, 0, 0, 765, 0, 766, 767, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0,
    0, 775, 0, 776, 777, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0,
    784, 0, 785, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 793, 794, 0, 0,
    795, 0, 796, 0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 804, 0, 0, 0, 0, 0, 0, 0,
    805, 0, 806, 0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 814, 0, 0, 815, 0,
    0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 819, 0, 820, 821, 0, 0, 822, 0, 823, 0, 824, 0, 0, 0, 825, 0, 0, 826,
    0, 827, 0, 828, 0, 0, 0, 0, 0, 829, 0, 830, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 834, 0, 0, 835, 0, 0, 836, 0,
    0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 845,
    0, 0, 846, 0, 847, 848, 0, 0, 849, 0, 850, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0, 0, 0, 856, 0, 857,
    858, 0, 0, 0, 0, 0, 0, 0, 859, 0, 860, 0, 861, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0,
    867, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 874, 875, 0, 0, 876, 0, 877, 0,
    878, 0, 0, 0, 879, 0, 0, 880, 0, 881, 0, 882, 0, 0, 0, 0, 0, 883, 0, 884, 885, 0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0,
    888, 0, 0, 889, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 893, 0, 894, 0, 0, 895, 0, 0, 896, 0, 0, 0, 0, 897,
    0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 900, 0, 901, 902, 0, 0, 903, 0, 904, 0, 905, 0, 0, 0, 906, 0, 0, 907, 0, 908, 0, 909,
    0, 0, 0, 0, 0, 910, 911, 0, 912, 913, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 915, 0, 916, 0, 0, 917, 0, 918,
    0, 919, 0, 920, 0, 921, 922, 0, 0, 923, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 0, 931, 0,
    932, 0, 933, 0, 934, 0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 940, 0, 941, 0, 942, 0, 943, 0, 944, 0, 945, 0, 946, 0, 947, 0,
    948, 0, 949, 0, 950, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 963, 0,
    964, 0, 965, 0, 966, 0, 967, 0, 968, 0, 969, 0, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 975, 0, 976, 0, 977, 0, 978, 0, 979, 0,
    980, 0, 981, 0, 982, 0, 983, 0, 984, 0, 985, 0, 986, 0, 987, 0, 988, 0, 989, 0, 990, 0, 991, 0, 992, 0, 993, 0, 994, 0, 995, 996,
    0, 0, 0, 997, 0, 0, 0, 0, 0, 998, 0, 999, 0, 0, 1000, 0, 1001, 0, 1002, 0, 0, 1003, 0, 0, 0, 0, 0, 1004, 0, 1005, 0, 1006,
    0, 1007, 0, 1008, 0, 0, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 1010, 0, 0, 1011, 0, 1012, 0, 1013, 0, 0, 0, 1014, 0, 0, 1015, 0, 1016,
    0, 1017, 0, 0, 0, 0, 0, 1018, 1019, 0, 0, 1020, 0, 0, 0, 0, 1021, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1022, 0, 1023, 0, 1024,
    0, 1025, 0, 1026, 0, 0, 0, 0, 1027, 0, 1028, 0, 1029, 0, 0, 0, 0, 1030, 0, 1031, 0, 1032, 0, 0, 0, 0, 1033, 0, 0, 0, 0, 0,
    0, 1034, 0, 0, 1035, 0, 1036, 0, 1037, 0, 0, 0, 1038, 0, 0, 1039, 0, 1040, 0, 1041, 0, 0, 0, 0, 0, 1042, 1043, 0, 0, 1044, 0, 0,
    0, 0, 1045, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1046, 0, 1047, 0, 1048, 0, 1049, 0, 1050, 0, 0, 0, 0, 1051, 0, 0, 0, 0, 0,
    0, 1052, 0, 0, 1053, 0, 1054, 0, 1055, 0, 0, 0, 1056, 0, 0, 1057, 0, 1058, 0, 1059, 0, 0, 0, 0, 0, 1060, 1061, 0, 0, 1062, 0, 0,
    0, 0, 1063, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1064, 0, 1065, 0, 1066, 0, 1067, 0, 1068, 0, 0, 0, 0, 1069, 0, 0, 0, 0, 0,
    0, 1070, 0, 0, 1071, 0, 1072, 0, 1073, 0, 0, 0, 1074, 0, 0, 1075, 0, 1076, 0, 1077, 0, 0, 0, 0, 0, 1078, 1079, 0, 0, 1080, 0, 0,
    0, 0, 1081, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1082, 0, 1083, 0, 1084, 0, 1085, 0, 1086, 0, 0, 0, 0, 1087, 0, 0, 0, 0, 0,
    0, 1088, 0, 0, 1089, 0, 1090, 0, 1091, 0, 0, 0, 1092, 0, 0, 1093, 0, 1094, 0, 1095, 0, 0, 0, 0, 0, 1096, 1097, 0, 0, 1098, 0, 0,
    0, 0, 1099, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1100, 0, 1101, 0, 1102, 0, 1103, 0, 1104, 0, 0, 0, 0, 1105, 0, 1106, 0, 1107, 0,
    0, 0, 0, 1108, 0, 1109, 0, 1110, 0, 0, 0, 0, 1111, 0, 0, 0, 0, 0, 0, 1112, 0, 0, 1113, 0, 1114, 0, 1115, 0, 0, 0, 1116, 0,
    0, 1117, 0, 1118, 0, 1119, 0, 0, 0, 0, 0, 1120, 1121, 0, 0, 1122, 0, 0, 0, 0, 1123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1124,
    0, 1125, 0, 1126, 0, 1127, 0, 1128, 0, 0, 0, 0, 1129, 0, 0, 0, 0, 0, 0, 1130, 0, 0, 1131, 0, 1132, 0, 1133, 0, 0, 0, 1134, 0,
    0, 1135, 0, 1136, 0, 1137, 0, 0, 0, 0, 0, 1138, 1139, 0, 0, 1140, 0, 0, 0, 0, 1141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1142,
    0, 1143, 0, 1144, 0, 1145, 0, 1146, 0, 0, 0, 0, 1147, 0, 0, 0, 0, 0, 0, 1148, 0, 0, 1149, 0, 1150, 0, 1151, 0, 0, 0, 1152, 0,
    0, 1153, 0, 1154, 0, 1155, 0, 0, 0, 0, 0, 1156, 1157, 0, 0, 1158, 0, 0, 0, 0, 1159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1160,
    0, 1161, 0, 1162, 0, 1163, 0, 1164, 0, 0, 0, 0, 1165, 0, 0, 0, 0, 0, 0, 1166, 0, 0, 1167, 0, 1168, 0, 1169, 0, 0, 0, 1170, 0,
    0, 1171, 0, 1172, 0, 1173, 0, 0, 0, 0, 0, 1174, 1175, 0, 0, 1176, 0, 0, 0, 0, 1177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1178,
    0, 1179, 0, 1180, 0, 1181, 0, 1182, 0, 0, 0, 0, 1183, 0, 0, 0, 0, 0, 0, 1184, 0, 0, 1185, 0, 1186, 0, 1187, 0, 0, 0, 1188, 0,
    0, 1189, 0, 1190, 0, 1191, 0, 0, 0, 0, 0, 1192, 1193, 0, 0, 1194, 0, 0, 0, 0, 1195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1196,
    0, 1197, 0, 1198, 0, 1199, 0, 1200, 0, 0, 0, 0, 1201, 0, 1202, 0, 1203, 0, 0, 0, 0, 1204, 0, 1205, 0, 1206, 0, 0, 0, 0, 1207, 0,
    0, 0, 0, 0, 0, 1208, 0, 0, 1209, 0, 1210, 0, 1211, 0, 0, 0, 1212, 0, 0, 1213, 0, 1214, 0, 1215, 0, 0, 0, 0, 0, 1216, 1217, 0,
    0, 1218, 0, 0, 0, 0, 1219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1220, 0, 1221, 0, 1222, 0, 1223, 0, 1224, 0, 0, 0, 0, 1225, 0,
    0, 0, 0, 0, 0, 1226, 0, 0, 1227, 0, 1228, 0, 1229, 0, 0, 0, 1230, 0, 0, 1231, 0, 1232, 0, 1233, 0, 0, 0, 0, 0, 1234, 1235, 0,
    0, 1236, 0, 0, 0, 0, 1237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1238, 0, 1239, 0, 1240, 0, 1241, 0, 1242, 0, 0, 0, 0, 1243, 0,
    0, 0, 0, 0, 0, 1244, 0, 0, 1245, 0, 1246, 0, 1247, 0, 0, 0, 1248, 0, 0, 1249, 0, 1250, 0, 1251, 0, 0, 0, 0, 0, 1252, 1253, 0,
    0, 1254, 0, 0, 0, 0, 1255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1256, 0, 1257, 0, 1258, 0, 1259, 0, 1260, 0, 0, 0, 0, 1261, 0,
    0, 0, 0, 0, 0, 1262, 0, 0, 1263, 0, 1264, 0, 1265, 0, 0, 0, 1266, 0, 0, 1267, 0, 1268, 0, 1269, 0, 0, 0, 0, 0, 1270, 1271, 0,
    0, 1272, 0, 0, 0, 0, 1273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1274, 0, 1275, 0, 1276, 0, 1277, 0, 1278, 0, 0, 0, 0, 1279, 0,
    0, 0, 0, 0, 0, 1280, 0, 0, 1281, 0, 1282, 0, 1283, 0, 0, 0, 1284, 0, 0, 1285, 0, 1286, 0, 1287, 0, 0, 0, 0, 0, 1288, 1289, 0,
    0, 1290, 0, 0, 0, 0, 1291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1292, 0, 1293, 0, 1294, 0, 1295, 0, 1296, 0, 0, 0, 0, 1297, 0,
    1298, 0, 1299, 0, 0, 0, 0, 1300, 0, 1301, 0, 1302, 0, 0, 0, 0, 1303, 0, 0, 0, 0, 0, 0, 1304, 0, 0, 1305, 0, 1306, 0, 1307, 0,
    0, 0, 1308, 0, 0, 1309, 0, 1310, 0, 1311, 0, 0, 0, 0, 0, 1312, 1313, 0, 0, 1314, 0, 0, 0, 0, 1315, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1316, 0, 1317, 0, 1318, 0, 1319, 0, 1320, 0, 0, 0, 0, 1321, 0, 1322, 0, 1323, 0, 0, 0, 0, 1324, 0, 1325, 0, 1326, 0, 0,
    0, 0, 1327, 0, 0, 0, 0, 0, 0, 1328, 0, 0, 1329, 0, 1330, 0, 1331, 0, 0, 0, 1332, 0, 0, 1333, 0, 1334, 0, 1335, 0, 0, 0, 0,
    0, 1336, 1337, 0, 0, 1338, 0, 0, 0, 0, 1339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1340, 0, 1341, 0, 1342, 0, 1343, 0, 1344, 0, 0,
    0, 0, 1345, 0, 0, 0, 0, 0, 0, 1346, 0, 0, 1347, 0, 1348, 0, 1349, 0, 0, 0, 1350, 0, 0, 1351, 0, 1352, 0, 1353, 0, 0, 0, 0,
    0, 1354, 1355, 0, 0, 1356, 0, 0, 0, 0, 1357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1358, 0, 1359, 0, 1360, 0, 1361, 0, 1362,
};
void recomp_unit_0026_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0886C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0026[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0886C000;
    case 2u: goto L_0886C010;
    case 3u: goto L_0886C034;
    case 4u: goto L_0886C040;
    case 5u: goto L_0886C058;
    case 6u: goto L_0886C070;
    case 7u: goto L_0886C094;
    case 8u: goto L_0886C0A0;
    case 9u: goto L_0886C0C8;
    case 10u: goto L_0886C0D8;
    case 11u: goto L_0886C100;
    case 12u: goto L_0886C11C;
    case 13u: goto L_0886C124;
    case 14u: goto L_0886C12C;
    case 15u: goto L_0886C134;
    case 16u: goto L_0886C158;
    case 17u: goto L_0886C160;
    case 18u: goto L_0886C17C;
    case 19u: goto L_0886C180;
    case 20u: goto L_0886C198;
    case 21u: goto L_0886C1B0;
    case 22u: goto L_0886C1B4;
    case 23u: goto L_0886C1C0;
    case 24u: goto L_0886C1D8;
    case 25u: goto L_0886C1E0;
    case 26u: goto L_0886C1E8;
    case 27u: goto L_0886C1F8;
    case 28u: goto L_0886C200;
    case 29u: goto L_0886C208;
    case 30u: goto L_0886C214;
    case 31u: goto L_0886C21C;
    case 32u: goto L_0886C224;
    case 33u: goto L_0886C230;
    case 34u: goto L_0886C240;
    case 35u: goto L_0886C254;
    case 36u: goto L_0886C25C;
    case 37u: goto L_0886C264;
    case 38u: goto L_0886C270;
    case 39u: goto L_0886C27C;
    case 40u: goto L_0886C290;
    case 41u: goto L_0886C298;
    case 42u: goto L_0886C2A0;
    case 43u: goto L_0886C2A8;
    case 44u: goto L_0886C2B0;
    case 45u: goto L_0886C2B8;
    case 46u: goto L_0886C2D8;
    case 47u: goto L_0886C2E0;
    case 48u: goto L_0886C2F4;
    case 49u: goto L_0886C2F8;
    case 50u: goto L_0886C310;
    case 51u: goto L_0886C318;
    case 52u: goto L_0886C320;
    case 53u: goto L_0886C334;
    case 54u: goto L_0886C350;
    case 55u: goto L_0886C358;
    case 56u: goto L_0886C360;
    case 57u: goto L_0886C368;
    case 58u: goto L_0886C388;
    case 59u: goto L_0886C390;
    case 60u: goto L_0886C3A4;
    case 61u: goto L_0886C3A8;
    case 62u: goto L_0886C3C0;
    case 63u: goto L_0886C3C4;
    case 64u: goto L_0886C3D8;
    case 65u: goto L_0886C3DC;
    case 66u: goto L_0886C3EC;
    case 67u: goto L_0886C404;
    case 68u: goto L_0886C40C;
    case 69u: goto L_0886C418;
    case 70u: goto L_0886C420;
    case 71u: goto L_0886C428;
    case 72u: goto L_0886C430;
    case 73u: goto L_0886C438;
    case 74u: goto L_0886C444;
    case 75u: goto L_0886C44C;
    case 76u: goto L_0886C454;
    case 77u: goto L_0886C46C;
    case 78u: goto L_0886C470;
    case 79u: goto L_0886C484;
    case 80u: goto L_0886C494;
    case 81u: goto L_0886C4B4;
    case 82u: goto L_0886C4BC;
    case 83u: goto L_0886C4C8;
    case 84u: goto L_0886C4D0;
    case 85u: goto L_0886C4D8;
    case 86u: goto L_0886C4E0;
    case 87u: goto L_0886C4E8;
    case 88u: goto L_0886C4EC;
    case 89u: goto L_0886C500;
    case 90u: goto L_0886C508;
    case 91u: goto L_0886C518;
    case 92u: goto L_0886C534;
    case 93u: goto L_0886C53C;
    case 94u: goto L_0886C544;
    case 95u: goto L_0886C54C;
    case 96u: goto L_0886C554;
    case 97u: goto L_0886C55C;
    case 98u: goto L_0886C564;
    case 99u: goto L_0886C56C;
    case 100u: goto L_0886C574;
    case 101u: goto L_0886C57C;
    case 102u: goto L_0886C584;
    case 103u: goto L_0886C58C;
    case 104u: goto L_0886C594;
    case 105u: goto L_0886C59C;
    case 106u: goto L_0886C5A4;
    case 107u: goto L_0886C5AC;
    case 108u: goto L_0886C5B8;
    case 109u: goto L_0886C5C4;
    case 110u: goto L_0886C5D4;
    case 111u: goto L_0886C5E0;
    case 112u: goto L_0886C5E8;
    case 113u: goto L_0886C5F0;
    case 114u: goto L_0886C5FC;
    case 115u: goto L_0886C604;
    case 116u: goto L_0886C60C;
    case 117u: goto L_0886C614;
    case 118u: goto L_0886C620;
    case 119u: goto L_0886C62C;
    case 120u: goto L_0886C63C;
    case 121u: goto L_0886C648;
    case 122u: goto L_0886C650;
    case 123u: goto L_0886C658;
    case 124u: goto L_0886C664;
    case 125u: goto L_0886C66C;
    case 126u: goto L_0886C674;
    case 127u: goto L_0886C67C;
    case 128u: goto L_0886C684;
    case 129u: goto L_0886C68C;
    case 130u: goto L_0886C694;
    case 131u: goto L_0886C69C;
    case 132u: goto L_0886C6A4;
    case 133u: goto L_0886C6AC;
    case 134u: goto L_0886C6B4;
    case 135u: goto L_0886C6BC;
    case 136u: goto L_0886C6C4;
    case 137u: goto L_0886C6C8;
    case 138u: goto L_0886C6CC;
    case 139u: goto L_0886C6D4;
    case 140u: goto L_0886C6DC;
    case 141u: goto L_0886C6EC;
    case 142u: goto L_0886C6F8;
    case 143u: goto L_0886C700;
    case 144u: goto L_0886C718;
    case 145u: goto L_0886C71C;
    case 146u: goto L_0886C738;
    case 147u: goto L_0886C754;
    case 148u: goto L_0886C75C;
    case 149u: goto L_0886C768;
    case 150u: goto L_0886C770;
    case 151u: goto L_0886C778;
    case 152u: goto L_0886C780;
    case 153u: goto L_0886C788;
    case 154u: goto L_0886C78C;
    case 155u: goto L_0886C7A0;
    case 156u: goto L_0886C7A8;
    case 157u: goto L_0886C7B4;
    case 158u: goto L_0886C7D4;
    case 159u: goto L_0886C7E4;
    case 160u: goto L_0886C804;
    case 161u: goto L_0886C814;
    case 162u: goto L_0886C834;
    case 163u: goto L_0886C83C;
    case 164u: goto L_0886C84C;
    case 165u: goto L_0886C858;
    case 166u: goto L_0886C860;
    case 167u: goto L_0886C870;
    case 168u: goto L_0886C880;
    case 169u: goto L_0886C890;
    case 170u: goto L_0886C89C;
    case 171u: goto L_0886C8A4;
    case 172u: goto L_0886C8AC;
    case 173u: goto L_0886C8C4;
    case 174u: goto L_0886C8CC;
    case 175u: goto L_0886C8D8;
    case 176u: goto L_0886C8E0;
    case 177u: goto L_0886C8F0;
    case 178u: goto L_0886C900;
    case 179u: goto L_0886C910;
    case 180u: goto L_0886C91C;
    case 181u: goto L_0886C924;
    case 182u: goto L_0886C92C;
    case 183u: goto L_0886C944;
    case 184u: goto L_0886C94C;
    case 185u: goto L_0886C954;
    case 186u: goto L_0886C95C;
    case 187u: goto L_0886C96C;
    case 188u: goto L_0886C978;
    case 189u: goto L_0886C988;
    case 190u: goto L_0886C998;
    case 191u: goto L_0886C9A4;
    case 192u: goto L_0886C9AC;
    case 193u: goto L_0886C9B4;
    case 194u: goto L_0886C9CC;
    case 195u: goto L_0886C9D4;
    case 196u: goto L_0886C9E0;
    case 197u: goto L_0886C9E8;
    case 198u: goto L_0886C9F8;
    case 199u: goto L_0886CA04;
    case 200u: goto L_0886CA0C;
    case 201u: goto L_0886CA14;
    case 202u: goto L_0886CA2C;
    case 203u: goto L_0886CA30;
    case 204u: goto L_0886CA48;
    case 205u: goto L_0886CA64;
    case 206u: goto L_0886CA6C;
    case 207u: goto L_0886CA78;
    case 208u: goto L_0886CA80;
    case 209u: goto L_0886CA88;
    case 210u: goto L_0886CA90;
    case 211u: goto L_0886CA98;
    case 212u: goto L_0886CA9C;
    case 213u: goto L_0886CAB0;
    case 214u: goto L_0886CAB8;
    case 215u: goto L_0886CAC4;
    case 216u: goto L_0886CADC;
    case 217u: goto L_0886CAEC;
    case 218u: goto L_0886CB0C;
    case 219u: goto L_0886CB14;
    case 220u: goto L_0886CB24;
    case 221u: goto L_0886CB30;
    case 222u: goto L_0886CB38;
    case 223u: goto L_0886CB48;
    case 224u: goto L_0886CB54;
    case 225u: goto L_0886CB64;
    case 226u: goto L_0886CB74;
    case 227u: goto L_0886CB80;
    case 228u: goto L_0886CB88;
    case 229u: goto L_0886CB90;
    case 230u: goto L_0886CBA8;
    case 231u: goto L_0886CBB0;
    case 232u: goto L_0886CBBC;
    case 233u: goto L_0886CBC4;
    case 234u: goto L_0886CBD4;
    case 235u: goto L_0886CBE0;
    case 236u: goto L_0886CBE8;
    case 237u: goto L_0886CBF0;
    case 238u: goto L_0886CC08;
    case 239u: goto L_0886CC10;
    case 240u: goto L_0886CC18;
    case 241u: goto L_0886CC28;
    case 242u: goto L_0886CC34;
    case 243u: goto L_0886CC44;
    case 244u: goto L_0886CC54;
    case 245u: goto L_0886CC60;
    case 246u: goto L_0886CC68;
    case 247u: goto L_0886CC70;
    case 248u: goto L_0886CC88;
    case 249u: goto L_0886CC90;
    case 250u: goto L_0886CC9C;
    case 251u: goto L_0886CCA4;
    case 252u: goto L_0886CCB4;
    case 253u: goto L_0886CCC0;
    case 254u: goto L_0886CCC8;
    case 255u: goto L_0886CCD0;
    case 256u: goto L_0886CCE8;
    case 257u: goto L_0886CCEC;
    case 258u: goto L_0886CD04;
    case 259u: goto L_0886CD30;
    case 260u: goto L_0886CD38;
    case 261u: goto L_0886CD44;
    case 262u: goto L_0886CD4C;
    case 263u: goto L_0886CD54;
    case 264u: goto L_0886CD5C;
    case 265u: goto L_0886CD64;
    case 266u: goto L_0886CD68;
    case 267u: goto L_0886CD7C;
    case 268u: goto L_0886CD98;
    case 269u: goto L_0886CDA0;
    case 270u: goto L_0886CDA8;
    case 271u: goto L_0886CDB4;
    case 272u: goto L_0886CDC0;
    case 273u: goto L_0886CDCC;
    case 274u: goto L_0886CDD4;
    case 275u: goto L_0886CDDC;
    case 276u: goto L_0886CDE4;
    case 277u: goto L_0886CDF8;
    case 278u: goto L_0886CE00;
    case 279u: goto L_0886CE08;
    case 280u: goto L_0886CE1C;
    case 281u: goto L_0886CE24;
    case 282u: goto L_0886CE2C;
    case 283u: goto L_0886CE34;
    case 284u: goto L_0886CE40;
    case 285u: goto L_0886CE4C;
    case 286u: goto L_0886CE58;
    case 287u: goto L_0886CE60;
    case 288u: goto L_0886CE68;
    case 289u: goto L_0886CE70;
    case 290u: goto L_0886CE84;
    case 291u: goto L_0886CE8C;
    case 292u: goto L_0886CE94;
    case 293u: goto L_0886CEA8;
    case 294u: goto L_0886CEAC;
    case 295u: goto L_0886CEB0;
    case 296u: goto L_0886CEB8;
    case 297u: goto L_0886CEC0;
    case 298u: goto L_0886CECC;
    case 299u: goto L_0886CED4;
    case 300u: goto L_0886CEDC;
    case 301u: goto L_0886CEE4;
    case 302u: goto L_0886CEF0;
    case 303u: goto L_0886CEF8;
    case 304u: goto L_0886CF00;
    case 305u: goto L_0886CF08;
    case 306u: goto L_0886CF1C;
    case 307u: goto L_0886CF24;
    case 308u: goto L_0886CF2C;
    case 309u: goto L_0886CF40;
    case 310u: goto L_0886CF48;
    case 311u: goto L_0886CF50;
    case 312u: goto L_0886CF64;
    case 313u: goto L_0886CF6C;
    case 314u: goto L_0886CF74;
    case 315u: goto L_0886CF88;
    case 316u: goto L_0886CF90;
    case 317u: goto L_0886CF98;
    case 318u: goto L_0886CFAC;
    case 319u: goto L_0886CFB4;
    case 320u: goto L_0886CFBC;
    case 321u: goto L_0886CFD0;
    case 322u: goto L_0886CFD8;
    case 323u: goto L_0886CFE0;
    case 324u: goto L_0886CFF4;
    case 325u: goto L_0886CFFC;
    case 326u: goto L_0886D004;
    case 327u: goto L_0886D018;
    case 328u: goto L_0886D020;
    case 329u: goto L_0886D028;
    case 330u: goto L_0886D03C;
    case 331u: goto L_0886D044;
    case 332u: goto L_0886D04C;
    case 333u: goto L_0886D060;
    case 334u: goto L_0886D068;
    case 335u: goto L_0886D070;
    case 336u: goto L_0886D084;
    case 337u: goto L_0886D08C;
    case 338u: goto L_0886D094;
    case 339u: goto L_0886D0A8;
    case 340u: goto L_0886D0B0;
    case 341u: goto L_0886D0B8;
    case 342u: goto L_0886D0CC;
    case 343u: goto L_0886D0D4;
    case 344u: goto L_0886D0DC;
    case 345u: goto L_0886D0F0;
    case 346u: goto L_0886D0F8;
    case 347u: goto L_0886D100;
    case 348u: goto L_0886D114;
    case 349u: goto L_0886D11C;
    case 350u: goto L_0886D124;
    case 351u: goto L_0886D138;
    case 352u: goto L_0886D13C;
    case 353u: goto L_0886D154;
    case 354u: goto L_0886D178;
    case 355u: goto L_0886D180;
    case 356u: goto L_0886D18C;
    case 357u: goto L_0886D198;
    case 358u: goto L_0886D1A4;
    case 359u: goto L_0886D1AC;
    case 360u: goto L_0886D1B0;
    case 361u: goto L_0886D1B8;
    case 362u: goto L_0886D1C0;
    case 363u: goto L_0886D1CC;
    case 364u: goto L_0886D1D8;
    case 365u: goto L_0886D1E4;
    case 366u: goto L_0886D1EC;
    case 367u: goto L_0886D1F0;
    case 368u: goto L_0886D1F8;
    case 369u: goto L_0886D200;
    case 370u: goto L_0886D20C;
    case 371u: goto L_0886D218;
    case 372u: goto L_0886D224;
    case 373u: goto L_0886D22C;
    case 374u: goto L_0886D230;
    case 375u: goto L_0886D238;
    case 376u: goto L_0886D240;
    case 377u: goto L_0886D24C;
    case 378u: goto L_0886D258;
    case 379u: goto L_0886D264;
    case 380u: goto L_0886D26C;
    case 381u: goto L_0886D270;
    case 382u: goto L_0886D278;
    case 383u: goto L_0886D280;
    case 384u: goto L_0886D28C;
    case 385u: goto L_0886D298;
    case 386u: goto L_0886D2A4;
    case 387u: goto L_0886D2AC;
    case 388u: goto L_0886D2B0;
    case 389u: goto L_0886D2B8;
    case 390u: goto L_0886D2C0;
    case 391u: goto L_0886D2D0;
    case 392u: goto L_0886D2DC;
    case 393u: goto L_0886D2E4;
    case 394u: goto L_0886D2EC;
    case 395u: goto L_0886D304;
    case 396u: goto L_0886D30C;
    case 397u: goto L_0886D310;
    case 398u: goto L_0886D330;
    case 399u: goto L_0886D338;
    case 400u: goto L_0886D344;
    case 401u: goto L_0886D350;
    case 402u: goto L_0886D35C;
    case 403u: goto L_0886D364;
    case 404u: goto L_0886D368;
    case 405u: goto L_0886D370;
    case 406u: goto L_0886D378;
    case 407u: goto L_0886D384;
    case 408u: goto L_0886D390;
    case 409u: goto L_0886D39C;
    case 410u: goto L_0886D3A4;
    case 411u: goto L_0886D3A8;
    case 412u: goto L_0886D3B0;
    case 413u: goto L_0886D3B8;
    case 414u: goto L_0886D3C4;
    case 415u: goto L_0886D3D0;
    case 416u: goto L_0886D3DC;
    case 417u: goto L_0886D3E4;
    case 418u: goto L_0886D3E8;
    case 419u: goto L_0886D3F0;
    case 420u: goto L_0886D3F8;
    case 421u: goto L_0886D404;
    case 422u: goto L_0886D410;
    case 423u: goto L_0886D41C;
    case 424u: goto L_0886D424;
    case 425u: goto L_0886D428;
    case 426u: goto L_0886D430;
    case 427u: goto L_0886D438;
    case 428u: goto L_0886D444;
    case 429u: goto L_0886D450;
    case 430u: goto L_0886D45C;
    case 431u: goto L_0886D464;
    case 432u: goto L_0886D468;
    case 433u: goto L_0886D470;
    case 434u: goto L_0886D478;
    case 435u: goto L_0886D488;
    case 436u: goto L_0886D494;
    case 437u: goto L_0886D49C;
    case 438u: goto L_0886D4A4;
    case 439u: goto L_0886D4BC;
    case 440u: goto L_0886D4C4;
    case 441u: goto L_0886D4C8;
    case 442u: goto L_0886D4E8;
    case 443u: goto L_0886D4F0;
    case 444u: goto L_0886D4FC;
    case 445u: goto L_0886D508;
    case 446u: goto L_0886D514;
    case 447u: goto L_0886D51C;
    case 448u: goto L_0886D520;
    case 449u: goto L_0886D528;
    case 450u: goto L_0886D530;
    case 451u: goto L_0886D53C;
    case 452u: goto L_0886D548;
    case 453u: goto L_0886D554;
    case 454u: goto L_0886D55C;
    case 455u: goto L_0886D560;
    case 456u: goto L_0886D568;
    case 457u: goto L_0886D570;
    case 458u: goto L_0886D57C;
    case 459u: goto L_0886D588;
    case 460u: goto L_0886D594;
    case 461u: goto L_0886D59C;
    case 462u: goto L_0886D5A0;
    case 463u: goto L_0886D5A8;
    case 464u: goto L_0886D5B0;
    case 465u: goto L_0886D5BC;
    case 466u: goto L_0886D5C8;
    case 467u: goto L_0886D5D4;
    case 468u: goto L_0886D5DC;
    case 469u: goto L_0886D5E0;
    case 470u: goto L_0886D5E8;
    case 471u: goto L_0886D5F0;
    case 472u: goto L_0886D5FC;
    case 473u: goto L_0886D608;
    case 474u: goto L_0886D614;
    case 475u: goto L_0886D61C;
    case 476u: goto L_0886D620;
    case 477u: goto L_0886D628;
    case 478u: goto L_0886D630;
    case 479u: goto L_0886D640;
    case 480u: goto L_0886D64C;
    case 481u: goto L_0886D654;
    case 482u: goto L_0886D65C;
    case 483u: goto L_0886D674;
    case 484u: goto L_0886D67C;
    case 485u: goto L_0886D680;
    case 486u: goto L_0886D6A0;
    case 487u: goto L_0886D6A8;
    case 488u: goto L_0886D6B4;
    case 489u: goto L_0886D6C0;
    case 490u: goto L_0886D6CC;
    case 491u: goto L_0886D6D4;
    case 492u: goto L_0886D6D8;
    case 493u: goto L_0886D6E0;
    case 494u: goto L_0886D6E8;
    case 495u: goto L_0886D6F4;
    case 496u: goto L_0886D700;
    case 497u: goto L_0886D70C;
    case 498u: goto L_0886D714;
    case 499u: goto L_0886D718;
    case 500u: goto L_0886D720;
    case 501u: goto L_0886D728;
    case 502u: goto L_0886D734;
    case 503u: goto L_0886D740;
    case 504u: goto L_0886D74C;
    case 505u: goto L_0886D754;
    case 506u: goto L_0886D758;
    case 507u: goto L_0886D760;
    case 508u: goto L_0886D768;
    case 509u: goto L_0886D774;
    case 510u: goto L_0886D780;
    case 511u: goto L_0886D78C;
    case 512u: goto L_0886D794;
    case 513u: goto L_0886D798;
    case 514u: goto L_0886D7A0;
    case 515u: goto L_0886D7A8;
    case 516u: goto L_0886D7B4;
    case 517u: goto L_0886D7C0;
    case 518u: goto L_0886D7CC;
    case 519u: goto L_0886D7D4;
    case 520u: goto L_0886D7D8;
    case 521u: goto L_0886D7E0;
    case 522u: goto L_0886D7E8;
    case 523u: goto L_0886D7F4;
    case 524u: goto L_0886D800;
    case 525u: goto L_0886D80C;
    case 526u: goto L_0886D814;
    case 527u: goto L_0886D818;
    case 528u: goto L_0886D820;
    case 529u: goto L_0886D828;
    case 530u: goto L_0886D834;
    case 531u: goto L_0886D840;
    case 532u: goto L_0886D84C;
    case 533u: goto L_0886D854;
    case 534u: goto L_0886D858;
    case 535u: goto L_0886D860;
    case 536u: goto L_0886D868;
    case 537u: goto L_0886D874;
    case 538u: goto L_0886D880;
    case 539u: goto L_0886D88C;
    case 540u: goto L_0886D894;
    case 541u: goto L_0886D898;
    case 542u: goto L_0886D8A0;
    case 543u: goto L_0886D8A8;
    case 544u: goto L_0886D8B4;
    case 545u: goto L_0886D8C0;
    case 546u: goto L_0886D8CC;
    case 547u: goto L_0886D8D4;
    case 548u: goto L_0886D8D8;
    case 549u: goto L_0886D8E0;
    case 550u: goto L_0886D8E8;
    case 551u: goto L_0886D8F8;
    case 552u: goto L_0886D904;
    case 553u: goto L_0886D90C;
    case 554u: goto L_0886D914;
    case 555u: goto L_0886D92C;
    case 556u: goto L_0886D934;
    case 557u: goto L_0886D938;
    case 558u: goto L_0886D958;
    case 559u: goto L_0886D960;
    case 560u: goto L_0886D96C;
    case 561u: goto L_0886D978;
    case 562u: goto L_0886D984;
    case 563u: goto L_0886D98C;
    case 564u: goto L_0886D990;
    case 565u: goto L_0886D998;
    case 566u: goto L_0886D9A0;
    case 567u: goto L_0886D9AC;
    case 568u: goto L_0886D9B8;
    case 569u: goto L_0886D9C4;
    case 570u: goto L_0886D9CC;
    case 571u: goto L_0886D9D0;
    case 572u: goto L_0886D9D8;
    case 573u: goto L_0886D9E0;
    case 574u: goto L_0886D9EC;
    case 575u: goto L_0886D9F8;
    case 576u: goto L_0886DA04;
    case 577u: goto L_0886DA0C;
    case 578u: goto L_0886DA10;
    case 579u: goto L_0886DA18;
    case 580u: goto L_0886DA20;
    case 581u: goto L_0886DA2C;
    case 582u: goto L_0886DA38;
    case 583u: goto L_0886DA44;
    case 584u: goto L_0886DA4C;
    case 585u: goto L_0886DA50;
    case 586u: goto L_0886DA58;
    case 587u: goto L_0886DA60;
    case 588u: goto L_0886DA6C;
    case 589u: goto L_0886DA78;
    case 590u: goto L_0886DA84;
    case 591u: goto L_0886DA8C;
    case 592u: goto L_0886DA90;
    case 593u: goto L_0886DA98;
    case 594u: goto L_0886DAA0;
    case 595u: goto L_0886DAB0;
    case 596u: goto L_0886DABC;
    case 597u: goto L_0886DAC4;
    case 598u: goto L_0886DACC;
    case 599u: goto L_0886DAE4;
    case 600u: goto L_0886DAEC;
    case 601u: goto L_0886DAF0;
    case 602u: goto L_0886DB10;
    case 603u: goto L_0886DB18;
    case 604u: goto L_0886DB24;
    case 605u: goto L_0886DB30;
    case 606u: goto L_0886DB3C;
    case 607u: goto L_0886DB44;
    case 608u: goto L_0886DB48;
    case 609u: goto L_0886DB50;
    case 610u: goto L_0886DB58;
    case 611u: goto L_0886DB64;
    case 612u: goto L_0886DB70;
    case 613u: goto L_0886DB7C;
    case 614u: goto L_0886DB84;
    case 615u: goto L_0886DB88;
    case 616u: goto L_0886DB90;
    case 617u: goto L_0886DB98;
    case 618u: goto L_0886DBA4;
    case 619u: goto L_0886DBB0;
    case 620u: goto L_0886DBBC;
    case 621u: goto L_0886DBC4;
    case 622u: goto L_0886DBC8;
    case 623u: goto L_0886DBD0;
    case 624u: goto L_0886DBD8;
    case 625u: goto L_0886DBE4;
    case 626u: goto L_0886DBF0;
    case 627u: goto L_0886DBFC;
    case 628u: goto L_0886DC04;
    case 629u: goto L_0886DC08;
    case 630u: goto L_0886DC10;
    case 631u: goto L_0886DC18;
    case 632u: goto L_0886DC24;
    case 633u: goto L_0886DC30;
    case 634u: goto L_0886DC3C;
    case 635u: goto L_0886DC44;
    case 636u: goto L_0886DC48;
    case 637u: goto L_0886DC50;
    case 638u: goto L_0886DC58;
    case 639u: goto L_0886DC64;
    case 640u: goto L_0886DC70;
    case 641u: goto L_0886DC7C;
    case 642u: goto L_0886DC84;
    case 643u: goto L_0886DC88;
    case 644u: goto L_0886DC90;
    case 645u: goto L_0886DC98;
    case 646u: goto L_0886DCA4;
    case 647u: goto L_0886DCB0;
    case 648u: goto L_0886DCBC;
    case 649u: goto L_0886DCC4;
    case 650u: goto L_0886DCC8;
    case 651u: goto L_0886DCD0;
    case 652u: goto L_0886DCD8;
    case 653u: goto L_0886DCE8;
    case 654u: goto L_0886DCF4;
    case 655u: goto L_0886DCFC;
    case 656u: goto L_0886DD04;
    case 657u: goto L_0886DD1C;
    case 658u: goto L_0886DD24;
    case 659u: goto L_0886DD28;
    case 660u: goto L_0886DD48;
    case 661u: goto L_0886DD50;
    case 662u: goto L_0886DD58;
    case 663u: goto L_0886DD64;
    case 664u: goto L_0886DD70;
    case 665u: goto L_0886DD7C;
    case 666u: goto L_0886DD84;
    case 667u: goto L_0886DD8C;
    case 668u: goto L_0886DD98;
    case 669u: goto L_0886DDA0;
    case 670u: goto L_0886DDA8;
    case 671u: goto L_0886DDB8;
    case 672u: goto L_0886DDC4;
    case 673u: goto L_0886DDCC;
    case 674u: goto L_0886DDD4;
    case 675u: goto L_0886DDEC;
    case 676u: goto L_0886DDF4;
    case 677u: goto L_0886DDF8;
    case 678u: goto L_0886DE18;
    case 679u: goto L_0886DE20;
    case 680u: goto L_0886DE28;
    case 681u: goto L_0886DE34;
    case 682u: goto L_0886DE40;
    case 683u: goto L_0886DE4C;
    case 684u: goto L_0886DE54;
    case 685u: goto L_0886DE5C;
    case 686u: goto L_0886DE68;
    case 687u: goto L_0886DE70;
    case 688u: goto L_0886DE78;
    case 689u: goto L_0886DE88;
    case 690u: goto L_0886DE94;
    case 691u: goto L_0886DE9C;
    case 692u: goto L_0886DEA4;
    case 693u: goto L_0886DEBC;
    case 694u: goto L_0886DEC4;
    case 695u: goto L_0886DEC8;
    case 696u: goto L_0886DEE8;
    case 697u: goto L_0886DEF0;
    case 698u: goto L_0886DEFC;
    case 699u: goto L_0886DF08;
    case 700u: goto L_0886DF18;
    case 701u: goto L_0886DF20;
    case 702u: goto L_0886DF24;
    case 703u: goto L_0886DF2C;
    case 704u: goto L_0886DF34;
    case 705u: goto L_0886DF40;
    case 706u: goto L_0886DF4C;
    case 707u: goto L_0886DF5C;
    case 708u: goto L_0886DF64;
    case 709u: goto L_0886DF68;
    case 710u: goto L_0886DF70;
    case 711u: goto L_0886DF78;
    case 712u: goto L_0886DF88;
    case 713u: goto L_0886DF94;
    case 714u: goto L_0886DF9C;
    case 715u: goto L_0886DFA4;
    case 716u: goto L_0886DFBC;
    case 717u: goto L_0886DFC4;
    case 718u: goto L_0886DFC8;
    case 719u: goto L_0886DFE8;
    case 720u: goto L_0886DFF0;
    case 721u: goto L_0886DFFC;
    case 722u: goto L_0886E008;
    case 723u: goto L_0886E018;
    case 724u: goto L_0886E020;
    case 725u: goto L_0886E024;
    case 726u: goto L_0886E02C;
    case 727u: goto L_0886E034;
    case 728u: goto L_0886E044;
    case 729u: goto L_0886E050;
    case 730u: goto L_0886E058;
    case 731u: goto L_0886E060;
    case 732u: goto L_0886E078;
    case 733u: goto L_0886E080;
    case 734u: goto L_0886E084;
    case 735u: goto L_0886E0A4;
    case 736u: goto L_0886E0AC;
    case 737u: goto L_0886E0B8;
    case 738u: goto L_0886E0C4;
    case 739u: goto L_0886E0D4;
    case 740u: goto L_0886E0DC;
    case 741u: goto L_0886E0E0;
    case 742u: goto L_0886E0E8;
    case 743u: goto L_0886E0F0;
    case 744u: goto L_0886E100;
    case 745u: goto L_0886E10C;
    case 746u: goto L_0886E114;
    case 747u: goto L_0886E11C;
    case 748u: goto L_0886E134;
    case 749u: goto L_0886E13C;
    case 750u: goto L_0886E140;
    case 751u: goto L_0886E160;
    case 752u: goto L_0886E168;
    case 753u: goto L_0886E170;
    case 754u: goto L_0886E17C;
    case 755u: goto L_0886E188;
    case 756u: goto L_0886E19C;
    case 757u: goto L_0886E1B0;
    case 758u: goto L_0886E1B8;
    case 759u: goto L_0886E1C0;
    case 760u: goto L_0886E1CC;
    case 761u: goto L_0886E1D8;
    case 762u: goto L_0886E1EC;
    case 763u: goto L_0886E200;
    case 764u: goto L_0886E20C;
    case 765u: goto L_0886E218;
    case 766u: goto L_0886E220;
    case 767u: goto L_0886E224;
    case 768u: goto L_0886E230;
    case 769u: goto L_0886E238;
    case 770u: goto L_0886E240;
    case 771u: goto L_0886E250;
    case 772u: goto L_0886E25C;
    case 773u: goto L_0886E264;
    case 774u: goto L_0886E26C;
    case 775u: goto L_0886E284;
    case 776u: goto L_0886E28C;
    case 777u: goto L_0886E290;
    case 778u: goto L_0886E2B0;
    case 779u: goto L_0886E2B8;
    case 780u: goto L_0886E2C0;
    case 781u: goto L_0886E2CC;
    case 782u: goto L_0886E2D8;
    case 783u: goto L_0886E2EC;
    case 784u: goto L_0886E300;
    case 785u: goto L_0886E308;
    case 786u: goto L_0886E310;
    case 787u: goto L_0886E31C;
    case 788u: goto L_0886E328;
    case 789u: goto L_0886E33C;
    case 790u: goto L_0886E350;
    case 791u: goto L_0886E35C;
    case 792u: goto L_0886E368;
    case 793u: goto L_0886E370;
    case 794u: goto L_0886E374;
    case 795u: goto L_0886E380;
    case 796u: goto L_0886E388;
    case 797u: goto L_0886E390;
    case 798u: goto L_0886E3A0;
    case 799u: goto L_0886E3AC;
    case 800u: goto L_0886E3B4;
    case 801u: goto L_0886E3BC;
    case 802u: goto L_0886E3D4;
    case 803u: goto L_0886E3DC;
    case 804u: goto L_0886E3E0;
    case 805u: goto L_0886E400;
    case 806u: goto L_0886E408;
    case 807u: goto L_0886E410;
    case 808u: goto L_0886E41C;
    case 809u: goto L_0886E428;
    case 810u: goto L_0886E43C;
    case 811u: goto L_0886E450;
    case 812u: goto L_0886E458;
    case 813u: goto L_0886E460;
    case 814u: goto L_0886E46C;
    case 815u: goto L_0886E478;
    case 816u: goto L_0886E48C;
    case 817u: goto L_0886E4A0;
    case 818u: goto L_0886E4AC;
    case 819u: goto L_0886E4B8;
    case 820u: goto L_0886E4C0;
    case 821u: goto L_0886E4C4;
    case 822u: goto L_0886E4D0;
    case 823u: goto L_0886E4D8;
    case 824u: goto L_0886E4E0;
    case 825u: goto L_0886E4F0;
    case 826u: goto L_0886E4FC;
    case 827u: goto L_0886E504;
    case 828u: goto L_0886E50C;
    case 829u: goto L_0886E524;
    case 830u: goto L_0886E52C;
    case 831u: goto L_0886E530;
    case 832u: goto L_0886E550;
    case 833u: goto L_0886E558;
    case 834u: goto L_0886E560;
    case 835u: goto L_0886E56C;
    case 836u: goto L_0886E578;
    case 837u: goto L_0886E58C;
    case 838u: goto L_0886E5A0;
    case 839u: goto L_0886E5A8;
    case 840u: goto L_0886E5B0;
    case 841u: goto L_0886E5BC;
    case 842u: goto L_0886E5C8;
    case 843u: goto L_0886E5DC;
    case 844u: goto L_0886E5F0;
    case 845u: goto L_0886E5FC;
    case 846u: goto L_0886E608;
    case 847u: goto L_0886E610;
    case 848u: goto L_0886E614;
    case 849u: goto L_0886E620;
    case 850u: goto L_0886E628;
    case 851u: goto L_0886E630;
    case 852u: goto L_0886E640;
    case 853u: goto L_0886E64C;
    case 854u: goto L_0886E654;
    case 855u: goto L_0886E65C;
    case 856u: goto L_0886E674;
    case 857u: goto L_0886E67C;
    case 858u: goto L_0886E680;
    case 859u: goto L_0886E6A0;
    case 860u: goto L_0886E6A8;
    case 861u: goto L_0886E6B0;
    case 862u: goto L_0886E6BC;
    case 863u: goto L_0886E6C8;
    case 864u: goto L_0886E6DC;
    case 865u: goto L_0886E6F0;
    case 866u: goto L_0886E6F8;
    case 867u: goto L_0886E700;
    case 868u: goto L_0886E70C;
    case 869u: goto L_0886E718;
    case 870u: goto L_0886E72C;
    case 871u: goto L_0886E740;
    case 872u: goto L_0886E74C;
    case 873u: goto L_0886E758;
    case 874u: goto L_0886E760;
    case 875u: goto L_0886E764;
    case 876u: goto L_0886E770;
    case 877u: goto L_0886E778;
    case 878u: goto L_0886E780;
    case 879u: goto L_0886E790;
    case 880u: goto L_0886E79C;
    case 881u: goto L_0886E7A4;
    case 882u: goto L_0886E7AC;
    case 883u: goto L_0886E7C4;
    case 884u: goto L_0886E7CC;
    case 885u: goto L_0886E7D0;
    case 886u: goto L_0886E7F0;
    case 887u: goto L_0886E7F8;
    case 888u: goto L_0886E800;
    case 889u: goto L_0886E80C;
    case 890u: goto L_0886E818;
    case 891u: goto L_0886E82C;
    case 892u: goto L_0886E840;
    case 893u: goto L_0886E848;
    case 894u: goto L_0886E850;
    case 895u: goto L_0886E85C;
    case 896u: goto L_0886E868;
    case 897u: goto L_0886E87C;
    case 898u: goto L_0886E890;
    case 899u: goto L_0886E89C;
    case 900u: goto L_0886E8A8;
    case 901u: goto L_0886E8B0;
    case 902u: goto L_0886E8B4;
    case 903u: goto L_0886E8C0;
    case 904u: goto L_0886E8C8;
    case 905u: goto L_0886E8D0;
    case 906u: goto L_0886E8E0;
    case 907u: goto L_0886E8EC;
    case 908u: goto L_0886E8F4;
    case 909u: goto L_0886E8FC;
    case 910u: goto L_0886E914;
    case 911u: goto L_0886E918;
    case 912u: goto L_0886E920;
    case 913u: goto L_0886E924;
    case 914u: goto L_0886E94C;
    case 915u: goto L_0886E960;
    case 916u: goto L_0886E968;
    case 917u: goto L_0886E974;
    case 918u: goto L_0886E97C;
    case 919u: goto L_0886E984;
    case 920u: goto L_0886E98C;
    case 921u: goto L_0886E994;
    case 922u: goto L_0886E998;
    case 923u: goto L_0886E9A4;
    case 924u: goto L_0886E9C0;
    case 925u: goto L_0886E9C8;
    case 926u: goto L_0886E9D0;
    case 927u: goto L_0886E9D8;
    case 928u: goto L_0886E9E0;
    case 929u: goto L_0886E9E8;
    case 930u: goto L_0886E9F0;
    case 931u: goto L_0886E9F8;
    case 932u: goto L_0886EA00;
    case 933u: goto L_0886EA08;
    case 934u: goto L_0886EA10;
    case 935u: goto L_0886EA18;
    case 936u: goto L_0886EA20;
    case 937u: goto L_0886EA28;
    case 938u: goto L_0886EA30;
    case 939u: goto L_0886EA38;
    case 940u: goto L_0886EA40;
    case 941u: goto L_0886EA48;
    case 942u: goto L_0886EA50;
    case 943u: goto L_0886EA58;
    case 944u: goto L_0886EA60;
    case 945u: goto L_0886EA68;
    case 946u: goto L_0886EA70;
    case 947u: goto L_0886EA78;
    case 948u: goto L_0886EA80;
    case 949u: goto L_0886EA88;
    case 950u: goto L_0886EA90;
    case 951u: goto L_0886EA98;
    case 952u: goto L_0886EAA0;
    case 953u: goto L_0886EAA8;
    case 954u: goto L_0886EAB0;
    case 955u: goto L_0886EAB8;
    case 956u: goto L_0886EAC0;
    case 957u: goto L_0886EAC8;
    case 958u: goto L_0886EAD0;
    case 959u: goto L_0886EAD8;
    case 960u: goto L_0886EAE0;
    case 961u: goto L_0886EAE8;
    case 962u: goto L_0886EAF0;
    case 963u: goto L_0886EAF8;
    case 964u: goto L_0886EB00;
    case 965u: goto L_0886EB08;
    case 966u: goto L_0886EB10;
    case 967u: goto L_0886EB18;
    case 968u: goto L_0886EB20;
    case 969u: goto L_0886EB28;
    case 970u: goto L_0886EB30;
    case 971u: goto L_0886EB38;
    case 972u: goto L_0886EB40;
    case 973u: goto L_0886EB48;
    case 974u: goto L_0886EB50;
    case 975u: goto L_0886EB58;
    case 976u: goto L_0886EB60;
    case 977u: goto L_0886EB68;
    case 978u: goto L_0886EB70;
    case 979u: goto L_0886EB78;
    case 980u: goto L_0886EB80;
    case 981u: goto L_0886EB88;
    case 982u: goto L_0886EB90;
    case 983u: goto L_0886EB98;
    case 984u: goto L_0886EBA0;
    case 985u: goto L_0886EBA8;
    case 986u: goto L_0886EBB0;
    case 987u: goto L_0886EBB8;
    case 988u: goto L_0886EBC0;
    case 989u: goto L_0886EBC8;
    case 990u: goto L_0886EBD0;
    case 991u: goto L_0886EBD8;
    case 992u: goto L_0886EBE0;
    case 993u: goto L_0886EBE8;
    case 994u: goto L_0886EBF0;
    case 995u: goto L_0886EBF8;
    case 996u: goto L_0886EBFC;
    case 997u: goto L_0886EC0C;
    case 998u: goto L_0886EC24;
    case 999u: goto L_0886EC2C;
    case 1000u: goto L_0886EC38;
    case 1001u: goto L_0886EC40;
    case 1002u: goto L_0886EC48;
    case 1003u: goto L_0886EC54;
    case 1004u: goto L_0886EC6C;
    case 1005u: goto L_0886EC74;
    case 1006u: goto L_0886EC7C;
    case 1007u: goto L_0886EC84;
    case 1008u: goto L_0886EC8C;
    case 1009u: goto L_0886ECA0;
    case 1010u: goto L_0886ECBC;
    case 1011u: goto L_0886ECC8;
    case 1012u: goto L_0886ECD0;
    case 1013u: goto L_0886ECD8;
    case 1014u: goto L_0886ECE8;
    case 1015u: goto L_0886ECF4;
    case 1016u: goto L_0886ECFC;
    case 1017u: goto L_0886ED04;
    case 1018u: goto L_0886ED1C;
    case 1019u: goto L_0886ED20;
    case 1020u: goto L_0886ED2C;
    case 1021u: goto L_0886ED40;
    case 1022u: goto L_0886ED6C;
    case 1023u: goto L_0886ED74;
    case 1024u: goto L_0886ED7C;
    case 1025u: goto L_0886ED84;
    case 1026u: goto L_0886ED8C;
    case 1027u: goto L_0886EDA0;
    case 1028u: goto L_0886EDA8;
    case 1029u: goto L_0886EDB0;
    case 1030u: goto L_0886EDC4;
    case 1031u: goto L_0886EDCC;
    case 1032u: goto L_0886EDD4;
    case 1033u: goto L_0886EDE8;
    case 1034u: goto L_0886EE04;
    case 1035u: goto L_0886EE10;
    case 1036u: goto L_0886EE18;
    case 1037u: goto L_0886EE20;
    case 1038u: goto L_0886EE30;
    case 1039u: goto L_0886EE3C;
    case 1040u: goto L_0886EE44;
    case 1041u: goto L_0886EE4C;
    case 1042u: goto L_0886EE64;
    case 1043u: goto L_0886EE68;
    case 1044u: goto L_0886EE74;
    case 1045u: goto L_0886EE88;
    case 1046u: goto L_0886EEB4;
    case 1047u: goto L_0886EEBC;
    case 1048u: goto L_0886EEC4;
    case 1049u: goto L_0886EECC;
    case 1050u: goto L_0886EED4;
    case 1051u: goto L_0886EEE8;
    case 1052u: goto L_0886EF04;
    case 1053u: goto L_0886EF10;
    case 1054u: goto L_0886EF18;
    case 1055u: goto L_0886EF20;
    case 1056u: goto L_0886EF30;
    case 1057u: goto L_0886EF3C;
    case 1058u: goto L_0886EF44;
    case 1059u: goto L_0886EF4C;
    case 1060u: goto L_0886EF64;
    case 1061u: goto L_0886EF68;
    case 1062u: goto L_0886EF74;
    case 1063u: goto L_0886EF88;
    case 1064u: goto L_0886EFB4;
    case 1065u: goto L_0886EFBC;
    case 1066u: goto L_0886EFC4;
    case 1067u: goto L_0886EFCC;
    case 1068u: goto L_0886EFD4;
    case 1069u: goto L_0886EFE8;
    case 1070u: goto L_0886F004;
    case 1071u: goto L_0886F010;
    case 1072u: goto L_0886F018;
    case 1073u: goto L_0886F020;
    case 1074u: goto L_0886F030;
    case 1075u: goto L_0886F03C;
    case 1076u: goto L_0886F044;
    case 1077u: goto L_0886F04C;
    case 1078u: goto L_0886F064;
    case 1079u: goto L_0886F068;
    case 1080u: goto L_0886F074;
    case 1081u: goto L_0886F088;
    case 1082u: goto L_0886F0B4;
    case 1083u: goto L_0886F0BC;
    case 1084u: goto L_0886F0C4;
    case 1085u: goto L_0886F0CC;
    case 1086u: goto L_0886F0D4;
    case 1087u: goto L_0886F0E8;
    case 1088u: goto L_0886F104;
    case 1089u: goto L_0886F110;
    case 1090u: goto L_0886F118;
    case 1091u: goto L_0886F120;
    case 1092u: goto L_0886F130;
    case 1093u: goto L_0886F13C;
    case 1094u: goto L_0886F144;
    case 1095u: goto L_0886F14C;
    case 1096u: goto L_0886F164;
    case 1097u: goto L_0886F168;
    case 1098u: goto L_0886F174;
    case 1099u: goto L_0886F188;
    case 1100u: goto L_0886F1B4;
    case 1101u: goto L_0886F1BC;
    case 1102u: goto L_0886F1C4;
    case 1103u: goto L_0886F1CC;
    case 1104u: goto L_0886F1D4;
    case 1105u: goto L_0886F1E8;
    case 1106u: goto L_0886F1F0;
    case 1107u: goto L_0886F1F8;
    case 1108u: goto L_0886F20C;
    case 1109u: goto L_0886F214;
    case 1110u: goto L_0886F21C;
    case 1111u: goto L_0886F230;
    case 1112u: goto L_0886F24C;
    case 1113u: goto L_0886F258;
    case 1114u: goto L_0886F260;
    case 1115u: goto L_0886F268;
    case 1116u: goto L_0886F278;
    case 1117u: goto L_0886F284;
    case 1118u: goto L_0886F28C;
    case 1119u: goto L_0886F294;
    case 1120u: goto L_0886F2AC;
    case 1121u: goto L_0886F2B0;
    case 1122u: goto L_0886F2BC;
    case 1123u: goto L_0886F2D0;
    case 1124u: goto L_0886F2FC;
    case 1125u: goto L_0886F304;
    case 1126u: goto L_0886F30C;
    case 1127u: goto L_0886F314;
    case 1128u: goto L_0886F31C;
    case 1129u: goto L_0886F330;
    case 1130u: goto L_0886F34C;
    case 1131u: goto L_0886F358;
    case 1132u: goto L_0886F360;
    case 1133u: goto L_0886F368;
    case 1134u: goto L_0886F378;
    case 1135u: goto L_0886F384;
    case 1136u: goto L_0886F38C;
    case 1137u: goto L_0886F394;
    case 1138u: goto L_0886F3AC;
    case 1139u: goto L_0886F3B0;
    case 1140u: goto L_0886F3BC;
    case 1141u: goto L_0886F3D0;
    case 1142u: goto L_0886F3FC;
    case 1143u: goto L_0886F404;
    case 1144u: goto L_0886F40C;
    case 1145u: goto L_0886F414;
    case 1146u: goto L_0886F41C;
    case 1147u: goto L_0886F430;
    case 1148u: goto L_0886F44C;
    case 1149u: goto L_0886F458;
    case 1150u: goto L_0886F460;
    case 1151u: goto L_0886F468;
    case 1152u: goto L_0886F478;
    case 1153u: goto L_0886F484;
    case 1154u: goto L_0886F48C;
    case 1155u: goto L_0886F494;
    case 1156u: goto L_0886F4AC;
    case 1157u: goto L_0886F4B0;
    case 1158u: goto L_0886F4BC;
    case 1159u: goto L_0886F4D0;
    case 1160u: goto L_0886F4FC;
    case 1161u: goto L_0886F504;
    case 1162u: goto L_0886F50C;
    case 1163u: goto L_0886F514;
    case 1164u: goto L_0886F51C;
    case 1165u: goto L_0886F530;
    case 1166u: goto L_0886F54C;
    case 1167u: goto L_0886F558;
    case 1168u: goto L_0886F560;
    case 1169u: goto L_0886F568;
    case 1170u: goto L_0886F578;
    case 1171u: goto L_0886F584;
    case 1172u: goto L_0886F58C;
    case 1173u: goto L_0886F594;
    case 1174u: goto L_0886F5AC;
    case 1175u: goto L_0886F5B0;
    case 1176u: goto L_0886F5BC;
    case 1177u: goto L_0886F5D0;
    case 1178u: goto L_0886F5FC;
    case 1179u: goto L_0886F604;
    case 1180u: goto L_0886F60C;
    case 1181u: goto L_0886F614;
    case 1182u: goto L_0886F61C;
    case 1183u: goto L_0886F630;
    case 1184u: goto L_0886F64C;
    case 1185u: goto L_0886F658;
    case 1186u: goto L_0886F660;
    case 1187u: goto L_0886F668;
    case 1188u: goto L_0886F678;
    case 1189u: goto L_0886F684;
    case 1190u: goto L_0886F68C;
    case 1191u: goto L_0886F694;
    case 1192u: goto L_0886F6AC;
    case 1193u: goto L_0886F6B0;
    case 1194u: goto L_0886F6BC;
    case 1195u: goto L_0886F6D0;
    case 1196u: goto L_0886F6FC;
    case 1197u: goto L_0886F704;
    case 1198u: goto L_0886F70C;
    case 1199u: goto L_0886F714;
    case 1200u: goto L_0886F71C;
    case 1201u: goto L_0886F730;
    case 1202u: goto L_0886F738;
    case 1203u: goto L_0886F740;
    case 1204u: goto L_0886F754;
    case 1205u: goto L_0886F75C;
    case 1206u: goto L_0886F764;
    case 1207u: goto L_0886F778;
    case 1208u: goto L_0886F794;
    case 1209u: goto L_0886F7A0;
    case 1210u: goto L_0886F7A8;
    case 1211u: goto L_0886F7B0;
    case 1212u: goto L_0886F7C0;
    case 1213u: goto L_0886F7CC;
    case 1214u: goto L_0886F7D4;
    case 1215u: goto L_0886F7DC;
    case 1216u: goto L_0886F7F4;
    case 1217u: goto L_0886F7F8;
    case 1218u: goto L_0886F804;
    case 1219u: goto L_0886F818;
    case 1220u: goto L_0886F844;
    case 1221u: goto L_0886F84C;
    case 1222u: goto L_0886F854;
    case 1223u: goto L_0886F85C;
    case 1224u: goto L_0886F864;
    case 1225u: goto L_0886F878;
    case 1226u: goto L_0886F894;
    case 1227u: goto L_0886F8A0;
    case 1228u: goto L_0886F8A8;
    case 1229u: goto L_0886F8B0;
    case 1230u: goto L_0886F8C0;
    case 1231u: goto L_0886F8CC;
    case 1232u: goto L_0886F8D4;
    case 1233u: goto L_0886F8DC;
    case 1234u: goto L_0886F8F4;
    case 1235u: goto L_0886F8F8;
    case 1236u: goto L_0886F904;
    case 1237u: goto L_0886F918;
    case 1238u: goto L_0886F944;
    case 1239u: goto L_0886F94C;
    case 1240u: goto L_0886F954;
    case 1241u: goto L_0886F95C;
    case 1242u: goto L_0886F964;
    case 1243u: goto L_0886F978;
    case 1244u: goto L_0886F994;
    case 1245u: goto L_0886F9A0;
    case 1246u: goto L_0886F9A8;
    case 1247u: goto L_0886F9B0;
    case 1248u: goto L_0886F9C0;
    case 1249u: goto L_0886F9CC;
    case 1250u: goto L_0886F9D4;
    case 1251u: goto L_0886F9DC;
    case 1252u: goto L_0886F9F4;
    case 1253u: goto L_0886F9F8;
    case 1254u: goto L_0886FA04;
    case 1255u: goto L_0886FA18;
    case 1256u: goto L_0886FA44;
    case 1257u: goto L_0886FA4C;
    case 1258u: goto L_0886FA54;
    case 1259u: goto L_0886FA5C;
    case 1260u: goto L_0886FA64;
    case 1261u: goto L_0886FA78;
    case 1262u: goto L_0886FA94;
    case 1263u: goto L_0886FAA0;
    case 1264u: goto L_0886FAA8;
    case 1265u: goto L_0886FAB0;
    case 1266u: goto L_0886FAC0;
    case 1267u: goto L_0886FACC;
    case 1268u: goto L_0886FAD4;
    case 1269u: goto L_0886FADC;
    case 1270u: goto L_0886FAF4;
    case 1271u: goto L_0886FAF8;
    case 1272u: goto L_0886FB04;
    case 1273u: goto L_0886FB18;
    case 1274u: goto L_0886FB44;
    case 1275u: goto L_0886FB4C;
    case 1276u: goto L_0886FB54;
    case 1277u: goto L_0886FB5C;
    case 1278u: goto L_0886FB64;
    case 1279u: goto L_0886FB78;
    case 1280u: goto L_0886FB94;
    case 1281u: goto L_0886FBA0;
    case 1282u: goto L_0886FBA8;
    case 1283u: goto L_0886FBB0;
    case 1284u: goto L_0886FBC0;
    case 1285u: goto L_0886FBCC;
    case 1286u: goto L_0886FBD4;
    case 1287u: goto L_0886FBDC;
    case 1288u: goto L_0886FBF4;
    case 1289u: goto L_0886FBF8;
    case 1290u: goto L_0886FC04;
    case 1291u: goto L_0886FC18;
    case 1292u: goto L_0886FC44;
    case 1293u: goto L_0886FC4C;
    case 1294u: goto L_0886FC54;
    case 1295u: goto L_0886FC5C;
    case 1296u: goto L_0886FC64;
    case 1297u: goto L_0886FC78;
    case 1298u: goto L_0886FC80;
    case 1299u: goto L_0886FC88;
    case 1300u: goto L_0886FC9C;
    case 1301u: goto L_0886FCA4;
    case 1302u: goto L_0886FCAC;
    case 1303u: goto L_0886FCC0;
    case 1304u: goto L_0886FCDC;
    case 1305u: goto L_0886FCE8;
    case 1306u: goto L_0886FCF0;
    case 1307u: goto L_0886FCF8;
    case 1308u: goto L_0886FD08;
    case 1309u: goto L_0886FD14;
    case 1310u: goto L_0886FD1C;
    case 1311u: goto L_0886FD24;
    case 1312u: goto L_0886FD3C;
    case 1313u: goto L_0886FD40;
    case 1314u: goto L_0886FD4C;
    case 1315u: goto L_0886FD60;
    case 1316u: goto L_0886FD8C;
    case 1317u: goto L_0886FD94;
    case 1318u: goto L_0886FD9C;
    case 1319u: goto L_0886FDA4;
    case 1320u: goto L_0886FDAC;
    case 1321u: goto L_0886FDC0;
    case 1322u: goto L_0886FDC8;
    case 1323u: goto L_0886FDD0;
    case 1324u: goto L_0886FDE4;
    case 1325u: goto L_0886FDEC;
    case 1326u: goto L_0886FDF4;
    case 1327u: goto L_0886FE08;
    case 1328u: goto L_0886FE24;
    case 1329u: goto L_0886FE30;
    case 1330u: goto L_0886FE38;
    case 1331u: goto L_0886FE40;
    case 1332u: goto L_0886FE50;
    case 1333u: goto L_0886FE5C;
    case 1334u: goto L_0886FE64;
    case 1335u: goto L_0886FE6C;
    case 1336u: goto L_0886FE84;
    case 1337u: goto L_0886FE88;
    case 1338u: goto L_0886FE94;
    case 1339u: goto L_0886FEA8;
    case 1340u: goto L_0886FED4;
    case 1341u: goto L_0886FEDC;
    case 1342u: goto L_0886FEE4;
    case 1343u: goto L_0886FEEC;
    case 1344u: goto L_0886FEF4;
    case 1345u: goto L_0886FF08;
    case 1346u: goto L_0886FF24;
    case 1347u: goto L_0886FF30;
    case 1348u: goto L_0886FF38;
    case 1349u: goto L_0886FF40;
    case 1350u: goto L_0886FF50;
    case 1351u: goto L_0886FF5C;
    case 1352u: goto L_0886FF64;
    case 1353u: goto L_0886FF6C;
    case 1354u: goto L_0886FF84;
    case 1355u: goto L_0886FF88;
    case 1356u: goto L_0886FF94;
    case 1357u: goto L_0886FFA8;
    case 1358u: goto L_0886FFD4;
    case 1359u: goto L_0886FFDC;
    case 1360u: goto L_0886FFE4;
    case 1361u: goto L_0886FFEC;
    case 1362u: goto L_0886FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0886C000:
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 924u, 0x0886BFF0u>(ctx, &aot_mem); return;
      }
      goto L_0886C010;
    }
L_0886C010:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0886C034u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C034u) goto L_0886C034;
    return;
L_0886C034:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C040:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2528));
    ctx.set_gpr(7, 2227u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-3132));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2501));
    goto L_0886C058;
L_0886C058:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886C058;
      }
      goto L_0886C070;
    }
L_0886C070:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0886C094u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C094u) goto L_0886C094;
    return;
L_0886C094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C0A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-17456)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0886C1B4;
    }
    goto L_0886C0C8;
L_0886C0C8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0886C0D8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x0886C0D8u) goto L_0886C0D8;
    return;
L_0886C0D8:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17672)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(31, 0x0886C100u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C100u) goto L_0886C100;
    return;
L_0886C100:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-628));
    ctx.set_gpr(31, 0x0886C11Cu);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x0886C11Cu) goto L_0886C11C;
    return;
L_0886C11C:
    ctx.set_gpr(31, 0x0886C124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886C124u) goto L_0886C124;
    return;
L_0886C124:
    ctx.set_gpr(31, 0x0886C12Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C12Cu) goto L_0886C12C;
    return;
L_0886C12C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_0886C160;
    }
    goto L_0886C134;
L_0886C134:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17672)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C158u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C158u) goto L_0886C158;
    return;
L_0886C158:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
      if (branch_taken) {
          goto L_0886C180;
      }
      goto L_0886C160;
    }
L_0886C160:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17672)));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C17Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C17Cu) goto L_0886C17C;
    return;
L_0886C17C:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(15064));
    goto L_0886C180;
L_0886C180:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0886C198u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-628));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x0886C198u) goto L_0886C198;
    return;
L_0886C198:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C1B0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C1B0u) goto L_0886C1B0;
    return;
L_0886C1B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886C1B4;
L_0886C1B4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C1C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886C1D8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0886C0A0;
L_0886C1D8:
    ctx.set_gpr(31, 0x0886C1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C1E0u) goto L_0886C1E0;
    return;
L_0886C1E0:
    ctx.set_gpr(31, 0x0886C1E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 622u, 0x088571D0u>(ctx, &aot_mem) && ctx.pc == 0x0886C1E8u) goto L_0886C1E8;
    return;
L_0886C1E8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0886C214;
      }
      goto L_0886C1F8;
    }
L_0886C1F8:
    ctx.set_gpr(31, 0x0886C200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C200u) goto L_0886C200;
    return;
L_0886C200:
    ctx.set_gpr(31, 0x0886C208u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 619u, 0x088571B0u>(ctx, &aot_mem) && ctx.pc == 0x0886C208u) goto L_0886C208;
    return;
L_0886C208:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0886C3DC;
    }
    goto L_0886C214;
L_0886C214:
    ctx.set_gpr(31, 0x0886C21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C21Cu) goto L_0886C21C;
    return;
L_0886C21C:
    ctx.set_gpr(31, 0x0886C224u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C224u) goto L_0886C224;
    return;
L_0886C224:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886C3D8;
      }
      goto L_0886C230;
    }
L_0886C230:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0886C240u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x0886C240u) goto L_0886C240;
    return;
L_0886C240:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-17623)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C3D8;
      }
      goto L_0886C254;
    }
L_0886C254:
    ctx.set_gpr(31, 0x0886C25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C25Cu) goto L_0886C25C;
    return;
L_0886C25C:
    ctx.set_gpr(31, 0x0886C264u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C264u) goto L_0886C264;
    return;
L_0886C264:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0886C320;
    }
    goto L_0886C270;
L_0886C270:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(31, 0x0886C27Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x0886C27Cu) goto L_0886C27C;
    return;
L_0886C27C:
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
      if (branch_taken) {
          goto L_0886C298;
      }
      goto L_0886C290;
    }
L_0886C290:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_0886C298;
L_0886C298:
    ctx.set_gpr(31, 0x0886C2A0u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x0886C2A0u) goto L_0886C2A0;
    return;
L_0886C2A0:
    ctx.set_gpr(31, 0x0886C2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886C2A8u) goto L_0886C2A8;
    return;
L_0886C2A8:
    ctx.set_gpr(31, 0x0886C2B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C2B0u) goto L_0886C2B0;
    return;
L_0886C2B0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_0886C2E0;
    }
    goto L_0886C2B8;
L_0886C2B8:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C2D8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C2D8u) goto L_0886C2D8;
    return;
L_0886C2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(15112));
      if (branch_taken) {
          goto L_0886C2F8;
      }
      goto L_0886C2E0;
    }
L_0886C2E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C2F4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C2F4u) goto L_0886C2F4;
    return;
L_0886C2F4:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(15112));
    goto L_0886C2F8;
L_0886C2F8:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x0886C310u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-628));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x0886C310u) goto L_0886C310;
    return;
L_0886C310:
    ctx.set_gpr(31, 0x0886C318u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x0886C318u) goto L_0886C318;
    return;
L_0886C318:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_0886C3C4;
      }
      goto L_0886C320;
    }
L_0886C320:
    ctx.set_gpr(2, 16192u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C334u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C334u) goto L_0886C334;
    return;
L_0886C334:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(15112));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(254));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-628));
    ctx.set_gpr(31, 0x0886C350u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x0886C350u) goto L_0886C350;
    return;
L_0886C350:
    ctx.set_gpr(31, 0x0886C358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x0886C358u) goto L_0886C358;
    return;
L_0886C358:
    ctx.set_gpr(31, 0x0886C360u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C360u) goto L_0886C360;
    return;
L_0886C360:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_0886C390;
    }
    goto L_0886C368;
L_0886C368:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C388u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C388u) goto L_0886C388;
    return;
L_0886C388:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(15112));
      if (branch_taken) {
          goto L_0886C3A8;
      }
      goto L_0886C390;
    }
L_0886C390:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C3A4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C3A4u) goto L_0886C3A4;
    return;
L_0886C3A4:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(15112));
    goto L_0886C3A8;
L_0886C3A8:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(253));
    ctx.set_gpr(31, 0x0886C3C0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-628));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x0886C3C0u) goto L_0886C3C0;
    return;
L_0886C3C0:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_0886C3C4;
L_0886C3C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0886C3D8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x0886C3D8u) goto L_0886C3D8;
    return;
L_0886C3D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0886C3DC;
L_0886C3DC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C3EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886C404u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C404u) goto L_0886C404;
    return;
L_0886C404:
    ctx.set_gpr(31, 0x0886C40Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C40Cu) goto L_0886C40C;
    return;
L_0886C40C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0886C420;
      }
      goto L_0886C418;
    }
L_0886C418:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886C470;
      }
      goto L_0886C420;
    }
L_0886C420:
    ctx.set_gpr(31, 0x0886C428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C428u) goto L_0886C428;
    return;
L_0886C428:
    ctx.set_gpr(31, 0x0886C430u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0886C484;
L_0886C430:
    ctx.set_gpr(31, 0x0886C438u);
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C438u) goto L_0886C438;
    return;
L_0886C438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C444u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 558u, 0x08862130u>(ctx, &aot_mem) && ctx.pc == 0x0886C444u) goto L_0886C444;
    return;
L_0886C444:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_0886C470;
    }
    goto L_0886C44C;
L_0886C44C:
    ctx.set_gpr(31, 0x0886C454u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x0886C454u) goto L_0886C454;
    return;
L_0886C454:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886C46Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886C46Cu) goto L_0886C46C;
    return;
L_0886C46C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886C470;
L_0886C470:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C484:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4683)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886C4B4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C4B4u) goto L_0886C4B4;
    return;
L_0886C4B4:
    ctx.set_gpr(31, 0x0886C4BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C4BCu) goto L_0886C4BC;
    return;
L_0886C4BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886C4EC;
    }
    goto L_0886C4C8;
L_0886C4C8:
    ctx.set_gpr(31, 0x0886C4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C4D0u) goto L_0886C4D0;
    return;
L_0886C4D0:
    ctx.set_gpr(31, 0x0886C4D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C4D8u) goto L_0886C4D8;
    return;
L_0886C4D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C4E8;
      }
      goto L_0886C4E0;
    }
L_0886C4E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886C71C;
      }
      goto L_0886C4E8;
    }
L_0886C4E8:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886C4EC;
L_0886C4EC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
        goto L_0886C508;
    }
    goto L_0886C500;
L_0886C500:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886C71C;
      }
      goto L_0886C508;
    }
L_0886C508:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C518;
    }
L_0886C518:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(9448));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886C534:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C53C;
    }
L_0886C53C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C544;
    }
L_0886C544:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C54C;
    }
L_0886C54C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C554;
    }
L_0886C554:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C55C;
    }
L_0886C55C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C564;
    }
L_0886C564:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C56C;
    }
L_0886C56C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C574;
    }
L_0886C574:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(13));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C57C;
    }
L_0886C57C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C584;
    }
L_0886C584:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(11));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C58C;
    }
L_0886C58C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C594;
    }
L_0886C594:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(26));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C59C;
    }
L_0886C59C:
    ctx.set_gpr(31, 0x0886C5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C5A4u) goto L_0886C5A4;
    return;
L_0886C5A4:
    ctx.set_gpr(31, 0x0886C5ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C5ACu) goto L_0886C5AC;
    return;
L_0886C5AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C5B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886C5B8u) goto L_0886C5B8;
    return;
L_0886C5B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C5C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C5C4u) goto L_0886C5C4;
    return;
L_0886C5C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886C5D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C5D4u) goto L_0886C5D4;
    return;
L_0886C5D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_0886C5E8;
    }
    goto L_0886C5E0;
L_0886C5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C5E8;
    }
L_0886C5E8:
    ctx.set_gpr(31, 0x0886C5F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C5F0u) goto L_0886C5F0;
    return;
L_0886C5F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(18));
        goto L_0886C6C8;
    }
    goto L_0886C5FC;
L_0886C5FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(34));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C604;
    }
L_0886C604:
    ctx.set_gpr(31, 0x0886C60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C60Cu) goto L_0886C60C;
    return;
L_0886C60C:
    ctx.set_gpr(31, 0x0886C614u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C614u) goto L_0886C614;
    return;
L_0886C614:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C620u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886C620u) goto L_0886C620;
    return;
L_0886C620:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C62Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C62Cu) goto L_0886C62C;
    return;
L_0886C62C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0886C63Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C63Cu) goto L_0886C63C;
    return;
L_0886C63C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_0886C650;
    }
    goto L_0886C648;
L_0886C648:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(33));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C650;
    }
L_0886C650:
    ctx.set_gpr(31, 0x0886C658u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886C658u) goto L_0886C658;
    return;
L_0886C658:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
        goto L_0886C6CC;
    }
    goto L_0886C664;
L_0886C664:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(35));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C66C;
    }
L_0886C66C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(19));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C674;
    }
L_0886C674:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C67C;
    }
L_0886C67C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(17));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C684;
    }
L_0886C684:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(22));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C68C;
    }
L_0886C68C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(23));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C694;
    }
L_0886C694:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C69C;
    }
L_0886C69C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(25));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C6A4;
    }
L_0886C6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C6AC;
    }
L_0886C6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(27));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C6B4;
    }
L_0886C6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C6BC;
    }
L_0886C6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(29));
      if (branch_taken) {
          goto L_0886C6C8;
      }
      goto L_0886C6C4;
    }
L_0886C6C4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(28));
    goto L_0886C6C8;
L_0886C6C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(36));
    goto L_0886C6CC;
L_0886C6CC:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0886C71C;
    }
    goto L_0886C6D4;
L_0886C6D4:
    ctx.set_gpr(31, 0x0886C6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C6DCu) goto L_0886C6DC;
    return;
L_0886C6DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886C6ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 542u, 0x08862000u>(ctx, &aot_mem) && ctx.pc == 0x0886C6ECu) goto L_0886C6EC;
    return;
L_0886C6EC:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C718;
      }
      goto L_0886C6F8;
    }
L_0886C6F8:
    ctx.set_gpr(31, 0x0886C700u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 973u, 0x08AB3890u>(ctx, &aot_mem) && ctx.pc == 0x0886C700u) goto L_0886C700;
    return;
L_0886C700:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886C718u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886C718u) goto L_0886C718;
    return;
L_0886C718:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0886C71C;
L_0886C71C:
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
L_0886C738:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886C754u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C754u) goto L_0886C754;
    return;
L_0886C754:
    ctx.set_gpr(31, 0x0886C75Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C75Cu) goto L_0886C75C;
    return;
L_0886C75C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886C78C;
    }
    goto L_0886C768;
L_0886C768:
    ctx.set_gpr(31, 0x0886C770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C770u) goto L_0886C770;
    return;
L_0886C770:
    ctx.set_gpr(31, 0x0886C778u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886C778u) goto L_0886C778;
    return;
L_0886C778:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886C788;
      }
      goto L_0886C780;
    }
L_0886C780:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886CA30;
      }
      goto L_0886C788;
    }
L_0886C788:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886C78C;
L_0886C78C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, 2227u << 16u);
        goto L_0886C7A8;
    }
    goto L_0886C7A0;
L_0886C7A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886CA30;
      }
      goto L_0886C7A8;
    }
L_0886C7A8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-616));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(14));
    goto L_0886C7B4;
L_0886C7B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886C7B4;
      }
      goto L_0886C7D4;
    }
L_0886C7D4:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-504));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_0886C7E4;
L_0886C7E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886C7E4;
      }
      goto L_0886C804;
    }
L_0886C804:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-440));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(11));
    goto L_0886C814;
L_0886C814:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886C814;
      }
      goto L_0886C834;
    }
L_0886C834:
    ctx.set_gpr(31, 0x0886C83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886C83Cu) goto L_0886C83C;
    return;
L_0886C83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886C84Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886C84Cu) goto L_0886C84C;
    return;
L_0886C84C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 85 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886C8CC;
      }
      goto L_0886C858;
    }
L_0886C858:
    ctx.set_gpr(31, 0x0886C860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886C860u) goto L_0886C860;
    return;
L_0886C860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886C870u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886C870u) goto L_0886C870;
    return;
L_0886C870:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886C880u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C880u) goto L_0886C880;
    return;
L_0886C880:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0886C890u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886C890u) goto L_0886C890;
    return;
L_0886C890:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_0886CA30;
    }
    goto L_0886C89C;
L_0886C89C:
    ctx.set_gpr(31, 0x0886C8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C8A4u) goto L_0886C8A4;
    return;
L_0886C8A4:
    ctx.set_gpr(31, 0x0886C8ACu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886C8ACu) goto L_0886C8AC;
    return;
L_0886C8AC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C8C4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886C8C4u) goto L_0886C8C4;
    return;
L_0886C8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886C8CC;
    }
L_0886C8CC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 60 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 25 ? 1u : 0u);
        goto L_0886C94C;
    }
    goto L_0886C8D8;
L_0886C8D8:
    ctx.set_gpr(31, 0x0886C8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886C8E0u) goto L_0886C8E0;
    return;
L_0886C8E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886C8F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886C8F0u) goto L_0886C8F0;
    return;
L_0886C8F0:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886C900u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C900u) goto L_0886C900;
    return;
L_0886C900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0886C910u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886C910u) goto L_0886C910;
    return;
L_0886C910:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886C91C;
    }
L_0886C91C:
    ctx.set_gpr(31, 0x0886C924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C924u) goto L_0886C924;
    return;
L_0886C924:
    ctx.set_gpr(31, 0x0886C92Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886C92Cu) goto L_0886C92C;
    return;
L_0886C92C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C944u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886C944u) goto L_0886C944;
    return;
L_0886C944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886C94C;
    }
L_0886C94C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886C954;
    }
L_0886C954:
    ctx.set_gpr(31, 0x0886C95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886C95Cu) goto L_0886C95C;
    return;
L_0886C95C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886C96Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886C96Cu) goto L_0886C96C;
    return;
L_0886C96C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 19 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
        goto L_0886C9D4;
    }
    goto L_0886C978;
L_0886C978:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886C988u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C988u) goto L_0886C988;
    return;
L_0886C988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0886C998u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886C998u) goto L_0886C998;
    return;
L_0886C998:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886C9A4;
    }
L_0886C9A4:
    ctx.set_gpr(31, 0x0886C9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C9ACu) goto L_0886C9AC;
    return;
L_0886C9AC:
    ctx.set_gpr(31, 0x0886C9B4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886C9B4u) goto L_0886C9B4;
    return;
L_0886C9B4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886C9CCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886C9CCu) goto L_0886C9CC;
    return;
L_0886C9CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886C9D4;
    }
L_0886C9D4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886C9E0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886C9E0u) goto L_0886C9E0;
    return;
L_0886C9E0:
    ctx.set_gpr(31, 0x0886C9E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886C9E8u) goto L_0886C9E8;
    return;
L_0886C9E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0886C9F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 366u, 0x08861728u>(ctx, &aot_mem) && ctx.pc == 0x0886C9F8u) goto L_0886C9F8;
    return;
L_0886C9F8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA2C;
      }
      goto L_0886CA04;
    }
L_0886CA04:
    ctx.set_gpr(31, 0x0886CA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CA0Cu) goto L_0886CA0C;
    return;
L_0886CA0C:
    ctx.set_gpr(31, 0x0886CA14u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886CA14u) goto L_0886CA14;
    return;
L_0886CA14:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CA2Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886CA2Cu) goto L_0886CA2C;
    return;
L_0886CA2C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886CA30;
L_0886CA30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CA48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0886CA64u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CA64u) goto L_0886CA64;
    return;
L_0886CA64:
    ctx.set_gpr(31, 0x0886CA6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886CA6Cu) goto L_0886CA6C;
    return;
L_0886CA6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886CA9C;
    }
    goto L_0886CA78;
L_0886CA78:
    ctx.set_gpr(31, 0x0886CA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CA80u) goto L_0886CA80;
    return;
L_0886CA80:
    ctx.set_gpr(31, 0x0886CA88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886CA88u) goto L_0886CA88;
    return;
L_0886CA88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CA98;
      }
      goto L_0886CA90;
    }
L_0886CA90:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886CCEC;
      }
      goto L_0886CA98;
    }
L_0886CA98:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886CA9C;
L_0886CA9C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17608)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(5, 2227u << 16u);
        goto L_0886CAB8;
    }
    goto L_0886CAB0;
L_0886CAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886CCEC;
      }
      goto L_0886CAB8;
    }
L_0886CAB8:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-352));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(27));
    goto L_0886CAC4;
L_0886CAC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0886CAC4;
      }
      goto L_0886CADC;
    }
L_0886CADC:
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-244));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(14));
    goto L_0886CAEC;
L_0886CAEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886CAEC;
      }
      goto L_0886CB0C;
    }
L_0886CB0C:
    ctx.set_gpr(31, 0x0886CB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886CB14u) goto L_0886CB14;
    return;
L_0886CB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886CB24u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886CB24u) goto L_0886CB24;
    return;
L_0886CB24:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886CC10;
      }
      goto L_0886CB30;
    }
L_0886CB30:
    ctx.set_gpr(31, 0x0886CB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886CB38u) goto L_0886CB38;
    return;
L_0886CB38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886CB48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886CB48u) goto L_0886CB48;
    return;
L_0886CB48:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 24 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
        goto L_0886CBB0;
    }
    goto L_0886CB54;
L_0886CB54:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886CB64u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CB64u) goto L_0886CB64;
    return;
L_0886CB64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886CB74u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886CB74u) goto L_0886CB74;
    return;
L_0886CB74:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
        goto L_0886CCEC;
    }
    goto L_0886CB80;
L_0886CB80:
    ctx.set_gpr(31, 0x0886CB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CB88u) goto L_0886CB88;
    return;
L_0886CB88:
    ctx.set_gpr(31, 0x0886CB90u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886CB90u) goto L_0886CB90;
    return;
L_0886CB90:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CBA8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886CBA8u) goto L_0886CBA8;
    return;
L_0886CBA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CCE8;
      }
      goto L_0886CBB0;
    }
L_0886CBB0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886CBBCu);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CBBCu) goto L_0886CBBC;
    return;
L_0886CBBC:
    ctx.set_gpr(31, 0x0886CBC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CBC4u) goto L_0886CBC4;
    return;
L_0886CBC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886CBD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 366u, 0x08861728u>(ctx, &aot_mem) && ctx.pc == 0x0886CBD4u) goto L_0886CBD4;
    return;
L_0886CBD4:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CCE8;
      }
      goto L_0886CBE0;
    }
L_0886CBE0:
    ctx.set_gpr(31, 0x0886CBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CBE8u) goto L_0886CBE8;
    return;
L_0886CBE8:
    ctx.set_gpr(31, 0x0886CBF0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886CBF0u) goto L_0886CBF0;
    return;
L_0886CBF0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CC08u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886CC08u) goto L_0886CC08;
    return;
L_0886CC08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CCE8;
      }
      goto L_0886CC10;
    }
L_0886CC10:
    ctx.set_gpr(31, 0x0886CC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x0886CC18u) goto L_0886CC18;
    return;
L_0886CC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886CC28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 18u, 0x08864190u>(ctx, &aot_mem) && ctx.pc == 0x0886CC28u) goto L_0886CC28;
    return;
L_0886CC28:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 25 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
        goto L_0886CC90;
    }
    goto L_0886CC34;
L_0886CC34:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886CC44u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CC44u) goto L_0886CC44;
    return;
L_0886CC44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886CC54u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886CC54u) goto L_0886CC54;
    return;
L_0886CC54:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CCE8;
      }
      goto L_0886CC60;
    }
L_0886CC60:
    ctx.set_gpr(31, 0x0886CC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CC68u) goto L_0886CC68;
    return;
L_0886CC68:
    ctx.set_gpr(31, 0x0886CC70u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886CC70u) goto L_0886CC70;
    return;
L_0886CC70:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CC88u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886CC88u) goto L_0886CC88;
    return;
L_0886CC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CCE8;
      }
      goto L_0886CC90;
    }
L_0886CC90:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(31, 0x0886CC9Cu);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CC9Cu) goto L_0886CC9C;
    return;
L_0886CC9C:
    ctx.set_gpr(31, 0x0886CCA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CCA4u) goto L_0886CCA4;
    return;
L_0886CCA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886CCB4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 366u, 0x08861728u>(ctx, &aot_mem) && ctx.pc == 0x0886CCB4u) goto L_0886CCB4;
    return;
L_0886CCB4:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CCE8;
      }
      goto L_0886CCC0;
    }
L_0886CCC0:
    ctx.set_gpr(31, 0x0886CCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CCC8u) goto L_0886CCC8;
    return;
L_0886CCC8:
    ctx.set_gpr(31, 0x0886CCD0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886CCD0u) goto L_0886CCD0;
    return;
L_0886CCD0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CCE8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886CCE8u) goto L_0886CCE8;
    return;
L_0886CCE8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0886CCEC;
L_0886CCEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886CD30u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CD30u) goto L_0886CD30;
    return;
L_0886CD30:
    ctx.set_gpr(31, 0x0886CD38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886CD38u) goto L_0886CD38;
    return;
L_0886CD38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886CD68;
    }
    goto L_0886CD44;
L_0886CD44:
    ctx.set_gpr(31, 0x0886CD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CD4Cu) goto L_0886CD4C;
    return;
L_0886CD4C:
    ctx.set_gpr(31, 0x0886CD54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886CD54u) goto L_0886CD54;
    return;
L_0886CD54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CD64;
      }
      goto L_0886CD5C;
    }
L_0886CD5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886E924;
      }
      goto L_0886CD64;
    }
L_0886CD64:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886CD68;
L_0886CD68:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886CD7C;
    }
L_0886CD7C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(9576));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886CD98:
    ctx.set_gpr(31, 0x0886CDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CDA0u) goto L_0886CDA0;
    return;
L_0886CDA0:
    ctx.set_gpr(31, 0x0886CDA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CDA8u) goto L_0886CDA8;
    return;
L_0886CDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CDB4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886CDB4u) goto L_0886CDB4;
    return;
L_0886CDB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CDC0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CDC0u) goto L_0886CDC0;
    return;
L_0886CDC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CDCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CDCCu) goto L_0886CDCC;
    return;
L_0886CDCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CE24;
      }
      goto L_0886CDD4;
    }
L_0886CDD4:
    ctx.set_gpr(31, 0x0886CDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CDDCu) goto L_0886CDDC;
    return;
L_0886CDDC:
    ctx.set_gpr(31, 0x0886CDE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CDE4u) goto L_0886CDE4;
    return;
L_0886CDE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886CDF8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CDF8u) goto L_0886CDF8;
    return;
L_0886CDF8:
    ctx.set_gpr(31, 0x0886CE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CE00u) goto L_0886CE00;
    return;
L_0886CE00:
    ctx.set_gpr(31, 0x0886CE08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE08u) goto L_0886CE08;
    return;
L_0886CE08:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0886CE1Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE1Cu) goto L_0886CE1C;
    return;
L_0886CE1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0886CEAC;
      }
      goto L_0886CE24;
    }
L_0886CE24:
    ctx.set_gpr(31, 0x0886CE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CE2Cu) goto L_0886CE2C;
    return;
L_0886CE2C:
    ctx.set_gpr(31, 0x0886CE34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE34u) goto L_0886CE34;
    return;
L_0886CE34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CE40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886CE40u) goto L_0886CE40;
    return;
L_0886CE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CE4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CE4Cu) goto L_0886CE4C;
    return;
L_0886CE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CE58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886CE58u) goto L_0886CE58;
    return;
L_0886CE58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886CEA8;
      }
      goto L_0886CE60;
    }
L_0886CE60:
    ctx.set_gpr(31, 0x0886CE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CE68u) goto L_0886CE68;
    return;
L_0886CE68:
    ctx.set_gpr(31, 0x0886CE70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE70u) goto L_0886CE70;
    return;
L_0886CE70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886CE84u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE84u) goto L_0886CE84;
    return;
L_0886CE84:
    ctx.set_gpr(31, 0x0886CE8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CE8Cu) goto L_0886CE8C;
    return;
L_0886CE8C:
    ctx.set_gpr(31, 0x0886CE94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CE94u) goto L_0886CE94;
    return;
L_0886CE94:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0886CEA8u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CEA8u) goto L_0886CEA8;
    return;
L_0886CEA8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_0886CEAC;
L_0886CEAC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886CEB0;
L_0886CEB0:
    ctx.set_gpr(31, 0x0886CEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CEB8u) goto L_0886CEB8;
    return;
L_0886CEB8:
    ctx.set_gpr(31, 0x0886CEC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CEC0u) goto L_0886CEC0;
    return;
L_0886CEC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886CECCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886CECCu) goto L_0886CECC;
    return;
L_0886CECC:
    ctx.set_gpr(31, 0x0886CED4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 257u, 0x08860E30u>(ctx, &aot_mem) && ctx.pc == 0x0886CED4u) goto L_0886CED4;
    return;
L_0886CED4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0886CEE4;
    }
    goto L_0886CEDC;
L_0886CEDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0886CEF0;
      }
      goto L_0886CEE4;
    }
L_0886CEE4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886CEB0;
      }
      goto L_0886CEF0;
    }
L_0886CEF0:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886D13C;
    }
    goto L_0886CEF8;
L_0886CEF8:
    ctx.set_gpr(31, 0x0886CF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CF00u) goto L_0886CF00;
    return;
L_0886CF00:
    ctx.set_gpr(31, 0x0886CF08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF08u) goto L_0886CF08;
    return;
L_0886CF08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(134));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886CF1Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF1Cu) goto L_0886CF1C;
    return;
L_0886CF1C:
    ctx.set_gpr(31, 0x0886CF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CF24u) goto L_0886CF24;
    return;
L_0886CF24:
    ctx.set_gpr(31, 0x0886CF2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF2Cu) goto L_0886CF2C;
    return;
L_0886CF2C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(134));
    ctx.set_gpr(31, 0x0886CF40u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF40u) goto L_0886CF40;
    return;
L_0886CF40:
    ctx.set_gpr(31, 0x0886CF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CF48u) goto L_0886CF48;
    return;
L_0886CF48:
    ctx.set_gpr(31, 0x0886CF50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF50u) goto L_0886CF50;
    return;
L_0886CF50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(137));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886CF64u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF64u) goto L_0886CF64;
    return;
L_0886CF64:
    ctx.set_gpr(31, 0x0886CF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CF6Cu) goto L_0886CF6C;
    return;
L_0886CF6C:
    ctx.set_gpr(31, 0x0886CF74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF74u) goto L_0886CF74;
    return;
L_0886CF74:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(137));
    ctx.set_gpr(31, 0x0886CF88u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF88u) goto L_0886CF88;
    return;
L_0886CF88:
    ctx.set_gpr(31, 0x0886CF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CF90u) goto L_0886CF90;
    return;
L_0886CF90:
    ctx.set_gpr(31, 0x0886CF98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CF98u) goto L_0886CF98;
    return;
L_0886CF98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(169));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886CFACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFACu) goto L_0886CFAC;
    return;
L_0886CFAC:
    ctx.set_gpr(31, 0x0886CFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CFB4u) goto L_0886CFB4;
    return;
L_0886CFB4:
    ctx.set_gpr(31, 0x0886CFBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFBCu) goto L_0886CFBC;
    return;
L_0886CFBC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(169));
    ctx.set_gpr(31, 0x0886CFD0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFD0u) goto L_0886CFD0;
    return;
L_0886CFD0:
    ctx.set_gpr(31, 0x0886CFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CFD8u) goto L_0886CFD8;
    return;
L_0886CFD8:
    ctx.set_gpr(31, 0x0886CFE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFE0u) goto L_0886CFE0;
    return;
L_0886CFE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(170));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886CFF4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886CFF4u) goto L_0886CFF4;
    return;
L_0886CFF4:
    ctx.set_gpr(31, 0x0886CFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886CFFCu) goto L_0886CFFC;
    return;
L_0886CFFC:
    ctx.set_gpr(31, 0x0886D004u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D004u) goto L_0886D004;
    return;
L_0886D004:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(170));
    ctx.set_gpr(31, 0x0886D018u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D018u) goto L_0886D018;
    return;
L_0886D018:
    ctx.set_gpr(31, 0x0886D020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D020u) goto L_0886D020;
    return;
L_0886D020:
    ctx.set_gpr(31, 0x0886D028u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D028u) goto L_0886D028;
    return;
L_0886D028:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(171));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886D03Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D03Cu) goto L_0886D03C;
    return;
L_0886D03C:
    ctx.set_gpr(31, 0x0886D044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D044u) goto L_0886D044;
    return;
L_0886D044:
    ctx.set_gpr(31, 0x0886D04Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D04Cu) goto L_0886D04C;
    return;
L_0886D04C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(171));
    ctx.set_gpr(31, 0x0886D060u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D060u) goto L_0886D060;
    return;
L_0886D060:
    ctx.set_gpr(31, 0x0886D068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D068u) goto L_0886D068;
    return;
L_0886D068:
    ctx.set_gpr(31, 0x0886D070u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D070u) goto L_0886D070;
    return;
L_0886D070:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886D084u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D084u) goto L_0886D084;
    return;
L_0886D084:
    ctx.set_gpr(31, 0x0886D08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D08Cu) goto L_0886D08C;
    return;
L_0886D08C:
    ctx.set_gpr(31, 0x0886D094u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D094u) goto L_0886D094;
    return;
L_0886D094:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x0886D0A8u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D0A8u) goto L_0886D0A8;
    return;
L_0886D0A8:
    ctx.set_gpr(31, 0x0886D0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D0B0u) goto L_0886D0B0;
    return;
L_0886D0B0:
    ctx.set_gpr(31, 0x0886D0B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D0B8u) goto L_0886D0B8;
    return;
L_0886D0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(173));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886D0CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D0CCu) goto L_0886D0CC;
    return;
L_0886D0CC:
    ctx.set_gpr(31, 0x0886D0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D0D4u) goto L_0886D0D4;
    return;
L_0886D0D4:
    ctx.set_gpr(31, 0x0886D0DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D0DCu) goto L_0886D0DC;
    return;
L_0886D0DC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(173));
    ctx.set_gpr(31, 0x0886D0F0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D0F0u) goto L_0886D0F0;
    return;
L_0886D0F0:
    ctx.set_gpr(31, 0x0886D0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D0F8u) goto L_0886D0F8;
    return;
L_0886D0F8:
    ctx.set_gpr(31, 0x0886D100u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D100u) goto L_0886D100;
    return;
L_0886D100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(174));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886D114u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D114u) goto L_0886D114;
    return;
L_0886D114:
    ctx.set_gpr(31, 0x0886D11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D11Cu) goto L_0886D11C;
    return;
L_0886D11C:
    ctx.set_gpr(31, 0x0886D124u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D124u) goto L_0886D124;
    return;
L_0886D124:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(174));
    ctx.set_gpr(31, 0x0886D138u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886D138u) goto L_0886D138;
    return;
L_0886D138:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886D13C;
L_0886D13C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886D154;
L_0886D154:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886D178u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D178u) goto L_0886D178;
    return;
L_0886D178:
    ctx.set_gpr(31, 0x0886D180u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D180u) goto L_0886D180;
    return;
L_0886D180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D18Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D18Cu) goto L_0886D18C;
    return;
L_0886D18C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D198u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D198u) goto L_0886D198;
    return;
L_0886D198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D1A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D1A4u) goto L_0886D1A4;
    return;
L_0886D1A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D1B0;
      }
      goto L_0886D1AC;
    }
L_0886D1AC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D1B0;
L_0886D1B0:
    ctx.set_gpr(31, 0x0886D1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D1B8u) goto L_0886D1B8;
    return;
L_0886D1B8:
    ctx.set_gpr(31, 0x0886D1C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D1C0u) goto L_0886D1C0;
    return;
L_0886D1C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D1CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D1CCu) goto L_0886D1CC;
    return;
L_0886D1CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D1D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D1D8u) goto L_0886D1D8;
    return;
L_0886D1D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D1E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D1E4u) goto L_0886D1E4;
    return;
L_0886D1E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D1F0;
      }
      goto L_0886D1EC;
    }
L_0886D1EC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D1F0;
L_0886D1F0:
    ctx.set_gpr(31, 0x0886D1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D1F8u) goto L_0886D1F8;
    return;
L_0886D1F8:
    ctx.set_gpr(31, 0x0886D200u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D200u) goto L_0886D200;
    return;
L_0886D200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D20Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D20Cu) goto L_0886D20C;
    return;
L_0886D20C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D218u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D218u) goto L_0886D218;
    return;
L_0886D218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D224u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D224u) goto L_0886D224;
    return;
L_0886D224:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D230;
      }
      goto L_0886D22C;
    }
L_0886D22C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D230;
L_0886D230:
    ctx.set_gpr(31, 0x0886D238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D238u) goto L_0886D238;
    return;
L_0886D238:
    ctx.set_gpr(31, 0x0886D240u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D240u) goto L_0886D240;
    return;
L_0886D240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D24Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D24Cu) goto L_0886D24C;
    return;
L_0886D24C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D258u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D258u) goto L_0886D258;
    return;
L_0886D258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D264u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D264u) goto L_0886D264;
    return;
L_0886D264:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D270;
      }
      goto L_0886D26C;
    }
L_0886D26C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D270;
L_0886D270:
    ctx.set_gpr(31, 0x0886D278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D278u) goto L_0886D278;
    return;
L_0886D278:
    ctx.set_gpr(31, 0x0886D280u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D280u) goto L_0886D280;
    return;
L_0886D280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D28Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D28Cu) goto L_0886D28C;
    return;
L_0886D28C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D298u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D298u) goto L_0886D298;
    return;
L_0886D298:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D2A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D2A4u) goto L_0886D2A4;
    return;
L_0886D2A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D2B0;
      }
      goto L_0886D2AC;
    }
L_0886D2AC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D2B0;
L_0886D2B0:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886D310;
    }
    goto L_0886D2B8;
L_0886D2B8:
    ctx.set_gpr(31, 0x0886D2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D2C0u) goto L_0886D2C0;
    return;
L_0886D2C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(130));
    ctx.set_gpr(31, 0x0886D2D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886D2D0u) goto L_0886D2D0;
    return;
L_0886D2D0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D30C;
      }
      goto L_0886D2DC;
    }
L_0886D2DC:
    ctx.set_gpr(31, 0x0886D2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D2E4u) goto L_0886D2E4;
    return;
L_0886D2E4:
    ctx.set_gpr(31, 0x0886D2ECu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(130));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886D2ECu) goto L_0886D2EC;
    return;
L_0886D2EC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D304u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886D304u) goto L_0886D304;
    return;
L_0886D304:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0886E924;
      }
      goto L_0886D30C;
    }
L_0886D30C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886D310;
L_0886D310:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886D330u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D330u) goto L_0886D330;
    return;
L_0886D330:
    ctx.set_gpr(31, 0x0886D338u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D338u) goto L_0886D338;
    return;
L_0886D338:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D344u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D344u) goto L_0886D344;
    return;
L_0886D344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D350u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D350u) goto L_0886D350;
    return;
L_0886D350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D35Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D35Cu) goto L_0886D35C;
    return;
L_0886D35C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D368;
      }
      goto L_0886D364;
    }
L_0886D364:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D368;
L_0886D368:
    ctx.set_gpr(31, 0x0886D370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D370u) goto L_0886D370;
    return;
L_0886D370:
    ctx.set_gpr(31, 0x0886D378u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D378u) goto L_0886D378;
    return;
L_0886D378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D384u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D384u) goto L_0886D384;
    return;
L_0886D384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D390u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D390u) goto L_0886D390;
    return;
L_0886D390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D39Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D39Cu) goto L_0886D39C;
    return;
L_0886D39C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3A8;
      }
      goto L_0886D3A4;
    }
L_0886D3A4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D3A8;
L_0886D3A8:
    ctx.set_gpr(31, 0x0886D3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D3B0u) goto L_0886D3B0;
    return;
L_0886D3B0:
    ctx.set_gpr(31, 0x0886D3B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D3B8u) goto L_0886D3B8;
    return;
L_0886D3B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D3C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D3C4u) goto L_0886D3C4;
    return;
L_0886D3C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D3D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D3D0u) goto L_0886D3D0;
    return;
L_0886D3D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D3DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D3DCu) goto L_0886D3DC;
    return;
L_0886D3DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D3E8;
      }
      goto L_0886D3E4;
    }
L_0886D3E4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D3E8;
L_0886D3E8:
    ctx.set_gpr(31, 0x0886D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D3F0u) goto L_0886D3F0;
    return;
L_0886D3F0:
    ctx.set_gpr(31, 0x0886D3F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D3F8u) goto L_0886D3F8;
    return;
L_0886D3F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D404u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D404u) goto L_0886D404;
    return;
L_0886D404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D410u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D410u) goto L_0886D410;
    return;
L_0886D410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D41Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D41Cu) goto L_0886D41C;
    return;
L_0886D41C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D428;
      }
      goto L_0886D424;
    }
L_0886D424:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D428;
L_0886D428:
    ctx.set_gpr(31, 0x0886D430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D430u) goto L_0886D430;
    return;
L_0886D430:
    ctx.set_gpr(31, 0x0886D438u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D438u) goto L_0886D438;
    return;
L_0886D438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D444u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D444u) goto L_0886D444;
    return;
L_0886D444:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D450u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D450u) goto L_0886D450;
    return;
L_0886D450:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D45Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D45Cu) goto L_0886D45C;
    return;
L_0886D45C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D468;
      }
      goto L_0886D464;
    }
L_0886D464:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D468;
L_0886D468:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886D4C8;
    }
    goto L_0886D470;
L_0886D470:
    ctx.set_gpr(31, 0x0886D478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D478u) goto L_0886D478;
    return;
L_0886D478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(133));
    ctx.set_gpr(31, 0x0886D488u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886D488u) goto L_0886D488;
    return;
L_0886D488:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D4C4;
      }
      goto L_0886D494;
    }
L_0886D494:
    ctx.set_gpr(31, 0x0886D49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D49Cu) goto L_0886D49C;
    return;
L_0886D49C:
    ctx.set_gpr(31, 0x0886D4A4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(133));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886D4A4u) goto L_0886D4A4;
    return;
L_0886D4A4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D4BCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886D4BCu) goto L_0886D4BC;
    return;
L_0886D4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886D4C4;
    }
L_0886D4C4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886D4C8;
L_0886D4C8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886D4E8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D4E8u) goto L_0886D4E8;
    return;
L_0886D4E8:
    ctx.set_gpr(31, 0x0886D4F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D4F0u) goto L_0886D4F0;
    return;
L_0886D4F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D4FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D4FCu) goto L_0886D4FC;
    return;
L_0886D4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D508u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D508u) goto L_0886D508;
    return;
L_0886D508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D514u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D514u) goto L_0886D514;
    return;
L_0886D514:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D520;
      }
      goto L_0886D51C;
    }
L_0886D51C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D520;
L_0886D520:
    ctx.set_gpr(31, 0x0886D528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D528u) goto L_0886D528;
    return;
L_0886D528:
    ctx.set_gpr(31, 0x0886D530u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D530u) goto L_0886D530;
    return;
L_0886D530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D53Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D53Cu) goto L_0886D53C;
    return;
L_0886D53C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D548u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D548u) goto L_0886D548;
    return;
L_0886D548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D554u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D554u) goto L_0886D554;
    return;
L_0886D554:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D560;
      }
      goto L_0886D55C;
    }
L_0886D55C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D560;
L_0886D560:
    ctx.set_gpr(31, 0x0886D568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D568u) goto L_0886D568;
    return;
L_0886D568:
    ctx.set_gpr(31, 0x0886D570u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D570u) goto L_0886D570;
    return;
L_0886D570:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D57Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D57Cu) goto L_0886D57C;
    return;
L_0886D57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D588u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D588u) goto L_0886D588;
    return;
L_0886D588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D594u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D594u) goto L_0886D594;
    return;
L_0886D594:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D5A0;
      }
      goto L_0886D59C;
    }
L_0886D59C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D5A0;
L_0886D5A0:
    ctx.set_gpr(31, 0x0886D5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D5A8u) goto L_0886D5A8;
    return;
L_0886D5A8:
    ctx.set_gpr(31, 0x0886D5B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D5B0u) goto L_0886D5B0;
    return;
L_0886D5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D5BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D5BCu) goto L_0886D5BC;
    return;
L_0886D5BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D5C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D5C8u) goto L_0886D5C8;
    return;
L_0886D5C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D5D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D5D4u) goto L_0886D5D4;
    return;
L_0886D5D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D5E0;
      }
      goto L_0886D5DC;
    }
L_0886D5DC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D5E0;
L_0886D5E0:
    ctx.set_gpr(31, 0x0886D5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D5E8u) goto L_0886D5E8;
    return;
L_0886D5E8:
    ctx.set_gpr(31, 0x0886D5F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D5F0u) goto L_0886D5F0;
    return;
L_0886D5F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D5FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D5FCu) goto L_0886D5FC;
    return;
L_0886D5FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D608u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D608u) goto L_0886D608;
    return;
L_0886D608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D614u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D614u) goto L_0886D614;
    return;
L_0886D614:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D620;
      }
      goto L_0886D61C;
    }
L_0886D61C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D620;
L_0886D620:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886D680;
    }
    goto L_0886D628;
L_0886D628:
    ctx.set_gpr(31, 0x0886D630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D630u) goto L_0886D630;
    return;
L_0886D630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x0886D640u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886D640u) goto L_0886D640;
    return;
L_0886D640:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D67C;
      }
      goto L_0886D64C;
    }
L_0886D64C:
    ctx.set_gpr(31, 0x0886D654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D654u) goto L_0886D654;
    return;
L_0886D654:
    ctx.set_gpr(31, 0x0886D65Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886D65Cu) goto L_0886D65C;
    return;
L_0886D65C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D674u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886D674u) goto L_0886D674;
    return;
L_0886D674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886D67C;
    }
L_0886D67C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886D680;
L_0886D680:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886D6A0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D6A0u) goto L_0886D6A0;
    return;
L_0886D6A0:
    ctx.set_gpr(31, 0x0886D6A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D6A8u) goto L_0886D6A8;
    return;
L_0886D6A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D6B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D6B4u) goto L_0886D6B4;
    return;
L_0886D6B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D6C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D6C0u) goto L_0886D6C0;
    return;
L_0886D6C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D6CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D6CCu) goto L_0886D6CC;
    return;
L_0886D6CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D6D8;
      }
      goto L_0886D6D4;
    }
L_0886D6D4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D6D8;
L_0886D6D8:
    ctx.set_gpr(31, 0x0886D6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D6E0u) goto L_0886D6E0;
    return;
L_0886D6E0:
    ctx.set_gpr(31, 0x0886D6E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D6E8u) goto L_0886D6E8;
    return;
L_0886D6E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D6F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D6F4u) goto L_0886D6F4;
    return;
L_0886D6F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D700u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D700u) goto L_0886D700;
    return;
L_0886D700:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D70Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D70Cu) goto L_0886D70C;
    return;
L_0886D70C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D718;
      }
      goto L_0886D714;
    }
L_0886D714:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D718;
L_0886D718:
    ctx.set_gpr(31, 0x0886D720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D720u) goto L_0886D720;
    return;
L_0886D720:
    ctx.set_gpr(31, 0x0886D728u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D728u) goto L_0886D728;
    return;
L_0886D728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D734u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D734u) goto L_0886D734;
    return;
L_0886D734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D740u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D740u) goto L_0886D740;
    return;
L_0886D740:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D74Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D74Cu) goto L_0886D74C;
    return;
L_0886D74C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D758;
      }
      goto L_0886D754;
    }
L_0886D754:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D758;
L_0886D758:
    ctx.set_gpr(31, 0x0886D760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D760u) goto L_0886D760;
    return;
L_0886D760:
    ctx.set_gpr(31, 0x0886D768u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D768u) goto L_0886D768;
    return;
L_0886D768:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D774u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D774u) goto L_0886D774;
    return;
L_0886D774:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D780u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D780u) goto L_0886D780;
    return;
L_0886D780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D78Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D78Cu) goto L_0886D78C;
    return;
L_0886D78C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D798;
      }
      goto L_0886D794;
    }
L_0886D794:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D798;
L_0886D798:
    ctx.set_gpr(31, 0x0886D7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D7A0u) goto L_0886D7A0;
    return;
L_0886D7A0:
    ctx.set_gpr(31, 0x0886D7A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D7A8u) goto L_0886D7A8;
    return;
L_0886D7A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D7B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D7B4u) goto L_0886D7B4;
    return;
L_0886D7B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D7C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D7C0u) goto L_0886D7C0;
    return;
L_0886D7C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D7CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D7CCu) goto L_0886D7CC;
    return;
L_0886D7CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D7D8;
      }
      goto L_0886D7D4;
    }
L_0886D7D4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D7D8;
L_0886D7D8:
    ctx.set_gpr(31, 0x0886D7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D7E0u) goto L_0886D7E0;
    return;
L_0886D7E0:
    ctx.set_gpr(31, 0x0886D7E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D7E8u) goto L_0886D7E8;
    return;
L_0886D7E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D7F4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D7F4u) goto L_0886D7F4;
    return;
L_0886D7F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D800u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D800u) goto L_0886D800;
    return;
L_0886D800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D80Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D80Cu) goto L_0886D80C;
    return;
L_0886D80C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D818;
      }
      goto L_0886D814;
    }
L_0886D814:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D818;
L_0886D818:
    ctx.set_gpr(31, 0x0886D820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D820u) goto L_0886D820;
    return;
L_0886D820:
    ctx.set_gpr(31, 0x0886D828u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D828u) goto L_0886D828;
    return;
L_0886D828:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D834u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D834u) goto L_0886D834;
    return;
L_0886D834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D840u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D840u) goto L_0886D840;
    return;
L_0886D840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D84Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D84Cu) goto L_0886D84C;
    return;
L_0886D84C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D858;
      }
      goto L_0886D854;
    }
L_0886D854:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D858;
L_0886D858:
    ctx.set_gpr(31, 0x0886D860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D860u) goto L_0886D860;
    return;
L_0886D860:
    ctx.set_gpr(31, 0x0886D868u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D868u) goto L_0886D868;
    return;
L_0886D868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D874u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(19));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D874u) goto L_0886D874;
    return;
L_0886D874:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D880u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D880u) goto L_0886D880;
    return;
L_0886D880:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D88Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D88Cu) goto L_0886D88C;
    return;
L_0886D88C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D898;
      }
      goto L_0886D894;
    }
L_0886D894:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D898;
L_0886D898:
    ctx.set_gpr(31, 0x0886D8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D8A0u) goto L_0886D8A0;
    return;
L_0886D8A0:
    ctx.set_gpr(31, 0x0886D8A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D8A8u) goto L_0886D8A8;
    return;
L_0886D8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D8B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D8B4u) goto L_0886D8B4;
    return;
L_0886D8B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D8C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D8C0u) goto L_0886D8C0;
    return;
L_0886D8C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D8CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D8CCu) goto L_0886D8CC;
    return;
L_0886D8CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D8D8;
      }
      goto L_0886D8D4;
    }
L_0886D8D4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D8D8;
L_0886D8D8:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886D938;
    }
    goto L_0886D8E0;
L_0886D8E0:
    ctx.set_gpr(31, 0x0886D8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D8E8u) goto L_0886D8E8;
    return;
L_0886D8E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    ctx.set_gpr(31, 0x0886D8F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886D8F8u) goto L_0886D8F8;
    return;
L_0886D8F8:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886D934;
      }
      goto L_0886D904;
    }
L_0886D904:
    ctx.set_gpr(31, 0x0886D90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D90Cu) goto L_0886D90C;
    return;
L_0886D90C:
    ctx.set_gpr(31, 0x0886D914u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(131));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886D914u) goto L_0886D914;
    return;
L_0886D914:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D92Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886D92Cu) goto L_0886D92C;
    return;
L_0886D92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886D934;
    }
L_0886D934:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886D938;
L_0886D938:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886D958u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D958u) goto L_0886D958;
    return;
L_0886D958:
    ctx.set_gpr(31, 0x0886D960u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D960u) goto L_0886D960;
    return;
L_0886D960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D96Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D96Cu) goto L_0886D96C;
    return;
L_0886D96C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D978u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D978u) goto L_0886D978;
    return;
L_0886D978:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D984u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D984u) goto L_0886D984;
    return;
L_0886D984:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D990;
      }
      goto L_0886D98C;
    }
L_0886D98C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D990;
L_0886D990:
    ctx.set_gpr(31, 0x0886D998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D998u) goto L_0886D998;
    return;
L_0886D998:
    ctx.set_gpr(31, 0x0886D9A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D9A0u) goto L_0886D9A0;
    return;
L_0886D9A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D9ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D9ACu) goto L_0886D9AC;
    return;
L_0886D9AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D9B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D9B8u) goto L_0886D9B8;
    return;
L_0886D9B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D9C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D9C4u) goto L_0886D9C4;
    return;
L_0886D9C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886D9D0;
      }
      goto L_0886D9CC;
    }
L_0886D9CC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886D9D0;
L_0886D9D0:
    ctx.set_gpr(31, 0x0886D9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886D9D8u) goto L_0886D9D8;
    return;
L_0886D9D8:
    ctx.set_gpr(31, 0x0886D9E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886D9E0u) goto L_0886D9E0;
    return;
L_0886D9E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D9ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(23));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886D9ECu) goto L_0886D9EC;
    return;
L_0886D9EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886D9F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886D9F8u) goto L_0886D9F8;
    return;
L_0886D9F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DA04u) goto L_0886DA04;
    return;
L_0886DA04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA10;
      }
      goto L_0886DA0C;
    }
L_0886DA0C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DA10;
L_0886DA10:
    ctx.set_gpr(31, 0x0886DA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DA18u) goto L_0886DA18;
    return;
L_0886DA18:
    ctx.set_gpr(31, 0x0886DA20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DA20u) goto L_0886DA20;
    return;
L_0886DA20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DA2Cu) goto L_0886DA2C;
    return;
L_0886DA2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DA38u) goto L_0886DA38;
    return;
L_0886DA38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DA44u) goto L_0886DA44;
    return;
L_0886DA44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA50;
      }
      goto L_0886DA4C;
    }
L_0886DA4C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DA50;
L_0886DA50:
    ctx.set_gpr(31, 0x0886DA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DA58u) goto L_0886DA58;
    return;
L_0886DA58:
    ctx.set_gpr(31, 0x0886DA60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DA60u) goto L_0886DA60;
    return;
L_0886DA60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DA6Cu) goto L_0886DA6C;
    return;
L_0886DA6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DA78u) goto L_0886DA78;
    return;
L_0886DA78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DA84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DA84u) goto L_0886DA84;
    return;
L_0886DA84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DA90;
      }
      goto L_0886DA8C;
    }
L_0886DA8C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DA90;
L_0886DA90:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886DAF0;
    }
    goto L_0886DA98;
L_0886DA98:
    ctx.set_gpr(31, 0x0886DAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DAA0u) goto L_0886DAA0;
    return;
L_0886DAA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(135));
    ctx.set_gpr(31, 0x0886DAB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886DAB0u) goto L_0886DAB0;
    return;
L_0886DAB0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DAEC;
      }
      goto L_0886DABC;
    }
L_0886DABC:
    ctx.set_gpr(31, 0x0886DAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DAC4u) goto L_0886DAC4;
    return;
L_0886DAC4:
    ctx.set_gpr(31, 0x0886DACCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(135));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886DACCu) goto L_0886DACC;
    return;
L_0886DACC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DAE4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886DAE4u) goto L_0886DAE4;
    return;
L_0886DAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886DAEC;
    }
L_0886DAEC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886DAF0;
L_0886DAF0:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886DB10u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DB10u) goto L_0886DB10;
    return;
L_0886DB10:
    ctx.set_gpr(31, 0x0886DB18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DB18u) goto L_0886DB18;
    return;
L_0886DB18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DB24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DB24u) goto L_0886DB24;
    return;
L_0886DB24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DB30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DB30u) goto L_0886DB30;
    return;
L_0886DB30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DB3Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DB3Cu) goto L_0886DB3C;
    return;
L_0886DB3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DB48;
      }
      goto L_0886DB44;
    }
L_0886DB44:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DB48;
L_0886DB48:
    ctx.set_gpr(31, 0x0886DB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DB50u) goto L_0886DB50;
    return;
L_0886DB50:
    ctx.set_gpr(31, 0x0886DB58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DB58u) goto L_0886DB58;
    return;
L_0886DB58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DB64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DB64u) goto L_0886DB64;
    return;
L_0886DB64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DB70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DB70u) goto L_0886DB70;
    return;
L_0886DB70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DB7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DB7Cu) goto L_0886DB7C;
    return;
L_0886DB7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DB88;
      }
      goto L_0886DB84;
    }
L_0886DB84:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DB88;
L_0886DB88:
    ctx.set_gpr(31, 0x0886DB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DB90u) goto L_0886DB90;
    return;
L_0886DB90:
    ctx.set_gpr(31, 0x0886DB98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DB98u) goto L_0886DB98;
    return;
L_0886DB98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DBA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DBA4u) goto L_0886DBA4;
    return;
L_0886DBA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DBB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DBB0u) goto L_0886DBB0;
    return;
L_0886DBB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DBBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DBBCu) goto L_0886DBBC;
    return;
L_0886DBBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DBC8;
      }
      goto L_0886DBC4;
    }
L_0886DBC4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DBC8;
L_0886DBC8:
    ctx.set_gpr(31, 0x0886DBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DBD0u) goto L_0886DBD0;
    return;
L_0886DBD0:
    ctx.set_gpr(31, 0x0886DBD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DBD8u) goto L_0886DBD8;
    return;
L_0886DBD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DBE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DBE4u) goto L_0886DBE4;
    return;
L_0886DBE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DBF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DBF0u) goto L_0886DBF0;
    return;
L_0886DBF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DBFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DBFCu) goto L_0886DBFC;
    return;
L_0886DBFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC08;
      }
      goto L_0886DC04;
    }
L_0886DC04:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DC08;
L_0886DC08:
    ctx.set_gpr(31, 0x0886DC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DC10u) goto L_0886DC10;
    return;
L_0886DC10:
    ctx.set_gpr(31, 0x0886DC18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DC18u) goto L_0886DC18;
    return;
L_0886DC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DC24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DC24u) goto L_0886DC24;
    return;
L_0886DC24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DC30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DC30u) goto L_0886DC30;
    return;
L_0886DC30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DC3Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DC3Cu) goto L_0886DC3C;
    return;
L_0886DC3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC48;
      }
      goto L_0886DC44;
    }
L_0886DC44:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DC48;
L_0886DC48:
    ctx.set_gpr(31, 0x0886DC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DC50u) goto L_0886DC50;
    return;
L_0886DC50:
    ctx.set_gpr(31, 0x0886DC58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DC58u) goto L_0886DC58;
    return;
L_0886DC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DC64u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DC64u) goto L_0886DC64;
    return;
L_0886DC64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DC70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DC70u) goto L_0886DC70;
    return;
L_0886DC70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DC7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DC7Cu) goto L_0886DC7C;
    return;
L_0886DC7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DC88;
      }
      goto L_0886DC84;
    }
L_0886DC84:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DC88;
L_0886DC88:
    ctx.set_gpr(31, 0x0886DC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DC90u) goto L_0886DC90;
    return;
L_0886DC90:
    ctx.set_gpr(31, 0x0886DC98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DC98u) goto L_0886DC98;
    return;
L_0886DC98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DCA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(31));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DCA4u) goto L_0886DCA4;
    return;
L_0886DCA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DCB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DCB0u) goto L_0886DCB0;
    return;
L_0886DCB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DCBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DCBCu) goto L_0886DCBC;
    return;
L_0886DCBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DCC8;
      }
      goto L_0886DCC4;
    }
L_0886DCC4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DCC8;
L_0886DCC8:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886DD28;
    }
    goto L_0886DCD0;
L_0886DCD0:
    ctx.set_gpr(31, 0x0886DCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DCD8u) goto L_0886DCD8;
    return;
L_0886DCD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x0886DCE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886DCE8u) goto L_0886DCE8;
    return;
L_0886DCE8:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DD24;
      }
      goto L_0886DCF4;
    }
L_0886DCF4:
    ctx.set_gpr(31, 0x0886DCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DCFCu) goto L_0886DCFC;
    return;
L_0886DCFC:
    ctx.set_gpr(31, 0x0886DD04u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886DD04u) goto L_0886DD04;
    return;
L_0886DD04:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DD1Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886DD1Cu) goto L_0886DD1C;
    return;
L_0886DD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886DD24;
    }
L_0886DD24:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886DD28;
L_0886DD28:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886DD48;
L_0886DD48:
    ctx.set_gpr(31, 0x0886DD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DD50u) goto L_0886DD50;
    return;
L_0886DD50:
    ctx.set_gpr(31, 0x0886DD58u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DD58u) goto L_0886DD58;
    return;
L_0886DD58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DD64u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DD64u) goto L_0886DD64;
    return;
L_0886DD64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DD70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DD70u) goto L_0886DD70;
    return;
L_0886DD70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DD7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DD7Cu) goto L_0886DD7C;
    return;
L_0886DD7C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886DD8C;
    }
    goto L_0886DD84;
L_0886DD84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886DD98;
      }
      goto L_0886DD8C;
    }
L_0886DD8C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DD48;
      }
      goto L_0886DD98;
    }
L_0886DD98:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886DDF8;
    }
    goto L_0886DDA0;
L_0886DDA0:
    ctx.set_gpr(31, 0x0886DDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DDA8u) goto L_0886DDA8;
    return;
L_0886DDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(134));
    ctx.set_gpr(31, 0x0886DDB8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886DDB8u) goto L_0886DDB8;
    return;
L_0886DDB8:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DDF4;
      }
      goto L_0886DDC4;
    }
L_0886DDC4:
    ctx.set_gpr(31, 0x0886DDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DDCCu) goto L_0886DDCC;
    return;
L_0886DDCC:
    ctx.set_gpr(31, 0x0886DDD4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(134));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886DDD4u) goto L_0886DDD4;
    return;
L_0886DDD4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DDECu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886DDECu) goto L_0886DDEC;
    return;
L_0886DDEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886DDF4;
    }
L_0886DDF4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886DDF8;
L_0886DDF8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886DE18;
L_0886DE18:
    ctx.set_gpr(31, 0x0886DE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DE20u) goto L_0886DE20;
    return;
L_0886DE20:
    ctx.set_gpr(31, 0x0886DE28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DE28u) goto L_0886DE28;
    return;
L_0886DE28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DE34u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DE34u) goto L_0886DE34;
    return;
L_0886DE34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DE40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DE40u) goto L_0886DE40;
    return;
L_0886DE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DE4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 204u, 0x08860B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DE4Cu) goto L_0886DE4C;
    return;
L_0886DE4C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886DE5C;
    }
    goto L_0886DE54;
L_0886DE54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886DE68;
      }
      goto L_0886DE5C;
    }
L_0886DE5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DE18;
      }
      goto L_0886DE68;
    }
L_0886DE68:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886DEC8;
    }
    goto L_0886DE70;
L_0886DE70:
    ctx.set_gpr(31, 0x0886DE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DE78u) goto L_0886DE78;
    return;
L_0886DE78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(137));
    ctx.set_gpr(31, 0x0886DE88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886DE88u) goto L_0886DE88;
    return;
L_0886DE88:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DEC4;
      }
      goto L_0886DE94;
    }
L_0886DE94:
    ctx.set_gpr(31, 0x0886DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DE9Cu) goto L_0886DE9C;
    return;
L_0886DE9C:
    ctx.set_gpr(31, 0x0886DEA4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(137));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886DEA4u) goto L_0886DEA4;
    return;
L_0886DEA4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DEBCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886DEBCu) goto L_0886DEBC;
    return;
L_0886DEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886DEC4;
    }
L_0886DEC4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886DEC8;
L_0886DEC8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886DEE8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DEE8u) goto L_0886DEE8;
    return;
L_0886DEE8:
    ctx.set_gpr(31, 0x0886DEF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DEF0u) goto L_0886DEF0;
    return;
L_0886DEF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DEFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DEFCu) goto L_0886DEFC;
    return;
L_0886DEFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DF08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DF08u) goto L_0886DF08;
    return;
L_0886DF08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x0886DF18u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886DF18u) goto L_0886DF18;
    return;
L_0886DF18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DF24;
      }
      goto L_0886DF20;
    }
L_0886DF20:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DF24;
L_0886DF24:
    ctx.set_gpr(31, 0x0886DF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DF2Cu) goto L_0886DF2C;
    return;
L_0886DF2C:
    ctx.set_gpr(31, 0x0886DF34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DF34u) goto L_0886DF34;
    return;
L_0886DF34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DF40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(22));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DF40u) goto L_0886DF40;
    return;
L_0886DF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DF4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886DF4Cu) goto L_0886DF4C;
    return;
L_0886DF4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x0886DF5Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886DF5Cu) goto L_0886DF5C;
    return;
L_0886DF5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886DF68;
      }
      goto L_0886DF64;
    }
L_0886DF64:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886DF68;
L_0886DF68:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886DFC8;
    }
    goto L_0886DF70;
L_0886DF70:
    ctx.set_gpr(31, 0x0886DF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DF78u) goto L_0886DF78;
    return;
L_0886DF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x0886DF88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886DF88u) goto L_0886DF88;
    return;
L_0886DF88:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886DFC4;
      }
      goto L_0886DF94;
    }
L_0886DF94:
    ctx.set_gpr(31, 0x0886DF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DF9Cu) goto L_0886DF9C;
    return;
L_0886DF9C:
    ctx.set_gpr(31, 0x0886DFA4u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886DFA4u) goto L_0886DFA4;
    return;
L_0886DFA4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DFBCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886DFBCu) goto L_0886DFBC;
    return;
L_0886DFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886DFC4;
    }
L_0886DFC4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886DFC8;
L_0886DFC8:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886DFE8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886DFE8u) goto L_0886DFE8;
    return;
L_0886DFE8:
    ctx.set_gpr(31, 0x0886DFF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886DFF0u) goto L_0886DFF0;
    return;
L_0886DFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886DFFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886DFFCu) goto L_0886DFFC;
    return;
L_0886DFFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E008u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E008u) goto L_0886E008;
    return;
L_0886E008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0886E018u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E018u) goto L_0886E018;
    return;
L_0886E018:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E024;
      }
      goto L_0886E020;
    }
L_0886E020:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886E024;
L_0886E024:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E084;
    }
    goto L_0886E02C;
L_0886E02C:
    ctx.set_gpr(31, 0x0886E034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E034u) goto L_0886E034;
    return;
L_0886E034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(165));
    ctx.set_gpr(31, 0x0886E044u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E044u) goto L_0886E044;
    return;
L_0886E044:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E080;
      }
      goto L_0886E050;
    }
L_0886E050:
    ctx.set_gpr(31, 0x0886E058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E058u) goto L_0886E058;
    return;
L_0886E058:
    ctx.set_gpr(31, 0x0886E060u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(165));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E060u) goto L_0886E060;
    return;
L_0886E060:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E078u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E078u) goto L_0886E078;
    return;
L_0886E078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E080;
    }
L_0886E080:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E084;
L_0886E084:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0886E0A4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E0A4u) goto L_0886E0A4;
    return;
L_0886E0A4:
    ctx.set_gpr(31, 0x0886E0ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E0ACu) goto L_0886E0AC;
    return;
L_0886E0AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E0B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E0B8u) goto L_0886E0B8;
    return;
L_0886E0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E0C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E0C4u) goto L_0886E0C4;
    return;
L_0886E0C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0886E0D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E0D4u) goto L_0886E0D4;
    return;
L_0886E0D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E0E0;
      }
      goto L_0886E0DC;
    }
L_0886E0DC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0886E0E0;
L_0886E0E0:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E140;
    }
    goto L_0886E0E8;
L_0886E0E8:
    ctx.set_gpr(31, 0x0886E0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E0F0u) goto L_0886E0F0;
    return;
L_0886E0F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x0886E100u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E100u) goto L_0886E100;
    return;
L_0886E100:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E13C;
      }
      goto L_0886E10C;
    }
L_0886E10C:
    ctx.set_gpr(31, 0x0886E114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E114u) goto L_0886E114;
    return;
L_0886E114:
    ctx.set_gpr(31, 0x0886E11Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E11Cu) goto L_0886E11C;
    return;
L_0886E11C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E134u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E134u) goto L_0886E134;
    return;
L_0886E134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E13C;
    }
L_0886E13C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E140;
L_0886E140:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886E160;
L_0886E160:
    ctx.set_gpr(31, 0x0886E168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E168u) goto L_0886E168;
    return;
L_0886E168:
    ctx.set_gpr(31, 0x0886E170u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E170u) goto L_0886E170;
    return;
L_0886E170:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E17Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E17Cu) goto L_0886E17C;
    return;
L_0886E17C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E188u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E188u) goto L_0886E188;
    return;
L_0886E188:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886E19Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E19Cu) goto L_0886E19C;
    return;
L_0886E19C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886E1B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E1B0u) goto L_0886E1B0;
    return;
L_0886E1B0:
    ctx.set_gpr(31, 0x0886E1B8u);
    ctx.set_gpr(21, ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E1B8u) goto L_0886E1B8;
    return;
L_0886E1B8:
    ctx.set_gpr(31, 0x0886E1C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E1C0u) goto L_0886E1C0;
    return;
L_0886E1C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E1CCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E1CCu) goto L_0886E1CC;
    return;
L_0886E1CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E1D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E1D8u) goto L_0886E1D8;
    return;
L_0886E1D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886E1ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E1ECu) goto L_0886E1EC;
    return;
L_0886E1EC:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0886E200u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E200u) goto L_0886E200;
    return;
L_0886E200:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886E220;
      }
      goto L_0886E20C;
    }
L_0886E20C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886E224;
    }
    goto L_0886E218;
L_0886E218:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0886E230;
      }
      goto L_0886E220;
    }
L_0886E220:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0886E224;
L_0886E224:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E160;
      }
      goto L_0886E230;
    }
L_0886E230:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E290;
    }
    goto L_0886E238;
L_0886E238:
    ctx.set_gpr(31, 0x0886E240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E240u) goto L_0886E240;
    return;
L_0886E240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(169));
    ctx.set_gpr(31, 0x0886E250u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E250u) goto L_0886E250;
    return;
L_0886E250:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E28C;
      }
      goto L_0886E25C;
    }
L_0886E25C:
    ctx.set_gpr(31, 0x0886E264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E264u) goto L_0886E264;
    return;
L_0886E264:
    ctx.set_gpr(31, 0x0886E26Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(169));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E26Cu) goto L_0886E26C;
    return;
L_0886E26C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E284u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E284u) goto L_0886E284;
    return;
L_0886E284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E28C;
    }
L_0886E28C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E290;
L_0886E290:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886E2B0;
L_0886E2B0:
    ctx.set_gpr(31, 0x0886E2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E2B8u) goto L_0886E2B8;
    return;
L_0886E2B8:
    ctx.set_gpr(31, 0x0886E2C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E2C0u) goto L_0886E2C0;
    return;
L_0886E2C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E2CCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E2CCu) goto L_0886E2CC;
    return;
L_0886E2CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E2D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E2D8u) goto L_0886E2D8;
    return;
L_0886E2D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0886E2ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E2ECu) goto L_0886E2EC;
    return;
L_0886E2EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0886E300u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E300u) goto L_0886E300;
    return;
L_0886E300:
    ctx.set_gpr(31, 0x0886E308u);
    ctx.set_gpr(21, ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E308u) goto L_0886E308;
    return;
L_0886E308:
    ctx.set_gpr(31, 0x0886E310u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E310u) goto L_0886E310;
    return;
L_0886E310:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E31Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E31Cu) goto L_0886E31C;
    return;
L_0886E31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E328u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E328u) goto L_0886E328;
    return;
L_0886E328:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0886E33Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E33Cu) goto L_0886E33C;
    return;
L_0886E33C:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x0886E350u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E350u) goto L_0886E350;
    return;
L_0886E350:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886E370;
      }
      goto L_0886E35C;
    }
L_0886E35C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886E374;
    }
    goto L_0886E368;
L_0886E368:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0886E380;
      }
      goto L_0886E370;
    }
L_0886E370:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0886E374;
L_0886E374:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E2B0;
      }
      goto L_0886E380;
    }
L_0886E380:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E3E0;
    }
    goto L_0886E388;
L_0886E388:
    ctx.set_gpr(31, 0x0886E390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E390u) goto L_0886E390;
    return;
L_0886E390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(170));
    ctx.set_gpr(31, 0x0886E3A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E3A0u) goto L_0886E3A0;
    return;
L_0886E3A0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E3DC;
      }
      goto L_0886E3AC;
    }
L_0886E3AC:
    ctx.set_gpr(31, 0x0886E3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E3B4u) goto L_0886E3B4;
    return;
L_0886E3B4:
    ctx.set_gpr(31, 0x0886E3BCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(170));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E3BCu) goto L_0886E3BC;
    return;
L_0886E3BC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E3D4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E3D4u) goto L_0886E3D4;
    return;
L_0886E3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E3DC;
    }
L_0886E3DC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E3E0;
L_0886E3E0:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886E400;
L_0886E400:
    ctx.set_gpr(31, 0x0886E408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E408u) goto L_0886E408;
    return;
L_0886E408:
    ctx.set_gpr(31, 0x0886E410u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E410u) goto L_0886E410;
    return;
L_0886E410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E41Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E41Cu) goto L_0886E41C;
    return;
L_0886E41C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E428u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E428u) goto L_0886E428;
    return;
L_0886E428:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x0886E43Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E43Cu) goto L_0886E43C;
    return;
L_0886E43C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x0886E450u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E450u) goto L_0886E450;
    return;
L_0886E450:
    ctx.set_gpr(31, 0x0886E458u);
    ctx.set_gpr(21, ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E458u) goto L_0886E458;
    return;
L_0886E458:
    ctx.set_gpr(31, 0x0886E460u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E460u) goto L_0886E460;
    return;
L_0886E460:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E46Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E46Cu) goto L_0886E46C;
    return;
L_0886E46C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E478u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E478u) goto L_0886E478;
    return;
L_0886E478:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x0886E48Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E48Cu) goto L_0886E48C;
    return;
L_0886E48C:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x0886E4A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E4A0u) goto L_0886E4A0;
    return;
L_0886E4A0:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886E4C0;
      }
      goto L_0886E4AC;
    }
L_0886E4AC:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886E4C4;
    }
    goto L_0886E4B8;
L_0886E4B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0886E4D0;
      }
      goto L_0886E4C0;
    }
L_0886E4C0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0886E4C4;
L_0886E4C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E400;
      }
      goto L_0886E4D0;
    }
L_0886E4D0:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E530;
    }
    goto L_0886E4D8;
L_0886E4D8:
    ctx.set_gpr(31, 0x0886E4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E4E0u) goto L_0886E4E0;
    return;
L_0886E4E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(171));
    ctx.set_gpr(31, 0x0886E4F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E4F0u) goto L_0886E4F0;
    return;
L_0886E4F0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E52C;
      }
      goto L_0886E4FC;
    }
L_0886E4FC:
    ctx.set_gpr(31, 0x0886E504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E504u) goto L_0886E504;
    return;
L_0886E504:
    ctx.set_gpr(31, 0x0886E50Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(171));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E50Cu) goto L_0886E50C;
    return;
L_0886E50C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E524u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E524u) goto L_0886E524;
    return;
L_0886E524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E52C;
    }
L_0886E52C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E530;
L_0886E530:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886E550;
L_0886E550:
    ctx.set_gpr(31, 0x0886E558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E558u) goto L_0886E558;
    return;
L_0886E558:
    ctx.set_gpr(31, 0x0886E560u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E560u) goto L_0886E560;
    return;
L_0886E560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E56Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E56Cu) goto L_0886E56C;
    return;
L_0886E56C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E578u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E578u) goto L_0886E578;
    return;
L_0886E578:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x0886E58Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E58Cu) goto L_0886E58C;
    return;
L_0886E58C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x0886E5A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E5A0u) goto L_0886E5A0;
    return;
L_0886E5A0:
    ctx.set_gpr(31, 0x0886E5A8u);
    ctx.set_gpr(21, ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E5A8u) goto L_0886E5A8;
    return;
L_0886E5A8:
    ctx.set_gpr(31, 0x0886E5B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E5B0u) goto L_0886E5B0;
    return;
L_0886E5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E5BCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E5BCu) goto L_0886E5BC;
    return;
L_0886E5BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E5C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E5C8u) goto L_0886E5C8;
    return;
L_0886E5C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x0886E5DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E5DCu) goto L_0886E5DC;
    return;
L_0886E5DC:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x0886E5F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E5F0u) goto L_0886E5F0;
    return;
L_0886E5F0:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886E610;
      }
      goto L_0886E5FC;
    }
L_0886E5FC:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886E614;
    }
    goto L_0886E608;
L_0886E608:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0886E620;
      }
      goto L_0886E610;
    }
L_0886E610:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0886E614;
L_0886E614:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E550;
      }
      goto L_0886E620;
    }
L_0886E620:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E680;
    }
    goto L_0886E628;
L_0886E628:
    ctx.set_gpr(31, 0x0886E630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E630u) goto L_0886E630;
    return;
L_0886E630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x0886E640u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E640u) goto L_0886E640;
    return;
L_0886E640:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E67C;
      }
      goto L_0886E64C;
    }
L_0886E64C:
    ctx.set_gpr(31, 0x0886E654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E654u) goto L_0886E654;
    return;
L_0886E654:
    ctx.set_gpr(31, 0x0886E65Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(172));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E65Cu) goto L_0886E65C;
    return;
L_0886E65C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E674u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E674u) goto L_0886E674;
    return;
L_0886E674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E67C;
    }
L_0886E67C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E680;
L_0886E680:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886E6A0;
L_0886E6A0:
    ctx.set_gpr(31, 0x0886E6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E6A8u) goto L_0886E6A8;
    return;
L_0886E6A8:
    ctx.set_gpr(31, 0x0886E6B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E6B0u) goto L_0886E6B0;
    return;
L_0886E6B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E6BCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E6BCu) goto L_0886E6BC;
    return;
L_0886E6BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E6C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E6C8u) goto L_0886E6C8;
    return;
L_0886E6C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0886E6DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E6DCu) goto L_0886E6DC;
    return;
L_0886E6DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0886E6F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E6F0u) goto L_0886E6F0;
    return;
L_0886E6F0:
    ctx.set_gpr(31, 0x0886E6F8u);
    ctx.set_gpr(21, ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E6F8u) goto L_0886E6F8;
    return;
L_0886E6F8:
    ctx.set_gpr(31, 0x0886E700u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E700u) goto L_0886E700;
    return;
L_0886E700:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E70Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E70Cu) goto L_0886E70C;
    return;
L_0886E70C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E718u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E718u) goto L_0886E718;
    return;
L_0886E718:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0886E72Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E72Cu) goto L_0886E72C;
    return;
L_0886E72C:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x0886E740u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E740u) goto L_0886E740;
    return;
L_0886E740:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886E760;
      }
      goto L_0886E74C;
    }
L_0886E74C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886E764;
    }
    goto L_0886E758;
L_0886E758:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0886E770;
      }
      goto L_0886E760;
    }
L_0886E760:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0886E764;
L_0886E764:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E6A0;
      }
      goto L_0886E770;
    }
L_0886E770:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E7D0;
    }
    goto L_0886E778;
L_0886E778:
    ctx.set_gpr(31, 0x0886E780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E780u) goto L_0886E780;
    return;
L_0886E780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(173));
    ctx.set_gpr(31, 0x0886E790u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E790u) goto L_0886E790;
    return;
L_0886E790:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E7CC;
      }
      goto L_0886E79C;
    }
L_0886E79C:
    ctx.set_gpr(31, 0x0886E7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E7A4u) goto L_0886E7A4;
    return;
L_0886E7A4:
    ctx.set_gpr(31, 0x0886E7ACu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(173));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E7ACu) goto L_0886E7AC;
    return;
L_0886E7AC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E7C4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E7C4u) goto L_0886E7C4;
    return;
L_0886E7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E920;
      }
      goto L_0886E7CC;
    }
L_0886E7CC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E7D0;
L_0886E7D0:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886E7F0;
L_0886E7F0:
    ctx.set_gpr(31, 0x0886E7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E7F8u) goto L_0886E7F8;
    return;
L_0886E7F8:
    ctx.set_gpr(31, 0x0886E800u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E800u) goto L_0886E800;
    return;
L_0886E800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E80Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E80Cu) goto L_0886E80C;
    return;
L_0886E80C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E818u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E818u) goto L_0886E818;
    return;
L_0886E818:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x0886E82Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E82Cu) goto L_0886E82C;
    return;
L_0886E82C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x0886E840u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E840u) goto L_0886E840;
    return;
L_0886E840:
    ctx.set_gpr(31, 0x0886E848u);
    ctx.set_gpr(21, ctx.gpr[2] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E848u) goto L_0886E848;
    return;
L_0886E848:
    ctx.set_gpr(31, 0x0886E850u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886E850u) goto L_0886E850;
    return;
L_0886E850:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E85Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886E85Cu) goto L_0886E85C;
    return;
L_0886E85C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0886E868u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886E868u) goto L_0886E868;
    return;
L_0886E868:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x0886E87Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 262u, 0x08860EA0u>(ctx, &aot_mem) && ctx.pc == 0x0886E87Cu) goto L_0886E87C;
    return;
L_0886E87C:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x0886E890u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 265u, 0x08860ED0u>(ctx, &aot_mem) && ctx.pc == 0x0886E890u) goto L_0886E890;
    return;
L_0886E890:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0886E8B0;
      }
      goto L_0886E89C;
    }
L_0886E89C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0886E8B4;
    }
    goto L_0886E8A8;
L_0886E8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, 0u + 0u);
      if (branch_taken) {
          goto L_0886E8C0;
      }
      goto L_0886E8B0;
    }
L_0886E8B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_0886E8B4;
L_0886E8B4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886E7F0;
      }
      goto L_0886E8C0;
    }
L_0886E8C0:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886E918;
    }
    goto L_0886E8C8;
L_0886E8C8:
    ctx.set_gpr(31, 0x0886E8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E8D0u) goto L_0886E8D0;
    return;
L_0886E8D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(174));
    ctx.set_gpr(31, 0x0886E8E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886E8E0u) goto L_0886E8E0;
    return;
L_0886E8E0:
    ctx.set_gpr(18, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E914;
      }
      goto L_0886E8EC;
    }
L_0886E8EC:
    ctx.set_gpr(31, 0x0886E8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E8F4u) goto L_0886E8F4;
    return;
L_0886E8F4:
    ctx.set_gpr(31, 0x0886E8FCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(174));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886E8FCu) goto L_0886E8FC;
    return;
L_0886E8FC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886E914u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886E914u) goto L_0886E914;
    return;
L_0886E914:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886E918;
L_0886E918:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    goto L_0886E920;
L_0886E920:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_0886E924;
L_0886E924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E94C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0886E960u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E960u) goto L_0886E960;
    return;
L_0886E960:
    ctx.set_gpr(31, 0x0886E968u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886E968u) goto L_0886E968;
    return;
L_0886E968:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0886E998;
    }
    goto L_0886E974;
L_0886E974:
    ctx.set_gpr(31, 0x0886E97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886E97Cu) goto L_0886E97C;
    return;
L_0886E97C:
    ctx.set_gpr(31, 0x0886E984u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 485u, 0x08861D50u>(ctx, &aot_mem) && ctx.pc == 0x0886E984u) goto L_0886E984;
    return;
L_0886E984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886E994;
      }
      goto L_0886E98C;
    }
L_0886E98C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886E994;
    }
L_0886E994:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0886E998;
L_0886E998:
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(36) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886E9A4;
    }
L_0886E9A4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9648));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886E9C0:
    ctx.set_gpr(31, 0x0886E9C8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886EC0C;
L_0886E9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886E9D0;
    }
L_0886E9D0:
    ctx.set_gpr(31, 0x0886E9D8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886ED40;
L_0886E9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886E9E0;
    }
L_0886E9E0:
    ctx.set_gpr(31, 0x0886E9E8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886EE88;
L_0886E9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886E9F0;
    }
L_0886E9F0:
    ctx.set_gpr(31, 0x0886E9F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886EF88;
L_0886E9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA00;
    }
L_0886EA00:
    ctx.set_gpr(31, 0x0886EA08u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F088;
L_0886EA08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA10;
    }
L_0886EA10:
    ctx.set_gpr(31, 0x0886EA18u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F188;
L_0886EA18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA20;
    }
L_0886EA20:
    ctx.set_gpr(31, 0x0886EA28u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F2D0;
L_0886EA28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA30;
    }
L_0886EA30:
    ctx.set_gpr(31, 0x0886EA38u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F3D0;
L_0886EA38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA40;
    }
L_0886EA40:
    ctx.set_gpr(31, 0x0886EA48u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F4D0;
L_0886EA48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA50;
    }
L_0886EA50:
    ctx.set_gpr(31, 0x0886EA58u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F5D0;
L_0886EA58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA60;
    }
L_0886EA60:
    ctx.set_gpr(31, 0x0886EA68u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F6D0;
L_0886EA68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA70;
    }
L_0886EA70:
    ctx.set_gpr(31, 0x0886EA78u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F818;
L_0886EA78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA80;
    }
L_0886EA80:
    ctx.set_gpr(31, 0x0886EA88u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886F918;
L_0886EA88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EA90;
    }
L_0886EA90:
    ctx.set_gpr(31, 0x0886EA98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886FA18;
L_0886EA98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EAA0;
    }
L_0886EAA0:
    ctx.set_gpr(31, 0x0886EAA8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886FB18;
L_0886EAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EAB0;
    }
L_0886EAB0:
    ctx.set_gpr(31, 0x0886EAB8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886FC18;
L_0886EAB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EAC0;
    }
L_0886EAC0:
    ctx.set_gpr(31, 0x0886EAC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886FD60;
L_0886EAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EAD0;
    }
L_0886EAD0:
    ctx.set_gpr(31, 0x0886EAD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886FEA8;
L_0886EAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EAE0;
    }
L_0886EAE0:
    ctx.set_gpr(31, 0x0886EAE8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0886FFA8;
L_0886EAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EAF0;
    }
L_0886EAF0:
    ctx.set_gpr(31, 0x0886EAF8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 14u, 0x088700A8u>(ctx, &aot_mem) && ctx.pc == 0x0886EAF8u) goto L_0886EAF8;
    return;
L_0886EAF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB00;
    }
L_0886EB00:
    ctx.set_gpr(31, 0x0886EB08u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 32u, 0x088701A8u>(ctx, &aot_mem) && ctx.pc == 0x0886EB08u) goto L_0886EB08;
    return;
L_0886EB08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB10;
    }
L_0886EB10:
    ctx.set_gpr(31, 0x0886EB18u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 50u, 0x088702A8u>(ctx, &aot_mem) && ctx.pc == 0x0886EB18u) goto L_0886EB18;
    return;
L_0886EB18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB20;
    }
L_0886EB20:
    ctx.set_gpr(31, 0x0886EB28u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 74u, 0x088703F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EB28u) goto L_0886EB28;
    return;
L_0886EB28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB30;
    }
L_0886EB30:
    ctx.set_gpr(31, 0x0886EB38u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 92u, 0x088704F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EB38u) goto L_0886EB38;
    return;
L_0886EB38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB40;
    }
L_0886EB40:
    ctx.set_gpr(31, 0x0886EB48u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 110u, 0x088705F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EB48u) goto L_0886EB48;
    return;
L_0886EB48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB50;
    }
L_0886EB50:
    ctx.set_gpr(31, 0x0886EB58u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 128u, 0x088706F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EB58u) goto L_0886EB58;
    return;
L_0886EB58:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB60;
    }
L_0886EB60:
    ctx.set_gpr(31, 0x0886EB68u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 146u, 0x088707F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EB68u) goto L_0886EB68;
    return;
L_0886EB68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB70;
    }
L_0886EB70:
    ctx.set_gpr(31, 0x0886EB78u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 164u, 0x088708F0u>(ctx, &aot_mem) && ctx.pc == 0x0886EB78u) goto L_0886EB78;
    return;
L_0886EB78:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB80;
    }
L_0886EB80:
    ctx.set_gpr(31, 0x0886EB88u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 188u, 0x08870A38u>(ctx, &aot_mem) && ctx.pc == 0x0886EB88u) goto L_0886EB88;
    return;
L_0886EB88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EB90;
    }
L_0886EB90:
    ctx.set_gpr(31, 0x0886EB98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 206u, 0x08870B38u>(ctx, &aot_mem) && ctx.pc == 0x0886EB98u) goto L_0886EB98;
    return;
L_0886EB98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EBA0;
    }
L_0886EBA0:
    ctx.set_gpr(31, 0x0886EBA8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 224u, 0x08870C38u>(ctx, &aot_mem) && ctx.pc == 0x0886EBA8u) goto L_0886EBA8;
    return;
L_0886EBA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EBB0;
    }
L_0886EBB0:
    ctx.set_gpr(31, 0x0886EBB8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 248u, 0x08870D80u>(ctx, &aot_mem) && ctx.pc == 0x0886EBB8u) goto L_0886EBB8;
    return;
L_0886EBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EBC0;
    }
L_0886EBC0:
    ctx.set_gpr(31, 0x0886EBC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 266u, 0x08870E80u>(ctx, &aot_mem) && ctx.pc == 0x0886EBC8u) goto L_0886EBC8;
    return;
L_0886EBC8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EBD0;
    }
L_0886EBD0:
    ctx.set_gpr(31, 0x0886EBD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 284u, 0x08870F80u>(ctx, &aot_mem) && ctx.pc == 0x0886EBD8u) goto L_0886EBD8;
    return;
L_0886EBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EBE0;
    }
L_0886EBE0:
    ctx.set_gpr(31, 0x0886EBE8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 305u, 0x088710A4u>(ctx, &aot_mem) && ctx.pc == 0x0886EBE8u) goto L_0886EBE8;
    return;
L_0886EBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_0886EBFC;
      }
      goto L_0886EBF0;
    }
L_0886EBF0:
    ctx.set_gpr(31, 0x0886EBF8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 323u, 0x088711A4u>(ctx, &aot_mem) && ctx.pc == 0x0886EBF8u) goto L_0886EBF8;
    return;
L_0886EBF8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_0886EBFC;
L_0886EBFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EC0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0886EC24u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EC24u) goto L_0886EC24;
    return;
L_0886EC24:
    ctx.set_gpr(31, 0x0886EC2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886EC2Cu) goto L_0886EC2C;
    return;
L_0886EC2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x0886EC38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 848u, 0x0885B3A8u>(ctx, &aot_mem) && ctx.pc == 0x0886EC38u) goto L_0886EC38;
    return;
L_0886EC38:
    ctx.set_gpr(31, 0x0886EC40u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EC40u) goto L_0886EC40;
    return;
L_0886EC40:
    ctx.set_gpr(31, 0x0886EC48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 878u, 0x0885B56Cu>(ctx, &aot_mem) && ctx.pc == 0x0886EC48u) goto L_0886EC48;
    return;
L_0886EC48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0886EC54u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 847u, 0x0885B38Cu>(ctx, &aot_mem) && ctx.pc == 0x0886EC54u) goto L_0886EC54;
    return;
L_0886EC54:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886ECBC;
      }
      goto L_0886EC6C;
    }
L_0886EC6C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EC7C;
      }
      goto L_0886EC74;
    }
L_0886EC74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886ED2C;
      }
      goto L_0886EC7C;
    }
L_0886EC7C:
    ctx.set_gpr(31, 0x0886EC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EC84u) goto L_0886EC84;
    return;
L_0886EC84:
    ctx.set_gpr(31, 0x0886EC8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886EC8Cu) goto L_0886EC8C;
    return;
L_0886EC8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(147));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886ECA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886ECA0u) goto L_0886ECA0;
    return;
L_0886ECA0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886ECBC;
L_0886ECBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886ECC8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(147));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886ECC8u) goto L_0886ECC8;
    return;
L_0886ECC8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886ED20;
    }
    goto L_0886ECD0;
L_0886ECD0:
    ctx.set_gpr(31, 0x0886ECD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886ECD8u) goto L_0886ECD8;
    return;
L_0886ECD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(147));
    ctx.set_gpr(31, 0x0886ECE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886ECE8u) goto L_0886ECE8;
    return;
L_0886ECE8:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ED1C;
      }
      goto L_0886ECF4;
    }
L_0886ECF4:
    ctx.set_gpr(31, 0x0886ECFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886ECFCu) goto L_0886ECFC;
    return;
L_0886ECFC:
    ctx.set_gpr(31, 0x0886ED04u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(147));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886ED04u) goto L_0886ED04;
    return;
L_0886ED04:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886ED1Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886ED1Cu) goto L_0886ED1C;
    return;
L_0886ED1C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886ED20;
L_0886ED20:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886ED2C;
L_0886ED2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886ED40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886EE04;
      }
      goto L_0886ED6C;
    }
L_0886ED6C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886ED7C;
      }
      goto L_0886ED74;
    }
L_0886ED74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886EE74;
      }
      goto L_0886ED7C;
    }
L_0886ED7C:
    ctx.set_gpr(31, 0x0886ED84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886ED84u) goto L_0886ED84;
    return;
L_0886ED84:
    ctx.set_gpr(31, 0x0886ED8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886ED8Cu) goto L_0886ED8C;
    return;
L_0886ED8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(145));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886EDA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886EDA0u) goto L_0886EDA0;
    return;
L_0886EDA0:
    ctx.set_gpr(31, 0x0886EDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EDA8u) goto L_0886EDA8;
    return;
L_0886EDA8:
    ctx.set_gpr(31, 0x0886EDB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886EDB0u) goto L_0886EDB0;
    return;
L_0886EDB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(130));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886EDC4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886EDC4u) goto L_0886EDC4;
    return;
L_0886EDC4:
    ctx.set_gpr(31, 0x0886EDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EDCCu) goto L_0886EDCC;
    return;
L_0886EDCC:
    ctx.set_gpr(31, 0x0886EDD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886EDD4u) goto L_0886EDD4;
    return;
L_0886EDD4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(130));
    ctx.set_gpr(31, 0x0886EDE8u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886EDE8u) goto L_0886EDE8;
    return;
L_0886EDE8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886EE04;
L_0886EE04:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886EE10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(145));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886EE10u) goto L_0886EE10;
    return;
L_0886EE10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886EE68;
    }
    goto L_0886EE18;
L_0886EE18:
    ctx.set_gpr(31, 0x0886EE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EE20u) goto L_0886EE20;
    return;
L_0886EE20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(145));
    ctx.set_gpr(31, 0x0886EE30u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886EE30u) goto L_0886EE30;
    return;
L_0886EE30:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EE64;
      }
      goto L_0886EE3C;
    }
L_0886EE3C:
    ctx.set_gpr(31, 0x0886EE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EE44u) goto L_0886EE44;
    return;
L_0886EE44:
    ctx.set_gpr(31, 0x0886EE4Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(145));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886EE4Cu) goto L_0886EE4C;
    return;
L_0886EE4C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886EE64u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886EE64u) goto L_0886EE64;
    return;
L_0886EE64:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886EE68;
L_0886EE68:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886EE74;
L_0886EE74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EE88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886EF04;
      }
      goto L_0886EEB4;
    }
L_0886EEB4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EEC4;
      }
      goto L_0886EEBC;
    }
L_0886EEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886EF74;
      }
      goto L_0886EEC4;
    }
L_0886EEC4:
    ctx.set_gpr(31, 0x0886EECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EECCu) goto L_0886EECC;
    return;
L_0886EECC:
    ctx.set_gpr(31, 0x0886EED4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886EED4u) goto L_0886EED4;
    return;
L_0886EED4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(151));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886EEE8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886EEE8u) goto L_0886EEE8;
    return;
L_0886EEE8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886EF04;
L_0886EF04:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886EF10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(151));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886EF10u) goto L_0886EF10;
    return;
L_0886EF10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886EF68;
    }
    goto L_0886EF18;
L_0886EF18:
    ctx.set_gpr(31, 0x0886EF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EF20u) goto L_0886EF20;
    return;
L_0886EF20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(151));
    ctx.set_gpr(31, 0x0886EF30u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886EF30u) goto L_0886EF30;
    return;
L_0886EF30:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EF64;
      }
      goto L_0886EF3C;
    }
L_0886EF3C:
    ctx.set_gpr(31, 0x0886EF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EF44u) goto L_0886EF44;
    return;
L_0886EF44:
    ctx.set_gpr(31, 0x0886EF4Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(151));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886EF4Cu) goto L_0886EF4C;
    return;
L_0886EF4C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886EF64u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886EF64u) goto L_0886EF64;
    return;
L_0886EF64:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886EF68;
L_0886EF68:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886EF74;
L_0886EF74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886EF88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F004;
      }
      goto L_0886EFB4;
    }
L_0886EFB4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886EFC4;
      }
      goto L_0886EFBC;
    }
L_0886EFBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F074;
      }
      goto L_0886EFC4;
    }
L_0886EFC4:
    ctx.set_gpr(31, 0x0886EFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886EFCCu) goto L_0886EFCC;
    return;
L_0886EFCC:
    ctx.set_gpr(31, 0x0886EFD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886EFD4u) goto L_0886EFD4;
    return;
L_0886EFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886EFE8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886EFE8u) goto L_0886EFE8;
    return;
L_0886EFE8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F004;
L_0886F004:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F010u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F010u) goto L_0886F010;
    return;
L_0886F010:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F068;
    }
    goto L_0886F018;
L_0886F018:
    ctx.set_gpr(31, 0x0886F020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F020u) goto L_0886F020;
    return;
L_0886F020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0886F030u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F030u) goto L_0886F030;
    return;
L_0886F030:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F064;
      }
      goto L_0886F03C;
    }
L_0886F03C:
    ctx.set_gpr(31, 0x0886F044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F044u) goto L_0886F044;
    return;
L_0886F044:
    ctx.set_gpr(31, 0x0886F04Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F04Cu) goto L_0886F04C;
    return;
L_0886F04C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F064u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F064u) goto L_0886F064;
    return;
L_0886F064:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F068;
L_0886F068:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F074;
L_0886F074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F104;
      }
      goto L_0886F0B4;
    }
L_0886F0B4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F0C4;
      }
      goto L_0886F0BC;
    }
L_0886F0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F174;
      }
      goto L_0886F0C4;
    }
L_0886F0C4:
    ctx.set_gpr(31, 0x0886F0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F0CCu) goto L_0886F0CC;
    return;
L_0886F0CC:
    ctx.set_gpr(31, 0x0886F0D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F0D4u) goto L_0886F0D4;
    return;
L_0886F0D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(157));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F0E8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F0E8u) goto L_0886F0E8;
    return;
L_0886F0E8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F104;
L_0886F104:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F110u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(157));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F110u) goto L_0886F110;
    return;
L_0886F110:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F168;
    }
    goto L_0886F118;
L_0886F118:
    ctx.set_gpr(31, 0x0886F120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F120u) goto L_0886F120;
    return;
L_0886F120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(157));
    ctx.set_gpr(31, 0x0886F130u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F130u) goto L_0886F130;
    return;
L_0886F130:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F164;
      }
      goto L_0886F13C;
    }
L_0886F13C:
    ctx.set_gpr(31, 0x0886F144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F144u) goto L_0886F144;
    return;
L_0886F144:
    ctx.set_gpr(31, 0x0886F14Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(157));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F14Cu) goto L_0886F14C;
    return;
L_0886F14C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F164u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F164u) goto L_0886F164;
    return;
L_0886F164:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F168;
L_0886F168:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F174;
L_0886F174:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F24C;
      }
      goto L_0886F1B4;
    }
L_0886F1B4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F1C4;
      }
      goto L_0886F1BC;
    }
L_0886F1BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F2BC;
      }
      goto L_0886F1C4;
    }
L_0886F1C4:
    ctx.set_gpr(31, 0x0886F1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F1CCu) goto L_0886F1CC;
    return;
L_0886F1CC:
    ctx.set_gpr(31, 0x0886F1D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F1D4u) goto L_0886F1D4;
    return;
L_0886F1D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(148));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F1E8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F1E8u) goto L_0886F1E8;
    return;
L_0886F1E8:
    ctx.set_gpr(31, 0x0886F1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F1F0u) goto L_0886F1F0;
    return;
L_0886F1F0:
    ctx.set_gpr(31, 0x0886F1F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F1F8u) goto L_0886F1F8;
    return;
L_0886F1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(133));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F20Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F20Cu) goto L_0886F20C;
    return;
L_0886F20C:
    ctx.set_gpr(31, 0x0886F214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F214u) goto L_0886F214;
    return;
L_0886F214:
    ctx.set_gpr(31, 0x0886F21Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F21Cu) goto L_0886F21C;
    return;
L_0886F21C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(133));
    ctx.set_gpr(31, 0x0886F230u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F230u) goto L_0886F230;
    return;
L_0886F230:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F24C;
L_0886F24C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F258u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F258u) goto L_0886F258;
    return;
L_0886F258:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F2B0;
    }
    goto L_0886F260;
L_0886F260:
    ctx.set_gpr(31, 0x0886F268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F268u) goto L_0886F268;
    return;
L_0886F268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x0886F278u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F278u) goto L_0886F278;
    return;
L_0886F278:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F2AC;
      }
      goto L_0886F284;
    }
L_0886F284:
    ctx.set_gpr(31, 0x0886F28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F28Cu) goto L_0886F28C;
    return;
L_0886F28C:
    ctx.set_gpr(31, 0x0886F294u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(148));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F294u) goto L_0886F294;
    return;
L_0886F294:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F2ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F2ACu) goto L_0886F2AC;
    return;
L_0886F2AC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F2B0;
L_0886F2B0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F2BC;
L_0886F2BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F2D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F34C;
      }
      goto L_0886F2FC;
    }
L_0886F2FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F30C;
      }
      goto L_0886F304;
    }
L_0886F304:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F3BC;
      }
      goto L_0886F30C;
    }
L_0886F30C:
    ctx.set_gpr(31, 0x0886F314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F314u) goto L_0886F314;
    return;
L_0886F314:
    ctx.set_gpr(31, 0x0886F31Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F31Cu) goto L_0886F31C;
    return;
L_0886F31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(152));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F330u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F330u) goto L_0886F330;
    return;
L_0886F330:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F34C;
L_0886F34C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F358u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F358u) goto L_0886F358;
    return;
L_0886F358:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F3B0;
    }
    goto L_0886F360;
L_0886F360:
    ctx.set_gpr(31, 0x0886F368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F368u) goto L_0886F368;
    return;
L_0886F368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x0886F378u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F378u) goto L_0886F378;
    return;
L_0886F378:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F3AC;
      }
      goto L_0886F384;
    }
L_0886F384:
    ctx.set_gpr(31, 0x0886F38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F38Cu) goto L_0886F38C;
    return;
L_0886F38C:
    ctx.set_gpr(31, 0x0886F394u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F394u) goto L_0886F394;
    return;
L_0886F394:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F3ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F3ACu) goto L_0886F3AC;
    return;
L_0886F3AC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F3B0;
L_0886F3B0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F3BC;
L_0886F3BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F3D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F44C;
      }
      goto L_0886F3FC;
    }
L_0886F3FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F40C;
      }
      goto L_0886F404;
    }
L_0886F404:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F4BC;
      }
      goto L_0886F40C;
    }
L_0886F40C:
    ctx.set_gpr(31, 0x0886F414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F414u) goto L_0886F414;
    return;
L_0886F414:
    ctx.set_gpr(31, 0x0886F41Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F41Cu) goto L_0886F41C;
    return;
L_0886F41C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(139));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F430u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F430u) goto L_0886F430;
    return;
L_0886F430:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F44C;
L_0886F44C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F458u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(139));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F458u) goto L_0886F458;
    return;
L_0886F458:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F4B0;
    }
    goto L_0886F460;
L_0886F460:
    ctx.set_gpr(31, 0x0886F468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F468u) goto L_0886F468;
    return;
L_0886F468:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(139));
    ctx.set_gpr(31, 0x0886F478u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F478u) goto L_0886F478;
    return;
L_0886F478:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F4AC;
      }
      goto L_0886F484;
    }
L_0886F484:
    ctx.set_gpr(31, 0x0886F48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F48Cu) goto L_0886F48C;
    return;
L_0886F48C:
    ctx.set_gpr(31, 0x0886F494u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(139));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F494u) goto L_0886F494;
    return;
L_0886F494:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F4ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F4ACu) goto L_0886F4AC;
    return;
L_0886F4AC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F4B0;
L_0886F4B0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F4BC;
L_0886F4BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F4D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F54C;
      }
      goto L_0886F4FC;
    }
L_0886F4FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F50C;
      }
      goto L_0886F504;
    }
L_0886F504:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F5BC;
      }
      goto L_0886F50C;
    }
L_0886F50C:
    ctx.set_gpr(31, 0x0886F514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F514u) goto L_0886F514;
    return;
L_0886F514:
    ctx.set_gpr(31, 0x0886F51Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F51Cu) goto L_0886F51C;
    return;
L_0886F51C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F530u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F530u) goto L_0886F530;
    return;
L_0886F530:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F54C;
L_0886F54C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F558u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F558u) goto L_0886F558;
    return;
L_0886F558:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F5B0;
    }
    goto L_0886F560;
L_0886F560:
    ctx.set_gpr(31, 0x0886F568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F568u) goto L_0886F568;
    return;
L_0886F568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x0886F578u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F578u) goto L_0886F578;
    return;
L_0886F578:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F5AC;
      }
      goto L_0886F584;
    }
L_0886F584:
    ctx.set_gpr(31, 0x0886F58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F58Cu) goto L_0886F58C;
    return;
L_0886F58C:
    ctx.set_gpr(31, 0x0886F594u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F594u) goto L_0886F594;
    return;
L_0886F594:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F5ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F5ACu) goto L_0886F5AC;
    return;
L_0886F5AC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F5B0;
L_0886F5B0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F5BC;
L_0886F5BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F5D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F64C;
      }
      goto L_0886F5FC;
    }
L_0886F5FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F60C;
      }
      goto L_0886F604;
    }
L_0886F604:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F6BC;
      }
      goto L_0886F60C;
    }
L_0886F60C:
    ctx.set_gpr(31, 0x0886F614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F614u) goto L_0886F614;
    return;
L_0886F614:
    ctx.set_gpr(31, 0x0886F61Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F61Cu) goto L_0886F61C;
    return;
L_0886F61C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(146));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F630u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F630u) goto L_0886F630;
    return;
L_0886F630:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F64C;
L_0886F64C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F658u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(146));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F658u) goto L_0886F658;
    return;
L_0886F658:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F6B0;
    }
    goto L_0886F660;
L_0886F660:
    ctx.set_gpr(31, 0x0886F668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F668u) goto L_0886F668;
    return;
L_0886F668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(146));
    ctx.set_gpr(31, 0x0886F678u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F678u) goto L_0886F678;
    return;
L_0886F678:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F6AC;
      }
      goto L_0886F684;
    }
L_0886F684:
    ctx.set_gpr(31, 0x0886F68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F68Cu) goto L_0886F68C;
    return;
L_0886F68C:
    ctx.set_gpr(31, 0x0886F694u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(146));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F694u) goto L_0886F694;
    return;
L_0886F694:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F6ACu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F6ACu) goto L_0886F6AC;
    return;
L_0886F6AC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F6B0;
L_0886F6B0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F6BC;
L_0886F6BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F6D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F794;
      }
      goto L_0886F6FC;
    }
L_0886F6FC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F70C;
      }
      goto L_0886F704;
    }
L_0886F704:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F804;
      }
      goto L_0886F70C;
    }
L_0886F70C:
    ctx.set_gpr(31, 0x0886F714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F714u) goto L_0886F714;
    return;
L_0886F714:
    ctx.set_gpr(31, 0x0886F71Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F71Cu) goto L_0886F71C;
    return;
L_0886F71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(143));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F730u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F730u) goto L_0886F730;
    return;
L_0886F730:
    ctx.set_gpr(31, 0x0886F738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F738u) goto L_0886F738;
    return;
L_0886F738:
    ctx.set_gpr(31, 0x0886F740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F740u) goto L_0886F740;
    return;
L_0886F740:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F754u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F754u) goto L_0886F754;
    return;
L_0886F754:
    ctx.set_gpr(31, 0x0886F75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F75Cu) goto L_0886F75C;
    return;
L_0886F75C:
    ctx.set_gpr(31, 0x0886F764u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F764u) goto L_0886F764;
    return;
L_0886F764:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x0886F778u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F778u) goto L_0886F778;
    return;
L_0886F778:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F794;
L_0886F794:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F7A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(143));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F7A0u) goto L_0886F7A0;
    return;
L_0886F7A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F7F8;
    }
    goto L_0886F7A8;
L_0886F7A8:
    ctx.set_gpr(31, 0x0886F7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F7B0u) goto L_0886F7B0;
    return;
L_0886F7B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(143));
    ctx.set_gpr(31, 0x0886F7C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F7C0u) goto L_0886F7C0;
    return;
L_0886F7C0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F7F4;
      }
      goto L_0886F7CC;
    }
L_0886F7CC:
    ctx.set_gpr(31, 0x0886F7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F7D4u) goto L_0886F7D4;
    return;
L_0886F7D4:
    ctx.set_gpr(31, 0x0886F7DCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(143));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F7DCu) goto L_0886F7DC;
    return;
L_0886F7DC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F7F4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F7F4u) goto L_0886F7F4;
    return;
L_0886F7F4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F7F8;
L_0886F7F8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F804;
L_0886F804:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F894;
      }
      goto L_0886F844;
    }
L_0886F844:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F854;
      }
      goto L_0886F84C;
    }
L_0886F84C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886F904;
      }
      goto L_0886F854;
    }
L_0886F854:
    ctx.set_gpr(31, 0x0886F85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F85Cu) goto L_0886F85C;
    return;
L_0886F85C:
    ctx.set_gpr(31, 0x0886F864u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F864u) goto L_0886F864;
    return;
L_0886F864:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F878u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F878u) goto L_0886F878;
    return;
L_0886F878:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F894;
L_0886F894:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F8A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F8A0u) goto L_0886F8A0;
    return;
L_0886F8A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F8F8;
    }
    goto L_0886F8A8;
L_0886F8A8:
    ctx.set_gpr(31, 0x0886F8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F8B0u) goto L_0886F8B0;
    return;
L_0886F8B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x0886F8C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F8C0u) goto L_0886F8C0;
    return;
L_0886F8C0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F8F4;
      }
      goto L_0886F8CC;
    }
L_0886F8CC:
    ctx.set_gpr(31, 0x0886F8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F8D4u) goto L_0886F8D4;
    return;
L_0886F8D4:
    ctx.set_gpr(31, 0x0886F8DCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F8DCu) goto L_0886F8DC;
    return;
L_0886F8DC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F8F4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F8F4u) goto L_0886F8F4;
    return;
L_0886F8F4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F8F8;
L_0886F8F8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886F904;
L_0886F904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886F918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886F994;
      }
      goto L_0886F944;
    }
L_0886F944:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F954;
      }
      goto L_0886F94C;
    }
L_0886F94C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886FA04;
      }
      goto L_0886F954;
    }
L_0886F954:
    ctx.set_gpr(31, 0x0886F95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F95Cu) goto L_0886F95C;
    return;
L_0886F95C:
    ctx.set_gpr(31, 0x0886F964u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886F964u) goto L_0886F964;
    return;
L_0886F964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(149));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886F978u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886F978u) goto L_0886F978;
    return;
L_0886F978:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886F994;
L_0886F994:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886F9A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(149));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886F9A0u) goto L_0886F9A0;
    return;
L_0886F9A0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886F9F8;
    }
    goto L_0886F9A8;
L_0886F9A8:
    ctx.set_gpr(31, 0x0886F9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F9B0u) goto L_0886F9B0;
    return;
L_0886F9B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(149));
    ctx.set_gpr(31, 0x0886F9C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886F9C0u) goto L_0886F9C0;
    return;
L_0886F9C0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886F9F4;
      }
      goto L_0886F9CC;
    }
L_0886F9CC:
    ctx.set_gpr(31, 0x0886F9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886F9D4u) goto L_0886F9D4;
    return;
L_0886F9D4:
    ctx.set_gpr(31, 0x0886F9DCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(149));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886F9DCu) goto L_0886F9DC;
    return;
L_0886F9DC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886F9F4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886F9F4u) goto L_0886F9F4;
    return;
L_0886F9F4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886F9F8;
L_0886F9F8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886FA04;
L_0886FA04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FA18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886FA94;
      }
      goto L_0886FA44;
    }
L_0886FA44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FA54;
      }
      goto L_0886FA4C;
    }
L_0886FA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886FB04;
      }
      goto L_0886FA54;
    }
L_0886FA54:
    ctx.set_gpr(31, 0x0886FA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FA5Cu) goto L_0886FA5C;
    return;
L_0886FA5C:
    ctx.set_gpr(31, 0x0886FA64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FA64u) goto L_0886FA64;
    return;
L_0886FA64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FA78u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FA78u) goto L_0886FA78;
    return;
L_0886FA78:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886FA94;
L_0886FA94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886FAA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886FAA0u) goto L_0886FAA0;
    return;
L_0886FAA0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886FAF8;
    }
    goto L_0886FAA8;
L_0886FAA8:
    ctx.set_gpr(31, 0x0886FAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FAB0u) goto L_0886FAB0;
    return;
L_0886FAB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x0886FAC0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886FAC0u) goto L_0886FAC0;
    return;
L_0886FAC0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FAF4;
      }
      goto L_0886FACC;
    }
L_0886FACC:
    ctx.set_gpr(31, 0x0886FAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FAD4u) goto L_0886FAD4;
    return;
L_0886FAD4:
    ctx.set_gpr(31, 0x0886FADCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886FADCu) goto L_0886FADC;
    return;
L_0886FADC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886FAF4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886FAF4u) goto L_0886FAF4;
    return;
L_0886FAF4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886FAF8;
L_0886FAF8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886FB04;
L_0886FB04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886FB94;
      }
      goto L_0886FB44;
    }
L_0886FB44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FB54;
      }
      goto L_0886FB4C;
    }
L_0886FB4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886FC04;
      }
      goto L_0886FB54;
    }
L_0886FB54:
    ctx.set_gpr(31, 0x0886FB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FB5Cu) goto L_0886FB5C;
    return;
L_0886FB5C:
    ctx.set_gpr(31, 0x0886FB64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FB64u) goto L_0886FB64;
    return;
L_0886FB64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FB78u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FB78u) goto L_0886FB78;
    return;
L_0886FB78:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886FB94;
L_0886FB94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886FBA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(125));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886FBA0u) goto L_0886FBA0;
    return;
L_0886FBA0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886FBF8;
    }
    goto L_0886FBA8;
L_0886FBA8:
    ctx.set_gpr(31, 0x0886FBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FBB0u) goto L_0886FBB0;
    return;
L_0886FBB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x0886FBC0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886FBC0u) goto L_0886FBC0;
    return;
L_0886FBC0:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FBF4;
      }
      goto L_0886FBCC;
    }
L_0886FBCC:
    ctx.set_gpr(31, 0x0886FBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FBD4u) goto L_0886FBD4;
    return;
L_0886FBD4:
    ctx.set_gpr(31, 0x0886FBDCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(125));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886FBDCu) goto L_0886FBDC;
    return;
L_0886FBDC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886FBF4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886FBF4u) goto L_0886FBF4;
    return;
L_0886FBF4:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886FBF8;
L_0886FBF8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886FC04;
L_0886FC04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FC18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886FCDC;
      }
      goto L_0886FC44;
    }
L_0886FC44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FC54;
      }
      goto L_0886FC4C;
    }
L_0886FC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886FD4C;
      }
      goto L_0886FC54;
    }
L_0886FC54:
    ctx.set_gpr(31, 0x0886FC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FC5Cu) goto L_0886FC5C;
    return;
L_0886FC5C:
    ctx.set_gpr(31, 0x0886FC64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FC64u) goto L_0886FC64;
    return;
L_0886FC64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(141));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FC78u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FC78u) goto L_0886FC78;
    return;
L_0886FC78:
    ctx.set_gpr(31, 0x0886FC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FC80u) goto L_0886FC80;
    return;
L_0886FC80:
    ctx.set_gpr(31, 0x0886FC88u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FC88u) goto L_0886FC88;
    return;
L_0886FC88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FC9Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FC9Cu) goto L_0886FC9C;
    return;
L_0886FC9C:
    ctx.set_gpr(31, 0x0886FCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FCA4u) goto L_0886FCA4;
    return;
L_0886FCA4:
    ctx.set_gpr(31, 0x0886FCACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FCACu) goto L_0886FCAC;
    return;
L_0886FCAC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x0886FCC0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FCC0u) goto L_0886FCC0;
    return;
L_0886FCC0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886FCDC;
L_0886FCDC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886FCE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(141));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886FCE8u) goto L_0886FCE8;
    return;
L_0886FCE8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886FD40;
    }
    goto L_0886FCF0;
L_0886FCF0:
    ctx.set_gpr(31, 0x0886FCF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FCF8u) goto L_0886FCF8;
    return;
L_0886FCF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(141));
    ctx.set_gpr(31, 0x0886FD08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886FD08u) goto L_0886FD08;
    return;
L_0886FD08:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FD3C;
      }
      goto L_0886FD14;
    }
L_0886FD14:
    ctx.set_gpr(31, 0x0886FD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FD1Cu) goto L_0886FD1C;
    return;
L_0886FD1C:
    ctx.set_gpr(31, 0x0886FD24u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(141));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886FD24u) goto L_0886FD24;
    return;
L_0886FD24:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886FD3Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886FD3Cu) goto L_0886FD3C;
    return;
L_0886FD3C:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886FD40;
L_0886FD40:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886FD4C;
L_0886FD4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FD60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886FE24;
      }
      goto L_0886FD8C;
    }
L_0886FD8C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FD9C;
      }
      goto L_0886FD94;
    }
L_0886FD94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886FE94;
      }
      goto L_0886FD9C;
    }
L_0886FD9C:
    ctx.set_gpr(31, 0x0886FDA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FDA4u) goto L_0886FDA4;
    return;
L_0886FDA4:
    ctx.set_gpr(31, 0x0886FDACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FDACu) goto L_0886FDAC;
    return;
L_0886FDAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FDC0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FDC0u) goto L_0886FDC0;
    return;
L_0886FDC0:
    ctx.set_gpr(31, 0x0886FDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FDC8u) goto L_0886FDC8;
    return;
L_0886FDC8:
    ctx.set_gpr(31, 0x0886FDD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FDD0u) goto L_0886FDD0;
    return;
L_0886FDD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FDE4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FDE4u) goto L_0886FDE4;
    return;
L_0886FDE4:
    ctx.set_gpr(31, 0x0886FDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FDECu) goto L_0886FDEC;
    return;
L_0886FDEC:
    ctx.set_gpr(31, 0x0886FDF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FDF4u) goto L_0886FDF4;
    return;
L_0886FDF4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(131));
    ctx.set_gpr(31, 0x0886FE08u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FE08u) goto L_0886FE08;
    return;
L_0886FE08:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886FE24;
L_0886FE24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886FE30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886FE30u) goto L_0886FE30;
    return;
L_0886FE30:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886FE88;
    }
    goto L_0886FE38;
L_0886FE38:
    ctx.set_gpr(31, 0x0886FE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FE40u) goto L_0886FE40;
    return;
L_0886FE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(129));
    ctx.set_gpr(31, 0x0886FE50u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886FE50u) goto L_0886FE50;
    return;
L_0886FE50:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FE84;
      }
      goto L_0886FE5C;
    }
L_0886FE5C:
    ctx.set_gpr(31, 0x0886FE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FE64u) goto L_0886FE64;
    return;
L_0886FE64:
    ctx.set_gpr(31, 0x0886FE6Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(129));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886FE6Cu) goto L_0886FE6C;
    return;
L_0886FE6C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886FE84u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886FE84u) goto L_0886FE84;
    return;
L_0886FE84:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886FE88;
L_0886FE88:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886FE94;
L_0886FE94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FEA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0886FF24;
      }
      goto L_0886FED4;
    }
L_0886FED4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FEE4;
      }
      goto L_0886FEDC;
    }
L_0886FEDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0886FF94;
      }
      goto L_0886FEE4;
    }
L_0886FEE4:
    ctx.set_gpr(31, 0x0886FEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FEECu) goto L_0886FEEC;
    return;
L_0886FEEC:
    ctx.set_gpr(31, 0x0886FEF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FEF4u) goto L_0886FEF4;
    return;
L_0886FEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(142));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0886FF08u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 319u, 0x088612B0u>(ctx, &aot_mem) && ctx.pc == 0x0886FF08u) goto L_0886FF08;
    return;
L_0886FF08:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), ctx.gpr[3]);
    goto L_0886FF24;
L_0886FF24:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0886FF30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(142));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 344u, 0x088712C8u>(ctx, &aot_mem) && ctx.pc == 0x0886FF30u) goto L_0886FF30;
    return;
L_0886FF30:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_0886FF88;
    }
    goto L_0886FF38;
L_0886FF38:
    ctx.set_gpr(31, 0x0886FF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FF40u) goto L_0886FF40;
    return;
L_0886FF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(142));
    ctx.set_gpr(31, 0x0886FF50u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 533u, 0x08861F58u>(ctx, &aot_mem) && ctx.pc == 0x0886FF50u) goto L_0886FF50;
    return;
L_0886FF50:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FF84;
      }
      goto L_0886FF5C;
    }
L_0886FF5C:
    ctx.set_gpr(31, 0x0886FF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FF64u) goto L_0886FF64;
    return;
L_0886FF64:
    ctx.set_gpr(31, 0x0886FF6Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(142));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 566u, 0x088621D8u>(ctx, &aot_mem) && ctx.pc == 0x0886FF6Cu) goto L_0886FF6C;
    return;
L_0886FF6C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15184));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x0886FF84u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-624));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0886FF84u) goto L_0886FF84;
    return;
L_0886FF84:
    ctx.set_gpr(2, 1u << 16u);
    goto L_0886FF88;
L_0886FF88:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_0886FF94;
L_0886FF94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886FFA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-17464)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 3u, 0x08870024u>(ctx, &aot_mem); return;
      }
      goto L_0886FFD4;
    }
L_0886FFD4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886FFE4;
      }
      goto L_0886FFDC;
    }
L_0886FFDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 13u, 0x08870094u>(ctx, &aot_mem); return;
      }
      goto L_0886FFE4;
    }
L_0886FFE4:
    ctx.set_gpr(31, 0x0886FFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x0886FFECu) goto L_0886FFEC;
    return;
L_0886FFEC:
    ctx.set_gpr(31, 0x0886FFF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x0886FFF4u) goto L_0886FFF4;
    return;
L_0886FFF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(158));
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08870000u; return;
}

void recomp_unit_0026(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0026_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_26(Runtime &runtime) {
    runtime.register_generated_unit(26u, 0x0886C000u, 16384u, &recomp_unit_0026, &recomp_unit_0026_entry);
    runtime.register_function(0x0886C000u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C010u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C034u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C040u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C058u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C070u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C094u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C0A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C0C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C0D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C100u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C11Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C124u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C12Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C134u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C158u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C160u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C17Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C180u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C198u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C1F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C200u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C208u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C214u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C21Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C224u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C230u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C240u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C254u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C25Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C264u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C270u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C27Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C290u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C298u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C2F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C310u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C318u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C320u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C334u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C350u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C358u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C360u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C368u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C388u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C390u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C3ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C404u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C40Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C418u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C420u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C428u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C430u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C438u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C444u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C44Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C454u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C46Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C470u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C484u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C494u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C4ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C500u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C508u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C518u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C534u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C53Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C544u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C54Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C554u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C55Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C564u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C56Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C574u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C57Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C584u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C58Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C594u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C59Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C5FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C604u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C60Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C614u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C620u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C62Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C63Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C648u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C650u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C658u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C664u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C66Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C674u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C67Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C684u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C68Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C694u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C69Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C6F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C700u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C718u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C71Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C738u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C754u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C75Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C768u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C770u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C778u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C780u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C788u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C78Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C7E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C804u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C814u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C834u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C83Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C84Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C858u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C860u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C870u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C880u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C890u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C89Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C8F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C900u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C910u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C91Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C924u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C92Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C944u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C94Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C954u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C95Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C96Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C978u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C988u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C998u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886C9F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CA9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CAB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CAB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CAC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CADCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CAECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CB90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CBF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CC9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CCECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CD98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CDF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE00u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CE94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CECCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CED4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CEF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF00u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CF98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886CFFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D004u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D018u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D020u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D028u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D03Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D044u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D04Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D060u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D068u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D070u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D084u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D08Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D094u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D0F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D100u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D114u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D11Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D124u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D138u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D13Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D154u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D178u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D180u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D18Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D198u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D1F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D200u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D20Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D218u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D224u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D22Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D230u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D238u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D240u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D24Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D258u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D264u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D26Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D270u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D278u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D280u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D28Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D298u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D2ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D304u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D30Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D310u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D330u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D338u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D344u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D350u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D35Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D364u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D368u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D370u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D378u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D384u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D390u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D39Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3E4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D3F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D404u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D410u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D41Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D424u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D428u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D430u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D438u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D444u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D450u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D45Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D464u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D468u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D470u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D478u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D488u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D494u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D49Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D4FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D508u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D514u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D51Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D520u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D528u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D530u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D53Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D548u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D554u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D55Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D560u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D568u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D570u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D57Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D588u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D594u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D59Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D5FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D608u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D614u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D61Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D620u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D628u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D630u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D640u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D64Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D654u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D65Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D674u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D67Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D680u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D6F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D700u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D70Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D714u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D718u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D720u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D728u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D734u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D740u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D74Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D754u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D758u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D760u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D768u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D774u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D780u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D78Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D794u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D798u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D7F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D800u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D80Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D814u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D818u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D820u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D828u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D834u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D840u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D84Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D854u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D858u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D860u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D868u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D874u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D880u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D88Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D894u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D898u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D8F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D904u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D90Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D914u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D92Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D934u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D938u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D958u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D960u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D96Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D978u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D984u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D98Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D990u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D998u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886D9F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DA98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DABCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DACCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DAF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DB98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DBFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DC98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DCFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DD98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DDF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DE9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DEFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF34u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DF9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886DFFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E008u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E018u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E020u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E024u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E02Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E034u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E044u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E050u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E058u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E060u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E078u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E080u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E084u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E0F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E100u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E10Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E114u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E11Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E134u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E13Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E140u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E160u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E168u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E170u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E17Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E188u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E19Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E1ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E200u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E20Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E218u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E220u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E224u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E230u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E238u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E240u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E250u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E25Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E264u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E26Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E284u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E28Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E290u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E2ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E300u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E308u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E310u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E31Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E328u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E33Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E350u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E35Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E368u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E370u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E374u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E380u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E388u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E390u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E3E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E400u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E408u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E410u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E41Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E428u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E43Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E450u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E458u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E460u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E46Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E478u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E48Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4B8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E4FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E504u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E50Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E524u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E52Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E530u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E550u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E558u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E560u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E56Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E578u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E58Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E5FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E608u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E610u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E614u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E620u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E628u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E630u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E640u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E64Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E654u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E65Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E674u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E67Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E680u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E6F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E700u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E70Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E718u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E72Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E740u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E74Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E758u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E760u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E764u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E770u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E778u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E780u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E790u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E79Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E7F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E800u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E80Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E818u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E82Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E840u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E848u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E850u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E85Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E868u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E87Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E890u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E89Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8ECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E8FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E914u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E918u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E920u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E924u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E94Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E960u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E968u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E974u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E97Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E984u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E98Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E994u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E998u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9A4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9C8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9D8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9E0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886E9F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA00u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EA98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EAF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB00u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB28u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB58u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB70u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB90u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EB98u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBB8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBE0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EBFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC0Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC48u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EC8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECD8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ECFCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED2Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED7Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886ED8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EDE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EE88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EECCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EED4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EEE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF10u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF20u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF68u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF74u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EF88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFB4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFBCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFC4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886EFE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F004u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F010u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F018u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F020u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F030u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F03Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F044u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F04Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F064u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F068u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F074u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F088u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F0E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F104u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F110u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F118u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F120u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F130u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F13Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F144u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F14Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F164u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F168u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F174u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F188u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1B4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1C4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1E8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1F0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F1F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F20Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F214u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F21Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F230u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F24Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F258u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F260u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F268u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F278u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F284u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F28Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F294u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F2FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F304u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F30Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F314u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F31Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F330u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F34Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F358u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F360u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F368u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F378u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F384u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F38Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F394u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F3ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F3B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F3BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F3D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F3FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F404u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F40Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F414u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F41Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F430u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F44Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F458u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F460u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F468u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F478u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F484u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F48Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F494u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F4FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F504u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F50Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F514u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F51Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F530u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F54Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F558u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F560u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F568u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F578u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F584u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F58Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F594u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F5FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F604u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F60Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F614u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F61Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F630u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F64Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F658u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F660u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F668u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F678u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F684u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F68Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F694u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6ACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6BCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6D0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F6FCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F704u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F70Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F714u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F71Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F730u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F738u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F740u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F754u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F75Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F764u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F778u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F794u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F7F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F804u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F818u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F844u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F84Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F854u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F85Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F864u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F878u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F894u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F8F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F904u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F918u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F944u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F94Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F954u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F95Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F964u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F978u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F994u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9A0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9A8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9B0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9C0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9CCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9D4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9DCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9F4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886F9F8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FA94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FACCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FADCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FAF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FB94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBA0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBB0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBCCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FBF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC04u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC18u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC44u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC54u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC78u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC80u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FC9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCE8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCF0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FCF8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD14u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD1Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD3Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD4Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD60u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD8Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FD9Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDA4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDACu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDC0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDC8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDD0u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FDF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FE94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FED4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FEF4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF08u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF24u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF30u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF38u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF40u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF50u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF5Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF64u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF6Cu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF84u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF88u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FF94u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFA8u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFD4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFDCu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFE4u, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFECu, &recomp_unit_0026, "recomp_unit_0026");
    runtime.register_function(0x0886FFF4u, &recomp_unit_0026, "recomp_unit_0026");
}
} // namespace psprecomp
