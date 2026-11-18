#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0185[4094] = {
    1, 0, 0, 0, 2, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0,
    0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0,
    28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 64, 65, 0, 66, 0, 0, 67, 0, 68,
    0, 0, 0, 69, 0, 0, 70, 71, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 82,
    0, 83, 84, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 94, 95, 96, 0, 97, 0,
    98, 0, 99, 0, 100, 101, 102, 0, 103, 0, 104, 0, 105, 0, 106, 107, 108, 0, 109, 110, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0,
    0, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124, 0, 125, 126,
    127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 133, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0,
    0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149,
    0, 150, 151, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 158, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163,
    0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 172, 0, 173,
    0, 0, 174, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 181, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0,
    196, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 207, 0,
    208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 216, 217, 0, 218, 0, 0,
    219, 0, 0, 0, 220, 0, 221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0,
    230, 0, 231, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 235, 236, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 240, 0,
    241, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0,
    0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 0, 260, 0,
    261, 0, 0, 0, 262, 0, 263, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0,
    0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 280, 281, 0, 0, 282, 0, 283, 0, 0,
    284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 293, 0, 294, 295, 296, 0, 0, 297, 0, 298,
    0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 303, 304, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 310, 0, 311, 0, 312, 313, 314, 0,
    0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 321, 322, 323, 0, 0, 324, 0, 325, 0, 326, 0, 327, 328, 329, 0, 330, 0, 331,
    0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 336, 337, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0,
    344, 0, 345, 346, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0,
    0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 376,
    0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 384, 385, 386, 0, 0, 387, 0, 388, 0, 389, 0, 0,
    390, 0, 391, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 396, 397, 398, 0, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0,
    0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 409, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 416,
    0, 417, 0, 418, 0, 0, 419, 0, 420, 421, 422, 0, 0, 423, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 430,
    0, 431, 432, 433, 0, 434, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 0, 443,
    0, 444, 0, 445, 0, 0, 0, 0, 446, 0, 447, 448, 0, 449, 0, 0, 450, 0, 451, 452, 453, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0,
    457, 0, 458, 459, 460, 0, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 470,
    0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 478, 479, 0, 480, 481, 0, 482, 0, 483, 0, 0, 484, 485, 0, 486,
    487, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 497, 498, 0, 499, 0, 0, 500, 0,
    501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0,
    511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0,
    0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 527,
    0, 0, 528, 0, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536,
    0, 0, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 542, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0,
    551, 552, 553, 554, 0, 555, 0, 556, 0, 557, 558, 559, 0, 560, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 569, 0, 570,
    0, 571, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0,
    0, 578, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585,
    0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 602,
    0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0,
    608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0,
    621, 0, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 626, 0, 627, 0, 628, 0, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 634,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641,
    0, 642, 0, 643, 0, 644, 645, 646, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 654, 0, 655, 0, 656,
    0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 0, 668, 0, 669,
    670, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 685, 686, 0, 0, 687, 688, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0,
    0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 701, 0, 702, 0, 0, 0, 703, 0, 704,
    0, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 714, 0,
    715, 0, 716, 0, 0, 717, 718, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 0, 0, 0, 0, 726, 0, 727,
    0, 728, 0, 0, 0, 0, 0, 729, 0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737,
    0, 738, 0, 739, 0, 0, 740, 0, 0, 741, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0,
    0, 745, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 753, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0,
    756, 0, 757, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0, 763, 0, 764, 0, 0, 0, 765, 0, 766, 0, 767, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 774, 0, 775, 0, 776,
    0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0,
    0, 783, 0, 0, 784, 0, 785, 0, 786, 0, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0,
    793, 0, 0, 0, 794, 0, 795, 0, 0, 0, 796, 0, 0, 797, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 801, 0, 0, 802, 0, 0, 0, 803,
    0, 804, 0, 0, 805, 0, 806, 0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 814, 0, 815, 0,
    816, 0, 0, 817, 0, 818, 0, 819, 0, 0, 0, 820, 0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0,
    828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 837,
    0, 0, 0, 838, 0, 839, 0, 0, 840, 0, 841, 0, 842, 0, 0, 843, 0, 844, 0, 845, 0, 0, 846, 0, 0, 0, 0, 847, 0, 0, 848, 0,
    849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 853, 0, 854, 0, 0, 855, 0, 856, 0, 0, 0,
    857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 862, 0, 0, 863, 0, 864, 0, 865, 0, 0,
    0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 0, 872, 873, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 880,
    0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 882, 0, 883, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 887, 0, 0, 888, 0, 889, 0, 890, 0,
    0, 891, 0, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0,
    0, 0, 899, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 902, 0, 903, 0, 904, 0, 0, 905, 906, 0, 0, 907, 0, 908, 0, 0, 0, 909, 0,
    910, 0, 911, 0, 0, 912, 0, 913, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 918, 0, 0, 0, 919, 0, 0, 920, 0, 921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 923, 0, 0, 924, 0, 925, 0, 0, 926, 0,
    927, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 929, 0, 930, 931, 0, 932, 0, 933, 0, 934, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 0,
    0, 939, 0, 940, 0, 0, 941, 0, 942, 0, 0, 943, 0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0,
    946, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 950,
    0, 0, 0, 0, 951, 0, 0, 952, 0, 953, 0, 0, 0, 0, 954, 0, 0, 955, 0, 956, 0, 0, 0, 0, 0, 957, 0, 958, 0, 0, 0, 0,
    0, 959, 0, 960, 0, 961, 0, 962, 0, 0, 0, 0, 0, 963, 0, 964, 0, 0, 0, 0, 0, 965, 0, 966, 0, 967, 0, 0, 0, 0, 0, 968,
    0, 969, 0, 0, 0, 0, 0, 970, 0, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 973, 0, 0, 0, 974, 0, 975, 0, 0, 976,
    0, 977, 0, 0, 978, 0, 979, 0, 980, 0, 0, 0, 981, 0, 982, 0, 0, 0, 983, 0, 984, 0, 0, 0, 985, 0, 986, 0, 0, 0, 987, 0,
    988, 0, 0, 0, 0, 0, 989, 0, 0, 990, 0, 0, 0, 991, 0, 992, 0, 993, 0, 0, 994, 0, 0, 995, 996, 0, 0, 0, 0, 0, 0, 0,
    0, 997, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0, 999, 0, 1000, 0, 1001, 0, 1002, 0, 0, 1003, 0, 1004,
    0, 0, 0, 1005, 0, 1006, 0, 0, 1007, 0, 1008, 0, 1009, 0, 0, 1010, 0, 0, 0, 0, 1011, 0, 0, 1012, 0, 1013, 0, 1014, 0, 1015, 0, 0,
    1016, 0, 1017, 0, 1018, 0, 0, 1019, 1020, 0, 0, 1021, 0, 1022, 0, 0, 0, 1023, 0, 1024, 0, 0, 1025, 0, 1026, 0, 1027, 0, 0, 1028, 0, 0,
    1029, 0, 1030, 0, 0, 0, 0, 1031, 0, 1032, 0, 1033, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 1041, 0, 1042, 0, 0,
    0, 1043, 0, 1044, 0, 0, 0, 1045, 0, 1046, 0, 0, 0, 1047, 0, 1048, 0, 0, 1049, 0, 0, 0, 0, 0, 0, 0, 1050, 0, 0, 0, 1051, 0,
    1052, 0, 1053, 0, 0, 0, 1054, 0, 0, 1055, 0, 1056, 0, 0, 0, 0, 1057, 0, 1058, 0, 1059, 0, 1060, 0, 0, 0, 0, 1061, 0, 1062, 0, 1063,
    0, 0, 1064, 0, 1065, 0, 0, 1066, 0, 1067, 0, 0, 0, 0, 1068, 0, 0, 1069, 0, 1070, 0, 1071, 0, 1072, 0, 1073, 0, 1074, 0, 1075, 0, 1076,
    0, 0, 0, 1077, 0, 1078, 0, 1079, 0, 0, 1080, 0, 0, 1081, 1082, 0, 0, 0, 0, 0, 0, 0, 1083, 0, 0, 0, 1084, 0, 1085, 0, 0, 0,
    1086, 0, 0, 0, 1087, 1088, 0, 1089, 0, 0, 0, 1090, 0, 0, 0, 1091, 0, 1092, 0, 0, 0, 1093, 0, 1094, 0, 0, 0, 1095, 0, 1096, 0, 1097,
    0, 0, 0, 0, 1098, 0, 0, 0, 1099, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1100, 0, 1101, 0, 0, 1102, 0, 0, 1103, 0, 0, 1104, 1105,
    1106, 0, 1107, 0, 1108, 1109, 1110, 0, 1111, 0, 1112, 0, 0, 0, 0, 1113, 0, 1114, 0, 0, 0, 0, 0, 1115, 0, 0, 1116, 0, 1117, 0, 0, 0,
    0, 0, 0, 1118, 0, 1119, 0, 1120, 0, 0, 0, 0, 1121, 1122, 0, 0, 1123, 1124, 0, 1125, 0, 1126, 1127, 1128, 0, 1129, 0, 1130, 0, 0, 0, 0,
    1131, 0, 0, 1132, 0, 1133, 1134, 0, 1135, 0, 1136, 0, 0, 0, 0, 0, 1137, 0, 1138, 0, 1139, 0, 0, 0, 0, 0, 1140, 0, 1141, 0, 1142, 0,
    0, 0, 0, 1143, 1144, 0, 0, 1145, 1146, 0, 1147, 0, 1148, 1149, 1150, 0, 1151, 0, 0, 1152, 0, 1153, 1154, 1155, 0, 0, 0, 0, 1156, 0, 0, 1157,
    0, 1158, 1159, 0, 1160, 0, 0, 1161, 0, 0, 1162, 0, 1163, 0, 0, 1164, 0, 1165, 0, 0, 0, 0, 0, 0, 1166, 0, 1167, 0, 1168, 0, 0, 1169,
    0, 1170, 0, 0, 1171, 0, 1172, 0, 0, 0, 0, 0, 0, 1173, 0, 0, 0, 1174, 0, 1175, 1176, 0, 1177, 0, 0, 1178, 0, 0, 1179, 0, 1180, 0,
    0, 1181, 0, 1182, 0, 0, 0, 0, 0, 0, 1183, 0, 1184, 0, 1185, 0, 0, 1186, 0, 1187, 0, 0, 1188, 0, 1189, 0, 0, 0, 0, 0, 0, 1190,
    0, 0, 0, 0, 0, 1191, 0, 1192, 1193, 0, 1194, 0, 0, 1195, 0, 0, 1196, 0, 1197, 0, 0, 1198, 0, 1199, 0, 0, 0, 0, 0, 0, 1200, 0,
    1201, 0, 1202, 0, 0, 1203, 0, 1204, 0, 0, 1205, 0, 1206, 0, 0, 0, 0, 0, 0, 1207, 0, 0, 1208, 0, 1209, 1210, 0, 1211, 0, 0, 1212, 0,
    0, 1213, 0, 1214, 0, 0, 1215, 0, 1216, 0, 0, 0, 0, 0, 0, 1217, 0, 1218, 0, 1219, 0, 0, 1220, 0, 1221, 0, 0, 1222, 0, 1223, 0, 0,
    0, 0, 0, 0, 1224, 0, 1225, 0, 1226, 0, 1227, 1228, 0, 0, 0, 1229, 0, 1230, 1231, 0, 1232, 0, 1233, 0, 0, 1234, 0, 1235, 0, 0, 1236, 0,
    1237, 0, 0, 0, 0, 0, 1238, 0, 1239, 1240, 0, 1241, 0, 1242, 0, 0, 0, 0, 0, 1243, 0, 1244, 0, 1245, 0, 0, 0, 0, 0, 1246, 0, 1247,
    0, 1248, 0, 0, 0, 1249, 0, 1250, 0, 1251, 0, 0, 1252, 0, 1253, 0, 0, 1254, 0, 1255, 0, 0, 0, 0, 0, 1256, 0, 1257, 0, 1258, 0, 0,
    0, 0, 0, 1259, 0, 1260, 0, 1261, 0, 0, 1262, 0, 1263, 0, 0, 1264, 0, 1265, 0, 0, 0, 0, 0, 0, 1266, 1267, 0, 0, 1268, 0, 0, 0,
    0, 0, 0, 0, 0, 1269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1270, 0, 1271, 0, 0, 1272, 0, 0, 1273, 0, 0, 1274, 1275, 0, 0, 1276,
    1277, 0, 1278, 0, 0, 1279, 0, 1280, 0, 1281, 0, 0, 1282, 0, 1283, 0, 1284, 0, 0, 0, 0, 1285, 0, 1286, 0, 1287, 0, 1288, 0, 1289, 0, 1290,
    0, 0, 0, 1291, 0, 1292, 0, 1293, 0, 0, 1294, 1295, 0, 0, 0, 0, 0, 0, 1296, 0, 0, 0, 0, 0, 0, 0, 0, 1297, 0, 1298, 1299, 1300,
    0, 1301, 0, 1302, 0, 1303, 0, 0, 1304, 0, 0, 1305, 0, 0, 1306, 0, 0, 1307, 0, 1308, 0, 1309, 0, 1310, 0, 1311, 0, 1312, 0, 1313, 0, 1314,
    0, 1315, 0, 1316, 0, 1317, 0, 1318, 1319, 0, 1320, 0, 1321, 0, 0, 0, 0, 1322, 1323, 0, 0, 0, 0, 1324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1325, 0, 1326, 0, 1327,
};
void recomp_unit_0185_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0185[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE8000;
    case 2u: goto L_08AE8010;
    case 3u: goto L_08AE8014;
    case 4u: goto L_08AE801C;
    case 5u: goto L_08AE8028;
    case 6u: goto L_08AE8038;
    case 7u: goto L_08AE804C;
    case 8u: goto L_08AE8088;
    case 9u: goto L_08AE8090;
    case 10u: goto L_08AE80C8;
    case 11u: goto L_08AE80D0;
    case 12u: goto L_08AE8108;
    case 13u: goto L_08AE8110;
    case 14u: goto L_08AE8130;
    case 15u: goto L_08AE8138;
    case 16u: goto L_08AE814C;
    case 17u: goto L_08AE8154;
    case 18u: goto L_08AE8168;
    case 19u: goto L_08AE8170;
    case 20u: goto L_08AE8184;
    case 21u: goto L_08AE8198;
    case 22u: goto L_08AE81B0;
    case 23u: goto L_08AE81C8;
    case 24u: goto L_08AE81D0;
    case 25u: goto L_08AE81D4;
    case 26u: goto L_08AE81F0;
    case 27u: goto L_08AE81F8;
    case 28u: goto L_08AE8200;
    case 29u: goto L_08AE8208;
    case 30u: goto L_08AE823C;
    case 31u: goto L_08AE8248;
    case 32u: goto L_08AE825C;
    case 33u: goto L_08AE82A0;
    case 34u: goto L_08AE82D0;
    case 35u: goto L_08AE82FC;
    case 36u: goto L_08AE8308;
    case 37u: goto L_08AE8314;
    case 38u: goto L_08AE8320;
    case 39u: goto L_08AE832C;
    case 40u: goto L_08AE8338;
    case 41u: goto L_08AE83F8;
    case 42u: goto L_08AE8410;
    case 43u: goto L_08AE8424;
    case 44u: goto L_08AE843C;
    case 45u: goto L_08AE8450;
    case 46u: goto L_08AE8458;
    case 47u: goto L_08AE8480;
    case 48u: goto L_08AE8488;
    case 49u: goto L_08AE8494;
    case 50u: goto L_08AE84A0;
    case 51u: goto L_08AE84B0;
    case 52u: goto L_08AE84B8;
    case 53u: goto L_08AE84C4;
    case 54u: goto L_08AE84D0;
    case 55u: goto L_08AE84E0;
    case 56u: goto L_08AE84E8;
    case 57u: goto L_08AE851C;
    case 58u: goto L_08AE8524;
    case 59u: goto L_08AE8530;
    case 60u: goto L_08AE8538;
    case 61u: goto L_08AE8544;
    case 62u: goto L_08AE854C;
    case 63u: goto L_08AE8558;
    case 64u: goto L_08AE855C;
    case 65u: goto L_08AE8560;
    case 66u: goto L_08AE8568;
    case 67u: goto L_08AE8574;
    case 68u: goto L_08AE857C;
    case 69u: goto L_08AE858C;
    case 70u: goto L_08AE8598;
    case 71u: goto L_08AE859C;
    case 72u: goto L_08AE85A0;
    case 73u: goto L_08AE85A8;
    case 74u: goto L_08AE85B4;
    case 75u: goto L_08AE85BC;
    case 76u: goto L_08AE85C8;
    case 77u: goto L_08AE85D0;
    case 78u: goto L_08AE85DC;
    case 79u: goto L_08AE85E4;
    case 80u: goto L_08AE85F0;
    case 81u: goto L_08AE85F8;
    case 82u: goto L_08AE85FC;
    case 83u: goto L_08AE8604;
    case 84u: goto L_08AE8608;
    case 85u: goto L_08AE8610;
    case 86u: goto L_08AE861C;
    case 87u: goto L_08AE8624;
    case 88u: goto L_08AE862C;
    case 89u: goto L_08AE8638;
    case 90u: goto L_08AE8644;
    case 91u: goto L_08AE8650;
    case 92u: goto L_08AE8658;
    case 93u: goto L_08AE8660;
    case 94u: goto L_08AE8668;
    case 95u: goto L_08AE866C;
    case 96u: goto L_08AE8670;
    case 97u: goto L_08AE8678;
    case 98u: goto L_08AE8680;
    case 99u: goto L_08AE8688;
    case 100u: goto L_08AE8690;
    case 101u: goto L_08AE8694;
    case 102u: goto L_08AE8698;
    case 103u: goto L_08AE86A0;
    case 104u: goto L_08AE86A8;
    case 105u: goto L_08AE86B0;
    case 106u: goto L_08AE86B8;
    case 107u: goto L_08AE86BC;
    case 108u: goto L_08AE86C0;
    case 109u: goto L_08AE86C8;
    case 110u: goto L_08AE86CC;
    case 111u: goto L_08AE86D4;
    case 112u: goto L_08AE86E0;
    case 113u: goto L_08AE86E8;
    case 114u: goto L_08AE86F0;
    case 115u: goto L_08AE86F8;
    case 116u: goto L_08AE8708;
    case 117u: goto L_08AE8714;
    case 118u: goto L_08AE871C;
    case 119u: goto L_08AE8724;
    case 120u: goto L_08AE8730;
    case 121u: goto L_08AE8750;
    case 122u: goto L_08AE8758;
    case 123u: goto L_08AE8764;
    case 124u: goto L_08AE8770;
    case 125u: goto L_08AE8778;
    case 126u: goto L_08AE877C;
    case 127u: goto L_08AE8780;
    case 128u: goto L_08AE8788;
    case 129u: goto L_08AE8790;
    case 130u: goto L_08AE879C;
    case 131u: goto L_08AE87A4;
    case 132u: goto L_08AE87C0;
    case 133u: goto L_08AE87C4;
    case 134u: goto L_08AE87CC;
    case 135u: goto L_08AE87D4;
    case 136u: goto L_08AE87DC;
    case 137u: goto L_08AE87E8;
    case 138u: goto L_08AE87F0;
    case 139u: goto L_08AE87F8;
    case 140u: goto L_08AE8804;
    case 141u: goto L_08AE8814;
    case 142u: goto L_08AE8820;
    case 143u: goto L_08AE8828;
    case 144u: goto L_08AE8830;
    case 145u: goto L_08AE883C;
    case 146u: goto L_08AE885C;
    case 147u: goto L_08AE8864;
    case 148u: goto L_08AE8870;
    case 149u: goto L_08AE887C;
    case 150u: goto L_08AE8884;
    case 151u: goto L_08AE8888;
    case 152u: goto L_08AE888C;
    case 153u: goto L_08AE8894;
    case 154u: goto L_08AE889C;
    case 155u: goto L_08AE88A8;
    case 156u: goto L_08AE88B0;
    case 157u: goto L_08AE88CC;
    case 158u: goto L_08AE88D0;
    case 159u: goto L_08AE88D8;
    case 160u: goto L_08AE88E0;
    case 161u: goto L_08AE88E8;
    case 162u: goto L_08AE88F4;
    case 163u: goto L_08AE88FC;
    case 164u: goto L_08AE8904;
    case 165u: goto L_08AE8918;
    case 166u: goto L_08AE8920;
    case 167u: goto L_08AE8934;
    case 168u: goto L_08AE893C;
    case 169u: goto L_08AE8950;
    case 170u: goto L_08AE8958;
    case 171u: goto L_08AE896C;
    case 172u: goto L_08AE8974;
    case 173u: goto L_08AE897C;
    case 174u: goto L_08AE8988;
    case 175u: goto L_08AE899C;
    case 176u: goto L_08AE89A4;
    case 177u: goto L_08AE89B0;
    case 178u: goto L_08AE89B8;
    case 179u: goto L_08AE89C4;
    case 180u: goto L_08AE89CC;
    case 181u: goto L_08AE89D0;
    case 182u: goto L_08AE89D4;
    case 183u: goto L_08AE89DC;
    case 184u: goto L_08AE89E8;
    case 185u: goto L_08AE89F0;
    case 186u: goto L_08AE89FC;
    case 187u: goto L_08AE8A18;
    case 188u: goto L_08AE8A20;
    case 189u: goto L_08AE8A2C;
    case 190u: goto L_08AE8A34;
    case 191u: goto L_08AE8A48;
    case 192u: goto L_08AE8A50;
    case 193u: goto L_08AE8A58;
    case 194u: goto L_08AE8A64;
    case 195u: goto L_08AE8A6C;
    case 196u: goto L_08AE8A80;
    case 197u: goto L_08AE8A88;
    case 198u: goto L_08AE8A90;
    case 199u: goto L_08AE8A9C;
    case 200u: goto L_08AE8AA4;
    case 201u: goto L_08AE8AB8;
    case 202u: goto L_08AE8AC0;
    case 203u: goto L_08AE8AC8;
    case 204u: goto L_08AE8AD4;
    case 205u: goto L_08AE8ADC;
    case 206u: goto L_08AE8AF0;
    case 207u: goto L_08AE8AF8;
    case 208u: goto L_08AE8B00;
    case 209u: goto L_08AE8B0C;
    case 210u: goto L_08AE8B14;
    case 211u: goto L_08AE8B28;
    case 212u: goto L_08AE8B30;
    case 213u: goto L_08AE8B38;
    case 214u: goto L_08AE8B4C;
    case 215u: goto L_08AE8B54;
    case 216u: goto L_08AE8B68;
    case 217u: goto L_08AE8B6C;
    case 218u: goto L_08AE8B74;
    case 219u: goto L_08AE8B80;
    case 220u: goto L_08AE8B90;
    case 221u: goto L_08AE8B98;
    case 222u: goto L_08AE8BA0;
    case 223u: goto L_08AE8BAC;
    case 224u: goto L_08AE8BB4;
    case 225u: goto L_08AE8BC0;
    case 226u: goto L_08AE8BD4;
    case 227u: goto L_08AE8BDC;
    case 228u: goto L_08AE8BE4;
    case 229u: goto L_08AE8BF8;
    case 230u: goto L_08AE8C00;
    case 231u: goto L_08AE8C08;
    case 232u: goto L_08AE8C1C;
    case 233u: goto L_08AE8C24;
    case 234u: goto L_08AE8C38;
    case 235u: goto L_08AE8C44;
    case 236u: goto L_08AE8C48;
    case 237u: goto L_08AE8C50;
    case 238u: goto L_08AE8C64;
    case 239u: goto L_08AE8C74;
    case 240u: goto L_08AE8C78;
    case 241u: goto L_08AE8C80;
    case 242u: goto L_08AE8C94;
    case 243u: goto L_08AE8CA4;
    case 244u: goto L_08AE8CB0;
    case 245u: goto L_08AE8CB8;
    case 246u: goto L_08AE8CCC;
    case 247u: goto L_08AE8CD4;
    case 248u: goto L_08AE8CE8;
    case 249u: goto L_08AE8CF0;
    case 250u: goto L_08AE8D04;
    case 251u: goto L_08AE8D0C;
    case 252u: goto L_08AE8D20;
    case 253u: goto L_08AE8D28;
    case 254u: goto L_08AE8D3C;
    case 255u: goto L_08AE8D44;
    case 256u: goto L_08AE8D4C;
    case 257u: goto L_08AE8D58;
    case 258u: goto L_08AE8D60;
    case 259u: goto L_08AE8D6C;
    case 260u: goto L_08AE8D78;
    case 261u: goto L_08AE8D80;
    case 262u: goto L_08AE8D90;
    case 263u: goto L_08AE8D98;
    case 264u: goto L_08AE8D9C;
    case 265u: goto L_08AE8DA4;
    case 266u: goto L_08AE8DB0;
    case 267u: goto L_08AE8DB8;
    case 268u: goto L_08AE8DC0;
    case 269u: goto L_08AE8DC4;
    case 270u: goto L_08AE8DCC;
    case 271u: goto L_08AE8DEC;
    case 272u: goto L_08AE8DF4;
    case 273u: goto L_08AE8E04;
    case 274u: goto L_08AE8E0C;
    case 275u: goto L_08AE8E20;
    case 276u: goto L_08AE8E30;
    case 277u: goto L_08AE8E38;
    case 278u: goto L_08AE8E40;
    case 279u: goto L_08AE8E54;
    case 280u: goto L_08AE8E5C;
    case 281u: goto L_08AE8E60;
    case 282u: goto L_08AE8E6C;
    case 283u: goto L_08AE8E74;
    case 284u: goto L_08AE8E80;
    case 285u: goto L_08AE8E8C;
    case 286u: goto L_08AE8E98;
    case 287u: goto L_08AE8EA4;
    case 288u: goto L_08AE8EAC;
    case 289u: goto L_08AE8EB4;
    case 290u: goto L_08AE8EBC;
    case 291u: goto L_08AE8EC4;
    case 292u: goto L_08AE8ED0;
    case 293u: goto L_08AE8ED8;
    case 294u: goto L_08AE8EE0;
    case 295u: goto L_08AE8EE4;
    case 296u: goto L_08AE8EE8;
    case 297u: goto L_08AE8EF4;
    case 298u: goto L_08AE8EFC;
    case 299u: goto L_08AE8F04;
    case 300u: goto L_08AE8F0C;
    case 301u: goto L_08AE8F18;
    case 302u: goto L_08AE8F20;
    case 303u: goto L_08AE8F28;
    case 304u: goto L_08AE8F2C;
    case 305u: goto L_08AE8F30;
    case 306u: goto L_08AE8F3C;
    case 307u: goto L_08AE8F44;
    case 308u: goto L_08AE8F4C;
    case 309u: goto L_08AE8F54;
    case 310u: goto L_08AE8F60;
    case 311u: goto L_08AE8F68;
    case 312u: goto L_08AE8F70;
    case 313u: goto L_08AE8F74;
    case 314u: goto L_08AE8F78;
    case 315u: goto L_08AE8F84;
    case 316u: goto L_08AE8F8C;
    case 317u: goto L_08AE8F94;
    case 318u: goto L_08AE8F9C;
    case 319u: goto L_08AE8FA8;
    case 320u: goto L_08AE8FB0;
    case 321u: goto L_08AE8FB8;
    case 322u: goto L_08AE8FBC;
    case 323u: goto L_08AE8FC0;
    case 324u: goto L_08AE8FCC;
    case 325u: goto L_08AE8FD4;
    case 326u: goto L_08AE8FDC;
    case 327u: goto L_08AE8FE4;
    case 328u: goto L_08AE8FE8;
    case 329u: goto L_08AE8FEC;
    case 330u: goto L_08AE8FF4;
    case 331u: goto L_08AE8FFC;
    case 332u: goto L_08AE9004;
    case 333u: goto L_08AE9010;
    case 334u: goto L_08AE901C;
    case 335u: goto L_08AE9024;
    case 336u: goto L_08AE9028;
    case 337u: goto L_08AE902C;
    case 338u: goto L_08AE9038;
    case 339u: goto L_08AE9044;
    case 340u: goto L_08AE904C;
    case 341u: goto L_08AE9060;
    case 342u: goto L_08AE9068;
    case 343u: goto L_08AE9070;
    case 344u: goto L_08AE9080;
    case 345u: goto L_08AE9088;
    case 346u: goto L_08AE908C;
    case 347u: goto L_08AE9090;
    case 348u: goto L_08AE909C;
    case 349u: goto L_08AE90A4;
    case 350u: goto L_08AE90BC;
    case 351u: goto L_08AE90D0;
    case 352u: goto L_08AE90D8;
    case 353u: goto L_08AE90E0;
    case 354u: goto L_08AE9100;
    case 355u: goto L_08AE9108;
    case 356u: goto L_08AE9118;
    case 357u: goto L_08AE9120;
    case 358u: goto L_08AE9134;
    case 359u: goto L_08AE9144;
    case 360u: goto L_08AE914C;
    case 361u: goto L_08AE9154;
    case 362u: goto L_08AE9168;
    case 363u: goto L_08AE9170;
    case 364u: goto L_08AE9178;
    case 365u: goto L_08AE9184;
    case 366u: goto L_08AE918C;
    case 367u: goto L_08AE91A0;
    case 368u: goto L_08AE91A8;
    case 369u: goto L_08AE91B0;
    case 370u: goto L_08AE91BC;
    case 371u: goto L_08AE91C8;
    case 372u: goto L_08AE91D4;
    case 373u: goto L_08AE91E0;
    case 374u: goto L_08AE91EC;
    case 375u: goto L_08AE91F4;
    case 376u: goto L_08AE91FC;
    case 377u: goto L_08AE9204;
    case 378u: goto L_08AE9210;
    case 379u: goto L_08AE9218;
    case 380u: goto L_08AE922C;
    case 381u: goto L_08AE9234;
    case 382u: goto L_08AE923C;
    case 383u: goto L_08AE9248;
    case 384u: goto L_08AE9250;
    case 385u: goto L_08AE9254;
    case 386u: goto L_08AE9258;
    case 387u: goto L_08AE9264;
    case 388u: goto L_08AE926C;
    case 389u: goto L_08AE9274;
    case 390u: goto L_08AE9280;
    case 391u: goto L_08AE9288;
    case 392u: goto L_08AE929C;
    case 393u: goto L_08AE92A4;
    case 394u: goto L_08AE92AC;
    case 395u: goto L_08AE92B8;
    case 396u: goto L_08AE92C0;
    case 397u: goto L_08AE92C4;
    case 398u: goto L_08AE92C8;
    case 399u: goto L_08AE92D4;
    case 400u: goto L_08AE92DC;
    case 401u: goto L_08AE92E4;
    case 402u: goto L_08AE92F0;
    case 403u: goto L_08AE92F8;
    case 404u: goto L_08AE930C;
    case 405u: goto L_08AE9314;
    case 406u: goto L_08AE931C;
    case 407u: goto L_08AE9328;
    case 408u: goto L_08AE9330;
    case 409u: goto L_08AE9334;
    case 410u: goto L_08AE9338;
    case 411u: goto L_08AE9344;
    case 412u: goto L_08AE934C;
    case 413u: goto L_08AE9354;
    case 414u: goto L_08AE9360;
    case 415u: goto L_08AE9368;
    case 416u: goto L_08AE937C;
    case 417u: goto L_08AE9384;
    case 418u: goto L_08AE938C;
    case 419u: goto L_08AE9398;
    case 420u: goto L_08AE93A0;
    case 421u: goto L_08AE93A4;
    case 422u: goto L_08AE93A8;
    case 423u: goto L_08AE93B4;
    case 424u: goto L_08AE93BC;
    case 425u: goto L_08AE93C4;
    case 426u: goto L_08AE93D0;
    case 427u: goto L_08AE93D8;
    case 428u: goto L_08AE93EC;
    case 429u: goto L_08AE93F4;
    case 430u: goto L_08AE93FC;
    case 431u: goto L_08AE9404;
    case 432u: goto L_08AE9408;
    case 433u: goto L_08AE940C;
    case 434u: goto L_08AE9414;
    case 435u: goto L_08AE941C;
    case 436u: goto L_08AE9428;
    case 437u: goto L_08AE9438;
    case 438u: goto L_08AE9440;
    case 439u: goto L_08AE9448;
    case 440u: goto L_08AE9454;
    case 441u: goto L_08AE945C;
    case 442u: goto L_08AE9468;
    case 443u: goto L_08AE947C;
    case 444u: goto L_08AE9484;
    case 445u: goto L_08AE948C;
    case 446u: goto L_08AE94A0;
    case 447u: goto L_08AE94A8;
    case 448u: goto L_08AE94AC;
    case 449u: goto L_08AE94B4;
    case 450u: goto L_08AE94C0;
    case 451u: goto L_08AE94C8;
    case 452u: goto L_08AE94CC;
    case 453u: goto L_08AE94D0;
    case 454u: goto L_08AE94D8;
    case 455u: goto L_08AE94EC;
    case 456u: goto L_08AE94F4;
    case 457u: goto L_08AE9500;
    case 458u: goto L_08AE9508;
    case 459u: goto L_08AE950C;
    case 460u: goto L_08AE9510;
    case 461u: goto L_08AE951C;
    case 462u: goto L_08AE9524;
    case 463u: goto L_08AE952C;
    case 464u: goto L_08AE9534;
    case 465u: goto L_08AE953C;
    case 466u: goto L_08AE9544;
    case 467u: goto L_08AE9558;
    case 468u: goto L_08AE9560;
    case 469u: goto L_08AE9568;
    case 470u: goto L_08AE957C;
    case 471u: goto L_08AE9584;
    case 472u: goto L_08AE958C;
    case 473u: goto L_08AE9598;
    case 474u: goto L_08AE95A0;
    case 475u: goto L_08AE95A8;
    case 476u: goto L_08AE95B0;
    case 477u: goto L_08AE95BC;
    case 478u: goto L_08AE95C4;
    case 479u: goto L_08AE95C8;
    case 480u: goto L_08AE95D0;
    case 481u: goto L_08AE95D4;
    case 482u: goto L_08AE95DC;
    case 483u: goto L_08AE95E4;
    case 484u: goto L_08AE95F0;
    case 485u: goto L_08AE95F4;
    case 486u: goto L_08AE95FC;
    case 487u: goto L_08AE9600;
    case 488u: goto L_08AE9608;
    case 489u: goto L_08AE9614;
    case 490u: goto L_08AE9620;
    case 491u: goto L_08AE9628;
    case 492u: goto L_08AE9630;
    case 493u: goto L_08AE963C;
    case 494u: goto L_08AE9644;
    case 495u: goto L_08AE964C;
    case 496u: goto L_08AE9654;
    case 497u: goto L_08AE9660;
    case 498u: goto L_08AE9664;
    case 499u: goto L_08AE966C;
    case 500u: goto L_08AE9678;
    case 501u: goto L_08AE9680;
    case 502u: goto L_08AE9688;
    case 503u: goto L_08AE9690;
    case 504u: goto L_08AE96AC;
    case 505u: goto L_08AE96B0;
    case 506u: goto L_08AE96BC;
    case 507u: goto L_08AE96C4;
    case 508u: goto L_08AE96DC;
    case 509u: goto L_08AE96E4;
    case 510u: goto L_08AE96F8;
    case 511u: goto L_08AE9700;
    case 512u: goto L_08AE9720;
    case 513u: goto L_08AE9728;
    case 514u: goto L_08AE9750;
    case 515u: goto L_08AE9758;
    case 516u: goto L_08AE976C;
    case 517u: goto L_08AE9774;
    case 518u: goto L_08AE978C;
    case 519u: goto L_08AE9794;
    case 520u: goto L_08AE979C;
    case 521u: goto L_08AE97B0;
    case 522u: goto L_08AE97B8;
    case 523u: goto L_08AE97D0;
    case 524u: goto L_08AE97D8;
    case 525u: goto L_08AE97EC;
    case 526u: goto L_08AE97F4;
    case 527u: goto L_08AE97FC;
    case 528u: goto L_08AE9808;
    case 529u: goto L_08AE981C;
    case 530u: goto L_08AE9820;
    case 531u: goto L_08AE9828;
    case 532u: goto L_08AE9848;
    case 533u: goto L_08AE9850;
    case 534u: goto L_08AE9860;
    case 535u: goto L_08AE9868;
    case 536u: goto L_08AE987C;
    case 537u: goto L_08AE988C;
    case 538u: goto L_08AE9894;
    case 539u: goto L_08AE98A0;
    case 540u: goto L_08AE98A8;
    case 541u: goto L_08AE98BC;
    case 542u: goto L_08AE98C0;
    case 543u: goto L_08AE98C8;
    case 544u: goto L_08AE98D0;
    case 545u: goto L_08AE98DC;
    case 546u: goto L_08AE98E4;
    case 547u: goto L_08AE9914;
    case 548u: goto L_08AE991C;
    case 549u: goto L_08AE9954;
    case 550u: goto L_08AE995C;
    case 551u: goto L_08AE9980;
    case 552u: goto L_08AE9984;
    case 553u: goto L_08AE9988;
    case 554u: goto L_08AE998C;
    case 555u: goto L_08AE9994;
    case 556u: goto L_08AE999C;
    case 557u: goto L_08AE99A4;
    case 558u: goto L_08AE99A8;
    case 559u: goto L_08AE99AC;
    case 560u: goto L_08AE99B4;
    case 561u: goto L_08AE99B8;
    case 562u: goto L_08AE99D8;
    case 563u: goto L_08AE9A0C;
    case 564u: goto L_08AE9A20;
    case 565u: goto L_08AE9A3C;
    case 566u: goto L_08AE9A58;
    case 567u: goto L_08AE9A64;
    case 568u: goto L_08AE9A6C;
    case 569u: goto L_08AE9A74;
    case 570u: goto L_08AE9A7C;
    case 571u: goto L_08AE9A84;
    case 572u: goto L_08AE9A98;
    case 573u: goto L_08AE9AA0;
    case 574u: goto L_08AE9AD0;
    case 575u: goto L_08AE9AD8;
    case 576u: goto L_08AE9AE8;
    case 577u: goto L_08AE9AF4;
    case 578u: goto L_08AE9B04;
    case 579u: goto L_08AE9B0C;
    case 580u: goto L_08AE9B1C;
    case 581u: goto L_08AE9B3C;
    case 582u: goto L_08AE9B44;
    case 583u: goto L_08AE9B54;
    case 584u: goto L_08AE9B74;
    case 585u: goto L_08AE9B7C;
    case 586u: goto L_08AE9B84;
    case 587u: goto L_08AE9B94;
    case 588u: goto L_08AE9BB4;
    case 589u: goto L_08AE9BBC;
    case 590u: goto L_08AE9BCC;
    case 591u: goto L_08AE9BEC;
    case 592u: goto L_08AE9BF4;
    case 593u: goto L_08AE9C04;
    case 594u: goto L_08AE9C24;
    case 595u: goto L_08AE9C2C;
    case 596u: goto L_08AE9C3C;
    case 597u: goto L_08AE9C44;
    case 598u: goto L_08AE9C50;
    case 599u: goto L_08AE9C60;
    case 600u: goto L_08AE9C68;
    case 601u: goto L_08AE9C74;
    case 602u: goto L_08AE9C7C;
    case 603u: goto L_08AE9C84;
    case 604u: goto L_08AE9CD0;
    case 605u: goto L_08AE9CD8;
    case 606u: goto L_08AE9CE8;
    case 607u: goto L_08AE9CF8;
    case 608u: goto L_08AE9D00;
    case 609u: goto L_08AE9D0C;
    case 610u: goto L_08AE9D18;
    case 611u: goto L_08AE9D24;
    case 612u: goto L_08AE9D2C;
    case 613u: goto L_08AE9D3C;
    case 614u: goto L_08AE9D44;
    case 615u: goto L_08AE9D4C;
    case 616u: goto L_08AE9D54;
    case 617u: goto L_08AE9D60;
    case 618u: goto L_08AE9D68;
    case 619u: goto L_08AE9D70;
    case 620u: goto L_08AE9D78;
    case 621u: goto L_08AE9D80;
    case 622u: goto L_08AE9D8C;
    case 623u: goto L_08AE9D94;
    case 624u: goto L_08AE9D9C;
    case 625u: goto L_08AE9DA8;
    case 626u: goto L_08AE9DB0;
    case 627u: goto L_08AE9DB8;
    case 628u: goto L_08AE9DC0;
    case 629u: goto L_08AE9DD0;
    case 630u: goto L_08AE9DD8;
    case 631u: goto L_08AE9DE0;
    case 632u: goto L_08AE9DEC;
    case 633u: goto L_08AE9DF4;
    case 634u: goto L_08AE9DFC;
    case 635u: goto L_08AE9E28;
    case 636u: goto L_08AE9E34;
    case 637u: goto L_08AE9E38;
    case 638u: goto L_08AE9E48;
    case 639u: goto L_08AE9E68;
    case 640u: goto L_08AE9E74;
    case 641u: goto L_08AE9E7C;
    case 642u: goto L_08AE9E84;
    case 643u: goto L_08AE9E8C;
    case 644u: goto L_08AE9E94;
    case 645u: goto L_08AE9E98;
    case 646u: goto L_08AE9E9C;
    case 647u: goto L_08AE9EA4;
    case 648u: goto L_08AE9EAC;
    case 649u: goto L_08AE9EB4;
    case 650u: goto L_08AE9EC0;
    case 651u: goto L_08AE9ECC;
    case 652u: goto L_08AE9ED8;
    case 653u: goto L_08AE9EE4;
    case 654u: goto L_08AE9EEC;
    case 655u: goto L_08AE9EF4;
    case 656u: goto L_08AE9EFC;
    case 657u: goto L_08AE9F04;
    case 658u: goto L_08AE9F0C;
    case 659u: goto L_08AE9F18;
    case 660u: goto L_08AE9F20;
    case 661u: goto L_08AE9F28;
    case 662u: goto L_08AE9F3C;
    case 663u: goto L_08AE9F44;
    case 664u: goto L_08AE9F4C;
    case 665u: goto L_08AE9F54;
    case 666u: goto L_08AE9F5C;
    case 667u: goto L_08AE9F64;
    case 668u: goto L_08AE9F74;
    case 669u: goto L_08AE9F7C;
    case 670u: goto L_08AE9F80;
    case 671u: goto L_08AE9F88;
    case 672u: goto L_08AE9F90;
    case 673u: goto L_08AE9FA4;
    case 674u: goto L_08AE9FAC;
    case 675u: goto L_08AE9FB4;
    case 676u: goto L_08AE9FC8;
    case 677u: goto L_08AE9FCC;
    case 678u: goto L_08AE9FE4;
    case 679u: goto L_08AEA00C;
    case 680u: goto L_08AEA014;
    case 681u: goto L_08AEA020;
    case 682u: goto L_08AEA02C;
    case 683u: goto L_08AEA038;
    case 684u: goto L_08AEA040;
    case 685u: goto L_08AEA04C;
    case 686u: goto L_08AEA050;
    case 687u: goto L_08AEA05C;
    case 688u: goto L_08AEA060;
    case 689u: goto L_08AEA0A0;
    case 690u: goto L_08AEA0BC;
    case 691u: goto L_08AEA0CC;
    case 692u: goto L_08AEA0D4;
    case 693u: goto L_08AEA0DC;
    case 694u: goto L_08AEA0EC;
    case 695u: goto L_08AEA104;
    case 696u: goto L_08AEA12C;
    case 697u: goto L_08AEA138;
    case 698u: goto L_08AEA140;
    case 699u: goto L_08AEA148;
    case 700u: goto L_08AEA150;
    case 701u: goto L_08AEA15C;
    case 702u: goto L_08AEA164;
    case 703u: goto L_08AEA174;
    case 704u: goto L_08AEA17C;
    case 705u: goto L_08AEA188;
    case 706u: goto L_08AEA190;
    case 707u: goto L_08AEA198;
    case 708u: goto L_08AEA1A4;
    case 709u: goto L_08AEA1B8;
    case 710u: goto L_08AEA1C4;
    case 711u: goto L_08AEA1CC;
    case 712u: goto L_08AEA1E4;
    case 713u: goto L_08AEA1EC;
    case 714u: goto L_08AEA1F8;
    case 715u: goto L_08AEA200;
    case 716u: goto L_08AEA208;
    case 717u: goto L_08AEA214;
    case 718u: goto L_08AEA218;
    case 719u: goto L_08AEA224;
    case 720u: goto L_08AEA22C;
    case 721u: goto L_08AEA23C;
    case 722u: goto L_08AEA244;
    case 723u: goto L_08AEA24C;
    case 724u: goto L_08AEA254;
    case 725u: goto L_08AEA25C;
    case 726u: goto L_08AEA274;
    case 727u: goto L_08AEA27C;
    case 728u: goto L_08AEA284;
    case 729u: goto L_08AEA29C;
    case 730u: goto L_08AEA2A4;
    case 731u: goto L_08AEA2AC;
    case 732u: goto L_08AEA2B8;
    case 733u: goto L_08AEA2C0;
    case 734u: goto L_08AEA2C8;
    case 735u: goto L_08AEA2E0;
    case 736u: goto L_08AEA2EC;
    case 737u: goto L_08AEA2FC;
    case 738u: goto L_08AEA304;
    case 739u: goto L_08AEA30C;
    case 740u: goto L_08AEA318;
    case 741u: goto L_08AEA324;
    case 742u: goto L_08AEA328;
    case 743u: goto L_08AEA338;
    case 744u: goto L_08AEA368;
    case 745u: goto L_08AEA384;
    case 746u: goto L_08AEA38C;
    case 747u: goto L_08AEA398;
    case 748u: goto L_08AEA3A0;
    case 749u: goto L_08AEA3B0;
    case 750u: goto L_08AEA3B8;
    case 751u: goto L_08AEA3C4;
    case 752u: goto L_08AEA3CC;
    case 753u: goto L_08AEA3D4;
    case 754u: goto L_08AEA3E0;
    case 755u: goto L_08AEA3F4;
    case 756u: goto L_08AEA400;
    case 757u: goto L_08AEA408;
    case 758u: goto L_08AEA410;
    case 759u: goto L_08AEA41C;
    case 760u: goto L_08AEA42C;
    case 761u: goto L_08AEA43C;
    case 762u: goto L_08AEA448;
    case 763u: goto L_08AEA450;
    case 764u: goto L_08AEA458;
    case 765u: goto L_08AEA468;
    case 766u: goto L_08AEA470;
    case 767u: goto L_08AEA478;
    case 768u: goto L_08AEA4B0;
    case 769u: goto L_08AEA4B8;
    case 770u: goto L_08AEA4C0;
    case 771u: goto L_08AEA4CC;
    case 772u: goto L_08AEA4D4;
    case 773u: goto L_08AEA4DC;
    case 774u: goto L_08AEA4EC;
    case 775u: goto L_08AEA4F4;
    case 776u: goto L_08AEA4FC;
    case 777u: goto L_08AEA508;
    case 778u: goto L_08AEA510;
    case 779u: goto L_08AEA544;
    case 780u: goto L_08AEA54C;
    case 781u: goto L_08AEA554;
    case 782u: goto L_08AEA564;
    case 783u: goto L_08AEA584;
    case 784u: goto L_08AEA590;
    case 785u: goto L_08AEA598;
    case 786u: goto L_08AEA5A0;
    case 787u: goto L_08AEA5AC;
    case 788u: goto L_08AEA5B8;
    case 789u: goto L_08AEA5C0;
    case 790u: goto L_08AEA5C8;
    case 791u: goto L_08AEA5D8;
    case 792u: goto L_08AEA5E4;
    case 793u: goto L_08AEA600;
    case 794u: goto L_08AEA610;
    case 795u: goto L_08AEA618;
    case 796u: goto L_08AEA628;
    case 797u: goto L_08AEA634;
    case 798u: goto L_08AEA63C;
    case 799u: goto L_08AEA64C;
    case 800u: goto L_08AEA658;
    case 801u: goto L_08AEA660;
    case 802u: goto L_08AEA66C;
    case 803u: goto L_08AEA67C;
    case 804u: goto L_08AEA684;
    case 805u: goto L_08AEA690;
    case 806u: goto L_08AEA698;
    case 807u: goto L_08AEA6A0;
    case 808u: goto L_08AEA6B0;
    case 809u: goto L_08AEA6BC;
    case 810u: goto L_08AEA6C4;
    case 811u: goto L_08AEA6D0;
    case 812u: goto L_08AEA6D8;
    case 813u: goto L_08AEA6E0;
    case 814u: goto L_08AEA6F0;
    case 815u: goto L_08AEA6F8;
    case 816u: goto L_08AEA700;
    case 817u: goto L_08AEA70C;
    case 818u: goto L_08AEA714;
    case 819u: goto L_08AEA71C;
    case 820u: goto L_08AEA72C;
    case 821u: goto L_08AEA734;
    case 822u: goto L_08AEA73C;
    case 823u: goto L_08AEA748;
    case 824u: goto L_08AEA754;
    case 825u: goto L_08AEA75C;
    case 826u: goto L_08AEA764;
    case 827u: goto L_08AEA774;
    case 828u: goto L_08AEA780;
    case 829u: goto L_08AEA79C;
    case 830u: goto L_08AEA7AC;
    case 831u: goto L_08AEA7B4;
    case 832u: goto L_08AEA7C4;
    case 833u: goto L_08AEA7D0;
    case 834u: goto L_08AEA7D8;
    case 835u: goto L_08AEA7E8;
    case 836u: goto L_08AEA7F4;
    case 837u: goto L_08AEA7FC;
    case 838u: goto L_08AEA80C;
    case 839u: goto L_08AEA814;
    case 840u: goto L_08AEA820;
    case 841u: goto L_08AEA828;
    case 842u: goto L_08AEA830;
    case 843u: goto L_08AEA83C;
    case 844u: goto L_08AEA844;
    case 845u: goto L_08AEA84C;
    case 846u: goto L_08AEA858;
    case 847u: goto L_08AEA86C;
    case 848u: goto L_08AEA878;
    case 849u: goto L_08AEA880;
    case 850u: goto L_08AEA8B4;
    case 851u: goto L_08AEA8C0;
    case 852u: goto L_08AEA8CC;
    case 853u: goto L_08AEA8D4;
    case 854u: goto L_08AEA8DC;
    case 855u: goto L_08AEA8E8;
    case 856u: goto L_08AEA8F0;
    case 857u: goto L_08AEA900;
    case 858u: goto L_08AEA908;
    case 859u: goto L_08AEA910;
    case 860u: goto L_08AEA948;
    case 861u: goto L_08AEA950;
    case 862u: goto L_08AEA958;
    case 863u: goto L_08AEA964;
    case 864u: goto L_08AEA96C;
    case 865u: goto L_08AEA974;
    case 866u: goto L_08AEA98C;
    case 867u: goto L_08AEA998;
    case 868u: goto L_08AEA9A8;
    case 869u: goto L_08AEA9B0;
    case 870u: goto L_08AEA9B8;
    case 871u: goto L_08AEA9C4;
    case 872u: goto L_08AEA9D0;
    case 873u: goto L_08AEA9D4;
    case 874u: goto L_08AEA9EC;
    case 875u: goto L_08AEAA30;
    case 876u: goto L_08AEAA3C;
    case 877u: goto L_08AEAA44;
    case 878u: goto L_08AEAA4C;
    case 879u: goto L_08AEAA68;
    case 880u: goto L_08AEAA7C;
    case 881u: goto L_08AEAA94;
    case 882u: goto L_08AEAAA8;
    case 883u: goto L_08AEAAB0;
    case 884u: goto L_08AEAABC;
    case 885u: goto L_08AEAAC4;
    case 886u: goto L_08AEAAD4;
    case 887u: goto L_08AEAADC;
    case 888u: goto L_08AEAAE8;
    case 889u: goto L_08AEAAF0;
    case 890u: goto L_08AEAAF8;
    case 891u: goto L_08AEAB04;
    case 892u: goto L_08AEAB18;
    case 893u: goto L_08AEAB24;
    case 894u: goto L_08AEAB2C;
    case 895u: goto L_08AEAB34;
    case 896u: goto L_08AEAB44;
    case 897u: goto L_08AEAB4C;
    case 898u: goto L_08AEAB78;
    case 899u: goto L_08AEAB88;
    case 900u: goto L_08AEABA0;
    case 901u: goto L_08AEABA8;
    case 902u: goto L_08AEABB4;
    case 903u: goto L_08AEABBC;
    case 904u: goto L_08AEABC4;
    case 905u: goto L_08AEABD0;
    case 906u: goto L_08AEABD4;
    case 907u: goto L_08AEABE0;
    case 908u: goto L_08AEABE8;
    case 909u: goto L_08AEABF8;
    case 910u: goto L_08AEAC00;
    case 911u: goto L_08AEAC08;
    case 912u: goto L_08AEAC14;
    case 913u: goto L_08AEAC1C;
    case 914u: goto L_08AEAC2C;
    case 915u: goto L_08AEAC34;
    case 916u: goto L_08AEAC54;
    case 917u: goto L_08AEAC5C;
    case 918u: goto L_08AEAC88;
    case 919u: goto L_08AEAC98;
    case 920u: goto L_08AEACA4;
    case 921u: goto L_08AEACAC;
    case 922u: goto L_08AEACC8;
    case 923u: goto L_08AEACD8;
    case 924u: goto L_08AEACE4;
    case 925u: goto L_08AEACEC;
    case 926u: goto L_08AEACF8;
    case 927u: goto L_08AEAD00;
    case 928u: goto L_08AEAD1C;
    case 929u: goto L_08AEAD2C;
    case 930u: goto L_08AEAD34;
    case 931u: goto L_08AEAD38;
    case 932u: goto L_08AEAD40;
    case 933u: goto L_08AEAD48;
    case 934u: goto L_08AEAD50;
    case 935u: goto L_08AEAD58;
    case 936u: goto L_08AEAD60;
    case 937u: goto L_08AEAD6C;
    case 938u: goto L_08AEAD74;
    case 939u: goto L_08AEAD84;
    case 940u: goto L_08AEAD8C;
    case 941u: goto L_08AEAD98;
    case 942u: goto L_08AEADA0;
    case 943u: goto L_08AEADAC;
    case 944u: goto L_08AEADB4;
    case 945u: goto L_08AEADF8;
    case 946u: goto L_08AEAE00;
    case 947u: goto L_08AEAE38;
    case 948u: goto L_08AEAE50;
    case 949u: goto L_08AEAE64;
    case 950u: goto L_08AEAE7C;
    case 951u: goto L_08AEAE90;
    case 952u: goto L_08AEAE9C;
    case 953u: goto L_08AEAEA4;
    case 954u: goto L_08AEAEB8;
    case 955u: goto L_08AEAEC4;
    case 956u: goto L_08AEAECC;
    case 957u: goto L_08AEAEE4;
    case 958u: goto L_08AEAEEC;
    case 959u: goto L_08AEAF04;
    case 960u: goto L_08AEAF0C;
    case 961u: goto L_08AEAF14;
    case 962u: goto L_08AEAF1C;
    case 963u: goto L_08AEAF34;
    case 964u: goto L_08AEAF3C;
    case 965u: goto L_08AEAF54;
    case 966u: goto L_08AEAF5C;
    case 967u: goto L_08AEAF64;
    case 968u: goto L_08AEAF7C;
    case 969u: goto L_08AEAF84;
    case 970u: goto L_08AEAF9C;
    case 971u: goto L_08AEAFA4;
    case 972u: goto L_08AEAFD0;
    case 973u: goto L_08AEAFD8;
    case 974u: goto L_08AEAFE8;
    case 975u: goto L_08AEAFF0;
    case 976u: goto L_08AEAFFC;
    case 977u: goto L_08AEB004;
    case 978u: goto L_08AEB010;
    case 979u: goto L_08AEB018;
    case 980u: goto L_08AEB020;
    case 981u: goto L_08AEB030;
    case 982u: goto L_08AEB038;
    case 983u: goto L_08AEB048;
    case 984u: goto L_08AEB050;
    case 985u: goto L_08AEB060;
    case 986u: goto L_08AEB068;
    case 987u: goto L_08AEB078;
    case 988u: goto L_08AEB080;
    case 989u: goto L_08AEB098;
    case 990u: goto L_08AEB0A4;
    case 991u: goto L_08AEB0B4;
    case 992u: goto L_08AEB0BC;
    case 993u: goto L_08AEB0C4;
    case 994u: goto L_08AEB0D0;
    case 995u: goto L_08AEB0DC;
    case 996u: goto L_08AEB0E0;
    case 997u: goto L_08AEB104;
    case 998u: goto L_08AEB144;
    case 999u: goto L_08AEB150;
    case 1000u: goto L_08AEB158;
    case 1001u: goto L_08AEB160;
    case 1002u: goto L_08AEB168;
    case 1003u: goto L_08AEB174;
    case 1004u: goto L_08AEB17C;
    case 1005u: goto L_08AEB18C;
    case 1006u: goto L_08AEB194;
    case 1007u: goto L_08AEB1A0;
    case 1008u: goto L_08AEB1A8;
    case 1009u: goto L_08AEB1B0;
    case 1010u: goto L_08AEB1BC;
    case 1011u: goto L_08AEB1D0;
    case 1012u: goto L_08AEB1DC;
    case 1013u: goto L_08AEB1E4;
    case 1014u: goto L_08AEB1EC;
    case 1015u: goto L_08AEB1F4;
    case 1016u: goto L_08AEB200;
    case 1017u: goto L_08AEB208;
    case 1018u: goto L_08AEB210;
    case 1019u: goto L_08AEB21C;
    case 1020u: goto L_08AEB220;
    case 1021u: goto L_08AEB22C;
    case 1022u: goto L_08AEB234;
    case 1023u: goto L_08AEB244;
    case 1024u: goto L_08AEB24C;
    case 1025u: goto L_08AEB258;
    case 1026u: goto L_08AEB260;
    case 1027u: goto L_08AEB268;
    case 1028u: goto L_08AEB274;
    case 1029u: goto L_08AEB280;
    case 1030u: goto L_08AEB288;
    case 1031u: goto L_08AEB29C;
    case 1032u: goto L_08AEB2A4;
    case 1033u: goto L_08AEB2AC;
    case 1034u: goto L_08AEB2B4;
    case 1035u: goto L_08AEB2BC;
    case 1036u: goto L_08AEB2C4;
    case 1037u: goto L_08AEB2CC;
    case 1038u: goto L_08AEB2D4;
    case 1039u: goto L_08AEB2DC;
    case 1040u: goto L_08AEB2E4;
    case 1041u: goto L_08AEB2EC;
    case 1042u: goto L_08AEB2F4;
    case 1043u: goto L_08AEB304;
    case 1044u: goto L_08AEB30C;
    case 1045u: goto L_08AEB31C;
    case 1046u: goto L_08AEB324;
    case 1047u: goto L_08AEB334;
    case 1048u: goto L_08AEB33C;
    case 1049u: goto L_08AEB348;
    case 1050u: goto L_08AEB368;
    case 1051u: goto L_08AEB378;
    case 1052u: goto L_08AEB380;
    case 1053u: goto L_08AEB388;
    case 1054u: goto L_08AEB398;
    case 1055u: goto L_08AEB3A4;
    case 1056u: goto L_08AEB3AC;
    case 1057u: goto L_08AEB3C0;
    case 1058u: goto L_08AEB3C8;
    case 1059u: goto L_08AEB3D0;
    case 1060u: goto L_08AEB3D8;
    case 1061u: goto L_08AEB3EC;
    case 1062u: goto L_08AEB3F4;
    case 1063u: goto L_08AEB3FC;
    case 1064u: goto L_08AEB408;
    case 1065u: goto L_08AEB410;
    case 1066u: goto L_08AEB41C;
    case 1067u: goto L_08AEB424;
    case 1068u: goto L_08AEB438;
    case 1069u: goto L_08AEB444;
    case 1070u: goto L_08AEB44C;
    case 1071u: goto L_08AEB454;
    case 1072u: goto L_08AEB45C;
    case 1073u: goto L_08AEB464;
    case 1074u: goto L_08AEB46C;
    case 1075u: goto L_08AEB474;
    case 1076u: goto L_08AEB47C;
    case 1077u: goto L_08AEB48C;
    case 1078u: goto L_08AEB494;
    case 1079u: goto L_08AEB49C;
    case 1080u: goto L_08AEB4A8;
    case 1081u: goto L_08AEB4B4;
    case 1082u: goto L_08AEB4B8;
    case 1083u: goto L_08AEB4D8;
    case 1084u: goto L_08AEB4E8;
    case 1085u: goto L_08AEB4F0;
    case 1086u: goto L_08AEB500;
    case 1087u: goto L_08AEB510;
    case 1088u: goto L_08AEB514;
    case 1089u: goto L_08AEB51C;
    case 1090u: goto L_08AEB52C;
    case 1091u: goto L_08AEB53C;
    case 1092u: goto L_08AEB544;
    case 1093u: goto L_08AEB554;
    case 1094u: goto L_08AEB55C;
    case 1095u: goto L_08AEB56C;
    case 1096u: goto L_08AEB574;
    case 1097u: goto L_08AEB57C;
    case 1098u: goto L_08AEB590;
    case 1099u: goto L_08AEB5A0;
    case 1100u: goto L_08AEB5CC;
    case 1101u: goto L_08AEB5D4;
    case 1102u: goto L_08AEB5E0;
    case 1103u: goto L_08AEB5EC;
    case 1104u: goto L_08AEB5F8;
    case 1105u: goto L_08AEB5FC;
    case 1106u: goto L_08AEB600;
    case 1107u: goto L_08AEB608;
    case 1108u: goto L_08AEB610;
    case 1109u: goto L_08AEB614;
    case 1110u: goto L_08AEB618;
    case 1111u: goto L_08AEB620;
    case 1112u: goto L_08AEB628;
    case 1113u: goto L_08AEB63C;
    case 1114u: goto L_08AEB644;
    case 1115u: goto L_08AEB65C;
    case 1116u: goto L_08AEB668;
    case 1117u: goto L_08AEB670;
    case 1118u: goto L_08AEB68C;
    case 1119u: goto L_08AEB694;
    case 1120u: goto L_08AEB69C;
    case 1121u: goto L_08AEB6B0;
    case 1122u: goto L_08AEB6B4;
    case 1123u: goto L_08AEB6C0;
    case 1124u: goto L_08AEB6C4;
    case 1125u: goto L_08AEB6CC;
    case 1126u: goto L_08AEB6D4;
    case 1127u: goto L_08AEB6D8;
    case 1128u: goto L_08AEB6DC;
    case 1129u: goto L_08AEB6E4;
    case 1130u: goto L_08AEB6EC;
    case 1131u: goto L_08AEB700;
    case 1132u: goto L_08AEB70C;
    case 1133u: goto L_08AEB714;
    case 1134u: goto L_08AEB718;
    case 1135u: goto L_08AEB720;
    case 1136u: goto L_08AEB728;
    case 1137u: goto L_08AEB740;
    case 1138u: goto L_08AEB748;
    case 1139u: goto L_08AEB750;
    case 1140u: goto L_08AEB768;
    case 1141u: goto L_08AEB770;
    case 1142u: goto L_08AEB778;
    case 1143u: goto L_08AEB78C;
    case 1144u: goto L_08AEB790;
    case 1145u: goto L_08AEB79C;
    case 1146u: goto L_08AEB7A0;
    case 1147u: goto L_08AEB7A8;
    case 1148u: goto L_08AEB7B0;
    case 1149u: goto L_08AEB7B4;
    case 1150u: goto L_08AEB7B8;
    case 1151u: goto L_08AEB7C0;
    case 1152u: goto L_08AEB7CC;
    case 1153u: goto L_08AEB7D4;
    case 1154u: goto L_08AEB7D8;
    case 1155u: goto L_08AEB7DC;
    case 1156u: goto L_08AEB7F0;
    case 1157u: goto L_08AEB7FC;
    case 1158u: goto L_08AEB804;
    case 1159u: goto L_08AEB808;
    case 1160u: goto L_08AEB810;
    case 1161u: goto L_08AEB81C;
    case 1162u: goto L_08AEB828;
    case 1163u: goto L_08AEB830;
    case 1164u: goto L_08AEB83C;
    case 1165u: goto L_08AEB844;
    case 1166u: goto L_08AEB860;
    case 1167u: goto L_08AEB868;
    case 1168u: goto L_08AEB870;
    case 1169u: goto L_08AEB87C;
    case 1170u: goto L_08AEB884;
    case 1171u: goto L_08AEB890;
    case 1172u: goto L_08AEB898;
    case 1173u: goto L_08AEB8B4;
    case 1174u: goto L_08AEB8C4;
    case 1175u: goto L_08AEB8CC;
    case 1176u: goto L_08AEB8D0;
    case 1177u: goto L_08AEB8D8;
    case 1178u: goto L_08AEB8E4;
    case 1179u: goto L_08AEB8F0;
    case 1180u: goto L_08AEB8F8;
    case 1181u: goto L_08AEB904;
    case 1182u: goto L_08AEB90C;
    case 1183u: goto L_08AEB928;
    case 1184u: goto L_08AEB930;
    case 1185u: goto L_08AEB938;
    case 1186u: goto L_08AEB944;
    case 1187u: goto L_08AEB94C;
    case 1188u: goto L_08AEB958;
    case 1189u: goto L_08AEB960;
    case 1190u: goto L_08AEB97C;
    case 1191u: goto L_08AEB994;
    case 1192u: goto L_08AEB99C;
    case 1193u: goto L_08AEB9A0;
    case 1194u: goto L_08AEB9A8;
    case 1195u: goto L_08AEB9B4;
    case 1196u: goto L_08AEB9C0;
    case 1197u: goto L_08AEB9C8;
    case 1198u: goto L_08AEB9D4;
    case 1199u: goto L_08AEB9DC;
    case 1200u: goto L_08AEB9F8;
    case 1201u: goto L_08AEBA00;
    case 1202u: goto L_08AEBA08;
    case 1203u: goto L_08AEBA14;
    case 1204u: goto L_08AEBA1C;
    case 1205u: goto L_08AEBA28;
    case 1206u: goto L_08AEBA30;
    case 1207u: goto L_08AEBA4C;
    case 1208u: goto L_08AEBA58;
    case 1209u: goto L_08AEBA60;
    case 1210u: goto L_08AEBA64;
    case 1211u: goto L_08AEBA6C;
    case 1212u: goto L_08AEBA78;
    case 1213u: goto L_08AEBA84;
    case 1214u: goto L_08AEBA8C;
    case 1215u: goto L_08AEBA98;
    case 1216u: goto L_08AEBAA0;
    case 1217u: goto L_08AEBABC;
    case 1218u: goto L_08AEBAC4;
    case 1219u: goto L_08AEBACC;
    case 1220u: goto L_08AEBAD8;
    case 1221u: goto L_08AEBAE0;
    case 1222u: goto L_08AEBAEC;
    case 1223u: goto L_08AEBAF4;
    case 1224u: goto L_08AEBB10;
    case 1225u: goto L_08AEBB18;
    case 1226u: goto L_08AEBB20;
    case 1227u: goto L_08AEBB28;
    case 1228u: goto L_08AEBB2C;
    case 1229u: goto L_08AEBB3C;
    case 1230u: goto L_08AEBB44;
    case 1231u: goto L_08AEBB48;
    case 1232u: goto L_08AEBB50;
    case 1233u: goto L_08AEBB58;
    case 1234u: goto L_08AEBB64;
    case 1235u: goto L_08AEBB6C;
    case 1236u: goto L_08AEBB78;
    case 1237u: goto L_08AEBB80;
    case 1238u: goto L_08AEBB98;
    case 1239u: goto L_08AEBBA0;
    case 1240u: goto L_08AEBBA4;
    case 1241u: goto L_08AEBBAC;
    case 1242u: goto L_08AEBBB4;
    case 1243u: goto L_08AEBBCC;
    case 1244u: goto L_08AEBBD4;
    case 1245u: goto L_08AEBBDC;
    case 1246u: goto L_08AEBBF4;
    case 1247u: goto L_08AEBBFC;
    case 1248u: goto L_08AEBC04;
    case 1249u: goto L_08AEBC14;
    case 1250u: goto L_08AEBC1C;
    case 1251u: goto L_08AEBC24;
    case 1252u: goto L_08AEBC30;
    case 1253u: goto L_08AEBC38;
    case 1254u: goto L_08AEBC44;
    case 1255u: goto L_08AEBC4C;
    case 1256u: goto L_08AEBC64;
    case 1257u: goto L_08AEBC6C;
    case 1258u: goto L_08AEBC74;
    case 1259u: goto L_08AEBC8C;
    case 1260u: goto L_08AEBC94;
    case 1261u: goto L_08AEBC9C;
    case 1262u: goto L_08AEBCA8;
    case 1263u: goto L_08AEBCB0;
    case 1264u: goto L_08AEBCBC;
    case 1265u: goto L_08AEBCC4;
    case 1266u: goto L_08AEBCE0;
    case 1267u: goto L_08AEBCE4;
    case 1268u: goto L_08AEBCF0;
    case 1269u: goto L_08AEBD14;
    case 1270u: goto L_08AEBD40;
    case 1271u: goto L_08AEBD48;
    case 1272u: goto L_08AEBD54;
    case 1273u: goto L_08AEBD60;
    case 1274u: goto L_08AEBD6C;
    case 1275u: goto L_08AEBD70;
    case 1276u: goto L_08AEBD7C;
    case 1277u: goto L_08AEBD80;
    case 1278u: goto L_08AEBD88;
    case 1279u: goto L_08AEBD94;
    case 1280u: goto L_08AEBD9C;
    case 1281u: goto L_08AEBDA4;
    case 1282u: goto L_08AEBDB0;
    case 1283u: goto L_08AEBDB8;
    case 1284u: goto L_08AEBDC0;
    case 1285u: goto L_08AEBDD4;
    case 1286u: goto L_08AEBDDC;
    case 1287u: goto L_08AEBDE4;
    case 1288u: goto L_08AEBDEC;
    case 1289u: goto L_08AEBDF4;
    case 1290u: goto L_08AEBDFC;
    case 1291u: goto L_08AEBE0C;
    case 1292u: goto L_08AEBE14;
    case 1293u: goto L_08AEBE1C;
    case 1294u: goto L_08AEBE28;
    case 1295u: goto L_08AEBE2C;
    case 1296u: goto L_08AEBE48;
    case 1297u: goto L_08AEBE6C;
    case 1298u: goto L_08AEBE74;
    case 1299u: goto L_08AEBE78;
    case 1300u: goto L_08AEBE7C;
    case 1301u: goto L_08AEBE84;
    case 1302u: goto L_08AEBE8C;
    case 1303u: goto L_08AEBE94;
    case 1304u: goto L_08AEBEA0;
    case 1305u: goto L_08AEBEAC;
    case 1306u: goto L_08AEBEB8;
    case 1307u: goto L_08AEBEC4;
    case 1308u: goto L_08AEBECC;
    case 1309u: goto L_08AEBED4;
    case 1310u: goto L_08AEBEDC;
    case 1311u: goto L_08AEBEE4;
    case 1312u: goto L_08AEBEEC;
    case 1313u: goto L_08AEBEF4;
    case 1314u: goto L_08AEBEFC;
    case 1315u: goto L_08AEBF04;
    case 1316u: goto L_08AEBF0C;
    case 1317u: goto L_08AEBF14;
    case 1318u: goto L_08AEBF1C;
    case 1319u: goto L_08AEBF20;
    case 1320u: goto L_08AEBF28;
    case 1321u: goto L_08AEBF30;
    case 1322u: goto L_08AEBF44;
    case 1323u: goto L_08AEBF48;
    case 1324u: goto L_08AEBF5C;
    case 1325u: goto L_08AEBFE4;
    case 1326u: goto L_08AEBFEC;
    case 1327u: goto L_08AEBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE8000:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8132)));
    ctx.set_gpr(31, 0x08AE8010u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8010u) goto L_08AE8010;
    return;
