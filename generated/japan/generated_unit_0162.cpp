#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0162[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 9, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0,
    0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0,
    0, 31, 0, 0, 0, 32, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0,
    41, 42, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54,
    0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66,
    0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0,
    0, 77, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 88, 0,
    89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99,
    0, 100, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0,
    109, 0, 110, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 0, 0, 119, 120, 0, 0,
    121, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 132, 0, 0, 0, 0, 0, 133,
    0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 142, 0, 143, 0,
    144, 0, 145, 0, 146, 0, 147, 0, 148, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0,
    156, 0, 157, 0, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0,
    0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 188, 0, 0, 0,
    0, 0, 0, 189, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0,
    0, 199, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0,
    211, 0, 0, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0,
    223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 232, 0,
    233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 0, 243, 0, 244, 0, 0,
    0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0,
    0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264,
    0, 0, 265, 266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276,
    0, 277, 0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0,
    289, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 300,
    0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 309, 0, 310,
    0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0,
    0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 333,
    0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 344, 0, 345, 0,
    0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0,
    0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367,
    0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376,
    377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388, 0, 0,
    0, 389, 0, 0, 390, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0,
    0, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0,
    410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 415, 0, 416, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0,
    0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 429,
    0, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0,
    0, 0, 439, 0, 0, 0, 0, 440, 441, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 0,
    0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 458, 0, 459, 0, 460,
    0, 0, 461, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 469, 0, 470, 0,
    471, 0, 0, 0, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 488, 0, 489, 0, 490, 0,
    0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 504,
    0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 513, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0,
    0, 521, 0, 522, 0, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0,
    0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 537,
    0, 538, 0, 539, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0,
    0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 555, 0, 0,
    0, 0, 0, 0, 556, 557, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0,
    565, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576,
    0, 577, 0, 578, 0, 0, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0,
    0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0,
    0, 597, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0,
    609, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0,
    620, 0, 621, 622, 0, 623, 0, 0, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 632,
    0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0,
    0, 645, 0, 646, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 0,
    656, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 0, 0,
    0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0,
    0, 677, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 686,
    0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 692, 0, 693, 0, 694, 0, 0, 0, 695, 0, 696, 0, 697, 0, 698,
    0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 0, 0, 708, 0, 709, 0,
    710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 717, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0,
    0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0,
    0, 729, 0, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 734, 735, 0, 0, 736, 0, 737, 0, 738, 0, 0, 0, 739, 0,
    0, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749,
    0, 0, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 756, 757, 0, 0, 758,
    0, 759, 0, 0, 0, 760, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 0, 0, 767,
    0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0, 778, 0, 0, 0, 779,
    0, 780, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 787, 0, 0, 0, 0, 788, 0, 789, 0, 790,
    0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 0, 799, 0,
    0, 0, 800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0,
    807, 808, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 0, 824, 0, 825,
    0, 0, 826, 0, 827, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0,
    0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 843,
    0, 844, 0, 845, 0, 846, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 851, 0, 852, 0, 853, 0, 854,
    0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 0, 861, 0, 0,
    862, 0, 0, 0, 0, 863, 0, 864, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0,
    870, 0, 0, 871, 0, 872, 0, 873, 0, 874, 0, 875, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 878, 0, 879, 0, 880, 0, 0, 881, 0,
    882, 883, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0,
    0, 0, 887, 0, 888, 0, 0, 0, 889, 0, 890, 0, 0, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 0, 0, 896, 0, 0,
    0, 0, 0, 0, 0, 897, 0, 898, 0, 899, 0, 0, 0, 900, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 903, 0, 904,
    0, 905, 0, 0, 0, 906, 0, 0, 907, 0, 908, 0, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 912,
    0, 0, 913, 0, 914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 918, 0, 919, 0, 920, 0, 0, 0, 921, 0, 922, 0, 923, 0, 0, 0, 0, 0,
    0, 0, 924, 0, 925, 0, 0, 926, 0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 929, 930, 0, 931, 0, 0, 932, 0, 0, 933, 0, 0,
    934, 0, 935, 0, 936, 0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 941, 0, 0, 942, 0, 943, 0, 0, 944,
    0, 945, 0, 0, 0, 0, 946, 0, 947, 0, 0, 948, 0, 949, 0, 950, 0, 0, 951, 0, 952, 0, 953, 0, 0, 954, 0, 0, 955, 0, 0, 956,
    0, 957, 0, 958, 0, 0, 959, 0, 960, 0, 0, 0, 961, 0, 962, 0, 0, 0, 0, 963, 0, 964, 0, 965, 0, 0, 966, 0, 0, 967, 0, 968,
    0, 0, 969, 0, 970, 0, 971, 0, 972, 0, 0, 0, 973, 0, 974, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 977, 0, 978, 0, 0,
    979, 0, 980, 0, 981, 0, 0, 0, 982, 0, 983, 0, 984, 0, 0, 985, 0, 0, 986, 0, 0, 987, 0, 988, 0, 0, 0, 989, 0, 0, 0, 990,
    0, 991, 0, 0, 0, 992, 0, 0, 993, 0, 0, 994, 0, 995, 0, 0, 0, 996, 0, 0, 0, 0, 0, 0, 997, 0, 0, 0, 998, 0, 999, 0,
    0, 0, 1000, 0, 0, 1001, 0, 0, 0, 1002, 0, 1003, 0, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 1006, 0, 1007, 0, 0, 1008, 0, 1009, 0, 1010,
    0, 0, 0, 1011, 0, 1012, 0, 1013, 0, 0, 1014, 0, 0, 1015, 0, 1016, 0, 0, 1017, 0, 1018, 0, 0, 0, 1019, 0, 0, 0, 0, 0, 0, 0,
    1020, 0, 1021, 0, 1022, 0, 0, 0, 1023, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1024, 1025, 0, 0, 0, 1026, 0, 1027, 0, 0, 1028, 0, 1029,
    0, 0, 0, 1030, 0, 0, 1031, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 1034, 0, 0, 0, 1035, 0, 0, 1036, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1037, 0, 0, 0, 1038, 0, 1039, 0, 0, 1040, 0, 1041, 0, 1042, 0, 0, 0, 1043, 0, 0, 1044, 0, 0, 1045, 0, 1046, 0, 0,
    1047, 0, 1048, 0, 1049, 0, 0, 0, 1050, 0, 0, 1051, 0, 1052, 0, 1053, 0, 0, 1054, 0, 1055, 0, 1056, 0, 1057, 0, 1058, 0, 0, 0, 1059, 0,
    1060, 0, 1061, 0, 0, 1062, 0, 0, 0, 1063, 0, 0, 1064, 0, 0, 1065, 1066, 0, 0, 0, 0, 0, 1067, 0, 0, 0, 0, 0, 1068, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069, 0, 0, 1070, 0, 0, 0, 0, 0, 1071, 0, 0, 1072, 0, 0, 0, 0, 0, 1073, 0, 0,
    1074, 0, 1075, 0, 0, 1076, 0, 1077, 0, 0, 1078, 0, 1079, 0, 0, 1080, 0, 0, 1081, 0, 0, 1082, 0, 0, 0, 1083, 0, 0, 0, 0, 0, 0,
    1084, 0, 1085, 0, 0, 1086, 0, 1087, 0, 0, 0, 1088, 0, 1089, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 0, 0, 0, 1092, 0, 1093, 0, 0, 0,
    0, 0, 1094, 0, 0, 0, 0, 1095, 0, 1096, 0, 1097, 0, 0, 0, 1098, 0, 1099, 0, 0, 1100, 0, 1101, 0, 0, 1102, 0, 1103, 0, 0, 0, 0,
    0, 1104, 0, 1105, 0, 1106, 0, 1107, 0, 1108, 0, 0, 0, 1109, 0, 0, 0, 1110, 0, 0, 0, 1111, 0, 0, 0, 1112, 0, 1113, 0, 0, 0, 0,
    0, 1114, 0, 1115, 0, 1116, 0, 0, 0, 1117, 0, 1118, 0, 1119, 0, 0, 0, 1120, 0, 0, 1121, 0, 1122, 0, 1123, 0, 0, 0, 1124, 0, 1125, 0,
    0, 0, 0, 1126, 0, 0, 1127, 0, 1128, 0, 1129, 0, 0, 0, 0, 0, 1130, 0, 1131, 0, 0, 0, 0, 0, 0, 0, 1132, 1133, 0, 1134, 0, 0,
    1135, 0, 0, 1136, 0, 0, 1137, 0, 0, 1138, 0, 0, 1139, 0, 0, 0, 1140, 0, 0, 1141, 0, 0, 0, 1142, 0, 0, 0, 0, 0, 0, 1143, 0,
    0, 1144, 0, 0, 0, 0, 0, 0, 1145, 0, 0, 1146, 0, 0, 0, 0, 0, 1147, 0, 0, 1148, 0, 0, 0, 0, 0, 1149, 0, 0, 1150, 0, 0,
    1151, 0, 0, 0, 1152, 0, 0, 0, 0, 1153, 0, 0, 0, 1154, 0, 1155, 0, 1156, 0, 1157, 0, 0, 0, 0, 0, 1158, 0, 1159, 0, 0, 0, 0,
    0, 0, 0, 1160, 0, 0, 0, 1161, 0, 1162, 0, 1163, 0, 1164, 0, 0, 0, 1165, 0, 1166, 0, 0, 0, 0, 0, 1167, 0, 1168, 0, 1169, 0, 1170,
    0, 0, 0, 0, 0, 1171, 0, 0, 1172, 0, 0, 1173, 0, 0, 0, 1174, 0, 0, 0, 0, 1175, 0, 0, 0, 1176, 0, 1177, 0, 1178, 0, 0, 0,
    1179, 0, 1180, 0, 1181, 0, 0, 1182, 0, 0, 1183, 0, 1184, 0, 1185, 0, 0, 0, 1186, 0, 0, 0, 1187, 0, 0, 0, 0, 1188, 0, 1189, 0, 0,
    1190, 0, 1191, 0, 1192, 0, 0, 1193, 1194, 0, 1195, 0, 0, 0, 1196, 0, 1197, 0, 1198, 0, 1199, 0, 1200, 0, 0, 0, 1201, 0, 0, 0, 1202, 0,
    0, 0, 1203, 0, 0, 0, 1204, 0, 1205, 0, 0, 0, 1206, 0, 1207, 0, 1208, 0, 0, 0, 1209, 0, 0, 1210, 0, 1211, 0, 1212, 0, 0, 0, 1213,
    0, 1214, 0, 1215, 0, 1216, 0, 0, 1217, 0, 1218, 0, 1219, 0, 0, 0, 0, 1220, 0, 0, 1221, 0, 1222, 0, 1223, 0, 1224, 0, 1225, 0, 0, 1226,
    1227, 0, 1228, 1229, 1230, 0, 0, 0, 0, 1231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1232, 0, 0, 1233, 0, 1234, 0, 0, 0, 1235, 0,
    0, 1236, 0, 1237, 1238, 0, 0, 1239, 1240, 0, 0, 0, 0, 0, 0, 0, 1241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1242, 0, 0, 1243,
    0, 1244, 0, 0, 0, 1245, 0, 0, 1246, 0, 1247, 1248, 0, 0, 1249, 1250, 0, 0, 0, 0, 0, 0, 0, 1251, 0, 0, 0, 0, 0, 1252, 0, 0,
    1253, 0, 0, 1254, 0, 1255, 0, 1256, 0, 0, 0, 1257, 0, 1258, 0, 0, 0, 1259, 0, 0, 0, 0, 0, 0, 0, 0, 1260, 0, 0, 0, 1261, 0,
    1262, 0, 0, 0, 1263, 0, 0, 0, 0, 0, 0, 0, 1264, 0, 1265, 0, 0, 0, 1266, 0, 0, 0, 0, 0, 0, 0, 1267, 0, 1268, 0, 0, 0,
    1269, 0, 0, 1270, 0, 1271, 0, 0, 1272, 0, 0, 1273, 0, 1274, 0, 0, 1275, 0, 1276, 0, 1277, 0, 1278, 0, 0, 1279, 0, 0, 1280, 0, 0, 1281,
    0, 1282, 0, 1283, 0, 0, 0, 1284, 0, 1285, 0, 0, 0, 0, 0, 1286, 0, 0, 1287, 0, 1288, 0, 0, 1289, 0, 0, 1290, 0, 1291, 0, 1292, 0,
    0, 0, 1293, 0, 1294, 0, 0, 0, 0, 0, 1295, 0, 0, 1296, 0, 1297, 0, 1298, 0, 0, 1299, 0, 1300, 0, 1301, 0, 1302, 0, 1303, 0, 1304,
};
void recomp_unit_0162_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A8C004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0162[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A8C004;
    case 2u: goto L_08A8C01C;
    case 3u: goto L_08A8C024;
    case 4u: goto L_08A8C038;
    case 5u: goto L_08A8C040;
    case 6u: goto L_08A8C054;
    case 7u: goto L_08A8C05C;
    case 8u: goto L_08A8C070;
    case 9u: goto L_08A8C078;
    case 10u: goto L_08A8C088;
    case 11u: goto L_08A8C090;
    case 12u: goto L_08A8C0A0;
    case 13u: goto L_08A8C0B0;
    case 14u: goto L_08A8C0B4;
    case 15u: goto L_08A8C0BC;
    case 16u: goto L_08A8C0C4;
    case 17u: goto L_08A8C0CC;
    case 18u: goto L_08A8C0D4;
    case 19u: goto L_08A8C0E0;
    case 20u: goto L_08A8C0E8;
    case 21u: goto L_08A8C0F0;
    case 22u: goto L_08A8C0F8;
    case 23u: goto L_08A8C108;
    case 24u: goto L_08A8C114;
    case 25u: goto L_08A8C130;
    case 26u: goto L_08A8C138;
    case 27u: goto L_08A8C140;
    case 28u: goto L_08A8C150;
    case 29u: goto L_08A8C170;
    case 30u: goto L_08A8C178;
    case 31u: goto L_08A8C188;
    case 32u: goto L_08A8C198;
    case 33u: goto L_08A8C19C;
    case 34u: goto L_08A8C1A8;
    case 35u: goto L_08A8C1B0;
    case 36u: goto L_08A8C1BC;
    case 37u: goto L_08A8C1D4;
    case 38u: goto L_08A8C1DC;
    case 39u: goto L_08A8C1EC;
    case 40u: goto L_08A8C1F8;
    case 41u: goto L_08A8C204;
    case 42u: goto L_08A8C208;
    case 43u: goto L_08A8C210;
    case 44u: goto L_08A8C21C;
    case 45u: goto L_08A8C224;
    case 46u: goto L_08A8C22C;
    case 47u: goto L_08A8C238;
    case 48u: goto L_08A8C240;
    case 49u: goto L_08A8C24C;
    case 50u: goto L_08A8C254;
    case 51u: goto L_08A8C25C;
    case 52u: goto L_08A8C268;
    case 53u: goto L_08A8C274;
    case 54u: goto L_08A8C280;
    case 55u: goto L_08A8C288;
    case 56u: goto L_08A8C290;
    case 57u: goto L_08A8C2A8;
    case 58u: goto L_08A8C2B0;
    case 59u: goto L_08A8C2B8;
    case 60u: goto L_08A8C2C0;
    case 61u: goto L_08A8C2D0;
    case 62u: goto L_08A8C2D8;
    case 63u: goto L_08A8C2E0;
    case 64u: goto L_08A8C2EC;
    case 65u: goto L_08A8C2F8;
    case 66u: goto L_08A8C300;
    case 67u: goto L_08A8C310;
    case 68u: goto L_08A8C318;
    case 69u: goto L_08A8C320;
    case 70u: goto L_08A8C328;
    case 71u: goto L_08A8C334;
    case 72u: goto L_08A8C33C;
    case 73u: goto L_08A8C344;
    case 74u: goto L_08A8C35C;
    case 75u: goto L_08A8C368;
    case 76u: goto L_08A8C37C;
    case 77u: goto L_08A8C388;
    case 78u: goto L_08A8C390;
    case 79u: goto L_08A8C398;
    case 80u: goto L_08A8C3A8;
    case 81u: goto L_08A8C3B0;
    case 82u: goto L_08A8C3C0;
    case 83u: goto L_08A8C3C8;
    case 84u: goto L_08A8C3D4;
    case 85u: goto L_08A8C3DC;
    case 86u: goto L_08A8C3E4;
    case 87u: goto L_08A8C3EC;
    case 88u: goto L_08A8C3FC;
    case 89u: goto L_08A8C404;
    case 90u: goto L_08A8C40C;
    case 91u: goto L_08A8C418;
    case 92u: goto L_08A8C424;
    case 93u: goto L_08A8C438;
    case 94u: goto L_08A8C440;
    case 95u: goto L_08A8C450;
    case 96u: goto L_08A8C458;
    case 97u: goto L_08A8C460;
    case 98u: goto L_08A8C468;
    case 99u: goto L_08A8C480;
    case 100u: goto L_08A8C488;
    case 101u: goto L_08A8C498;
    case 102u: goto L_08A8C4A0;
    case 103u: goto L_08A8C4A8;
    case 104u: goto L_08A8C4B8;
    case 105u: goto L_08A8C4C0;
    case 106u: goto L_08A8C4CC;
    case 107u: goto L_08A8C4E4;
    case 108u: goto L_08A8C4FC;
    case 109u: goto L_08A8C504;
    case 110u: goto L_08A8C50C;
    case 111u: goto L_08A8C518;
    case 112u: goto L_08A8C520;
    case 113u: goto L_08A8C528;
    case 114u: goto L_08A8C540;
    case 115u: goto L_08A8C548;
    case 116u: goto L_08A8C550;
    case 117u: goto L_08A8C55C;
    case 118u: goto L_08A8C564;
    case 119u: goto L_08A8C574;
    case 120u: goto L_08A8C578;
    case 121u: goto L_08A8C584;
    case 122u: goto L_08A8C590;
    case 123u: goto L_08A8C598;
    case 124u: goto L_08A8C5A0;
    case 125u: goto L_08A8C5A8;
    case 126u: goto L_08A8C5B0;
    case 127u: goto L_08A8C5C0;
    case 128u: goto L_08A8C5C8;
    case 129u: goto L_08A8C5D0;
    case 130u: goto L_08A8C5DC;
    case 131u: goto L_08A8C5E4;
    case 132u: goto L_08A8C5E8;
    case 133u: goto L_08A8C600;
    case 134u: goto L_08A8C614;
    case 135u: goto L_08A8C62C;
    case 136u: goto L_08A8C638;
    case 137u: goto L_08A8C640;
    case 138u: goto L_08A8C648;
    case 139u: goto L_08A8C658;
    case 140u: goto L_08A8C660;
    case 141u: goto L_08A8C668;
    case 142u: goto L_08A8C674;
    case 143u: goto L_08A8C67C;
    case 144u: goto L_08A8C684;
    case 145u: goto L_08A8C68C;
    case 146u: goto L_08A8C694;
    case 147u: goto L_08A8C69C;
    case 148u: goto L_08A8C6A4;
    case 149u: goto L_08A8C6A8;
    case 150u: goto L_08A8C6B8;
    case 151u: goto L_08A8C6D0;
    case 152u: goto L_08A8C6DC;
    case 153u: goto L_08A8C6E4;
    case 154u: goto L_08A8C6EC;
    case 155u: goto L_08A8C6FC;
    case 156u: goto L_08A8C704;
    case 157u: goto L_08A8C70C;
    case 158u: goto L_08A8C718;
    case 159u: goto L_08A8C720;
    case 160u: goto L_08A8C728;
    case 161u: goto L_08A8C730;
    case 162u: goto L_08A8C738;
    case 163u: goto L_08A8C740;
    case 164u: goto L_08A8C748;
    case 165u: goto L_08A8C74C;
    case 166u: goto L_08A8C75C;
    case 167u: goto L_08A8C79C;
    case 168u: goto L_08A8C7A4;
    case 169u: goto L_08A8C7C0;
    case 170u: goto L_08A8C7DC;
    case 171u: goto L_08A8C7E4;
    case 172u: goto L_08A8C7F4;
    case 173u: goto L_08A8C7FC;
    case 174u: goto L_08A8C80C;
    case 175u: goto L_08A8C838;
    case 176u: goto L_08A8C848;
    case 177u: goto L_08A8C85C;
    case 178u: goto L_08A8C868;
    case 179u: goto L_08A8C870;
    case 180u: goto L_08A8C878;
    case 181u: goto L_08A8C888;
    case 182u: goto L_08A8C898;
    case 183u: goto L_08A8C8B4;
    case 184u: goto L_08A8C8C0;
    case 185u: goto L_08A8C8CC;
    case 186u: goto L_08A8C8DC;
    case 187u: goto L_08A8C8E4;
    case 188u: goto L_08A8C8F4;
    case 189u: goto L_08A8C910;
    case 190u: goto L_08A8C914;
    case 191u: goto L_08A8C92C;
    case 192u: goto L_08A8C934;
    case 193u: goto L_08A8C944;
    case 194u: goto L_08A8C950;
    case 195u: goto L_08A8C958;
    case 196u: goto L_08A8C968;
    case 197u: goto L_08A8C974;
    case 198u: goto L_08A8C97C;
    case 199u: goto L_08A8C988;
    case 200u: goto L_08A8C994;
    case 201u: goto L_08A8C99C;
    case 202u: goto L_08A8C9A8;
    case 203u: goto L_08A8C9B0;
    case 204u: goto L_08A8C9BC;
    case 205u: goto L_08A8C9C8;
    case 206u: goto L_08A8C9D0;
    case 207u: goto L_08A8C9DC;
    case 208u: goto L_08A8C9E4;
    case 209u: goto L_08A8C9F0;
    case 210u: goto L_08A8C9FC;
    case 211u: goto L_08A8CA04;
    case 212u: goto L_08A8CA14;
    case 213u: goto L_08A8CA1C;
    case 214u: goto L_08A8CA28;
    case 215u: goto L_08A8CA30;
    case 216u: goto L_08A8CA38;
    case 217u: goto L_08A8CA48;
    case 218u: goto L_08A8CA50;
    case 219u: goto L_08A8CA60;
    case 220u: goto L_08A8CA68;
    case 221u: goto L_08A8CA74;
    case 222u: goto L_08A8CA7C;
    case 223u: goto L_08A8CA84;
    case 224u: goto L_08A8CA94;
    case 225u: goto L_08A8CA9C;
    case 226u: goto L_08A8CAA4;
    case 227u: goto L_08A8CAB8;
    case 228u: goto L_08A8CAC0;
    case 229u: goto L_08A8CAD4;
    case 230u: goto L_08A8CAE0;
    case 231u: goto L_08A8CAE8;
    case 232u: goto L_08A8CAFC;
    case 233u: goto L_08A8CB04;
    case 234u: goto L_08A8CB0C;
    case 235u: goto L_08A8CB20;
    case 236u: goto L_08A8CB28;
    case 237u: goto L_08A8CB30;
    case 238u: goto L_08A8CB3C;
    case 239u: goto L_08A8CB48;
    case 240u: goto L_08A8CB54;
    case 241u: goto L_08A8CB5C;
    case 242u: goto L_08A8CB64;
    case 243u: goto L_08A8CB70;
    case 244u: goto L_08A8CB78;
    case 245u: goto L_08A8CB8C;
    case 246u: goto L_08A8CB94;
    case 247u: goto L_08A8CBA4;
    case 248u: goto L_08A8CBAC;
    case 249u: goto L_08A8CBC4;
    case 250u: goto L_08A8CBE0;
    case 251u: goto L_08A8CBEC;
    case 252u: goto L_08A8CBF4;
    case 253u: goto L_08A8CBFC;
    case 254u: goto L_08A8CC08;
    case 255u: goto L_08A8CC10;
    case 256u: goto L_08A8CC24;
    case 257u: goto L_08A8CC30;
    case 258u: goto L_08A8CC3C;
    case 259u: goto L_08A8CC44;
    case 260u: goto L_08A8CC4C;
    case 261u: goto L_08A8CC58;
    case 262u: goto L_08A8CC60;
    case 263u: goto L_08A8CC74;
    case 264u: goto L_08A8CC80;
    case 265u: goto L_08A8CC8C;
    case 266u: goto L_08A8CC90;
    case 267u: goto L_08A8CC98;
    case 268u: goto L_08A8CCA8;
    case 269u: goto L_08A8CCB0;
    case 270u: goto L_08A8CCB8;
    case 271u: goto L_08A8CCC0;
    case 272u: goto L_08A8CCCC;
    case 273u: goto L_08A8CCD4;
    case 274u: goto L_08A8CCE8;
    case 275u: goto L_08A8CCF0;
    case 276u: goto L_08A8CD00;
    case 277u: goto L_08A8CD08;
    case 278u: goto L_08A8CD10;
    case 279u: goto L_08A8CD18;
    case 280u: goto L_08A8CD24;
    case 281u: goto L_08A8CD2C;
    case 282u: goto L_08A8CD34;
    case 283u: goto L_08A8CD44;
    case 284u: goto L_08A8CD4C;
    case 285u: goto L_08A8CD54;
    case 286u: goto L_08A8CD5C;
    case 287u: goto L_08A8CD6C;
    case 288u: goto L_08A8CD74;
    case 289u: goto L_08A8CD84;
    case 290u: goto L_08A8CD8C;
    case 291u: goto L_08A8CD98;
    case 292u: goto L_08A8CDA0;
    case 293u: goto L_08A8CDA8;
    case 294u: goto L_08A8CDB4;
    case 295u: goto L_08A8CDBC;
    case 296u: goto L_08A8CDC4;
    case 297u: goto L_08A8CDD4;
    case 298u: goto L_08A8CDDC;
    case 299u: goto L_08A8CDEC;
    case 300u: goto L_08A8CE00;
    case 301u: goto L_08A8CE10;
    case 302u: goto L_08A8CE18;
    case 303u: goto L_08A8CE24;
    case 304u: goto L_08A8CE38;
    case 305u: goto L_08A8CE40;
    case 306u: goto L_08A8CE54;
    case 307u: goto L_08A8CE5C;
    case 308u: goto L_08A8CE64;
    case 309u: goto L_08A8CE78;
    case 310u: goto L_08A8CE80;
    case 311u: goto L_08A8CE88;
    case 312u: goto L_08A8CE9C;
    case 313u: goto L_08A8CEA4;
    case 314u: goto L_08A8CEAC;
    case 315u: goto L_08A8CEB8;
    case 316u: goto L_08A8CEC0;
    case 317u: goto L_08A8CEC8;
    case 318u: goto L_08A8CED4;
    case 319u: goto L_08A8CEE0;
    case 320u: goto L_08A8CEEC;
    case 321u: goto L_08A8CEF4;
    case 322u: goto L_08A8CEFC;
    case 323u: goto L_08A8CF08;
    case 324u: goto L_08A8CF10;
    case 325u: goto L_08A8CF18;
    case 326u: goto L_08A8CF28;
    case 327u: goto L_08A8CF30;
    case 328u: goto L_08A8CF40;
    case 329u: goto L_08A8CF4C;
    case 330u: goto L_08A8CF60;
    case 331u: goto L_08A8CF68;
    case 332u: goto L_08A8CF74;
    case 333u: goto L_08A8CF80;
    case 334u: goto L_08A8CF88;
    case 335u: goto L_08A8CF94;
    case 336u: goto L_08A8CF9C;
    case 337u: goto L_08A8CFB0;
    case 338u: goto L_08A8CFB8;
    case 339u: goto L_08A8CFC8;
    case 340u: goto L_08A8CFD4;
    case 341u: goto L_08A8CFE0;
    case 342u: goto L_08A8CFE8;
    case 343u: goto L_08A8CFEC;
    case 344u: goto L_08A8CFF4;
    case 345u: goto L_08A8CFFC;
    case 346u: goto L_08A8D00C;
    case 347u: goto L_08A8D014;
    case 348u: goto L_08A8D01C;
    case 349u: goto L_08A8D024;
    case 350u: goto L_08A8D030;
    case 351u: goto L_08A8D038;
    case 352u: goto L_08A8D04C;
    case 353u: goto L_08A8D054;
    case 354u: goto L_08A8D064;
    case 355u: goto L_08A8D06C;
    case 356u: goto L_08A8D074;
    case 357u: goto L_08A8D088;
    case 358u: goto L_08A8D090;
    case 359u: goto L_08A8D098;
    case 360u: goto L_08A8D0AC;
    case 361u: goto L_08A8D0B8;
    case 362u: goto L_08A8D0C0;
    case 363u: goto L_08A8D0D0;
    case 364u: goto L_08A8D0D8;
    case 365u: goto L_08A8D0E8;
    case 366u: goto L_08A8D0F0;
    case 367u: goto L_08A8D100;
    case 368u: goto L_08A8D108;
    case 369u: goto L_08A8D128;
    case 370u: goto L_08A8D138;
    case 371u: goto L_08A8D140;
    case 372u: goto L_08A8D148;
    case 373u: goto L_08A8D158;
    case 374u: goto L_08A8D164;
    case 375u: goto L_08A8D16C;
    case 376u: goto L_08A8D180;
    case 377u: goto L_08A8D184;
    case 378u: goto L_08A8D18C;
    case 379u: goto L_08A8D194;
    case 380u: goto L_08A8D1A0;
    case 381u: goto L_08A8D1A8;
    case 382u: goto L_08A8D1B0;
    case 383u: goto L_08A8D1C0;
    case 384u: goto L_08A8D1C8;
    case 385u: goto L_08A8D1D0;
    case 386u: goto L_08A8D1DC;
    case 387u: goto L_08A8D1F0;
    case 388u: goto L_08A8D1F8;
    case 389u: goto L_08A8D208;
    case 390u: goto L_08A8D214;
    case 391u: goto L_08A8D218;
    case 392u: goto L_08A8D220;
    case 393u: goto L_08A8D228;
    case 394u: goto L_08A8D238;
    case 395u: goto L_08A8D258;
    case 396u: goto L_08A8D264;
    case 397u: goto L_08A8D26C;
    case 398u: goto L_08A8D27C;
    case 399u: goto L_08A8D28C;
    case 400u: goto L_08A8D294;
    case 401u: goto L_08A8D29C;
    case 402u: goto L_08A8D2A8;
    case 403u: goto L_08A8D2B0;
    case 404u: goto L_08A8D2B8;
    case 405u: goto L_08A8D2C8;
    case 406u: goto L_08A8D2D8;
    case 407u: goto L_08A8D2E0;
    case 408u: goto L_08A8D2EC;
    case 409u: goto L_08A8D2F4;
    case 410u: goto L_08A8D304;
    case 411u: goto L_08A8D31C;
    case 412u: goto L_08A8D324;
    case 413u: goto L_08A8D334;
    case 414u: goto L_08A8D344;
    case 415u: goto L_08A8D348;
    case 416u: goto L_08A8D350;
    case 417u: goto L_08A8D358;
    case 418u: goto L_08A8D360;
    case 419u: goto L_08A8D36C;
    case 420u: goto L_08A8D374;
    case 421u: goto L_08A8D37C;
    case 422u: goto L_08A8D38C;
    case 423u: goto L_08A8D39C;
    case 424u: goto L_08A8D3B8;
    case 425u: goto L_08A8D3C0;
    case 426u: goto L_08A8D3C8;
    case 427u: goto L_08A8D3D8;
    case 428u: goto L_08A8D3F8;
    case 429u: goto L_08A8D400;
    case 430u: goto L_08A8D410;
    case 431u: goto L_08A8D420;
    case 432u: goto L_08A8D428;
    case 433u: goto L_08A8D430;
    case 434u: goto L_08A8D440;
    case 435u: goto L_08A8D450;
    case 436u: goto L_08A8D46C;
    case 437u: goto L_08A8D474;
    case 438u: goto L_08A8D47C;
    case 439u: goto L_08A8D48C;
    case 440u: goto L_08A8D4A0;
    case 441u: goto L_08A8D4A4;
    case 442u: goto L_08A8D4B0;
    case 443u: goto L_08A8D4B8;
    case 444u: goto L_08A8D4C4;
    case 445u: goto L_08A8D4D4;
    case 446u: goto L_08A8D4DC;
    case 447u: goto L_08A8D4E8;
    case 448u: goto L_08A8D4F0;
    case 449u: goto L_08A8D50C;
    case 450u: goto L_08A8D518;
    case 451u: goto L_08A8D520;
    case 452u: goto L_08A8D530;
    case 453u: goto L_08A8D53C;
    case 454u: goto L_08A8D544;
    case 455u: goto L_08A8D550;
    case 456u: goto L_08A8D558;
    case 457u: goto L_08A8D560;
    case 458u: goto L_08A8D570;
    case 459u: goto L_08A8D578;
    case 460u: goto L_08A8D580;
    case 461u: goto L_08A8D58C;
    case 462u: goto L_08A8D594;
    case 463u: goto L_08A8D5A8;
    case 464u: goto L_08A8D5B0;
    case 465u: goto L_08A8D5BC;
    case 466u: goto L_08A8D5C4;
    case 467u: goto L_08A8D5D4;
    case 468u: goto L_08A8D5E0;
    case 469u: goto L_08A8D5F4;
    case 470u: goto L_08A8D5FC;
    case 471u: goto L_08A8D604;
    case 472u: goto L_08A8D618;
    case 473u: goto L_08A8D624;
    case 474u: goto L_08A8D62C;
    case 475u: goto L_08A8D63C;
    case 476u: goto L_08A8D644;
    case 477u: goto L_08A8D654;
    case 478u: goto L_08A8D65C;
    case 479u: goto L_08A8D66C;
    case 480u: goto L_08A8D674;
    case 481u: goto L_08A8D694;
    case 482u: goto L_08A8D6A4;
    case 483u: goto L_08A8D6AC;
    case 484u: goto L_08A8D6B4;
    case 485u: goto L_08A8D6C4;
    case 486u: goto L_08A8D6D0;
    case 487u: goto L_08A8D6D8;
    case 488u: goto L_08A8D6EC;
    case 489u: goto L_08A8D6F4;
    case 490u: goto L_08A8D6FC;
    case 491u: goto L_08A8D708;
    case 492u: goto L_08A8D710;
    case 493u: goto L_08A8D718;
    case 494u: goto L_08A8D720;
    case 495u: goto L_08A8D728;
    case 496u: goto L_08A8D738;
    case 497u: goto L_08A8D740;
    case 498u: goto L_08A8D748;
    case 499u: goto L_08A8D754;
    case 500u: goto L_08A8D75C;
    case 501u: goto L_08A8D768;
    case 502u: goto L_08A8D770;
    case 503u: goto L_08A8D778;
    case 504u: goto L_08A8D780;
    case 505u: goto L_08A8D788;
    case 506u: goto L_08A8D790;
    case 507u: goto L_08A8D798;
    case 508u: goto L_08A8D7AC;
    case 509u: goto L_08A8D7BC;
    case 510u: goto L_08A8D7C4;
    case 511u: goto L_08A8D7CC;
    case 512u: goto L_08A8D7D4;
    case 513u: goto L_08A8D7D8;
    case 514u: goto L_08A8D7DC;
    case 515u: goto L_08A8D800;
    case 516u: goto L_08A8D814;
    case 517u: goto L_08A8D840;
    case 518u: goto L_08A8D854;
    case 519u: goto L_08A8D870;
    case 520u: goto L_08A8D878;
    case 521u: goto L_08A8D888;
    case 522u: goto L_08A8D890;
    case 523u: goto L_08A8D8A0;
    case 524u: goto L_08A8D8A8;
    case 525u: goto L_08A8D8B0;
    case 526u: goto L_08A8D8B8;
    case 527u: goto L_08A8D8C0;
    case 528u: goto L_08A8D8C8;
    case 529u: goto L_08A8D8D0;
    case 530u: goto L_08A8D8EC;
    case 531u: goto L_08A8D8F4;
    case 532u: goto L_08A8D910;
    case 533u: goto L_08A8D918;
    case 534u: goto L_08A8D930;
    case 535u: goto L_08A8D95C;
    case 536u: goto L_08A8D96C;
    case 537u: goto L_08A8D980;
    case 538u: goto L_08A8D988;
    case 539u: goto L_08A8D990;
    case 540u: goto L_08A8D9A0;
    case 541u: goto L_08A8D9B0;
    case 542u: goto L_08A8D9CC;
    case 543u: goto L_08A8D9D8;
    case 544u: goto L_08A8D9E4;
    case 545u: goto L_08A8D9EC;
    case 546u: goto L_08A8D9F4;
    case 547u: goto L_08A8D9FC;
    case 548u: goto L_08A8DA0C;
    case 549u: goto L_08A8DA1C;
    case 550u: goto L_08A8DA38;
    case 551u: goto L_08A8DA44;
    case 552u: goto L_08A8DA50;
    case 553u: goto L_08A8DA60;
    case 554u: goto L_08A8DA68;
    case 555u: goto L_08A8DA78;
    case 556u: goto L_08A8DA94;
    case 557u: goto L_08A8DA98;
    case 558u: goto L_08A8DAB0;
    case 559u: goto L_08A8DAB8;
    case 560u: goto L_08A8DAC8;
    case 561u: goto L_08A8DAD8;
    case 562u: goto L_08A8DAE0;
    case 563u: goto L_08A8DAF0;
    case 564u: goto L_08A8DAFC;
    case 565u: goto L_08A8DB04;
    case 566u: goto L_08A8DB10;
    case 567u: goto L_08A8DB20;
    case 568u: goto L_08A8DB28;
    case 569u: goto L_08A8DB34;
    case 570u: goto L_08A8DB3C;
    case 571u: goto L_08A8DB44;
    case 572u: goto L_08A8DB50;
    case 573u: goto L_08A8DB5C;
    case 574u: goto L_08A8DB68;
    case 575u: goto L_08A8DB74;
    case 576u: goto L_08A8DB80;
    case 577u: goto L_08A8DB88;
    case 578u: goto L_08A8DB90;
    case 579u: goto L_08A8DBA0;
    case 580u: goto L_08A8DBA8;
    case 581u: goto L_08A8DBB0;
    case 582u: goto L_08A8DBB8;
    case 583u: goto L_08A8DBD0;
    case 584u: goto L_08A8DBD8;
    case 585u: goto L_08A8DBE8;
    case 586u: goto L_08A8DBF0;
    case 587u: goto L_08A8DC10;
    case 588u: goto L_08A8DC18;
    case 589u: goto L_08A8DC28;
    case 590u: goto L_08A8DC30;
    case 591u: goto L_08A8DC38;
    case 592u: goto L_08A8DC44;
    case 593u: goto L_08A8DC50;
    case 594u: goto L_08A8DC58;
    case 595u: goto L_08A8DC70;
    case 596u: goto L_08A8DC7C;
    case 597u: goto L_08A8DC88;
    case 598u: goto L_08A8DC90;
    case 599u: goto L_08A8DC9C;
    case 600u: goto L_08A8DCA4;
    case 601u: goto L_08A8DCB4;
    case 602u: goto L_08A8DCBC;
    case 603u: goto L_08A8DCC4;
    case 604u: goto L_08A8DCD0;
    case 605u: goto L_08A8DCDC;
    case 606u: goto L_08A8DCE4;
    case 607u: goto L_08A8DCEC;
    case 608u: goto L_08A8DCFC;
    case 609u: goto L_08A8DD04;
    case 610u: goto L_08A8DD14;
    case 611u: goto L_08A8DD1C;
    case 612u: goto L_08A8DD28;
    case 613u: goto L_08A8DD30;
    case 614u: goto L_08A8DD40;
    case 615u: goto L_08A8DD48;
    case 616u: goto L_08A8DD58;
    case 617u: goto L_08A8DD64;
    case 618u: goto L_08A8DD6C;
    case 619u: goto L_08A8DD78;
    case 620u: goto L_08A8DD84;
    case 621u: goto L_08A8DD8C;
    case 622u: goto L_08A8DD90;
    case 623u: goto L_08A8DD98;
    case 624u: goto L_08A8DDA8;
    case 625u: goto L_08A8DDB0;
    case 626u: goto L_08A8DDB8;
    case 627u: goto L_08A8DDC0;
    case 628u: goto L_08A8DDD8;
    case 629u: goto L_08A8DDE0;
    case 630u: goto L_08A8DDF0;
    case 631u: goto L_08A8DDF8;
    case 632u: goto L_08A8DE00;
    case 633u: goto L_08A8DE08;
    case 634u: goto L_08A8DE14;
    case 635u: goto L_08A8DE1C;
    case 636u: goto L_08A8DE24;
    case 637u: goto L_08A8DE34;
    case 638u: goto L_08A8DE3C;
    case 639u: goto L_08A8DE44;
    case 640u: goto L_08A8DE4C;
    case 641u: goto L_08A8DE5C;
    case 642u: goto L_08A8DE64;
    case 643u: goto L_08A8DE74;
    case 644u: goto L_08A8DE7C;
    case 645u: goto L_08A8DE88;
    case 646u: goto L_08A8DE90;
    case 647u: goto L_08A8DE98;
    case 648u: goto L_08A8DEA8;
    case 649u: goto L_08A8DEB0;
    case 650u: goto L_08A8DEC4;
    case 651u: goto L_08A8DECC;
    case 652u: goto L_08A8DEDC;
    case 653u: goto L_08A8DEE4;
    case 654u: goto L_08A8DEEC;
    case 655u: goto L_08A8DEF8;
    case 656u: goto L_08A8DF04;
    case 657u: goto L_08A8DF10;
    case 658u: goto L_08A8DF18;
    case 659u: goto L_08A8DF2C;
    case 660u: goto L_08A8DF38;
    case 661u: goto L_08A8DF4C;
    case 662u: goto L_08A8DF58;
    case 663u: goto L_08A8DF64;
    case 664u: goto L_08A8DF6C;
    case 665u: goto L_08A8DF74;
    case 666u: goto L_08A8DF88;
    case 667u: goto L_08A8DF90;
    case 668u: goto L_08A8DF98;
    case 669u: goto L_08A8DFAC;
    case 670u: goto L_08A8DFB4;
    case 671u: goto L_08A8DFBC;
    case 672u: goto L_08A8DFC8;
    case 673u: goto L_08A8DFD4;
    case 674u: goto L_08A8DFE0;
    case 675u: goto L_08A8DFE8;
    case 676u: goto L_08A8DFF0;
    case 677u: goto L_08A8E008;
    case 678u: goto L_08A8E010;
    case 679u: goto L_08A8E020;
    case 680u: goto L_08A8E028;
    case 681u: goto L_08A8E038;
    case 682u: goto L_08A8E044;
    case 683u: goto L_08A8E054;
    case 684u: goto L_08A8E05C;
    case 685u: goto L_08A8E074;
    case 686u: goto L_08A8E080;
    case 687u: goto L_08A8E088;
    case 688u: goto L_08A8E090;
    case 689u: goto L_08A8E0A8;
    case 690u: goto L_08A8E0B8;
    case 691u: goto L_08A8E0C4;
    case 692u: goto L_08A8E0C8;
    case 693u: goto L_08A8E0D0;
    case 694u: goto L_08A8E0D8;
    case 695u: goto L_08A8E0E8;
    case 696u: goto L_08A8E0F0;
    case 697u: goto L_08A8E0F8;
    case 698u: goto L_08A8E100;
    case 699u: goto L_08A8E118;
    case 700u: goto L_08A8E120;
    case 701u: goto L_08A8E130;
    case 702u: goto L_08A8E138;
    case 703u: goto L_08A8E140;
    case 704u: goto L_08A8E148;
    case 705u: goto L_08A8E154;
    case 706u: goto L_08A8E15C;
    case 707u: goto L_08A8E164;
    case 708u: goto L_08A8E174;
    case 709u: goto L_08A8E17C;
    case 710u: goto L_08A8E184;
    case 711u: goto L_08A8E190;
    case 712u: goto L_08A8E1A4;
    case 713u: goto L_08A8E1AC;
    case 714u: goto L_08A8E1BC;
    case 715u: goto L_08A8E1C8;
    case 716u: goto L_08A8E1D4;
    case 717u: goto L_08A8E1D8;
    case 718u: goto L_08A8E1E0;
    case 719u: goto L_08A8E1E8;
    case 720u: goto L_08A8E1F8;
    case 721u: goto L_08A8E218;
    case 722u: goto L_08A8E220;
    case 723u: goto L_08A8E22C;
    case 724u: goto L_08A8E234;
    case 725u: goto L_08A8E244;
    case 726u: goto L_08A8E254;
    case 727u: goto L_08A8E270;
    case 728u: goto L_08A8E278;
    case 729u: goto L_08A8E288;
    case 730u: goto L_08A8E298;
    case 731u: goto L_08A8E2A0;
    case 732u: goto L_08A8E2B0;
    case 733u: goto L_08A8E2C4;
    case 734u: goto L_08A8E2CC;
    case 735u: goto L_08A8E2D0;
    case 736u: goto L_08A8E2DC;
    case 737u: goto L_08A8E2E4;
    case 738u: goto L_08A8E2EC;
    case 739u: goto L_08A8E2FC;
    case 740u: goto L_08A8E30C;
    case 741u: goto L_08A8E314;
    case 742u: goto L_08A8E320;
    case 743u: goto L_08A8E328;
    case 744u: goto L_08A8E338;
    case 745u: goto L_08A8E350;
    case 746u: goto L_08A8E358;
    case 747u: goto L_08A8E368;
    case 748u: goto L_08A8E378;
    case 749u: goto L_08A8E380;
    case 750u: goto L_08A8E390;
    case 751u: goto L_08A8E3A0;
    case 752u: goto L_08A8E3BC;
    case 753u: goto L_08A8E3C4;
    case 754u: goto L_08A8E3CC;
    case 755u: goto L_08A8E3DC;
    case 756u: goto L_08A8E3F0;
    case 757u: goto L_08A8E3F4;
    case 758u: goto L_08A8E400;
    case 759u: goto L_08A8E408;
    case 760u: goto L_08A8E418;
    case 761u: goto L_08A8E428;
    case 762u: goto L_08A8E430;
    case 763u: goto L_08A8E440;
    case 764u: goto L_08A8E45C;
    case 765u: goto L_08A8E464;
    case 766u: goto L_08A8E470;
    case 767u: goto L_08A8E480;
    case 768u: goto L_08A8E488;
    case 769u: goto L_08A8E494;
    case 770u: goto L_08A8E49C;
    case 771u: goto L_08A8E4A4;
    case 772u: goto L_08A8E4B4;
    case 773u: goto L_08A8E4C0;
    case 774u: goto L_08A8E4CC;
    case 775u: goto L_08A8E4D4;
    case 776u: goto L_08A8E4E0;
    case 777u: goto L_08A8E4E8;
    case 778u: goto L_08A8E4F0;
    case 779u: goto L_08A8E500;
    case 780u: goto L_08A8E508;
    case 781u: goto L_08A8E510;
    case 782u: goto L_08A8E51C;
    case 783u: goto L_08A8E528;
    case 784u: goto L_08A8E538;
    case 785u: goto L_08A8E540;
    case 786u: goto L_08A8E550;
    case 787u: goto L_08A8E55C;
    case 788u: goto L_08A8E570;
    case 789u: goto L_08A8E578;
    case 790u: goto L_08A8E580;
    case 791u: goto L_08A8E590;
    case 792u: goto L_08A8E5A0;
    case 793u: goto L_08A8E5BC;
    case 794u: goto L_08A8E5C8;
    case 795u: goto L_08A8E5D4;
    case 796u: goto L_08A8E5DC;
    case 797u: goto L_08A8E5E4;
    case 798u: goto L_08A8E5EC;
    case 799u: goto L_08A8E5FC;
    case 800u: goto L_08A8E60C;
    case 801u: goto L_08A8E628;
    case 802u: goto L_08A8E634;
    case 803u: goto L_08A8E640;
    case 804u: goto L_08A8E650;
    case 805u: goto L_08A8E658;
    case 806u: goto L_08A8E668;
    case 807u: goto L_08A8E684;
    case 808u: goto L_08A8E688;
    case 809u: goto L_08A8E690;
    case 810u: goto L_08A8E6A0;
    case 811u: goto L_08A8E6B0;
    case 812u: goto L_08A8E6C8;
    case 813u: goto L_08A8E6D0;
    case 814u: goto L_08A8E6E0;
    case 815u: goto L_08A8E70C;
    case 816u: goto L_08A8E714;
    case 817u: goto L_08A8E724;
    case 818u: goto L_08A8E730;
    case 819u: goto L_08A8E738;
    case 820u: goto L_08A8E748;
    case 821u: goto L_08A8E754;
    case 822u: goto L_08A8E75C;
    case 823u: goto L_08A8E768;
    case 824u: goto L_08A8E778;
    case 825u: goto L_08A8E780;
    case 826u: goto L_08A8E78C;
    case 827u: goto L_08A8E794;
    case 828u: goto L_08A8E79C;
    case 829u: goto L_08A8E7AC;
    case 830u: goto L_08A8E7B8;
    case 831u: goto L_08A8E7C0;
    case 832u: goto L_08A8E7D0;
    case 833u: goto L_08A8E7D8;
    case 834u: goto L_08A8E7E0;
    case 835u: goto L_08A8E7E8;
    case 836u: goto L_08A8E7F8;
    case 837u: goto L_08A8E808;
    case 838u: goto L_08A8E824;
    case 839u: goto L_08A8E834;
    case 840u: goto L_08A8E848;
    case 841u: goto L_08A8E850;
    case 842u: goto L_08A8E868;
    case 843u: goto L_08A8E880;
    case 844u: goto L_08A8E888;
    case 845u: goto L_08A8E890;
    case 846u: goto L_08A8E898;
    case 847u: goto L_08A8E8A0;
    case 848u: goto L_08A8E8B8;
    case 849u: goto L_08A8E8D0;
    case 850u: goto L_08A8E8D8;
    case 851u: goto L_08A8E8E8;
    case 852u: goto L_08A8E8F0;
    case 853u: goto L_08A8E8F8;
    case 854u: goto L_08A8E900;
    case 855u: goto L_08A8E910;
    case 856u: goto L_08A8E920;
    case 857u: goto L_08A8E93C;
    case 858u: goto L_08A8E948;
    case 859u: goto L_08A8E950;
    case 860u: goto L_08A8E968;
    case 861u: goto L_08A8E978;
    case 862u: goto L_08A8E984;
    case 863u: goto L_08A8E998;
    case 864u: goto L_08A8E9A0;
    case 865u: goto L_08A8E9A8;
    case 866u: goto L_08A8E9C0;
    case 867u: goto L_08A8E9D8;
    case 868u: goto L_08A8E9F0;
    case 869u: goto L_08A8E9FC;
    case 870u: goto L_08A8EA04;
    case 871u: goto L_08A8EA10;
    case 872u: goto L_08A8EA18;
    case 873u: goto L_08A8EA20;
    case 874u: goto L_08A8EA28;
    case 875u: goto L_08A8EA30;
    case 876u: goto L_08A8EA48;
    case 877u: goto L_08A8EA50;
    case 878u: goto L_08A8EA60;
    case 879u: goto L_08A8EA68;
    case 880u: goto L_08A8EA70;
    case 881u: goto L_08A8EA7C;
    case 882u: goto L_08A8EA84;
    case 883u: goto L_08A8EA88;
    case 884u: goto L_08A8EAAC;
    case 885u: goto L_08A8EAC8;
    case 886u: goto L_08A8EAF0;
    case 887u: goto L_08A8EB0C;
    case 888u: goto L_08A8EB14;
    case 889u: goto L_08A8EB24;
    case 890u: goto L_08A8EB2C;
    case 891u: goto L_08A8EB3C;
    case 892u: goto L_08A8EB4C;
    case 893u: goto L_08A8EB58;
    case 894u: goto L_08A8EB60;
    case 895u: goto L_08A8EB68;
    case 896u: goto L_08A8EB78;
    case 897u: goto L_08A8EB98;
    case 898u: goto L_08A8EBA0;
    case 899u: goto L_08A8EBA8;
    case 900u: goto L_08A8EBB8;
    case 901u: goto L_08A8EBC8;
    case 902u: goto L_08A8EBF4;
    case 903u: goto L_08A8EBF8;
    case 904u: goto L_08A8EC00;
    case 905u: goto L_08A8EC08;
    case 906u: goto L_08A8EC18;
    case 907u: goto L_08A8EC24;
    case 908u: goto L_08A8EC2C;
    case 909u: goto L_08A8EC38;
    case 910u: goto L_08A8EC64;
    case 911u: goto L_08A8EC78;
    case 912u: goto L_08A8EC80;
    case 913u: goto L_08A8EC8C;
    case 914u: goto L_08A8EC94;
    case 915u: goto L_08A8EC9C;
    case 916u: goto L_08A8ECA4;
    case 917u: goto L_08A8ECB4;
    case 918u: goto L_08A8ECBC;
    case 919u: goto L_08A8ECC4;
    case 920u: goto L_08A8ECCC;
    case 921u: goto L_08A8ECDC;
    case 922u: goto L_08A8ECE4;
    case 923u: goto L_08A8ECEC;
    case 924u: goto L_08A8ED0C;
    case 925u: goto L_08A8ED14;
    case 926u: goto L_08A8ED20;
    case 927u: goto L_08A8ED28;
    case 928u: goto L_08A8ED30;
    case 929u: goto L_08A8ED54;
    case 930u: goto L_08A8ED58;
    case 931u: goto L_08A8ED60;
    case 932u: goto L_08A8ED6C;
    case 933u: goto L_08A8ED78;
    case 934u: goto L_08A8ED84;
    case 935u: goto L_08A8ED8C;
    case 936u: goto L_08A8ED94;
    case 937u: goto L_08A8EDA4;
    case 938u: goto L_08A8EDAC;
    case 939u: goto L_08A8EDB4;
    case 940u: goto L_08A8EDC4;
    case 941u: goto L_08A8EDE0;
    case 942u: goto L_08A8EDEC;
    case 943u: goto L_08A8EDF4;
    case 944u: goto L_08A8EE00;
    case 945u: goto L_08A8EE08;
    case 946u: goto L_08A8EE1C;
    case 947u: goto L_08A8EE24;
    case 948u: goto L_08A8EE30;
    case 949u: goto L_08A8EE38;
    case 950u: goto L_08A8EE40;
    case 951u: goto L_08A8EE4C;
    case 952u: goto L_08A8EE54;
    case 953u: goto L_08A8EE5C;
    case 954u: goto L_08A8EE68;
    case 955u: goto L_08A8EE74;
    case 956u: goto L_08A8EE80;
    case 957u: goto L_08A8EE88;
    case 958u: goto L_08A8EE90;
    case 959u: goto L_08A8EE9C;
    case 960u: goto L_08A8EEA4;
    case 961u: goto L_08A8EEB4;
    case 962u: goto L_08A8EEBC;
    case 963u: goto L_08A8EED0;
    case 964u: goto L_08A8EED8;
    case 965u: goto L_08A8EEE0;
    case 966u: goto L_08A8EEEC;
    case 967u: goto L_08A8EEF8;
    case 968u: goto L_08A8EF00;
    case 969u: goto L_08A8EF0C;
    case 970u: goto L_08A8EF14;
    case 971u: goto L_08A8EF1C;
    case 972u: goto L_08A8EF24;
    case 973u: goto L_08A8EF34;
    case 974u: goto L_08A8EF3C;
    case 975u: goto L_08A8EF5C;
    case 976u: goto L_08A8EF64;
    case 977u: goto L_08A8EF70;
    case 978u: goto L_08A8EF78;
    case 979u: goto L_08A8EF84;
    case 980u: goto L_08A8EF8C;
    case 981u: goto L_08A8EF94;
    case 982u: goto L_08A8EFA4;
    case 983u: goto L_08A8EFAC;
    case 984u: goto L_08A8EFB4;
    case 985u: goto L_08A8EFC0;
    case 986u: goto L_08A8EFCC;
    case 987u: goto L_08A8EFD8;
    case 988u: goto L_08A8EFE0;
    case 989u: goto L_08A8EFF0;
    case 990u: goto L_08A8F000;
    case 991u: goto L_08A8F008;
    case 992u: goto L_08A8F018;
    case 993u: goto L_08A8F024;
    case 994u: goto L_08A8F030;
    case 995u: goto L_08A8F038;
    case 996u: goto L_08A8F048;
    case 997u: goto L_08A8F064;
    case 998u: goto L_08A8F074;
    case 999u: goto L_08A8F07C;
    case 1000u: goto L_08A8F08C;
    case 1001u: goto L_08A8F098;
    case 1002u: goto L_08A8F0A8;
    case 1003u: goto L_08A8F0B0;
    case 1004u: goto L_08A8F0BC;
    case 1005u: goto L_08A8F0D0;
    case 1006u: goto L_08A8F0DC;
    case 1007u: goto L_08A8F0E4;
    case 1008u: goto L_08A8F0F0;
    case 1009u: goto L_08A8F0F8;
    case 1010u: goto L_08A8F100;
    case 1011u: goto L_08A8F110;
    case 1012u: goto L_08A8F118;
    case 1013u: goto L_08A8F120;
    case 1014u: goto L_08A8F12C;
    case 1015u: goto L_08A8F138;
    case 1016u: goto L_08A8F140;
    case 1017u: goto L_08A8F14C;
    case 1018u: goto L_08A8F154;
    case 1019u: goto L_08A8F164;
    case 1020u: goto L_08A8F184;
    case 1021u: goto L_08A8F18C;
    case 1022u: goto L_08A8F194;
    case 1023u: goto L_08A8F1A4;
    case 1024u: goto L_08A8F1D0;
    case 1025u: goto L_08A8F1D4;
    case 1026u: goto L_08A8F1E4;
    case 1027u: goto L_08A8F1EC;
    case 1028u: goto L_08A8F1F8;
    case 1029u: goto L_08A8F200;
    case 1030u: goto L_08A8F210;
    case 1031u: goto L_08A8F21C;
    case 1032u: goto L_08A8F224;
    case 1033u: goto L_08A8F244;
    case 1034u: goto L_08A8F24C;
    case 1035u: goto L_08A8F25C;
    case 1036u: goto L_08A8F268;
    case 1037u: goto L_08A8F294;
    case 1038u: goto L_08A8F2A4;
    case 1039u: goto L_08A8F2AC;
    case 1040u: goto L_08A8F2B8;
    case 1041u: goto L_08A8F2C0;
    case 1042u: goto L_08A8F2C8;
    case 1043u: goto L_08A8F2D8;
    case 1044u: goto L_08A8F2E4;
    case 1045u: goto L_08A8F2F0;
    case 1046u: goto L_08A8F2F8;
    case 1047u: goto L_08A8F304;
    case 1048u: goto L_08A8F30C;
    case 1049u: goto L_08A8F314;
    case 1050u: goto L_08A8F324;
    case 1051u: goto L_08A8F330;
    case 1052u: goto L_08A8F338;
    case 1053u: goto L_08A8F340;
    case 1054u: goto L_08A8F34C;
    case 1055u: goto L_08A8F354;
    case 1056u: goto L_08A8F35C;
    case 1057u: goto L_08A8F364;
    case 1058u: goto L_08A8F36C;
    case 1059u: goto L_08A8F37C;
    case 1060u: goto L_08A8F384;
    case 1061u: goto L_08A8F38C;
    case 1062u: goto L_08A8F398;
    case 1063u: goto L_08A8F3A8;
    case 1064u: goto L_08A8F3B4;
    case 1065u: goto L_08A8F3C0;
    case 1066u: goto L_08A8F3C4;
    case 1067u: goto L_08A8F3DC;
    case 1068u: goto L_08A8F3F4;
    case 1069u: goto L_08A8F430;
    case 1070u: goto L_08A8F43C;
    case 1071u: goto L_08A8F454;
    case 1072u: goto L_08A8F460;
    case 1073u: goto L_08A8F478;
    case 1074u: goto L_08A8F484;
    case 1075u: goto L_08A8F48C;
    case 1076u: goto L_08A8F498;
    case 1077u: goto L_08A8F4A0;
    case 1078u: goto L_08A8F4AC;
    case 1079u: goto L_08A8F4B4;
    case 1080u: goto L_08A8F4C0;
    case 1081u: goto L_08A8F4CC;
    case 1082u: goto L_08A8F4D8;
    case 1083u: goto L_08A8F4E8;
    case 1084u: goto L_08A8F504;
    case 1085u: goto L_08A8F50C;
    case 1086u: goto L_08A8F518;
    case 1087u: goto L_08A8F520;
    case 1088u: goto L_08A8F530;
    case 1089u: goto L_08A8F538;
    case 1090u: goto L_08A8F540;
    case 1091u: goto L_08A8F548;
    case 1092u: goto L_08A8F56C;
    case 1093u: goto L_08A8F574;
    case 1094u: goto L_08A8F58C;
    case 1095u: goto L_08A8F5A0;
    case 1096u: goto L_08A8F5A8;
    case 1097u: goto L_08A8F5B0;
    case 1098u: goto L_08A8F5C0;
    case 1099u: goto L_08A8F5C8;
    case 1100u: goto L_08A8F5D4;
    case 1101u: goto L_08A8F5DC;
    case 1102u: goto L_08A8F5E8;
    case 1103u: goto L_08A8F5F0;
    case 1104u: goto L_08A8F608;
    case 1105u: goto L_08A8F610;
    case 1106u: goto L_08A8F618;
    case 1107u: goto L_08A8F620;
    case 1108u: goto L_08A8F628;
    case 1109u: goto L_08A8F638;
    case 1110u: goto L_08A8F648;
    case 1111u: goto L_08A8F658;
    case 1112u: goto L_08A8F668;
    case 1113u: goto L_08A8F670;
    case 1114u: goto L_08A8F688;
    case 1115u: goto L_08A8F690;
    case 1116u: goto L_08A8F698;
    case 1117u: goto L_08A8F6A8;
    case 1118u: goto L_08A8F6B0;
    case 1119u: goto L_08A8F6B8;
    case 1120u: goto L_08A8F6C8;
    case 1121u: goto L_08A8F6D4;
    case 1122u: goto L_08A8F6DC;
    case 1123u: goto L_08A8F6E4;
    case 1124u: goto L_08A8F6F4;
    case 1125u: goto L_08A8F6FC;
    case 1126u: goto L_08A8F710;
    case 1127u: goto L_08A8F71C;
    case 1128u: goto L_08A8F724;
    case 1129u: goto L_08A8F72C;
    case 1130u: goto L_08A8F744;
    case 1131u: goto L_08A8F74C;
    case 1132u: goto L_08A8F76C;
    case 1133u: goto L_08A8F770;
    case 1134u: goto L_08A8F778;
    case 1135u: goto L_08A8F784;
    case 1136u: goto L_08A8F790;
    case 1137u: goto L_08A8F79C;
    case 1138u: goto L_08A8F7A8;
    case 1139u: goto L_08A8F7B4;
    case 1140u: goto L_08A8F7C4;
    case 1141u: goto L_08A8F7D0;
    case 1142u: goto L_08A8F7E0;
    case 1143u: goto L_08A8F7FC;
    case 1144u: goto L_08A8F808;
    case 1145u: goto L_08A8F824;
    case 1146u: goto L_08A8F830;
    case 1147u: goto L_08A8F848;
    case 1148u: goto L_08A8F854;
    case 1149u: goto L_08A8F86C;
    case 1150u: goto L_08A8F878;
    case 1151u: goto L_08A8F884;
    case 1152u: goto L_08A8F894;
    case 1153u: goto L_08A8F8A8;
    case 1154u: goto L_08A8F8B8;
    case 1155u: goto L_08A8F8C0;
    case 1156u: goto L_08A8F8C8;
    case 1157u: goto L_08A8F8D0;
    case 1158u: goto L_08A8F8E8;
    case 1159u: goto L_08A8F8F0;
    case 1160u: goto L_08A8F910;
    case 1161u: goto L_08A8F920;
    case 1162u: goto L_08A8F928;
    case 1163u: goto L_08A8F930;
    case 1164u: goto L_08A8F938;
    case 1165u: goto L_08A8F948;
    case 1166u: goto L_08A8F950;
    case 1167u: goto L_08A8F968;
    case 1168u: goto L_08A8F970;
    case 1169u: goto L_08A8F978;
    case 1170u: goto L_08A8F980;
    case 1171u: goto L_08A8F998;
    case 1172u: goto L_08A8F9A4;
    case 1173u: goto L_08A8F9B0;
    case 1174u: goto L_08A8F9C0;
    case 1175u: goto L_08A8F9D4;
    case 1176u: goto L_08A8F9E4;
    case 1177u: goto L_08A8F9EC;
    case 1178u: goto L_08A8F9F4;
    case 1179u: goto L_08A8FA04;
    case 1180u: goto L_08A8FA0C;
    case 1181u: goto L_08A8FA14;
    case 1182u: goto L_08A8FA20;
    case 1183u: goto L_08A8FA2C;
    case 1184u: goto L_08A8FA34;
    case 1185u: goto L_08A8FA3C;
    case 1186u: goto L_08A8FA4C;
    case 1187u: goto L_08A8FA5C;
    case 1188u: goto L_08A8FA70;
    case 1189u: goto L_08A8FA78;
    case 1190u: goto L_08A8FA84;
    case 1191u: goto L_08A8FA8C;
    case 1192u: goto L_08A8FA94;
    case 1193u: goto L_08A8FAA0;
    case 1194u: goto L_08A8FAA4;
    case 1195u: goto L_08A8FAAC;
    case 1196u: goto L_08A8FABC;
    case 1197u: goto L_08A8FAC4;
    case 1198u: goto L_08A8FACC;
    case 1199u: goto L_08A8FAD4;
    case 1200u: goto L_08A8FADC;
    case 1201u: goto L_08A8FAEC;
    case 1202u: goto L_08A8FAFC;
    case 1203u: goto L_08A8FB0C;
    case 1204u: goto L_08A8FB1C;
    case 1205u: goto L_08A8FB24;
    case 1206u: goto L_08A8FB34;
    case 1207u: goto L_08A8FB3C;
    case 1208u: goto L_08A8FB44;
    case 1209u: goto L_08A8FB54;
    case 1210u: goto L_08A8FB60;
    case 1211u: goto L_08A8FB68;
    case 1212u: goto L_08A8FB70;
    case 1213u: goto L_08A8FB80;
    case 1214u: goto L_08A8FB88;
    case 1215u: goto L_08A8FB90;
    case 1216u: goto L_08A8FB98;
    case 1217u: goto L_08A8FBA4;
    case 1218u: goto L_08A8FBAC;
    case 1219u: goto L_08A8FBB4;
    case 1220u: goto L_08A8FBC8;
    case 1221u: goto L_08A8FBD4;
    case 1222u: goto L_08A8FBDC;
    case 1223u: goto L_08A8FBE4;
    case 1224u: goto L_08A8FBEC;
    case 1225u: goto L_08A8FBF4;
    case 1226u: goto L_08A8FC00;
    case 1227u: goto L_08A8FC04;
    case 1228u: goto L_08A8FC0C;
    case 1229u: goto L_08A8FC10;
    case 1230u: goto L_08A8FC14;
    case 1231u: goto L_08A8FC28;
    case 1232u: goto L_08A8FC58;
    case 1233u: goto L_08A8FC64;
    case 1234u: goto L_08A8FC6C;
    case 1235u: goto L_08A8FC7C;
    case 1236u: goto L_08A8FC88;
    case 1237u: goto L_08A8FC90;
    case 1238u: goto L_08A8FC94;
    case 1239u: goto L_08A8FCA0;
    case 1240u: goto L_08A8FCA4;
    case 1241u: goto L_08A8FCC4;
    case 1242u: goto L_08A8FCF4;
    case 1243u: goto L_08A8FD00;
    case 1244u: goto L_08A8FD08;
    case 1245u: goto L_08A8FD18;
    case 1246u: goto L_08A8FD24;
    case 1247u: goto L_08A8FD2C;
    case 1248u: goto L_08A8FD30;
    case 1249u: goto L_08A8FD3C;
    case 1250u: goto L_08A8FD40;
    case 1251u: goto L_08A8FD60;
    case 1252u: goto L_08A8FD78;
    case 1253u: goto L_08A8FD84;
    case 1254u: goto L_08A8FD90;
    case 1255u: goto L_08A8FD98;
    case 1256u: goto L_08A8FDA0;
    case 1257u: goto L_08A8FDB0;
    case 1258u: goto L_08A8FDB8;
    case 1259u: goto L_08A8FDC8;
    case 1260u: goto L_08A8FDEC;
    case 1261u: goto L_08A8FDFC;
    case 1262u: goto L_08A8FE04;
    case 1263u: goto L_08A8FE14;
    case 1264u: goto L_08A8FE34;
    case 1265u: goto L_08A8FE3C;
    case 1266u: goto L_08A8FE4C;
    case 1267u: goto L_08A8FE6C;
    case 1268u: goto L_08A8FE74;
    case 1269u: goto L_08A8FE84;
    case 1270u: goto L_08A8FE90;
    case 1271u: goto L_08A8FE98;
    case 1272u: goto L_08A8FEA4;
    case 1273u: goto L_08A8FEB0;
    case 1274u: goto L_08A8FEB8;
    case 1275u: goto L_08A8FEC4;
    case 1276u: goto L_08A8FECC;
    case 1277u: goto L_08A8FED4;
    case 1278u: goto L_08A8FEDC;
    case 1279u: goto L_08A8FEE8;
    case 1280u: goto L_08A8FEF4;
    case 1281u: goto L_08A8FF00;
    case 1282u: goto L_08A8FF08;
    case 1283u: goto L_08A8FF10;
    case 1284u: goto L_08A8FF20;
    case 1285u: goto L_08A8FF28;
    case 1286u: goto L_08A8FF40;
    case 1287u: goto L_08A8FF4C;
    case 1288u: goto L_08A8FF54;
    case 1289u: goto L_08A8FF60;
    case 1290u: goto L_08A8FF6C;
    case 1291u: goto L_08A8FF74;
    case 1292u: goto L_08A8FF7C;
    case 1293u: goto L_08A8FF8C;
    case 1294u: goto L_08A8FF94;
    case 1295u: goto L_08A8FFAC;
    case 1296u: goto L_08A8FFB8;
    case 1297u: goto L_08A8FFC0;
    case 1298u: goto L_08A8FFC8;
    case 1299u: goto L_08A8FFD4;
    case 1300u: goto L_08A8FFDC;
    case 1301u: goto L_08A8FFE4;
    case 1302u: goto L_08A8FFEC;
    case 1303u: goto L_08A8FFF4;
    case 1304u: goto L_08A8FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A8C004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8C01Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x08A8C01Cu) goto L_08A8C01C;
    return;
