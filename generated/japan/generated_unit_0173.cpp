#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0173[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6,
    0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17,
    0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 26, 0, 0, 27, 0, 0, 28, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 52, 0,
    53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0,
    0, 0, 70, 71, 72, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 76, 77, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 0, 89, 0, 90,
    0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 98, 99, 0, 0, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0,
    109, 0, 110, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 119, 0, 120,
    0, 0, 121, 122, 0, 0, 0, 123, 124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0,
    133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 152, 0, 0, 153, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 157, 0, 0, 158, 159, 0, 160, 0, 161, 0, 162, 0, 0, 163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0,
    0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 181, 0, 0, 182, 0, 0, 183,
    0, 184, 0, 0, 0, 0, 185, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 195, 0, 196, 0, 0,
    0, 197, 0, 198, 0, 0, 0, 199, 200, 0, 201, 0, 0, 0, 202, 0, 0, 203, 204, 0, 0, 205, 0, 0, 206, 207, 0, 208, 0, 209, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0,
    239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 247, 0, 248, 0, 249, 250, 0, 0,
    0, 0, 251, 0, 252, 0, 253, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 259, 0, 260, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0,
    268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 282, 0, 283, 0,
    284, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 295, 296, 0,
    0, 0, 297, 0, 298, 0, 299, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0,
    0, 303, 0, 0, 0, 304, 0, 305, 0, 306, 307, 0, 308, 0, 309, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0,
    0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0,
    0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 334, 335, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 0, 338, 0, 339, 340, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349,
    350, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 354, 355, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 360, 361, 0,
    0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 368, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371,
    0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 0, 380, 381, 0, 0, 0,
    382, 0, 383, 0, 384, 0, 0, 385, 0, 386, 387, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0,
    392, 393, 0, 394, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 401, 402, 0, 0, 403, 0, 0, 404,
    0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 414, 0,
    0, 415, 0, 416, 0, 417, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0,
    0, 422, 0, 0, 423, 0, 0, 424, 0, 425, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431,
    0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0,
    442, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0,
    0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 461, 0, 462, 463,
    0, 464, 0, 0, 0, 465, 0, 466, 0, 467, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 479, 0, 0, 0, 480, 0, 481, 482, 0, 0,
    0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 489,
    0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0,
    501, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0,
    511, 0, 512, 513, 0, 514, 0, 0, 515, 0, 516, 0, 517, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 522,
    0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 533,
    0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0,
    0, 541, 542, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550,
    0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0,
    562, 0, 563, 0, 564, 0, 565, 0, 566, 567, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0,
    574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 577, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0,
    582, 0, 0, 0, 0, 0, 583, 0, 584, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0,
    0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0,
    0, 609, 0, 610, 0, 611, 0, 612, 613, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 620, 0,
    0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 625, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 630, 0,
    0, 631, 0, 0, 632, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0,
    0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 646, 0, 0,
    0, 647, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0,
    653, 0, 654, 655, 0, 656, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 662, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0,
    665, 0, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 0, 674, 0, 675, 0,
    0, 0, 676, 0, 677, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 683,
    0, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692,
    0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 701, 0,
    0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 710,
    0, 0, 711, 0, 0, 712, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 0, 0,
    720, 0, 0, 721, 0, 0, 722, 723, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0,
    0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 733, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0,
    0, 0, 740, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0, 0, 0, 745, 746, 747, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 750, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 0, 0, 755, 0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0, 0,
    761, 0, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0, 0,
    771, 0, 0, 0, 772, 0, 773, 0, 774, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779,
    0, 780, 0, 781, 782, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 787, 0,
    788, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0,
    0, 799, 0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 0, 805, 806, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 809,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 812, 0, 813, 0, 814, 0, 815, 0, 0,
    816, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 821, 0, 0, 0, 822, 0, 823, 0, 0, 0, 824, 0, 825, 0, 0,
    0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 0, 0, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0,
    836, 0, 837, 838, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0,
    0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 851,
    0, 0, 852, 0, 0, 853, 0, 854, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 0, 859, 0,
    860, 0, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866, 0, 867,
    0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 869, 870, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 876,
    0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 878, 0, 0, 879, 0, 0, 0, 880, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 883, 884, 0,
    0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 890, 0, 0, 891, 0,
    892, 0, 893, 0, 0, 0, 0, 894, 0, 895, 0, 896, 0, 0, 0, 897, 898, 0, 899, 0, 900, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905, 0,
    906, 0, 907, 0, 0, 0, 0, 908, 909, 0, 910, 0, 911, 0, 912, 0, 913, 0, 914, 0, 0, 0, 0, 915, 0, 916, 917, 0, 918, 0, 919, 0,
    920, 0, 0, 921, 0, 922, 0, 923, 0, 0, 0, 924, 0, 925, 0, 926, 0, 0, 927, 0, 928, 0, 929, 0, 930, 931, 0, 932, 0, 933, 934, 0,
    0, 0, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 937, 0, 0, 0, 0, 0, 938, 0, 939, 0, 940, 0, 941, 0, 942, 0, 0, 0, 0, 0,
    0, 0, 943, 0, 0, 944, 945, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0, 949, 0, 950, 0, 951, 0, 952, 0, 0, 953,
    0, 0, 0, 0, 954, 955, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 0, 958, 959, 0, 0, 0, 0, 960, 0, 961, 0, 962, 963, 0, 964, 0,
    0, 0, 0, 965, 966, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 968, 0, 969, 970, 0, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 973, 0, 0, 0, 0, 974, 0, 0, 0, 0, 0, 975, 0, 0, 976, 0, 977,
    978, 0, 0, 0, 979, 0, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 982, 0, 0, 983, 0,
    984, 0, 985, 0, 986, 987, 0, 988, 989, 990, 0, 0, 0, 991, 0, 0, 0, 992, 0, 0, 0, 0, 0, 0, 993, 0, 994, 0, 0, 995, 0, 996,
    0, 0, 0, 0, 997, 0, 0, 0, 998, 0, 0, 0, 999, 0, 0, 0, 1000, 0, 1001, 0, 1002, 0, 0, 1003, 0, 1004, 1005, 0, 1006, 0, 1007, 0,
    0, 1008, 0, 1009, 0, 0, 0, 0, 1010, 0, 0, 0, 1011, 0, 0, 1012, 0, 1013, 0, 0, 1014, 0, 0, 0, 1015, 0, 1016, 1017, 0, 0, 0, 1018,
    0, 0, 1019, 0, 1020, 1021, 0, 1022, 1023, 0, 0, 1024, 0, 0, 0, 0, 0, 0, 0, 0, 1025, 0, 0, 0, 0, 0, 1026, 0, 0, 0, 0, 1027,
    0, 1028, 0, 0, 1029, 0, 1030, 0, 0, 1031, 0, 1032, 0, 1033, 0, 0, 0, 0, 0, 1034, 0, 0, 0, 0, 1035, 0, 0, 1036, 1037, 0, 1038, 1039,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1040, 0, 0, 0, 0, 0, 0, 0, 0, 1041, 0, 1042, 1043, 0, 1044, 0, 0, 0, 0, 0, 0,
    1045, 0, 1046, 0, 0, 1047, 0, 1048, 1049, 0, 1050, 1051, 0, 0, 0, 1052, 0, 1053, 1054, 0, 1055, 0, 1056, 1057, 0, 1058, 0, 1059, 1060, 0, 1061, 0,
    1062, 1063, 0, 1064, 0, 1065, 1066, 0, 1067, 0, 1068, 1069, 0, 1070, 0, 1071, 1072, 0, 1073, 0, 1074, 0, 0, 1075, 0, 0, 0, 1076, 0, 1077, 0, 0,
    1078, 0, 1079, 1080, 0, 0, 0, 0, 1081, 0, 0, 0, 0, 0, 0, 0, 0, 1082, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1083, 0, 0, 0, 0, 0, 1084, 0, 1085, 0, 0, 0, 1086, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1087, 0, 0, 0, 0, 1088, 0, 0,
    1089, 0, 1090, 0, 1091, 0, 0, 0, 0, 1092, 0, 0, 1093, 0, 0, 0, 0, 1094, 0, 1095, 0, 0, 0, 0, 1096, 0, 0, 1097, 0, 0, 0, 0,
    1098, 1099, 0, 0, 0, 1100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101, 0, 0, 0, 0, 0, 1102, 0, 0, 1103, 0, 1104, 1105, 0, 0, 0,
    0, 0, 1106, 0, 0, 0, 0, 0, 0, 1107, 0, 0, 1108, 0, 1109, 1110, 0, 0, 0, 1111, 0, 0, 0, 0, 0, 0, 0, 0, 1112, 0, 1113, 0,
    0, 0, 0, 1114, 1115, 0, 0, 0, 0, 1116, 0, 0, 1117, 1118, 1119, 0, 0, 0, 1120, 0, 0, 1121, 1122, 1123, 0, 0, 0, 1124, 0, 1125, 0, 1126,
    0, 1127, 0, 1128, 0, 0, 1129, 1130, 1131, 0, 1132, 0, 0, 1133, 1134, 1135, 0, 1136, 1137, 0, 1138, 0, 1139, 1140, 1141, 0, 0, 0, 0, 0, 1142, 0,
    0, 0, 0, 0, 0, 1143, 0, 1144, 0, 0, 1145, 0, 0, 1146, 0, 1147, 0, 0, 1148, 0, 1149, 0, 0, 1150, 0, 0, 1151, 1152, 1153, 0, 0, 0,
    0, 1154, 0, 0, 0, 0, 1155, 0, 1156, 0, 1157, 0, 1158, 0, 0, 1159, 0, 0, 1160, 0, 0, 0, 1161, 0, 0, 0, 0, 0, 1162, 0, 0, 0,
    0, 1163, 1164, 0, 1165, 0, 0, 0, 0, 1166, 1167, 0, 1168, 0, 0, 1169, 1170, 0, 1171, 0, 0, 0, 0, 0, 1172, 0, 0, 1173, 1174, 0, 1175, 1176,
    0, 1177, 1178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1179, 1180, 0, 1181, 1182, 0, 0, 0, 0, 1183, 0, 1184, 0, 1185, 1186, 0, 0, 1187,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1189, 0, 0, 1190, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1191, 0, 0, 0, 1192, 0, 0, 0, 1193, 0, 0, 1194, 0, 0, 0, 0, 0, 1195, 0, 0, 0, 0, 0, 0, 0, 0, 1196, 0,
    0, 0, 1197, 0, 0, 0, 0, 0, 0, 0, 1198, 0, 0, 0, 0, 1199, 0, 0, 0, 0, 0, 0, 1200, 0, 0, 0, 1201, 0, 0, 0, 0, 0,
    0, 0, 1202, 0, 0, 0, 0, 1203, 0, 0, 0, 0, 0, 0, 0, 0, 1204, 0, 0, 0, 0, 1205, 0, 0, 0, 0, 0, 0, 1206,
};
void recomp_unit_0173_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB8000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0173[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB8000;
    case 2u: goto L_08AB8024;
    case 3u: goto L_08AB8038;
    case 4u: goto L_08AB806C;
    case 5u: goto L_08AB8074;
    case 6u: goto L_08AB807C;
    case 7u: goto L_08AB8088;
    case 8u: goto L_08AB8090;
    case 9u: goto L_08AB8098;
    case 10u: goto L_08AB80A8;
    case 11u: goto L_08AB80B0;
    case 12u: goto L_08AB80D0;
    case 13u: goto L_08AB80D8;
    case 14u: goto L_08AB80E0;
    case 15u: goto L_08AB80EC;
    case 16u: goto L_08AB80F4;
    case 17u: goto L_08AB80FC;
    case 18u: goto L_08AB8104;
    case 19u: goto L_08AB8114;
    case 20u: goto L_08AB8124;
    case 21u: goto L_08AB8138;
    case 22u: goto L_08AB8140;
    case 23u: goto L_08AB8144;
    case 24u: goto L_08AB8154;
    case 25u: goto L_08AB8184;
    case 26u: goto L_08AB818C;
    case 27u: goto L_08AB8198;
    case 28u: goto L_08AB81A4;
    case 29u: goto L_08AB81A8;
    case 30u: goto L_08AB81B8;
    case 31u: goto L_08AB81C0;
    case 32u: goto L_08AB81C8;
    case 33u: goto L_08AB81D4;
    case 34u: goto L_08AB81E0;
    case 35u: goto L_08AB81E8;
    case 36u: goto L_08AB81F4;
    case 37u: goto L_08AB81FC;
    case 38u: goto L_08AB822C;
    case 39u: goto L_08AB8238;
    case 40u: goto L_08AB824C;
    case 41u: goto L_08AB8254;
    case 42u: goto L_08AB8268;
    case 43u: goto L_08AB829C;
    case 44u: goto L_08AB82A4;
    case 45u: goto L_08AB82AC;
    case 46u: goto L_08AB82B8;
    case 47u: goto L_08AB82C0;
    case 48u: goto L_08AB82C8;
    case 49u: goto L_08AB82D8;
    case 50u: goto L_08AB82E0;
    case 51u: goto L_08AB82E8;
    case 52u: goto L_08AB82F8;
    case 53u: goto L_08AB8300;
    case 54u: goto L_08AB8308;
    case 55u: goto L_08AB8318;
    case 56u: goto L_08AB8320;
    case 57u: goto L_08AB8328;
    case 58u: goto L_08AB8338;
    case 59u: goto L_08AB8340;
    case 60u: goto L_08AB8348;
    case 61u: goto L_08AB8350;
    case 62u: goto L_08AB8380;
    case 63u: goto L_08AB8388;
    case 64u: goto L_08AB83A4;
    case 65u: goto L_08AB83B0;
    case 66u: goto L_08AB83B8;
    case 67u: goto L_08AB83C0;
    case 68u: goto L_08AB83CC;
    case 69u: goto L_08AB83E8;
    case 70u: goto L_08AB8408;
    case 71u: goto L_08AB840C;
    case 72u: goto L_08AB8410;
    case 73u: goto L_08AB8424;
    case 74u: goto L_08AB8434;
    case 75u: goto L_08AB8440;
    case 76u: goto L_08AB844C;
    case 77u: goto L_08AB8450;
    case 78u: goto L_08AB8458;
    case 79u: goto L_08AB8468;
    case 80u: goto L_08AB8470;
    case 81u: goto L_08AB8500;
    case 82u: goto L_08AB8508;
    case 83u: goto L_08AB851C;
    case 84u: goto L_08AB8524;
    case 85u: goto L_08AB8550;
    case 86u: goto L_08AB8558;
    case 87u: goto L_08AB8560;
    case 88u: goto L_08AB856C;
    case 89u: goto L_08AB8574;
    case 90u: goto L_08AB857C;
    case 91u: goto L_08AB859C;
    case 92u: goto L_08AB85AC;
    case 93u: goto L_08AB85B4;
    case 94u: goto L_08AB85C4;
    case 95u: goto L_08AB85CC;
    case 96u: goto L_08AB85DC;
    case 97u: goto L_08AB85E4;
    case 98u: goto L_08AB85E8;
    case 99u: goto L_08AB85EC;
    case 100u: goto L_08AB85FC;
    case 101u: goto L_08AB8648;
    case 102u: goto L_08AB8658;
    case 103u: goto L_08AB86B0;
    case 104u: goto L_08AB86B8;
    case 105u: goto L_08AB86C0;
    case 106u: goto L_08AB86D0;
    case 107u: goto L_08AB86E4;
    case 108u: goto L_08AB86EC;
    case 109u: goto L_08AB8700;
    case 110u: goto L_08AB8708;
    case 111u: goto L_08AB871C;
    case 112u: goto L_08AB8724;
    case 113u: goto L_08AB8738;
    case 114u: goto L_08AB8740;
    case 115u: goto L_08AB8748;
    case 116u: goto L_08AB8754;
    case 117u: goto L_08AB875C;
    case 118u: goto L_08AB8764;
    case 119u: goto L_08AB8774;
    case 120u: goto L_08AB877C;
    case 121u: goto L_08AB8788;
    case 122u: goto L_08AB878C;
    case 123u: goto L_08AB879C;
    case 124u: goto L_08AB87A0;
    case 125u: goto L_08AB87B0;
    case 126u: goto L_08AB87B8;
    case 127u: goto L_08AB87C0;
    case 128u: goto L_08AB87CC;
    case 129u: goto L_08AB87D4;
    case 130u: goto L_08AB87DC;
    case 131u: goto L_08AB87F0;
    case 132u: goto L_08AB87F8;
    case 133u: goto L_08AB8800;
    case 134u: goto L_08AB8808;
    case 135u: goto L_08AB8838;
    case 136u: goto L_08AB8840;
    case 137u: goto L_08AB8848;
    case 138u: goto L_08AB8858;
    case 139u: goto L_08AB8860;
    case 140u: goto L_08AB8868;
    case 141u: goto L_08AB8878;
    case 142u: goto L_08AB8880;
    case 143u: goto L_08AB88A4;
    case 144u: goto L_08AB88BC;
    case 145u: goto L_08AB88C4;
    case 146u: goto L_08AB88CC;
    case 147u: goto L_08AB88DC;
    case 148u: goto L_08AB88E8;
    case 149u: goto L_08AB8910;
    case 150u: goto L_08AB891C;
    case 151u: goto L_08AB8928;
    case 152u: goto L_08AB892C;
    case 153u: goto L_08AB8938;
    case 154u: goto L_08AB893C;
    case 155u: goto L_08AB8940;
    case 156u: goto L_08AB896C;
    case 157u: goto L_08AB8988;
    case 158u: goto L_08AB8994;
    case 159u: goto L_08AB8998;
    case 160u: goto L_08AB89A0;
    case 161u: goto L_08AB89A8;
    case 162u: goto L_08AB89B0;
    case 163u: goto L_08AB89BC;
    case 164u: goto L_08AB89C0;
    case 165u: goto L_08AB89D8;
    case 166u: goto L_08AB8A10;
    case 167u: goto L_08AB8A2C;
    case 168u: goto L_08AB8A38;
    case 169u: goto L_08AB8A40;
    case 170u: goto L_08AB8A70;
    case 171u: goto L_08AB8A78;
    case 172u: goto L_08AB8A88;
    case 173u: goto L_08AB8A94;
    case 174u: goto L_08AB8A9C;
    case 175u: goto L_08AB8AA4;
    case 176u: goto L_08AB8AAC;
    case 177u: goto L_08AB8AB4;
    case 178u: goto L_08AB8AD0;
    case 179u: goto L_08AB8AD8;
    case 180u: goto L_08AB8AE0;
    case 181u: goto L_08AB8AE4;
    case 182u: goto L_08AB8AF0;
    case 183u: goto L_08AB8AFC;
    case 184u: goto L_08AB8B04;
    case 185u: goto L_08AB8B18;
    case 186u: goto L_08AB8B1C;
    case 187u: goto L_08AB8B24;
    case 188u: goto L_08AB8B2C;
    case 189u: goto L_08AB8B34;
    case 190u: goto L_08AB8B3C;
    case 191u: goto L_08AB8B44;
    case 192u: goto L_08AB8B50;
    case 193u: goto L_08AB8B60;
    case 194u: goto L_08AB8B68;
    case 195u: goto L_08AB8B6C;
    case 196u: goto L_08AB8B74;
    case 197u: goto L_08AB8B84;
    case 198u: goto L_08AB8B8C;
    case 199u: goto L_08AB8B9C;
    case 200u: goto L_08AB8BA0;
    case 201u: goto L_08AB8BA8;
    case 202u: goto L_08AB8BB8;
    case 203u: goto L_08AB8BC4;
    case 204u: goto L_08AB8BC8;
    case 205u: goto L_08AB8BD4;
    case 206u: goto L_08AB8BE0;
    case 207u: goto L_08AB8BE4;
    case 208u: goto L_08AB8BEC;
    case 209u: goto L_08AB8BF4;
    case 210u: goto L_08AB8C08;
    case 211u: goto L_08AB8C1C;
    case 212u: goto L_08AB8C2C;
    case 213u: goto L_08AB8C34;
    case 214u: goto L_08AB8C48;
    case 215u: goto L_08AB8C54;
    case 216u: goto L_08AB8C64;
    case 217u: goto L_08AB8C70;
    case 218u: goto L_08AB8CA0;
    case 219u: goto L_08AB8CAC;
    case 220u: goto L_08AB8CB4;
    case 221u: goto L_08AB8CBC;
    case 222u: goto L_08AB8CC4;
    case 223u: goto L_08AB8CCC;
    case 224u: goto L_08AB8CDC;
    case 225u: goto L_08AB8D28;
    case 226u: goto L_08AB8D30;
    case 227u: goto L_08AB8D38;
    case 228u: goto L_08AB8D40;
    case 229u: goto L_08AB8D68;
    case 230u: goto L_08AB8D70;
    case 231u: goto L_08AB8D78;
    case 232u: goto L_08AB8DBC;
    case 233u: goto L_08AB8DC4;
    case 234u: goto L_08AB8DCC;
    case 235u: goto L_08AB8DD8;
    case 236u: goto L_08AB8DE0;
    case 237u: goto L_08AB8DE8;
    case 238u: goto L_08AB8DF8;
    case 239u: goto L_08AB8E00;
    case 240u: goto L_08AB8E18;
    case 241u: goto L_08AB8E20;
    case 242u: goto L_08AB8E28;
    case 243u: goto L_08AB8E30;
    case 244u: goto L_08AB8E40;
    case 245u: goto L_08AB8E50;
    case 246u: goto L_08AB8E58;
    case 247u: goto L_08AB8E60;
    case 248u: goto L_08AB8E68;
    case 249u: goto L_08AB8E70;
    case 250u: goto L_08AB8E74;
    case 251u: goto L_08AB8E88;
    case 252u: goto L_08AB8E90;
    case 253u: goto L_08AB8E98;
    case 254u: goto L_08AB8E9C;
    case 255u: goto L_08AB8EB0;
    case 256u: goto L_08AB8ECC;
    case 257u: goto L_08AB8ED4;
    case 258u: goto L_08AB8EDC;
    case 259u: goto L_08AB8EE0;
    case 260u: goto L_08AB8EE8;
    case 261u: goto L_08AB8F0C;
    case 262u: goto L_08AB8F20;
    case 263u: goto L_08AB8F2C;
    case 264u: goto L_08AB8F40;
    case 265u: goto L_08AB8F4C;
    case 266u: goto L_08AB8F60;
    case 267u: goto L_08AB8F6C;
    case 268u: goto L_08AB8F80;
    case 269u: goto L_08AB8F8C;
    case 270u: goto L_08AB8FA0;
    case 271u: goto L_08AB8FAC;
    case 272u: goto L_08AB8FC0;
    case 273u: goto L_08AB8FCC;
    case 274u: goto L_08AB8FE0;
    case 275u: goto L_08AB8FEC;
    case 276u: goto L_08AB9000;
    case 277u: goto L_08AB9024;
    case 278u: goto L_08AB9038;
    case 279u: goto L_08AB905C;
    case 280u: goto L_08AB9064;
    case 281u: goto L_08AB906C;
    case 282u: goto L_08AB9070;
    case 283u: goto L_08AB9078;
    case 284u: goto L_08AB9080;
    case 285u: goto L_08AB9090;
    case 286u: goto L_08AB9098;
    case 287u: goto L_08AB90A0;
    case 288u: goto L_08AB90A8;
    case 289u: goto L_08AB90B0;
    case 290u: goto L_08AB90B8;
    case 291u: goto L_08AB90C4;
    case 292u: goto L_08AB90D4;
    case 293u: goto L_08AB90DC;
    case 294u: goto L_08AB90E4;
    case 295u: goto L_08AB90F4;
    case 296u: goto L_08AB90F8;
    case 297u: goto L_08AB9108;
    case 298u: goto L_08AB9110;
    case 299u: goto L_08AB9118;
    case 300u: goto L_08AB911C;
    case 301u: goto L_08AB9130;
    case 302u: goto L_08AB916C;
    case 303u: goto L_08AB9184;
    case 304u: goto L_08AB9194;
    case 305u: goto L_08AB919C;
    case 306u: goto L_08AB91A4;
    case 307u: goto L_08AB91A8;
    case 308u: goto L_08AB91B0;
    case 309u: goto L_08AB91B8;
    case 310u: goto L_08AB91C8;
    case 311u: goto L_08AB91D0;
    case 312u: goto L_08AB91D8;
    case 313u: goto L_08AB91E0;
    case 314u: goto L_08AB91E8;
    case 315u: goto L_08AB91F0;
    case 316u: goto L_08AB91F8;
    case 317u: goto L_08AB920C;
    case 318u: goto L_08AB9214;
    case 319u: goto L_08AB921C;
    case 320u: goto L_08AB9224;
    case 321u: goto L_08AB9230;
    case 322u: goto L_08AB9238;
    case 323u: goto L_08AB9240;
    case 324u: goto L_08AB9248;
    case 325u: goto L_08AB9250;
    case 326u: goto L_08AB9260;
    case 327u: goto L_08AB9270;
    case 328u: goto L_08AB9284;
    case 329u: goto L_08AB9290;
    case 330u: goto L_08AB92A8;
    case 331u: goto L_08AB92B8;
    case 332u: goto L_08AB92CC;
    case 333u: goto L_08AB92D4;
    case 334u: goto L_08AB92D8;
    case 335u: goto L_08AB92DC;
    case 336u: goto L_08AB92F8;
    case 337u: goto L_08AB9300;
    case 338u: goto L_08AB9308;
    case 339u: goto L_08AB9310;
    case 340u: goto L_08AB9314;
    case 341u: goto L_08AB9318;
    case 342u: goto L_08AB9320;
    case 343u: goto L_08AB9334;
    case 344u: goto L_08AB9348;
    case 345u: goto L_08AB9350;
    case 346u: goto L_08AB9358;
    case 347u: goto L_08AB9364;
    case 348u: goto L_08AB936C;
    case 349u: goto L_08AB937C;
    case 350u: goto L_08AB9380;
    case 351u: goto L_08AB9390;
    case 352u: goto L_08AB9398;
    case 353u: goto L_08AB93A8;
    case 354u: goto L_08AB93AC;
    case 355u: goto L_08AB93B0;
    case 356u: goto L_08AB93B4;
    case 357u: goto L_08AB93C0;
    case 358u: goto L_08AB93E0;
    case 359u: goto L_08AB93E8;
    case 360u: goto L_08AB93F4;
    case 361u: goto L_08AB93F8;
    case 362u: goto L_08AB9404;
    case 363u: goto L_08AB940C;
    case 364u: goto L_08AB9414;
    case 365u: goto L_08AB941C;
    case 366u: goto L_08AB9424;
    case 367u: goto L_08AB9430;
    case 368u: goto L_08AB9434;
    case 369u: goto L_08AB9438;
    case 370u: goto L_08AB944C;
    case 371u: goto L_08AB947C;
    case 372u: goto L_08AB9488;
    case 373u: goto L_08AB94A4;
    case 374u: goto L_08AB94B0;
    case 375u: goto L_08AB94BC;
    case 376u: goto L_08AB94C8;
    case 377u: goto L_08AB94D0;
    case 378u: goto L_08AB94D8;
    case 379u: goto L_08AB94E0;
    case 380u: goto L_08AB94EC;
    case 381u: goto L_08AB94F0;
    case 382u: goto L_08AB9500;
    case 383u: goto L_08AB9508;
    case 384u: goto L_08AB9510;
    case 385u: goto L_08AB951C;
    case 386u: goto L_08AB9524;
    case 387u: goto L_08AB9528;
    case 388u: goto L_08AB952C;
    case 389u: goto L_08AB9540;
    case 390u: goto L_08AB9570;
    case 391u: goto L_08AB9578;
    case 392u: goto L_08AB9580;
    case 393u: goto L_08AB9584;
    case 394u: goto L_08AB958C;
    case 395u: goto L_08AB959C;
    case 396u: goto L_08AB95A4;
    case 397u: goto L_08AB95AC;
    case 398u: goto L_08AB95B4;
    case 399u: goto L_08AB95C0;
    case 400u: goto L_08AB95D4;
    case 401u: goto L_08AB95E0;
    case 402u: goto L_08AB95E4;
    case 403u: goto L_08AB95F0;
    case 404u: goto L_08AB95FC;
    case 405u: goto L_08AB960C;
    case 406u: goto L_08AB9618;
    case 407u: goto L_08AB9624;
    case 408u: goto L_08AB9630;
    case 409u: goto L_08AB963C;
    case 410u: goto L_08AB9648;
    case 411u: goto L_08AB9658;
    case 412u: goto L_08AB9668;
    case 413u: goto L_08AB9670;
    case 414u: goto L_08AB9678;
    case 415u: goto L_08AB9684;
    case 416u: goto L_08AB968C;
    case 417u: goto L_08AB9694;
    case 418u: goto L_08AB9698;
    case 419u: goto L_08AB96B4;
    case 420u: goto L_08AB96D8;
    case 421u: goto L_08AB96E4;
    case 422u: goto L_08AB9704;
    case 423u: goto L_08AB9710;
    case 424u: goto L_08AB971C;
    case 425u: goto L_08AB9724;
    case 426u: goto L_08AB9728;
    case 427u: goto L_08AB9738;
    case 428u: goto L_08AB9740;
    case 429u: goto L_08AB9764;
    case 430u: goto L_08AB9770;
    case 431u: goto L_08AB977C;
    case 432u: goto L_08AB978C;
    case 433u: goto L_08AB9794;
    case 434u: goto L_08AB979C;
    case 435u: goto L_08AB97A4;
    case 436u: goto L_08AB97BC;
    case 437u: goto L_08AB97C8;
    case 438u: goto L_08AB97D4;
    case 439u: goto L_08AB97E0;
    case 440u: goto L_08AB97E8;
    case 441u: goto L_08AB97F0;
    case 442u: goto L_08AB9800;
    case 443u: goto L_08AB980C;
    case 444u: goto L_08AB9814;
    case 445u: goto L_08AB9820;
    case 446u: goto L_08AB982C;
    case 447u: goto L_08AB9844;
    case 448u: goto L_08AB984C;
    case 449u: goto L_08AB985C;
    case 450u: goto L_08AB9868;
    case 451u: goto L_08AB9878;
    case 452u: goto L_08AB9884;
    case 453u: goto L_08AB9890;
    case 454u: goto L_08AB989C;
    case 455u: goto L_08AB98A8;
    case 456u: goto L_08AB98B4;
    case 457u: goto L_08AB98C0;
    case 458u: goto L_08AB98C8;
    case 459u: goto L_08AB98D8;
    case 460u: goto L_08AB98E8;
    case 461u: goto L_08AB98F0;
    case 462u: goto L_08AB98F8;
    case 463u: goto L_08AB98FC;
    case 464u: goto L_08AB9904;
    case 465u: goto L_08AB9914;
    case 466u: goto L_08AB991C;
    case 467u: goto L_08AB9924;
    case 468u: goto L_08AB9928;
    case 469u: goto L_08AB993C;
    case 470u: goto L_08AB996C;
    case 471u: goto L_08AB9978;
    case 472u: goto L_08AB9994;
    case 473u: goto L_08AB99A0;
    case 474u: goto L_08AB99B4;
    case 475u: goto L_08AB99BC;
    case 476u: goto L_08AB99C4;
    case 477u: goto L_08AB99CC;
    case 478u: goto L_08AB99D4;
    case 479u: goto L_08AB99D8;
    case 480u: goto L_08AB99E8;
    case 481u: goto L_08AB99F0;
    case 482u: goto L_08AB99F4;
    case 483u: goto L_08AB9A04;
    case 484u: goto L_08AB9A10;
    case 485u: goto L_08AB9A1C;
    case 486u: goto L_08AB9A50;
    case 487u: goto L_08AB9A60;
    case 488u: goto L_08AB9A74;
    case 489u: goto L_08AB9A7C;
    case 490u: goto L_08AB9A84;
    case 491u: goto L_08AB9A8C;
    case 492u: goto L_08AB9A98;
    case 493u: goto L_08AB9AA0;
    case 494u: goto L_08AB9AAC;
    case 495u: goto L_08AB9AB0;
    case 496u: goto L_08AB9AC0;
    case 497u: goto L_08AB9AD0;
    case 498u: goto L_08AB9ADC;
    case 499u: goto L_08AB9AE8;
    case 500u: goto L_08AB9AF0;
    case 501u: goto L_08AB9B00;
    case 502u: goto L_08AB9B08;
    case 503u: goto L_08AB9B18;
    case 504u: goto L_08AB9B20;
    case 505u: goto L_08AB9B30;
    case 506u: goto L_08AB9B38;
    case 507u: goto L_08AB9B48;
    case 508u: goto L_08AB9B50;
    case 509u: goto L_08AB9B60;
    case 510u: goto L_08AB9B70;
    case 511u: goto L_08AB9B80;
    case 512u: goto L_08AB9B88;
    case 513u: goto L_08AB9B8C;
    case 514u: goto L_08AB9B94;
    case 515u: goto L_08AB9BA0;
    case 516u: goto L_08AB9BA8;
    case 517u: goto L_08AB9BB0;
    case 518u: goto L_08AB9BB4;
    case 519u: goto L_08AB9BD8;
    case 520u: goto L_08AB9BE4;
    case 521u: goto L_08AB9BF4;
    case 522u: goto L_08AB9BFC;
    case 523u: goto L_08AB9C04;
    case 524u: goto L_08AB9C0C;
    case 525u: goto L_08AB9C14;
    case 526u: goto L_08AB9C1C;
    case 527u: goto L_08AB9C24;
    case 528u: goto L_08AB9C28;
    case 529u: goto L_08AB9C34;
    case 530u: goto L_08AB9C60;
    case 531u: goto L_08AB9C68;
    case 532u: goto L_08AB9C70;
    case 533u: goto L_08AB9C7C;
    case 534u: goto L_08AB9C84;
    case 535u: goto L_08AB9CA4;
    case 536u: goto L_08AB9CAC;
    case 537u: goto L_08AB9CC8;
    case 538u: goto L_08AB9CCC;
    case 539u: goto L_08AB9CE0;
    case 540u: goto L_08AB9CE8;
    case 541u: goto L_08AB9D04;
    case 542u: goto L_08AB9D08;
    case 543u: goto L_08AB9D0C;
    case 544u: goto L_08AB9D1C;
    case 545u: goto L_08AB9D40;
    case 546u: goto L_08AB9D54;
    case 547u: goto L_08AB9D5C;
    case 548u: goto L_08AB9D68;
    case 549u: goto L_08AB9D70;
    case 550u: goto L_08AB9D7C;
    case 551u: goto L_08AB9D84;
    case 552u: goto L_08AB9D8C;
    case 553u: goto L_08AB9DA0;
    case 554u: goto L_08AB9DA8;
    case 555u: goto L_08AB9DB4;
    case 556u: goto L_08AB9DBC;
    case 557u: goto L_08AB9DC8;
    case 558u: goto L_08AB9DD0;
    case 559u: goto L_08AB9DD8;
    case 560u: goto L_08AB9DEC;
    case 561u: goto L_08AB9DF4;
    case 562u: goto L_08AB9E00;
    case 563u: goto L_08AB9E08;
    case 564u: goto L_08AB9E10;
    case 565u: goto L_08AB9E18;
    case 566u: goto L_08AB9E20;
    case 567u: goto L_08AB9E24;
    case 568u: goto L_08AB9E38;
    case 569u: goto L_08AB9E48;
    case 570u: goto L_08AB9E54;
    case 571u: goto L_08AB9E60;
    case 572u: goto L_08AB9E6C;
    case 573u: goto L_08AB9E78;
    case 574u: goto L_08AB9E80;
    case 575u: goto L_08AB9EA8;
    case 576u: goto L_08AB9EB4;
    case 577u: goto L_08AB9EB8;
    case 578u: goto L_08AB9EC0;
    case 579u: goto L_08AB9ED0;
    case 580u: goto L_08AB9EDC;
    case 581u: goto L_08AB9EF4;
    case 582u: goto L_08AB9F00;
    case 583u: goto L_08AB9F18;
    case 584u: goto L_08AB9F20;
    case 585u: goto L_08AB9F24;
    case 586u: goto L_08AB9F34;
    case 587u: goto L_08AB9F3C;
    case 588u: goto L_08AB9F6C;
    case 589u: goto L_08AB9F74;
    case 590u: goto L_08AB9F80;
    case 591u: goto L_08AB9FA8;
    case 592u: goto L_08AB9FBC;
    case 593u: goto L_08AB9FC4;
    case 594u: goto L_08AB9FD4;
    case 595u: goto L_08AB9FE0;
    case 596u: goto L_08AB9FE8;
    case 597u: goto L_08AB9FF0;
    case 598u: goto L_08ABA004;
    case 599u: goto L_08ABA00C;
    case 600u: goto L_08ABA01C;
    case 601u: goto L_08ABA028;
    case 602u: goto L_08ABA038;
    case 603u: goto L_08ABA044;
    case 604u: goto L_08ABA04C;
    case 605u: goto L_08ABA054;
    case 606u: goto L_08ABA068;
    case 607u: goto L_08ABA070;
    case 608u: goto L_08ABA078;
    case 609u: goto L_08ABA084;
    case 610u: goto L_08ABA08C;
    case 611u: goto L_08ABA094;
    case 612u: goto L_08ABA09C;
    case 613u: goto L_08ABA0A0;
    case 614u: goto L_08ABA0A8;
    case 615u: goto L_08ABA0AC;
    case 616u: goto L_08ABA0CC;
    case 617u: goto L_08ABA0D8;
    case 618u: goto L_08ABA0E4;
    case 619u: goto L_08ABA0F0;
    case 620u: goto L_08ABA0F8;
    case 621u: goto L_08ABA104;
    case 622u: goto L_08ABA128;
    case 623u: goto L_08ABA134;
    case 624u: goto L_08ABA13C;
    case 625u: goto L_08ABA140;
    case 626u: goto L_08ABA148;
    case 627u: goto L_08ABA150;
    case 628u: goto L_08ABA15C;
    case 629u: goto L_08ABA170;
    case 630u: goto L_08ABA178;
    case 631u: goto L_08ABA184;
    case 632u: goto L_08ABA190;
    case 633u: goto L_08ABA1A4;
    case 634u: goto L_08ABA1AC;
    case 635u: goto L_08ABA1BC;
    case 636u: goto L_08ABA1C4;
    case 637u: goto L_08ABA1EC;
    case 638u: goto L_08ABA1F4;
    case 639u: goto L_08ABA208;
    case 640u: goto L_08ABA210;
    case 641u: goto L_08ABA220;
    case 642u: goto L_08ABA228;
    case 643u: goto L_08ABA250;
    case 644u: goto L_08ABA258;
    case 645u: goto L_08ABA26C;
    case 646u: goto L_08ABA274;
    case 647u: goto L_08ABA284;
    case 648u: goto L_08ABA28C;
    case 649u: goto L_08ABA2B4;
    case 650u: goto L_08ABA2B8;
    case 651u: goto L_08ABA2D0;
    case 652u: goto L_08ABA2F4;
    case 653u: goto L_08ABA300;
    case 654u: goto L_08ABA308;
    case 655u: goto L_08ABA30C;
    case 656u: goto L_08ABA314;
    case 657u: goto L_08ABA31C;
    case 658u: goto L_08ABA328;
    case 659u: goto L_08ABA33C;
    case 660u: goto L_08ABA344;
    case 661u: goto L_08ABA350;
    case 662u: goto L_08ABA354;
    case 663u: goto L_08ABA364;
    case 664u: goto L_08ABA378;
    case 665u: goto L_08ABA380;
    case 666u: goto L_08ABA390;
    case 667u: goto L_08ABA398;
    case 668u: goto L_08ABA3A0;
    case 669u: goto L_08ABA3B4;
    case 670u: goto L_08ABA3BC;
    case 671u: goto L_08ABA3CC;
    case 672u: goto L_08ABA3D4;
    case 673u: goto L_08ABA3DC;
    case 674u: goto L_08ABA3F0;
    case 675u: goto L_08ABA3F8;
    case 676u: goto L_08ABA408;
    case 677u: goto L_08ABA410;
    case 678u: goto L_08ABA414;
    case 679u: goto L_08ABA42C;
    case 680u: goto L_08ABA458;
    case 681u: goto L_08ABA464;
    case 682u: goto L_08ABA474;
    case 683u: goto L_08ABA47C;
    case 684u: goto L_08ABA488;
    case 685u: goto L_08ABA49C;
    case 686u: goto L_08ABA4A4;
    case 687u: goto L_08ABA4B4;
    case 688u: goto L_08ABA4C0;
    case 689u: goto L_08ABA4D4;
    case 690u: goto L_08ABA4DC;
    case 691u: goto L_08ABA4F0;
    case 692u: goto L_08ABA4FC;
    case 693u: goto L_08ABA504;
    case 694u: goto L_08ABA518;
    case 695u: goto L_08ABA520;
    case 696u: goto L_08ABA534;
    case 697u: goto L_08ABA540;
    case 698u: goto L_08ABA548;
    case 699u: goto L_08ABA55C;
    case 700u: goto L_08ABA564;
    case 701u: goto L_08ABA578;
    case 702u: goto L_08ABA584;
    case 703u: goto L_08ABA590;
    case 704u: goto L_08ABA598;
    case 705u: goto L_08ABA5B4;
    case 706u: goto L_08ABA5D0;
    case 707u: goto L_08ABA5DC;
    case 708u: goto L_08ABA5E8;
    case 709u: goto L_08ABA5F4;
    case 710u: goto L_08ABA5FC;
    case 711u: goto L_08ABA608;
    case 712u: goto L_08ABA614;
    case 713u: goto L_08ABA618;
    case 714u: goto L_08ABA62C;
    case 715u: goto L_08ABA648;
    case 716u: goto L_08ABA654;
    case 717u: goto L_08ABA660;
    case 718u: goto L_08ABA66C;
    case 719u: goto L_08ABA674;
    case 720u: goto L_08ABA680;
    case 721u: goto L_08ABA68C;
    case 722u: goto L_08ABA698;
    case 723u: goto L_08ABA69C;
    case 724u: goto L_08ABA6B0;
    case 725u: goto L_08ABA6C0;
    case 726u: goto L_08ABA6C8;
    case 727u: goto L_08ABA6D4;
    case 728u: goto L_08ABA6EC;
    case 729u: goto L_08ABA6F8;
    case 730u: goto L_08ABA704;
    case 731u: goto L_08ABA710;
    case 732u: goto L_08ABA71C;
    case 733u: goto L_08ABA734;
    case 734u: goto L_08ABA738;
    case 735u: goto L_08ABA74C;
    case 736u: goto L_08ABA760;
    case 737u: goto L_08ABA768;
    case 738u: goto L_08ABA770;
    case 739u: goto L_08ABA778;
    case 740u: goto L_08ABA788;
    case 741u: goto L_08ABA790;
    case 742u: goto L_08ABA798;
    case 743u: goto L_08ABA7A4;
    case 744u: goto L_08ABA7AC;
    case 745u: goto L_08ABA7BC;
    case 746u: goto L_08ABA7C0;
    case 747u: goto L_08ABA7C4;
    case 748u: goto L_08ABA7C8;
    case 749u: goto L_08ABA7D4;
    case 750u: goto L_08ABA80C;
    case 751u: goto L_08ABA814;
    case 752u: goto L_08ABA820;
    case 753u: goto L_08ABA828;
    case 754u: goto L_08ABA830;
    case 755u: goto L_08ABA840;
    case 756u: goto L_08ABA848;
    case 757u: goto L_08ABA850;
    case 758u: goto L_08ABA858;
    case 759u: goto L_08ABA864;
    case 760u: goto L_08ABA874;
    case 761u: goto L_08ABA880;
    case 762u: goto L_08ABA890;
    case 763u: goto L_08ABA89C;
    case 764u: goto L_08ABA8A8;
    case 765u: goto L_08ABA8B4;
    case 766u: goto L_08ABA8C4;
    case 767u: goto L_08ABA8D0;
    case 768u: goto L_08ABA8DC;
    case 769u: goto L_08ABA8E4;
    case 770u: goto L_08ABA8F0;
    case 771u: goto L_08ABA900;
    case 772u: goto L_08ABA910;
    case 773u: goto L_08ABA918;
    case 774u: goto L_08ABA920;
    case 775u: goto L_08ABA924;
    case 776u: goto L_08ABA940;
    case 777u: goto L_08ABA964;
    case 778u: goto L_08ABA970;
    case 779u: goto L_08ABA97C;
    case 780u: goto L_08ABA984;
    case 781u: goto L_08ABA98C;
    case 782u: goto L_08ABA990;
    case 783u: goto L_08ABA9A0;
    case 784u: goto L_08ABA9A8;
    case 785u: goto L_08ABA9D8;
    case 786u: goto L_08ABA9E4;
    case 787u: goto L_08ABA9F8;
    case 788u: goto L_08ABAA00;
    case 789u: goto L_08ABAA08;
    case 790u: goto L_08ABAA10;
    case 791u: goto L_08ABAA1C;
    case 792u: goto L_08ABAA2C;
    case 793u: goto L_08ABAA38;
    case 794u: goto L_08ABAA48;
    case 795u: goto L_08ABAA54;
    case 796u: goto L_08ABAA60;
    case 797u: goto L_08ABAA6C;
    case 798u: goto L_08ABAA78;
    case 799u: goto L_08ABAA84;
    case 800u: goto L_08ABAA8C;
    case 801u: goto L_08ABAA98;
    case 802u: goto L_08ABAAA8;
    case 803u: goto L_08ABAAB8;
    case 804u: goto L_08ABAAC0;
    case 805u: goto L_08ABAAC8;
    case 806u: goto L_08ABAACC;
    case 807u: goto L_08ABAAE4;
    case 808u: goto L_08ABAAF0;
    case 809u: goto L_08ABAAFC;
    case 810u: goto L_08ABAB3C;
    case 811u: goto L_08ABAB48;
    case 812u: goto L_08ABAB5C;
    case 813u: goto L_08ABAB64;
    case 814u: goto L_08ABAB6C;
    case 815u: goto L_08ABAB74;
    case 816u: goto L_08ABAB80;
    case 817u: goto L_08ABAB94;
    case 818u: goto L_08ABABA4;
    case 819u: goto L_08ABABB0;
    case 820u: goto L_08ABABBC;
    case 821u: goto L_08ABABC4;
    case 822u: goto L_08ABABD4;
    case 823u: goto L_08ABABDC;
    case 824u: goto L_08ABABEC;
    case 825u: goto L_08ABABF4;
    case 826u: goto L_08ABAC04;
    case 827u: goto L_08ABAC0C;
    case 828u: goto L_08ABAC1C;
    case 829u: goto L_08ABAC24;
    case 830u: goto L_08ABAC34;
    case 831u: goto L_08ABAC3C;
    case 832u: goto L_08ABAC4C;
    case 833u: goto L_08ABAC54;
    case 834u: goto L_08ABAC60;
    case 835u: goto L_08ABAC70;
    case 836u: goto L_08ABAC80;
    case 837u: goto L_08ABAC88;
    case 838u: goto L_08ABAC8C;
    case 839u: goto L_08ABAC90;
    case 840u: goto L_08ABACB4;
    case 841u: goto L_08ABACC4;
    case 842u: goto L_08ABACD0;
    case 843u: goto L_08ABACE4;
    case 844u: goto L_08ABACF8;
    case 845u: goto L_08ABAD10;
    case 846u: goto L_08ABAD1C;
    case 847u: goto L_08ABAD28;
    case 848u: goto L_08ABAD30;
    case 849u: goto L_08ABAD64;
    case 850u: goto L_08ABAD6C;
    case 851u: goto L_08ABAD7C;
    case 852u: goto L_08ABAD88;
    case 853u: goto L_08ABAD94;
    case 854u: goto L_08ABAD9C;
    case 855u: goto L_08ABADA8;
    case 856u: goto L_08ABADB0;
    case 857u: goto L_08ABADDC;
    case 858u: goto L_08ABADEC;
    case 859u: goto L_08ABADF8;
    case 860u: goto L_08ABAE00;
    case 861u: goto L_08ABAE14;
    case 862u: goto L_08ABAE24;
    case 863u: goto L_08ABAE34;
    case 864u: goto L_08ABAE54;
    case 865u: goto L_08ABAE6C;
    case 866u: goto L_08ABAE74;
    case 867u: goto L_08ABAE7C;
    case 868u: goto L_08ABAE84;
    case 869u: goto L_08ABAEA8;
    case 870u: goto L_08ABAEAC;
    case 871u: goto L_08ABAEBC;
    case 872u: goto L_08ABAEDC;
    case 873u: goto L_08ABAEE4;
    case 874u: goto L_08ABAEEC;
    case 875u: goto L_08ABAEF4;
    case 876u: goto L_08ABAEFC;
    case 877u: goto L_08ABAF1C;
    case 878u: goto L_08ABAF28;
    case 879u: goto L_08ABAF34;
    case 880u: goto L_08ABAF44;
    case 881u: goto L_08ABAF50;
    case 882u: goto L_08ABAF60;
    case 883u: goto L_08ABAF74;
    case 884u: goto L_08ABAF78;
    case 885u: goto L_08ABAF90;
    case 886u: goto L_08ABAFC0;
    case 887u: goto L_08ABAFC8;
    case 888u: goto L_08ABAFDC;
    case 889u: goto L_08ABAFE4;
    case 890u: goto L_08ABAFEC;
    case 891u: goto L_08ABAFF8;
    case 892u: goto L_08ABB000;
    case 893u: goto L_08ABB008;
    case 894u: goto L_08ABB01C;
    case 895u: goto L_08ABB024;
    case 896u: goto L_08ABB02C;
    case 897u: goto L_08ABB03C;
    case 898u: goto L_08ABB040;
    case 899u: goto L_08ABB048;
    case 900u: goto L_08ABB050;
    case 901u: goto L_08ABB058;
    case 902u: goto L_08ABB060;
    case 903u: goto L_08ABB068;
    case 904u: goto L_08ABB070;
    case 905u: goto L_08ABB078;
    case 906u: goto L_08ABB080;
    case 907u: goto L_08ABB088;
    case 908u: goto L_08ABB09C;
    case 909u: goto L_08ABB0A0;
    case 910u: goto L_08ABB0A8;
    case 911u: goto L_08ABB0B0;
    case 912u: goto L_08ABB0B8;
    case 913u: goto L_08ABB0C0;
    case 914u: goto L_08ABB0C8;
    case 915u: goto L_08ABB0DC;
    case 916u: goto L_08ABB0E4;
    case 917u: goto L_08ABB0E8;
    case 918u: goto L_08ABB0F0;
    case 919u: goto L_08ABB0F8;
    case 920u: goto L_08ABB100;
    case 921u: goto L_08ABB10C;
    case 922u: goto L_08ABB114;
    case 923u: goto L_08ABB11C;
    case 924u: goto L_08ABB12C;
    case 925u: goto L_08ABB134;
    case 926u: goto L_08ABB13C;
    case 927u: goto L_08ABB148;
    case 928u: goto L_08ABB150;
    case 929u: goto L_08ABB158;
    case 930u: goto L_08ABB160;
    case 931u: goto L_08ABB164;
    case 932u: goto L_08ABB16C;
    case 933u: goto L_08ABB174;
    case 934u: goto L_08ABB178;
    case 935u: goto L_08ABB19C;
    case 936u: goto L_08ABB1A8;
    case 937u: goto L_08ABB1B0;
    case 938u: goto L_08ABB1C8;
    case 939u: goto L_08ABB1D0;
    case 940u: goto L_08ABB1D8;
    case 941u: goto L_08ABB1E0;
    case 942u: goto L_08ABB1E8;
    case 943u: goto L_08ABB208;
    case 944u: goto L_08ABB214;
    case 945u: goto L_08ABB218;
    case 946u: goto L_08ABB228;
    case 947u: goto L_08ABB248;
    case 948u: goto L_08ABB250;
    case 949u: goto L_08ABB258;
    case 950u: goto L_08ABB260;
    case 951u: goto L_08ABB268;
    case 952u: goto L_08ABB270;
    case 953u: goto L_08ABB27C;
    case 954u: goto L_08ABB290;
    case 955u: goto L_08ABB294;
    case 956u: goto L_08ABB2A4;
    case 957u: goto L_08ABB2B8;
    case 958u: goto L_08ABB2C4;
    case 959u: goto L_08ABB2C8;
    case 960u: goto L_08ABB2DC;
    case 961u: goto L_08ABB2E4;
    case 962u: goto L_08ABB2EC;
    case 963u: goto L_08ABB2F0;
    case 964u: goto L_08ABB2F8;
    case 965u: goto L_08ABB30C;
    case 966u: goto L_08ABB310;
    case 967u: goto L_08ABB328;
    case 968u: goto L_08ABB33C;
    case 969u: goto L_08ABB344;
    case 970u: goto L_08ABB348;
    case 971u: goto L_08ABB350;
    case 972u: goto L_08ABB3A8;
    case 973u: goto L_08ABB3BC;
    case 974u: goto L_08ABB3D0;
    case 975u: goto L_08ABB3E8;
    case 976u: goto L_08ABB3F4;
    case 977u: goto L_08ABB3FC;
    case 978u: goto L_08ABB400;
    case 979u: goto L_08ABB410;
    case 980u: goto L_08ABB418;
    case 981u: goto L_08ABB460;
    case 982u: goto L_08ABB46C;
    case 983u: goto L_08ABB478;
    case 984u: goto L_08ABB480;
    case 985u: goto L_08ABB488;
    case 986u: goto L_08ABB490;
    case 987u: goto L_08ABB494;
    case 988u: goto L_08ABB49C;
    case 989u: goto L_08ABB4A0;
    case 990u: goto L_08ABB4A4;
    case 991u: goto L_08ABB4B4;
    case 992u: goto L_08ABB4C4;
    case 993u: goto L_08ABB4E0;
    case 994u: goto L_08ABB4E8;
    case 995u: goto L_08ABB4F4;
    case 996u: goto L_08ABB4FC;
    case 997u: goto L_08ABB510;
    case 998u: goto L_08ABB520;
    case 999u: goto L_08ABB530;
    case 1000u: goto L_08ABB540;
    case 1001u: goto L_08ABB548;
    case 1002u: goto L_08ABB550;
    case 1003u: goto L_08ABB55C;
    case 1004u: goto L_08ABB564;
    case 1005u: goto L_08ABB568;
    case 1006u: goto L_08ABB570;
    case 1007u: goto L_08ABB578;
    case 1008u: goto L_08ABB584;
    case 1009u: goto L_08ABB58C;
    case 1010u: goto L_08ABB5A0;
    case 1011u: goto L_08ABB5B0;
    case 1012u: goto L_08ABB5BC;
    case 1013u: goto L_08ABB5C4;
    case 1014u: goto L_08ABB5D0;
    case 1015u: goto L_08ABB5E0;
    case 1016u: goto L_08ABB5E8;
    case 1017u: goto L_08ABB5EC;
    case 1018u: goto L_08ABB5FC;
    case 1019u: goto L_08ABB608;
    case 1020u: goto L_08ABB610;
    case 1021u: goto L_08ABB614;
    case 1022u: goto L_08ABB61C;
    case 1023u: goto L_08ABB620;
    case 1024u: goto L_08ABB62C;
    case 1025u: goto L_08ABB650;
    case 1026u: goto L_08ABB668;
    case 1027u: goto L_08ABB67C;
    case 1028u: goto L_08ABB684;
    case 1029u: goto L_08ABB690;
    case 1030u: goto L_08ABB698;
    case 1031u: goto L_08ABB6A4;
    case 1032u: goto L_08ABB6AC;
    case 1033u: goto L_08ABB6B4;
    case 1034u: goto L_08ABB6CC;
    case 1035u: goto L_08ABB6E0;
    case 1036u: goto L_08ABB6EC;
    case 1037u: goto L_08ABB6F0;
    case 1038u: goto L_08ABB6F8;
    case 1039u: goto L_08ABB6FC;
    case 1040u: goto L_08ABB72C;
    case 1041u: goto L_08ABB750;
    case 1042u: goto L_08ABB758;
    case 1043u: goto L_08ABB75C;
    case 1044u: goto L_08ABB764;
    case 1045u: goto L_08ABB780;
    case 1046u: goto L_08ABB788;
    case 1047u: goto L_08ABB794;
    case 1048u: goto L_08ABB79C;
    case 1049u: goto L_08ABB7A0;
    case 1050u: goto L_08ABB7A8;
    case 1051u: goto L_08ABB7AC;
    case 1052u: goto L_08ABB7BC;
    case 1053u: goto L_08ABB7C4;
    case 1054u: goto L_08ABB7C8;
    case 1055u: goto L_08ABB7D0;
    case 1056u: goto L_08ABB7D8;
    case 1057u: goto L_08ABB7DC;
    case 1058u: goto L_08ABB7E4;
    case 1059u: goto L_08ABB7EC;
    case 1060u: goto L_08ABB7F0;
    case 1061u: goto L_08ABB7F8;
    case 1062u: goto L_08ABB800;
    case 1063u: goto L_08ABB804;
    case 1064u: goto L_08ABB80C;
    case 1065u: goto L_08ABB814;
    case 1066u: goto L_08ABB818;
    case 1067u: goto L_08ABB820;
    case 1068u: goto L_08ABB828;
    case 1069u: goto L_08ABB82C;
    case 1070u: goto L_08ABB834;
    case 1071u: goto L_08ABB83C;
    case 1072u: goto L_08ABB840;
    case 1073u: goto L_08ABB848;
    case 1074u: goto L_08ABB850;
    case 1075u: goto L_08ABB85C;
    case 1076u: goto L_08ABB86C;
    case 1077u: goto L_08ABB874;
    case 1078u: goto L_08ABB880;
    case 1079u: goto L_08ABB888;
    case 1080u: goto L_08ABB88C;
    case 1081u: goto L_08ABB8A0;
    case 1082u: goto L_08ABB8C4;
    case 1083u: goto L_08ABB908;
    case 1084u: goto L_08ABB920;
    case 1085u: goto L_08ABB928;
    case 1086u: goto L_08ABB938;
    case 1087u: goto L_08ABB960;
    case 1088u: goto L_08ABB974;
    case 1089u: goto L_08ABB980;
    case 1090u: goto L_08ABB988;
    case 1091u: goto L_08ABB990;
    case 1092u: goto L_08ABB9A4;
    case 1093u: goto L_08ABB9B0;
    case 1094u: goto L_08ABB9C4;
    case 1095u: goto L_08ABB9CC;
    case 1096u: goto L_08ABB9E0;
    case 1097u: goto L_08ABB9EC;
    case 1098u: goto L_08ABBA00;
    case 1099u: goto L_08ABBA04;
    case 1100u: goto L_08ABBA14;
    case 1101u: goto L_08ABBA40;
    case 1102u: goto L_08ABBA58;
    case 1103u: goto L_08ABBA64;
    case 1104u: goto L_08ABBA6C;
    case 1105u: goto L_08ABBA70;
    case 1106u: goto L_08ABBA88;
    case 1107u: goto L_08ABBAA4;
    case 1108u: goto L_08ABBAB0;
    case 1109u: goto L_08ABBAB8;
    case 1110u: goto L_08ABBABC;
    case 1111u: goto L_08ABBACC;
    case 1112u: goto L_08ABBAF0;
    case 1113u: goto L_08ABBAF8;
    case 1114u: goto L_08ABBB0C;
    case 1115u: goto L_08ABBB10;
    case 1116u: goto L_08ABBB24;
    case 1117u: goto L_08ABBB30;
    case 1118u: goto L_08ABBB34;
    case 1119u: goto L_08ABBB38;
    case 1120u: goto L_08ABBB48;
    case 1121u: goto L_08ABBB54;
    case 1122u: goto L_08ABBB58;
    case 1123u: goto L_08ABBB5C;
    case 1124u: goto L_08ABBB6C;
    case 1125u: goto L_08ABBB74;
    case 1126u: goto L_08ABBB7C;
    case 1127u: goto L_08ABBB84;
    case 1128u: goto L_08ABBB8C;
    case 1129u: goto L_08ABBB98;
    case 1130u: goto L_08ABBB9C;
    case 1131u: goto L_08ABBBA0;
    case 1132u: goto L_08ABBBA8;
    case 1133u: goto L_08ABBBB4;
    case 1134u: goto L_08ABBBB8;
    case 1135u: goto L_08ABBBBC;
    case 1136u: goto L_08ABBBC4;
    case 1137u: goto L_08ABBBC8;
    case 1138u: goto L_08ABBBD0;
    case 1139u: goto L_08ABBBD8;
    case 1140u: goto L_08ABBBDC;
    case 1141u: goto L_08ABBBE0;
    case 1142u: goto L_08ABBBF8;
    case 1143u: goto L_08ABBC14;
    case 1144u: goto L_08ABBC1C;
    case 1145u: goto L_08ABBC28;
    case 1146u: goto L_08ABBC34;
    case 1147u: goto L_08ABBC3C;
    case 1148u: goto L_08ABBC48;
    case 1149u: goto L_08ABBC50;
    case 1150u: goto L_08ABBC5C;
    case 1151u: goto L_08ABBC68;
    case 1152u: goto L_08ABBC6C;
    case 1153u: goto L_08ABBC70;
    case 1154u: goto L_08ABBC84;
    case 1155u: goto L_08ABBC98;
    case 1156u: goto L_08ABBCA0;
    case 1157u: goto L_08ABBCA8;
    case 1158u: goto L_08ABBCB0;
    case 1159u: goto L_08ABBCBC;
    case 1160u: goto L_08ABBCC8;
    case 1161u: goto L_08ABBCD8;
    case 1162u: goto L_08ABBCF0;
    case 1163u: goto L_08ABBD04;
    case 1164u: goto L_08ABBD08;
    case 1165u: goto L_08ABBD10;
    case 1166u: goto L_08ABBD24;
    case 1167u: goto L_08ABBD28;
    case 1168u: goto L_08ABBD30;
    case 1169u: goto L_08ABBD3C;
    case 1170u: goto L_08ABBD40;
    case 1171u: goto L_08ABBD48;
    case 1172u: goto L_08ABBD60;
    case 1173u: goto L_08ABBD6C;
    case 1174u: goto L_08ABBD70;
    case 1175u: goto L_08ABBD78;
    case 1176u: goto L_08ABBD7C;
    case 1177u: goto L_08ABBD84;
    case 1178u: goto L_08ABBD88;
    case 1179u: goto L_08ABBDB8;
    case 1180u: goto L_08ABBDBC;
    case 1181u: goto L_08ABBDC4;
    case 1182u: goto L_08ABBDC8;
    case 1183u: goto L_08ABBDDC;
    case 1184u: goto L_08ABBDE4;
    case 1185u: goto L_08ABBDEC;
    case 1186u: goto L_08ABBDF0;
    case 1187u: goto L_08ABBDFC;
    case 1188u: goto L_08ABBE2C;
    case 1189u: goto L_08ABBE5C;
    case 1190u: goto L_08ABBE68;
    case 1191u: goto L_08ABBE90;
    case 1192u: goto L_08ABBEA0;
    case 1193u: goto L_08ABBEB0;
    case 1194u: goto L_08ABBEBC;
    case 1195u: goto L_08ABBED4;
    case 1196u: goto L_08ABBEF8;
    case 1197u: goto L_08ABBF08;
    case 1198u: goto L_08ABBF28;
    case 1199u: goto L_08ABBF3C;
    case 1200u: goto L_08ABBF58;
    case 1201u: goto L_08ABBF68;
    case 1202u: goto L_08ABBF88;
    case 1203u: goto L_08ABBF9C;
    case 1204u: goto L_08ABBFC0;
    case 1205u: goto L_08ABBFD4;
    case 1206u: goto L_08ABBFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB8000:
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, (ctx.gpr[3] >> 3u) & 0x0000000Fu);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AB8024u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 935u, 0x08AB7F10u>(ctx, &aot_mem) && ctx.pc == 0x08AB8024u) goto L_08AB8024;
    return;