L_08AE8010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08AE8014;
L_08AE8014:
    ctx.set_gpr(31, 0x08AE801Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE801Cu) goto L_08AE801C;
    return;
L_08AE801C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8028u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AE8450;
L_08AE8028:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8038u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1100u, 0x08AEFEA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8038u) goto L_08AE8038;
    return;
L_08AE8038:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1761), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08AE804Cu);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE804Cu) goto L_08AE804C;
    return;
L_08AE804C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17358u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17106u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08AE8088u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE8088u) goto L_08AE8088;
    return;
L_08AE8088:
    ctx.set_gpr(31, 0x08AE8090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8090u) goto L_08AE8090;
    return;
L_08AE8090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17357u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17102u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    ctx.set_gpr(31, 0x08AE80C8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE80C8u) goto L_08AE80C8;
    return;
L_08AE80C8:
    ctx.set_gpr(31, 0x08AE80D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE80D0u) goto L_08AE80D0;
    return;
L_08AE80D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17357u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17102u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16204u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(62));
    ctx.set_gpr(31, 0x08AE8108u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE8108u) goto L_08AE8108;
    return;
L_08AE8108:
    ctx.set_gpr(31, 0x08AE8110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8110u) goto L_08AE8110;
    return;
L_08AE8110:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(236));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x08AE8130u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8130u) goto L_08AE8130;
    return;