L_08A8C01C:
    ctx.set_gpr(31, 0x08A8C024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C024u) goto L_08A8C024;
    return;
L_08A8C024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A8C038u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C038u) goto L_08A8C038;
    return;
L_08A8C038:
    ctx.set_gpr(31, 0x08A8C040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C040u) goto L_08A8C040;
    return;
L_08A8C040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A8C054u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C054u) goto L_08A8C054;
    return;
L_08A8C054:
    ctx.set_gpr(31, 0x08A8C05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C05Cu) goto L_08A8C05C;
    return;
L_08A8C05C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A8C070u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C070u) goto L_08A8C070;
    return;
L_08A8C070:
    ctx.set_gpr(31, 0x08A8C078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C078u) goto L_08A8C078;
    return;
L_08A8C078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8C088u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32032)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C088u) goto L_08A8C088;
    return;
L_08A8C088:
    ctx.set_gpr(31, 0x08A8C090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C090u) goto L_08A8C090;
    return;
L_08A8C090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8C0A0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32036)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8C0A0u) goto L_08A8C0A0;
    return;
L_08A8C0A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C0B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0B0u) goto L_08A8C0B0;
    return;
L_08A8C0B0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A8C0B4;
L_08A8C0B4:
    ctx.set_gpr(31, 0x08A8C0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0BCu) goto L_08A8C0BC;
    return;