L_08AB8024:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB806Cu);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB806C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB807C;
    }
    goto L_08AB8074;
L_08AB8074:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB8144;
      }
      goto L_08AB807C;
    }
L_08AB807C:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB8088u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    goto L_08ABA104;
L_08AB8088:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB8098;
    }
    goto L_08AB8090;
L_08AB8090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8140;
      }
      goto L_08AB8098;
    }
L_08AB8098:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2012)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB80A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB80A8u) goto L_08AB80A8;
    return;
L_08AB80A8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08AB8114;
    }
    goto L_08AB80B0;
L_08AB80B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, ctx.gpr[2] | 256u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB80D0u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB80D0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB80E0;
    }
    goto L_08AB80D8;
L_08AB80D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8140;
      }
      goto L_08AB80E0;
    }
L_08AB80E0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AB80ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_08ABA104;
L_08AB80EC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08AB80FC;
    }
    goto L_08AB80F4;
L_08AB80F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8140;
      }
      goto L_08AB80FC;
    }
L_08AB80FC:
    ctx.set_gpr(31, 0x08AB8104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 940u, 0x08AB7FB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8104u) goto L_08AB8104;
    return;
L_08AB8104:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB8124;
      }
      goto L_08AB8114;
    }
L_08AB8114:
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 255u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AB8124;
L_08AB8124:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB8138u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB8138:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB8140;
    }
    goto L_08AB8140;