L_08AE8130:
    ctx.set_gpr(31, 0x08AE8138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8138u) goto L_08AE8138;
    return;
L_08AE8138:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x08AE814Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE814Cu) goto L_08AE814C;
    return;
L_08AE814C:
    ctx.set_gpr(31, 0x08AE8154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8154u) goto L_08AE8154;
    return;
L_08AE8154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AE8168u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8168u) goto L_08AE8168;
    return;
L_08AE8168:
    ctx.set_gpr(31, 0x08AE8170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8170u) goto L_08AE8170;
    return;
L_08AE8170:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AE8184u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8184u) goto L_08AE8184;
    return;
L_08AE8184:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1772), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(31, 0x08AE8198u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    goto L_08AE8200;
L_08AE8198:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, 16624u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08AE81B0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    goto L_08AE81F8;
L_08AE81B0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, 16624u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08AE81C8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    goto L_08AE81F0;
L_08AE81C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1763), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08AE81D0;
L_08AE81D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AE81D4;
L_08AE81D4:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE81F0:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE81F8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8200:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AE823Cu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08AE82D0;
L_08AE823C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AE8248u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8248u) goto L_08AE8248;
    return;
L_08AE8248:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08AE825Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 862u, 0x088439F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE825Cu) goto L_08AE825C;
    return;
L_08AE825C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(228));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(31, 0x08AE82A0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE82A0u) goto L_08AE82A0;
    return;
L_08AE82A0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(248))))));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE82D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE82FCu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 41u, 0x088501CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE82FCu) goto L_08AE82FC;
    return;
L_08AE82FC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AE8308u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8308u) goto L_08AE8308;
    return;
L_08AE8308:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08AE8314u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_08AE8424;
L_08AE8314:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AE8320u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08AE83F8;
L_08AE8320:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AE832Cu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 569u, 0x0884A2D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE832Cu) goto L_08AE832C;
    return;
L_08AE832C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AE8338u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 39u, 0x088501A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8338u) goto L_08AE8338;
    return;
L_08AE8338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE83F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE8410u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8410u) goto L_08AE8410;
    return;
L_08AE8410:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE843Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE843Cu) goto L_08AE843C;
    return;
L_08AE843C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8450:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8458:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[3] - ctx.fpr[2];
    ctx.fpr[14] = ctx.fpr[1] - ctx.fpr[0];
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem); return;
L_08AE8480:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1556));
    (void)rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem); return;
L_08AE8488:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8072));
    goto L_08AE8494;