L_08A8C0BC:
    ctx.set_gpr(31, 0x08A8C0C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 655u, 0x088628A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0C4u) goto L_08A8C0C4;
    return;
L_08A8C0C4:
    ctx.set_gpr(31, 0x08A8C0CCu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0CCu) goto L_08A8C0CC;
    return;
L_08A8C0CC:
    ctx.set_gpr(31, 0x08A8C0D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0D4u) goto L_08A8C0D4;
    return;
L_08A8C0D4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(122));
    ctx.set_gpr(31, 0x08A8C0E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08A8C600;
L_08A8C0E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C138;
      }
      goto L_08A8C0E8;
    }
L_08A8C0E8:
    ctx.set_gpr(31, 0x08A8C0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0F0u) goto L_08A8C0F0;
    return;
L_08A8C0F0:
    ctx.set_gpr(31, 0x08A8C0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C0F8u) goto L_08A8C0F8;
    return;
L_08A8C0F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C108u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C108u) goto L_08A8C108;
    return;
L_08A8C108:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8C114u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 607u, 0x088624B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C114u) goto L_08A8C114;
    return;
L_08A8C114:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C130u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8C130u) goto L_08A8C130;
    return;
L_08A8C130:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8C19C;
      }
      goto L_08A8C138;
    }
L_08A8C138:
    ctx.set_gpr(31, 0x08A8C140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C140u) goto L_08A8C140;
    return;
L_08A8C140:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C150u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C150u) goto L_08A8C150;
    return;
L_08A8C150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23792));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C170u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8C170u) goto L_08A8C170;
    return;
L_08A8C170:
    ctx.set_gpr(31, 0x08A8C178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C178u) goto L_08A8C178;
    return;
L_08A8C178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C188u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C188u) goto L_08A8C188;
    return;
L_08A8C188:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8C198u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8C198u) goto L_08A8C198;
    return;
L_08A8C198:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A8C19C;
L_08A8C19C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 53 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C0B4;
      }
      goto L_08A8C1A8;
    }
L_08A8C1A8:
    ctx.set_gpr(31, 0x08A8C1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C1B0u) goto L_08A8C1B0;
    return;
L_08A8C1B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C1BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8C1BCu) goto L_08A8C1BC;
    return;
L_08A8C1BC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18224), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18236)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A8C208;
    }
    goto L_08A8C1D4;
L_08A8C1D4:
    ctx.set_gpr(31, 0x08A8C1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C1DCu) goto L_08A8C1DC;
    return;
L_08A8C1DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C1ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C1ECu) goto L_08A8C1EC;
    return;
L_08A8C1EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8C1F8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C1F8u) goto L_08A8C1F8;
    return;
L_08A8C1F8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8C204u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A8C204u) goto L_08A8C204;
    return;
L_08A8C204:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A8C208;
L_08A8C208:
    ctx.set_gpr(31, 0x08A8C210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C210u) goto L_08A8C210;
    return;
L_08A8C210:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18336), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C21C;
    }
L_08A8C21C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18336), 0u);
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C224;
    }
L_08A8C224:
    ctx.set_gpr(31, 0x08A8C22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C22Cu) goto L_08A8C22C;
    return;
L_08A8C22C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C238u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C238u) goto L_08A8C238;
    return;
L_08A8C238:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8C5E8;
    }
    goto L_08A8C240;
L_08A8C240:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8C24Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C24Cu) goto L_08A8C24C;
    return;
L_08A8C24C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), 0u);
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C254;
    }