L_08AB8140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB8144;
L_08AB8144:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AB81A4;
      }
      goto L_08AB8184;
    }
L_08AB8184:
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AB8254;
    }
    goto L_08AB818C;
L_08AB818C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB81A8;
    }
    goto L_08AB8198;
L_08AB8198:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8254;
      }
      goto L_08AB81A4;
    }
L_08AB81A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB81A8;
L_08AB81A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AB81B8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    goto L_08ABA42C;
L_08AB81B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB81C8;
    }
    goto L_08AB81C0;
L_08AB81C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8254;
      }
      goto L_08AB81C8;
    }
L_08AB81C8:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB81D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    goto L_08ABA104;
L_08AB81D4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[6]) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB81E8;
    }
    goto L_08AB81E0;
L_08AB81E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8254;
      }
      goto L_08AB81E8;
    }
L_08AB81E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2004)));
    ctx.set_gpr(31, 0x08AB81F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB81F4u) goto L_08AB81F4;
    return;
L_08AB81F4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08AB822C;
    }
    goto L_08AB81FC;
L_08AB81FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB8238;
      }
      goto L_08AB822C;
    }
L_08AB822C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-256));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AB8238;
L_08AB8238:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB824Cu);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB824C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB8254;
    }
    goto L_08AB8254;
L_08AB8254:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AB829Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    goto L_08ABA42C;
L_08AB829C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB82AC;
    }
    goto L_08AB82A4;