L_08AE8494:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE84B0;
      }
      goto L_08AE84A0;
    }
L_08AE84A0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE8494;
      }
      goto L_08AE84B0;
    }
L_08AE84B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE84B8:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8132));
    goto L_08AE84C4;
L_08AE84C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE84E0;
      }
      goto L_08AE84D0;
    }
L_08AE84D0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE84C4;
      }
      goto L_08AE84E0;
    }
L_08AE84E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE84E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 3u));
      if (branch_taken) {
          goto L_08AE8524;
      }
      goto L_08AE851C;
    }
L_08AE851C:
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE8524;
L_08AE8524:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
        goto L_08AE998C;
    }
    goto L_08AE8530;
L_08AE8530:
    ctx.set_gpr(31, 0x08AE8538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8538u) goto L_08AE8538;
    return;
L_08AE8538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8544u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8544u) goto L_08AE8544;
    return;
L_08AE8544:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8560;
      }
      goto L_08AE854C;
    }
L_08AE854C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE855C;
      }
      goto L_08AE8558;
    }
L_08AE8558:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AE855C;
L_08AE855C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AE8560;
L_08AE8560:
    ctx.set_gpr(31, 0x08AE8568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8568u) goto L_08AE8568;
    return;
L_08AE8568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8574u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8574u) goto L_08AE8574;
    return;
L_08AE8574:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE85A0;
    }
    goto L_08AE857C;
L_08AE857C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 40 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-40));
        goto L_08AE8598;
    }
    goto L_08AE858C;
L_08AE858C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE859C;
      }
      goto L_08AE8598;
    }
L_08AE8598:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AE859C;
L_08AE859C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE85A0;
L_08AE85A0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE85B4;
    }
    goto L_08AE85A8;
L_08AE85A8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(48));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE85B4;
L_08AE85B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE86CC;
      }
      goto L_08AE85BC;
    }
L_08AE85BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE86CC;
      }
      goto L_08AE85C8;
    }
L_08AE85C8:
    ctx.set_gpr(31, 0x08AE85D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE85D0u) goto L_08AE85D0;
    return;
L_08AE85D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE85DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE85DCu) goto L_08AE85DC;
    return;
L_08AE85DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8608;
      }
      goto L_08AE85E4;
    }
L_08AE85E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE85FC;
      }
      goto L_08AE85F0;
    }
L_08AE85F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE85FC;
      }
      goto L_08AE85F8;
    }
L_08AE85F8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AE85FC;
L_08AE85FC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
        goto L_08AE8604;
    }
    goto L_08AE8604;
L_08AE8604:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08AE8608;
L_08AE8608:
    ctx.set_gpr(31, 0x08AE8610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8610u) goto L_08AE8610;
    return;
L_08AE8610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE861Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE861Cu) goto L_08AE861C;
    return;
L_08AE861C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE86CC;
      }
      goto L_08AE8624;
    }
L_08AE8624:
    ctx.set_gpr(31, 0x08AE862Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE862Cu) goto L_08AE862C;
    return;
L_08AE862C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8638u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AE8638u) goto L_08AE8638;
    return;
L_08AE8638:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE8680;
    }
    goto L_08AE8644;
L_08AE8644:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE8658;
    }
    goto L_08AE8650;
L_08AE8650:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AE86A8;
      }
      goto L_08AE8658;
    }
L_08AE8658:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AE866C;
      }
      goto L_08AE8660;
    }
L_08AE8660:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AE8670;
    }
    goto L_08AE8668;
L_08AE8668:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE866C;
L_08AE866C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08AE8670;
L_08AE8670:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AE8678;
    }
    goto L_08AE8678;
L_08AE8678:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE86CC;
      }
      goto L_08AE8680;
    }
L_08AE8680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AE8694;
      }
      goto L_08AE8688;
    }
L_08AE8688:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08AE8698;
    }
    goto L_08AE8690;
L_08AE8690:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE8694;
L_08AE8694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    goto L_08AE8698;
L_08AE8698:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AE86A0;
    }
    goto L_08AE86A0;
L_08AE86A0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE86CC;
      }
      goto L_08AE86A8;
    }
L_08AE86A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AE86BC;
      }
      goto L_08AE86B0;
    }
L_08AE86B0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
        goto L_08AE86C0;
    }
    goto L_08AE86B8;
L_08AE86B8:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE86BC;
L_08AE86BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    goto L_08AE86C0;
L_08AE86C0:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08AE86C8;
    }
    goto L_08AE86C8;
L_08AE86C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE86CC;
L_08AE86CC:
    ctx.set_gpr(31, 0x08AE86D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE86D4u) goto L_08AE86D4;
    return;
L_08AE86D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE86E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE86E0u) goto L_08AE86E0;
    return;
L_08AE86E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE87D4;
      }
      goto L_08AE86E8;
    }
L_08AE86E8:
    ctx.set_gpr(31, 0x08AE86F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE86F0u) goto L_08AE86F0;
    return;
L_08AE86F0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE9600;
    }
    goto L_08AE86F8;
L_08AE86F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE8708u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8708u) goto L_08AE8708;
    return;
L_08AE8708:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8714u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8714u) goto L_08AE8714;
    return;
L_08AE8714:
    ctx.set_gpr(31, 0x08AE871Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE871Cu) goto L_08AE871C;
    return;
L_08AE871C:
    ctx.set_gpr(31, 0x08AE8724u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8724u) goto L_08AE8724;
    return;
L_08AE8724:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8730u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8730u) goto L_08AE8730;
    return;
L_08AE8730:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08AE8750u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE8750u) goto L_08AE8750;
    return;
L_08AE8750:
    ctx.set_gpr(31, 0x08AE8758u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8758u) goto L_08AE8758;
    return;
L_08AE8758:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8764u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8764u) goto L_08AE8764;
    return;
L_08AE8764:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AE877C;
      }
      goto L_08AE8770;
    }
L_08AE8770:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
        goto L_08AE8780;
    }
    goto L_08AE8778;
L_08AE8778:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE877C;
L_08AE877C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    goto L_08AE8780;
L_08AE8780:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AE87C4;
    }
    goto L_08AE8788;
L_08AE8788:
    ctx.set_gpr(31, 0x08AE8790u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE8790u) goto L_08AE8790;
    return;
L_08AE8790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08AE87A4;
      }
      goto L_08AE879C;
    }
L_08AE879C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08AE87A4;
L_08AE87A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32420));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE87C0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE87C0u) goto L_08AE87C0;
    return;
L_08AE87C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE87C4;
L_08AE87C4:
    ctx.set_gpr(31, 0x08AE87CCu);
    // nop
    goto L_08AEB5A0;
L_08AE87CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE87D4;
    }
L_08AE87D4:
    ctx.set_gpr(31, 0x08AE87DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE87DCu) goto L_08AE87DC;
    return;
L_08AE87DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE87E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE87E8u) goto L_08AE87E8;
    return;
L_08AE87E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE88E0;
      }
      goto L_08AE87F0;
    }
L_08AE87F0:
    ctx.set_gpr(31, 0x08AE87F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE87F8u) goto L_08AE87F8;
    return;
L_08AE87F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(199));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8804;
    }
L_08AE8804:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE8814u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8814u) goto L_08AE8814;
    return;
L_08AE8814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8820u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8820u) goto L_08AE8820;
    return;
L_08AE8820:
    ctx.set_gpr(31, 0x08AE8828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8828u) goto L_08AE8828;
    return;
L_08AE8828:
    ctx.set_gpr(31, 0x08AE8830u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8830u) goto L_08AE8830;
    return;
L_08AE8830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE883Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE883Cu) goto L_08AE883C;
    return;
L_08AE883C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08AE885Cu);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE885Cu) goto L_08AE885C;
    return;
L_08AE885C:
    ctx.set_gpr(31, 0x08AE8864u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8864u) goto L_08AE8864;
    return;
L_08AE8864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8870u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8870u) goto L_08AE8870;
    return;
L_08AE8870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AE8888;
      }
      goto L_08AE887C;
    }
L_08AE887C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
        goto L_08AE888C;
    }
    goto L_08AE8884;
L_08AE8884:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AE8888;
L_08AE8888:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    goto L_08AE888C;
L_08AE888C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AE88D0;
    }
    goto L_08AE8894;
L_08AE8894:
    ctx.set_gpr(31, 0x08AE889Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE889Cu) goto L_08AE889C;
    return;
L_08AE889C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08AE88B0;
      }
      goto L_08AE88A8;
    }
L_08AE88A8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08AE88B0;
L_08AE88B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32420));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE88CCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE88CCu) goto L_08AE88CC;
    return;
L_08AE88CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE88D0;
L_08AE88D0:
    ctx.set_gpr(31, 0x08AE88D8u);
    // nop
    goto L_08AEB5A0;
L_08AE88D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE88E0;
    }
L_08AE88E0:
    ctx.set_gpr(31, 0x08AE88E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE88E8u) goto L_08AE88E8;
    return;
L_08AE88E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE88F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE88F4u) goto L_08AE88F4;
    return;
L_08AE88F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE899C;
      }
      goto L_08AE88FC;
    }
L_08AE88FC:
    ctx.set_gpr(31, 0x08AE8904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8904u) goto L_08AE8904;
    return;
L_08AE8904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08AE8918u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8918u) goto L_08AE8918;
    return;
L_08AE8918:
    ctx.set_gpr(31, 0x08AE8920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8920u) goto L_08AE8920;
    return;
L_08AE8920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08AE8934u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8934u) goto L_08AE8934;
    return;
L_08AE8934:
    ctx.set_gpr(31, 0x08AE893Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE893Cu) goto L_08AE893C;
    return;
L_08AE893C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AE8950u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8950u) goto L_08AE8950;
    return;
L_08AE8950:
    ctx.set_gpr(31, 0x08AE8958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8958u) goto L_08AE8958;
    return;
L_08AE8958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE896Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE896Cu) goto L_08AE896C;
    return;
L_08AE896C:
    ctx.set_gpr(31, 0x08AE8974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8974u) goto L_08AE8974;
    return;
L_08AE8974:
    ctx.set_gpr(31, 0x08AE897Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE897Cu) goto L_08AE897C;
    return;
L_08AE897C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8988u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 468u, 0x08A7DEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8988u) goto L_08AE8988;
    return;
L_08AE8988:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1584), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE899C;
    }
L_08AE899C:
    ctx.set_gpr(31, 0x08AE89A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE89A4u) goto L_08AE89A4;
    return;
L_08AE89A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE89B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE89B0u) goto L_08AE89B0;
    return;
L_08AE89B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8D44;
      }
      goto L_08AE89B8;
    }
L_08AE89B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(5, ctx.gpr[2] & 7u);
      if (branch_taken) {
          goto L_08AE89D0;
      }
      goto L_08AE89C4;
    }
L_08AE89C4:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE89D4;
    }
    goto L_08AE89CC;
L_08AE89CC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    goto L_08AE89D0;
L_08AE89D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE89D4;
L_08AE89D4:
    ctx.set_gpr(31, 0x08AE89DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE89DCu) goto L_08AE89DC;
    return;
L_08AE89DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AE89F0;
      }
      goto L_08AE89E8;
    }
L_08AE89E8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE89F0;
L_08AE89F0:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE8B6C;
    }
    goto L_08AE89FC;
L_08AE89FC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3016));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE8A18:
    ctx.set_gpr(31, 0x08AE8A20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A20u) goto L_08AE8A20;
    return;
L_08AE8A20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B68;
      }
      goto L_08AE8A2C;
    }
L_08AE8A2C:
    ctx.set_gpr(31, 0x08AE8A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A34u) goto L_08AE8A34;
    return;
L_08AE8A34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8A48u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A48u) goto L_08AE8A48;
    return;
L_08AE8A48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8A50;
    }
L_08AE8A50:
    ctx.set_gpr(31, 0x08AE8A58u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A58u) goto L_08AE8A58;
    return;
L_08AE8A58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B68;
      }
      goto L_08AE8A64;
    }
L_08AE8A64:
    ctx.set_gpr(31, 0x08AE8A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A6Cu) goto L_08AE8A6C;
    return;
L_08AE8A6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8A80u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8A80u) goto L_08AE8A80;
    return;
L_08AE8A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8A88;
    }
L_08AE8A88:
    ctx.set_gpr(31, 0x08AE8A90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8A90u) goto L_08AE8A90;
    return;
L_08AE8A90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B68;
      }
      goto L_08AE8A9C;
    }
L_08AE8A9C:
    ctx.set_gpr(31, 0x08AE8AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8AA4u) goto L_08AE8AA4;
    return;
L_08AE8AA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8AB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8AB8u) goto L_08AE8AB8;
    return;
L_08AE8AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8AC0;
    }
L_08AE8AC0:
    ctx.set_gpr(31, 0x08AE8AC8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8AC8u) goto L_08AE8AC8;
    return;
L_08AE8AC8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B68;
      }
      goto L_08AE8AD4;
    }
L_08AE8AD4:
    ctx.set_gpr(31, 0x08AE8ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8ADCu) goto L_08AE8ADC;
    return;
L_08AE8ADC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8AF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8AF0u) goto L_08AE8AF0;
    return;
L_08AE8AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8AF8;
    }
L_08AE8AF8:
    ctx.set_gpr(31, 0x08AE8B00u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8B00u) goto L_08AE8B00;
    return;
L_08AE8B00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8B68;
      }
      goto L_08AE8B0C;
    }
L_08AE8B0C:
    ctx.set_gpr(31, 0x08AE8B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8B14u) goto L_08AE8B14;
    return;
L_08AE8B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8B28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8B28u) goto L_08AE8B28;
    return;
L_08AE8B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8B30;
    }
L_08AE8B30:
    ctx.set_gpr(31, 0x08AE8B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8B38u) goto L_08AE8B38;
    return;
L_08AE8B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE8B4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8B4Cu) goto L_08AE8B4C;
    return;
L_08AE8B4C:
    ctx.set_gpr(31, 0x08AE8B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8B54u) goto L_08AE8B54;
    return;
L_08AE8B54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE8B68u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8B68u) goto L_08AE8B68;
    return;
L_08AE8B68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE8B6C;
L_08AE8B6C:
    ctx.set_gpr(31, 0x08AE8B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8B74u) goto L_08AE8B74;
    return;
L_08AE8B74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8B80u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08AE8450;
L_08AE8B80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE8B90u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 74u, 0x08A99034u>(ctx, &aot_mem) && ctx.pc == 0x08AE8B90u) goto L_08AE8B90;
    return;
L_08AE8B90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8C00;
      }
      goto L_08AE8B98;
    }
L_08AE8B98:
    ctx.set_gpr(31, 0x08AE8BA0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AE8BA0u) goto L_08AE8BA0;
    return;
L_08AE8BA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
      if (branch_taken) {
          goto L_08AE8BB4;
      }
      goto L_08AE8BAC;
    }
L_08AE8BAC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE8BB4;
L_08AE8BB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8C00;
      }
      goto L_08AE8BC0;
    }
L_08AE8BC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08AE8BD4u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AE8BD4u) goto L_08AE8BD4;
    return;
L_08AE8BD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8C00;
      }
      goto L_08AE8BDC;
    }
L_08AE8BDC:
    ctx.set_gpr(31, 0x08AE8BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8BE4u) goto L_08AE8BE4;
    return;
L_08AE8BE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8BF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8BF8u) goto L_08AE8BF8;
    return;
L_08AE8BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8C00;
    }
L_08AE8C00:
    ctx.set_gpr(31, 0x08AE8C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8C08u) goto L_08AE8C08;
    return;
L_08AE8C08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8C1Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8C1Cu) goto L_08AE8C1C;
    return;
L_08AE8C1C:
    ctx.set_gpr(31, 0x08AE8C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C24u) goto L_08AE8C24;
    return;
L_08AE8C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE8C38u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8C38u) goto L_08AE8C38;
    return;
L_08AE8C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8C44;
    }
L_08AE8C44:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AE8C48;
L_08AE8C48:
    ctx.set_gpr(31, 0x08AE8C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C50u) goto L_08AE8C50;
    return;
L_08AE8C50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE8C64u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8C64u) goto L_08AE8C64;
    return;
L_08AE8C64:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8C48;
      }
      goto L_08AE8C74;
    }
L_08AE8C74:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AE8C78;
L_08AE8C78:
    ctx.set_gpr(31, 0x08AE8C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8C80u) goto L_08AE8C80;
    return;
L_08AE8C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE8C94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8C94u) goto L_08AE8C94;
    return;
L_08AE8C94:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8C78;
      }
      goto L_08AE8CA4;
    }
L_08AE8CA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AE8CB8;
      }
      goto L_08AE8CB0;
    }
L_08AE8CB0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE8CB8;
L_08AE8CB8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AE8CCCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 783u, 0x08AE6AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8CCCu) goto L_08AE8CCC;
    return;
L_08AE8CCC:
    ctx.set_gpr(31, 0x08AE8CD4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1584), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CD4u) goto L_08AE8CD4;
    return;
L_08AE8CD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(43));
    ctx.set_gpr(31, 0x08AE8CE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8CE8u) goto L_08AE8CE8;
    return;
L_08AE8CE8:
    ctx.set_gpr(31, 0x08AE8CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8CF0u) goto L_08AE8CF0;
    return;
L_08AE8CF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08AE8D04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D04u) goto L_08AE8D04;
    return;
L_08AE8D04:
    ctx.set_gpr(31, 0x08AE8D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D0Cu) goto L_08AE8D0C;
    return;
L_08AE8D0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08AE8D20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D20u) goto L_08AE8D20;
    return;
L_08AE8D20:
    ctx.set_gpr(31, 0x08AE8D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D28u) goto L_08AE8D28;
    return;
L_08AE8D28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AE8D3Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D3Cu) goto L_08AE8D3C;
    return;
L_08AE8D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08AE99B8;
      }
      goto L_08AE8D44;
    }
L_08AE8D44:
    ctx.set_gpr(31, 0x08AE8D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D4Cu) goto L_08AE8D4C;
    return;
L_08AE8D4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8D58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE8D58u) goto L_08AE8D58;
    return;
L_08AE8D58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9170;
      }
      goto L_08AE8D60;
    }
L_08AE8D60:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1584)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE8E60;
    }
    goto L_08AE8D6C;
L_08AE8D6C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1572)));
    ctx.set_gpr(31, 0x08AE8D78u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8D78u) goto L_08AE8D78;
    return;
L_08AE8D78:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8E5C;
      }
      goto L_08AE8D80;
    }
L_08AE8D80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1576)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(2, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08AE8D9C;
      }
      goto L_08AE8D90;
    }
L_08AE8D90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8D9C;
      }
      goto L_08AE8D98;
    }
L_08AE8D98:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AE8D9C;
L_08AE8D9C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8E5C;
      }
      goto L_08AE8DA4;
    }
L_08AE8DA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08AE8DB8;
      }
      goto L_08AE8DB0;
    }
L_08AE8DB0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE8DB8;
L_08AE8DB8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8E5C;
      }
      goto L_08AE8DC0;
    }
L_08AE8DC0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AE8DC4;
L_08AE8DC4:
    ctx.set_gpr(31, 0x08AE8DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8DCCu) goto L_08AE8DCC;
    return;
L_08AE8DCC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE8DECu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8DECu) goto L_08AE8DEC;
    return;
L_08AE8DEC:
    ctx.set_gpr(31, 0x08AE8DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8DF4u) goto L_08AE8DF4;
    return;
L_08AE8DF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE8E04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 786u, 0x0885EFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E04u) goto L_08AE8E04;
    return;
L_08AE8E04:
    ctx.set_gpr(31, 0x08AE8E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE8E0Cu) goto L_08AE8E0C;
    return;
L_08AE8E0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE8E20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E20u) goto L_08AE8E20;
    return;
L_08AE8E20:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8DC4;
      }
      goto L_08AE8E30;
    }
L_08AE8E30:
    ctx.set_gpr(31, 0x08AE8E38u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEB5A0;
L_08AE8E38:
    ctx.set_gpr(31, 0x08AE8E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E40u) goto L_08AE8E40;
    return;
L_08AE8E40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE8E54u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8E54u) goto L_08AE8E54;
    return;
L_08AE8E54:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1584), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE8E5C;
    }
L_08AE8E5C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE8E60;
L_08AE8E60:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08AE8E74;
      }
      goto L_08AE8E6C;
    }
L_08AE8E6C:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE8E74;
L_08AE8E74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[17] & 7u);
        goto L_08AE8FD4;
    }
    goto L_08AE8E80;
L_08AE8E80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8F8C;
      }
      goto L_08AE8E8C;
    }
L_08AE8E8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8F44;
      }
      goto L_08AE8E98;
    }
L_08AE8E98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE8EFC;
      }
      goto L_08AE8EA4;
    }
L_08AE8EA4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8EB4;
      }
      goto L_08AE8EAC;
    }
L_08AE8EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9060;
      }
      goto L_08AE8EB4;
    }
L_08AE8EB4:
    ctx.set_gpr(31, 0x08AE8EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8EBCu) goto L_08AE8EBC;
    return;
L_08AE8EBC:
    ctx.set_gpr(31, 0x08AE8EC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8EC4u) goto L_08AE8EC4;
    return;
L_08AE8EC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8ED0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8ED0u) goto L_08AE8ED0;
    return;
L_08AE8ED0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(6, ctx.gpr[17] & 7u);
      if (branch_taken) {
          goto L_08AE8EE4;
      }
      goto L_08AE8ED8;
    }
L_08AE8ED8:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AE8EE8;
    }
    goto L_08AE8EE0;
L_08AE8EE0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE8EE4;
L_08AE8EE4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE8EE8;
L_08AE8EE8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8EF4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE99D8;
L_08AE8EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE9060;
      }
      goto L_08AE8EFC;
    }
L_08AE8EFC:
    ctx.set_gpr(31, 0x08AE8F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F04u) goto L_08AE8F04;
    return;
L_08AE8F04:
    ctx.set_gpr(31, 0x08AE8F0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F0Cu) goto L_08AE8F0C;
    return;
L_08AE8F0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8F18u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8F18u) goto L_08AE8F18;
    return;
L_08AE8F18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(6, ctx.gpr[17] & 7u);
      if (branch_taken) {
          goto L_08AE8F2C;
      }
      goto L_08AE8F20;
    }
L_08AE8F20:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AE8F30;
    }
    goto L_08AE8F28;
L_08AE8F28:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE8F2C;
L_08AE8F2C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE8F30;
L_08AE8F30:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8F3Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    goto L_08AE99D8;
L_08AE8F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE9060;
      }
      goto L_08AE8F44;
    }
L_08AE8F44:
    ctx.set_gpr(31, 0x08AE8F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F4Cu) goto L_08AE8F4C;
    return;
L_08AE8F4C:
    ctx.set_gpr(31, 0x08AE8F54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F54u) goto L_08AE8F54;
    return;
L_08AE8F54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8F60u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8F60u) goto L_08AE8F60;
    return;
L_08AE8F60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(6, ctx.gpr[17] & 7u);
      if (branch_taken) {
          goto L_08AE8F74;
      }
      goto L_08AE8F68;
    }
L_08AE8F68:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AE8F78;
    }
    goto L_08AE8F70;
L_08AE8F70:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE8F74;
L_08AE8F74:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE8F78;
L_08AE8F78:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8F84u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    goto L_08AE99D8;
L_08AE8F84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE9060;
      }
      goto L_08AE8F8C;
    }
L_08AE8F8C:
    ctx.set_gpr(31, 0x08AE8F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F94u) goto L_08AE8F94;
    return;
L_08AE8F94:
    ctx.set_gpr(31, 0x08AE8F9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE8F9Cu) goto L_08AE8F9C;
    return;
L_08AE8F9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE8FA8u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE8FA8u) goto L_08AE8FA8;
    return;
L_08AE8FA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(6, ctx.gpr[17] & 7u);
      if (branch_taken) {
          goto L_08AE8FBC;
      }
      goto L_08AE8FB0;
    }
L_08AE8FB0:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AE8FC0;
    }
    goto L_08AE8FB8;
L_08AE8FB8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE8FBC;
L_08AE8FBC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE8FC0;
L_08AE8FC0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE8FCCu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AE99D8;
L_08AE8FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE9060;
      }
      goto L_08AE8FD4;
    }
L_08AE8FD4:
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE8FEC;
    }
    goto L_08AE8FDC;
L_08AE8FDC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE8FE8;
      }
      goto L_08AE8FE4;
    }
L_08AE8FE4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    goto L_08AE8FE8;
L_08AE8FE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE8FEC;
L_08AE8FEC:
    ctx.set_gpr(31, 0x08AE8FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE8FF4u) goto L_08AE8FF4;
    return;
L_08AE8FF4:
    ctx.set_gpr(31, 0x08AE8FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE8FFCu) goto L_08AE8FFC;
    return;
L_08AE8FFC:
    ctx.set_gpr(31, 0x08AE9004u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9004u) goto L_08AE9004;
    return;
L_08AE9004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE9010u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9010u) goto L_08AE9010;
    return;
L_08AE9010:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE9028;
      }
      goto L_08AE901C;
    }
L_08AE901C:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AE902C;
    }
    goto L_08AE9024;
L_08AE9024:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE9028;
L_08AE9028:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AE902C;
L_08AE902C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9038u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    goto L_08AE99D8;
L_08AE9038:
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9060;
      }
      goto L_08AE9044;
    }
L_08AE9044:
    ctx.set_gpr(31, 0x08AE904Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AE904Cu) goto L_08AE904C;
    return;