L_08A8C254:
    ctx.set_gpr(31, 0x08A8C25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C25Cu) goto L_08A8C25C;
    return;
L_08A8C25C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8C390;
      }
      goto L_08A8C268;
    }
L_08A8C268:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8C33C;
      }
      goto L_08A8C274;
    }
L_08A8C274:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), ctx.gpr[3]);
        goto L_08A8C288;
    }
    goto L_08A8C280;
L_08A8C280:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18408)));
      if (branch_taken) {
          goto L_08A8C438;
      }
      goto L_08A8C288;
    }
L_08A8C288:
    ctx.set_gpr(31, 0x08A8C290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C290u) goto L_08A8C290;
    return;
L_08A8C290:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8C2A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C2A8u) goto L_08A8C2A8;
    return;
L_08A8C2A8:
    ctx.set_gpr(31, 0x08A8C2B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2B0u) goto L_08A8C2B0;
    return;
L_08A8C2B0:
    ctx.set_gpr(31, 0x08A8C2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2B8u) goto L_08A8C2B8;
    return;
L_08A8C2B8:
    ctx.set_gpr(31, 0x08A8C2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2C0u) goto L_08A8C2C0;
    return;
L_08A8C2C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C2D0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C2D0u) goto L_08A8C2D0;
    return;
L_08A8C2D0:
    ctx.set_gpr(31, 0x08A8C2D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2D8u) goto L_08A8C2D8;
    return;
L_08A8C2D8:
    ctx.set_gpr(31, 0x08A8C2E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 655u, 0x088628A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2E0u) goto L_08A8C2E0;
    return;
L_08A8C2E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8C2ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2ECu) goto L_08A8C2EC;
    return;
L_08A8C2EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8C2F8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C2F8u) goto L_08A8C2F8;
    return;
L_08A8C2F8:
    ctx.set_gpr(31, 0x08A8C300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C300u) goto L_08A8C300;
    return;
L_08A8C300:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C310u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C310u) goto L_08A8C310;
    return;
L_08A8C310:
    ctx.set_gpr(31, 0x08A8C318u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8C318u) goto L_08A8C318;
    return;
L_08A8C318:
    ctx.set_gpr(31, 0x08A8C320u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 655u, 0x088628A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C320u) goto L_08A8C320;
    return;
L_08A8C320:
    ctx.set_gpr(31, 0x08A8C328u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18240), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C328u) goto L_08A8C328;
    return;
L_08A8C328:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C334u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8C334u) goto L_08A8C334;
    return;
L_08A8C334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C33C;
    }
L_08A8C33C:
    ctx.set_gpr(31, 0x08A8C344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C344u) goto L_08A8C344;
    return;
L_08A8C344:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8C35Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C35Cu) goto L_08A8C35C;
    return;
L_08A8C35C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18336)));
    ctx.set_gpr(31, 0x08A8C368u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C368u) goto L_08A8C368;
    return;
L_08A8C368:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8C37Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C37Cu) goto L_08A8C37C;
    return;
L_08A8C37C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C388u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8C388u) goto L_08A8C388;
    return;
L_08A8C388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C390;
    }
L_08A8C390:
    ctx.set_gpr(31, 0x08A8C398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C398u) goto L_08A8C398;
    return;
L_08A8C398:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C3A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C3A8u) goto L_08A8C3A8;
    return;
L_08A8C3A8:
    ctx.set_gpr(31, 0x08A8C3B0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C3B0u) goto L_08A8C3B0;
    return;
L_08A8C3B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C3C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C3C0u) goto L_08A8C3C0;
    return;
L_08A8C3C0:
    ctx.set_gpr(31, 0x08A8C3C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8C3C8u) goto L_08A8C3C8;
    return;
L_08A8C3C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8C3D4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C3D4u) goto L_08A8C3D4;
    return;
L_08A8C3D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C3DC;
    }
L_08A8C3DC:
    ctx.set_gpr(31, 0x08A8C3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C3E4u) goto L_08A8C3E4;
    return;
L_08A8C3E4:
    ctx.set_gpr(31, 0x08A8C3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C3ECu) goto L_08A8C3EC;
    return;
L_08A8C3EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C3FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C3FCu) goto L_08A8C3FC;
    return;
L_08A8C3FC:
    ctx.set_gpr(31, 0x08A8C404u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8C404u) goto L_08A8C404;
    return;
L_08A8C404:
    ctx.set_gpr(31, 0x08A8C40Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 655u, 0x088628A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C40Cu) goto L_08A8C40C;
    return;
L_08A8C40C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18240), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8C418u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8C418u) goto L_08A8C418;
    return;
L_08A8C418:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8C424u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18240)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C424u) goto L_08A8C424;
    return;
L_08A8C424:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C438;
    }
L_08A8C438:
    ctx.set_gpr(31, 0x08A8C440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C440u) goto L_08A8C440;
    return;
L_08A8C440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C450u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C450u) goto L_08A8C450;
    return;
L_08A8C450:
    ctx.set_gpr(31, 0x08A8C458u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8C458u) goto L_08A8C458;
    return;
L_08A8C458:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8C480;
      }
      goto L_08A8C460;
    }
L_08A8C460:
    ctx.set_gpr(31, 0x08A8C468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C468u) goto L_08A8C468;
    return;
L_08A8C468:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8C480u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C480u) goto L_08A8C480;
    return;
L_08A8C480:
    ctx.set_gpr(31, 0x08A8C488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C488u) goto L_08A8C488;
    return;
L_08A8C488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C498u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C498u) goto L_08A8C498;
    return;
L_08A8C498:
    ctx.set_gpr(31, 0x08A8C4A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8C4A0u) goto L_08A8C4A0;
    return;
L_08A8C4A0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18408), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C4A8;
    }
L_08A8C4A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A8C4B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A8C4B8u) goto L_08A8C4B8;
    return;
L_08A8C4B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C4C0;
    }
L_08A8C4C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8C4CCu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C4CCu) goto L_08A8C4CC;
    return;
L_08A8C4CC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8C4E4u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C4E4u) goto L_08A8C4E4;
    return;
L_08A8C4E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C4FCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C4FCu) goto L_08A8C4FC;
    return;
L_08A8C4FC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), 0u);
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C504;
    }
L_08A8C504:
    ctx.set_gpr(31, 0x08A8C50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C50Cu) goto L_08A8C50C;
    return;
L_08A8C50C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C518u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C518u) goto L_08A8C518;
    return;
L_08A8C518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C5E4;
      }
      goto L_08A8C520;
    }
L_08A8C520:
    ctx.set_gpr(31, 0x08A8C528u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C528u) goto L_08A8C528;
    return;
L_08A8C528:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8C540u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8C540u) goto L_08A8C540;
    return;
L_08A8C540:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A8C548;
L_08A8C548:
    ctx.set_gpr(31, 0x08A8C550u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08A8FC28;
L_08A8C550:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A8C578;
    }
    goto L_08A8C55C;
L_08A8C55C:
    ctx.set_gpr(31, 0x08A8C564u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8C564u) goto L_08A8C564;
    return;
L_08A8C564:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8C574u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8C574u) goto L_08A8C574;
    return;
L_08A8C574:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A8C578;
L_08A8C578:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A8C548;
    }
    goto L_08A8C584;
L_08A8C584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8C590u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C590u) goto L_08A8C590;
    return;
L_08A8C590:
    ctx.set_gpr(31, 0x08A8C598u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C598u) goto L_08A8C598;
    return;
L_08A8C598:
    ctx.set_gpr(31, 0x08A8C5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5A0u) goto L_08A8C5A0;
    return;
L_08A8C5A0:
    ctx.set_gpr(31, 0x08A8C5A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5A8u) goto L_08A8C5A8;
    return;
L_08A8C5A8:
    ctx.set_gpr(31, 0x08A8C5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5B0u) goto L_08A8C5B0;
    return;
L_08A8C5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C5C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C5C0u) goto L_08A8C5C0;
    return;
L_08A8C5C0:
    ctx.set_gpr(31, 0x08A8C5C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5C8u) goto L_08A8C5C8;
    return;
L_08A8C5C8:
    ctx.set_gpr(31, 0x08A8C5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C5D0u) goto L_08A8C5D0;
    return;
L_08A8C5D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C5DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C5DCu) goto L_08A8C5DC;
    return;
L_08A8C5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18220)));
      if (branch_taken) {
          goto L_08A8C5E8;
      }
      goto L_08A8C5E4;
    }
L_08A8C5E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8C5E8;
L_08A8C5E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C600:
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(27768));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(176));
    (void)rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 458u, 0x08861BE8u>(ctx, &aot_mem); return;
L_08A8C614:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18220)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A8C668;
      }
      goto L_08A8C62C;
    }
L_08A8C62C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8C640;
      }
      goto L_08A8C638;
    }
L_08A8C638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C67C;
      }
      goto L_08A8C640;
    }
L_08A8C640:
    ctx.set_gpr(31, 0x08A8C648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C648u) goto L_08A8C648;
    return;
L_08A8C648:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8C658u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32128)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C658u) goto L_08A8C658;
    return;
L_08A8C658:
    ctx.set_gpr(31, 0x08A8C660u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 55u, 0x08AD86BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8C660u) goto L_08A8C660;
    return;
L_08A8C660:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18220), 0u);
      if (branch_taken) {
          goto L_08A8C6A4;
      }
      goto L_08A8C668;
    }
L_08A8C668:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(31, 0x08A8C674u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(18220));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 79u, 0x08AD8904u>(ctx, &aot_mem) && ctx.pc == 0x08A8C674u) goto L_08A8C674;
    return;
L_08A8C674:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A8C6A8;
      }
      goto L_08A8C67C;
    }
L_08A8C67C:
    ctx.set_gpr(31, 0x08A8C684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C684u) goto L_08A8C684;
    return;
L_08A8C684:
    ctx.set_gpr(31, 0x08A8C68Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C68Cu) goto L_08A8C68C;
    return;
L_08A8C68C:
    ctx.set_gpr(31, 0x08A8C694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C694u) goto L_08A8C694;
    return;
L_08A8C694:
    ctx.set_gpr(31, 0x08A8C69Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C69Cu) goto L_08A8C69C;
    return;
L_08A8C69C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18220)));
      if (branch_taken) {
          goto L_08A8C6A8;
      }
      goto L_08A8C6A4;
    }
L_08A8C6A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8C6A8;
L_08A8C6A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C6B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18220)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A8C70C;
      }
      goto L_08A8C6D0;
    }
L_08A8C6D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8C6E4;
      }
      goto L_08A8C6DC;
    }
L_08A8C6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C720;
      }
      goto L_08A8C6E4;
    }
L_08A8C6E4:
    ctx.set_gpr(31, 0x08A8C6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C6ECu) goto L_08A8C6EC;
    return;
L_08A8C6EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8C6FCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32224)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C6FCu) goto L_08A8C6FC;
    return;
L_08A8C6FC:
    ctx.set_gpr(31, 0x08A8C704u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 196u, 0x08A9D61Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C704u) goto L_08A8C704;
    return;
L_08A8C704:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18220), 0u);
      if (branch_taken) {
          goto L_08A8C748;
      }
      goto L_08A8C70C;
    }
L_08A8C70C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A8C718u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(18220));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 461u, 0x08A9E428u>(ctx, &aot_mem) && ctx.pc == 0x08A8C718u) goto L_08A8C718;
    return;
L_08A8C718:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A8C74C;
      }
      goto L_08A8C720;
    }
L_08A8C720:
    ctx.set_gpr(31, 0x08A8C728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C728u) goto L_08A8C728;
    return;
L_08A8C728:
    ctx.set_gpr(31, 0x08A8C730u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C730u) goto L_08A8C730;
    return;
L_08A8C730:
    ctx.set_gpr(31, 0x08A8C738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C738u) goto L_08A8C738;
    return;
L_08A8C738:
    ctx.set_gpr(31, 0x08A8C740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8C740u) goto L_08A8C740;
    return;
L_08A8C740:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18220)));
      if (branch_taken) {
          goto L_08A8C74C;
      }
      goto L_08A8C748;
    }
L_08A8C748:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8C74C;
L_08A8C74C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C75C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8C79Cu);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 67u, 0x08A94514u>(ctx, &aot_mem) && ctx.pc == 0x08A8C79Cu) goto L_08A8C79C;
    return;
L_08A8C79C:
    ctx.set_gpr(31, 0x08A8C7A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7A4u) goto L_08A8C7A4;
    return;
L_08A8C7A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D6F4;
      }
      goto L_08A8C7C0;
    }
L_08A8C7C0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26528));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C7DC:
    ctx.set_gpr(31, 0x08A8C7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C7E4u) goto L_08A8C7E4;
    return;
L_08A8C7E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8C7F4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32320)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7F4u) goto L_08A8C7F4;
    return;
L_08A8C7F4:
    ctx.set_gpr(31, 0x08A8C7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8C7FCu) goto L_08A8C7FC;
    return;
L_08A8C7FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8C80Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32324)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8C80Cu) goto L_08A8C80C;
    return;
L_08A8C80C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C838u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8C838u) goto L_08A8C838;
    return;
L_08A8C838:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C848u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8C848u) goto L_08A8C848;
    return;
L_08A8C848:
    ctx.set_gpr(18, 2230u << 16u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    goto L_08A8C85C;
L_08A8C85C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8C868u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08A8C868u) goto L_08A8C868;
    return;
L_08A8C868:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08A8C8CC;
    }
    goto L_08A8C870;
L_08A8C870:
    ctx.set_gpr(31, 0x08A8C878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C878u) goto L_08A8C878;
    return;
L_08A8C878:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C888u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C888u) goto L_08A8C888;
    return;
L_08A8C888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C898u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08A8C898u) goto L_08A8C898;
    return;
L_08A8C898:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8C8B4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8C8B4u) goto L_08A8C8B4;
    return;
L_08A8C8B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8C8C0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08A8C8C0u) goto L_08A8C8C0;
    return;
L_08A8C8C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8C914;
      }
      goto L_08A8C8CC;
    }
L_08A8C8CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8C8DCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C8DCu) goto L_08A8C8DC;
    return;
L_08A8C8DC:
    ctx.set_gpr(31, 0x08A8C8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C8E4u) goto L_08A8C8E4;
    return;
L_08A8C8E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C8F4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C8F4u) goto L_08A8C8F4;
    return;
L_08A8C8F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C910u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8C910u) goto L_08A8C910;
    return;
L_08A8C910:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), 0u);
    goto L_08A8C914;
L_08A8C914:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08A8C85C;
      }
      goto L_08A8C92C;
    }
L_08A8C92C:
    ctx.set_gpr(31, 0x08A8C934u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18736), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C934u) goto L_08A8C934;
    return;
L_08A8C934:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C944u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C944u) goto L_08A8C944;
    return;
L_08A8C944:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8C950u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A8C950u) goto L_08A8C950;
    return;
L_08A8C950:
    ctx.set_gpr(31, 0x08A8C958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C958u) goto L_08A8C958;
    return;
L_08A8C958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8C968u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C968u) goto L_08A8C968;
    return;
L_08A8C968:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C974u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C974u) goto L_08A8C974;
    return;
L_08A8C974:
    ctx.set_gpr(31, 0x08A8C97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C97Cu) goto L_08A8C97C;
    return;
L_08A8C97C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C988u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8C988u) goto L_08A8C988;
    return;
L_08A8C988:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8C994;
    }
L_08A8C994:
    ctx.set_gpr(31, 0x08A8C99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8C99Cu) goto L_08A8C99C;
    return;
L_08A8C99C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C9A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C9A8u) goto L_08A8C9A8;
    return;
L_08A8C9A8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8D7D8;
    }
    goto L_08A8C9B0;
L_08A8C9B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8C9BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8C9BCu) goto L_08A8C9BC;
    return;
L_08A8C9BC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18224), 0u);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8C9C8;
    }
L_08A8C9C8:
    ctx.set_gpr(31, 0x08A8C9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8C9D0u) goto L_08A8C9D0;
    return;
L_08A8C9D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C9DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8C9DCu) goto L_08A8C9DC;
    return;
L_08A8C9DC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8CB28;
    }
    goto L_08A8C9E4;
L_08A8C9E4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A8C9F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8C9F0u) goto L_08A8C9F0;
    return;
L_08A8C9F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8C9FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8C9FCu) goto L_08A8C9FC;
    return;
L_08A8C9FC:
    ctx.set_gpr(31, 0x08A8CA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA04u) goto L_08A8CA04;
    return;
L_08A8CA04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CA14u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CA14u) goto L_08A8CA14;
    return;
L_08A8CA14:
    ctx.set_gpr(31, 0x08A8CA1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA1Cu) goto L_08A8CA1C;
    return;
L_08A8CA1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8CA28u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA28u) goto L_08A8CA28;
    return;
L_08A8CA28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CB04;
      }
      goto L_08A8CA30;
    }
L_08A8CA30:
    ctx.set_gpr(31, 0x08A8CA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA38u) goto L_08A8CA38;
    return;
L_08A8CA38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CA48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CA48u) goto L_08A8CA48;
    return;
L_08A8CA48:
    ctx.set_gpr(31, 0x08A8CA50u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA50u) goto L_08A8CA50;
    return;
L_08A8CA50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CA60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CA60u) goto L_08A8CA60;
    return;
L_08A8CA60:
    ctx.set_gpr(31, 0x08A8CA68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA68u) goto L_08A8CA68;
    return;
L_08A8CA68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8CA74u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA74u) goto L_08A8CA74;
    return;
L_08A8CA74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CAE0;
      }
      goto L_08A8CA7C;
    }
L_08A8CA7C:
    ctx.set_gpr(31, 0x08A8CA84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA84u) goto L_08A8CA84;
    return;
L_08A8CA84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CA94u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CA94u) goto L_08A8CA94;
    return;
L_08A8CA94:
    ctx.set_gpr(31, 0x08A8CA9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CA9Cu) goto L_08A8CA9C;
    return;
L_08A8CA9C:
    ctx.set_gpr(31, 0x08A8CAA4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CAA4u) goto L_08A8CAA4;
    return;
L_08A8CAA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CAB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CAB8u) goto L_08A8CAB8;
    return;
L_08A8CAB8:
    ctx.set_gpr(31, 0x08A8CAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CAC0u) goto L_08A8CAC0;
    return;
L_08A8CAC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CAD4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CAD4u) goto L_08A8CAD4;
    return;
L_08A8CAD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8CC8C;
      }
      goto L_08A8CAE0;
    }
L_08A8CAE0:
    ctx.set_gpr(31, 0x08A8CAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CAE8u) goto L_08A8CAE8;
    return;
L_08A8CAE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CAFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CAFCu) goto L_08A8CAFC;
    return;
L_08A8CAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18408)));
      if (branch_taken) {
          goto L_08A8CC90;
      }
      goto L_08A8CB04;
    }
L_08A8CB04:
    ctx.set_gpr(31, 0x08A8CB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CB0Cu) goto L_08A8CB0C;
    return;
L_08A8CB0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CB20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CB20u) goto L_08A8CB20;
    return;
L_08A8CB20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CC8C;
      }
      goto L_08A8CB28;
    }
L_08A8CB28:
    ctx.set_gpr(31, 0x08A8CB30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CB30u) goto L_08A8CB30;
    return;
L_08A8CB30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8CC44;
    }
    goto L_08A8CB3C;
L_08A8CB3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8CBF4;
    }
    goto L_08A8CB48;
L_08A8CB48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8CB5C;
    }
    goto L_08A8CB54;
L_08A8CB54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CC8C;
      }
      goto L_08A8CB5C;
    }
L_08A8CB5C:
    ctx.set_gpr(31, 0x08A8CB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CB64u) goto L_08A8CB64;
    return;
L_08A8CB64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CB70u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CB70u) goto L_08A8CB70;
    return;
L_08A8CB70:
    ctx.set_gpr(31, 0x08A8CB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CB78u) goto L_08A8CB78;
    return;
L_08A8CB78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CB8Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CB8Cu) goto L_08A8CB8C;
    return;
L_08A8CB8C:
    ctx.set_gpr(31, 0x08A8CB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CB94u) goto L_08A8CB94;
    return;
L_08A8CB94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CBA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CBA4u) goto L_08A8CBA4;
    return;
L_08A8CBA4:
    ctx.set_gpr(31, 0x08A8CBACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CBACu) goto L_08A8CBAC;
    return;
L_08A8CBAC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8CBC4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8FCC4;
L_08A8CBC4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18328), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18740)));
    ctx.set_gpr(31, 0x08A8CBE0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18736), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CBE0u) goto L_08A8CBE0;
    return;
L_08A8CBE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CBECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8CBECu) goto L_08A8CBEC;
    return;
L_08A8CBEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CC8C;
      }
      goto L_08A8CBF4;
    }
L_08A8CBF4:
    ctx.set_gpr(31, 0x08A8CBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CBFCu) goto L_08A8CBFC;
    return;
L_08A8CBFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CC08u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC08u) goto L_08A8CC08;
    return;
L_08A8CC08:
    ctx.set_gpr(31, 0x08A8CC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC10u) goto L_08A8CC10;
    return;
L_08A8CC10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CC24u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC24u) goto L_08A8CC24;
    return;
L_08A8CC24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8CC30u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC30u) goto L_08A8CC30;
    return;
L_08A8CC30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CC3Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC3Cu) goto L_08A8CC3C;
    return;
L_08A8CC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CC8C;
      }
      goto L_08A8CC44;
    }
L_08A8CC44:
    ctx.set_gpr(31, 0x08A8CC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC4Cu) goto L_08A8CC4C;
    return;
L_08A8CC4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CC58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC58u) goto L_08A8CC58;
    return;
L_08A8CC58:
    ctx.set_gpr(31, 0x08A8CC60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC60u) goto L_08A8CC60;
    return;
L_08A8CC60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CC74u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CC74u) goto L_08A8CC74;
    return;
L_08A8CC74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8CC80u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC80u) goto L_08A8CC80;
    return;
L_08A8CC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CC8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC8Cu) goto L_08A8CC8C;
    return;
L_08A8CC8C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18408)));
    goto L_08A8CC90;
L_08A8CC90:
    ctx.set_gpr(31, 0x08A8CC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CC98u) goto L_08A8CC98;
    return;
L_08A8CC98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CCA8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CCA8u) goto L_08A8CCA8;
    return;
L_08A8CCA8:
    ctx.set_gpr(31, 0x08A8CCB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CCB0u) goto L_08A8CCB0;
    return;
L_08A8CCB0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8CCE8;
      }
      goto L_08A8CCB8;
    }
L_08A8CCB8:
    ctx.set_gpr(31, 0x08A8CCC0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CCC0u) goto L_08A8CCC0;
    return;
L_08A8CCC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CCCCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CCCCu) goto L_08A8CCCC;
    return;
L_08A8CCCC:
    ctx.set_gpr(31, 0x08A8CCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CCD4u) goto L_08A8CCD4;
    return;
L_08A8CCD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CCE8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CCE8u) goto L_08A8CCE8;
    return;
L_08A8CCE8:
    ctx.set_gpr(31, 0x08A8CCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CCF0u) goto L_08A8CCF0;
    return;
L_08A8CCF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CD00u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD00u) goto L_08A8CD00;
    return;
L_08A8CD00:
    ctx.set_gpr(31, 0x08A8CD08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD08u) goto L_08A8CD08;
    return;
L_08A8CD08:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18408), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8CD10;
    }
L_08A8CD10:
    ctx.set_gpr(31, 0x08A8CD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD18u) goto L_08A8CD18;
    return;
L_08A8CD18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CD24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD24u) goto L_08A8CD24;
    return;
L_08A8CD24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CEA4;
      }
      goto L_08A8CD2C;
    }
L_08A8CD2C:
    ctx.set_gpr(31, 0x08A8CD34u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD34u) goto L_08A8CD34;
    return;
L_08A8CD34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CD44u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD44u) goto L_08A8CD44;
    return;
L_08A8CD44:
    ctx.set_gpr(31, 0x08A8CD4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD4Cu) goto L_08A8CD4C;
    return;
L_08A8CD4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8CE80;
      }
      goto L_08A8CD54;
    }
L_08A8CD54:
    ctx.set_gpr(31, 0x08A8CD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD5Cu) goto L_08A8CD5C;
    return;
L_08A8CD5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CD6Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD6Cu) goto L_08A8CD6C;
    return;
L_08A8CD6C:
    ctx.set_gpr(31, 0x08A8CD74u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD74u) goto L_08A8CD74;
    return;
L_08A8CD74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CD84u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CD84u) goto L_08A8CD84;
    return;
L_08A8CD84:
    ctx.set_gpr(31, 0x08A8CD8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD8Cu) goto L_08A8CD8C;
    return;
L_08A8CD8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8CD98u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CD98u) goto L_08A8CD98;
    return;
L_08A8CD98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CE5C;
      }
      goto L_08A8CDA0;
    }
L_08A8CDA0:
    ctx.set_gpr(31, 0x08A8CDA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDA8u) goto L_08A8CDA8;
    return;
L_08A8CDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CDB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDB4u) goto L_08A8CDB4;
    return;
L_08A8CDB4:
    ctx.set_gpr(31, 0x08A8CDBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDBCu) goto L_08A8CDBC;
    return;