L_08AB82A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB8410;
      }
      goto L_08AB82AC;
    }
L_08AB82AC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB82B8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    goto L_08ABA104;
L_08AB82B8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB82C8;
    }
    goto L_08AB82C0;
L_08AB82C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB840C;
      }
      goto L_08AB82C8;
    }
L_08AB82C8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x08AB82D8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    goto L_08ABA104;
L_08AB82D8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB82E8;
    }
    goto L_08AB82E0;
L_08AB82E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB840C;
      }
      goto L_08AB82E8;
    }
L_08AB82E8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x08AB82F8u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(0u));
    goto L_08ABA104;
L_08AB82F8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB8308;
    }
    goto L_08AB8300;
L_08AB8300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB840C;
      }
      goto L_08AB8308;
    }
L_08AB8308:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AB8318u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(286), static_cast<std::uint8_t>(0u));
    goto L_08ABA104;
L_08AB8318:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB8328;
    }
    goto L_08AB8320;
L_08AB8320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB840C;
      }
      goto L_08AB8328;
    }
L_08AB8328:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x08AB8338u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(0u));
    goto L_08ABA104;
L_08AB8338:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428))))));
        goto L_08AB8348;
    }
    goto L_08AB8340;
L_08AB8340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB840C;
      }
      goto L_08AB8348;
    }
L_08AB8348:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_08AB8388;
    }
    goto L_08AB8350;
L_08AB8350:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-256));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | 5u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(429))))));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(528));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AB8380u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2220));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 418u, 0x08815EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8380u) goto L_08AB8380;
    return;
L_08AB8380:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AB83A4;
      }
      goto L_08AB8388;
    }
L_08AB8388:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-256));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | 3u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(430), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB83A4;
L_08AB83A4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08AB83B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABA104;
L_08AB83B0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
        goto L_08AB83C0;
    }
    goto L_08AB83B8;
L_08AB83B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB840C;
      }
      goto L_08AB83C0;
    }
L_08AB83C0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 127 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(127));
        goto L_08AB83CC;
    }
    goto L_08AB83CC;
L_08AB83CC:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23244));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(31, 0x08AB83E8u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB83E8u) goto L_08AB83E8;
    return;
L_08AB83E8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23244));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x08AB8408u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AB8424;
L_08AB8408:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB840C;
L_08AB840C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB8410;
L_08AB8410:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8424:
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(3, (ctx.gpr[4] >> 30u) & 0x00000001u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB8508;
      }
      goto L_08AB8434;
    }
L_08AB8434:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(1, ctx.gpr[4] ^ ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB8500;
      }
      goto L_08AB8440;
    }
L_08AB8440:
    ctx.set_gpr(1, ctx.gpr[1] & 3u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(63));
      if (branch_taken) {
          goto L_08AB8508;
      }
      goto L_08AB844C;
    }
L_08AB844C:
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    goto L_08AB8450;
L_08AB8450:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(1, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8468;
      }
      goto L_08AB8458;
    }
L_08AB8458:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[1]));
      if (branch_taken) {
          goto L_08AB8450;
      }
      goto L_08AB8468;
    }
L_08AB8468:
    ctx.set_gpr(1, ctx.gpr[3] + 0u);
    ctx.set_gpr(1, (ctx.gpr[1] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    goto L_08AB8470;
L_08AB8470:
    // PSP CACHE is a no-op in coherent host memory.
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB8470;
      }
      goto L_08AB8500;
    }
L_08AB8500:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AB851C;
      }
      goto L_08AB8508;
    }
L_08AB8508:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AB8508;
      }
      goto L_08AB851C;
    }
L_08AB851C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8524:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB8550u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB8550:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB8560;
    }
    goto L_08AB8558;
L_08AB8558:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB85EC;
      }
      goto L_08AB8560;
    }
L_08AB8560:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(31, 0x08AB856Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABA104;
L_08AB856C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AB857C;
    }
    goto L_08AB8574;
L_08AB8574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB85E8;
      }
      goto L_08AB857C;
    }
L_08AB857C:
    ctx.set_gpr(2, 65535u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 255u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08AB85AC;
    }
    goto L_08AB859C;
L_08AB859C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] | 768u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB85E4;
      }
      goto L_08AB85AC;
    }
L_08AB85AC:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08AB85C4;
    }
    goto L_08AB85B4;
L_08AB85B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] | 1280u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB85E4;
      }
      goto L_08AB85C4;
    }
L_08AB85C4:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_08AB85DC;
    }
    goto L_08AB85CC;
L_08AB85CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] | 1792u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB85E4;
      }
      goto L_08AB85DC;
    }
L_08AB85DC:
    ctx.set_gpr(2, ctx.gpr[2] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AB85E4;
L_08AB85E4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB85E8;
L_08AB85E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB85EC;
L_08AB85EC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB85FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08AB8658;
      }
      goto L_08AB8648;
    }
L_08AB8648:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB8648;
      }
      goto L_08AB8658;
    }
L_08AB8658:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x08AB86B0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08AB8524;
L_08AB86B0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08AB86C0;
    }
    goto L_08AB86B8;
L_08AB86B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08AB8940;
      }
      goto L_08AB86C0;
    }
L_08AB86C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(768));
    ctx.set_gpr(3, ctx.gpr[3] & 65280u);
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1280));
        goto L_08AB86E4;
    }
    goto L_08AB86D0;
L_08AB86D0:
    ctx.set_gpr(30, 2231u << 16u);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(2044));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AB8724;
      }
      goto L_08AB86E4;
    }
L_08AB86E4:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1792));
        goto L_08AB8700;
    }
    goto L_08AB86EC;
L_08AB86EC:
    ctx.set_gpr(30, 2231u << 16u);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(2128));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AB8724;
      }
      goto L_08AB8700;
    }
L_08AB8700:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08AB871C;
    }
    goto L_08AB8708;
L_08AB8708:
    ctx.set_gpr(30, 2231u << 16u);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(2164));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AB8724;
      }
      goto L_08AB871C;
    }
L_08AB871C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB8724;
    }
L_08AB8724:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB8738u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB8738:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AB8748;
    }
    goto L_08AB8740;
L_08AB8740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB8748;
    }
L_08AB8748:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(111));
    ctx.set_gpr(31, 0x08AB8754u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABA104;
L_08AB8754:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_08AB8764;
    }
    goto L_08AB875C;
L_08AB875C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB8764;
    }
L_08AB8764:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8928;
      }
      goto L_08AB8774;
    }
L_08AB8774:
    if (static_cast<std::int32_t>(ctx.gpr[2]) > 0) {
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
        goto L_08AB878C;
    }
    goto L_08AB877C;
L_08AB877C:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_08AB892C;
    }
    goto L_08AB8788;
L_08AB8788:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    goto L_08AB878C;
L_08AB878C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(104));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_08AB879C;
L_08AB879C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AB87A0;
L_08AB87A0:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB87B0u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB87B0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AB87C0;
    }
    goto L_08AB87B8;
L_08AB87B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB87C0;
    }
L_08AB87C0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB87CCu);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08ABA104;
L_08AB87CC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08AB87DC;
    }
    goto L_08AB87D4;
L_08AB87D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB87DC;
    }
L_08AB87DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AB87F0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08ABA104;
L_08AB87F0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08AB8800;
    }
    goto L_08AB87F8;
L_08AB87F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB8800;
    }
L_08AB8800:
    ctx.set_gpr(31, 0x08AB8808u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 935u, 0x08AB7F10u>(ctx, &aot_mem) && ctx.pc == 0x08AB8808u) goto L_08AB8808;
    return;
L_08AB8808:
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(31, 0x08AB8838u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB8838:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(5, 2231u << 16u);
        goto L_08AB8848;
    }
    goto L_08AB8840;
L_08AB8840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB8848;
    }
L_08AB8848:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2224));
    ctx.set_gpr(31, 0x08AB8858u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB8858u) goto L_08AB8858;
    return;
L_08AB8858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8928;
      }
      goto L_08AB8860;
    }
L_08AB8860:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[30] + 0u);
    goto L_08AB8868;
L_08AB8868:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08AB8878u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB8878u) goto L_08AB8878;
    return;
L_08AB8878:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AB88DC;
    }
    goto L_08AB8880;
L_08AB8880:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23272));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AB88A4;
    }
    goto L_08AB88A4;
L_08AB88A4:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.set_gpr(31, 0x08AB88BCu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08ABA104;
L_08AB88BC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AB88CC;
    }
    goto L_08AB88C4;
L_08AB88C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB893C;
      }
      goto L_08AB88CC;
    }
L_08AB88CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB88E8;
      }
      goto L_08AB88DC;
    }
L_08AB88DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB8868;
      }
      goto L_08AB88E8;
    }
L_08AB88E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[22]);
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AB879C;
      }
      goto L_08AB8910;
    }
L_08AB8910:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8928;
      }
      goto L_08AB891C;
    }
L_08AB891C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AB87A0;
    }
    goto L_08AB8928;
L_08AB8928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08AB892C;
L_08AB892C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AB8938u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(544));
    goto L_08AB89D8;
L_08AB8938:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB893C;
L_08AB893C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08AB8940;
L_08AB8940:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB896C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB8988u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8988u) goto L_08AB8988;
    return;
L_08AB8988:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AB89BC;
      }
      goto L_08AB8994;
    }
L_08AB8994:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    goto L_08AB8998;
L_08AB8998:
    ctx.set_gpr(31, 0x08AB89A0u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 446u, 0x08811C84u>(ctx, &aot_mem) && ctx.pc == 0x08AB89A0u) goto L_08AB89A0;
    return;
L_08AB89A0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AB89B0;
    }
    goto L_08AB89A8;
L_08AB89A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB89C0;
      }
      goto L_08AB89B0;
    }
L_08AB89B0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
        goto L_08AB8998;
    }
    goto L_08AB89BC;
L_08AB89BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AB89C0;
L_08AB89C0:
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
L_08AB89D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AB8A10u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8A10u) goto L_08AB8A10;
    return;
L_08AB8A10:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8A38;
      }
      goto L_08AB8A2C;
    }
L_08AB8A2C:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 260u);
      if (branch_taken) {
          goto L_08AB8C70;
      }
      goto L_08AB8A38;
    }
L_08AB8A38:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    goto L_08AB8A40;
L_08AB8A40:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AB8A40;
      }
      goto L_08AB8A70;
    }
L_08AB8A70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8AF0;
      }
      goto L_08AB8A78;
    }
L_08AB8A78:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[9]);
    goto L_08AB8A88;
L_08AB8A88:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8AAC;
      }
      goto L_08AB8A94;
    }
L_08AB8A94:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB8AAC;
      }
      goto L_08AB8A9C;
    }
L_08AB8A9C:
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AB8AE4;
    }
    goto L_08AB8AA4;
L_08AB8AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AB8AD8;
      }
      goto L_08AB8AAC;
    }
L_08AB8AAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB8AE0;
      }
      goto L_08AB8AB4;
    }
L_08AB8AB4:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 15 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8AE0;
      }
      goto L_08AB8AD0;
    }
L_08AB8AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8B1C;
      }
      goto L_08AB8AD8;
    }
L_08AB8AD8:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08AB8AE0;
L_08AB8AE0:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AB8AE4;
L_08AB8AE4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[9]);
        goto L_08AB8A88;
    }
    goto L_08AB8AF0;
L_08AB8AF0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8B18;
      }
      goto L_08AB8AFC;
    }
L_08AB8AFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AB8B18;
      }
      goto L_08AB8B04;
    }
L_08AB8B04:
    ctx.set_gpr(2, ctx.gpr[21] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AB8B18;
L_08AB8B18:
    ctx.set_gpr(23, 0u + 0u);
    goto L_08AB8B1C;
L_08AB8B1C:
    if (static_cast<std::int32_t>(ctx.gpr[21]) <= 0) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08AB8BC8;
    }
    goto L_08AB8B24;
L_08AB8B24:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(30, ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    goto L_08AB8B2C;
L_08AB8B2C:
    ctx.set_gpr(31, 0x08AB8B34u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AB896C;
L_08AB8B34:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
        goto L_08AB8B60;
    }
    goto L_08AB8B3C;
L_08AB8B3C:
    ctx.set_gpr(31, 0x08AB8B44u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8B44u) goto L_08AB8B44;
    return;
L_08AB8B44:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 127 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(127));
        goto L_08AB8B50;
    }
    goto L_08AB8B50;
L_08AB8B50:
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23244));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AB8B60;
L_08AB8B60:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8B9C;
      }
      goto L_08AB8B68;
    }
L_08AB8B68:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    goto L_08AB8B6C;
L_08AB8B6C:
    ctx.set_gpr(31, 0x08AB8B74u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8B74u) goto L_08AB8B74;
    return;
L_08AB8B74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB8B84u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB8B84u) goto L_08AB8B84;
    return;
L_08AB8B84:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08AB8BA0;
    }
    goto L_08AB8B8C;
L_08AB8B8C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB8B6C;
      }
      goto L_08AB8B9C;
    }
L_08AB8B9C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08AB8BA0;
L_08AB8BA0:
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08AB8BB8;
    }
    goto L_08AB8BA8;
L_08AB8BA8:
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08AB8BB8;
L_08AB8BB8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08AB8B2C;
      }
      goto L_08AB8BC4;
    }
L_08AB8BC4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AB8BC8;
L_08AB8BC8:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AB8BD4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AB8CA0;
L_08AB8BD4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AB8C64;
      }
      goto L_08AB8BE0;
    }
L_08AB8BE0:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    goto L_08AB8BE4;
L_08AB8BE4:
    ctx.set_gpr(31, 0x08AB8BECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8BECu) goto L_08AB8BEC;
    return;
L_08AB8BEC:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08AB8C08;
    }
    goto L_08AB8BF4;
L_08AB8BF4:
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[16]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08AB8C08;
L_08AB8C08:
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
        goto L_08AB8C34;
    }
    goto L_08AB8C1C;
L_08AB8C1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB8C2Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AB8424;
L_08AB8C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB8C54;
      }
      goto L_08AB8C34;
    }
L_08AB8C34:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2112)));
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB8C48u);
    ctx.set_gpr(4, ctx.gpr[22] + ctx.gpr[16]);
    goto L_08AB8424;
L_08AB8C48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AB8C64;
      }
      goto L_08AB8C54;
    }
L_08AB8C54:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB8BE4;
      }
      goto L_08AB8C64;
    }
L_08AB8C64:
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB8C70;
L_08AB8C70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8CA0:
    ctx.set_gpr(1, (ctx.gpr[4] >> 30u) & 0x00000001u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AB8D28;
      }
      goto L_08AB8CAC;
    }
L_08AB8CAC:
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000FF00u) | ((ctx.gpr[5] & 0x000000FFu) << 8u));
    ctx.set_gpr(5, (ctx.gpr[5] & ~0xFFFF0000u) | ((ctx.gpr[5] & 0x0000FFFFu) << 16u));
    goto L_08AB8CB4;
L_08AB8CB4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(1, ctx.gpr[4] & 63u);
      if (branch_taken) {
          goto L_08AB8D38;
      }
      goto L_08AB8CBC;
    }
L_08AB8CBC:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AB8CCC;
      }
      goto L_08AB8CC4;
    }
L_08AB8CC4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AB8CB4;
L_08AB8CCC:
    ctx.set_gpr(1, ctx.gpr[3] + 0u);
    ctx.set_gpr(1, (ctx.gpr[1] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08AB8D28;
      }
      goto L_08AB8CDC;
    }
L_08AB8CDC:
    // PSP CACHE is a no-op in coherent host memory.
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AB8CDC;
      }
      goto L_08AB8D28;
    }
L_08AB8D28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB8D38;
      }
      goto L_08AB8D30;
    }
L_08AB8D30:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AB8D28;
L_08AB8D38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8D40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AB8D68u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.pc = 0x08B0E10Cu;
    return;
L_08AB8D68:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08AB8D78;
    }
    goto L_08AB8D70;
L_08AB8D70:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB8E9C;
      }
      goto L_08AB8D78;
    }
L_08AB8D78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6864));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(31, 0x08AB8DBCu);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08ABA42C;
L_08AB8DBC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB8DCC;
    }
    goto L_08AB8DC4;
L_08AB8DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8E98;
      }
      goto L_08AB8DCC;
    }
L_08AB8DCC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB8DD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_08ABA104;
L_08AB8DD8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB8DE8;
    }
    goto L_08AB8DE0;
L_08AB8DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8E98;
      }
      goto L_08AB8DE8;
    }
L_08AB8DE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2200)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB8DF8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB8DF8u) goto L_08AB8DF8;
    return;
L_08AB8DF8:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
        goto L_08AB8E74;
    }
    goto L_08AB8E00;
L_08AB8E00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AB8E18u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_08ABA104;
L_08AB8E18:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
        goto L_08AB8E28;
    }
    goto L_08AB8E20;
L_08AB8E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8E98;
      }
      goto L_08AB8E28;
    }
L_08AB8E28:
    ctx.set_gpr(31, 0x08AB8E30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 935u, 0x08AB7F10u>(ctx, &aot_mem) && ctx.pc == 0x08AB8E30u) goto L_08AB8E30;
    return;
L_08AB8E30:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AB8E70;
    }
    goto L_08AB8E40;
L_08AB8E40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB8E50u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_08ABA104;
L_08AB8E50:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_08AB8E60;
    }
    goto L_08AB8E58;
L_08AB8E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8E98;
      }
      goto L_08AB8E60;
    }
L_08AB8E60:
    ctx.set_gpr(31, 0x08AB8E68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 935u, 0x08AB7F10u>(ctx, &aot_mem) && ctx.pc == 0x08AB8E68u) goto L_08AB8E68;
    return;
L_08AB8E68:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB8E74;
      }
      goto L_08AB8E70;
    }
L_08AB8E70:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AB8E74;
L_08AB8E74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB8E88u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB8E88:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB8E98;
    }
    goto L_08AB8E90;
L_08AB8E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8E98;
      }
      goto L_08AB8E98;
    }
L_08AB8E98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB8E9C;
L_08AB8E9C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8EB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AB8EDC;
      }
      goto L_08AB8ECC;
    }
L_08AB8ECC:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08AB8EE0;
    }
    goto L_08AB8ED4;