L_08AE904C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1592));
    ctx.set_gpr(31, 0x08AE9060u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AE9060u) goto L_08AE9060;
    return;
L_08AE9060:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08AE90D8;
    }
    goto L_08AE9068;
L_08AE9068:
    ctx.set_gpr(31, 0x08AE9070u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9070u) goto L_08AE9070;
    return;
L_08AE9070:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1572), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE908C;
      }
      goto L_08AE9080;
    }
L_08AE9080:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1576), ctx.gpr[2]);
        goto L_08AE9090;
    }
    goto L_08AE9088;
L_08AE9088:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AE908C;
L_08AE908C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1576), ctx.gpr[2]);
    goto L_08AE9090;
L_08AE9090:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AE90A4;
      }
      goto L_08AE909C;
    }
L_08AE909C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE90A4;
L_08AE90A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1580), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1584), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE90BCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1586), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE90BCu) goto L_08AE90BC;
    return;
L_08AE90BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE90D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE90D0u) goto L_08AE90D0;
    return;
L_08AE90D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE90D8;
    }
L_08AE90D8:
    ctx.set_gpr(31, 0x08AE90E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE90E0u) goto L_08AE90E0;
    return;
L_08AE90E0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE9100u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9100u) goto L_08AE9100;
    return;
L_08AE9100:
    ctx.set_gpr(31, 0x08AE9108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9108u) goto L_08AE9108;
    return;
L_08AE9108:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE9118u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 786u, 0x0885EFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9118u) goto L_08AE9118;
    return;
L_08AE9118:
    ctx.set_gpr(31, 0x08AE9120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9120u) goto L_08AE9120;
    return;
L_08AE9120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE9134u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE9134u) goto L_08AE9134;
    return;
L_08AE9134:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE90D8;
      }
      goto L_08AE9144;
    }
L_08AE9144:
    ctx.set_gpr(31, 0x08AE914Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEB5A0;
L_08AE914C:
    ctx.set_gpr(31, 0x08AE9154u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1584), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9154u) goto L_08AE9154;
    return;
L_08AE9154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9168u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9168u) goto L_08AE9168;
    return;
L_08AE9168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9170;
    }
L_08AE9170:
    ctx.set_gpr(31, 0x08AE9178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9178u) goto L_08AE9178;
    return;
L_08AE9178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9184u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE9184u) goto L_08AE9184;
    return;
L_08AE9184:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9584;
      }
      goto L_08AE918C;
    }
L_08AE918C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AE91A8;
      }
      goto L_08AE91A0;
    }
L_08AE91A0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE91A8;
L_08AE91A8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE91B0;
    }
L_08AE91B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1584)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE91BC;
    }
L_08AE91BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE93BC;
    }
    goto L_08AE91C8;
L_08AE91C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE934C;
    }
    goto L_08AE91D4;
L_08AE91D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE92DC;
    }
    goto L_08AE91E0;
L_08AE91E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE926C;
    }
    goto L_08AE91EC;
L_08AE91EC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE91FC;
    }
    goto L_08AE91F4;
L_08AE91F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE91FC;
    }
L_08AE91FC:
    ctx.set_gpr(31, 0x08AE9204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9204u) goto L_08AE9204;
    return;
L_08AE9204:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE9234;
    }
    goto L_08AE9210;
L_08AE9210:
    ctx.set_gpr(31, 0x08AE9218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9218u) goto L_08AE9218;
    return;
L_08AE9218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE922Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE922Cu) goto L_08AE922C;
    return;
L_08AE922C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9234;
    }
L_08AE9234:
    ctx.set_gpr(31, 0x08AE923Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE923Cu) goto L_08AE923C;
    return;
L_08AE923C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE9254;
      }
      goto L_08AE9248;
    }
L_08AE9248:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE9258;
    }
    goto L_08AE9250;
L_08AE9250:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE9254;
L_08AE9254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE9258;
L_08AE9258:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9264u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 417u, 0x08A95EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9264u) goto L_08AE9264;
    return;
L_08AE9264:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE926C;
    }
L_08AE926C:
    ctx.set_gpr(31, 0x08AE9274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9274u) goto L_08AE9274;
    return;
L_08AE9274:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE92A4;
    }
    goto L_08AE9280;
L_08AE9280:
    ctx.set_gpr(31, 0x08AE9288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9288u) goto L_08AE9288;
    return;
L_08AE9288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE929Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE929Cu) goto L_08AE929C;
    return;
L_08AE929C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE92A4;
    }
L_08AE92A4:
    ctx.set_gpr(31, 0x08AE92ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE92ACu) goto L_08AE92AC;
    return;
L_08AE92AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE92C4;
      }
      goto L_08AE92B8;
    }
L_08AE92B8:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE92C8;
    }
    goto L_08AE92C0;
L_08AE92C0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE92C4;
L_08AE92C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE92C8;
L_08AE92C8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE92D4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 417u, 0x08A95EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE92D4u) goto L_08AE92D4;
    return;
L_08AE92D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE92DC;
    }
L_08AE92DC:
    ctx.set_gpr(31, 0x08AE92E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE92E4u) goto L_08AE92E4;
    return;
L_08AE92E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE9314;
    }
    goto L_08AE92F0;
L_08AE92F0:
    ctx.set_gpr(31, 0x08AE92F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE92F8u) goto L_08AE92F8;
    return;
L_08AE92F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE930Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE930Cu) goto L_08AE930C;
    return;
L_08AE930C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9314;
    }
L_08AE9314:
    ctx.set_gpr(31, 0x08AE931Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE931Cu) goto L_08AE931C;
    return;
L_08AE931C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE9334;
      }
      goto L_08AE9328;
    }
L_08AE9328:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE9338;
    }
    goto L_08AE9330;
L_08AE9330:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE9334;
L_08AE9334:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE9338;
L_08AE9338:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9344u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 417u, 0x08A95EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9344u) goto L_08AE9344;
    return;
L_08AE9344:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE934C;
    }
L_08AE934C:
    ctx.set_gpr(31, 0x08AE9354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9354u) goto L_08AE9354;
    return;
L_08AE9354:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE9384;
    }
    goto L_08AE9360;
L_08AE9360:
    ctx.set_gpr(31, 0x08AE9368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9368u) goto L_08AE9368;
    return;
L_08AE9368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE937Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE937Cu) goto L_08AE937C;
    return;
L_08AE937C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9384;
    }
L_08AE9384:
    ctx.set_gpr(31, 0x08AE938Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE938Cu) goto L_08AE938C;
    return;
L_08AE938C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE93A4;
      }
      goto L_08AE9398;
    }
L_08AE9398:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE93A8;
    }
    goto L_08AE93A0;
L_08AE93A0:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE93A4;
L_08AE93A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE93A8;
L_08AE93A8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE93B4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 417u, 0x08A95EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE93B4u) goto L_08AE93B4;
    return;
L_08AE93B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AE952C;
      }
      goto L_08AE93BC;
    }
L_08AE93BC:
    ctx.set_gpr(31, 0x08AE93C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08AE93C4u) goto L_08AE93C4;
    return;
L_08AE93C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE93F4;
    }
    goto L_08AE93D0;
L_08AE93D0:
    ctx.set_gpr(31, 0x08AE93D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE93D8u) goto L_08AE93D8;
    return;
L_08AE93D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE93ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE93ECu) goto L_08AE93EC;
    return;
L_08AE93EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE93F4;
    }
L_08AE93F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(5, ctx.gpr[2] & 7u);
      if (branch_taken) {
          goto L_08AE9408;
      }
      goto L_08AE93FC;
    }
L_08AE93FC:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE940C;
    }
    goto L_08AE9404;
L_08AE9404:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    goto L_08AE9408;
L_08AE9408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE940C;
L_08AE940C:
    ctx.set_gpr(31, 0x08AE9414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9414u) goto L_08AE9414;
    return;
L_08AE9414:
    ctx.set_gpr(31, 0x08AE941Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE941Cu) goto L_08AE941C;
    return;
L_08AE941C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE9428u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_08AE8450;
L_08AE9428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AE9438u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 74u, 0x08A99034u>(ctx, &aot_mem) && ctx.pc == 0x08AE9438u) goto L_08AE9438;
    return;
L_08AE9438:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE94AC;
    }
    goto L_08AE9440;
L_08AE9440:
    ctx.set_gpr(31, 0x08AE9448u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AE9448u) goto L_08AE9448;
    return;
L_08AE9448:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
      if (branch_taken) {
          goto L_08AE945C;
      }
      goto L_08AE9454;
    }
L_08AE9454:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE945C;
L_08AE945C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE94A8;
      }
      goto L_08AE9468;
    }
L_08AE9468:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE947Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AE947Cu) goto L_08AE947C;
    return;
L_08AE947C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE94A8;
      }
      goto L_08AE9484;
    }
L_08AE9484:
    ctx.set_gpr(31, 0x08AE948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE948Cu) goto L_08AE948C;
    return;
L_08AE948C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE94A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE94A0u) goto L_08AE94A0;
    return;
L_08AE94A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE94A8;
    }
L_08AE94A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE94AC;
L_08AE94AC:
    ctx.set_gpr(31, 0x08AE94B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE94B4u) goto L_08AE94B4;
    return;
L_08AE94B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE94CC;
      }
      goto L_08AE94C0;
    }
L_08AE94C0:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
        goto L_08AE94D0;
    }
    goto L_08AE94C8;
L_08AE94C8:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE94CC;
L_08AE94CC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08AE94D0;
L_08AE94D0:
    ctx.set_gpr(31, 0x08AE94D8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 1100u, 0x08AEFEA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE94D8u) goto L_08AE94D8;
    return;
L_08AE94D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1592)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AE9524;
    }
    goto L_08AE94EC;
L_08AE94EC:
    ctx.set_gpr(31, 0x08AE94F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE94F4u) goto L_08AE94F4;
    return;
L_08AE94F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(6, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE950C;
      }
      goto L_08AE9500;
    }
L_08AE9500:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE9510;
    }
    goto L_08AE9508;
L_08AE9508:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    goto L_08AE950C;
L_08AE950C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE9510;
L_08AE9510:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE951Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 417u, 0x08A95EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE951Cu) goto L_08AE951C;
    return;
L_08AE951C:
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE9524;
L_08AE9524:
    ctx.set_gpr(31, 0x08AE952Cu);
    // nop
    goto L_08AEB5A0;
L_08AE952C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9560;
      }
      goto L_08AE9534;
    }
L_08AE9534:
    ctx.set_gpr(31, 0x08AE953Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEB5A0;
L_08AE953C:
    ctx.set_gpr(31, 0x08AE9544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9544u) goto L_08AE9544;
    return;
L_08AE9544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9558u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9558u) goto L_08AE9558;
    return;
L_08AE9558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9560;
    }
L_08AE9560:
    ctx.set_gpr(31, 0x08AE9568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9568u) goto L_08AE9568;
    return;
L_08AE9568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE957Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE957Cu) goto L_08AE957C;
    return;
L_08AE957C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE9584;
    }
L_08AE9584:
    ctx.set_gpr(31, 0x08AE958Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE958Cu) goto L_08AE958C;
    return;
L_08AE958C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9598u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE9598u) goto L_08AE9598;
    return;
L_08AE9598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95FC;
      }
      goto L_08AE95A0;
    }
L_08AE95A0:
    ctx.set_gpr(31, 0x08AE95A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE95A8u) goto L_08AE95A8;
    return;
L_08AE95A8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE95D4;
    }
    goto L_08AE95B0;
L_08AE95B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AE95C8;
      }
      goto L_08AE95BC;
    }
L_08AE95BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95C8;
      }
      goto L_08AE95C4;
    }
L_08AE95C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AE95C8;
L_08AE95C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AE95F4;
    }
    goto L_08AE95D0;
L_08AE95D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE95D4;
L_08AE95D4:
    ctx.set_gpr(31, 0x08AE95DCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE9E48;
L_08AE95DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE95F0;
      }
      goto L_08AE95E4;
    }
L_08AE95E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1760), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    goto L_08AE95F0;
L_08AE95F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE95F4;
L_08AE95F4:
    ctx.set_gpr(31, 0x08AE95FCu);
    // nop
    goto L_08AEB5A0;
L_08AE95FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE9600;
L_08AE9600:
    if (ctx.gpr[19] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE9614;
    }
    goto L_08AE9608;
L_08AE9608:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE9614;
L_08AE9614:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9644;
      }
      goto L_08AE9620;
    }
L_08AE9620:
    ctx.set_gpr(31, 0x08AE9628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE9628u) goto L_08AE9628;
    return;
L_08AE9628:
    ctx.set_gpr(31, 0x08AE9630u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9630u) goto L_08AE9630;
    return;
L_08AE9630:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE963Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 468u, 0x08A7DEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE963Cu) goto L_08AE963C;
    return;
L_08AE963C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08AE9664;
      }
      goto L_08AE9644;
    }
L_08AE9644:
    ctx.set_gpr(31, 0x08AE964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE964Cu) goto L_08AE964C;
    return;
L_08AE964C:
    ctx.set_gpr(31, 0x08AE9654u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9654u) goto L_08AE9654;
    return;
L_08AE9654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9660u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 468u, 0x08A7DEDCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9660u) goto L_08AE9660;
    return;
L_08AE9660:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08AE9664;
L_08AE9664:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1586), static_cast<std::uint8_t>(0u));
        goto L_08AE9988;
    }
    goto L_08AE966C;
L_08AE966C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
      if (branch_taken) {
          goto L_08AE9680;
      }
      goto L_08AE9678;
    }
L_08AE9678:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE9680;
L_08AE9680:
    if (ctx.gpr[18] == ctx.gpr[17]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE96B0;
    }
    goto L_08AE9688;
L_08AE9688:
    ctx.set_gpr(31, 0x08AE9690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE9690u) goto L_08AE9690;
    return;
L_08AE9690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32420));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE96ACu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE96ACu) goto L_08AE96AC;
    return;
L_08AE96AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE96B0;
L_08AE96B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9794;
      }
      goto L_08AE96BC;
    }
L_08AE96BC:
    ctx.set_gpr(31, 0x08AE96C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE96C4u) goto L_08AE96C4;
    return;
L_08AE96C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE96DCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(61));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE96DCu) goto L_08AE96DC;
    return;
L_08AE96DC:
    ctx.set_gpr(31, 0x08AE96E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE96E4u) goto L_08AE96E4;
    return;
L_08AE96E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE96F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE96F8u) goto L_08AE96F8;
    return;
L_08AE96F8:
    ctx.set_gpr(31, 0x08AE9700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9700u) goto L_08AE9700;
    return;
L_08AE9700:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE9720u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9720u) goto L_08AE9720;
    return;
L_08AE9720:
    ctx.set_gpr(31, 0x08AE9728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9728u) goto L_08AE9728;
    return;
L_08AE9728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE9750u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9750u) goto L_08AE9750;
    return;
L_08AE9750:
    ctx.set_gpr(31, 0x08AE9758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9758u) goto L_08AE9758;
    return;
L_08AE9758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE976Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE976Cu) goto L_08AE976C;
    return;
L_08AE976C:
    ctx.set_gpr(31, 0x08AE9774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9774u) goto L_08AE9774;
    return;
L_08AE9774:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE978Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE978Cu) goto L_08AE978C;
    return;
L_08AE978C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE97EC;
      }
      goto L_08AE9794;
    }
L_08AE9794:
    ctx.set_gpr(31, 0x08AE979Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE979Cu) goto L_08AE979C;
    return;
L_08AE979C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE97B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE97B0u) goto L_08AE97B0;
    return;
L_08AE97B0:
    ctx.set_gpr(31, 0x08AE97B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE97B8u) goto L_08AE97B8;
    return;
L_08AE97B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AE97D0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE97D0u) goto L_08AE97D0;
    return;
L_08AE97D0:
    ctx.set_gpr(31, 0x08AE97D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE97D8u) goto L_08AE97D8;
    return;
L_08AE97D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE97ECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE97ECu) goto L_08AE97EC;
    return;
L_08AE97EC:
    ctx.set_gpr(31, 0x08AE97F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE97F4u) goto L_08AE97F4;
    return;
L_08AE97F4:
    ctx.set_gpr(31, 0x08AE97FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE97FCu) goto L_08AE97FC;
    return;
L_08AE97FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AE9808u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9808u) goto L_08AE9808;
    return;
L_08AE9808:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE981Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE981Cu) goto L_08AE981C;
    return;
L_08AE981C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AE9820;
L_08AE9820:
    ctx.set_gpr(31, 0x08AE9828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9828u) goto L_08AE9828;
    return;
L_08AE9828:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE9848u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9848u) goto L_08AE9848;
    return;
L_08AE9848:
    ctx.set_gpr(31, 0x08AE9850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9850u) goto L_08AE9850;
    return;
L_08AE9850:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE9860u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 786u, 0x0885EFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9860u) goto L_08AE9860;
    return;
L_08AE9860:
    ctx.set_gpr(31, 0x08AE9868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9868u) goto L_08AE9868;
    return;
L_08AE9868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE987Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE987Cu) goto L_08AE987C;
    return;
L_08AE987C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9820;
      }
      goto L_08AE988C;
    }
L_08AE988C:
    ctx.set_gpr(31, 0x08AE9894u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEB5A0;
L_08AE9894:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1586)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AE98C0;
    }
    goto L_08AE98A0;
L_08AE98A0:
    ctx.set_gpr(31, 0x08AE98A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE98A8u) goto L_08AE98A8;
    return;
L_08AE98A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE98BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE98BCu) goto L_08AE98BC;
    return;
L_08AE98BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE98C0;
L_08AE98C0:
    ctx.set_gpr(31, 0x08AE98C8u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1572)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE98C8u) goto L_08AE98C8;
    return;
L_08AE98C8:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
        goto L_08AE9984;
    }
    goto L_08AE98D0;
L_08AE98D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1584)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9980;
      }
      goto L_08AE98DC;
    }
L_08AE98DC:
    ctx.set_gpr(31, 0x08AE98E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE98E4u) goto L_08AE98E4;
    return;
L_08AE98E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1576)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE9914u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9914u) goto L_08AE9914;
    return;
L_08AE9914:
    ctx.set_gpr(31, 0x08AE991Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE991Cu) goto L_08AE991C;
    return;
L_08AE991C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1576)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE9954u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9954u) goto L_08AE9954;
    return;
L_08AE9954:
    ctx.set_gpr(31, 0x08AE995Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE995Cu) goto L_08AE995C;
    return;
L_08AE995C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1576)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1580)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE9980u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 796u, 0x088AB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE9980u) goto L_08AE9980;
    return;
L_08AE9980:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    goto L_08AE9984;
L_08AE9984:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1586), static_cast<std::uint8_t>(0u));
    goto L_08AE9988;
L_08AE9988:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    goto L_08AE998C;
L_08AE998C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AE99AC;
    }
    goto L_08AE9994;
L_08AE9994:
    ctx.set_gpr(31, 0x08AE999Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE9A3C;
L_08AE999C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE99A8;
      }
      goto L_08AE99A4;
    }
L_08AE99A4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1760), static_cast<std::uint8_t>(0u));
    goto L_08AE99A8;
L_08AE99A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE99AC;
L_08AE99AC:
    ctx.set_gpr(31, 0x08AE99B4u);
    // nop
    goto L_08AE9FE4;
L_08AE99B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AE99B8;
L_08AE99B8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE99D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08AE9A0Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 424u, 0x08A95F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9A0Cu) goto L_08AE9A0C;
    return;
L_08AE9A0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE9A20u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 400u, 0x08A95DBCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9A20u) goto L_08AE9A20;
    return;
L_08AE9A20:
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
L_08AE9A3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1756)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE9CF8;
      }
      goto L_08AE9A58;
    }
L_08AE9A58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE9C60;
      }
      goto L_08AE9A64;
    }
L_08AE9A64:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9A74;
      }
      goto L_08AE9A6C;
    }
L_08AE9A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9D94;
      }
      goto L_08AE9A74;
    }
L_08AE9A74:
    ctx.set_gpr(31, 0x08AE9A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A7Cu) goto L_08AE9A7C;
    return;
L_08AE9A7C:
    ctx.set_gpr(31, 0x08AE9A84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A84u) goto L_08AE9A84;
    return;
L_08AE9A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x08AE9A98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE9A98u) goto L_08AE9A98;
    return;
L_08AE9A98:
    ctx.set_gpr(31, 0x08AE9AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9AA0u) goto L_08AE9AA0;
    return;
L_08AE9AA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(300));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9AD0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE9AD0u) goto L_08AE9AD0;
    return;
L_08AE9AD0:
    ctx.set_gpr(31, 0x08AE9AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9AD8u) goto L_08AE9AD8;
    return;
L_08AE9AD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9AE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9AE8u) goto L_08AE9AE8;
    return;
L_08AE9AE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9AF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9AF4u) goto L_08AE9AF4;
    return;
L_08AE9AF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9B7C;
      }
      goto L_08AE9B04;
    }
L_08AE9B04:
    ctx.set_gpr(31, 0x08AE9B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B0Cu) goto L_08AE9B0C;
    return;
L_08AE9B0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9B1Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9B1Cu) goto L_08AE9B1C;
    return;
L_08AE9B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8280));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9B3Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B3Cu) goto L_08AE9B3C;
    return;
L_08AE9B3C:
    ctx.set_gpr(31, 0x08AE9B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B44u) goto L_08AE9B44;
    return;
L_08AE9B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9B54u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9B54u) goto L_08AE9B54;
    return;
L_08AE9B54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8308));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9B74u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B74u) goto L_08AE9B74;
    return;
L_08AE9B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9C24;
      }
      goto L_08AE9B7C;
    }
L_08AE9B7C:
    ctx.set_gpr(31, 0x08AE9B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9B84u) goto L_08AE9B84;
    return;
L_08AE9B84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9B94u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9B94u) goto L_08AE9B94;
    return;
L_08AE9B94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8328));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9BB4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE9BB4u) goto L_08AE9BB4;
    return;
L_08AE9BB4:
    ctx.set_gpr(31, 0x08AE9BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9BBCu) goto L_08AE9BBC;
    return;
L_08AE9BBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9BCCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9BCCu) goto L_08AE9BCC;
    return;
L_08AE9BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8360));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9BECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE9BECu) goto L_08AE9BEC;
    return;
L_08AE9BEC:
    ctx.set_gpr(31, 0x08AE9BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9BF4u) goto L_08AE9BF4;
    return;
L_08AE9BF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9C04u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9C04u) goto L_08AE9C04;
    return;
L_08AE9C04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8308));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9C24u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C24u) goto L_08AE9C24;
    return;
L_08AE9C24:
    ctx.set_gpr(31, 0x08AE9C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C2Cu) goto L_08AE9C2C;
    return;
L_08AE9C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9C3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C3Cu) goto L_08AE9C3C;
    return;
L_08AE9C3C:
    ctx.set_gpr(31, 0x08AE9C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C44u) goto L_08AE9C44;
    return;
L_08AE9C44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9C50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C50u) goto L_08AE9C50;
    return;
L_08AE9C50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE9E34;
      }
      goto L_08AE9C60;
    }
L_08AE9C60:
    ctx.set_gpr(31, 0x08AE9C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C68u) goto L_08AE9C68;
    return;
L_08AE9C68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9C74u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C74u) goto L_08AE9C74;
    return;
L_08AE9C74:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AE9E38;
    }
    goto L_08AE9C7C;
L_08AE9C7C:
    ctx.set_gpr(31, 0x08AE9C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9C84u) goto L_08AE9C84;
    return;
L_08AE9C84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17301u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17144u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16153u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9CD0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08AE9CD0u) goto L_08AE9CD0;
    return;
L_08AE9CD0:
    ctx.set_gpr(31, 0x08AE9CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9CD8u) goto L_08AE9CD8;
    return;
L_08AE9CD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9CE8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE9CE8u) goto L_08AE9CE8;
    return;
L_08AE9CE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE9E34;
      }
      goto L_08AE9CF8;
    }
L_08AE9CF8:
    ctx.set_gpr(31, 0x08AE9D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D00u) goto L_08AE9D00;
    return;
L_08AE9D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9D0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D0Cu) goto L_08AE9D0C;
    return;
L_08AE9D0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
        goto L_08AE9D68;
    }
    goto L_08AE9D18;
L_08AE9D18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
        goto L_08AE9D2C;
    }
    goto L_08AE9D24;
L_08AE9D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9E34;
      }
      goto L_08AE9D2C;
    }
L_08AE9D2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE9D3Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEBE48;
L_08AE9D3C:
    ctx.set_gpr(31, 0x08AE9D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D44u) goto L_08AE9D44;
    return;
L_08AE9D44:
    ctx.set_gpr(31, 0x08AE9D4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D4Cu) goto L_08AE9D4C;
    return;
L_08AE9D4C:
    ctx.set_gpr(31, 0x08AE9D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D54u) goto L_08AE9D54;
    return;
L_08AE9D54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9D60u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D60u) goto L_08AE9D60;
    return;
L_08AE9D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9E34;
      }
      goto L_08AE9D68;
    }
L_08AE9D68:
    ctx.set_gpr(31, 0x08AE9D70u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D70u) goto L_08AE9D70;
    return;
L_08AE9D70:
    ctx.set_gpr(31, 0x08AE9D78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D78u) goto L_08AE9D78;
    return;
L_08AE9D78:
    ctx.set_gpr(31, 0x08AE9D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D80u) goto L_08AE9D80;
    return;