L_08A8CDBC:
    ctx.set_gpr(31, 0x08A8CDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDC4u) goto L_08A8CDC4;
    return;
L_08A8CDC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CDD4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDD4u) goto L_08A8CDD4;
    return;
L_08A8CDD4:
    ctx.set_gpr(31, 0x08A8CDDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CDDCu) goto L_08A8CDDC;
    return;
L_08A8CDDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8CDECu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A8CDECu) goto L_08A8CDEC;
    return;
L_08A8CDEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8CE00u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE00u) goto L_08A8CE00;
    return;
L_08A8CE00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CE10u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE10u) goto L_08A8CE10;
    return;
L_08A8CE10:
    ctx.set_gpr(31, 0x08A8CE18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE18u) goto L_08A8CE18;
    return;
L_08A8CE18:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8CE24u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CE24u) goto L_08A8CE24;
    return;
L_08A8CE24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CE38u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE38u) goto L_08A8CE38;
    return;
L_08A8CE38:
    ctx.set_gpr(31, 0x08A8CE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE40u) goto L_08A8CE40;
    return;
L_08A8CE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CE54u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE54u) goto L_08A8CE54;
    return;
L_08A8CE54:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A8CFEC;
      }
      goto L_08A8CE5C;
    }
L_08A8CE5C:
    ctx.set_gpr(31, 0x08A8CE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE64u) goto L_08A8CE64;
    return;
L_08A8CE64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CE78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE78u) goto L_08A8CE78;
    return;
L_08A8CE78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CFE8;
      }
      goto L_08A8CE80;
    }
L_08A8CE80:
    ctx.set_gpr(31, 0x08A8CE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE88u) goto L_08A8CE88;
    return;
L_08A8CE88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CE9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CE9Cu) goto L_08A8CE9C;
    return;
L_08A8CE9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CFE8;
      }
      goto L_08A8CEA4;
    }
L_08A8CEA4:
    ctx.set_gpr(31, 0x08A8CEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEACu) goto L_08A8CEAC;
    return;
L_08A8CEAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CEB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEB8u) goto L_08A8CEB8;
    return;
L_08A8CEB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CFE8;
      }
      goto L_08A8CEC0;
    }
L_08A8CEC0:
    ctx.set_gpr(31, 0x08A8CEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEC8u) goto L_08A8CEC8;
    return;
L_08A8CEC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CED4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8CED4u) goto L_08A8CED4;
    return;
L_08A8CED4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8CF80;
      }
      goto L_08A8CEE0;
    }
L_08A8CEE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A8CEF4;
    }
    goto L_08A8CEEC;
L_08A8CEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CFE8;
      }
      goto L_08A8CEF4;
    }
L_08A8CEF4:
    ctx.set_gpr(31, 0x08A8CEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CEFCu) goto L_08A8CEFC;
    return;
L_08A8CEFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CF08u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CF08u) goto L_08A8CF08;
    return;
L_08A8CF08:
    ctx.set_gpr(31, 0x08A8CF10u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF10u) goto L_08A8CF10;
    return;
L_08A8CF10:
    ctx.set_gpr(31, 0x08A8CF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF18u) goto L_08A8CF18;
    return;
L_08A8CF18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8CF28u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CF28u) goto L_08A8CF28;
    return;
L_08A8CF28:
    ctx.set_gpr(31, 0x08A8CF30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF30u) goto L_08A8CF30;
    return;
L_08A8CF30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8CF40u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A8CF40u) goto L_08A8CF40;
    return;
L_08A8CF40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8CF4Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF4Cu) goto L_08A8CF4C;
    return;
L_08A8CF4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CF60u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CF60u) goto L_08A8CF60;
    return;
L_08A8CF60:
    ctx.set_gpr(31, 0x08A8CF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF68u) goto L_08A8CF68;
    return;
L_08A8CF68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CF74u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF74u) goto L_08A8CF74;
    return;
L_08A8CF74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8CFE8;
      }
      goto L_08A8CF80;
    }
L_08A8CF80:
    ctx.set_gpr(31, 0x08A8CF88u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF88u) goto L_08A8CF88;
    return;
L_08A8CF88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CF94u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8CF94u) goto L_08A8CF94;
    return;
L_08A8CF94:
    ctx.set_gpr(31, 0x08A8CF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8CF9Cu) goto L_08A8CF9C;
    return;
L_08A8CF9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8CFB0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8CFB0u) goto L_08A8CFB0;
    return;
L_08A8CFB0:
    ctx.set_gpr(31, 0x08A8CFB8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFB8u) goto L_08A8CFB8;
    return;
L_08A8CFB8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18328)));
    ctx.set_gpr(31, 0x08A8CFC8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A8CFC8u) goto L_08A8CFC8;
    return;
L_08A8CFC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8CFD4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFD4u) goto L_08A8CFD4;
    return;
L_08A8CFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8CFE0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFE0u) goto L_08A8CFE0;
    return;
L_08A8CFE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    goto L_08A8CFE8;
L_08A8CFE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8CFEC;
L_08A8CFEC:
    ctx.set_gpr(31, 0x08A8CFF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 939u, 0x08A93298u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFF4u) goto L_08A8CFF4;
    return;
L_08A8CFF4:
    ctx.set_gpr(31, 0x08A8CFFCu);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18408)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8CFFCu) goto L_08A8CFFC;
    return;
L_08A8CFFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D00Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D00Cu) goto L_08A8D00C;
    return;
L_08A8D00C:
    ctx.set_gpr(31, 0x08A8D014u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8D014u) goto L_08A8D014;
    return;
L_08A8D014:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8D04C;
      }
      goto L_08A8D01C;
    }
L_08A8D01C:
    ctx.set_gpr(31, 0x08A8D024u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D024u) goto L_08A8D024;
    return;
L_08A8D024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D030u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D030u) goto L_08A8D030;
    return;
L_08A8D030:
    ctx.set_gpr(31, 0x08A8D038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D038u) goto L_08A8D038;
    return;
L_08A8D038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8D04Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D04Cu) goto L_08A8D04C;
    return;
L_08A8D04C:
    ctx.set_gpr(31, 0x08A8D054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D054u) goto L_08A8D054;
    return;
L_08A8D054:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D064u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D064u) goto L_08A8D064;
    return;
L_08A8D064:
    ctx.set_gpr(31, 0x08A8D06Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8D06Cu) goto L_08A8D06C;
    return;
L_08A8D06C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18408), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D074;
    }
L_08A8D074:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8D088u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 232u, 0x08A95114u>(ctx, &aot_mem) && ctx.pc == 0x08A8D088u) goto L_08A8D088;
    return;
L_08A8D088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D090;
    }
L_08A8D090:
    ctx.set_gpr(31, 0x08A8D098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D098u) goto L_08A8D098;
    return;
L_08A8D098:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8D0ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D0ACu) goto L_08A8D0AC;
    return;
L_08A8D0AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8D0B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08A8D0B8u) goto L_08A8D0B8;
    return;
L_08A8D0B8:
    ctx.set_gpr(31, 0x08A8D0C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D0C0u) goto L_08A8D0C0;
    return;
L_08A8D0C0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08A8D0D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D0D0u) goto L_08A8D0D0;
    return;
L_08A8D0D0:
    ctx.set_gpr(31, 0x08A8D0D8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D0D8u) goto L_08A8D0D8;
    return;
L_08A8D0D8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08A8D0E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08A8D0E8u) goto L_08A8D0E8;
    return;
L_08A8D0E8:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08A8D184;
    }
    goto L_08A8D0F0;
L_08A8D0F0:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17592)));
    ctx.set_gpr(31, 0x08A8D100u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08A8D100u) goto L_08A8D100;
    return;
L_08A8D100:
    ctx.set_gpr(31, 0x08A8D108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D108u) goto L_08A8D108;
    return;
L_08A8D108:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8D128u);
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D128u) goto L_08A8D128;
    return;
L_08A8D128:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08A8D138u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D138u) goto L_08A8D138;
    return;
L_08A8D138:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D164;
      }
      goto L_08A8D140;
    }
L_08A8D140:
    ctx.set_gpr(31, 0x08A8D148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D148u) goto L_08A8D148;
    return;
L_08A8D148:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A8D158u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08A8D158u) goto L_08A8D158;
    return;
L_08A8D158:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A8D164u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08A8D164u) goto L_08A8D164;
    return;
L_08A8D164:
    ctx.set_gpr(31, 0x08A8D16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D16Cu) goto L_08A8D16C;
    return;
L_08A8D16C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8D180u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08A8D180u) goto L_08A8D180;
    return;
L_08A8D180:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08A8D184;
L_08A8D184:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D18C;
    }
L_08A8D18C:
    ctx.set_gpr(31, 0x08A8D194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D194u) goto L_08A8D194;
    return;
L_08A8D194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D1A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1A0u) goto L_08A8D1A0;
    return;
L_08A8D1A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D1A8;
    }
L_08A8D1A8:
    ctx.set_gpr(31, 0x08A8D1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1B0u) goto L_08A8D1B0;
    return;
L_08A8D1B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D1C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D1C0u) goto L_08A8D1C0;
    return;
L_08A8D1C0:
    ctx.set_gpr(31, 0x08A8D1C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1C8u) goto L_08A8D1C8;
    return;
L_08A8D1C8:
    ctx.set_gpr(31, 0x08A8D1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1D0u) goto L_08A8D1D0;
    return;
L_08A8D1D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D1DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D1DCu) goto L_08A8D1DC;
    return;
L_08A8D1DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8D1F0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1F0u) goto L_08A8D1F0;
    return;
L_08A8D1F0:
    ctx.set_gpr(31, 0x08A8D1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D1F8u) goto L_08A8D1F8;
    return;
L_08A8D1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D208u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D208u) goto L_08A8D208;
    return;
L_08A8D208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D214u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D214u) goto L_08A8D214;
    return;
L_08A8D214:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A8D218;
L_08A8D218:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08A8D294;
      }
      goto L_08A8D220;
    }
L_08A8D220:
    ctx.set_gpr(31, 0x08A8D228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D228u) goto L_08A8D228;
    return;
L_08A8D228:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D238u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D238u) goto L_08A8D238;
    return;
L_08A8D238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23780));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D258u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8D258u) goto L_08A8D258;
    return;
L_08A8D258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08A8D4A4;
    }
    goto L_08A8D264;
L_08A8D264:
    ctx.set_gpr(31, 0x08A8D26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D26Cu) goto L_08A8D26C;
    return;
L_08A8D26C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D27Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D27Cu) goto L_08A8D27C;
    return;
L_08A8D27C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D28Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8D28Cu) goto L_08A8D28C;
    return;
L_08A8D28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4A0;
      }
      goto L_08A8D294;
    }
L_08A8D294:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8D29C;
L_08A8D29C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A8D2A8u);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8FCC4;
L_08A8D2A8:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A8D2E0;
    }
    goto L_08A8D2B0;
L_08A8D2B0:
    ctx.set_gpr(31, 0x08A8D2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2B8u) goto L_08A8D2B8;
    return;
L_08A8D2B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D2C8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D2C8u) goto L_08A8D2C8;
    return;
L_08A8D2C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8D2D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8D2D8u) goto L_08A8D2D8;
    return;
L_08A8D2D8:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A8D2E0;
L_08A8D2E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8D29C;
    }
    goto L_08A8D2EC;
L_08A8D2EC:
    ctx.set_gpr(31, 0x08A8D2F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 97u, 0x08A946FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D2F4u) goto L_08A8D2F4;
    return;
L_08A8D2F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D304u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8D800;
L_08A8D304:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18736)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 33 ? 1u : 0u);
        goto L_08A8D348;
    }
    goto L_08A8D31C;
L_08A8D31C:
    ctx.set_gpr(31, 0x08A8D324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D324u) goto L_08A8D324;
    return;
L_08A8D324:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D334u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D334u) goto L_08A8D334;
    return;
L_08A8D334:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8D344u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8D344u) goto L_08A8D344;
    return;
L_08A8D344:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 33 ? 1u : 0u);
    goto L_08A8D348;
L_08A8D348:
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D428;
      }
      goto L_08A8D350;
    }
L_08A8D350:
    ctx.set_gpr(31, 0x08A8D358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8D358u) goto L_08A8D358;
    return;
L_08A8D358:
    ctx.set_gpr(31, 0x08A8D360u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D360u) goto L_08A8D360;
    return;
L_08A8D360:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(31, 0x08A8D36Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 364u, 0x0886170Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D36Cu) goto L_08A8D36C;
    return;
L_08A8D36C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D3C0;
      }
      goto L_08A8D374;
    }
L_08A8D374:
    ctx.set_gpr(31, 0x08A8D37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D37Cu) goto L_08A8D37C;
    return;
L_08A8D37C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D38Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D38Cu) goto L_08A8D38C;
    return;
L_08A8D38C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D39Cu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8D800;
L_08A8D39C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8D3B8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8D3B8u) goto L_08A8D3B8;
    return;
L_08A8D3B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D46C;
      }
      goto L_08A8D3C0;
    }
L_08A8D3C0:
    ctx.set_gpr(31, 0x08A8D3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D3C8u) goto L_08A8D3C8;
    return;
L_08A8D3C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D3D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D3D8u) goto L_08A8D3D8;
    return;
L_08A8D3D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23792));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D3F8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8D3F8u) goto L_08A8D3F8;
    return;
L_08A8D3F8:
    ctx.set_gpr(31, 0x08A8D400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D400u) goto L_08A8D400;
    return;
L_08A8D400:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D410u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D410u) goto L_08A8D410;
    return;
L_08A8D410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8D420u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8D420u) goto L_08A8D420;
    return;
L_08A8D420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D46C;
      }
      goto L_08A8D428;
    }
L_08A8D428:
    ctx.set_gpr(31, 0x08A8D430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D430u) goto L_08A8D430;
    return;
L_08A8D430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D440u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D440u) goto L_08A8D440;
    return;
L_08A8D440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D450u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8D800;
L_08A8D450:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8D46Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8D46Cu) goto L_08A8D46C;
    return;
L_08A8D46C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D4A0;
      }
      goto L_08A8D474;
    }
L_08A8D474:
    ctx.set_gpr(31, 0x08A8D47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D47Cu) goto L_08A8D47C;
    return;
L_08A8D47C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D48Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D48Cu) goto L_08A8D48C;
    return;
L_08A8D48C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8D4A0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4A0u) goto L_08A8D4A0;
    return;
L_08A8D4A0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A8D4A4;
L_08A8D4A4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 229 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D218;
      }
      goto L_08A8D4B0;
    }
L_08A8D4B0:
    ctx.set_gpr(31, 0x08A8D4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4B8u) goto L_08A8D4B8;
    return;
L_08A8D4B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D4C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4C4u) goto L_08A8D4C4;
    return;
L_08A8D4C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D4D4;
    }
L_08A8D4D4:
    ctx.set_gpr(31, 0x08A8D4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4DCu) goto L_08A8D4DC;
    return;
L_08A8D4DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D4E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D4E8u) goto L_08A8D4E8;
    return;
L_08A8D4E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D4F0;
    }
L_08A8D4F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A8D50Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8D50Cu) goto L_08A8D50C;
    return;
L_08A8D50C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8D518u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D518u) goto L_08A8D518;
    return;
L_08A8D518:
    ctx.set_gpr(31, 0x08A8D520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8D520u) goto L_08A8D520;
    return;
L_08A8D520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8D530u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32328)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D530u) goto L_08A8D530;
    return;
L_08A8D530:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D53C;
    }
L_08A8D53C:
    ctx.set_gpr(31, 0x08A8D544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D544u) goto L_08A8D544;
    return;
L_08A8D544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D550u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D550u) goto L_08A8D550;
    return;
L_08A8D550:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D558;
    }
L_08A8D558:
    ctx.set_gpr(31, 0x08A8D560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D560u) goto L_08A8D560;
    return;
L_08A8D560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D570u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D570u) goto L_08A8D570;
    return;
L_08A8D570:
    ctx.set_gpr(31, 0x08A8D578u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8D578u) goto L_08A8D578;
    return;
L_08A8D578:
    ctx.set_gpr(31, 0x08A8D580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D580u) goto L_08A8D580;
    return;
L_08A8D580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D58Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D58Cu) goto L_08A8D58C;
    return;
L_08A8D58C:
    ctx.set_gpr(31, 0x08A8D594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D594u) goto L_08A8D594;
    return;
L_08A8D594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8D5A8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D5A8u) goto L_08A8D5A8;
    return;
L_08A8D5A8:
    ctx.set_gpr(31, 0x08A8D5B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5B0u) goto L_08A8D5B0;
    return;
L_08A8D5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D5BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D5BCu) goto L_08A8D5BC;
    return;
L_08A8D5BC:
    ctx.set_gpr(31, 0x08A8D5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5C4u) goto L_08A8D5C4;
    return;
L_08A8D5C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8D5D4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32324)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D5D4u) goto L_08A8D5D4;
    return;
L_08A8D5D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D5E0;
    }
L_08A8D5E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8D5F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 232u, 0x08A95114u>(ctx, &aot_mem) && ctx.pc == 0x08A8D5F4u) goto L_08A8D5F4;
    return;
L_08A8D5F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D5FC;
    }
L_08A8D5FC:
    ctx.set_gpr(31, 0x08A8D604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D604u) goto L_08A8D604;
    return;
L_08A8D604:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8D618u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D618u) goto L_08A8D618;
    return;
L_08A8D618:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8D624u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08A8D624u) goto L_08A8D624;
    return;
L_08A8D624:
    ctx.set_gpr(31, 0x08A8D62Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D62Cu) goto L_08A8D62C;
    return;
L_08A8D62C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A8D63Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D63Cu) goto L_08A8D63C;
    return;
L_08A8D63C:
    ctx.set_gpr(31, 0x08A8D644u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D644u) goto L_08A8D644;
    return;
L_08A8D644:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A8D654u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08A8D654u) goto L_08A8D654;
    return;
L_08A8D654:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D6D0;
      }
      goto L_08A8D65C;
    }
L_08A8D65C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17592)));
    ctx.set_gpr(31, 0x08A8D66Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08A8D66Cu) goto L_08A8D66C;
    return;
L_08A8D66C:
    ctx.set_gpr(31, 0x08A8D674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D674u) goto L_08A8D674;
    return;
L_08A8D674:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8D694u);
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D694u) goto L_08A8D694;
    return;
L_08A8D694:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A8D6A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6A4u) goto L_08A8D6A4;
    return;
L_08A8D6A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D6D0;
      }
      goto L_08A8D6AC;
    }
L_08A8D6AC:
    ctx.set_gpr(31, 0x08A8D6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D6B4u) goto L_08A8D6B4;
    return;
L_08A8D6B4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A8D6C4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6C4u) goto L_08A8D6C4;
    return;
L_08A8D6C4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A8D6D0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6D0u) goto L_08A8D6D0;
    return;
L_08A8D6D0:
    ctx.set_gpr(31, 0x08A8D6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6D8u) goto L_08A8D6D8;
    return;
L_08A8D6D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8D6ECu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6ECu) goto L_08A8D6EC;
    return;
L_08A8D6EC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D6F4;
    }
L_08A8D6F4:
    ctx.set_gpr(31, 0x08A8D6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D6FCu) goto L_08A8D6FC;
    return;
L_08A8D6FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D708u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D708u) goto L_08A8D708;
    return;
L_08A8D708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D4;
      }
      goto L_08A8D710;
    }
L_08A8D710:
    ctx.set_gpr(31, 0x08A8D718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D718u) goto L_08A8D718;
    return;
L_08A8D718:
    ctx.set_gpr(31, 0x08A8D720u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D720u) goto L_08A8D720;
    return;
L_08A8D720:
    ctx.set_gpr(31, 0x08A8D728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D728u) goto L_08A8D728;
    return;
L_08A8D728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D738u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D738u) goto L_08A8D738;
    return;
L_08A8D738:
    ctx.set_gpr(31, 0x08A8D740u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8D740u) goto L_08A8D740;
    return;
L_08A8D740:
    ctx.set_gpr(31, 0x08A8D748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D748u) goto L_08A8D748;
    return;
L_08A8D748:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D754u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D754u) goto L_08A8D754;
    return;
L_08A8D754:
    ctx.set_gpr(31, 0x08A8D75Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8D75Cu) goto L_08A8D75C;
    return;
L_08A8D75C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D768u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8D768u) goto L_08A8D768;
    return;
L_08A8D768:
    ctx.set_gpr(31, 0x08A8D770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D770u) goto L_08A8D770;
    return;
L_08A8D770:
    ctx.set_gpr(31, 0x08A8D778u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D778u) goto L_08A8D778;
    return;
L_08A8D778:
    ctx.set_gpr(31, 0x08A8D780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D780u) goto L_08A8D780;
    return;
L_08A8D780:
    ctx.set_gpr(31, 0x08A8D788u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D788u) goto L_08A8D788;
    return;
L_08A8D788:
    ctx.set_gpr(31, 0x08A8D790u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D790u) goto L_08A8D790;
    return;
L_08A8D790:
    ctx.set_gpr(31, 0x08A8D798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D798u) goto L_08A8D798;
    return;
L_08A8D798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8D7ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D7ACu) goto L_08A8D7AC;
    return;
L_08A8D7AC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19228), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18260)));
        goto L_08A8D7C4;
    }
    goto L_08A8D7BC;
L_08A8D7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A8D7DC;
      }
      goto L_08A8D7C4;
    }
L_08A8D7C4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
        goto L_08A8D7CC;
    }
    goto L_08A8D7CC;
L_08A8D7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D7D8;
      }
      goto L_08A8D7D4;
    }
L_08A8D7D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8D7D8;
L_08A8D7D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A8D7DC;
L_08A8D7DC:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D800:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6584));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A8D840u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 67u, 0x08A94514u>(ctx, &aot_mem) && ctx.pc == 0x08A8D840u) goto L_08A8D840;
    return;
L_08A8D840:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E9FC;
      }
      goto L_08A8D854;
    }
L_08A8D854:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26484));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D870:
    ctx.set_gpr(31, 0x08A8D878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D878u) goto L_08A8D878;
    return;
L_08A8D878:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8D888u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32272)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8D888u) goto L_08A8D888;
    return;
L_08A8D888:
    ctx.set_gpr(31, 0x08A8D890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8D890u) goto L_08A8D890;
    return;
L_08A8D890:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8D8A0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32276)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8D8A0u) goto L_08A8D8A0;
    return;
L_08A8D8A0:
    ctx.set_gpr(31, 0x08A8D8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8A8u) goto L_08A8D8A8;
    return;
L_08A8D8A8:
    ctx.set_gpr(31, 0x08A8D8B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8B0u) goto L_08A8D8B0;
    return;
L_08A8D8B0:
    ctx.set_gpr(31, 0x08A8D8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D8B8u) goto L_08A8D8B8;
    return;
L_08A8D8B8:
    ctx.set_gpr(31, 0x08A8D8C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D8C0u) goto L_08A8D8C0;
    return;
L_08A8D8C0:
    ctx.set_gpr(31, 0x08A8D8C8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8C8u) goto L_08A8D8C8;
    return;
L_08A8D8C8:
    ctx.set_gpr(31, 0x08A8D8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8D0u) goto L_08A8D8D0;
    return;
L_08A8D8D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16784u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08A8D8ECu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8ECu) goto L_08A8D8EC;
    return;
L_08A8D8EC:
    ctx.set_gpr(31, 0x08A8D8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D8F4u) goto L_08A8D8F4;
    return;
L_08A8D8F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49216u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8D910u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D910u) goto L_08A8D910;
    return;
L_08A8D910:
    ctx.set_gpr(31, 0x08A8D918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8D918u) goto L_08A8D918;
    return;
L_08A8D918:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8D930u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x08A8D930u) goto L_08A8D930;
    return;
L_08A8D930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D95Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8D95Cu) goto L_08A8D95C;
    return;
L_08A8D95C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D96Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8D96Cu) goto L_08A8D96C;
    return;
L_08A8D96C:
    ctx.set_gpr(18, 2230u << 16u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    goto L_08A8D980;
L_08A8D980:
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A8D9E4;
    }
    goto L_08A8D988;
L_08A8D988:
    ctx.set_gpr(31, 0x08A8D990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D990u) goto L_08A8D990;
    return;
L_08A8D990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8D9A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8D9A0u) goto L_08A8D9A0;
    return;
L_08A8D9A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8D9B0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08A8EAAC;
L_08A8D9B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8D9CCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9CCu) goto L_08A8D9CC;
    return;
L_08A8D9CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8D9D8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08A8EAAC;
L_08A8D9D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8DA98;
      }
      goto L_08A8D9E4;
    }
L_08A8D9E4:
    ctx.set_gpr(31, 0x08A8D9ECu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9ECu) goto L_08A8D9EC;
    return;
L_08A8D9EC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08A8DA50;
    }
    goto L_08A8D9F4;
L_08A8D9F4:
    ctx.set_gpr(31, 0x08A8D9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8D9FCu) goto L_08A8D9FC;
    return;
L_08A8D9FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DA0Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DA0Cu) goto L_08A8DA0C;
    return;
L_08A8DA0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DA1Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA1Cu) goto L_08A8DA1C;
    return;
L_08A8DA1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8DA38u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA38u) goto L_08A8DA38;
    return;
L_08A8DA38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8DA44u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA44u) goto L_08A8DA44;
    return;