L_08AB8ED4:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AB8EE8;
    }
    goto L_08AB8EDC;
L_08AB8EDC:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08AB8EE0;
L_08AB8EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB9024;
      }
      goto L_08AB8EE8;
    }
L_08AB8EE8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8F0Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F0Cu) goto L_08AB8F0C;
    return;
L_08AB8F0C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB8F20u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8F20:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8F2Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F2Cu) goto L_08AB8F2C;
    return;
L_08AB8F2C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AB8F40u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8F40:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8F4Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F4Cu) goto L_08AB8F4C;
    return;
L_08AB8F4C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08AB8F60u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8F60:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8F6Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F6Cu) goto L_08AB8F6C;
    return;
L_08AB8F6C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(31, 0x08AB8F80u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8F80:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8F8Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8F8Cu) goto L_08AB8F8C;
    return;
L_08AB8F8C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(31, 0x08AB8FA0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8FA0:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8FACu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8FACu) goto L_08AB8FAC;
    return;
L_08AB8FAC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(528));
    ctx.set_gpr(31, 0x08AB8FC0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8FC0:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8FCCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8FCCu) goto L_08AB8FCC;
    return;
L_08AB8FCC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(544));
    ctx.set_gpr(31, 0x08AB8FE0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB8FE0:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB8FECu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB8FECu) goto L_08AB8FEC;
    return;
L_08AB8FEC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AB9000u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2232));
    goto L_08AB8424;
L_08AB9000:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 49136u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB9024;
L_08AB9024:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08AB906C;
      }
      goto L_08AB905C;
    }
L_08AB905C:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08AB9070;
    }
    goto L_08AB9064;
L_08AB9064:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AB9078;
    }
    goto L_08AB906C;
L_08AB906C:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08AB9070;
L_08AB9070:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB9118;
      }
      goto L_08AB9078;
    }
L_08AB9078:
    ctx.set_gpr(31, 0x08AB9080u);
    // nop
    goto L_08ABA6D4;
L_08AB9080:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AB9090u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB8038;
L_08AB9090:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB90A0;
    }
    goto L_08AB9098;
L_08AB9098:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB911C;
      }
      goto L_08AB90A0;
    }
L_08AB90A0:
    ctx.set_gpr(31, 0x08AB90A8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB8154;
L_08AB90A8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_08AB90B8;
    }
    goto L_08AB90B0;
L_08AB90B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9118;
      }
      goto L_08AB90B8;
    }
L_08AB90B8:
    ctx.set_gpr(2, ctx.gpr[3] & 256u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
        goto L_08AB90DC;
    }
    goto L_08AB90C4;
L_08AB90C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB90D4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08AB85FC;
L_08AB90D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AB90F8;
      }
      goto L_08AB90DC;
    }
L_08AB90DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB90F4;
      }
      goto L_08AB90E4;
    }
L_08AB90E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB90F4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08AB8268;
L_08AB90F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB90F8;
L_08AB90F8:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB9108u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08AB9108:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB9118;
    }
    goto L_08AB9110;
L_08AB9110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9118;
      }
      goto L_08AB9118;
    }
L_08AB9118:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB911C;
L_08AB911C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2236));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    goto L_08AB916C;
L_08AB916C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB916C;
      }
      goto L_08AB9184;
    }
L_08AB9184:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB91A4;
      }
      goto L_08AB9194;
    }
L_08AB9194:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08AB91A8;
    }
    goto L_08AB919C;
L_08AB919C:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
        goto L_08AB91B0;
    }
    goto L_08AB91A4;
L_08AB91A4:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08AB91A8;
L_08AB91A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB92D8;
      }
      goto L_08AB91B0;
    }
L_08AB91B0:
    ctx.set_gpr(31, 0x08AB91B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB91B8u) goto L_08AB91B8;
    return;
L_08AB91B8:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AB91C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_08AB8424;
L_08AB91C8:
    ctx.set_gpr(31, 0x08AB91D0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = 0x08B0E124u;
    return;
L_08AB91D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB91E0;
      }
      goto L_08AB91D8;
    }
L_08AB91D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AB92DC;
      }
      goto L_08AB91E0;
    }
L_08AB91E0:
    ctx.set_gpr(31, 0x08AB91E8u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = 0x08B0E114u;
    return;
L_08AB91E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB91F8;
      }
      goto L_08AB91F0;
    }
L_08AB91F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB92D8;
      }
      goto L_08AB91F8;
    }
L_08AB91F8:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AB920Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08AB8D40;
L_08AB920C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
        goto L_08AB921C;
    }
    goto L_08AB9214;
L_08AB9214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB92D8;
      }
      goto L_08AB921C;
    }
L_08AB921C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB9230;
      }
      goto L_08AB9224;
    }
L_08AB9224:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_08AB92D4;
      }
      goto L_08AB9230;
    }
L_08AB9230:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
        goto L_08AB9290;
    }
    goto L_08AB9238;
L_08AB9238:
    ctx.set_gpr(31, 0x08AB9240u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = 0x08B0E11Cu;
    return;
L_08AB9240:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
        goto L_08AB9250;
    }
    goto L_08AB9248;
L_08AB9248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB92D8;
      }
      goto L_08AB9250;
    }
L_08AB9250:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(31, 0x08AB9260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB9260u) goto L_08AB9260;
    return;
L_08AB9260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB9270u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB9270u) goto L_08AB9270;
    return;
L_08AB9270:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB9284u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB9284u) goto L_08AB9284;
    return;
L_08AB9284:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB92D4;
      }
      goto L_08AB9290;
    }
L_08AB9290:
    ctx.set_gpr(2, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AB92A8u);
    ctx.set_gpr(4, ctx.gpr[2] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB92A8u) goto L_08AB92A8;
    return;
L_08AB92A8:
    ctx.set_gpr(4, ctx.gpr[16] << 3u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB92B8u);
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB92B8u) goto L_08AB92B8;
    return;
L_08AB92B8:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AB92CCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08AB92CCu) goto L_08AB92CC;
    return;
L_08AB92CC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    goto L_08AB92D4;
L_08AB92D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB92D8;
L_08AB92D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AB92DC;
L_08AB92DC:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB92F8:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08AB9314;
    }
    goto L_08AB9300;
L_08AB9300:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9310;
      }
      goto L_08AB9308;
    }
L_08AB9308:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB9318;
    }
    goto L_08AB9310;
L_08AB9310:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08AB9314;
L_08AB9314:
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
    goto L_08AB9318;
L_08AB9318:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AB9334u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AB9BD8;
L_08AB9334:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB9348u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08AB9348:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB9358;
    }
    goto L_08AB9350;
L_08AB9350:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB93B4;
      }
      goto L_08AB9358;
    }
L_08AB9358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB9380;
      }
      goto L_08AB9364;
    }
L_08AB9364:
    ctx.set_gpr(31, 0x08AB936Cu);
    // nop
    ctx.pc = 0x08B0DD84u;
    return;
L_08AB936C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2231u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2252), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB9380;
      }
      goto L_08AB937C;
    }
L_08AB937C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB9380;
L_08AB9380:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2256)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB93B0;
    }
    goto L_08AB9390;
L_08AB9390:
    ctx.set_gpr(31, 0x08AB9398u);
    // nop
    ctx.pc = 0x08B0DD74u;
    return;
L_08AB9398:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2231u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2256), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB93AC;
      }
      goto L_08AB93A8;
    }
L_08AB93A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB93AC;
L_08AB93AC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB93B0;
L_08AB93B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB93B4;
L_08AB93B4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB93C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB93F8;
      }
      goto L_08AB93E0;
    }
L_08AB93E0:
    ctx.set_gpr(31, 0x08AB93E8u);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_08AB93E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB93F8;
      }
      goto L_08AB93F4;
    }
L_08AB93F4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB93F8;
L_08AB93F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB9438;
    }
    goto L_08AB9404;
L_08AB9404:
    ctx.set_gpr(31, 0x08AB940Cu);
    // nop
    goto L_08AB944C;
L_08AB940C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AB941C;
    }
    goto L_08AB9414;
L_08AB9414:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08AB941C;
L_08AB941C:
    ctx.set_gpr(31, 0x08AB9424u);
    // nop
    ctx.pc = 0x08B0DD6Cu;
    return;
L_08AB9424:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB9434;
      }
      goto L_08AB9430;
    }
L_08AB9430:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB9434;
L_08AB9434:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB9438;
L_08AB9438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB944C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, 577u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2260));
    ctx.set_gpr(5, ctx.gpr[2] | 22562u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AB947Cu);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x08B0DC0Cu;
    return;
L_08AB947C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9488:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB94B0;
      }
      goto L_08AB94A4;
    }
L_08AB94A4:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB952C;
      }
      goto L_08AB94B0;
    }
L_08AB94B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
        goto L_08AB9510;
    }
    goto L_08AB94BC;
L_08AB94BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AB94D0;
    }
    goto L_08AB94C8;
L_08AB94C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AB952C;
      }
      goto L_08AB94D0;
    }
L_08AB94D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB94F0;
      }
      goto L_08AB94D8;
    }
L_08AB94D8:
    ctx.set_gpr(31, 0x08AB94E0u);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_08AB94E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB94F0;
      }
      goto L_08AB94EC;
    }
L_08AB94EC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB94F0;
L_08AB94F0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2256)));
    ctx.set_gpr(31, 0x08AB9500u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB9500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB9528;
      }
      goto L_08AB9508;
    }
L_08AB9508:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB9528;
      }
      goto L_08AB9510;
    }
L_08AB9510:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08AB951Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2256)));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB951C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB9528;
      }
      goto L_08AB9524;
    }
L_08AB9524:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB9528;
L_08AB9528:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB952C;
L_08AB952C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AB9580;
      }
      goto L_08AB9570;
    }
L_08AB9570:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08AB9584;
    }
    goto L_08AB9578;
L_08AB9578:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB958C;
    }
    goto L_08AB9580;
L_08AB9580:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08AB9584;
L_08AB9584:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB9694;
      }
      goto L_08AB958C;
    }
L_08AB958C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB959Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08AB959C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB95AC;
      }
      goto L_08AB95A4;
    }
L_08AB95A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08AB9698;
      }
      goto L_08AB95AC;
    }
L_08AB95AC:
    ctx.set_gpr(31, 0x08AB95B4u);
    // nop
    ctx.pc = 0x08B0DDB4u;
    return;
L_08AB95B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AB95E4;
    }
    goto L_08AB95C0;
L_08AB95C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08AB95D4u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08AB9A1C;
L_08AB95D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB9678;
    }
    goto L_08AB95E0;
L_08AB95E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08AB95E4;
L_08AB95E4:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08AB95F0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB95F0u) goto L_08AB95F0;
    return;
L_08AB95F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB95FC;
    }
L_08AB95FC:
    ctx.set_gpr(3, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 9u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB960C;
    }
L_08AB960C:
    ctx.set_gpr(2, ctx.gpr[3] | 22u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB9618;
    }
L_08AB9618:
    ctx.set_gpr(2, ctx.gpr[3] | 19u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB9624;
    }
L_08AB9624:
    ctx.set_gpr(2, ctx.gpr[3] | 14u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB9630;
    }
L_08AB9630:
    ctx.set_gpr(2, ctx.gpr[3] | 45059u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB963C;
    }
L_08AB963C:
    ctx.set_gpr(2, ctx.gpr[3] | 45057u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9658;
      }
      goto L_08AB9648;
    }
L_08AB9648:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11628)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB95AC;
      }
      goto L_08AB9658;
    }
L_08AB9658:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB9668u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB9668:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB9670;
    }
    goto L_08AB9670;
L_08AB9670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9694;
      }
      goto L_08AB9678;
    }
L_08AB9678:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB9684u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB9684:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB9694;
    }
    goto L_08AB968C;
L_08AB968C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9694;
      }
      goto L_08AB9694;
    }
L_08AB9694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AB9698;
L_08AB9698:
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
L_08AB96B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2268));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AB96D8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.pc = 0x08B0DDF4u;
    return;
L_08AB96D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB971C;
      }
      goto L_08AB96E4;
    }
L_08AB96E4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2256), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2268));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB9704u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DE9Cu;
    return;
L_08AB9704:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB971C;
      }
      goto L_08AB9710;
    }
L_08AB9710:
    ctx.set_gpr(3, 2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2252), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AB9728;
      }
      goto L_08AB971C;
    }
L_08AB971C:
    ctx.set_gpr(31, 0x08AB9724u);
    // nop
    goto L_08AB9320;
L_08AB9724:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB9728;
L_08AB9728:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9738:
    // nop
    goto L_08AB9320;
L_08AB9740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] | 135u);
      if (branch_taken) {
          goto L_08AB9770;
      }
      goto L_08AB9764;
    }
L_08AB9764:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB977C;
    }
    goto L_08AB9770;
L_08AB9770:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB9924;
      }
      goto L_08AB977C;
    }
L_08AB977C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB978Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08AB978C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AB979C;
    }
    goto L_08AB9794;
L_08AB9794:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB9928;
      }
      goto L_08AB979C;
    }
L_08AB979C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB97E0;
      }
      goto L_08AB97A4;
    }
L_08AB97A4:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(5, 2220u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2268));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27512));
    ctx.set_gpr(31, 0x08AB97BCu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DD54u;
    return;
L_08AB97BC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB98FC;
    }
    goto L_08AB97C8;
L_08AB97C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB97D4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    goto L_08AB993C;
L_08AB97D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB98F8;
      }
      goto L_08AB97E0;
    }
L_08AB97E0:
    ctx.set_gpr(31, 0x08AB97E8u);
    // nop
    goto L_08AB9BE4;
L_08AB97E8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB9814;
    }
    goto L_08AB97F0;
L_08AB97F0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2256)));
    ctx.set_gpr(31, 0x08AB9800u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DD4Cu;
    return;
L_08AB9800:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB982C;
      }
      goto L_08AB980C;
    }
L_08AB980C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB98F8;
      }
      goto L_08AB9814;
    }
L_08AB9814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2256)));
    ctx.set_gpr(31, 0x08AB9820u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0DE3Cu;
    return;
L_08AB9820:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB98F8;
      }
      goto L_08AB982C;
    }
L_08AB982C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2256)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AB9844u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.pc = 0x08B0DDA4u;
    return;
L_08AB9844:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 15u << 16u);
        goto L_08AB98C0;
    }
    goto L_08AB984C;
L_08AB984C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08AB985Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.pc = 0x08B0DC74u;
    return;
L_08AB985C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08AB98D8;
    }
    goto L_08AB9868;
L_08AB9868:
    ctx.set_gpr(3, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 45058u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB98B4;
      }
      goto L_08AB9878;
    }
L_08AB9878:
    ctx.set_gpr(2, ctx.gpr[3] | 19u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB98B4;
      }
      goto L_08AB9884;
    }
L_08AB9884:
    ctx.set_gpr(2, ctx.gpr[3] | 2u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB98B4;
      }
      goto L_08AB9890;
    }
L_08AB9890:
    ctx.set_gpr(2, ctx.gpr[3] | 12u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB98B4;
      }
      goto L_08AB989C;
    }
L_08AB989C:
    ctx.set_gpr(2, ctx.gpr[3] | 22u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB98B4;
      }
      goto L_08AB98A8;
    }
L_08AB98A8:
    ctx.set_gpr(2, ctx.gpr[3] | 91u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB98C8;
      }
      goto L_08AB98B4;
    }
L_08AB98B4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB98D8;
      }
      goto L_08AB98C0;
    }
L_08AB98C0:
    ctx.set_gpr(31, 0x08AB98C8u);
    ctx.set_gpr(4, ctx.gpr[2] | 16960u);
    ctx.pc = 0x08B0DE14u;
    return;
L_08AB98C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11628)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB982C;
      }
      goto L_08AB98D8;
    }
L_08AB98D8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB98E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB98E8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB9924;
    }
    goto L_08AB98F0;
L_08AB98F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9924;
      }
      goto L_08AB98F8;
    }
L_08AB98F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB98FC;
L_08AB98FC:
    ctx.set_gpr(31, 0x08AB9904u);
    // nop
    goto L_08AB93C0;
L_08AB9904:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB9914u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB9914:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
        goto L_08AB9924;
    }
    goto L_08AB991C;
L_08AB991C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9924;
      }
      goto L_08AB9924;
    }
L_08AB9924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB9928;
L_08AB9928:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB993C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, 577u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2260));
    ctx.set_gpr(5, ctx.gpr[2] | 22561u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AB996Cu);
    ctx.set_gpr(9, 0u + 0u);
    ctx.pc = 0x08B0DC0Cu;
    return;
L_08AB996C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB99A0;
      }
      goto L_08AB9994;
    }
L_08AB9994:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08AB99F0;
      }
      goto L_08AB99A0;
    }
L_08AB99A0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB99B4u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08AB99B4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AB99C4;
    }
    goto L_08AB99BC;
L_08AB99BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB99F4;
      }
      goto L_08AB99C4;
    }
L_08AB99C4:
    ctx.set_gpr(31, 0x08AB99CCu);
    // nop
    goto L_08AB93C0;
L_08AB99CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB99D8;
      }
      goto L_08AB99D4;
    }
L_08AB99D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB99D8;
L_08AB99D8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB99E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB99E8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB99F0;
    }
    goto L_08AB99F0;
L_08AB99F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB99F4;
L_08AB99F4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9A04:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9188));
    goto L_08AB9540;
L_08AB9A10:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9156));
    goto L_08AB9540;
L_08AB9A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08AB9A60;
      }
      goto L_08AB9A50;
    }
L_08AB9A50:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AB9BB4;
      }
      goto L_08AB9A60;
    }
L_08AB9A60:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AB9A74u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08AB9A74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB9A84;
      }
      goto L_08AB9A7C;
    }
L_08AB9A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
      if (branch_taken) {
          goto L_08AB9BB4;
      }
      goto L_08AB9A84;
    }
L_08AB9A84:
    ctx.set_gpr(31, 0x08AB9A8Cu);
    // nop
    ctx.pc = 0x08B0DDB4u;
    return;
L_08AB9A8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08AB9AB0;
    }
    goto L_08AB9A98;
L_08AB9A98:
    ctx.set_gpr(31, 0x08AB9AA0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08AB9740;
L_08AB9AA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08AB9B94;
    }
    goto L_08AB9AAC;
L_08AB9AAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08AB9AB0;
L_08AB9AB0:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08AB9AC0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08AB9AC0:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9AD0;
    }
L_08AB9AD0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9AE8;
      }
      goto L_08AB9ADC;
    }
L_08AB9ADC:
    ctx.set_gpr(1, ctx.gpr[17] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9AE8;
    }
L_08AB9AE8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9B00;
      }
      goto L_08AB9AF0;
    }
L_08AB9AF0:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9B00;
    }
L_08AB9B00:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9B18;
      }
      goto L_08AB9B08;
    }
L_08AB9B08:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 22u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9B18;
    }
L_08AB9B18:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9B30;
      }
      goto L_08AB9B20;
    }
L_08AB9B20:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9B30;
    }
L_08AB9B30:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9B48;
      }
      goto L_08AB9B38;
    }
L_08AB9B38:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 14u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9B48;
    }
L_08AB9B48:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9B60;
      }
      goto L_08AB9B50;
    }
L_08AB9B50:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45057u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9B70;
      }
      goto L_08AB9B60;
    }
L_08AB9B60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11628)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A84;
      }
      goto L_08AB9B70;
    }
L_08AB9B70:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB9B80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB9B80:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AB9B8C;
    }
    goto L_08AB9B88;
L_08AB9B88:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_08AB9B8C;
L_08AB9B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08AB9BB4;
      }
      goto L_08AB9B94;
    }
L_08AB9B94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2252)));
    ctx.set_gpr(31, 0x08AB9BA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08AB9BA0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
        goto L_08AB9BB0;
    }
    goto L_08AB9BA8;
L_08AB9BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
      if (branch_taken) {
          goto L_08AB9BB4;
      }
      goto L_08AB9BB0;
    }
L_08AB9BB0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB9BB4;
L_08AB9BB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9BD8:
    ctx.set_gpr(3, 2246u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11628), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB9BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AB9BF4u) goto L_08AB9BF4;
    return;
L_08AB9BF4:
    ctx.set_gpr(31, 0x08AB9BFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB9BFCu) goto L_08AB9BFC;
    return;
L_08AB9BFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9C0C;
      }
      goto L_08AB9C04;
    }
L_08AB9C04:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AB9C28;
      }
      goto L_08AB9C0C;
    }
L_08AB9C0C:
    ctx.set_gpr(31, 0x08AB9C14u);
    // nop
    goto L_08AB9C34;
L_08AB9C14:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
        goto L_08AB9C24;
    }
    goto L_08AB9C1C;
L_08AB9C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AB9C28;
      }
      goto L_08AB9C24;
    }
L_08AB9C24:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08AB9C28;
L_08AB9C28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(2, 578u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2260));
    ctx.set_gpr(5, ctx.gpr[2] | 22563u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08AB9C60u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B0DC0Cu;
    return;
L_08AB9C60:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AB9C70;
    }
    goto L_08AB9C68;
L_08AB9C68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AB9C7C;
      }
      goto L_08AB9C70;
    }
L_08AB9C70:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AB9C7C;
L_08AB9C7C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9C84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11624)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08AB9CCC;
      }
      goto L_08AB9CA4;
    }
L_08AB9CA4:
    ctx.set_gpr(31, 0x08AB9CACu);
    // nop
    goto L_08AB9738;