L_08AE9D80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9D8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D8Cu) goto L_08AE9D8C;
    return;
L_08AE9D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9E34;
      }
      goto L_08AE9D94;
    }
L_08AE9D94:
    ctx.set_gpr(31, 0x08AE9D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9D9Cu) goto L_08AE9D9C;
    return;
L_08AE9D9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9DA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9DA8u) goto L_08AE9DA8;
    return;
L_08AE9DA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9E34;
      }
      goto L_08AE9DB0;
    }
L_08AE9DB0:
    ctx.set_gpr(31, 0x08AE9DB8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEB5A0;
L_08AE9DB8:
    ctx.set_gpr(31, 0x08AE9DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9DC0u) goto L_08AE9DC0;
    return;
L_08AE9DC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9DD0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9DD0u) goto L_08AE9DD0;
    return;
L_08AE9DD0:
    ctx.set_gpr(31, 0x08AE9DD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE9DD8u) goto L_08AE9DD8;
    return;
L_08AE9DD8:
    ctx.set_gpr(31, 0x08AE9DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE9DE0u) goto L_08AE9DE0;
    return;
L_08AE9DE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE9DECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9DECu) goto L_08AE9DEC;
    return;
L_08AE9DEC:
    ctx.set_gpr(31, 0x08AE9DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE9DF4u) goto L_08AE9DF4;
    return;
L_08AE9DF4:
    ctx.set_gpr(31, 0x08AE9DFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE9DFCu) goto L_08AE9DFC;
    return;
L_08AE9DFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AE9E28u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE9E28u) goto L_08AE9E28;
    return;
L_08AE9E28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1756), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9E38;
      }
      goto L_08AE9E34;
    }
L_08AE9E34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE9E38;
L_08AE9E38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE9E74;
      }
      goto L_08AE9E68;
    }
L_08AE9E68:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
        goto L_08AE9E7C;
    }
    goto L_08AE9E74;
L_08AE9E74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE9FCC;
      }
      goto L_08AE9E7C;
    }
L_08AE9E7C:
    ctx.set_gpr(31, 0x08AE9E84u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AE9E84u) goto L_08AE9E84;
    return;
L_08AE9E84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(5, ctx.gpr[18] & 7u);
      if (branch_taken) {
          goto L_08AE9E98;
      }
      goto L_08AE9E8C;
    }
L_08AE9E8C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AE9E9C;
    }
    goto L_08AE9E94;
L_08AE9E94:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    goto L_08AE9E98;
L_08AE9E98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AE9E9C;
L_08AE9E9C:
    ctx.set_gpr(31, 0x08AE9EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE9EA4u) goto L_08AE9EA4;
    return;
L_08AE9EA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 3u));
      if (branch_taken) {
          goto L_08AE9EB4;
      }
      goto L_08AE9EAC;
    }
L_08AE9EAC:
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AE9EB4;
L_08AE9EB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AE9F64;
    }
    goto L_08AE9EC0;
L_08AE9EC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AE9F4C;
    }
    goto L_08AE9ECC;
L_08AE9ECC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AE9F28;
    }
    goto L_08AE9ED8;
L_08AE9ED8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AE9F0C;
    }
    goto L_08AE9EE4;
L_08AE9EE4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AE9EF4;
    }
    goto L_08AE9EEC;
L_08AE9EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9EF4;
    }
L_08AE9EF4:
    ctx.set_gpr(31, 0x08AE9EFCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(95));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 684u, 0x08A974C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE9EFCu) goto L_08AE9EFC;
    return;
L_08AE9EFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F04;
    }
L_08AE9F04:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F0C;
    }
L_08AE9F0C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AE9F18u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 132u, 0x08A994BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE9F18u) goto L_08AE9F18;
    return;
L_08AE9F18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F20;
    }
L_08AE9F20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F28;
    }
L_08AE9F28:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08AE9F3Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 759u, 0x08A97B58u>(ctx, &aot_mem) && ctx.pc == 0x08AE9F3Cu) goto L_08AE9F3C;
    return;
L_08AE9F3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F44;
    }
L_08AE9F44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F4C;
    }
L_08AE9F4C:
    ctx.set_gpr(31, 0x08AE9F54u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 599u, 0x08A96E24u>(ctx, &aot_mem) && ctx.pc == 0x08AE9F54u) goto L_08AE9F54;
    return;
L_08AE9F54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F5C;
    }
L_08AE9F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F64;
    }
L_08AE9F64:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AE9F74u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AE9F74u) goto L_08AE9F74;
    return;
L_08AE9F74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9F80;
      }
      goto L_08AE9F7C;
    }
L_08AE9F7C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE9F80;
L_08AE9F80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE9FAC;
      }
      goto L_08AE9F88;
    }
L_08AE9F88:
    ctx.set_gpr(31, 0x08AE9F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9F90u) goto L_08AE9F90;
    return;
L_08AE9F90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9FA4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9FA4u) goto L_08AE9FA4;
    return;
L_08AE9FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AE9FCC;
      }
      goto L_08AE9FAC;
    }
L_08AE9FAC:
    ctx.set_gpr(31, 0x08AE9FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9FB4u) goto L_08AE9FB4;
    return;
L_08AE9FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE9FC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE9FC8u) goto L_08AE9FC8;
    return;
L_08AE9FC8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AE9FCC;
L_08AE9FCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE9FE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AEA00Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AEA00Cu) goto L_08AEA00C;
    return;
L_08AEA00C:
    ctx.set_gpr(31, 0x08AEA014u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA014u) goto L_08AEA014;
    return;
L_08AEA014:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEA020u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AEA020u) goto L_08AEA020;
    return;
L_08AEA020:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[8]) {
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
        goto L_08AEA050;
    }
    goto L_08AEA02C;
L_08AEA02C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEA050;
      }
      goto L_08AEA038;
    }
L_08AEA038:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEA050;
      }
      goto L_08AEA040;
    }
L_08AEA040:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA050;
      }
      goto L_08AEA04C;
    }
L_08AEA04C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    goto L_08AEA050;
L_08AEA050:
    ctx.set_gpr(16, ctx.gpr[8] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AEA0CC;
      }
      goto L_08AEA05C;
    }
L_08AEA05C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    goto L_08AEA060;
L_08AEA060:
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16916u << 16u);
    ctx.set_gpr(8, 17172u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEA0A0u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0A0u) goto L_08AEA0A0;
    return;
L_08AEA0A0:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(31, 0x08AEA0BCu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8404));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0BCu) goto L_08AEA0BC;
    return;
L_08AEA0BC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_08AEA060;
    }
    goto L_08AEA0CC;
L_08AEA0CC:
    ctx.set_gpr(31, 0x08AEA0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0D4u) goto L_08AEA0D4;
    return;
L_08AEA0D4:
    ctx.set_gpr(31, 0x08AEA0DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA0DCu) goto L_08AEA0DC;
    return;
L_08AEA0DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(329));
    ctx.set_gpr(31, 0x08AEA0ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(229));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 267u, 0x08A9117Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA0ECu) goto L_08AEA0EC;
    return;
L_08AEA0EC:
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
L_08AEA104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEA2A4;
      }
      goto L_08AEA12C;
    }
L_08AEA12C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEA174;
      }
      goto L_08AEA138;
    }
L_08AEA138:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA148;
      }
      goto L_08AEA140;
    }
L_08AEA140:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AEA328;
      }
      goto L_08AEA148;
    }
L_08AEA148:
    ctx.set_gpr(31, 0x08AEA150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA150u) goto L_08AEA150;
    return;
L_08AEA150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA15Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA15Cu) goto L_08AEA15C;
    return;
L_08AEA15C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA164;
    }
L_08AEA164:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA174;
    }
L_08AEA174:
    ctx.set_gpr(31, 0x08AEA17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA17Cu) goto L_08AEA17C;
    return;
L_08AEA17C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA188u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEA188u) goto L_08AEA188;
    return;
L_08AEA188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA224;
      }
      goto L_08AEA190;
    }
L_08AEA190:
    ctx.set_gpr(31, 0x08AEA198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA198u) goto L_08AEA198;
    return;
L_08AEA198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA1A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEA1A4u) goto L_08AEA1A4;
    return;
L_08AEA1A4:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23064), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEA200;
      }
      goto L_08AEA1B8;
    }
L_08AEA1B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08AEA1CC;
    }
    goto L_08AEA1C4;
L_08AEA1C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AEA218;
      }
      goto L_08AEA1CC;
    }
L_08AEA1CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(31, 0x08AEA1E4u);
    ctx.set_gpr(5, 0u < ctx.gpr[2] ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 639u, 0x08A9712Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA1E4u) goto L_08AEA1E4;
    return;
L_08AEA1E4:
    ctx.set_gpr(31, 0x08AEA1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA1ECu) goto L_08AEA1EC;
    return;
L_08AEA1EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA1F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEA1F8u) goto L_08AEA1F8;
    return;
L_08AEA1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA214;
      }
      goto L_08AEA200;
    }
L_08AEA200:
    ctx.set_gpr(31, 0x08AEA208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA208u) goto L_08AEA208;
    return;
L_08AEA208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA214u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEA214u) goto L_08AEA214;
    return;
L_08AEA214:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08AEA218;
L_08AEA218:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA224;
    }
L_08AEA224:
    ctx.set_gpr(31, 0x08AEA22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA22Cu) goto L_08AEA22C;
    return;
L_08AEA22C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA23Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA23Cu) goto L_08AEA23C;
    return;
L_08AEA23C:
    ctx.set_gpr(31, 0x08AEA244u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEA244u) goto L_08AEA244;
    return;
L_08AEA244:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA24C;
    }
L_08AEA24C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA27C;
      }
      goto L_08AEA254;
    }
L_08AEA254:
    ctx.set_gpr(31, 0x08AEA25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA25Cu) goto L_08AEA25C;
    return;
L_08AEA25C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEA274u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA274u) goto L_08AEA274;
    return;
L_08AEA274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA27C;
    }
L_08AEA27C:
    ctx.set_gpr(31, 0x08AEA284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA284u) goto L_08AEA284;
    return;
L_08AEA284:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEA29Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA29Cu) goto L_08AEA29C;
    return;
L_08AEA29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA2A4;
    }
L_08AEA2A4:
    ctx.set_gpr(31, 0x08AEA2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA2ACu) goto L_08AEA2AC;
    return;
L_08AEA2AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA2B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA2B8u) goto L_08AEA2B8;
    return;
L_08AEA2B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA324;
      }
      goto L_08AEA2C0;
    }
L_08AEA2C0:
    ctx.set_gpr(31, 0x08AEA2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA2C8u) goto L_08AEA2C8;
    return;
L_08AEA2C8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEA2E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA2E0u) goto L_08AEA2E0;
    return;
L_08AEA2E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEA2ECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA2ECu) goto L_08AEA2EC;
    return;
L_08AEA2EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA2FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA2FCu) goto L_08AEA2FC;
    return;
L_08AEA2FC:
    ctx.set_gpr(31, 0x08AEA304u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEA304u) goto L_08AEA304;
    return;
L_08AEA304:
    ctx.set_gpr(31, 0x08AEA30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA30Cu) goto L_08AEA30C;
    return;
L_08AEA30C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA318u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA318u) goto L_08AEA318;
    return;
L_08AEA318:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEA324u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 783u, 0x08AE6AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA324u) goto L_08AEA324;
    return;
L_08AEA324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AEA328;
L_08AEA328:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1768)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AEA950;
      }
      goto L_08AEA368;
    }
L_08AEA368:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2992));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEA384:
    ctx.set_gpr(31, 0x08AEA38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA38Cu) goto L_08AEA38C;
    return;
L_08AEA38C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA398u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA398u) goto L_08AEA398;
    return;
L_08AEA398:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AEA9D4;
    }
    goto L_08AEA3A0;
L_08AEA3A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA3B0;
    }
L_08AEA3B0:
    ctx.set_gpr(31, 0x08AEA3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA3B8u) goto L_08AEA3B8;
    return;
L_08AEA3B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA3C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEA3C4u) goto L_08AEA3C4;
    return;
L_08AEA3C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA450;
      }
      goto L_08AEA3CC;
    }
L_08AEA3CC:
    ctx.set_gpr(31, 0x08AEA3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA3D4u) goto L_08AEA3D4;
    return;
L_08AEA3D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA3E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEA3E0u) goto L_08AEA3E0;
    return;
L_08AEA3E0:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23060), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AEA42C;
    }
    goto L_08AEA3F4;
L_08AEA3F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEA408;
      }
      goto L_08AEA400;
    }
L_08AEA400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA408;
    }
L_08AEA408:
    ctx.set_gpr(31, 0x08AEA410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA410u) goto L_08AEA410;
    return;
L_08AEA410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA41Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEA41Cu) goto L_08AEA41C;
    return;
L_08AEA41C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA42C;
    }
L_08AEA42C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEA43Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA43Cu) goto L_08AEA43C;
    return;
L_08AEA43C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA448u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEA448u) goto L_08AEA448;
    return;
L_08AEA448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA450;
    }
L_08AEA450:
    ctx.set_gpr(31, 0x08AEA458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA458u) goto L_08AEA458;
    return;
L_08AEA458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA468u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA468u) goto L_08AEA468;
    return;
L_08AEA468:
    ctx.set_gpr(31, 0x08AEA470u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEA470u) goto L_08AEA470;
    return;
L_08AEA470:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1764), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA478;
    }
L_08AEA478:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1768)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AEA4B0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA4B0u) goto L_08AEA4B0;
    return;
L_08AEA4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA4B8;
    }
L_08AEA4B8:
    ctx.set_gpr(31, 0x08AEA4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA4C0u) goto L_08AEA4C0;
    return;
L_08AEA4C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA4CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA4CCu) goto L_08AEA4CC;
    return;
L_08AEA4CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA4D4;
    }
L_08AEA4D4:
    ctx.set_gpr(31, 0x08AEA4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA4DCu) goto L_08AEA4DC;
    return;
L_08AEA4DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA4ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA4ECu) goto L_08AEA4EC;
    return;
L_08AEA4EC:
    ctx.set_gpr(31, 0x08AEA4F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEA4F4u) goto L_08AEA4F4;
    return;
L_08AEA4F4:
    ctx.set_gpr(31, 0x08AEA4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA4FCu) goto L_08AEA4FC;
    return;
L_08AEA4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA508u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA508u) goto L_08AEA508;
    return;
L_08AEA508:
    ctx.set_gpr(31, 0x08AEA510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA510u) goto L_08AEA510;
    return;
L_08AEA510:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17056u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA544u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AEA544u) goto L_08AEA544;
    return;
L_08AEA544:
    ctx.set_gpr(31, 0x08AEA54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA54Cu) goto L_08AEA54C;
    return;
L_08AEA54C:
    ctx.set_gpr(31, 0x08AEA554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA554u) goto L_08AEA554;
    return;
L_08AEA554:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA564u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA564u) goto L_08AEA564;
    return;
L_08AEA564:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AEA584u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 667u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA584u) goto L_08AEA584;
    return;
L_08AEA584:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEA590u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA590u) goto L_08AEA590;
    return;
L_08AEA590:
    ctx.set_gpr(31, 0x08AEA598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA598u) goto L_08AEA598;
    return;
L_08AEA598:
    ctx.set_gpr(31, 0x08AEA5A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA5A0u) goto L_08AEA5A0;
    return;
L_08AEA5A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA5ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA5ACu) goto L_08AEA5AC;
    return;
L_08AEA5AC:
    ctx.set_gpr(17, 2231u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8132));
    goto L_08AEA5B8;
L_08AEA5B8:
    ctx.set_gpr(31, 0x08AEA5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA5C0u) goto L_08AEA5C0;
    return;
L_08AEA5C0:
    ctx.set_gpr(31, 0x08AEA5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA5C8u) goto L_08AEA5C8;
    return;
L_08AEA5C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA5D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA5D8u) goto L_08AEA5D8;
    return;
L_08AEA5D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AEA5E4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 670u, 0x08862A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA5E4u) goto L_08AEA5E4;
    return;
L_08AEA5E4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA600u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEA600u) goto L_08AEA600;
    return;
L_08AEA600:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEA5B8;
      }
      goto L_08AEA610;
    }
L_08AEA610:
    ctx.set_gpr(31, 0x08AEA618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA618u) goto L_08AEA618;
    return;
L_08AEA618:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA628u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA628u) goto L_08AEA628;
    return;
L_08AEA628:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1768)));
    ctx.set_gpr(31, 0x08AEA634u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AEA634u) goto L_08AEA634;
    return;
L_08AEA634:
    ctx.set_gpr(31, 0x08AEA63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA63Cu) goto L_08AEA63C;
    return;
L_08AEA63C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA64Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA64Cu) goto L_08AEA64C;
    return;
L_08AEA64C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA658u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA658u) goto L_08AEA658;
    return;
L_08AEA658:
    ctx.set_gpr(31, 0x08AEA660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA660u) goto L_08AEA660;
    return;
L_08AEA660:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA66Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AEA66Cu) goto L_08AEA66C;
    return;
L_08AEA66C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA67C;
    }
L_08AEA67C:
    ctx.set_gpr(31, 0x08AEA684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA684u) goto L_08AEA684;
    return;
L_08AEA684:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA690u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA690u) goto L_08AEA690;
    return;
L_08AEA690:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA698;
    }
L_08AEA698:
    ctx.set_gpr(31, 0x08AEA6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AEA6A0u) goto L_08AEA6A0;
    return;
L_08AEA6A0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA6B0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8412));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AEA6B0u) goto L_08AEA6B0;
    return;
L_08AEA6B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA6BC;
    }
L_08AEA6BC:
    ctx.set_gpr(31, 0x08AEA6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA6C4u) goto L_08AEA6C4;
    return;
L_08AEA6C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA6D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA6D0u) goto L_08AEA6D0;
    return;
L_08AEA6D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA6D8;
    }
L_08AEA6D8:
    ctx.set_gpr(31, 0x08AEA6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA6E0u) goto L_08AEA6E0;
    return;
L_08AEA6E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA6F0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA6F0u) goto L_08AEA6F0;
    return;
L_08AEA6F0:
    ctx.set_gpr(31, 0x08AEA6F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEA6F8u) goto L_08AEA6F8;
    return;
L_08AEA6F8:
    ctx.set_gpr(31, 0x08AEA700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA700u) goto L_08AEA700;
    return;
L_08AEA700:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA70Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA70Cu) goto L_08AEA70C;
    return;
L_08AEA70C:
    ctx.set_gpr(31, 0x08AEA714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA714u) goto L_08AEA714;
    return;
L_08AEA714:
    ctx.set_gpr(31, 0x08AEA71Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA71Cu) goto L_08AEA71C;
    return;
L_08AEA71C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA72Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AEA72Cu) goto L_08AEA72C;
    return;
L_08AEA72C:
    ctx.set_gpr(31, 0x08AEA734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA734u) goto L_08AEA734;
    return;
L_08AEA734:
    ctx.set_gpr(31, 0x08AEA73Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEA73Cu) goto L_08AEA73C;
    return;
L_08AEA73C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA748u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA748u) goto L_08AEA748;
    return;
L_08AEA748:
    ctx.set_gpr(17, 2231u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8072));
    goto L_08AEA754;
L_08AEA754:
    ctx.set_gpr(31, 0x08AEA75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEA75Cu) goto L_08AEA75C;
    return;
L_08AEA75C:
    ctx.set_gpr(31, 0x08AEA764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA764u) goto L_08AEA764;
    return;
L_08AEA764:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA774u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA774u) goto L_08AEA774;
    return;
L_08AEA774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AEA780u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 667u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA780u) goto L_08AEA780;
    return;
L_08AEA780:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA79Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEA79Cu) goto L_08AEA79C;
    return;
L_08AEA79C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AEA754;
      }
      goto L_08AEA7AC;
    }
L_08AEA7AC:
    ctx.set_gpr(31, 0x08AEA7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA7B4u) goto L_08AEA7B4;
    return;
L_08AEA7B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA7C4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA7C4u) goto L_08AEA7C4;
    return;
L_08AEA7C4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(31, 0x08AEA7D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AEA7D0u) goto L_08AEA7D0;
    return;
L_08AEA7D0:
    ctx.set_gpr(31, 0x08AEA7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA7D8u) goto L_08AEA7D8;
    return;
L_08AEA7D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA7E8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA7E8u) goto L_08AEA7E8;
    return;
L_08AEA7E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA7F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA7F4u) goto L_08AEA7F4;
    return;
L_08AEA7F4:
    ctx.set_gpr(31, 0x08AEA7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AEA7FCu) goto L_08AEA7FC;
    return;
L_08AEA7FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AEA80Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32424)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AEA80Cu) goto L_08AEA80C;
    return;
L_08AEA80C:
    ctx.set_gpr(31, 0x08AEA814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA814u) goto L_08AEA814;
    return;
L_08AEA814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA820u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AEA820u) goto L_08AEA820;
    return;
L_08AEA820:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA828;
    }
L_08AEA828:
    ctx.set_gpr(31, 0x08AEA830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA830u) goto L_08AEA830;
    return;
L_08AEA830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA83Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEA83Cu) goto L_08AEA83C;
    return;
L_08AEA83C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA8E8;
      }
      goto L_08AEA844;
    }
L_08AEA844:
    ctx.set_gpr(31, 0x08AEA84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA84Cu) goto L_08AEA84C;
    return;
L_08AEA84C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA858u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEA858u) goto L_08AEA858;
    return;
L_08AEA858:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23060), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AEA8D4;
    }
    goto L_08AEA86C;
L_08AEA86C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
        goto L_08AEA880;
    }
    goto L_08AEA878;
L_08AEA878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA8E8;
      }
      goto L_08AEA880;
    }
L_08AEA880:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1768)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEA8B4u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 90u, 0x08A99128u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8B4u) goto L_08AEA8B4;
    return;
L_08AEA8B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEA8C0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8C0u) goto L_08AEA8C0;
    return;
L_08AEA8C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA8CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8CCu) goto L_08AEA8CC;
    return;
L_08AEA8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA8E8;
      }
      goto L_08AEA8D4;
    }
L_08AEA8D4:
    ctx.set_gpr(31, 0x08AEA8DCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8DCu) goto L_08AEA8DC;
    return;
L_08AEA8DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA8E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8E8u) goto L_08AEA8E8;
    return;
L_08AEA8E8:
    ctx.set_gpr(31, 0x08AEA8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA8F0u) goto L_08AEA8F0;
    return;
L_08AEA8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA900u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA900u) goto L_08AEA900;
    return;
L_08AEA900:
    ctx.set_gpr(31, 0x08AEA908u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEA908u) goto L_08AEA908;
    return;
L_08AEA908:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1768), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA910;
    }
L_08AEA910:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1764)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8072));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AEA948u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 626u, 0x08A9BC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA948u) goto L_08AEA948;
    return;
L_08AEA948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA950;
    }
L_08AEA950:
    ctx.set_gpr(31, 0x08AEA958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA958u) goto L_08AEA958;
    return;
L_08AEA958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA964u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA964u) goto L_08AEA964;
    return;
L_08AEA964:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEA9D0;
      }
      goto L_08AEA96C;
    }
L_08AEA96C:
    ctx.set_gpr(31, 0x08AEA974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEA974u) goto L_08AEA974;
    return;
L_08AEA974:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEA98Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEA98Cu) goto L_08AEA98C;
    return;
L_08AEA98C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEA998u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA998u) goto L_08AEA998;
    return;
L_08AEA998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEA9A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA9A8u) goto L_08AEA9A8;
    return;
L_08AEA9A8:
    ctx.set_gpr(31, 0x08AEA9B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEA9B0u) goto L_08AEA9B0;
    return;
L_08AEA9B0:
    ctx.set_gpr(31, 0x08AEA9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEA9B8u) goto L_08AEA9B8;
    return;
L_08AEA9B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEA9C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEA9C4u) goto L_08AEA9C4;
    return;
L_08AEA9C4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AEA9D0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 783u, 0x08AE6AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AEA9D0u) goto L_08AEA9D0;
    return;
L_08AEA9D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AEA9D4;
L_08AEA9D4:
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
L_08AEA9EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08AEAFFC;
      }
      goto L_08AEAA30;
    }
L_08AEAA30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEAAD4;
      }
      goto L_08AEAA3C;
    }
L_08AEAA3C:
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08AEAA4C;
    }
    goto L_08AEAA44;
L_08AEAA44:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08AEB0E0;
      }
      goto L_08AEAA4C;
    }
L_08AEAA4C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(16, 2231u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEAA68u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8224));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEAA68u) goto L_08AEAA68;
    return;
L_08AEAA68:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(238));
    ctx.set_gpr(31, 0x08AEAA7Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAA7Cu) goto L_08AEAA7C;
    return;
L_08AEAA7C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEAA94u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEAA94u) goto L_08AEAA94;
    return;
L_08AEAA94:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(251));
    ctx.set_gpr(31, 0x08AEAAA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(237));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAAA8u) goto L_08AEAAA8;
    return;
L_08AEAAA8:
    ctx.set_gpr(31, 0x08AEAAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEAAB0u) goto L_08AEAAB0;
    return;
L_08AEAAB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEAABCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAABCu) goto L_08AEAABC;
    return;
L_08AEAABC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB0DC;
      }
      goto L_08AEAAC4;
    }
L_08AEAAC4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEB0DC;
      }
      goto L_08AEAAD4;
    }
L_08AEAAD4:
    ctx.set_gpr(31, 0x08AEAADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEAADCu) goto L_08AEAADC;
    return;