L_08A8DA44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8DA98;
      }
      goto L_08A8DA50;
    }
L_08A8DA50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8DA60u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA60u) goto L_08A8DA60;
    return;
L_08A8DA60:
    ctx.set_gpr(31, 0x08A8DA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA68u) goto L_08A8DA68;
    return;
L_08A8DA68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DA78u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DA78u) goto L_08A8DA78;
    return;
L_08A8DA78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DA94u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8DA94u) goto L_08A8DA94;
    return;
L_08A8DA94:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), 0u);
    goto L_08A8DA98;
L_08A8DA98:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08A8D980;
      }
      goto L_08A8DAB0;
    }
L_08A8DAB0:
    ctx.set_gpr(31, 0x08A8DAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DAB8u) goto L_08A8DAB8;
    return;
L_08A8DAB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DAC8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DAC8u) goto L_08A8DAC8;
    return;
L_08A8DAC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DAD8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8DAD8u) goto L_08A8DAD8;
    return;
L_08A8DAD8:
    ctx.set_gpr(31, 0x08A8DAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DAE0u) goto L_08A8DAE0;
    return;
L_08A8DAE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DAF0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DAF0u) goto L_08A8DAF0;
    return;
L_08A8DAF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DAFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8DAFCu) goto L_08A8DAFC;
    return;
L_08A8DAFC:
    ctx.set_gpr(31, 0x08A8DB04u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB04u) goto L_08A8DB04;
    return;
L_08A8DB04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DB10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB10u) goto L_08A8DB10;
    return;
L_08A8DB10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8DB20;
    }
L_08A8DB20:
    ctx.set_gpr(31, 0x08A8DB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB28u) goto L_08A8DB28;
    return;
L_08A8DB28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DB34u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB34u) goto L_08A8DB34;
    return;
L_08A8DB34:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8EA88;
    }
    goto L_08A8DB3C;
L_08A8DB3C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8DB44;
    }
L_08A8DB44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8DB50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB50u) goto L_08A8DB50;
    return;
L_08A8DB50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A8DD6C;
    }
    goto L_08A8DB5C;
L_08A8DB5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
        goto L_08A8DC90;
    }
    goto L_08A8DB68;
L_08A8DB68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8DC50;
      }
      goto L_08A8DB74;
    }
L_08A8DB74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8DB88;
      }
      goto L_08A8DB80;
    }
L_08A8DB80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18408)));
      if (branch_taken) {
          goto L_08A8DD90;
      }
      goto L_08A8DB88;
    }
L_08A8DB88:
    ctx.set_gpr(31, 0x08A8DB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DB90u) goto L_08A8DB90;
    return;
L_08A8DB90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DBA0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DBA0u) goto L_08A8DBA0;
    return;
L_08A8DBA0:
    ctx.set_gpr(31, 0x08A8DBA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBA8u) goto L_08A8DBA8;
    return;
L_08A8DBA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD8C;
      }
      goto L_08A8DBB0;
    }
L_08A8DBB0:
    ctx.set_gpr(31, 0x08A8DBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBB8u) goto L_08A8DBB8;
    return;
L_08A8DBB8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8DBD0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DBD0u) goto L_08A8DBD0;
    return;
L_08A8DBD0:
    ctx.set_gpr(31, 0x08A8DBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBD8u) goto L_08A8DBD8;
    return;
L_08A8DBD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DBE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DBE8u) goto L_08A8DBE8;
    return;
L_08A8DBE8:
    ctx.set_gpr(31, 0x08A8DBF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DBF0u) goto L_08A8DBF0;
    return;
L_08A8DBF0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(18740)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DC10u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18736), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC10u) goto L_08A8DC10;
    return;
L_08A8DC10:
    ctx.set_gpr(31, 0x08A8DC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC18u) goto L_08A8DC18;
    return;
L_08A8DC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DC28u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DC28u) goto L_08A8DC28;
    return;
L_08A8DC28:
    ctx.set_gpr(31, 0x08A8DC30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC30u) goto L_08A8DC30;
    return;
L_08A8DC30:
    ctx.set_gpr(31, 0x08A8DC38u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18412), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC38u) goto L_08A8DC38;
    return;
L_08A8DC38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DC44u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC44u) goto L_08A8DC44;
    return;
L_08A8DC44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8DD8C;
      }
      goto L_08A8DC50;
    }
L_08A8DC50:
    ctx.set_gpr(31, 0x08A8DC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC58u) goto L_08A8DC58;
    return;
L_08A8DC58:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8DC70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DC70u) goto L_08A8DC70;
    return;
L_08A8DC70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8DC7Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC7Cu) goto L_08A8DC7C;
    return;
L_08A8DC7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DC88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8DC88u) goto L_08A8DC88;
    return;
L_08A8DC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD8C;
      }
      goto L_08A8DC90;
    }
L_08A8DC90:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18236)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DCE4;
      }
      goto L_08A8DC9C;
    }
L_08A8DC9C:
    ctx.set_gpr(31, 0x08A8DCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCA4u) goto L_08A8DCA4;
    return;
L_08A8DCA4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8DCB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DCB4u) goto L_08A8DCB4;
    return;
L_08A8DCB4:
    ctx.set_gpr(31, 0x08A8DCBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCBCu) goto L_08A8DCBC;
    return;
L_08A8DCBC:
    ctx.set_gpr(31, 0x08A8DCC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCC4u) goto L_08A8DCC4;
    return;
L_08A8DCC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8DCD0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCD0u) goto L_08A8DCD0;
    return;
L_08A8DCD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8DCDCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCDCu) goto L_08A8DCDC;
    return;
L_08A8DCDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A8DCE4;
L_08A8DCE4:
    ctx.set_gpr(31, 0x08A8DCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DCECu) goto L_08A8DCEC;
    return;
L_08A8DCEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DCFCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DCFCu) goto L_08A8DCFC;
    return;
L_08A8DCFC:
    ctx.set_gpr(31, 0x08A8DD04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD04u) goto L_08A8DD04;
    return;
L_08A8DD04:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8DD14u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD14u) goto L_08A8DD14;
    return;
L_08A8DD14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD28;
      }
      goto L_08A8DD1C;
    }
L_08A8DD1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD8C;
      }
      goto L_08A8DD28;
    }
L_08A8DD28:
    ctx.set_gpr(31, 0x08A8DD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD30u) goto L_08A8DD30;
    return;
L_08A8DD30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DD40u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DD40u) goto L_08A8DD40;
    return;
L_08A8DD40:
    ctx.set_gpr(31, 0x08A8DD48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD48u) goto L_08A8DD48;
    return;
L_08A8DD48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18236)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08A8DD64;
    }
    goto L_08A8DD58;
L_08A8DD58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8DD8C;
      }
      goto L_08A8DD64;
    }
L_08A8DD64:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8DD8C;
      }
      goto L_08A8DD6C;
    }
L_08A8DD6C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A8DD78u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD78u) goto L_08A8DD78;
    return;
L_08A8DD78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DD84u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD84u) goto L_08A8DD84;
    return;
L_08A8DD84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A8EA88;
      }
      goto L_08A8DD8C;
    }
L_08A8DD8C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18408)));
    goto L_08A8DD90;
L_08A8DD90:
    ctx.set_gpr(31, 0x08A8DD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DD98u) goto L_08A8DD98;
    return;
L_08A8DD98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DDA8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DDA8u) goto L_08A8DDA8;
    return;
L_08A8DDA8:
    ctx.set_gpr(31, 0x08A8DDB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDB0u) goto L_08A8DDB0;
    return;
L_08A8DDB0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8DDD8;
      }
      goto L_08A8DDB8;
    }
L_08A8DDB8:
    ctx.set_gpr(31, 0x08A8DDC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDC0u) goto L_08A8DDC0;
    return;
L_08A8DDC0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8DDD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DDD8u) goto L_08A8DDD8;
    return;
L_08A8DDD8:
    ctx.set_gpr(31, 0x08A8DDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDE0u) goto L_08A8DDE0;
    return;
L_08A8DDE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DDF0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DDF0u) goto L_08A8DDF0;
    return;
L_08A8DDF0:
    ctx.set_gpr(31, 0x08A8DDF8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DDF8u) goto L_08A8DDF8;
    return;
L_08A8DDF8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18408), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8DE00;
    }
L_08A8DE00:
    ctx.set_gpr(31, 0x08A8DE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE08u) goto L_08A8DE08;
    return;
L_08A8DE08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DE14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE14u) goto L_08A8DE14;
    return;
L_08A8DE14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DFB4;
      }
      goto L_08A8DE1C;
    }
L_08A8DE1C:
    ctx.set_gpr(31, 0x08A8DE24u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE24u) goto L_08A8DE24;
    return;
L_08A8DE24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DE34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DE34u) goto L_08A8DE34;
    return;
L_08A8DE34:
    ctx.set_gpr(31, 0x08A8DE3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE3Cu) goto L_08A8DE3C;
    return;
L_08A8DE3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8DF90;
      }
      goto L_08A8DE44;
    }
L_08A8DE44:
    ctx.set_gpr(31, 0x08A8DE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE4Cu) goto L_08A8DE4C;
    return;
L_08A8DE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DE5Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DE5Cu) goto L_08A8DE5C;
    return;
L_08A8DE5C:
    ctx.set_gpr(31, 0x08A8DE64u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE64u) goto L_08A8DE64;
    return;
L_08A8DE64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DE74u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DE74u) goto L_08A8DE74;
    return;
L_08A8DE74:
    ctx.set_gpr(31, 0x08A8DE7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE7Cu) goto L_08A8DE7C;
    return;
L_08A8DE7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8DE88u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE88u) goto L_08A8DE88;
    return;
L_08A8DE88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DF6C;
      }
      goto L_08A8DE90;
    }
L_08A8DE90:
    ctx.set_gpr(31, 0x08A8DE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DE98u) goto L_08A8DE98;
    return;
L_08A8DE98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DEA8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DEA8u) goto L_08A8DEA8;
    return;
L_08A8DEA8:
    ctx.set_gpr(31, 0x08A8DEB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEB0u) goto L_08A8DEB0;
    return;
L_08A8DEB0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18236)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
        goto L_08A8DF10;
    }
    goto L_08A8DEC4;
L_08A8DEC4:
    ctx.set_gpr(31, 0x08A8DECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DECCu) goto L_08A8DECC;
    return;
L_08A8DECC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8DEDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8DEDCu) goto L_08A8DEDC;
    return;
L_08A8DEDC:
    ctx.set_gpr(31, 0x08A8DEE4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEE4u) goto L_08A8DEE4;
    return;
L_08A8DEE4:
    ctx.set_gpr(31, 0x08A8DEECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEECu) goto L_08A8DEEC;
    return;
L_08A8DEEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8DEF8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8DEF8u) goto L_08A8DEF8;
    return;
L_08A8DEF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8DF04u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF04u) goto L_08A8DF04;
    return;
L_08A8DF04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    goto L_08A8DF10;
L_08A8DF10:
    ctx.set_gpr(31, 0x08A8DF18u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8FC28;
L_08A8DF18:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18312), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(31, 0x08A8DF2Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8DF2Cu) goto L_08A8DF2C;
    return;
L_08A8DF2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8DF38u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF38u) goto L_08A8DF38;
    return;
L_08A8DF38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DF4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF4Cu) goto L_08A8DF4C;
    return;
L_08A8DF4C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18236)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
        goto L_08A8DF64;
    }
    goto L_08A8DF58;
L_08A8DF58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8E0C4;
      }
      goto L_08A8DF64;
    }
L_08A8DF64:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8E0C4;
      }
      goto L_08A8DF6C;
    }
L_08A8DF6C:
    ctx.set_gpr(31, 0x08A8DF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF74u) goto L_08A8DF74;
    return;
L_08A8DF74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DF88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF88u) goto L_08A8DF88;
    return;
L_08A8DF88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A8E0C8;
      }
      goto L_08A8DF90;
    }
L_08A8DF90:
    ctx.set_gpr(31, 0x08A8DF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DF98u) goto L_08A8DF98;
    return;
L_08A8DF98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8DFACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8DFACu) goto L_08A8DFAC;
    return;
L_08A8DFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E0C4;
      }
      goto L_08A8DFB4;
    }
L_08A8DFB4:
    ctx.set_gpr(31, 0x08A8DFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFBCu) goto L_08A8DFBC;
    return;
L_08A8DFBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8DFC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFC8u) goto L_08A8DFC8;
    return;
L_08A8DFC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8E088;
      }
      goto L_08A8DFD4;
    }
L_08A8DFD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8DFE8;
      }
      goto L_08A8DFE0;
    }
L_08A8DFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E0C4;
      }
      goto L_08A8DFE8;
    }
L_08A8DFE8:
    ctx.set_gpr(31, 0x08A8DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8DFF0u) goto L_08A8DFF0;
    return;
L_08A8DFF0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E008u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E008u) goto L_08A8E008;
    return;
L_08A8E008:
    ctx.set_gpr(31, 0x08A8E010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E010u) goto L_08A8E010;
    return;
L_08A8E010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E020u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E020u) goto L_08A8E020;
    return;
L_08A8E020:
    ctx.set_gpr(31, 0x08A8E028u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8E028u) goto L_08A8E028;
    return;
L_08A8E028:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8E038u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8E038u) goto L_08A8E038;
    return;
L_08A8E038:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8E044u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E044u) goto L_08A8E044;
    return;
L_08A8E044:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E054u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E054u) goto L_08A8E054;
    return;
L_08A8E054:
    ctx.set_gpr(31, 0x08A8E05Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8E05Cu) goto L_08A8E05C;
    return;
L_08A8E05C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8E074u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E074u) goto L_08A8E074;
    return;
L_08A8E074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E080u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8E080u) goto L_08A8E080;
    return;
L_08A8E080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E0C4;
      }
      goto L_08A8E088;
    }
L_08A8E088:
    ctx.set_gpr(31, 0x08A8E090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E090u) goto L_08A8E090;
    return;
L_08A8E090:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E0A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E0A8u) goto L_08A8E0A8;
    return;
L_08A8E0A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8E0B8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18320), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0B8u) goto L_08A8E0B8;
    return;
L_08A8E0B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E0C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0C4u) goto L_08A8E0C4;
    return;
L_08A8E0C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8E0C8;
L_08A8E0C8:
    ctx.set_gpr(31, 0x08A8E0D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 939u, 0x08A93298u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0D0u) goto L_08A8E0D0;
    return;
L_08A8E0D0:
    ctx.set_gpr(31, 0x08A8E0D8u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18408)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0D8u) goto L_08A8E0D8;
    return;
L_08A8E0D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E0E8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E0E8u) goto L_08A8E0E8;
    return;
L_08A8E0E8:
    ctx.set_gpr(31, 0x08A8E0F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8E0F0u) goto L_08A8E0F0;
    return;
L_08A8E0F0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8E118;
      }
      goto L_08A8E0F8;
    }
L_08A8E0F8:
    ctx.set_gpr(31, 0x08A8E100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E100u) goto L_08A8E100;
    return;
L_08A8E100:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E118u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E118u) goto L_08A8E118;
    return;
L_08A8E118:
    ctx.set_gpr(31, 0x08A8E120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E120u) goto L_08A8E120;
    return;
L_08A8E120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E130u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E130u) goto L_08A8E130;
    return;
L_08A8E130:
    ctx.set_gpr(31, 0x08A8E138u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8E138u) goto L_08A8E138;
    return;
L_08A8E138:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18408), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E140;
    }
L_08A8E140:
    ctx.set_gpr(31, 0x08A8E148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E148u) goto L_08A8E148;
    return;
L_08A8E148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E154u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E154u) goto L_08A8E154;
    return;
L_08A8E154:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E15C;
    }
L_08A8E15C:
    ctx.set_gpr(31, 0x08A8E164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E164u) goto L_08A8E164;
    return;
L_08A8E164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E174u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E174u) goto L_08A8E174;
    return;
L_08A8E174:
    ctx.set_gpr(31, 0x08A8E17Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8E17Cu) goto L_08A8E17C;
    return;
L_08A8E17C:
    ctx.set_gpr(31, 0x08A8E184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E184u) goto L_08A8E184;
    return;
L_08A8E184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E190u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E190u) goto L_08A8E190;
    return;
L_08A8E190:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8E1A4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8E1A4u) goto L_08A8E1A4;
    return;
L_08A8E1A4:
    ctx.set_gpr(31, 0x08A8E1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E1ACu) goto L_08A8E1AC;
    return;
L_08A8E1AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E1BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E1BCu) goto L_08A8E1BC;
    return;
L_08A8E1BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E1C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(74));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E1C8u) goto L_08A8E1C8;
    return;
L_08A8E1C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8E1D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E1D4u) goto L_08A8E1D4;
    return;
L_08A8E1D4:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A8E1D8;
L_08A8E1D8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08A8E220;
      }
      goto L_08A8E1E0;
    }
L_08A8E1E0:
    ctx.set_gpr(31, 0x08A8E1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E1E8u) goto L_08A8E1E8;
    return;
L_08A8E1E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E1F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E1F8u) goto L_08A8E1F8;
    return;
L_08A8E1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23780));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E218u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E218u) goto L_08A8E218;
    return;
L_08A8E218:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8E3F4;
      }
      goto L_08A8E220;
    }
L_08A8E220:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(20, 0u + 0u);
        goto L_08A8E2CC;
    }
    goto L_08A8E22C;
L_08A8E22C:
    ctx.set_gpr(31, 0x08A8E234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E234u) goto L_08A8E234;
    return;
L_08A8E234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E244u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E244u) goto L_08A8E244;
    return;
L_08A8E244:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E254u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8EAAC;
L_08A8E254:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8E270u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E270u) goto L_08A8E270;
    return;
L_08A8E270:
    ctx.set_gpr(31, 0x08A8E278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E278u) goto L_08A8E278;
    return;
L_08A8E278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E288u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E288u) goto L_08A8E288;
    return;
L_08A8E288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8E298u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8E298u) goto L_08A8E298;
    return;
L_08A8E298:
    ctx.set_gpr(31, 0x08A8E2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E2A0u) goto L_08A8E2A0;
    return;
L_08A8E2A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E2B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E2B0u) goto L_08A8E2B0;
    return;
L_08A8E2B0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8E2C4u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E2C4u) goto L_08A8E2C4;
    return;
L_08A8E2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E3F0;
      }
      goto L_08A8E2CC;
    }
L_08A8E2CC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8E2D0;
L_08A8E2D0:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A8E2DCu);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8FC28;
L_08A8E2DC:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A8E314;
    }
    goto L_08A8E2E4;
L_08A8E2E4:
    ctx.set_gpr(31, 0x08A8E2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E2ECu) goto L_08A8E2EC;
    return;
L_08A8E2EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E2FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E2FCu) goto L_08A8E2FC;
    return;
L_08A8E2FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8E30Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8E30Cu) goto L_08A8E30C;
    return;
L_08A8E30C:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A8E314;
L_08A8E314:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8E2D0;
    }
    goto L_08A8E320;
L_08A8E320:
    ctx.set_gpr(31, 0x08A8E328u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 97u, 0x08A946FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E328u) goto L_08A8E328;
    return;
L_08A8E328:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E338u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8EAAC;
L_08A8E338:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18736)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E378;
      }
      goto L_08A8E350;
    }
L_08A8E350:
    ctx.set_gpr(31, 0x08A8E358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E358u) goto L_08A8E358;
    return;
L_08A8E358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E368u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E368u) goto L_08A8E368;
    return;
L_08A8E368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8E378u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8E378u) goto L_08A8E378;
    return;
L_08A8E378:
    ctx.set_gpr(31, 0x08A8E380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E380u) goto L_08A8E380;
    return;
L_08A8E380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E390u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E390u) goto L_08A8E390;
    return;
L_08A8E390:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E3A0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_08A8EAAC;
L_08A8E3A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8E3BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E3BCu) goto L_08A8E3BC;
    return;
L_08A8E3BC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E3F0;
      }
      goto L_08A8E3C4;
    }
L_08A8E3C4:
    ctx.set_gpr(31, 0x08A8E3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E3CCu) goto L_08A8E3CC;
    return;
L_08A8E3CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E3DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E3DCu) goto L_08A8E3DC;
    return;
L_08A8E3DC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8E3F0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 639u, 0x08AF28A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E3F0u) goto L_08A8E3F0;
    return;
L_08A8E3F0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A8E3F4;
L_08A8E3F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 74 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E1D8;
      }
      goto L_08A8E400;
    }
L_08A8E400:
    ctx.set_gpr(31, 0x08A8E408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E408u) goto L_08A8E408;
    return;
L_08A8E408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E418u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E418u) goto L_08A8E418;
    return;
L_08A8E418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8E428u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8E428u) goto L_08A8E428;
    return;
L_08A8E428:
    ctx.set_gpr(31, 0x08A8E430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8E430u) goto L_08A8E430;
    return;
L_08A8E430:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8E440u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32280)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8E440u) goto L_08A8E440;
    return;
L_08A8E440:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A8E45Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8E45Cu) goto L_08A8E45C;
    return;
L_08A8E45C:
    ctx.set_gpr(31, 0x08A8E464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E464u) goto L_08A8E464;
    return;
L_08A8E464:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E470u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8E470u) goto L_08A8E470;
    return;
L_08A8E470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E480;
    }
L_08A8E480:
    ctx.set_gpr(31, 0x08A8E488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E488u) goto L_08A8E488;
    return;
L_08A8E488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E494u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E494u) goto L_08A8E494;
    return;
L_08A8E494:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E49C;
    }
L_08A8E49C:
    ctx.set_gpr(31, 0x08A8E4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4A4u) goto L_08A8E4A4;
    return;
L_08A8E4A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E4B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E4B4u) goto L_08A8E4B4;
    return;
L_08A8E4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E4C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E4C0u) goto L_08A8E4C0;
    return;
L_08A8E4C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E4CC;
    }
L_08A8E4CC:
    ctx.set_gpr(31, 0x08A8E4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4D4u) goto L_08A8E4D4;
    return;
L_08A8E4D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E4E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4E0u) goto L_08A8E4E0;
    return;
L_08A8E4E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E4E8;
    }
L_08A8E4E8:
    ctx.set_gpr(31, 0x08A8E4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E4F0u) goto L_08A8E4F0;
    return;
L_08A8E4F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E500u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E500u) goto L_08A8E500;
    return;
L_08A8E500:
    ctx.set_gpr(31, 0x08A8E508u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8E508u) goto L_08A8E508;
    return;
L_08A8E508:
    ctx.set_gpr(31, 0x08A8E510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E510u) goto L_08A8E510;
    return;
L_08A8E510:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E51Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E51Cu) goto L_08A8E51C;
    return;
L_08A8E51C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8E528u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E528u) goto L_08A8E528;
    return;
L_08A8E528:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E538u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8E538u) goto L_08A8E538;
    return;
L_08A8E538:
    ctx.set_gpr(31, 0x08A8E540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E540u) goto L_08A8E540;
    return;
L_08A8E540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E550u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E550u) goto L_08A8E550;
    return;
L_08A8E550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E55Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E55Cu) goto L_08A8E55C;
    return;
L_08A8E55C:
    ctx.set_gpr(18, 2230u << 16u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    goto L_08A8E570;
L_08A8E570:
    if (ctx.gpr[20] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A8E5D4;
    }
    goto L_08A8E578;
L_08A8E578:
    ctx.set_gpr(31, 0x08A8E580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E580u) goto L_08A8E580;
    return;
L_08A8E580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E590u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E590u) goto L_08A8E590;
    return;
L_08A8E590:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E5A0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08A8EAAC;
L_08A8E5A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8E5BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5BCu) goto L_08A8E5BC;
    return;
L_08A8E5BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8E5C8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08A8EAAC;
L_08A8E5C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8E688;
      }
      goto L_08A8E5D4;
    }
L_08A8E5D4:
    ctx.set_gpr(31, 0x08A8E5DCu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5DCu) goto L_08A8E5DC;
    return;
L_08A8E5DC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2230u << 16u);
        goto L_08A8E640;
    }
    goto L_08A8E5E4;
L_08A8E5E4:
    ctx.set_gpr(31, 0x08A8E5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E5ECu) goto L_08A8E5EC;
    return;
L_08A8E5EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E5FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E5FCu) goto L_08A8E5FC;
    return;
L_08A8E5FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E60Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E60Cu) goto L_08A8E60C;
    return;
L_08A8E60C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8E628u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E628u) goto L_08A8E628;
    return;
L_08A8E628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8E634u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E634u) goto L_08A8E634;
    return;
L_08A8E634:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8E688;
      }
      goto L_08A8E640;
    }
L_08A8E640:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8E650u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E650u) goto L_08A8E650;
    return;
L_08A8E650:
    ctx.set_gpr(31, 0x08A8E658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E658u) goto L_08A8E658;
    return;
L_08A8E658:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E668u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E668u) goto L_08A8E668;
    return;
L_08A8E668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E684u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8E684u) goto L_08A8E684;
    return;
L_08A8E684:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(18740), 0u);
    goto L_08A8E688;
L_08A8E688:
    ctx.set_gpr(31, 0x08A8E690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E690u) goto L_08A8E690;
    return;
L_08A8E690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E6A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E6A0u) goto L_08A8E6A0;
    return;