L_08AB9CAC:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11624)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-257));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11624), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB9CCC;
      }
      goto L_08AB9CC8;
    }
L_08AB9CC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB9CCC;
L_08AB9CCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11624)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB9D0C;
    }
    goto L_08AB9CE0;
L_08AB9CE0:
    ctx.set_gpr(31, 0x08AB9CE8u);
    // nop
    goto L_08ABA9A0;
L_08AB9CE8:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11624)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11624), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB9D08;
      }
      goto L_08AB9D04;
    }
L_08AB9D04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08AB9D08;
L_08AB9D08:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB9D0C;
L_08AB9D0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9D1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(31, 0x08AB9D40u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB9D40u) goto L_08AB9D40;
    return;
L_08AB9D40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(31, 0x08AB9D54u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB9D54u) goto L_08AB9D54;
    return;
L_08AB9D54:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08AB9D84;
    }
    goto L_08AB9D5C;
L_08AB9D5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AB9E24;
    }
    goto L_08AB9D68;
L_08AB9D68:
    ctx.set_gpr(31, 0x08AB9D70u);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_08AB9D70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9D7C;
    }
L_08AB9D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9D84;
    }
L_08AB9D84:
    ctx.set_gpr(31, 0x08AB9D8Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB9D8Cu) goto L_08AB9D8C;
    return;
L_08AB9D8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.set_gpr(31, 0x08AB9DA0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB9DA0u) goto L_08AB9DA0;
    return;
L_08AB9DA0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08AB9DD0;
    }
    goto L_08AB9DA8;
L_08AB9DA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9DB4;
    }
L_08AB9DB4:
    ctx.set_gpr(31, 0x08AB9DBCu);
    // nop
    ctx.pc = 0x08B0DC34u;
    return;
L_08AB9DBC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9DC8;
    }
L_08AB9DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9DD0;
    }
L_08AB9DD0:
    ctx.set_gpr(31, 0x08AB9DD8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB9DD8u) goto L_08AB9DD8;
    return;
L_08AB9DD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08AB9DECu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB9DECu) goto L_08AB9DEC;
    return;
L_08AB9DEC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 32769u << 16u);
        goto L_08AB9E18;
    }
    goto L_08AB9DF4;
L_08AB9DF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9E00;
    }
L_08AB9E00:
    ctx.set_gpr(31, 0x08AB9E08u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AB9978;
L_08AB9E08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9E10;
    }
L_08AB9E10:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AB9E20;
      }
      goto L_08AB9E18;
    }
L_08AB9E18:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
      if (branch_taken) {
          goto L_08AB9E24;
      }
      goto L_08AB9E20;
    }
L_08AB9E20:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB9E24;
L_08AB9E24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9E38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AB9EA8;
    }
    goto L_08AB9E48;
L_08AB9E48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AB9EB8;
    }
    goto L_08AB9E54;
L_08AB9E54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AB9E80;
    }
    goto L_08AB9E60;
L_08AB9E60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9EB4;
      }
      goto L_08AB9E6C;
    }
L_08AB9E6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AB9EB4;
      }
      goto L_08AB9E78;
    }
L_08AB9E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9EB4;
      }
      goto L_08AB9E80;
    }
L_08AB9E80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AB9EB4;
      }
      goto L_08AB9EA8;
    }
L_08AB9EA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    goto L_08AB9EB4;
L_08AB9EB4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AB9EB8;
L_08AB9EB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9EC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AB9ED0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08ABA940;
L_08AB9ED0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB9F18;
      }
      goto L_08AB9EDC;
    }
L_08AB9EDC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11624)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    ctx.set_gpr(31, 0x08AB9EF4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-11624), ctx.gpr[3]);
    goto L_08AB96B4;
L_08AB9EF4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AB9F18;
      }
      goto L_08AB9F00;
    }
L_08AB9F00:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11624)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-11624), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB9F24;
      }
      goto L_08AB9F18;
    }
L_08AB9F18:
    ctx.set_gpr(31, 0x08AB9F20u);
    // nop
    goto L_08AB9C84;
L_08AB9F20:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AB9F24;
L_08AB9F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9F34:
    // nop
    goto L_08AB9C84;
L_08AB9F3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08AB9F74;
      }
      goto L_08AB9F6C;
    }
L_08AB9F6C:
    if (ctx.gpr[19] != 0u) {
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
        goto L_08AB9F80;
    }
    goto L_08AB9F74;
L_08AB9F74:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA0AC;
      }
      goto L_08AB9F80;
    }
L_08AB9F80:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AB9FA8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6852));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB9FA8u) goto L_08AB9FA8;
    return;
L_08AB9FA8:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(31, 0x08AB9FBCu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08AB9FBCu) goto L_08AB9FBC;
    return;
L_08AB9FBC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08AB9FE8;
    }
    goto L_08AB9FC4;
L_08AB9FC4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AB9FD4u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC74u;
    return;
L_08AB9FD4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08ABA0A0;
    }
    goto L_08AB9FE0;
L_08AB9FE0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABA094;
      }
      goto L_08AB9FE8;
    }
L_08AB9FE8:
    ctx.set_gpr(31, 0x08AB9FF0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AB9FF0u) goto L_08AB9FF0;
    return;
L_08AB9FF0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.set_gpr(31, 0x08ABA004u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA004u) goto L_08ABA004;
    return;
L_08ABA004:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA04C;
    }
    goto L_08ABA00C;
L_08ABA00C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABA01Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.pc = 0x08B0DF9Cu;
    return;
L_08ABA01C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA09C;
      }
      goto L_08ABA028;
    }
L_08ABA028:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABA038u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08ABA9A8;
L_08ABA038:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA09C;
      }
      goto L_08ABA044;
    }
L_08ABA044:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABA094;
      }
      goto L_08ABA04C;
    }
L_08ABA04C:
    ctx.set_gpr(31, 0x08ABA054u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA054u) goto L_08ABA054;
    return;
L_08ABA054:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA068u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA068u) goto L_08ABA068;
    return;
L_08ABA068:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 32769u << 16u);
        goto L_08ABA08C;
    }
    goto L_08ABA070;
L_08ABA070:
    ctx.set_gpr(31, 0x08ABA078u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AB9740;
L_08ABA078:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA09C;
      }
      goto L_08ABA084;
    }
L_08ABA084:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABA094;
      }
      goto L_08ABA08C;
    }
L_08ABA08C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
      if (branch_taken) {
          goto L_08ABA0AC;
      }
      goto L_08ABA094;
    }
L_08ABA094:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08ABA0AC;
      }
      goto L_08ABA09C;
    }
L_08ABA09C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08ABA0A0;
L_08ABA0A0:
    ctx.set_gpr(31, 0x08ABA0A8u);
    // nop
    goto L_08AB9D1C;
L_08ABA0A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ABA0AC;
L_08ABA0AC:
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
L_08ABA0CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08ABA0E4;
      }
      goto L_08ABA0D8;
    }
L_08ABA0D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA0F0;
      }
      goto L_08ABA0E4;
    }
L_08ABA0E4:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA0F8;
      }
      goto L_08ABA0F0;
    }
L_08ABA0F0:
    ctx.set_gpr(31, 0x08ABA0F8u);
    // nop
    goto L_08AB9D1C;
L_08ABA0F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08ABA13C;
      }
      goto L_08ABA128;
    }
L_08ABA128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08ABA140;
    }
    goto L_08ABA134;
L_08ABA134:
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ABA148;
    }
    goto L_08ABA13C;
L_08ABA13C:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08ABA140;
L_08ABA140:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA148;
    }
L_08ABA148:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABA184;
      }
      goto L_08ABA150;
    }
L_08ABA150:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ABA15Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA15Cu) goto L_08ABA15C;
    return;
L_08ABA15C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA170u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA170u) goto L_08ABA170;
    return;
L_08ABA170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA184;
      }
      goto L_08ABA178;
    }
L_08ABA178:
    ctx.set_gpr(2, 32769u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA184;
    }
L_08ABA184:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(31, 0x08ABA190u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6852));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA190u) goto L_08ABA190;
    return;
L_08ABA190:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(31, 0x08ABA1A4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA1A4u) goto L_08ABA1A4;
    return;
L_08ABA1A4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA1EC;
    }
    goto L_08ABA1AC;
L_08ABA1AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABA1BCu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC1Cu;
    return;
L_08ABA1BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA1C4;
    }
L_08ABA1C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA1EC;
    }
L_08ABA1EC:
    ctx.set_gpr(31, 0x08ABA1F4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA1F4u) goto L_08ABA1F4;
    return;
L_08ABA1F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.set_gpr(31, 0x08ABA208u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA208u) goto L_08ABA208;
    return;
L_08ABA208:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA250;
    }
    goto L_08ABA210;
L_08ABA210:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABA220u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08ABAAE4;
L_08ABA220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA228;
    }
L_08ABA228:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA250;
    }
L_08ABA250:
    ctx.set_gpr(31, 0x08ABA258u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA258u) goto L_08ABA258;
    return;
L_08ABA258:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA26Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA26Cu) goto L_08ABA26C;
    return;
L_08ABA26C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 32769u << 16u);
        goto L_08ABA2B4;
    }
    goto L_08ABA274;
L_08ABA274:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA284u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AB9A04;
L_08ABA284:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA28C;
    }
L_08ABA28C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABA2B8;
      }
      goto L_08ABA2B4;
    }
L_08ABA2B4:
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
    goto L_08ABA2B8;
L_08ABA2B8:
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
L_08ABA2D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08ABA308;
      }
      goto L_08ABA2F4;
    }
L_08ABA2F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 32768u << 16u);
        goto L_08ABA30C;
    }
    goto L_08ABA300;
L_08ABA300:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ABA314;
    }
    goto L_08ABA308;
L_08ABA308:
    ctx.set_gpr(2, 32768u << 16u);
    goto L_08ABA30C;
L_08ABA30C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA414;
      }
      goto L_08ABA314;
    }
L_08ABA314:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08ABA354;
    }
    goto L_08ABA31C;
L_08ABA31C:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ABA328u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA328u) goto L_08ABA328;
    return;
L_08ABA328:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA33Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA33Cu) goto L_08ABA33C;
    return;
L_08ABA33C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA350;
      }
      goto L_08ABA344;
    }
L_08ABA344:
    ctx.set_gpr(2, 32769u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
      if (branch_taken) {
          goto L_08ABA414;
      }
      goto L_08ABA350;
    }
L_08ABA350:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08ABA354;
L_08ABA354:
    ctx.set_gpr(4, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ABA364u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6852));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA364u) goto L_08ABA364;
    return;
L_08ABA364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(31, 0x08ABA378u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA378u) goto L_08ABA378;
    return;
L_08ABA378:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA398;
    }
    goto L_08ABA380;
L_08ABA380:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA390u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0DC3Cu;
    return;
L_08ABA390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA414;
      }
      goto L_08ABA398;
    }
L_08ABA398:
    ctx.set_gpr(31, 0x08ABA3A0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA3A0u) goto L_08ABA3A0;
    return;
L_08ABA3A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.set_gpr(31, 0x08ABA3B4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA3B4u) goto L_08ABA3B4;
    return;
L_08ABA3B4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA3D4;
    }
    goto L_08ABA3BC;
L_08ABA3BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA3CCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08ABAAF0;
L_08ABA3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA414;
      }
      goto L_08ABA3D4;
    }
L_08ABA3D4:
    ctx.set_gpr(31, 0x08ABA3DCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA3DCu) goto L_08ABA3DC;
    return;
L_08ABA3DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA3F0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA3F0u) goto L_08ABA3F0;
    return;
L_08ABA3F0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 32769u << 16u);
        goto L_08ABA410;
    }
    goto L_08ABA3F8;
L_08ABA3F8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA408u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08AB9A10;
L_08ABA408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA414;
      }
      goto L_08ABA410;
    }
L_08ABA410:
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
    goto L_08ABA414;
L_08ABA414:
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
L_08ABA42C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_08ABA464;
      }
      goto L_08ABA458;
    }
L_08ABA458:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08ABA474;
    }
    goto L_08ABA464;
L_08ABA464:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08ABA598;
      }
      goto L_08ABA474;
    }
L_08ABA474:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABA4B4;
      }
      goto L_08ABA47C;
    }
L_08ABA47C:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ABA488u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA488u) goto L_08ABA488;
    return;
L_08ABA488:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA49Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA49Cu) goto L_08ABA49C;
    return;
L_08ABA49C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA4B4;
      }
      goto L_08ABA4A4;
    }
L_08ABA4A4:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08ABA598;
      }
      goto L_08ABA4B4;
    }
L_08ABA4B4:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(31, 0x08ABA4C0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6852));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA4C0u) goto L_08ABA4C0;
    return;
L_08ABA4C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    ctx.set_gpr(31, 0x08ABA4D4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA4D4u) goto L_08ABA4D4;
    return;
L_08ABA4D4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA4FC;
    }
    goto L_08ABA4DC;
L_08ABA4DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA4F0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08ABA4F0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABA590;
      }
      goto L_08ABA4FC;
    }
L_08ABA4FC:
    ctx.set_gpr(31, 0x08ABA504u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA504u) goto L_08ABA504;
    return;
L_08ABA504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2288));
    ctx.set_gpr(31, 0x08ABA518u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA518u) goto L_08ABA518;
    return;
L_08ABA518:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 2231u << 16u);
        goto L_08ABA540;
    }
    goto L_08ABA520;
L_08ABA520:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA534u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    goto L_08ABAAFC;
L_08ABA534:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABA590;
      }
      goto L_08ABA540;
    }
L_08ABA540:
    ctx.set_gpr(31, 0x08ABA548u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2296));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08ABA548u) goto L_08ABA548;
    return;
L_08ABA548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2296));
    ctx.set_gpr(31, 0x08ABA55Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08ABA55Cu) goto L_08ABA55C;
    return;
L_08ABA55C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 32769u << 16u);
        goto L_08ABA584;
    }
    goto L_08ABA564;
L_08ABA564:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABA578u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08AB9A1C;
L_08ABA578:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABA590;
      }
      goto L_08ABA584;
    }
L_08ABA584:
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08ABA598;
      }
      goto L_08ABA590;
    }
L_08ABA590:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_08ABA598;
L_08ABA598:
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
L_08ABA5B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ABA5DC;
      }
      goto L_08ABA5D0;
    }
L_08ABA5D0:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA618;
      }
      goto L_08ABA5DC;
    }
L_08ABA5DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABA5F4;
      }
      goto L_08ABA5E8;
    }
L_08ABA5E8:
    ctx.set_gpr(2, 32769u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
      if (branch_taken) {
          goto L_08ABA618;
      }
      goto L_08ABA5F4;
    }
L_08ABA5F4:
    ctx.set_gpr(31, 0x08ABA5FCu);
    // nop
    ctx.pc = 0x08B0DC8Cu;
    return;
L_08ABA5FC:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
        goto L_08ABA618;
    }
    goto L_08ABA608;
L_08ABA608:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA614u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB9E38;
L_08ABA614:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    goto L_08ABA618;
L_08ABA618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA62C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ABA654;
      }
      goto L_08ABA648;
    }
L_08ABA648:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA69C;
      }
      goto L_08ABA654;
    }
L_08ABA654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABA66C;
      }
      goto L_08ABA660;
    }
L_08ABA660:
    ctx.set_gpr(2, 32769u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
      if (branch_taken) {
          goto L_08ABA69C;
      }
      goto L_08ABA66C;
    }
L_08ABA66C:
    ctx.set_gpr(31, 0x08ABA674u);
    // nop
    ctx.pc = 0x08B0DDB4u;
    return;
L_08ABA674:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ABA680u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = 0x08B0DC84u;
    return;
L_08ABA680:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
        goto L_08ABA69C;
    }
    goto L_08ABA68C;
L_08ABA68C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABA698u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08AB9E38;
L_08ABA698:
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    goto L_08ABA69C;
L_08ABA69C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA6B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ABA6C0u);
    // nop
    goto L_08ABACC4;
L_08ABA6C0:
    ctx.set_gpr(31, 0x08ABA6C8u);
    // nop
    goto L_08AB9BD8;
L_08ABA6C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA6D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABA6F8;
      }
      goto L_08ABA6EC;
    }
L_08ABA6EC:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA738;
      }
      goto L_08ABA6F8;
    }
L_08ABA6F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(6, 0u + 0u);
        goto L_08ABA710;
    }
    goto L_08ABA704;
L_08ABA704:
    ctx.set_gpr(2, 32769u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
      if (branch_taken) {
          goto L_08ABA738;
      }
      goto L_08ABA710;
    }
L_08ABA710:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ABA71Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    goto L_08ABA42C;
L_08ABA71C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ABA734u);
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABA42C;
L_08ABA734:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ABA738;
L_08ABA738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA74C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ABA760u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ABACC4;
L_08ABA760:
    ctx.set_gpr(31, 0x08ABA768u);
    // nop
    ctx.pc = 0x08B0DF7Cu;
    return;
L_08ABA768:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08ABA778;
    }
    goto L_08ABA770;
L_08ABA770:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABA7C8;
      }
      goto L_08ABA778;
    }
L_08ABA778:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABA788u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08ABA788:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08ABA798;
    }
    goto L_08ABA790;
L_08ABA790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA7C4;
      }
      goto L_08ABA798;
    }
L_08ABA798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08ABA7C4;
    }
    goto L_08ABA7A4;
L_08ABA7A4:
    ctx.set_gpr(31, 0x08ABA7ACu);
    // nop
    ctx.pc = 0x08B0DD84u;
    return;
L_08ABA7AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, 2231u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2304), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABA7C0;
      }
      goto L_08ABA7BC;
    }
L_08ABA7BC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08ABA7C0;
L_08ABA7C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ABA7C4;
L_08ABA7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABA7C8;
L_08ABA7C8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA7D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] | 135u);
      if (branch_taken) {
          goto L_08ABA814;
      }
      goto L_08ABA80C;
    }
L_08ABA80C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA820;
      }
      goto L_08ABA814;
    }
L_08ABA814:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABA920;
      }
      goto L_08ABA820;
    }
L_08ABA820:
    if (static_cast<std::int32_t>(ctx.gpr[20]) >= 0) {
    ctx.set_gpr(2, 2231u << 16u);
        goto L_08ABA830;
    }
    goto L_08ABA828;
L_08ABA828:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
      if (branch_taken) {
          goto L_08ABA920;
      }
      goto L_08ABA830;
    }
L_08ABA830:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABA840u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08ABA840:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABA850;
      }
      goto L_08ABA848;
    }
L_08ABA848:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08ABA924;
      }
      goto L_08ABA850;
    }
L_08ABA850:
    ctx.set_gpr(31, 0x08ABA858u);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_08ABA858:
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 15u << 16u);
        goto L_08ABA8E4;
    }
    goto L_08ABA864;
L_08ABA864:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08ABA874u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABA874u) goto L_08ABA874;
    return;
L_08ABA874:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA880;
    }
L_08ABA880:
    ctx.set_gpr(3, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 9u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA890;
    }
L_08ABA890:
    ctx.set_gpr(2, ctx.gpr[3] | 22u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA89C;
    }
L_08ABA89C:
    ctx.set_gpr(2, ctx.gpr[3] | 19u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA8A8;
    }
L_08ABA8A8:
    ctx.set_gpr(2, ctx.gpr[3] | 14u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA8B4;
    }
L_08ABA8B4:
    ctx.set_gpr(2, 32801u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA8C4;
    }
L_08ABA8C4:
    ctx.set_gpr(2, ctx.gpr[3] | 45057u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA8D0;
    }
L_08ABA8D0:
    ctx.set_gpr(2, ctx.gpr[3] | 45059u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABA8F0;
      }
      goto L_08ABA8DC;
    }
L_08ABA8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA900;
      }
      goto L_08ABA8E4;
    }
L_08ABA8E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08ABA8F0u);
    ctx.set_gpr(5, ctx.gpr[2] | 16960u);
    ctx.pc = 0x08B0DF74u;
    return;
L_08ABA8F0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2308)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA850;
      }
      goto L_08ABA900;
    }
L_08ABA900:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(31, 0x08ABA910u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08ABA910:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08ABA920;
    }
    goto L_08ABA918;
L_08ABA918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA920;
      }
      goto L_08ABA920;
    }
L_08ABA920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ABA924;
L_08ABA924:
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
L_08ABA940:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2312));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ABA964u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.pc = 0x08B0DE9Cu;
    return;
L_08ABA964:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ABA984;
      }
      goto L_08ABA970;
    }
L_08ABA970:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(31, 0x08ABA97Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2304), ctx.gpr[16]);
    goto L_08ABACB4;
L_08ABA97C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08ABA990;
      }
      goto L_08ABA984;
    }
L_08ABA984:
    ctx.set_gpr(31, 0x08ABA98Cu);
    // nop
    goto L_08ABA74C;
L_08ABA98C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ABA990;
L_08ABA990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA9A0:
    // nop
    goto L_08ABA74C;
L_08ABA9A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.set_gpr(16, ctx.gpr[2] | 135u);
      if (branch_taken) {
          goto L_08ABA9E4;
      }
      goto L_08ABA9D8;
    }
L_08ABA9D8:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] | 259u);
      if (branch_taken) {
          goto L_08ABAAC8;
      }
      goto L_08ABA9E4;
    }