L_08AEAADC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEAAE8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEAAE8u) goto L_08AEAAE8;
    return;
L_08AEAAE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEABE0;
      }
      goto L_08AEAAF0;
    }
L_08AEAAF0:
    ctx.set_gpr(31, 0x08AEAAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEAAF8u) goto L_08AEAAF8;
    return;
L_08AEAAF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEAB04u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEAB04u) goto L_08AEAB04;
    return;
L_08AEAB04:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23052), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEABBC;
      }
      goto L_08AEAB18;
    }
L_08AEAB18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEAB2C;
      }
      goto L_08AEAB24;
    }
L_08AEAB24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AEABD4;
      }
      goto L_08AEAB2C;
    }
L_08AEAB2C:
    ctx.set_gpr(31, 0x08AEAB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEAB34u) goto L_08AEAB34;
    return;
L_08AEAB34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEAB44u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAB44u) goto L_08AEAB44;
    return;
L_08AEAB44:
    ctx.set_gpr(31, 0x08AEAB4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEAB4Cu) goto L_08AEAB4C;
    return;
L_08AEAB4C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 17096u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEAB78u);
    ctx.fpr[21] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAB78u) goto L_08AEAB78;
    return;
L_08AEAB78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEAB88u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAB88u) goto L_08AEAB88;
    return;
L_08AEAB88:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AEABA0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 717u, 0x08A9771Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEABA0u) goto L_08AEABA0;
    return;
L_08AEABA0:
    ctx.set_gpr(31, 0x08AEABA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEABA8u) goto L_08AEABA8;
    return;
L_08AEABA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEABB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEABB4u) goto L_08AEABB4;
    return;
L_08AEABB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEABD0;
      }
      goto L_08AEABBC;
    }
L_08AEABBC:
    ctx.set_gpr(31, 0x08AEABC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEABC4u) goto L_08AEABC4;
    return;
L_08AEABC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEABD0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEABD0u) goto L_08AEABD0;
    return;
L_08AEABD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    goto L_08AEABD4;
L_08AEABD4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEAC88;
      }
      goto L_08AEABE0;
    }
L_08AEABE0:
    ctx.set_gpr(31, 0x08AEABE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEABE8u) goto L_08AEABE8;
    return;
L_08AEABE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEABF8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEABF8u) goto L_08AEABF8;
    return;
L_08AEABF8:
    ctx.set_gpr(31, 0x08AEAC00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC00u) goto L_08AEAC00;
    return;
L_08AEAC00:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEAC88;
      }
      goto L_08AEAC08;
    }
L_08AEAC08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEAC14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 884u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08AEAC14u) goto L_08AEAC14;
    return;
L_08AEAC14:
    ctx.set_gpr(31, 0x08AEAC1Cu);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC1Cu) goto L_08AEAC1C;
    return;
L_08AEAC1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEAC2Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAC2Cu) goto L_08AEAC2C;
    return;
L_08AEAC2C:
    ctx.set_gpr(31, 0x08AEAC34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC34u) goto L_08AEAC34;
    return;
L_08AEAC34:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEAC54u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC54u) goto L_08AEAC54;
    return;
L_08AEAC54:
    ctx.set_gpr(31, 0x08AEAC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC5Cu) goto L_08AEAC5C;
    return;
L_08AEAC5C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEAC88u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEAC88u) goto L_08AEAC88;
    return;
L_08AEAC88:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(17, 2231u << 16u);
    ctx.set_gpr(31, 0x08AEAC98u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8224));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAC98u) goto L_08AEAC98;
    return;
L_08AEAC98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEACA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEACA4u) goto L_08AEACA4;
    return;
L_08AEACA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEACE4;
      }
      goto L_08AEACAC;
    }
L_08AEACAC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1488)));
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
        goto L_08AEACD8;
    }
    goto L_08AEACC8;
L_08AEACC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEAD34;
      }
      goto L_08AEACD8;
    }
L_08AEACD8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEAD34;
      }
      goto L_08AEACE4;
    }
L_08AEACE4:
    ctx.set_gpr(31, 0x08AEACECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEACECu) goto L_08AEACEC;
    return;
L_08AEACEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEACF8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEACF8u) goto L_08AEACF8;
    return;
L_08AEACF8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
        goto L_08AEAD38;
    }
    goto L_08AEAD00;
L_08AEAD00:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1488)));
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
        goto L_08AEAD2C;
    }
    goto L_08AEAD1C;
L_08AEAD1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEAD34;
      }
      goto L_08AEAD2C;
    }
L_08AEAD2C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    goto L_08AEAD34;
L_08AEAD34:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    goto L_08AEAD38;
L_08AEAD38:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 301 ? 1u : 0u);
        goto L_08AEAD48;
    }
    goto L_08AEAD40;
L_08AEAD40:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1596), 0u);
      if (branch_taken) {
          goto L_08AEAD58;
      }
      goto L_08AEAD48;
    }
L_08AEAD48:
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAD58;
      }
      goto L_08AEAD50;
    }
L_08AEAD50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    goto L_08AEAD58;
L_08AEAD58:
    ctx.set_gpr(31, 0x08AEAD60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAD60u) goto L_08AEAD60;
    return;
L_08AEAD60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEAD6Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAD6Cu) goto L_08AEAD6C;
    return;
L_08AEAD6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAD84;
      }
      goto L_08AEAD74;
    }
L_08AEAD74:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1488)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AEADAC;
      }
      goto L_08AEAD84;
    }
L_08AEAD84:
    ctx.set_gpr(31, 0x08AEAD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAD8Cu) goto L_08AEAD8C;
    return;
L_08AEAD8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEAD98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAD98u) goto L_08AEAD98;
    return;
L_08AEAD98:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1488), 0u);
        goto L_08AEADAC;
    }
    goto L_08AEADA0;
L_08AEADA0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1488)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AEADAC;
L_08AEADAC:
    ctx.set_gpr(31, 0x08AEADB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEADB4u) goto L_08AEADB4;
    return;
L_08AEADB4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
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
    ctx.set_gpr(31, 0x08AEADF8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEADF8u) goto L_08AEADF8;
    return;
L_08AEADF8:
    ctx.set_gpr(31, 0x08AEAE00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE00u) goto L_08AEAE00;
    return;
L_08AEAE00:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
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
    ctx.set_gpr(31, 0x08AEAE38u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE38u) goto L_08AEAE38;
    return;
L_08AEAE38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEAE50u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE50u) goto L_08AEAE50;
    return;
L_08AEAE50:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(238));
    ctx.set_gpr(31, 0x08AEAE64u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE64u) goto L_08AEAE64;
    return;
L_08AEAE64:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEAE7Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE7Cu) goto L_08AEAE7C;
    return;
L_08AEAE7C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(251));
    ctx.set_gpr(31, 0x08AEAE90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(237));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEAE90u) goto L_08AEAE90;
    return;
L_08AEAE90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEAFD0;
      }
      goto L_08AEAE9C;
    }
L_08AEAE9C:
    ctx.set_gpr(31, 0x08AEAEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAEA4u) goto L_08AEAEA4;
    return;
L_08AEAEA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEAEB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAEB8u) goto L_08AEAEB8;
    return;
L_08AEAEB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(300));
        goto L_08AEAF0C;
    }
    goto L_08AEAEC4;
L_08AEAEC4:
    ctx.set_gpr(31, 0x08AEAECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAECCu) goto L_08AEAECC;
    return;
L_08AEAECC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AEAEE4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(55));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAEE4u) goto L_08AEAEE4;
    return;
L_08AEAEE4:
    ctx.set_gpr(31, 0x08AEAEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAEECu) goto L_08AEAEEC;
    return;
L_08AEAEEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AEAF04u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF04u) goto L_08AEAF04;
    return;
L_08AEAF04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAF9C;
      }
      goto L_08AEAF0C;
    }
L_08AEAF0C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEAF5C;
      }
      goto L_08AEAF14;
    }
L_08AEAF14:
    ctx.set_gpr(31, 0x08AEAF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF1Cu) goto L_08AEAF1C;
    return;
L_08AEAF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AEAF34u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF34u) goto L_08AEAF34;
    return;
L_08AEAF34:
    ctx.set_gpr(31, 0x08AEAF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF3Cu) goto L_08AEAF3C;
    return;
L_08AEAF3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AEAF54u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF54u) goto L_08AEAF54;
    return;
L_08AEAF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEAF9C;
      }
      goto L_08AEAF5C;
    }
L_08AEAF5C:
    ctx.set_gpr(31, 0x08AEAF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF64u) goto L_08AEAF64;
    return;
L_08AEAF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(123));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AEAF7Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF7Cu) goto L_08AEAF7C;
    return;
L_08AEAF7C:
    ctx.set_gpr(31, 0x08AEAF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF84u) goto L_08AEAF84;
    return;
L_08AEAF84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(124));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AEAF9Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEAF9Cu) goto L_08AEAF9C;
    return;
L_08AEAF9C:
    ctx.set_gpr(31, 0x08AEAFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEAFA4u) goto L_08AEAFA4;
    return;
L_08AEAFA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEAFD0u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEAFD0u) goto L_08AEAFD0;
    return;
L_08AEAFD0:
    ctx.set_gpr(31, 0x08AEAFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEAFD8u) goto L_08AEAFD8;
    return;
L_08AEAFD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEAFE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEAFE8u) goto L_08AEAFE8;
    return;
L_08AEAFE8:
    ctx.set_gpr(31, 0x08AEAFF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEAFF0u) goto L_08AEAFF0;
    return;
L_08AEAFF0:
    ctx.set_gpr(3, 2247u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23056), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEB0DC;
      }
      goto L_08AEAFFC;
    }
L_08AEAFFC:
    ctx.set_gpr(31, 0x08AEB004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB004u) goto L_08AEB004;
    return;
L_08AEB004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB010u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB010u) goto L_08AEB010;
    return;
L_08AEB010:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB0DC;
      }
      goto L_08AEB018;
    }
L_08AEB018:
    ctx.set_gpr(31, 0x08AEB020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB020u) goto L_08AEB020;
    return;
L_08AEB020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB030u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(121));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB030u) goto L_08AEB030;
    return;
L_08AEB030:
    ctx.set_gpr(31, 0x08AEB038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB038u) goto L_08AEB038;
    return;
L_08AEB038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB048u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(122));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB048u) goto L_08AEB048;
    return;
L_08AEB048:
    ctx.set_gpr(31, 0x08AEB050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB050u) goto L_08AEB050;
    return;
L_08AEB050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB060u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(123));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB060u) goto L_08AEB060;
    return;
L_08AEB060:
    ctx.set_gpr(31, 0x08AEB068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB068u) goto L_08AEB068;
    return;
L_08AEB068:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB078u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB078u) goto L_08AEB078;
    return;
L_08AEB078:
    ctx.set_gpr(31, 0x08AEB080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB080u) goto L_08AEB080;
    return;
L_08AEB080:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEB098u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEB098u) goto L_08AEB098;
    return;
L_08AEB098:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEB0A4u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB0A4u) goto L_08AEB0A4;
    return;
L_08AEB0A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEB0B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB0B4u) goto L_08AEB0B4;
    return;
L_08AEB0B4:
    ctx.set_gpr(31, 0x08AEB0BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEB0BCu) goto L_08AEB0BC;
    return;
L_08AEB0BC:
    ctx.set_gpr(31, 0x08AEB0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB0C4u) goto L_08AEB0C4;
    return;
L_08AEB0C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB0D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB0D0u) goto L_08AEB0D0;
    return;
L_08AEB0D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AEB0DCu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 783u, 0x08AE6AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB0DCu) goto L_08AEB0DC;
    return;
L_08AEB0DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AEB0E0;
L_08AEB0E0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08AEB3F4;
      }
      goto L_08AEB144;
    }
L_08AEB144:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEB18C;
      }
      goto L_08AEB150;
    }
L_08AEB150:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB160;
      }
      goto L_08AEB158;
    }
L_08AEB158:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08AEB4B8;
      }
      goto L_08AEB160;
    }
L_08AEB160:
    ctx.set_gpr(31, 0x08AEB168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB168u) goto L_08AEB168;
    return;
L_08AEB168:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB174u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB174u) goto L_08AEB174;
    return;
L_08AEB174:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB17C;
    }
L_08AEB17C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB18C;
    }
L_08AEB18C:
    ctx.set_gpr(31, 0x08AEB194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB194u) goto L_08AEB194;
    return;
L_08AEB194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB1A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEB1A0u) goto L_08AEB1A0;
    return;
L_08AEB1A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB22C;
      }
      goto L_08AEB1A8;
    }
L_08AEB1A8:
    ctx.set_gpr(31, 0x08AEB1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB1B0u) goto L_08AEB1B0;
    return;
L_08AEB1B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB1BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEB1BCu) goto L_08AEB1BC;
    return;
L_08AEB1BC:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23048), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEB208;
      }
      goto L_08AEB1D0;
    }
L_08AEB1D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
        goto L_08AEB1E4;
    }
    goto L_08AEB1DC;
L_08AEB1DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AEB220;
      }
      goto L_08AEB1E4;
    }
L_08AEB1E4:
    ctx.set_gpr(31, 0x08AEB1ECu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 557u, 0x08A96A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB1ECu) goto L_08AEB1EC;
    return;
L_08AEB1EC:
    ctx.set_gpr(31, 0x08AEB1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB1F4u) goto L_08AEB1F4;
    return;
L_08AEB1F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB200u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEB200u) goto L_08AEB200;
    return;
L_08AEB200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB21C;
      }
      goto L_08AEB208;
    }
L_08AEB208:
    ctx.set_gpr(31, 0x08AEB210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB210u) goto L_08AEB210;
    return;
L_08AEB210:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB21Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEB21Cu) goto L_08AEB21C;
    return;
L_08AEB21C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_08AEB220;
L_08AEB220:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB22C;
    }
L_08AEB22C:
    ctx.set_gpr(31, 0x08AEB234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB234u) goto L_08AEB234;
    return;
L_08AEB234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEB244u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB244u) goto L_08AEB244;
    return;
L_08AEB244:
    ctx.set_gpr(31, 0x08AEB24Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEB24Cu) goto L_08AEB24C;
    return;
L_08AEB24C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB258;
    }
L_08AEB258:
    ctx.set_gpr(31, 0x08AEB260u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08AEB260u) goto L_08AEB260;
    return;
L_08AEB260:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
        goto L_08AEB3C8;
    }
    goto L_08AEB268;
L_08AEB268:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08AEB274u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08AEB274u) goto L_08AEB274;
    return;
L_08AEB274:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AEB280u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB280u) goto L_08AEB280;
    return;
L_08AEB280:
    ctx.set_gpr(31, 0x08AEB288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB288u) goto L_08AEB288;
    return;
L_08AEB288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEB29Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB29Cu) goto L_08AEB29C;
    return;
L_08AEB29C:
    ctx.set_gpr(31, 0x08AEB2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2A4u) goto L_08AEB2A4;
    return;
L_08AEB2A4:
    ctx.set_gpr(31, 0x08AEB2ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 351u, 0x088496ACu>(ctx, &aot_mem) && ctx.pc == 0x08AEB2ACu) goto L_08AEB2AC;
    return;
L_08AEB2AC:
    ctx.set_gpr(31, 0x08AEB2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2B4u) goto L_08AEB2B4;
    return;
L_08AEB2B4:
    ctx.set_gpr(31, 0x08AEB2BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2BCu) goto L_08AEB2BC;
    return;
L_08AEB2BC:
    ctx.set_gpr(31, 0x08AEB2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB2C4u) goto L_08AEB2C4;
    return;
L_08AEB2C4:
    ctx.set_gpr(31, 0x08AEB2CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB2CCu) goto L_08AEB2CC;
    return;
L_08AEB2CC:
    ctx.set_gpr(31, 0x08AEB2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2D4u) goto L_08AEB2D4;
    return;
L_08AEB2D4:
    ctx.set_gpr(31, 0x08AEB2DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2DCu) goto L_08AEB2DC;
    return;
L_08AEB2DC:
    ctx.set_gpr(31, 0x08AEB2E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2E4u) goto L_08AEB2E4;
    return;
L_08AEB2E4:
    ctx.set_gpr(31, 0x08AEB2ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2ECu) goto L_08AEB2EC;
    return;
L_08AEB2EC:
    ctx.set_gpr(31, 0x08AEB2F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08AEB2F4u) goto L_08AEB2F4;
    return;
L_08AEB2F4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08AEB304u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB304u) goto L_08AEB304;
    return;
L_08AEB304:
    ctx.set_gpr(31, 0x08AEB30Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB30Cu) goto L_08AEB30C;
    return;
L_08AEB30C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x08AEB31Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08AEB31Cu) goto L_08AEB31C;
    return;
L_08AEB31C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB324;
    }
L_08AEB324:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17592)));
    ctx.set_gpr(31, 0x08AEB334u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08AEB334u) goto L_08AEB334;
    return;
L_08AEB334:
    ctx.set_gpr(31, 0x08AEB33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEB33Cu) goto L_08AEB33C;
    return;
L_08AEB33C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1780)));
    ctx.set_gpr(31, 0x08AEB348u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AEB348u) goto L_08AEB348;
    return;
L_08AEB348:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AEB368u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB368u) goto L_08AEB368;
    return;
L_08AEB368:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08AEB378u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB378u) goto L_08AEB378;
    return;
L_08AEB378:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB3A4;
      }
      goto L_08AEB380;
    }
L_08AEB380:
    ctx.set_gpr(31, 0x08AEB388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB388u) goto L_08AEB388;
    return;
L_08AEB388:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AEB398u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08AEB398u) goto L_08AEB398;
    return;
L_08AEB398:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEB3A4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08AEB3A4u) goto L_08AEB3A4;
    return;
L_08AEB3A4:
    ctx.set_gpr(31, 0x08AEB3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEB3ACu) goto L_08AEB3AC;
    return;
L_08AEB3AC:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AEB3C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AEB3C0u) goto L_08AEB3C0;
    return;
L_08AEB3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB3C8;
    }
L_08AEB3C8:
    ctx.set_gpr(31, 0x08AEB3D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB3D0u) goto L_08AEB3D0;
    return;
L_08AEB3D0:
    ctx.set_gpr(31, 0x08AEB3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB3D8u) goto L_08AEB3D8;
    return;
L_08AEB3D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEB3ECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB3ECu) goto L_08AEB3EC;
    return;
L_08AEB3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB3F4;
    }
L_08AEB3F4:
    ctx.set_gpr(31, 0x08AEB3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB3FCu) goto L_08AEB3FC;
    return;
L_08AEB3FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB408u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB408u) goto L_08AEB408;
    return;
L_08AEB408:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4B4;
      }
      goto L_08AEB410;
    }
L_08AEB410:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AEB41Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB41Cu) goto L_08AEB41C;
    return;
L_08AEB41C:
    ctx.set_gpr(31, 0x08AEB424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB424u) goto L_08AEB424;
    return;
L_08AEB424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEB438u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB438u) goto L_08AEB438;
    return;
L_08AEB438:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEB444u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEB444u) goto L_08AEB444;
    return;
L_08AEB444:
    ctx.set_gpr(31, 0x08AEB44Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB44Cu) goto L_08AEB44C;
    return;
L_08AEB44C:
    ctx.set_gpr(31, 0x08AEB454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB454u) goto L_08AEB454;
    return;
L_08AEB454:
    ctx.set_gpr(31, 0x08AEB45Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB45Cu) goto L_08AEB45C;
    return;
L_08AEB45C:
    ctx.set_gpr(31, 0x08AEB464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEB464u) goto L_08AEB464;
    return;
L_08AEB464:
    ctx.set_gpr(31, 0x08AEB46Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEB46Cu) goto L_08AEB46C;
    return;
L_08AEB46C:
    ctx.set_gpr(31, 0x08AEB474u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB474u) goto L_08AEB474;
    return;
L_08AEB474:
    ctx.set_gpr(31, 0x08AEB47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB47Cu) goto L_08AEB47C;
    return;
L_08AEB47C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEB48Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB48Cu) goto L_08AEB48C;
    return;
L_08AEB48C:
    ctx.set_gpr(31, 0x08AEB494u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEB494u) goto L_08AEB494;
    return;
L_08AEB494:
    ctx.set_gpr(31, 0x08AEB49Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEB49Cu) goto L_08AEB49C;
    return;
L_08AEB49C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEB4A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB4A8u) goto L_08AEB4A8;
    return;
L_08AEB4A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AEB4B4u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 783u, 0x08AE6AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB4B4u) goto L_08AEB4B4;
    return;
L_08AEB4B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AEB4B8;
L_08AEB4B8:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB4D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AEB4E8;
L_08AEB4E8:
    ctx.set_gpr(31, 0x08AEB4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB4F0u) goto L_08AEB4F0;
    return;
L_08AEB4F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AEB500u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB500u) goto L_08AEB500;
    return;
L_08AEB500:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB4E8;
      }
      goto L_08AEB510;
    }
L_08AEB510:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AEB514;
L_08AEB514:
    ctx.set_gpr(31, 0x08AEB51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB51Cu) goto L_08AEB51C;
    return;
L_08AEB51C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AEB52Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB52Cu) goto L_08AEB52C;
    return;
L_08AEB52C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB514;
      }
      goto L_08AEB53C;
    }
L_08AEB53C:
    ctx.set_gpr(31, 0x08AEB544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB544u) goto L_08AEB544;
    return;
L_08AEB544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB554u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB554u) goto L_08AEB554;
    return;
L_08AEB554:
    ctx.set_gpr(31, 0x08AEB55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB55Cu) goto L_08AEB55C;
    return;
L_08AEB55C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB56Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB56Cu) goto L_08AEB56C;
    return;
L_08AEB56C:
    ctx.set_gpr(31, 0x08AEB574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEB574u) goto L_08AEB574;
    return;
L_08AEB574:
    ctx.set_gpr(31, 0x08AEB57Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEB57Cu) goto L_08AEB57C;
    return;
L_08AEB57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEB590u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 263u, 0x08A7D1C8u>(ctx, &aot_mem) && ctx.pc == 0x08AEB590u) goto L_08AEB590;
    return;
L_08AEB590:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEB5A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AEB5CCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AEB5CCu) goto L_08AEB5CC;
    return;
L_08AEB5CC:
    ctx.set_gpr(31, 0x08AEB5D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB5D4u) goto L_08AEB5D4;
    return;
L_08AEB5D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEB5E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AEB5E0u) goto L_08AEB5E0;
    return;
L_08AEB5E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(6));
        goto L_08AEB5FC;
    }
    goto L_08AEB5EC;
L_08AEB5EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
        goto L_08AEB5FC;
    }
    goto L_08AEB5F8;
L_08AEB5F8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(8));
    goto L_08AEB5FC;
L_08AEB5FC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AEB600;
L_08AEB600:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(2, ctx.gpr[17] & 7u);
      if (branch_taken) {
          goto L_08AEB614;
      }
      goto L_08AEB608;
    }
L_08AEB608:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
        goto L_08AEB618;
    }
    goto L_08AEB610;
L_08AEB610:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AEB614;
L_08AEB614:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AEB618;
L_08AEB618:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB694;
      }
      goto L_08AEB620;
    }
L_08AEB620:
    ctx.set_gpr(31, 0x08AEB628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB628u) goto L_08AEB628;
    return;
L_08AEB628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB63Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB63Cu) goto L_08AEB63C;
    return;
L_08AEB63C:
    ctx.set_gpr(31, 0x08AEB644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB644u) goto L_08AEB644;
    return;
L_08AEB644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEB65Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB65Cu) goto L_08AEB65C;
    return;
L_08AEB65C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AEB6B4;
    }
    goto L_08AEB668;
L_08AEB668:
    ctx.set_gpr(31, 0x08AEB670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB670u) goto L_08AEB670;
    return;
L_08AEB670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEB68Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB68Cu) goto L_08AEB68C;
    return;
L_08AEB68C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB6B0;
      }
      goto L_08AEB694;
    }
L_08AEB694:
    ctx.set_gpr(31, 0x08AEB69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB69Cu) goto L_08AEB69C;
    return;
L_08AEB69C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB6B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB6B0u) goto L_08AEB6B0;
    return;
L_08AEB6B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AEB6B4;
L_08AEB6B4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB600;
      }
      goto L_08AEB6C0;
    }
L_08AEB6C0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AEB6C4;
L_08AEB6C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.set_gpr(2, ctx.gpr[17] & 7u);
      if (branch_taken) {
          goto L_08AEB6D8;
      }
      goto L_08AEB6CC;
    }
L_08AEB6CC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
        goto L_08AEB6DC;
    }
    goto L_08AEB6D4;
L_08AEB6D4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AEB6D8;
L_08AEB6D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AEB6DC;
L_08AEB6DC:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB770;
      }
      goto L_08AEB6E4;
    }
L_08AEB6E4:
    ctx.set_gpr(31, 0x08AEB6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB6ECu) goto L_08AEB6EC;
    return;
L_08AEB6EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB700u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB700u) goto L_08AEB700;
    return;
L_08AEB700:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AEB718;
      }
      goto L_08AEB70C;
    }
L_08AEB70C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB718;
      }
      goto L_08AEB714;
    }
L_08AEB714:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AEB718;
L_08AEB718:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEB748;
      }
      goto L_08AEB720;
    }
L_08AEB720:
    ctx.set_gpr(31, 0x08AEB728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB728u) goto L_08AEB728;
    return;