L_08A8E6A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E6B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A8E6B0u) goto L_08A8E6B0;
    return;
L_08A8E6B0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_08A8E570;
      }
      goto L_08A8E6C8;
    }
L_08A8E6C8:
    ctx.set_gpr(31, 0x08A8E6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8E6D0u) goto L_08A8E6D0;
    return;
L_08A8E6D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8E6E0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32276)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8E6E0u) goto L_08A8E6E0;
    return;
L_08A8E6E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E70Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8E70Cu) goto L_08A8E70C;
    return;
L_08A8E70C:
    ctx.set_gpr(31, 0x08A8E714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E714u) goto L_08A8E714;
    return;
L_08A8E714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E724u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E724u) goto L_08A8E724;
    return;
L_08A8E724:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8E730u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A8E730u) goto L_08A8E730;
    return;
L_08A8E730:
    ctx.set_gpr(31, 0x08A8E738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E738u) goto L_08A8E738;
    return;
L_08A8E738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E748u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E748u) goto L_08A8E748;
    return;
L_08A8E748:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18412)));
    ctx.set_gpr(31, 0x08A8E754u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E754u) goto L_08A8E754;
    return;
L_08A8E754:
    ctx.set_gpr(31, 0x08A8E75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E75Cu) goto L_08A8E75C;
    return;
L_08A8E75C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E768u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8E768u) goto L_08A8E768;
    return;
L_08A8E768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E778;
    }
L_08A8E778:
    ctx.set_gpr(31, 0x08A8E780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E780u) goto L_08A8E780;
    return;
L_08A8E780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E78Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E78Cu) goto L_08A8E78C;
    return;
L_08A8E78C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E794;
    }
L_08A8E794:
    ctx.set_gpr(31, 0x08A8E79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8E79Cu) goto L_08A8E79C;
    return;
L_08A8E79C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E7ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E7ACu) goto L_08A8E7AC;
    return;
L_08A8E7AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E7B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8E7B8u) goto L_08A8E7B8;
    return;
L_08A8E7B8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E7C0;
    }
L_08A8E7C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A8E7D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A8E7D0u) goto L_08A8E7D0;
    return;
L_08A8E7D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E7D8;
    }
L_08A8E7D8:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8E7E0;
L_08A8E7E0:
    ctx.set_gpr(31, 0x08A8E7E8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A8FC28;
L_08A8E7E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E7F8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8E7F8u) goto L_08A8E7F8;
    return;
L_08A8E7F8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8E7E0;
    }
    goto L_08A8E808;
L_08A8E808:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E824u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E824u) goto L_08A8E824;
    return;
L_08A8E824:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E834;
    }
L_08A8E834:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A8E888;
    }
    goto L_08A8E848;
L_08A8E848:
    ctx.set_gpr(31, 0x08A8E850u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E850u) goto L_08A8E850;
    return;
L_08A8E850:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E868u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E868u) goto L_08A8E868;
    return;
L_08A8E868:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E880u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E880u) goto L_08A8E880;
    return;
L_08A8E880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E888;
    }
L_08A8E888:
    ctx.set_gpr(31, 0x08A8E890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 324u, 0x08A9584Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E890u) goto L_08A8E890;
    return;
L_08A8E890:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E898;
    }
L_08A8E898:
    ctx.set_gpr(31, 0x08A8E8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E8A0u) goto L_08A8E8A0;
    return;
L_08A8E8A0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E8B8u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E8B8u) goto L_08A8E8B8;
    return;
L_08A8E8B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E8D0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E8D0u) goto L_08A8E8D0;
    return;
L_08A8E8D0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E8D8;
    }
L_08A8E8D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A8E8E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A8E8E8u) goto L_08A8E8E8;
    return;
L_08A8E8E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E8F0;
    }
L_08A8E8F0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8E8F8;
L_08A8E8F8:
    ctx.set_gpr(31, 0x08A8E900u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08A8FC28;
L_08A8E900:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8E910u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8E910u) goto L_08A8E910;
    return;
L_08A8E910:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8E8F8;
    }
    goto L_08A8E920;
L_08A8E920:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E93Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E93Cu) goto L_08A8E93C;
    return;
L_08A8E93C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
        goto L_08A8E978;
    }
    goto L_08A8E948;
L_08A8E948:
    ctx.set_gpr(31, 0x08A8E950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E950u) goto L_08A8E950;
    return;
L_08A8E950:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E968u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E968u) goto L_08A8E968;
    return;
L_08A8E968:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E978;
    }
L_08A8E978:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E984;
    }
L_08A8E984:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8E998u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 324u, 0x08A9584Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8E998u) goto L_08A8E998;
    return;
L_08A8E998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E9A0;
    }
L_08A8E9A0:
    ctx.set_gpr(31, 0x08A8E9A8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8E9A8u) goto L_08A8E9A8;
    return;
L_08A8E9A8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8E9C0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8E9C0u) goto L_08A8E9C0;
    return;
L_08A8E9C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A8E9D8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8E9D8u) goto L_08A8E9D8;
    return;
L_08A8E9D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18312)));
    ctx.set_gpr(31, 0x08A8E9F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8E9F0u) goto L_08A8E9F0;
    return;
L_08A8E9F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8E9FC;
    }
L_08A8E9FC:
    ctx.set_gpr(31, 0x08A8EA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA04u) goto L_08A8EA04;
    return;
L_08A8EA04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EA10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA10u) goto L_08A8EA10;
    return;
L_08A8EA10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EA84;
      }
      goto L_08A8EA18;
    }
L_08A8EA18:
    ctx.set_gpr(31, 0x08A8EA20u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19228), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EA20u) goto L_08A8EA20;
    return;
L_08A8EA20:
    ctx.set_gpr(31, 0x08A8EA28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA28u) goto L_08A8EA28;
    return;
L_08A8EA28:
    ctx.set_gpr(31, 0x08A8EA30u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18252), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA30u) goto L_08A8EA30;
    return;
L_08A8EA30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8EA48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8EA48u) goto L_08A8EA48;
    return;
L_08A8EA48:
    ctx.set_gpr(31, 0x08A8EA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA50u) goto L_08A8EA50;
    return;
L_08A8EA50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EA60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EA60u) goto L_08A8EA60;
    return;
L_08A8EA60:
    ctx.set_gpr(31, 0x08A8EA68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA68u) goto L_08A8EA68;
    return;
L_08A8EA68:
    ctx.set_gpr(31, 0x08A8EA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EA70u) goto L_08A8EA70;
    return;
L_08A8EA70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EA7Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EA7Cu) goto L_08A8EA7C;
    return;
L_08A8EA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
      if (branch_taken) {
          goto L_08A8EA88;
      }
      goto L_08A8EA84;
    }
L_08A8EA84:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8EA88;
L_08A8EA88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EAAC:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14852));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EAC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A8F338;
      }
      goto L_08A8EAF0;
    }
L_08A8EAF0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26428));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EB0C:
    ctx.set_gpr(31, 0x08A8EB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EB14u) goto L_08A8EB14;
    return;
L_08A8EB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8EB24u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32080)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB24u) goto L_08A8EB24;
    return;
L_08A8EB24:
    ctx.set_gpr(31, 0x08A8EB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB2Cu) goto L_08A8EB2C;
    return;
L_08A8EB2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8EB3Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32084)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8EB3Cu) goto L_08A8EB3C;
    return;
L_08A8EB3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EB4Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB4Cu) goto L_08A8EB4C;
    return;
L_08A8EB4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8EB58u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A8F3DC;
L_08A8EB58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EBA0;
      }
      goto L_08A8EB60;
    }
L_08A8EB60:
    ctx.set_gpr(31, 0x08A8EB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB68u) goto L_08A8EB68;
    return;
L_08A8EB68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EB78u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EB78u) goto L_08A8EB78;
    return;
L_08A8EB78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23756)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EB98u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8EB98u) goto L_08A8EB98;
    return;
L_08A8EB98:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A8EBF8;
      }
      goto L_08A8EBA0;
    }
L_08A8EBA0:
    ctx.set_gpr(31, 0x08A8EBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EBA8u) goto L_08A8EBA8;
    return;
L_08A8EBA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EBB8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EBB8u) goto L_08A8EBB8;
    return;
L_08A8EBB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EBC8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A8F3DC;
L_08A8EBC8:
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2356));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8EBF4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8EBF4u) goto L_08A8EBF4;
    return;
L_08A8EBF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A8EBF8;
L_08A8EBF8:
    ctx.set_gpr(31, 0x08A8EC00u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A8F3DC;
L_08A8EC00:
    ctx.set_gpr(31, 0x08A8EC08u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18332), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC08u) goto L_08A8EC08;
    return;
L_08A8EC08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EC18u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EC18u) goto L_08A8EC18;
    return;
L_08A8EC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EC24u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8EC24u) goto L_08A8EC24;
    return;
L_08A8EC24:
    ctx.set_gpr(31, 0x08A8EC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC2Cu) goto L_08A8EC2C;
    return;
L_08A8EC2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EC38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC38u) goto L_08A8EC38;
    return;
L_08A8EC38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EC64u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC64u) goto L_08A8EC64;
    return;
L_08A8EC64:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18268), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), 0u);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EC78;
    }
L_08A8EC78:
    ctx.set_gpr(31, 0x08A8EC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC80u) goto L_08A8EC80;
    return;
L_08A8EC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EC8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EC8Cu) goto L_08A8EC8C;
    return;
L_08A8EC8C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8F3C4;
    }
    goto L_08A8EC94;
L_08A8EC94:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EC9C;
    }
L_08A8EC9C:
    ctx.set_gpr(31, 0x08A8ECA4u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECA4u) goto L_08A8ECA4;
    return;
L_08A8ECA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8ECB4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8ECB4u) goto L_08A8ECB4;
    return;
L_08A8ECB4:
    ctx.set_gpr(31, 0x08A8ECBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECBCu) goto L_08A8ECBC;
    return;
L_08A8ECBC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8ED0C;
      }
      goto L_08A8ECC4;
    }
L_08A8ECC4:
    ctx.set_gpr(31, 0x08A8ECCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECCCu) goto L_08A8ECCC;
    return;
L_08A8ECCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8ECDCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8ECDCu) goto L_08A8ECDC;
    return;
L_08A8ECDC:
    ctx.set_gpr(31, 0x08A8ECE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECE4u) goto L_08A8ECE4;
    return;
L_08A8ECE4:
    ctx.set_gpr(31, 0x08A8ECECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8ECECu) goto L_08A8ECEC;
    return;
L_08A8ECEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32084));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A8ED0Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8ED0Cu) goto L_08A8ED0C;
    return;
L_08A8ED0C:
    ctx.set_gpr(31, 0x08A8ED14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED14u) goto L_08A8ED14;
    return;
L_08A8ED14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8ED20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED20u) goto L_08A8ED20;
    return;
L_08A8ED20:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8ED58;
    }
    goto L_08A8ED28;
L_08A8ED28:
    ctx.set_gpr(31, 0x08A8ED30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8ED30u) goto L_08A8ED30;
    return;
L_08A8ED30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18332)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2360));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8ED54u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 375u, 0x08AB15ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8ED54u) goto L_08A8ED54;
    return;
L_08A8ED54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8ED58;
L_08A8ED58:
    ctx.set_gpr(31, 0x08A8ED60u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED60u) goto L_08A8ED60;
    return;
L_08A8ED60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A8EE08;
    }
    goto L_08A8ED6C;
L_08A8ED6C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A8EDEC;
    }
    goto L_08A8ED78;
L_08A8ED78:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8ED8C;
      }
      goto L_08A8ED84;
    }
L_08A8ED84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8ED8C;
    }
L_08A8ED8C:
    ctx.set_gpr(31, 0x08A8ED94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8ED94u) goto L_08A8ED94;
    return;
L_08A8ED94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EDA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EDA4u) goto L_08A8EDA4;
    return;
L_08A8EDA4:
    ctx.set_gpr(31, 0x08A8EDACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDACu) goto L_08A8EDAC;
    return;
L_08A8EDAC:
    ctx.set_gpr(31, 0x08A8EDB4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDB4u) goto L_08A8EDB4;
    return;
L_08A8EDB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8EDC4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32092)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8EDC4u) goto L_08A8EDC4;
    return;
L_08A8EDC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A8EDE0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDE0u) goto L_08A8EDE0;
    return;
L_08A8EDE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EDEC;
    }
L_08A8EDEC:
    ctx.set_gpr(31, 0x08A8EDF4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EDF4u) goto L_08A8EDF4;
    return;
L_08A8EDF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EE00u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE00u) goto L_08A8EE00;
    return;
L_08A8EE00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EE08;
    }
L_08A8EE08:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18332)));
    ctx.set_gpr(31, 0x08A8EE1Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 258u, 0x08A7D184u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE1Cu) goto L_08A8EE1C;
    return;
L_08A8EE1C:
    ctx.set_gpr(31, 0x08A8EE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE24u) goto L_08A8EE24;
    return;
L_08A8EE24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EE30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE30u) goto L_08A8EE30;
    return;
L_08A8EE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EE38;
    }
L_08A8EE38:
    ctx.set_gpr(31, 0x08A8EE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE40u) goto L_08A8EE40;
    return;
L_08A8EE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EE4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE4Cu) goto L_08A8EE4C;
    return;
L_08A8EE4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEF8;
      }
      goto L_08A8EE54;
    }
L_08A8EE54:
    ctx.set_gpr(31, 0x08A8EE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE5Cu) goto L_08A8EE5C;
    return;
L_08A8EE5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EE68u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8EE68u) goto L_08A8EE68;
    return;
L_08A8EE68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8EE90;
      }
      goto L_08A8EE74;
    }
L_08A8EE74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08A8EE88;
    }
    goto L_08A8EE80;
L_08A8EE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EE9C;
      }
      goto L_08A8EE88;
    }
L_08A8EE88:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EE90;
    }
L_08A8EE90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EE9C;
    }
L_08A8EE9C:
    ctx.set_gpr(31, 0x08A8EEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEA4u) goto L_08A8EEA4;
    return;
L_08A8EEA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EEB4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EEB4u) goto L_08A8EEB4;
    return;
L_08A8EEB4:
    ctx.set_gpr(31, 0x08A8EEBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEBCu) goto L_08A8EEBC;
    return;
L_08A8EEBC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18256), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18232)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8EED8;
      }
      goto L_08A8EED0;
    }
L_08A8EED0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18256)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18332), ctx.gpr[2]);
    goto L_08A8EED8;
L_08A8EED8:
    ctx.set_gpr(31, 0x08A8EEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEE0u) goto L_08A8EEE0;
    return;
L_08A8EEE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EEECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8EEECu) goto L_08A8EEEC;
    return;
L_08A8EEEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EEF8;
    }
L_08A8EEF8:
    ctx.set_gpr(31, 0x08A8EF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF00u) goto L_08A8EF00;
    return;
L_08A8EF00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EF0Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF0Cu) goto L_08A8EF0C;
    return;
L_08A8EF0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EF14;
    }
L_08A8EF14:
    ctx.set_gpr(31, 0x08A8EF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EF1Cu) goto L_08A8EF1C;
    return;
L_08A8EF1C:
    ctx.set_gpr(31, 0x08A8EF24u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF24u) goto L_08A8EF24;
    return;
L_08A8EF24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EF34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EF34u) goto L_08A8EF34;
    return;
L_08A8EF34:
    ctx.set_gpr(31, 0x08A8EF3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF3Cu) goto L_08A8EF3C;
    return;
L_08A8EF3C:
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2360));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8EF5Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 375u, 0x08AB15ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8EF5Cu) goto L_08A8EF5C;
    return;
L_08A8EF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EF64;
    }
L_08A8EF64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18268)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
        goto L_08A8EFCC;
    }
    goto L_08A8EF70;
L_08A8EF70:
    ctx.set_gpr(31, 0x08A8EF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF78u) goto L_08A8EF78;
    return;
L_08A8EF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EF84u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF84u) goto L_08A8EF84;
    return;
L_08A8EF84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EF8C;
    }
L_08A8EF8C:
    ctx.set_gpr(31, 0x08A8EF94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EF94u) goto L_08A8EF94;
    return;
L_08A8EF94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EFA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EFA4u) goto L_08A8EFA4;
    return;
L_08A8EFA4:
    ctx.set_gpr(31, 0x08A8EFACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8EFACu) goto L_08A8EFAC;
    return;
L_08A8EFAC:
    ctx.set_gpr(31, 0x08A8EFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EFB4u) goto L_08A8EFB4;
    return;
L_08A8EFB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8EFC0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EFC0u) goto L_08A8EFC0;
    return;
L_08A8EFC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18268), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8EFCC;
    }
L_08A8EFCC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8EFD8u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8EFD8u) goto L_08A8EFD8;
    return;
L_08A8EFD8:
    ctx.set_gpr(31, 0x08A8EFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8EFE0u) goto L_08A8EFE0;
    return;
L_08A8EFE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8EFF0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8EFF0u) goto L_08A8EFF0;
    return;
L_08A8EFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(31, 0x08A8F000u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23740)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F000u) goto L_08A8F000;
    return;
L_08A8F000:
    ctx.set_gpr(31, 0x08A8F008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F008u) goto L_08A8F008;
    return;
L_08A8F008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F018u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F018u) goto L_08A8F018;
    return;
L_08A8F018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F024u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(43));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F024u) goto L_08A8F024;
    return;
L_08A8F024:
    ctx.set_gpr(17, 2230u << 16u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-2360));
    goto L_08A8F030;
L_08A8F030:
    ctx.set_gpr(31, 0x08A8F038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F038u) goto L_08A8F038;
    return;
L_08A8F038:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F048u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F048u) goto L_08A8F048;
    return;
L_08A8F048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F064u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8F064u) goto L_08A8F064;
    return;
L_08A8F064:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 43 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A8F030;
      }
      goto L_08A8F074;
    }
L_08A8F074:
    ctx.set_gpr(31, 0x08A8F07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F07Cu) goto L_08A8F07C;
    return;
L_08A8F07C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F08Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F08Cu) goto L_08A8F08C;
    return;
L_08A8F08C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F098u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8F098u) goto L_08A8F098;
    return;
L_08A8F098:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F0A8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0A8u) goto L_08A8F0A8;
    return;
L_08A8F0A8:
    ctx.set_gpr(31, 0x08A8F0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0B0u) goto L_08A8F0B0;
    return;
L_08A8F0B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F0BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0BCu) goto L_08A8F0BC;
    return;
L_08A8F0BC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18268), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F0D0;
    }
L_08A8F0D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18268)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, 0u + 0u);
        goto L_08A8F138;
    }
    goto L_08A8F0DC;
L_08A8F0DC:
    ctx.set_gpr(31, 0x08A8F0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0E4u) goto L_08A8F0E4;
    return;
L_08A8F0E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F0F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F0F0u) goto L_08A8F0F0;
    return;
L_08A8F0F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F0F8;
    }
L_08A8F0F8:
    ctx.set_gpr(31, 0x08A8F100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F100u) goto L_08A8F100;
    return;
L_08A8F100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F110u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F110u) goto L_08A8F110;
    return;
L_08A8F110:
    ctx.set_gpr(31, 0x08A8F118u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8F118u) goto L_08A8F118;
    return;
L_08A8F118:
    ctx.set_gpr(31, 0x08A8F120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F120u) goto L_08A8F120;
    return;
L_08A8F120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F12Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F12Cu) goto L_08A8F12C;
    return;
L_08A8F12C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18268), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F138;
    }
L_08A8F138:
    ctx.set_gpr(31, 0x08A8F140u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8F140u) goto L_08A8F140;
    return;
L_08A8F140:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18332)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F18C;
      }
      goto L_08A8F14C;
    }
L_08A8F14C:
    ctx.set_gpr(31, 0x08A8F154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F154u) goto L_08A8F154;
    return;
L_08A8F154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F164u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F164u) goto L_08A8F164;
    return;
L_08A8F164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23756)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F184u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8F184u) goto L_08A8F184;
    return;
L_08A8F184:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18268), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A8F1D4;
      }
      goto L_08A8F18C;
    }
L_08A8F18C:
    ctx.set_gpr(31, 0x08A8F194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F194u) goto L_08A8F194;
    return;
L_08A8F194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F1A4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F1A4u) goto L_08A8F1A4;
    return;
L_08A8F1A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2356));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8F1D0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1D0u) goto L_08A8F1D0;
    return;
L_08A8F1D0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18268), static_cast<std::uint8_t>(0u));
    goto L_08A8F1D4;
L_08A8F1D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F1E4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F1E4u) goto L_08A8F1E4;
    return;
L_08A8F1E4:
    ctx.set_gpr(31, 0x08A8F1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1ECu) goto L_08A8F1EC;
    return;
L_08A8F1EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F1F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8F1F8u) goto L_08A8F1F8;
    return;
L_08A8F1F8:
    ctx.set_gpr(31, 0x08A8F200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F200u) goto L_08A8F200;
    return;
L_08A8F200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F210u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F210u) goto L_08A8F210;
    return;
L_08A8F210:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A8F21Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A8F21Cu) goto L_08A8F21C;
    return;
L_08A8F21C:
    ctx.set_gpr(31, 0x08A8F224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8F224u) goto L_08A8F224;
    return;
L_08A8F224:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32084));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A8F244u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8F244u) goto L_08A8F244;
    return;
L_08A8F244:
    ctx.set_gpr(31, 0x08A8F24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F24Cu) goto L_08A8F24C;
    return;
L_08A8F24C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F25Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F25Cu) goto L_08A8F25C;
    return;
L_08A8F25C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F268u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F268u) goto L_08A8F268;
    return;
L_08A8F268:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F294u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8F294u) goto L_08A8F294;
    return;
L_08A8F294:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F2A4;
    }
L_08A8F2A4:
    ctx.set_gpr(31, 0x08A8F2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2ACu) goto L_08A8F2AC;
    return;
L_08A8F2AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F2B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2B8u) goto L_08A8F2B8;
    return;
L_08A8F2B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F2C0;
    }
L_08A8F2C0:
    ctx.set_gpr(31, 0x08A8F2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2C8u) goto L_08A8F2C8;
    return;
L_08A8F2C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F2D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F2D8u) goto L_08A8F2D8;
    return;
L_08A8F2D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F2E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8F2E4u) goto L_08A8F2E4;
    return;
L_08A8F2E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F2F0;
    }
L_08A8F2F0:
    ctx.set_gpr(31, 0x08A8F2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F2F8u) goto L_08A8F2F8;
    return;
L_08A8F2F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F304u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F304u) goto L_08A8F304;
    return;
L_08A8F304:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F30C;
    }
L_08A8F30C:
    ctx.set_gpr(31, 0x08A8F314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F314u) goto L_08A8F314;
    return;
L_08A8F314:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F324u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F324u) goto L_08A8F324;
    return;
L_08A8F324:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F330u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8F330u) goto L_08A8F330;
    return;
L_08A8F330:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F338;
    }
L_08A8F338:
    ctx.set_gpr(31, 0x08A8F340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F340u) goto L_08A8F340;
    return;
L_08A8F340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F34Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F34Cu) goto L_08A8F34C;
    return;
L_08A8F34C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3C0;
      }
      goto L_08A8F354;
    }
L_08A8F354:
    ctx.set_gpr(31, 0x08A8F35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F35Cu) goto L_08A8F35C;
    return;
L_08A8F35C:
    ctx.set_gpr(31, 0x08A8F364u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F364u) goto L_08A8F364;
    return;
L_08A8F364:
    ctx.set_gpr(31, 0x08A8F36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F36Cu) goto L_08A8F36C;
    return;
L_08A8F36C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8F37Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F37Cu) goto L_08A8F37C;
    return;
L_08A8F37C:
    ctx.set_gpr(31, 0x08A8F384u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8F384u) goto L_08A8F384;
    return;
L_08A8F384:
    ctx.set_gpr(31, 0x08A8F38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8F38Cu) goto L_08A8F38C;
    return;
L_08A8F38C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F398u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F398u) goto L_08A8F398;
    return;
L_08A8F398:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
        goto L_08A8F3B4;
    }
    goto L_08A8F3A8;
L_08A8F3A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A8F3C4;
      }
      goto L_08A8F3B4;
    }
L_08A8F3B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8F3C4;
      }
      goto L_08A8F3C0;
    }
L_08A8F3C0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8F3C4;
L_08A8F3C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F3DC:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3556)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F3F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8F430u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F430u) goto L_08A8F430;
    return;
L_08A8F430:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F43Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F43Cu) goto L_08A8F43C;
    return;
L_08A8F43C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x08A8F454u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F454u) goto L_08A8F454;
    return;
L_08A8F454:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F460u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F460u) goto L_08A8F460;
    return;
L_08A8F460:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08A8F478u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F478u) goto L_08A8F478;
    return;
L_08A8F478:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F484u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F484u) goto L_08A8F484;
    return;
L_08A8F484:
    ctx.set_gpr(31, 0x08A8F48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F48Cu) goto L_08A8F48C;
    return;
L_08A8F48C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F498u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 462u, 0x08A85A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F498u) goto L_08A8F498;
    return;
L_08A8F498:
    ctx.set_gpr(31, 0x08A8F4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F4A0u) goto L_08A8F4A0;
    return;