L_08ABA9E4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABA9F8u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08ABA9F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABAA08;
      }
      goto L_08ABAA00;
    }
L_08ABAA00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08ABAACC;
      }
      goto L_08ABAA08;
    }
L_08ABAA08:
    ctx.set_gpr(31, 0x08ABAA10u);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_08ABAA10:
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 15u << 16u);
        goto L_08ABAA8C;
    }
    goto L_08ABAA1C;
L_08ABAA1C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABAA2Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.pc = 0x08B0DC74u;
    return;
L_08ABAA2C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA38;
    }
L_08ABAA38:
    ctx.set_gpr(3, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | 45058u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA48;
    }
L_08ABAA48:
    ctx.set_gpr(2, ctx.gpr[3] | 19u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA54;
    }
L_08ABAA54:
    ctx.set_gpr(2, ctx.gpr[3] | 2u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA60;
    }
L_08ABAA60:
    ctx.set_gpr(2, ctx.gpr[3] | 12u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA6C;
    }
L_08ABAA6C:
    ctx.set_gpr(2, ctx.gpr[3] | 22u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA78;
    }
L_08ABAA78:
    ctx.set_gpr(2, ctx.gpr[3] | 91u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAA98;
      }
      goto L_08ABAA84;
    }
L_08ABAA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAAA8;
      }
      goto L_08ABAA8C;
    }
L_08ABAA8C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08ABAA98u);
    ctx.set_gpr(5, ctx.gpr[2] | 16960u);
    ctx.pc = 0x08B0DF74u;
    return;
L_08ABAA98:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2308)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAA08;
      }
      goto L_08ABAAA8;
    }
L_08ABAAA8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(31, 0x08ABAAB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08ABAAB8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08ABAAC8;
    }
    goto L_08ABAAC0;
L_08ABAAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAAC8;
      }
      goto L_08ABAAC8;
    }
L_08ABAAC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ABAACC;
L_08ABAACC:
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
L_08ABAAE4:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9188));
    goto L_08ABA7D4;
L_08ABAAF0:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9156));
    goto L_08ABA7D4;
L_08ABAAFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] | 135u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08ABAB48;
      }
      goto L_08ABAB3C;
    }
L_08ABAB3C:
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08ABAC90;
      }
      goto L_08ABAB48;
    }
L_08ABAB48:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABAB5Cu);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DE8Cu;
    return;
L_08ABAB5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABAB6C;
      }
      goto L_08ABAB64;
    }
L_08ABAB64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
      if (branch_taken) {
          goto L_08ABAC90;
      }
      goto L_08ABAB6C;
    }
L_08ABAB6C:
    ctx.set_gpr(31, 0x08ABAB74u);
    // nop
    ctx.pc = 0x08B0DF84u;
    return;
L_08ABAB74:
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 15u << 16u);
        goto L_08ABAC54;
    }
    goto L_08ABAB80;
L_08ABAB80:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08ABAB94u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.pc = 0x08B0DC7Cu;
    return;
L_08ABAB94:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABABA4;
    }
L_08ABABA4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABABBC;
      }
      goto L_08ABABB0;
    }
L_08ABABB0:
    ctx.set_gpr(1, ctx.gpr[17] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABABBC;
    }
L_08ABABBC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABABD4;
      }
      goto L_08ABABC4;
    }
L_08ABABC4:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 9u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABABD4;
    }
L_08ABABD4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABABEC;
      }
      goto L_08ABABDC;
    }
L_08ABABDC:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 22u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABABEC;
    }
L_08ABABEC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC04;
      }
      goto L_08ABABF4;
    }
L_08ABABF4:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 19u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABAC04;
    }
L_08ABAC04:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC1C;
      }
      goto L_08ABAC0C;
    }
L_08ABAC0C:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 14u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABAC1C;
    }
L_08ABAC1C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC34;
      }
      goto L_08ABAC24;
    }
L_08ABAC24:
    ctx.set_gpr(2, 32801u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABAC34;
    }
L_08ABAC34:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC60;
      }
      goto L_08ABAC3C;
    }
L_08ABAC3C:
    ctx.set_gpr(2, 32769u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45057u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABAC60;
      }
      goto L_08ABAC4C;
    }
L_08ABAC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC70;
      }
      goto L_08ABAC54;
    }
L_08ABAC54:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08ABAC60u);
    ctx.set_gpr(5, ctx.gpr[2] | 16960u);
    ctx.pc = 0x08B0DF74u;
    return;
L_08ABAC60:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2308)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAB6C;
      }
      goto L_08ABAC70;
    }
L_08ABAC70:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2304)));
    ctx.set_gpr(31, 0x08ABAC80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DE1Cu;
    return;
L_08ABAC80:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ABAC8C;
    }
    goto L_08ABAC88;
L_08ABAC88:
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    goto L_08ABAC8C;
L_08ABAC8C:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    goto L_08ABAC90;
L_08ABAC90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABACB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2231u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2308), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABACC4:
    ctx.set_gpr(3, 2231u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2308), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABACD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ABACE4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08ABB908;
L_08ABACE4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABACF8u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABB418;
L_08ABACF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAD10:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ABAD28;
    }
    goto L_08ABAD1C;
L_08ABAD1C:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25680)));
    goto L_08ABAD28;
L_08ABAD28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-816));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABAD6C;
      }
      goto L_08ABAD64;
    }
L_08ABAD64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABAE34;
      }
      goto L_08ABAD6C;
    }
L_08ABAD6C:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABAD7Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABAD7Cu) goto L_08ABAD7C;
    return;
L_08ABAD7C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08ABAD88u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08ABBFF0;
L_08ABAD88:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
        goto L_08ABAD9C;
    }
    goto L_08ABAD94;
L_08ABAD94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABAE34;
      }
      goto L_08ABAD9C;
    }
L_08ABAD9C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABADA8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(769));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABADA8u) goto L_08ABADA8;
    return;
L_08ABADA8:
    ctx.set_gpr(31, 0x08ABADB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08ABADB0u) goto L_08ABADB0;
    return;
L_08ABADB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(780));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08ABADDCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(769));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 38u, 0x0884019Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABADDCu) goto L_08ABADDC;
    return;
L_08ABADDC:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08ABADECu);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABAE54;
L_08ABADEC:
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08ABAE00;
    }
    goto L_08ABADF8;
L_08ABADF8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08ABAE00;
L_08ABAE00:
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABAE14u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 43u, 0x08ABC278u>(ctx, &aot_mem) && ctx.pc == 0x08ABAE14u) goto L_08ABAE14;
    return;
L_08ABAE14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08ABAE24u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABAE24u) goto L_08ABAE24;
    return;
L_08ABAE24:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08ABAE34u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABAE34u) goto L_08ABAE34;
    return;
L_08ABAE34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(816));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAE54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABAE74;
      }
      goto L_08ABAE6C;
    }
L_08ABAE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ABAEAC;
      }
      goto L_08ABAE74;
    }
L_08ABAE74:
    ctx.set_gpr(31, 0x08ABAE7Cu);
    // nop
    goto L_08ABBFF0;
L_08ABAE7C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ABAEAC;
    }
    goto L_08ABAE84;
L_08ABAE84:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(776)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ABAEAC;
    }
    goto L_08ABAEA8;
L_08ABAEA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABAEAC;
L_08ABAEAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAEBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABAEE4;
      }
      goto L_08ABAEDC;
    }
L_08ABAEDC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABAF78;
      }
      goto L_08ABAEE4;
    }
L_08ABAEE4:
    ctx.set_gpr(31, 0x08ABAEECu);
    // nop
    goto L_08ABBFF0;
L_08ABAEEC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
        goto L_08ABAEFC;
    }
    goto L_08ABAEF4;
L_08ABAEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABAF78;
      }
      goto L_08ABAEFC;
    }
L_08ABAEFC:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(776)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ABAF78;
    }
    goto L_08ABAF1C;
L_08ABAF1C:
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(780));
    ctx.set_gpr(31, 0x08ABAF28u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF28u) goto L_08ABAF28;
    return;
L_08ABAF28:
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ABAF34u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF34u) goto L_08ABAF34;
    return;
L_08ABAF34:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ABAF44u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF44u) goto L_08ABAF44;
    return;
L_08ABAF44:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABAF50u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(47));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABAF50u) goto L_08ABAF50;
    return;
L_08ABAF50:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(31, 0x08ABAF60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ABB8A0;
L_08ABAF60:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABAF74u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABB418;
L_08ABAF74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABAF78;
L_08ABAF78:
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
L_08ABAF90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABAFC8;
      }
      goto L_08ABAFC0;
    }
L_08ABAFC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB178;
      }
      goto L_08ABAFC8;
    }
L_08ABAFC8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(31, 0x08ABAFDCu);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 934u, 0x08AB7F04u>(ctx, &aot_mem) && ctx.pc == 0x08ABAFDCu) goto L_08ABAFDC;
    return;
L_08ABAFDC:
    ctx.set_gpr(31, 0x08ABAFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABAFE4u) goto L_08ABAFE4;
    return;
L_08ABAFE4:
    ctx.set_gpr(31, 0x08ABAFECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 846u, 0x08AB31B4u>(ctx, &aot_mem) && ctx.pc == 0x08ABAFECu) goto L_08ABAFEC;
    return;
L_08ABAFEC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08ABB040;
    }
    goto L_08ABAFF8;
L_08ABAFF8:
    ctx.set_gpr(31, 0x08ABB000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABB000u) goto L_08ABB000;
    return;
L_08ABB000:
    ctx.set_gpr(31, 0x08ABB008u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08ABB008u) goto L_08ABB008;
    return;
L_08ABB008:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ABB01Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ABB01Cu) goto L_08ABB01C;
    return;
L_08ABB01C:
    ctx.set_gpr(31, 0x08ABB024u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB024u) goto L_08ABB024;
    return;
L_08ABB024:
    ctx.set_gpr(31, 0x08ABB02Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 632u, 0x08AB6970u>(ctx, &aot_mem) && ctx.pc == 0x08ABB02Cu) goto L_08ABB02C;
    return;
L_08ABB02C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABB03Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABB03Cu) goto L_08ABB03C;
    return;
L_08ABB03C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08ABB040;
L_08ABB040:
    ctx.set_gpr(31, 0x08ABB048u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08ABB1B0;
L_08ABB048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB058;
      }
      goto L_08ABB050;
    }
L_08ABB050:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABB10C;
      }
      goto L_08ABB058;
    }
L_08ABB058:
    ctx.set_gpr(31, 0x08ABB060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB060u) goto L_08ABB060;
    return;
L_08ABB060:
    ctx.set_gpr(31, 0x08ABB068u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 535u, 0x08AB2088u>(ctx, &aot_mem) && ctx.pc == 0x08ABB068u) goto L_08ABB068;
    return;
L_08ABB068:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB0A0;
      }
      goto L_08ABB070;
    }
L_08ABB070:
    ctx.set_gpr(31, 0x08ABB078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB078u) goto L_08ABB078;
    return;
L_08ABB078:
    ctx.set_gpr(31, 0x08ABB080u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABB1A8;
L_08ABB080:
    ctx.set_gpr(31, 0x08ABB088u);
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB088u) goto L_08ABB088;
    return;
L_08ABB088:
    ctx.set_gpr(3, ctx.gpr[19] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(31, 0x08ABB09Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08ABB09Cu) goto L_08ABB09C;
    return;
L_08ABB09C:
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB0A0;
L_08ABB0A0:
    ctx.set_gpr(31, 0x08ABB0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 603u, 0x08AB67E0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB0A8u) goto L_08ABB0A8;
    return;
L_08ABB0A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB0B8;
      }
      goto L_08ABB0B0;
    }
L_08ABB0B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABB0E8;
      }
      goto L_08ABB0B8;
    }
L_08ABB0B8:
    ctx.set_gpr(31, 0x08ABB0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB0C0u) goto L_08ABB0C0;
    return;
L_08ABB0C0:
    ctx.set_gpr(31, 0x08ABB0C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ABB19C;
L_08ABB0C8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB0DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 104u, 0x0883CC30u>(ctx, &aot_mem) && ctx.pc == 0x08ABB0DCu) goto L_08ABB0DC;
    return;
L_08ABB0DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB0E8;
      }
      goto L_08ABB0E4;
    }
L_08ABB0E4:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ABB0E8;
L_08ABB0E8:
    ctx.set_gpr(31, 0x08ABB0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 677u, 0x08AB6C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB0F0u) goto L_08ABB0F0;
    return;
L_08ABB0F0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB10C;
      }
      goto L_08ABB0F8;
    }
L_08ABB0F8:
    ctx.set_gpr(31, 0x08ABB100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB100u) goto L_08ABB100;
    return;
L_08ABB100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABB10Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB10Cu) goto L_08ABB10C;
    return;
L_08ABB10C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB150;
      }
      goto L_08ABB114;
    }
L_08ABB114:
    ctx.set_gpr(31, 0x08ABB11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB11Cu) goto L_08ABB11C;
    return;
L_08ABB11C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABB12Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 842u, 0x08AB314Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB12Cu) goto L_08ABB12C;
    return;
L_08ABB12C:
    ctx.set_gpr(31, 0x08ABB134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ABB134u) goto L_08ABB134;
    return;
L_08ABB134:
    ctx.set_gpr(31, 0x08ABB13Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08ABB13Cu) goto L_08ABB13C;
    return;
L_08ABB13C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABB148u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB148u) goto L_08ABB148;
    return;
L_08ABB148:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB164;
      }
      goto L_08ABB150;
    }
L_08ABB150:
    ctx.set_gpr(31, 0x08ABB158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB158u) goto L_08ABB158;
    return;
L_08ABB158:
    ctx.set_gpr(31, 0x08ABB160u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 845u, 0x08AB31A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABB160u) goto L_08ABB160;
    return;
L_08ABB160:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08ABB164;
L_08ABB164:
    ctx.set_gpr(31, 0x08ABB16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 934u, 0x08AB7F04u>(ctx, &aot_mem) && ctx.pc == 0x08ABB16Cu) goto L_08ABB16C;
    return;
L_08ABB16C:
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ABB178;
    }
    goto L_08ABB174;
L_08ABB174:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ABB178;
L_08ABB178:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB19C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(860)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(856)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB1A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB1B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABB1D0;
      }
      goto L_08ABB1C8;
    }
L_08ABB1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB218;
      }
      goto L_08ABB1D0;
    }
L_08ABB1D0:
    ctx.set_gpr(31, 0x08ABB1D8u);
    // nop
    goto L_08ABBFF0;
L_08ABB1D8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
        goto L_08ABB1E8;
    }
    goto L_08ABB1E0;
L_08ABB1E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB218;
      }
      goto L_08ABB1E8;
    }
L_08ABB1E8:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(776)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ABB218;
    }
    goto L_08ABB208;
L_08ABB208:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ABB214u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(780));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 33u, 0x08ABC1DCu>(ctx, &aot_mem) && ctx.pc == 0x08ABB214u) goto L_08ABB214;
    return;
L_08ABB214:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB218;
L_08ABB218:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABB250;
      }
      goto L_08ABB248;
    }
L_08ABB248:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB310;
      }
      goto L_08ABB250;
    }
L_08ABB250:
    ctx.set_gpr(31, 0x08ABB258u);
    // nop
    goto L_08ABBA88;
L_08ABB258:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08ABB268;
    }
    goto L_08ABB260;
L_08ABB260:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB310;
      }
      goto L_08ABB268;
    }
L_08ABB268:
    ctx.set_gpr(31, 0x08ABB270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 819u, 0x08AAF430u>(ctx, &aot_mem) && ctx.pc == 0x08ABB270u) goto L_08ABB270;
    return;
L_08ABB270:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABB27Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB27Cu) goto L_08ABB27C;
    return;
L_08ABB27C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[17]) < 0) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ABB2F0;
    }
    goto L_08ABB290;
L_08ABB290:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ABB294;
L_08ABB294:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABB2A4u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABB764;
L_08ABB2A4:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(47));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08ABB2C8;
    }
    goto L_08ABB2B8;
L_08ABB2B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(58));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08ABB2E4;
    }
    goto L_08ABB2C4;
L_08ABB2C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ABB2C8;
L_08ABB2C8:
    ctx.set_gpr(6, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABB2DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB2DCu) goto L_08ABB2DC;
    return;
L_08ABB2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB2EC;
      }
      goto L_08ABB2E4;
    }
L_08ABB2E4:
    if (static_cast<std::int32_t>(ctx.gpr[17]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ABB294;
    }
    goto L_08ABB2EC;
L_08ABB2EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ABB2F0;
L_08ABB2F0:
    ctx.set_gpr(31, 0x08ABB2F8u);
    // nop
    goto L_08ABB8A0;
L_08ABB2F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABB30Cu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_08ABB418;
L_08ABB30C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB310;
L_08ABB310:
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
L_08ABB328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ABB348;
    }
    goto L_08ABB33C;
L_08ABB33C:
    ctx.set_gpr(31, 0x08ABB344u);
    // nop
    goto L_08ABACD0;
L_08ABB344:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABB348;
L_08ABB348:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25680), ctx.gpr[3]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25684), ctx.gpr[3]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25692), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB3A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(773));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB3A8u) goto L_08ABB3A8;
    return;
L_08ABB3A8:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(776));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB3BCu);
    ctx.set_gpr(6, ctx.gpr[2] | 24904u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB3BCu) goto L_08ABB3BC;
    return;
L_08ABB3BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB3D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08ABB400;
    }
    goto L_08ABB3E8;
L_08ABB3E8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB3FC;
      }
      goto L_08ABB3F4;
    }
L_08ABB3F4:
    ctx.set_gpr(31, 0x08ABB3FCu);
    // nop
    goto L_08ABB410;
L_08ABB3FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ABB400;
L_08ABB400:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB410:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08ABB418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-2224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ABB460u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.pc = 0x08B0DC54u;
    return;
L_08ABB460:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (static_cast<std::int32_t>(ctx.gpr[19]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ABB488;
    }
    goto L_08ABB46C;
L_08ABB46C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08ABB478u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ABB938;
L_08ABB478:
    ctx.set_gpr(31, 0x08ABB480u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B0DC54u;
    return;
L_08ABB480:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ABB488;
L_08ABB488:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABB494;
      }
      goto L_08ABB490;
    }
L_08ABB490:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB494;
L_08ABB494:
    if (static_cast<std::int32_t>(ctx.gpr[19]) < 0) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ABB6FC;
    }
    goto L_08ABB49C;
L_08ABB49C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08ABB4A0;
L_08ABB4A0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08ABB4A4;
L_08ABB4A4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x08ABB4B4u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB4B4u) goto L_08ABB4B4;
    return;
L_08ABB4B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1180));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB4C4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1044));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB4C4u) goto L_08ABB4C4;
    return;
L_08ABB4C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(1180));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08ABB4E0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.pc = 0x08B0DC64u;
    return;
L_08ABB4E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ABB6AC;
      }
      goto L_08ABB4E8;
    }
L_08ABB4E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB6AC;
      }
      goto L_08ABB4F4;
    }
L_08ABB4F4:
    ctx.set_gpr(31, 0x08ABB4FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB4FCu) goto L_08ABB4FC;
    return;
L_08ABB4FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB510u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(769));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB510u) goto L_08ABB510;
    return;
L_08ABB510:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08ABB520u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABB520u) goto L_08ABB520;
    return;
L_08ABB520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08ABB550;
    }
    goto L_08ABB530;
L_08ABB530:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08ABB540u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08ABBBF8;
L_08ABB540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB548;
    }
L_08ABB548:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB550;
    }
L_08ABB550:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08ABB55Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08ABBACC;
L_08ABB55C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB568;
      }
      goto L_08ABB564;
    }
L_08ABB564:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB568;
L_08ABB568:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
        goto L_08ABB4A4;
    }
    goto L_08ABB570;
L_08ABB570:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08ABB58C;
    }
    goto L_08ABB578;
L_08ABB578:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 201 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, ctx.gpr[18] + 0u);
        goto L_08ABB61C;
    }
    goto L_08ABB584;
L_08ABB584:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABB4A0;
      }
      goto L_08ABB58C;
    }
L_08ABB58C:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08ABB4A0;
    }
    goto L_08ABB5A0;
L_08ABB5A0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(201));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB5BC;
      }
      goto L_08ABB5B0;
    }
L_08ABB5B0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB4A0;
      }
      goto L_08ABB5BC;
    }
L_08ABB5BC:
    if (ctx.gpr[30] != 0u) {
    ctx.set_gpr(3, ctx.gpr[18] - ctx.gpr[3]);
        goto L_08ABB61C;
    }
    goto L_08ABB5C4;
L_08ABB5C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[20]);
        goto L_08ABB5EC;
    }
    goto L_08ABB5D0;
L_08ABB5D0:
    ctx.set_gpr(2, ctx.gpr[20] + static_cast<std::uint32_t>(201));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB5E8;
      }
      goto L_08ABB5E0;
    }
L_08ABB5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABB4A0;
      }
      goto L_08ABB5E8;
    }
L_08ABB5E8:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[20]);
    goto L_08ABB5EC;
L_08ABB5EC:
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 201 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB608;
      }
      goto L_08ABB5FC;
    }