L_08AEB728:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEB740u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB740u) goto L_08AEB740;
    return;
L_08AEB740:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEB790;
      }
      goto L_08AEB748;
    }
L_08AEB748:
    ctx.set_gpr(31, 0x08AEB750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB750u) goto L_08AEB750;
    return;
L_08AEB750:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEB768u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB768u) goto L_08AEB768;
    return;
L_08AEB768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB78C;
      }
      goto L_08AEB770;
    }
L_08AEB770:
    ctx.set_gpr(31, 0x08AEB778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB778u) goto L_08AEB778;
    return;
L_08AEB778:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB78Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEB78Cu) goto L_08AEB78C;
    return;
L_08AEB78C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AEB790;
L_08AEB790:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB6C4;
      }
      goto L_08AEB79C;
    }
L_08AEB79C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08AEB7A0;
L_08AEB7A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(3, ctx.gpr[18] & 7u);
      if (branch_taken) {
          goto L_08AEB7B4;
      }
      goto L_08AEB7A8;
    }
L_08AEB7A8:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
        goto L_08AEB7B8;
    }
    goto L_08AEB7B0;
L_08AEB7B0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    goto L_08AEB7B4;
L_08AEB7B4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AEB7B8;
L_08AEB7B8:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AEBCE4;
    }
    goto L_08AEB7C0;
L_08AEB7C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
      if (branch_taken) {
          goto L_08AEB7D8;
      }
      goto L_08AEB7CC;
    }
L_08AEB7CC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AEB7DC;
    }
    goto L_08AEB7D4;
L_08AEB7D4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AEB7D8;
L_08AEB7D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AEB7DC;
L_08AEB7DC:
    ctx.set_gpr(17, ctx.gpr[2] ^ ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, 0x08AEB7F0u);
    ctx.set_gpr(20, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AEB7F0u) goto L_08AEB7F0;
    return;
L_08AEB7F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEB7FCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(111));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 684u, 0x08A974C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB7FCu) goto L_08AEB7FC;
    return;
L_08AEB7FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB808;
      }
      goto L_08AEB804;
    }
L_08AEB804:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AEB808;
L_08AEB808:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
        goto L_08AEB868;
    }
    goto L_08AEB810;
L_08AEB810:
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
        goto L_08AEB83C;
    }
    goto L_08AEB81C;
L_08AEB81C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEB830;
      }
      goto L_08AEB828;
    }
L_08AEB828:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEB830;
L_08AEB830:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    goto L_08AEB83C;
L_08AEB83C:
    ctx.set_gpr(31, 0x08AEB844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB844u) goto L_08AEB844;
    return;
L_08AEB844:
    ctx.set_gpr(3, ctx.gpr[20] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB860u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB860u) goto L_08AEB860;
    return;
L_08AEB860:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AEB8B4;
      }
      goto L_08AEB868;
    }
L_08AEB868:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
        goto L_08AEB890;
    }
    goto L_08AEB870;
L_08AEB870:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEB884;
      }
      goto L_08AEB87C;
    }
L_08AEB87C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEB884;
L_08AEB884:
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    goto L_08AEB890;
L_08AEB890:
    ctx.set_gpr(31, 0x08AEB898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB898u) goto L_08AEB898;
    return;
L_08AEB898:
    ctx.set_gpr(3, ctx.gpr[21] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB8B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB8B4u) goto L_08AEB8B4;
    return;
L_08AEB8B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AEB8C4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 132u, 0x08A994BCu>(ctx, &aot_mem) && ctx.pc == 0x08AEB8C4u) goto L_08AEB8C4;
    return;
L_08AEB8C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB8D0;
      }
      goto L_08AEB8CC;
    }
L_08AEB8CC:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AEB8D0;
L_08AEB8D0:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
        goto L_08AEB930;
    }
    goto L_08AEB8D8;
L_08AEB8D8:
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
        goto L_08AEB904;
    }
    goto L_08AEB8E4;
L_08AEB8E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEB8F8;
      }
      goto L_08AEB8F0;
    }
L_08AEB8F0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEB8F8;
L_08AEB8F8:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    goto L_08AEB904;
L_08AEB904:
    ctx.set_gpr(31, 0x08AEB90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB90Cu) goto L_08AEB90C;
    return;
L_08AEB90C:
    ctx.set_gpr(3, ctx.gpr[20] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB928u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB928u) goto L_08AEB928;
    return;
L_08AEB928:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AEB97C;
      }
      goto L_08AEB930;
    }
L_08AEB930:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
        goto L_08AEB958;
    }
    goto L_08AEB938;
L_08AEB938:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEB94C;
      }
      goto L_08AEB944;
    }
L_08AEB944:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEB94C;
L_08AEB94C:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    goto L_08AEB958;
L_08AEB958:
    ctx.set_gpr(31, 0x08AEB960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB960u) goto L_08AEB960;
    return;
L_08AEB960:
    ctx.set_gpr(3, ctx.gpr[21] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB97Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB97Cu) goto L_08AEB97C;
    return;
L_08AEB97C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AEB994u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 759u, 0x08A97B58u>(ctx, &aot_mem) && ctx.pc == 0x08AEB994u) goto L_08AEB994;
    return;
L_08AEB994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB9A0;
      }
      goto L_08AEB99C;
    }
L_08AEB99C:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AEB9A0;
L_08AEB9A0:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
        goto L_08AEBA00;
    }
    goto L_08AEB9A8;
L_08AEB9A8:
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
        goto L_08AEB9D4;
    }
    goto L_08AEB9B4;
L_08AEB9B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEB9C8;
      }
      goto L_08AEB9C0;
    }
L_08AEB9C0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEB9C8;
L_08AEB9C8:
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    goto L_08AEB9D4;
L_08AEB9D4:
    ctx.set_gpr(31, 0x08AEB9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB9DCu) goto L_08AEB9DC;
    return;
L_08AEB9DC:
    ctx.set_gpr(3, ctx.gpr[20] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(97));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEB9F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEB9F8u) goto L_08AEB9F8;
    return;
L_08AEB9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AEBA4C;
      }
      goto L_08AEBA00;
    }
L_08AEBA00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
        goto L_08AEBA28;
    }
    goto L_08AEBA08;
L_08AEBA08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEBA1C;
      }
      goto L_08AEBA14;
    }
L_08AEBA14:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEBA1C;
L_08AEBA1C:
    ctx.set_gpr(2, ctx.gpr[2] ^ 2u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    goto L_08AEBA28;
L_08AEBA28:
    ctx.set_gpr(31, 0x08AEBA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBA30u) goto L_08AEBA30;
    return;
L_08AEBA30:
    ctx.set_gpr(3, ctx.gpr[21] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(97));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEBA4Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBA4Cu) goto L_08AEBA4C;
    return;
L_08AEBA4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEBA58u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 599u, 0x08A96E24u>(ctx, &aot_mem) && ctx.pc == 0x08AEBA58u) goto L_08AEBA58;
    return;
L_08AEBA58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBA64;
      }
      goto L_08AEBA60;
    }
L_08AEBA60:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AEBA64;
L_08AEBA64:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
        goto L_08AEBAC4;
    }
    goto L_08AEBA6C;
L_08AEBA6C:
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
        goto L_08AEBA98;
    }
    goto L_08AEBA78;
L_08AEBA78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEBA8C;
      }
      goto L_08AEBA84;
    }
L_08AEBA84:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEBA8C;
L_08AEBA8C:
    ctx.set_gpr(2, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[2] & 255u);
    goto L_08AEBA98;
L_08AEBA98:
    ctx.set_gpr(31, 0x08AEBAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBAA0u) goto L_08AEBAA0;
    return;
L_08AEBAA0:
    ctx.set_gpr(3, ctx.gpr[20] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(105));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEBABCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBABCu) goto L_08AEBABC;
    return;
L_08AEBABC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08AEBB10;
      }
      goto L_08AEBAC4;
    }
L_08AEBAC4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
        goto L_08AEBAEC;
    }
    goto L_08AEBACC;
L_08AEBACC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEBAE0;
      }
      goto L_08AEBAD8;
    }
L_08AEBAD8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEBAE0;
L_08AEBAE0:
    ctx.set_gpr(2, ctx.gpr[2] ^ 3u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(21, ctx.gpr[2] & 255u);
    goto L_08AEBAEC;
L_08AEBAEC:
    ctx.set_gpr(31, 0x08AEBAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBAF4u) goto L_08AEBAF4;
    return;
L_08AEBAF4:
    ctx.set_gpr(3, ctx.gpr[21] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(105));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEBB10u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBB10u) goto L_08AEBB10;
    return;
L_08AEBB10:
    ctx.set_gpr(31, 0x08AEBB18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBB18u) goto L_08AEBB18;
    return;
L_08AEBB18:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AEBB2C;
    }
    goto L_08AEBB20;
L_08AEBB20:
    ctx.set_gpr(31, 0x08AEBB28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AE8450;
L_08AEBB28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08AEBB2C;
L_08AEBB2C:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AEBB3Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AEBB3Cu) goto L_08AEBB3C;
    return;
L_08AEBB3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBB48;
      }
      goto L_08AEBB44;
    }
L_08AEBB44:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08AEBB48;
L_08AEBB48:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AEBBFC;
    }
    goto L_08AEBB50;
L_08AEBB50:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08AEBBA4;
    }
    goto L_08AEBB58;
L_08AEBB58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
      if (branch_taken) {
          goto L_08AEBB6C;
      }
      goto L_08AEBB64;
    }
L_08AEBB64:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEBB6C;
L_08AEBB6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEBBA0;
      }
      goto L_08AEBB78;
    }
L_08AEBB78:
    ctx.set_gpr(31, 0x08AEBB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBB80u) goto L_08AEBB80;
    return;
L_08AEBB80:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEBB98u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBB98u) goto L_08AEBB98;
    return;
L_08AEBB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBCE0;
      }
      goto L_08AEBBA0;
    }
L_08AEBBA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AEBBA4;
L_08AEBBA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBBD4;
      }
      goto L_08AEBBAC;
    }
L_08AEBBAC:
    ctx.set_gpr(31, 0x08AEBBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBBB4u) goto L_08AEBBB4;
    return;
L_08AEBBB4:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEBBCCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(46));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBBCCu) goto L_08AEBBCC;
    return;
L_08AEBBCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBCE0;
      }
      goto L_08AEBBD4;
    }
L_08AEBBD4:
    ctx.set_gpr(31, 0x08AEBBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBBDCu) goto L_08AEBBDC;
    return;
L_08AEBBDC:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEBBF4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBBF4u) goto L_08AEBBF4;
    return;
L_08AEBBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBCE0;
      }
      goto L_08AEBBFC;
    }
L_08AEBBFC:
    ctx.set_gpr(31, 0x08AEBC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBC04u) goto L_08AEBC04;
    return;
L_08AEBC04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEBC14u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 74u, 0x08A99034u>(ctx, &aot_mem) && ctx.pc == 0x08AEBC14u) goto L_08AEBC14;
    return;
L_08AEBC14:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u < ctx.gpr[17] ? 1u : 0u);
        goto L_08AEBC94;
    }
    goto L_08AEBC1C;
L_08AEBC1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBC6C;
      }
      goto L_08AEBC24;
    }
L_08AEBC24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
      if (branch_taken) {
          goto L_08AEBC38;
      }
      goto L_08AEBC30;
    }
L_08AEBC30:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEBC38;
L_08AEBC38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEBC6C;
      }
      goto L_08AEBC44;
    }
L_08AEBC44:
    ctx.set_gpr(31, 0x08AEBC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBC4Cu) goto L_08AEBC4C;
    return;
L_08AEBC4C:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEBC64u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBC64u) goto L_08AEBC64;
    return;
L_08AEBC64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBCE0;
      }
      goto L_08AEBC6C;
    }
L_08AEBC6C:
    ctx.set_gpr(31, 0x08AEBC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBC74u) goto L_08AEBC74;
    return;
L_08AEBC74:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEBC8Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(47));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBC8Cu) goto L_08AEBC8C;
    return;
L_08AEBC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBCE0;
      }
      goto L_08AEBC94;
    }
L_08AEBC94:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
        goto L_08AEBCBC;
    }
    goto L_08AEBC9C;
L_08AEBC9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
      if (branch_taken) {
          goto L_08AEBCB0;
      }
      goto L_08AEBCA8;
    }
L_08AEBCA8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AEBCB0;
L_08AEBCB0:
    ctx.set_gpr(2, ctx.gpr[2] ^ 4u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
    goto L_08AEBCBC;
L_08AEBCBC:
    ctx.set_gpr(31, 0x08AEBCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBCC4u) goto L_08AEBCC4;
    return;
L_08AEBCC4:
    ctx.set_gpr(3, ctx.gpr[17] & 255u);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEBCE0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBCE0u) goto L_08AEBCE0;
    return;
L_08AEBCE0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AEBCE4;
L_08AEBCE4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEB7A0;
      }
      goto L_08AEBCF0;
    }
L_08AEBCF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBD14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08AEBD40u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AEBD40u) goto L_08AEBD40;
    return;
L_08AEBD40:
    ctx.set_gpr(31, 0x08AEBD48u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBD48u) goto L_08AEBD48;
    return;
L_08AEBD48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEBD54u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AEBD54u) goto L_08AEBD54;
    return;
L_08AEBD54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(6));
        goto L_08AEBD70;
    }
    goto L_08AEBD60;
L_08AEBD60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(4));
        goto L_08AEBD70;
    }
    goto L_08AEBD6C;
L_08AEBD6C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(8));
    goto L_08AEBD70;
L_08AEBD70:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
        goto L_08AEBE2C;
    }
    goto L_08AEBD7C;
L_08AEBD7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AEBD80;
L_08AEBD80:
    ctx.set_gpr(31, 0x08AEBD88u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AEBD88u) goto L_08AEBD88;
    return;
L_08AEBD88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEBD94u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(111));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 684u, 0x08A974C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEBD94u) goto L_08AEBD94;
    return;
L_08AEBD94:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBDA4;
    }
    goto L_08AEBD9C;
L_08AEBD9C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AEBDA4;
L_08AEBDA4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AEBDB0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 132u, 0x08A994BCu>(ctx, &aot_mem) && ctx.pc == 0x08AEBDB0u) goto L_08AEBDB0;
    return;
L_08AEBDB0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBDC0;
    }
    goto L_08AEBDB8;
L_08AEBDB8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AEBDC0;
L_08AEBDC0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AEBDD4u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 759u, 0x08A97B58u>(ctx, &aot_mem) && ctx.pc == 0x08AEBDD4u) goto L_08AEBDD4;
    return;
L_08AEBDD4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBDE4;
    }
    goto L_08AEBDDC;
L_08AEBDDC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AEBDE4;
L_08AEBDE4:
    ctx.set_gpr(31, 0x08AEBDECu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 599u, 0x08A96E24u>(ctx, &aot_mem) && ctx.pc == 0x08AEBDECu) goto L_08AEBDEC;
    return;
L_08AEBDEC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBDFC;
    }
    goto L_08AEBDF4;
L_08AEBDF4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AEBDFC;
L_08AEBDFC:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AEBE0Cu);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AEBE0Cu) goto L_08AEBE0C;
    return;
L_08AEBE0C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AEBE1C;
    }
    goto L_08AEBE14;
L_08AEBE14:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AEBE1C;
L_08AEBE1C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBD80;
    }
    goto L_08AEBE28;
L_08AEBE28:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_08AEBE2C;
L_08AEBE2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBE48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(5, ctx.gpr[18] & 7u);
      if (branch_taken) {
          goto L_08AEBE78;
      }
      goto L_08AEBE6C;
    }
L_08AEBE6C:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBE7C;
    }
    goto L_08AEBE74;
L_08AEBE74:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    goto L_08AEBE78;
L_08AEBE78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AEBE7C;
L_08AEBE7C:
    ctx.set_gpr(31, 0x08AEBE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AEBE84u) goto L_08AEBE84;
    return;
L_08AEBE84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 3u));
      if (branch_taken) {
          goto L_08AEBE94;
      }
      goto L_08AEBE8C;
    }
L_08AEBE8C:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    goto L_08AEBE94;
L_08AEBE94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBF14;
    }
    goto L_08AEBEA0;
L_08AEBEA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBF04;
    }
    goto L_08AEBEAC;
L_08AEBEAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBEF4;
    }
    goto L_08AEBEB8;
L_08AEBEB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBEE4;
    }
    goto L_08AEBEC4;
L_08AEBEC4:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEBED4;
    }
    goto L_08AEBECC;
L_08AEBECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEBF20;
      }
      goto L_08AEBED4;
    }
L_08AEBED4:
    ctx.set_gpr(31, 0x08AEBEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 706u, 0x08A97638u>(ctx, &aot_mem) && ctx.pc == 0x08AEBEDCu) goto L_08AEBEDC;
    return;
L_08AEBEDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AEBF20;
      }
      goto L_08AEBEE4;
    }
L_08AEBEE4:
    ctx.set_gpr(31, 0x08AEBEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 154u, 0x08A9969Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBEECu) goto L_08AEBEEC;
    return;
L_08AEBEEC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AEBF20;
      }
      goto L_08AEBEF4;
    }
L_08AEBEF4:
    ctx.set_gpr(31, 0x08AEBEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 793u, 0x08A97E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBEFCu) goto L_08AEBEFC;
    return;
L_08AEBEFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AEBF20;
      }
      goto L_08AEBF04;
    }
L_08AEBF04:
    ctx.set_gpr(31, 0x08AEBF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 615u, 0x08A96F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBF0Cu) goto L_08AEBF0C;
    return;
L_08AEBF0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08AEBF20;
      }
      goto L_08AEBF14;
    }
L_08AEBF14:
    ctx.set_gpr(31, 0x08AEBF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 63u, 0x08A98F50u>(ctx, &aot_mem) && ctx.pc == 0x08AEBF1Cu) goto L_08AEBF1C;
    return;
L_08AEBF1C:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    goto L_08AEBF20;
L_08AEBF20:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AEBF48;
    }
    goto L_08AEBF28;
L_08AEBF28:
    ctx.set_gpr(31, 0x08AEBF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBF30u) goto L_08AEBF30;
    return;
L_08AEBF30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEBF44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEBF44u) goto L_08AEBF44;
    return;
L_08AEBF44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AEBF48;
L_08AEBF48:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEBF5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8524)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8528)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8532)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8536)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8540)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), 0u);
    ctx.set_gpr(31, 0x08AEBFE4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08AEBFE4u) goto L_08AEBFE4;
    return;
L_08AEBFE4:
    ctx.set_gpr(31, 0x08AEBFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEBFECu) goto L_08AEBFEC;
    return;
L_08AEBFEC:
    ctx.set_gpr(31, 0x08AEBFF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 590u, 0x0885E2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AEBFF4u) goto L_08AEBFF4;
    return;
L_08AEBFF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    ctx.pc = 0x08AEC000u; return;
}

void recomp_unit_0185(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0185_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_185(Runtime &runtime) {
    runtime.register_generated_unit(185u, 0x08AE8000u, 16384u, &recomp_unit_0185, &recomp_unit_0185_entry);
    runtime.register_function(0x08AE8000u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8010u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8014u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE801Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8028u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8038u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE804Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8088u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8090u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE80D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8108u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8110u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8130u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8138u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE814Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8154u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8168u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8170u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8184u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8198u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE81F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8208u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE823Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8248u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE825Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE82FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8308u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8314u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8320u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE832Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8338u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE83F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8410u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8424u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE843Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8450u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8458u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8480u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8488u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8494u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE84E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE851Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8524u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8530u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8538u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8544u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE854Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8558u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE855Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8560u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8568u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8574u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE857Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE858Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8598u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE859Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE85FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8604u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8608u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8610u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE861Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8624u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE862Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8638u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8650u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8658u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8668u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE866Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8680u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8688u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8694u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE86F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8708u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE871Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8724u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8730u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8758u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8770u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8778u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE877Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8780u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8788u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8790u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE879Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE87F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8804u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8814u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8820u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8828u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8830u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE883Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE885Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8864u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8870u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE887Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8884u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8888u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE888Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE889Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE88FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8904u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8918u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8920u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8934u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE893Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8950u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE896Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8974u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE897Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8988u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE899Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE89FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8A9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8AF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8B98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8BF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8C94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8CF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8D9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8DF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8E98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ED0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8ED8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8EFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8F9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE8FFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9004u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9010u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE901Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9024u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9028u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE902Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9038u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9044u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE904Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9060u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9068u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9070u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9080u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9088u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE908Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9090u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE909Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE90E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9100u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9108u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9118u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9120u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9134u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9144u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE914Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9154u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9168u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9170u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9178u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9184u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE918Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE91FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9204u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9210u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9218u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE922Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9234u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE923Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9248u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9250u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9254u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9258u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9264u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE926Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9274u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9280u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE929Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE92F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE930Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9314u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE931Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9328u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9330u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9334u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9338u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9344u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE934Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9354u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9360u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9368u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE937Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9384u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE938Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE93FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9404u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9408u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE940Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9414u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE941Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9428u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9438u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9440u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9448u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9454u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE945Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE947Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9484u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE948Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE94F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9508u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE950Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9510u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE951Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9524u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE952Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9534u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE953Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9544u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9558u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9560u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9568u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE957Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9584u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE958Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9598u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE95FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9600u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9608u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9614u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9620u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9628u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9630u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE963Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE964Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9654u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9664u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE966Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9678u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9680u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9688u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE96F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9700u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9720u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9728u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9758u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE976Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9774u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE978Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9794u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE979Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE97FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9808u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE981Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9820u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9828u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9848u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9850u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9860u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9868u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE987Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE988Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9894u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE98E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9914u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE991Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9954u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE995Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9980u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9984u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9988u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE998Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9994u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE999Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE99D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9A98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9AF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9B94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9BF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9C84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9CF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9D9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9DFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9E9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ECCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9ED8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9EFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9F90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AE9FE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA00Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA014u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA020u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA02Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA038u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA040u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA04Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA050u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA05Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA060u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA0ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA104u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA12Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA138u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA140u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA148u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA150u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA15Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA164u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA174u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA17Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA188u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA190u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA198u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA1F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA208u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA214u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA218u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA224u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA22Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA23Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA244u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA24Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA254u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA25Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA274u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA27Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA284u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA29Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA2FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA304u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA30Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA318u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA324u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA328u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA338u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA368u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA384u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA38Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA3F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA400u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA408u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA410u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA41Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA42Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA43Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA448u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA450u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA458u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA468u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA470u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA478u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA4FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA508u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA510u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA544u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA54Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA554u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA564u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA584u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA590u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA598u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA5E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA600u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA610u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA618u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA628u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA634u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA63Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA64Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA658u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA660u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA66Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA67Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA684u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA690u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA698u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA6F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA700u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA70Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA71Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA72Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA734u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA73Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA748u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA754u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA75Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA764u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA774u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA780u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA79Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA7FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA80Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA814u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA820u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA828u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA830u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA83Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA844u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA84Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA858u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA86Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA878u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA880u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA8F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA900u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA908u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA910u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA948u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA950u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA964u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA96Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA974u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA98Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA998u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEA9ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA68u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAA94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAABCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAADCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAAF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAB88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEABF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAC98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACC8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEACF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAD98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEADF8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE90u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAE9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAECCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAEECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF34u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAF9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFD0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFE8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEAFFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB004u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB010u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB018u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB020u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB030u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB038u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB048u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB050u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB060u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB068u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB078u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB080u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB098u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB0E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB104u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB144u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB150u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB158u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB160u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB168u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB174u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB17Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB18Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB194u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB1F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB200u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB208u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB210u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB21Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB220u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB22Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB234u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB244u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB24Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB258u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB260u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB268u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB274u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB280u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB288u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB29Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2BCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB2F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB304u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB30Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB31Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB324u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB334u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB33Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB348u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB368u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB378u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB380u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB388u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB398u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3A4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3ACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3F4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB3FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB408u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB410u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB41Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB424u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB438u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB444u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB44Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB454u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB45Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB464u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB46Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB474u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB47Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB48Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB494u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB49Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4E8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB4F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB500u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB510u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB514u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB51Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB52Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB53Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB544u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB554u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB55Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB56Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB574u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB57Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB590u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5E0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB5FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB600u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB608u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB610u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB614u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB618u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB620u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB628u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB63Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB644u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB65Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB668u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB670u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB68Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB694u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB69Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB6ECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB700u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB70Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB714u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB718u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB720u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB728u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB740u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB748u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB750u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB768u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB770u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB778u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB78Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB790u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB79Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7B0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7B8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB7FCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB804u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB808u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB810u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB81Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB828u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB830u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB83Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB844u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB860u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB868u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB870u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB87Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB884u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB890u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB898u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8C4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8CCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8D0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8D8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8E4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8F0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB8F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB904u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB90Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB928u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB930u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB938u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB944u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB94Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB958u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB960u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB97Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB994u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB99Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9A0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9A8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9B4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9C0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9C8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9D4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9DCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEB9F8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA00u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA08u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBA98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBABCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBACCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAD8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBAF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB10u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB18u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB3Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB50u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB58u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBB98u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBB4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBCCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBBFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC24u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC38u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC4Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC64u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBC9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCA8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCBCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCE0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBCF0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD40u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD54u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD60u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD70u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD80u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD88u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBD9Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDA4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDB0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDC0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDD4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBDFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE2Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE6Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE74u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE78u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE7Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE84u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE8Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBE94u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEA0u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEACu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEB8u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEC4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBECCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBED4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEDCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEF4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBEFCu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF04u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF0Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF14u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF1Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF20u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF28u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF30u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF44u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF48u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBF5Cu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFE4u, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFECu, &recomp_unit_0185, "recomp_unit_0185");
    runtime.register_function(0x08AEBFF4u, &recomp_unit_0185, "recomp_unit_0185");
}
} // namespace psprecomp