L_08A8F4A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F4ACu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 535u, 0x0884A0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A8F4ACu) goto L_08A8F4AC;
    return;
L_08A8F4AC:
    ctx.set_gpr(31, 0x08A8F4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F4B4u) goto L_08A8F4B4;
    return;
L_08A8F4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F4C0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 461u, 0x08A85A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F4C0u) goto L_08A8F4C0;
    return;
L_08A8F4C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A8F4CCu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F4CCu) goto L_08A8F4CC;
    return;
L_08A8F4CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F4D8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 450u, 0x08A8987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F4D8u) goto L_08A8F4D8;
    return;
L_08A8F4D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8FC10;
    }
    goto L_08A8F4E8;
L_08A8F4E8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26388));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F504:
    ctx.set_gpr(31, 0x08A8F50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F50Cu) goto L_08A8F50C;
    return;
L_08A8F50C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F518u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F518u) goto L_08A8F518;
    return;
L_08A8F518:
    ctx.set_gpr(31, 0x08A8F520u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8F520u) goto L_08A8F520;
    return;
L_08A8F520:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8F5A8;
      }
      goto L_08A8F530;
    }
L_08A8F530:
    ctx.set_gpr(31, 0x08A8F538u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 176u, 0x08A9981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F538u) goto L_08A8F538;
    return;
L_08A8F538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F5A8;
      }
      goto L_08A8F540;
    }
L_08A8F540:
    ctx.set_gpr(31, 0x08A8F548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F548u) goto L_08A8F548;
    return;
L_08A8F548:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8F56Cu);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F56Cu) goto L_08A8F56C;
    return;
L_08A8F56C:
    ctx.set_gpr(31, 0x08A8F574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F574u) goto L_08A8F574;
    return;
L_08A8F574:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8F58Cu);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F58Cu) goto L_08A8F58C;
    return;
L_08A8F58C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18260), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8F5A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5A0u) goto L_08A8F5A0;
    return;
L_08A8F5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A8FC10;
      }
      goto L_08A8F5A8;
    }
L_08A8F5A8:
    ctx.set_gpr(31, 0x08A8F5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5B0u) goto L_08A8F5B0;
    return;
L_08A8F5B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8F5C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F5C0u) goto L_08A8F5C0;
    return;
L_08A8F5C0:
    ctx.set_gpr(31, 0x08A8F5C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5C8u) goto L_08A8F5C8;
    return;
L_08A8F5C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A8F5D4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5D4u) goto L_08A8F5D4;
    return;
L_08A8F5D4:
    ctx.set_gpr(31, 0x08A8F5DCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5DCu) goto L_08A8F5DC;
    return;
L_08A8F5DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F5E8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5E8u) goto L_08A8F5E8;
    return;
L_08A8F5E8:
    ctx.set_gpr(31, 0x08A8F5F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8F5F0u) goto L_08A8F5F0;
    return;
L_08A8F5F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F608;
    }
L_08A8F608:
    ctx.set_gpr(31, 0x08A8F610u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A8F610u) goto L_08A8F610;
    return;
L_08A8F610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F618;
    }
L_08A8F618:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A8F620;
L_08A8F620:
    ctx.set_gpr(31, 0x08A8F628u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A8FC28;
L_08A8F628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F638u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8F638u) goto L_08A8F638;
    return;
L_08A8F638:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A8F620;
    }
    goto L_08A8F648;
L_08A8F648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F658;
    }
L_08A8F658:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8F668u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 734u, 0x08862E70u>(ctx, &aot_mem) && ctx.pc == 0x08A8F668u) goto L_08A8F668;
    return;
L_08A8F668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F670;
    }
L_08A8F670:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18398), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F688;
    }
L_08A8F688:
    ctx.set_gpr(31, 0x08A8F690u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 279u, 0x08A954F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F690u) goto L_08A8F690;
    return;
L_08A8F690:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F698;
    }
L_08A8F698:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F6A8;
    }
L_08A8F6A8:
    ctx.set_gpr(31, 0x08A8F6B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 333u, 0x08A958E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F6B0u) goto L_08A8F6B0;
    return;
L_08A8F6B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F6B8;
    }
L_08A8F6B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F6C8;
    }
L_08A8F6C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A8F6F4;
    }
    goto L_08A8F6D4;
L_08A8F6D4:
    ctx.set_gpr(31, 0x08A8F6DCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 417u, 0x08A919CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8F6DCu) goto L_08A8F6DC;
    return;
L_08A8F6DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F6E4;
    }
L_08A8F6E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F6F4;
    }
L_08A8F6F4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F6FC;
    }
L_08A8F6FC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18141), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
        goto L_08A8F778;
    }
    goto L_08A8F710;
L_08A8F710:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8F724;
      }
      goto L_08A8F71C;
    }
L_08A8F71C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A8F770;
      }
      goto L_08A8F724;
    }
L_08A8F724:
    ctx.set_gpr(31, 0x08A8F72Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F72Cu) goto L_08A8F72C;
    return;
L_08A8F72C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8F744u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A8F744u) goto L_08A8F744;
    return;
L_08A8F744:
    ctx.set_gpr(31, 0x08A8F74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F74Cu) goto L_08A8F74C;
    return;
L_08A8F74C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8F76Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F76Cu) goto L_08A8F76C;
    return;
L_08A8F76C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    goto L_08A8F770;
L_08A8F770:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    goto L_08A8F778;
L_08A8F778:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F784;
    }
L_08A8F784:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18140)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A8F8B8;
    }
    goto L_08A8F790;
L_08A8F790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F79Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F79Cu) goto L_08A8F79C;
    return;
L_08A8F79C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F7A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7A8u) goto L_08A8F7A8;
    return;
L_08A8F7A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F7B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 639u, 0x08A9712Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F7B4u) goto L_08A8F7B4;
    return;
L_08A8F7B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08A8F7C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 90u, 0x08A99128u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7C4u) goto L_08A8F7C4;
    return;
L_08A8F7C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F7D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7D0u) goto L_08A8F7D0;
    return;
L_08A8F7D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F7E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F7E0u) goto L_08A8F7E0;
    return;
L_08A8F7E0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8F7FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 717u, 0x08A9771Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F7FCu) goto L_08A8F7FC;
    return;
L_08A8F7FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F808u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 557u, 0x08A96A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F808u) goto L_08A8F808;
    return;
L_08A8F808:
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8F824u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F824u) goto L_08A8F824;
    return;
L_08A8F824:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F830u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F830u) goto L_08A8F830;
    return;
L_08A8F830:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08A8F848u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F848u) goto L_08A8F848;
    return;
L_08A8F848:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F854u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F854u) goto L_08A8F854;
    return;
L_08A8F854:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A8F86Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F86Cu) goto L_08A8F86C;
    return;
L_08A8F86C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F878u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F878u) goto L_08A8F878;
    return;
L_08A8F878:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A8F884u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F884u) goto L_08A8F884;
    return;
L_08A8F884:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A8F894u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F894u) goto L_08A8F894;
    return;
L_08A8F894:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8F8A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 8u, 0x08A980ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8F8A8u) goto L_08A8F8A8;
    return;
L_08A8F8A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F8B8;
    }
L_08A8F8B8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F8C0;
    }
L_08A8F8C0:
    ctx.set_gpr(31, 0x08A8F8C8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 979u, 0x08AA78D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F8C8u) goto L_08A8F8C8;
    return;
L_08A8F8C8:
    ctx.set_gpr(31, 0x08A8F8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F8D0u) goto L_08A8F8D0;
    return;
L_08A8F8D0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8F8E8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A8F8E8u) goto L_08A8F8E8;
    return;
L_08A8F8E8:
    ctx.set_gpr(31, 0x08A8F8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F8F0u) goto L_08A8F8F0;
    return;
L_08A8F8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8F910u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F910u) goto L_08A8F910;
    return;
L_08A8F910:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F920;
    }
L_08A8F920:
    ctx.set_gpr(31, 0x08A8F928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F928u) goto L_08A8F928;
    return;
L_08A8F928:
    ctx.set_gpr(31, 0x08A8F930u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08A8F930u) goto L_08A8F930;
    return;
L_08A8F930:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F938;
    }
L_08A8F938:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F948;
    }
L_08A8F948:
    ctx.set_gpr(31, 0x08A8F950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F950u) goto L_08A8F950;
    return;
L_08A8F950:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8F968u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8F968u) goto L_08A8F968;
    return;
L_08A8F968:
    ctx.set_gpr(31, 0x08A8F970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8F970u) goto L_08A8F970;
    return;
L_08A8F970:
    ctx.set_gpr(31, 0x08A8F978u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A8F978u) goto L_08A8F978;
    return;
L_08A8F978:
    ctx.set_gpr(31, 0x08A8F980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8F980u) goto L_08A8F980;
    return;
L_08A8F980:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8F998u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A8F998u) goto L_08A8F998;
    return;
L_08A8F998:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F9A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F9A4u) goto L_08A8F9A4;
    return;
L_08A8F9A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8F9B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F9B0u) goto L_08A8F9B0;
    return;
L_08A8F9B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18128)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(17));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
        goto L_08A8F9D4;
    }
    goto L_08A8F9C0;
L_08A8F9C0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8FC10;
      }
      goto L_08A8F9D4;
    }
L_08A8F9D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8F9E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8F9E4u) goto L_08A8F9E4;
    return;
L_08A8F9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8F9EC;
    }
L_08A8F9EC:
    ctx.set_gpr(31, 0x08A8F9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8F9F4u) goto L_08A8F9F4;
    return;
L_08A8F9F4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8FA04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8FA04u) goto L_08A8FA04;
    return;
L_08A8FA04:
    ctx.set_gpr(31, 0x08A8FA0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA0Cu) goto L_08A8FA0C;
    return;
L_08A8FA0C:
    ctx.set_gpr(31, 0x08A8FA14u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA14u) goto L_08A8FA14;
    return;
L_08A8FA14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8FA20u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A898D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA20u) goto L_08A8FA20;
    return;
L_08A8FA20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8FA2Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA2Cu) goto L_08A8FA2C;
    return;
L_08A8FA2C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A8FA34;
L_08A8FA34:
    ctx.set_gpr(31, 0x08A8FA3Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A8FC28;
L_08A8FA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FA4Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA4Cu) goto L_08A8FA4C;
    return;
L_08A8FA4C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A8FA34;
    }
    goto L_08A8FA5C;
L_08A8FA5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18988)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FA8C;
      }
      goto L_08A8FA70;
    }
L_08A8FA70:
    ctx.set_gpr(31, 0x08A8FA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA78u) goto L_08A8FA78;
    return;
L_08A8FA78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FA84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA84u) goto L_08A8FA84;
    return;
L_08A8FA84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A8FAA4;
      }
      goto L_08A8FA8C;
    }
L_08A8FA8C:
    ctx.set_gpr(31, 0x08A8FA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8FA94u) goto L_08A8FA94;
    return;
L_08A8FA94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FAA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 484u, 0x08861D48u>(ctx, &aot_mem) && ctx.pc == 0x08A8FAA0u) goto L_08A8FAA0;
    return;
L_08A8FAA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08A8FAA4;
L_08A8FAA4:
    ctx.set_gpr(31, 0x08A8FAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x08A8FAACu) goto L_08A8FAAC;
    return;
L_08A8FAAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FABC;
    }
L_08A8FABC:
    ctx.set_gpr(31, 0x08A8FAC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A8FAC4u) goto L_08A8FAC4;
    return;
L_08A8FAC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FACC;
    }
L_08A8FACC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A8FAD4;
L_08A8FAD4:
    ctx.set_gpr(31, 0x08A8FADCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A8FC28;
L_08A8FADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FAECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A8FAECu) goto L_08A8FAEC;
    return;
L_08A8FAEC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A8FAD4;
    }
    goto L_08A8FAFC;
L_08A8FAFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB0C;
    }
L_08A8FB0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A8FB1Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 734u, 0x08862E70u>(ctx, &aot_mem) && ctx.pc == 0x08A8FB1Cu) goto L_08A8FB1C;
    return;
L_08A8FB1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB24;
    }
L_08A8FB24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB34;
    }
L_08A8FB34:
    ctx.set_gpr(31, 0x08A8FB3Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 279u, 0x08A954F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8FB3Cu) goto L_08A8FB3C;
    return;
L_08A8FB3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB44;
    }
L_08A8FB44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB54;
    }
L_08A8FB54:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A8FB80;
    }
    goto L_08A8FB60;
L_08A8FB60:
    ctx.set_gpr(31, 0x08A8FB68u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 417u, 0x08A919CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8FB68u) goto L_08A8FB68;
    return;
L_08A8FB68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB70;
    }
L_08A8FB70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB80;
    }
L_08A8FB80:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB88;
    }
L_08A8FB88:
    ctx.set_gpr(31, 0x08A8FB90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 333u, 0x08A958E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FB90u) goto L_08A8FB90;
    return;
L_08A8FB90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FC0C;
      }
      goto L_08A8FB98;
    }
L_08A8FB98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8FBA4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBA4u) goto L_08A8FBA4;
    return;
L_08A8FBA4:
    ctx.set_gpr(31, 0x08A8FBACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8FBACu) goto L_08A8FBAC;
    return;
L_08A8FBAC:
    ctx.set_gpr(31, 0x08A8FBB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBB4u) goto L_08A8FBB4;
    return;
L_08A8FBB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8FBC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FBC8u) goto L_08A8FBC8;
    return;
L_08A8FBC8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A8FBD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBD4u) goto L_08A8FBD4;
    return;
L_08A8FBD4:
    ctx.set_gpr(31, 0x08A8FBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBDCu) goto L_08A8FBDC;
    return;
L_08A8FBDC:
    ctx.set_gpr(31, 0x08A8FBE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8FBE4u) goto L_08A8FBE4;
    return;
L_08A8FBE4:
    ctx.set_gpr(31, 0x08A8FBECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBECu) goto L_08A8FBEC;
    return;
L_08A8FBEC:
    ctx.set_gpr(31, 0x08A8FBF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A8FBF4u) goto L_08A8FBF4;
    return;
L_08A8FBF4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18988)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08A8FC04;
    }
    goto L_08A8FC00;
L_08A8FC00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    goto L_08A8FC04;
L_08A8FC04:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A8FC14;
      }
      goto L_08A8FC0C;
    }
L_08A8FC0C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8FC10;
L_08A8FC10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A8FC14;
L_08A8FC14:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FC28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 2230u << 16u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-14852));
    goto L_08A8FC58;
L_08A8FC58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8FC64u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FC64u) goto L_08A8FC64;
    return;
L_08A8FC64:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A8FC94;
    }
    goto L_08A8FC6C;
L_08A8FC6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8FC7Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FC7Cu) goto L_08A8FC7C;
    return;
L_08A8FC7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8FC90;
      }
      goto L_08A8FC88;
    }
L_08A8FC88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08A8FCA4;
      }
      goto L_08A8FC90;
    }
L_08A8FC90:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A8FC94;
L_08A8FC94:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 73 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A8FC58;
      }
      goto L_08A8FCA0;
    }
L_08A8FCA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A8FCA4;
L_08A8FCA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FCC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 2230u << 16u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-6584));
    goto L_08A8FCF4;
L_08A8FCF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8FD00u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08A8FD00u) goto L_08A8FD00;
    return;
L_08A8FD00:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A8FD30;
    }
    goto L_08A8FD08;
L_08A8FD08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8FD18u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 141u, 0x08854900u>(ctx, &aot_mem) && ctx.pc == 0x08A8FD18u) goto L_08A8FD18;
    return;
L_08A8FD18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8FD2C;
      }
      goto L_08A8FD24;
    }
L_08A8FD24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08A8FD40;
      }
      goto L_08A8FD2C;
    }
L_08A8FD2C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A8FD30;
L_08A8FD30:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 228 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A8FCF4;
      }
      goto L_08A8FD3C;
    }
L_08A8FD3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A8FD40;
L_08A8FD40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FD60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A8FED4;
      }
      goto L_08A8FD78;
    }
L_08A8FD78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8FEB0;
      }
      goto L_08A8FD84;
    }
L_08A8FD84:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8FD98;
      }
      goto L_08A8FD90;
    }
L_08A8FD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FFC0;
      }
      goto L_08A8FD98;
    }
L_08A8FD98:
    ctx.set_gpr(31, 0x08A8FDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FDA0u) goto L_08A8FDA0;
    return;
L_08A8FDA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8FDB0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32176)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDB0u) goto L_08A8FDB0;
    return;
L_08A8FDB0:
    ctx.set_gpr(31, 0x08A8FDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDB8u) goto L_08A8FDB8;
    return;
L_08A8FDB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8FDC8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32180)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8FDC8u) goto L_08A8FDC8;
    return;
L_08A8FDC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A8FDECu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDECu) goto L_08A8FDEC;
    return;
L_08A8FDEC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FDFCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A8FDFCu) goto L_08A8FDFC;
    return;
L_08A8FDFC:
    ctx.set_gpr(31, 0x08A8FE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE04u) goto L_08A8FE04;
    return;
L_08A8FE04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FE14u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FE14u) goto L_08A8FE14;
    return;
L_08A8FE14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23736));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FE34u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE34u) goto L_08A8FE34;
    return;
L_08A8FE34:
    ctx.set_gpr(31, 0x08A8FE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE3Cu) goto L_08A8FE3C;
    return;
L_08A8FE3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FE4Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FE4Cu) goto L_08A8FE4C;
    return;
L_08A8FE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23724));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FE6Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE6Cu) goto L_08A8FE6C;
    return;
L_08A8FE6C:
    ctx.set_gpr(31, 0x08A8FE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE74u) goto L_08A8FE74;
    return;
L_08A8FE74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FE84u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FE84u) goto L_08A8FE84;
    return;
L_08A8FE84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FE90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8FE90u) goto L_08A8FE90;
    return;
L_08A8FE90:
    ctx.set_gpr(31, 0x08A8FE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FE98u) goto L_08A8FE98;
    return;
L_08A8FE98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FEA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8FEA4u) goto L_08A8FEA4;
    return;
L_08A8FEA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FEB0;
    }
L_08A8FEB0:
    ctx.set_gpr(31, 0x08A8FEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FEB8u) goto L_08A8FEB8;
    return;
L_08A8FEB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FEC4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FEC4u) goto L_08A8FEC4;
    return;
L_08A8FEC4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 12u, 0x08A90074u>(ctx, &aot_mem); return;
    }
    goto L_08A8FECC;
L_08A8FECC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FED4;
    }
L_08A8FED4:
    ctx.set_gpr(31, 0x08A8FEDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A8FEDCu) goto L_08A8FEDC;
    return;
L_08A8FEDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8FF74;
      }
      goto L_08A8FEE8;
    }
L_08A8FEE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
        goto L_08A8FF54;
    }
    goto L_08A8FEF4;
L_08A8FEF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A8FF08;
      }
      goto L_08A8FF00;
    }
L_08A8FF00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF08;
    }
L_08A8FF08:
    ctx.set_gpr(31, 0x08A8FF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF10u) goto L_08A8FF10;
    return;
L_08A8FF10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FF20u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FF20u) goto L_08A8FF20;
    return;
L_08A8FF20:
    ctx.set_gpr(31, 0x08A8FF28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF28u) goto L_08A8FF28;
    return;
L_08A8FF28:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18260), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8FF40u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF40u) goto L_08A8FF40;
    return;
L_08A8FF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FF4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF4Cu) goto L_08A8FF4C;
    return;
L_08A8FF4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF54;
    }
L_08A8FF54:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8FF60u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF60u) goto L_08A8FF60;
    return;
L_08A8FF60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FF6Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF6Cu) goto L_08A8FF6C;
    return;
L_08A8FF6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FF74;
    }
L_08A8FF74:
    ctx.set_gpr(31, 0x08A8FF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF7Cu) goto L_08A8FF7C;
    return;
L_08A8FF7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8FF8Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FF8Cu) goto L_08A8FF8C;
    return;
L_08A8FF8C:
    ctx.set_gpr(31, 0x08A8FF94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A8FF94u) goto L_08A8FF94;
    return;
L_08A8FF94:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18260), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8FFACu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFACu) goto L_08A8FFAC;
    return;
L_08A8FFAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FFB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFB8u) goto L_08A8FFB8;
    return;
L_08A8FFB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFC0;
    }
L_08A8FFC0:
    ctx.set_gpr(31, 0x08A8FFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFC8u) goto L_08A8FFC8;
    return;
L_08A8FFC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8FFD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFD4u) goto L_08A8FFD4;
    return;
L_08A8FFD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 11u, 0x08A90070u>(ctx, &aot_mem); return;
      }
      goto L_08A8FFDC;
    }
L_08A8FFDC:
    ctx.set_gpr(31, 0x08A8FFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8FFE4u) goto L_08A8FFE4;
    return;
L_08A8FFE4:
    ctx.set_gpr(31, 0x08A8FFECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFECu) goto L_08A8FFEC;
    return;
L_08A8FFEC:
    ctx.set_gpr(31, 0x08A8FFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFF4u) goto L_08A8FFF4;
    return;
L_08A8FFF4:
    ctx.set_gpr(31, 0x08A8FFFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8FFFCu) goto L_08A8FFFC;
    return;
L_08A8FFFC:
    ctx.set_gpr(31, 0x08A90004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0162(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0162_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_162(Runtime &runtime) {
    runtime.register_generated_unit(162u, 0x08A8C000u, 16384u, &recomp_unit_0162, &recomp_unit_0162_entry);
    runtime.register_function(0x08A8C004u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C01Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C024u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C040u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C054u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C05Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C070u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C078u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C090u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C114u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C138u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C140u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C150u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C170u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C178u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C188u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C198u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C19Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C204u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C208u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C210u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C21Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C224u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C22Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C238u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C240u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C24Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C254u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C25Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C268u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C274u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C280u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C288u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C290u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C300u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C310u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C318u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C320u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C328u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C334u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C33Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C344u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C368u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C37Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C388u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C398u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C404u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C40Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C418u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C424u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C438u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C440u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C450u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C458u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C460u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C468u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C480u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C50Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C528u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C540u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C550u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C55Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C564u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C574u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C590u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C600u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C638u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C640u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C648u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C660u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C668u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C67Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C68Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C694u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C69Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C704u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C70Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C718u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C720u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C728u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C730u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C738u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C740u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C74Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C75Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C79Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C80Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C838u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C85Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C868u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C870u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C898u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C914u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C92Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C934u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C944u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C950u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C958u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C968u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C974u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C97Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C99Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CED4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D00Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D014u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D01Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D024u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D030u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D054u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D064u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D06Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D090u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D098u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D100u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D108u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D128u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D138u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D140u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D148u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D16Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D180u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D18Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D208u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D214u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D218u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D220u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D228u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D238u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D258u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D264u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D26Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D27Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D28Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D29Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D304u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D324u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D334u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D344u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D348u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D350u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D358u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D360u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D36Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D374u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D37Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D38Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D39Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D400u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D410u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D420u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D430u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D440u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D450u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D46Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D474u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D47Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D48Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D50Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D530u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D53Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D544u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D550u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D558u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D570u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D58Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D594u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D618u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D624u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D63Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D644u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D654u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D65Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D66Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D674u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D694u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D708u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D710u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D718u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D720u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D728u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D738u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D740u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D754u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D75Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D768u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D770u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D778u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D780u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D788u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D798u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D800u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D814u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D840u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D854u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D870u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D890u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D918u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D930u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D95Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D96Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D980u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D990u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DECCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E010u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E020u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E028u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E054u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E05Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E080u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E090u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E100u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E120u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E138u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E140u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E148u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E154u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E15Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E174u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E17Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E190u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E218u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E220u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E22Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E234u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E244u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E254u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E270u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E278u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E288u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E298u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E30Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E314u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E320u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E328u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E338u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E350u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E358u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E368u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E378u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E380u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E400u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E408u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E418u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E430u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E440u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E45Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E464u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E470u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E480u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E494u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E49Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E500u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E508u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E510u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E51Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E528u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E538u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E540u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E550u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E55Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E570u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E580u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E590u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E60Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E628u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E634u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E640u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E650u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E668u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E688u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E690u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E70Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E714u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E724u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E730u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E738u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E748u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E754u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E75Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E768u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E778u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E780u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E78Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E794u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E79Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E7F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E808u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E834u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E850u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E868u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E880u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E890u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E898u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E900u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E920u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E93Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E948u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E950u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E968u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E978u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E984u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E998u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA50u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EED0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EED8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F018u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F024u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F030u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F048u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F064u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F07Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F08Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F098u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F100u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F110u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F120u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F12Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F138u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F140u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F14Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F154u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F18Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F194u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F200u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F210u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F21Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F224u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F244u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F24Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F25Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F268u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F294u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F304u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F30Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F314u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F324u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F330u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F338u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F340u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F34Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F354u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F364u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F36Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F37Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F384u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F38Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F398u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F430u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F43Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F460u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F478u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F484u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F48Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F498u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F50Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F530u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F538u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F540u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F56Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F574u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F58Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F608u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F610u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F618u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F620u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F628u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F638u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F648u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F668u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F670u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F688u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F690u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F710u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F71Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F724u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F72Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F744u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F74Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F76Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F770u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F778u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F784u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F790u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F79Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F808u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F824u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F830u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F854u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F86Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F884u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F894u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F910u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F920u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F928u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F930u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F938u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F948u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F950u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F968u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F978u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F980u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F998u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FABCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FACCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FADCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FECCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FED4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFC8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFFCu, &recomp_unit_0162, "recomp_unit_0162");
}
} // namespace psprecomp