L_08ABB5FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(201));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    goto L_08ABB608;
L_08ABB608:
    if (static_cast<std::int32_t>(ctx.gpr[3]) >= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08ABB620;
    }
    goto L_08ABB610;
L_08ABB610:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(201));
    goto L_08ABB614;
L_08ABB614:
    if (static_cast<std::int32_t>(ctx.gpr[3]) < 0) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(201));
        goto L_08ABB614;
    }
    goto L_08ABB61C;
L_08ABB61C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08ABB620;
L_08ABB620:
    ctx.set_gpr(2, ctx.gpr[2] & 4096u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
        goto L_08ABB650;
    }
    goto L_08ABB62C;
L_08ABB62C:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(776), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABB668;
      }
      goto L_08ABB650;
    }
L_08ABB650:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(776), 0u);
    goto L_08ABB668;
L_08ABB668:
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(780));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB67Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(769));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB67Cu) goto L_08ABB67C;
    return;
L_08ABB67C:
    ctx.set_gpr(31, 0x08ABB684u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB684u) goto L_08ABB684;
    return;
L_08ABB684:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 769 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ABB698;
    }
    goto L_08ABB690;
L_08ABB690:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(768));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ABB698;
L_08ABB698:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ABB6A4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABB6A4u) goto L_08ABB6A4;
    return;
L_08ABB6A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABB4A0;
      }
      goto L_08ABB6AC;
    }
L_08ABB6AC:
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08ABB6F0;
    }
    goto L_08ABB6B4;
L_08ABB6B4:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25680), ctx.gpr[18]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 201 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08ABB6E0;
    }
    goto L_08ABB6CC;
L_08ABB6CC:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABB6EC;
      }
      goto L_08ABB6E0;
    }
L_08ABB6E0:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
    goto L_08ABB6EC;
L_08ABB6EC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08ABB6F0;
L_08ABB6F0:
    ctx.set_gpr(31, 0x08ABB6F8u);
    // nop
    ctx.pc = 0x08B0DC6Cu;
    return;
L_08ABB6F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB6FC;
L_08ABB6FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(2224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB72C:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25688)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(201));
        goto L_08ABB758;
    }
    goto L_08ABB750;
L_08ABB750:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABB75C;
      }
      goto L_08ABB758;
    }
L_08ABB758:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    goto L_08ABB75C;
L_08ABB75C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08ABB874;
      }
      goto L_08ABB780;
    }
L_08ABB780:
    ctx.set_gpr(31, 0x08ABB788u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 819u, 0x08AAF430u>(ctx, &aot_mem) && ctx.pc == 0x08ABB788u) goto L_08ABB788;
    return;
L_08ABB788:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
        goto L_08ABB7A0;
    }
    goto L_08ABB794;
L_08ABB794:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB79C;
    }
L_08ABB79C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    goto L_08ABB7A0;
L_08ABB7A0:
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB7A8;
    }
L_08ABB7A8:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08ABB7AC;
L_08ABB7AC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 128 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 192 ? 1u : 0u);
        goto L_08ABB7C8;
    }
    goto L_08ABB7BC;
L_08ABB7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABB85C;
      }
      goto L_08ABB7C4;
    }
L_08ABB7C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 192 ? 1u : 0u);
    goto L_08ABB7C8;
L_08ABB7C8:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 194 ? 1u : 0u);
        goto L_08ABB7DC;
    }
    goto L_08ABB7D0;
L_08ABB7D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB7D8;
    }
L_08ABB7D8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 194 ? 1u : 0u);
    goto L_08ABB7DC;
L_08ABB7DC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 224 ? 1u : 0u);
        goto L_08ABB7F0;
    }
    goto L_08ABB7E4;
L_08ABB7E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB7EC;
    }
L_08ABB7EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 224 ? 1u : 0u);
    goto L_08ABB7F0;
L_08ABB7F0:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 240 ? 1u : 0u);
        goto L_08ABB804;
    }
    goto L_08ABB7F8;
L_08ABB7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ABB85C;
      }
      goto L_08ABB800;
    }
L_08ABB800:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 240 ? 1u : 0u);
    goto L_08ABB804;
L_08ABB804:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 248 ? 1u : 0u);
        goto L_08ABB818;
    }
    goto L_08ABB80C;
L_08ABB80C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ABB85C;
      }
      goto L_08ABB814;
    }
L_08ABB814:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 248 ? 1u : 0u);
    goto L_08ABB818;
L_08ABB818:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 252 ? 1u : 0u);
        goto L_08ABB82C;
    }
    goto L_08ABB820;
L_08ABB820:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABB85C;
      }
      goto L_08ABB828;
    }
L_08ABB828:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 252 ? 1u : 0u);
    goto L_08ABB82C;
L_08ABB82C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 254 ? 1u : 0u);
        goto L_08ABB840;
    }
    goto L_08ABB834;
L_08ABB834:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08ABB85C;
      }
      goto L_08ABB83C;
    }
L_08ABB83C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 254 ? 1u : 0u);
    goto L_08ABB840;
L_08ABB840:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ABB88C;
    }
    goto L_08ABB848;
L_08ABB848:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08ABB85C;
      }
      goto L_08ABB850;
    }
L_08ABB850:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB85C;
    }
L_08ABB85C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
        goto L_08ABB7AC;
    }
    goto L_08ABB86C;
L_08ABB86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB874;
    }
L_08ABB874:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[7] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ABB88C;
    }
    goto L_08ABB880;
L_08ABB880:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
      if (branch_taken) {
          goto L_08ABB88C;
      }
      goto L_08ABB888;
    }
L_08ABB888:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ABB88C;
L_08ABB88C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB8A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(776));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB8C4u);
    ctx.set_gpr(6, ctx.gpr[2] | 24904u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB8C4u) goto L_08ABB8C4;
    return;
L_08ABB8C4:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25680), ctx.gpr[4]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25684), 0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25688), ctx.gpr[4]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25692), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB908:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ABB920u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABB938;
L_08ABB920:
    ctx.set_gpr(31, 0x08ABB928u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ABB8A0;
L_08ABB928:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB960u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(773));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB960u) goto L_08ABB960;
    return;
L_08ABB960:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11620));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ABB974u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB974u) goto L_08ABB974;
    return;
L_08ABB974:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[3]) {
    ctx.set_gpr(4, 2246u << 16u);
        goto L_08ABB9CC;
    }
    goto L_08ABB980;
L_08ABB980:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, 2246u << 16u);
        goto L_08ABB990;
    }
    goto L_08ABB988;
L_08ABB988:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ABBA04;
      }
      goto L_08ABB990;
    }
L_08ABB990:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11620));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2332));
    ctx.set_gpr(31, 0x08ABB9A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9A4u) goto L_08ABB9A4;
    return;
L_08ABB9A4:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08ABB9B0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11620));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9B0u) goto L_08ABB9B0;
    return;
L_08ABB9B0:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11620));
    ctx.set_gpr(31, 0x08ABB9C4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9C4u) goto L_08ABB9C4;
    return;
L_08ABB9C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBA00;
      }
      goto L_08ABB9CC;
    }
L_08ABB9CC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11620));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2348));
    ctx.set_gpr(31, 0x08ABB9E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9E0u) goto L_08ABB9E0;
    return;
L_08ABB9E0:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08ABB9ECu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11620));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB9ECu) goto L_08ABB9EC;
    return;
L_08ABB9EC:
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11620));
    ctx.set_gpr(31, 0x08ABBA00u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ABBA00u) goto L_08ABBA00;
    return;
L_08ABBA00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABBA04;
L_08ABBA04:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ABBA40u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    goto L_08ABB72C;
L_08ABBA40:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABBA6C;
      }
      goto L_08ABBA58;
    }
L_08ABBA58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ABBA70;
    }
    goto L_08ABBA64;
L_08ABBA64:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABBA70;
      }
      goto L_08ABBA6C;
    }
L_08ABBA6C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ABBA70;
L_08ABBA70:
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
L_08ABBA88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08ABBAA4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11620));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBAA4u) goto L_08ABBAA4;
    return;
L_08ABBAA4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ABBAB0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBAB0u) goto L_08ABBAB0;
    return;
L_08ABBAB0:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08ABBABC;
    }
    goto L_08ABBAB8;
L_08ABBAB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABBABC;
L_08ABBABC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08ABBBDC;
      }
      goto L_08ABBAF0;
    }
L_08ABBAF0:
    ctx.set_gpr(31, 0x08ABBAF8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBAF8u) goto L_08ABBAF8;
    return;
L_08ABBAF8:
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08ABBB10;
      }
      goto L_08ABBB0C;
    }
L_08ABBB0C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08ABBB10;
L_08ABBB10:
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(109));
    if (ctx.gpr[6] == ctx.gpr[4]) {
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
        goto L_08ABBB38;
    }
    goto L_08ABBB24;
L_08ABBB24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(77));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABBB34;
      }
      goto L_08ABBB30;
    }
L_08ABBB30:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08ABBB34;
L_08ABBB34:
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[18]);
    goto L_08ABBB38;
L_08ABBB38:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(112));
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
        goto L_08ABBB5C;
    }
    goto L_08ABBB48;
L_08ABBB48:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABBB58;
      }
      goto L_08ABBB54;
    }
L_08ABBB54:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08ABBB58;
L_08ABBB58:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    goto L_08ABBB5C;
L_08ABBB5C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(51));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
        goto L_08ABBB74;
    }
    goto L_08ABBB6C;
L_08ABBB6C:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    goto L_08ABBB74;
L_08ABBB74:
    if (ctx.gpr[7] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(97));
        goto L_08ABBB84;
    }
    goto L_08ABBB7C;
L_08ABBB7C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(97));
    goto L_08ABBB84;
L_08ABBB84:
    if (ctx.gpr[6] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
        goto L_08ABBBA0;
    }
    goto L_08ABBB8C;
L_08ABBB8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(65));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABBB9C;
      }
      goto L_08ABBB98;
    }
L_08ABBB98:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ABBB9C;
L_08ABBB9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(116));
    goto L_08ABBBA0;
L_08ABBBA0:
    if (ctx.gpr[5] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(51));
        goto L_08ABBBBC;
    }
    goto L_08ABBBA8;
L_08ABBBA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(84));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABBBB8;
      }
      goto L_08ABBBB4;
    }
L_08ABBBB4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ABBBB8;
L_08ABBBB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(51));
    goto L_08ABBBBC;
L_08ABBBBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABBBC8;
      }
      goto L_08ABBBC4;
    }
L_08ABBBC4:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ABBBC8;
L_08ABBBC8:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ABBBE0;
    }
    goto L_08ABBBD0;
L_08ABBBD0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBBDC;
      }
      goto L_08ABBBD8;
    }
L_08ABBBD8:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ABBBDC;
L_08ABBBDC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08ABBBE0;
L_08ABBBE0:
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
L_08ABBBF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABBC6C;
      }
      goto L_08ABBC14;
    }
L_08ABBC14:
    ctx.set_gpr(31, 0x08ABBC1Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBC1Cu) goto L_08ABBC1C;
    return;
L_08ABBC1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ABBC50;
    }
    goto L_08ABBC28;
L_08ABBC28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ABBC3C;
    }
    goto L_08ABBC34;
L_08ABBC34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08ABBC70;
      }
      goto L_08ABBC3C;
    }
L_08ABBC3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ABBC6C;
      }
      goto L_08ABBC48;
    }
L_08ABBC48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08ABBC6C;
      }
      goto L_08ABBC50;
    }
L_08ABBC50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(46));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABBC6C;
      }
      goto L_08ABBC5C;
    }
L_08ABBC5C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABBC6C;
      }
      goto L_08ABBC68;
    }
L_08ABBC68:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ABBC6C;
L_08ABBC6C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ABBC70;
L_08ABBC70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBC84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ABBDEC;
      }
      goto L_08ABBC98;
    }
L_08ABBC98:
    ctx.set_gpr(31, 0x08ABBCA0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ABBCA0u) goto L_08ABBCA0;
    return;
L_08ABBCA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08ABBDEC;
      }
      goto L_08ABBCA8;
    }
L_08ABBCA8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(46));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[10]);
    goto L_08ABBCB0;
L_08ABBCB0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_08ABBDE4;
    }
    goto L_08ABBCBC;
L_08ABBCBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ABBDF0;
    }
    goto L_08ABBCC8;
L_08ABBCC8:
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[10]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08ABBDB8;
      }
      goto L_08ABBCD8;
    }
L_08ABBCD8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08ABBD08;
      }
      goto L_08ABBCF0;
    }
L_08ABBCF0:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBD08;
      }
      goto L_08ABBD04;
    }
L_08ABBD04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABBD08;
L_08ABBD08:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBD28;
      }
      goto L_08ABBD10;
    }
L_08ABBD10:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBD28;
      }
      goto L_08ABBD24;
    }
L_08ABBD24:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABBD28;
L_08ABBD28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBD40;
      }
      goto L_08ABBD30;
    }
L_08ABBD30:
    ctx.set_gpr(3, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABBD40;
      }
      goto L_08ABBD3C;
    }
L_08ABBD3C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABBD40;
L_08ABBD40:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBD7C;
      }
      goto L_08ABBD48;
    }
L_08ABBD48:
    ctx.set_gpr(5, 32768u << 16u);
    ctx.set_gpr(3, 0u - ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ABBD70;
      }
      goto L_08ABBD60;
    }
L_08ABBD60:
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ABBD70;
      }
      goto L_08ABBD6C;
    }
L_08ABBD6C:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08ABBD70;
L_08ABBD70:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBD7C;
      }
      goto L_08ABBD78;
    }
L_08ABBD78:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABBD7C;
L_08ABBD7C:
    if (ctx.gpr[9] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
        goto L_08ABBDBC;
    }
    goto L_08ABBD84;
L_08ABBD84:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[10]);
    goto L_08ABBD88;
L_08ABBD88:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[10]);
        goto L_08ABBD88;
    }
    goto L_08ABBDB8;
L_08ABBDB8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    goto L_08ABBDBC;
L_08ABBDBC:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBDEC;
      }
      goto L_08ABBDC4;
    }
L_08ABBDC4:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[10]);
    goto L_08ABBDC8;
L_08ABBDC8:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[10]);
        goto L_08ABBDC8;
    }
    goto L_08ABBDDC;
L_08ABBDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBDEC;
      }
      goto L_08ABBDE4;
    }
L_08ABBDE4:
    if (static_cast<std::int32_t>(ctx.gpr[10]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[10]);
        goto L_08ABBCB0;
    }
    goto L_08ABBDEC;
L_08ABBDEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ABBDF0;
L_08ABBDF0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBDFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(3, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25680)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 202 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ABBFD4;
      }
      goto L_08ABBE2C;
    }
L_08ABBE2C:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25692), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABBE68;
      }
      goto L_08ABBE5C;
    }
L_08ABBE5C:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25692), 0u);
    goto L_08ABBE68;
L_08ABBE68:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25680)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-201));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08ABBEA0;
    }
    goto L_08ABBE90;
L_08ABBE90:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25692), ctx.gpr[3]);
    ctx.set_gpr(2, 2u << 16u);
    goto L_08ABBEA0;
L_08ABBEA0:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(31, 0x08ABBEB0u);
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 671u, 0x0880F1A8u>(ctx, &aot_mem) && ctx.pc == 0x08ABBEB0u) goto L_08ABBEB0;
    return;
L_08ABBEB0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 201 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08ABBF9C;
    }
    goto L_08ABBEBC;
L_08ABBEBC:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25692)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_08ABBF3C;
    }
    goto L_08ABBED4;
L_08ABBED4:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 201 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25684), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABBF08;
      }
      goto L_08ABBEF8;
    }
L_08ABBEF8:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-201));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25684), ctx.gpr[3]);
    goto L_08ABBF08;
L_08ABBF08:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABBFC0;
      }
      goto L_08ABBF28;
    }
L_08ABBF28:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(201));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABBFC0;
      }
      goto L_08ABBF3C;
    }
L_08ABBF3C:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25684), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ABBF68;
      }
      goto L_08ABBF58;
    }
L_08ABBF58:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(201));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25684), ctx.gpr[3]);
    goto L_08ABBF68;
L_08ABBF68:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25684)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABBFC0;
      }
      goto L_08ABBF88;
    }
L_08ABBF88:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(201));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ABBFC0;
      }
      goto L_08ABBF9C;
    }
L_08ABBF9C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25684), 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25688), ctx.gpr[3]);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08ABBFC0;
L_08ABBFC0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ABBFD4u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_08ABB418;
L_08ABBFD4:
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
L_08ABBFF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.pc = 0x08ABC000u; return;
}

void recomp_unit_0173(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0173_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_173(Runtime &runtime) {
    runtime.register_generated_unit(173u, 0x08AB8000u, 16384u, &recomp_unit_0173, &recomp_unit_0173_entry);
    runtime.register_function(0x08AB8000u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8024u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8038u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB806Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8074u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB807Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8088u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8090u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8098u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8114u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8124u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8138u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8140u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8144u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8154u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8184u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB818Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8198u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB822Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8238u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB824Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8254u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8268u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB829Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8300u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8308u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8318u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8320u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8328u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8338u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8340u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8348u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8350u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8380u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8388u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8408u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB840Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8410u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8424u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8434u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8440u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB844Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8450u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8458u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8468u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8470u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8500u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8508u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB851Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8524u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8550u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8558u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8560u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB856Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8574u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB857Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB859Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8648u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8658u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8700u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8708u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB871Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8724u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8738u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8740u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8748u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8754u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB875Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8764u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8774u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB877Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8788u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB878Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB879Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8800u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8808u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8838u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8840u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8848u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8858u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8860u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8868u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8878u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8880u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8910u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB891Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8928u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB892Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8938u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB893Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8940u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB896Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8988u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8994u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8998u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8CDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8ECCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8ED4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9000u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9024u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9038u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB905Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9064u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB906Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9070u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9078u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9080u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9090u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9098u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9108u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9110u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9118u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB911Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9130u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB916Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9184u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9194u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB919Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB920Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9214u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB921Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9224u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9230u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9238u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9240u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9248u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9250u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9260u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9270u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9284u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9290u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB92F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9300u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9308u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9310u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9314u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9318u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9320u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9334u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9348u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9350u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9358u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9364u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB936Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB937Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9380u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9390u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9398u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9404u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB940Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9414u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB941Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9424u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9430u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9434u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9438u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB944Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB947Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9488u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9500u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9508u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9510u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB951Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9524u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9528u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB952Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9540u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9570u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9578u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9580u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9584u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB958Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB959Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB960Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9618u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9624u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9630u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB963Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9648u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9658u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9668u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9670u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9678u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9684u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB968Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9694u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9698u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9704u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9710u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB971Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9724u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9728u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9738u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9740u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9764u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9770u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB977Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB978Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9794u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB979Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9800u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB980Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9814u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9820u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB982Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9844u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB984Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB985Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9868u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9878u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9884u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9890u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB989Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9904u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9914u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB991Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9924u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9928u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB993Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB996Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9978u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9994u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9ADCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9AF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9ED0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9FF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA004u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA00Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA01Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA028u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA038u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA044u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA04Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA054u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA068u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA070u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA078u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA084u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA08Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA094u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA09Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA128u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA134u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA13Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA140u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA148u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA150u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA15Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA170u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA178u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA184u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA190u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA208u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA210u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA220u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA228u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA250u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA258u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA26Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA274u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA284u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA28Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA300u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA308u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA30Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA314u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA31Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA328u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA33Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA344u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA350u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA354u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA364u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA378u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA380u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA390u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA398u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA408u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA410u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA414u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA42Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA458u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA464u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA474u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA47Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA488u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA49Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA504u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA518u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA534u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA540u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA548u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA55Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA564u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA578u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA584u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA590u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA598u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA608u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA614u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA618u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA62Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA648u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA654u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA660u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA66Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA674u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA680u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA68Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA698u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA69Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA704u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA710u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA71Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA734u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA738u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA74Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA760u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA768u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA770u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA778u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA788u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA790u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA798u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA80Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA814u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA820u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA828u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA830u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA840u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA848u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA850u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA858u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA864u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA874u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA880u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA890u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA89Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA900u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA910u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA918u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA920u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA924u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA940u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA964u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA970u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA97Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA984u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA98Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA990u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAACCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB000u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB008u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB01Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB024u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB02Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB03Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB040u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB048u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB050u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB058u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB060u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB068u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB070u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB078u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB080u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB088u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB09Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB100u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB10Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB114u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB11Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB12Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB134u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB13Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB148u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB150u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB158u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB160u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB164u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB16Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB174u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB178u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB19Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB208u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB214u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB218u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB228u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB248u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB250u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB258u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB260u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB268u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB270u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB27Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB290u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB294u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB2F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB30Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB310u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB328u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB33Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB344u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB348u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB350u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB400u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB410u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB418u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB460u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB46Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB478u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB480u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB488u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB490u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB494u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB49Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB4FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB510u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB530u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB540u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB548u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB550u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB55Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB564u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB568u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB570u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB578u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB584u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB58Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB608u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB610u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB614u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB61Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB620u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB62Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB650u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB668u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB67Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB684u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB690u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB698u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB72Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB750u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB758u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB75Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB764u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB780u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB788u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB794u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB79Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB800u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB804u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB80Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB814u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB818u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB820u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB828u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB82Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB834u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB83Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB840u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB848u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB850u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB85Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB86Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB874u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB880u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB888u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB88Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB908u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB920u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB928u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB938u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB960u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB974u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB980u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB988u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB990u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBABCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBACCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBED4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFF0u, &recomp_unit_0173, "recomp_unit_0173");
}
} // namespace psprecomp
