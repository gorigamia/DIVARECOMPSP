#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0183[4093] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0,
    20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0,
    38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0,
    46, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58,
    0, 59, 0, 0, 60, 61, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0,
    72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 81, 0,
    0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88,
    0, 89, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 98, 0, 99,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 107,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124,
    0, 125, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0,
    0, 0, 0, 0, 135, 0, 0, 136, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0,
    0, 0, 0, 146, 0, 0, 147, 0, 148, 149, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155,
    0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171,
    0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0,
    178, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 0, 0, 188,
    0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 199, 0,
    200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0,
    208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 218,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240,
    0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0,
    252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 263,
    0, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 274,
    0, 0, 0, 275, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 0, 0, 284, 285, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0,
    0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310,
    0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318,
    0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 0,
    0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338,
    0, 0, 0, 0, 0, 339, 0, 0, 340, 341, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 0, 0, 349, 0, 350,
    0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 361, 0, 362, 0,
    0, 363, 0, 0, 0, 0, 0, 364, 365, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 369, 0, 370, 0, 0, 0, 371, 0,
    372, 373, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 379, 380, 0, 0, 381, 0, 0, 382, 383, 0, 384, 0, 0,
    385, 386, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 392, 0, 393, 0, 394,
    0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0,
    0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 0, 427, 0, 0,
    428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 436, 0, 437, 0, 438, 0, 0, 439, 0,
    440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0,
    0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 460, 461, 0, 0,
    0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 468, 0, 0, 0, 469, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0,
    472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 481,
    0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 486, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0,
    495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0,
    505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 510, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 517,
    0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 526, 527, 0,
    0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533,
    0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 540, 0, 0, 541, 0, 542, 0,
    0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 552, 0, 0, 553, 0, 0, 0,
    0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 560, 0, 561, 562,
    0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570,
    571, 0, 0, 0, 572, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0,
    0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 597,
    0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 602, 603, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 608,
    609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 612, 0, 0, 0, 613, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617,
    0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623,
    0, 0, 624, 625, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633,
    0, 634, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 641,
    0, 0, 0, 642, 0, 643, 0, 644, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 650, 0, 0, 651, 0, 0,
    0, 652, 653, 0, 0, 0, 654, 0, 655, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 667, 0, 668, 0, 669, 0, 0, 0, 0,
    670, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 679, 0, 0,
    0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 689, 690,
    0, 0, 691, 0, 0, 0, 692, 693, 0, 0, 0, 694, 0, 695, 696, 0, 0, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 0, 0,
    0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 707, 0, 708, 0,
    709, 0, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 717, 0, 0, 0, 0,
    0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0,
    0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 734, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738,
    0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0,
    746, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0,
    0, 0, 753, 0, 0, 754, 0, 0, 755, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 761, 762, 0, 0, 0, 0,
    0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 0, 768, 0, 769, 0, 770,
    0, 0, 0, 0, 771, 0, 772, 773, 0, 774, 0, 775, 0, 0, 776, 777, 778, 0, 779, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0,
    0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 789, 0, 790,
    0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0,
    796, 0, 0, 0, 0, 797, 0, 0, 0, 798, 799, 0, 800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 806, 0,
    807, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0,
    0, 0, 812, 0, 813, 0, 814, 815, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 819, 0, 0,
    820, 0, 821, 0, 822, 0, 823, 0, 824, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 828, 0, 829, 0, 0, 0, 0, 830, 0, 831,
    0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 0, 840, 0, 0, 0, 0, 841,
    0, 842, 0, 843, 0, 0, 0, 0, 844, 845, 0, 846, 0, 847, 0, 848, 0, 0, 849, 0, 0, 850, 0, 851, 0, 0, 852, 0, 0, 853, 0, 854,
    0, 0, 0, 0, 855, 0, 856, 0, 857, 0, 0, 0, 0, 858, 859, 0, 860, 861, 0, 862, 0, 0, 863, 0, 0, 864, 0, 865, 0, 0, 0, 0,
    866, 0, 867, 0, 868, 0, 0, 0, 0, 869, 870, 0, 871, 0, 872, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 877, 0,
    878, 0, 0, 0, 0, 879, 0, 880, 0, 881, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 886, 0, 887, 0,
    888, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 0, 0, 0, 893, 894, 0, 895, 0, 896, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900,
    0, 0, 0, 0, 901, 0, 902, 0, 903, 0, 0, 0, 0, 904, 905, 0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 911, 0, 0,
    0, 0, 912, 913, 0, 914, 0, 915, 0, 916, 0, 917, 918, 0, 0, 0, 919, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 921, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925,
    0, 926, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0,
    930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 939, 940, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 943, 0,
    944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 946, 0, 947, 0, 0, 0, 0, 948, 0, 0, 0, 949, 0, 0, 0, 950, 0, 0,
    951, 0, 952, 0, 0, 0, 0, 953, 0, 954, 0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 0, 957, 0, 958, 0, 0, 0, 0, 959, 0, 960, 0,
    0, 0, 0, 961, 0, 962, 0, 0, 0, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 966, 0, 0, 0, 0, 0, 0, 0, 967, 0, 968, 0, 0,
    0, 0, 969, 0, 970, 0, 0, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0, 973, 0, 974, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976,
    0, 977, 0, 0, 0, 0, 978, 0, 979, 0, 0, 0, 0, 0, 0, 0, 980, 0, 981, 0, 0, 0, 0, 982, 0, 983, 0, 0, 0, 0, 0, 0,
    0, 984, 0, 985, 0, 0, 0, 0, 986, 0, 987, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989, 0, 0, 0, 0, 990, 0, 991, 0, 0, 0, 0,
    0, 0, 0, 0, 992, 0, 993, 0, 0, 0, 0, 994, 0, 995, 0, 0, 0, 0, 0, 0, 0, 996, 0, 997, 0, 0, 0, 0, 998, 0, 999, 0,
    0, 0, 0, 0, 0, 0, 1000, 0, 1001, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 0, 0, 0, 0, 0, 1004, 0, 1005, 0, 0, 0, 0, 1006, 0,
    1007, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 1009, 0, 0, 0, 0, 1010, 0, 1011, 0, 0, 0, 0, 0, 0, 0, 1012, 0, 1013, 0, 0, 0, 0,
    1014, 0, 1015, 0, 0, 0, 0, 1016, 0, 1017, 0, 0, 0, 0, 1018, 0, 1019, 0, 0, 0, 0, 1020, 1021, 0, 1022, 0, 0, 0, 1023, 0, 1024, 0,
    0, 0, 1025, 0, 0, 1026, 0, 1027, 0, 0, 0, 1028, 1029, 0, 0, 1030, 0, 0, 0, 1031, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1032, 0, 0, 1033, 0, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 0, 0, 1040, 0, 1041, 0, 0, 0, 1042, 0, 1043, 0, 1044,
    0, 1045, 0, 1046, 0, 1047, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 0, 0, 0, 0, 0, 0, 0, 1052,
    1053, 0, 0, 1054, 0, 1055, 0, 0, 0, 0, 1056, 0, 1057, 0, 1058, 0, 0, 0, 0, 1059, 0, 0, 0, 0, 0, 1060, 0, 0, 0, 1061, 0, 1062,
    0, 1063, 0, 0, 1064, 0, 1065, 0, 0, 0, 0, 0, 0, 0, 1066, 0, 1067, 0, 0, 0, 0, 1068, 0, 0, 0, 1069, 0, 1070, 0, 0, 1071, 0,
    1072, 0, 0, 0, 0, 0, 0, 0, 1073, 0, 1074, 0, 0, 0, 0, 1075, 0, 0, 1076, 1077, 0, 0, 1078, 0, 0, 1079, 0, 0, 1080, 0, 1081, 0,
    0, 1082, 0, 1083, 0, 1084, 0, 1085, 0, 0, 0, 1086, 0, 1087, 0, 0, 0, 0, 1088, 0, 0, 1089, 0, 1090, 0, 0, 0, 0, 1091, 0, 1092, 0,
    1093, 0, 0, 0, 0, 1094, 0, 1095, 0, 0, 0, 0, 1096, 0, 1097, 0, 0, 0, 0, 1098, 0, 1099, 0, 0, 0, 0, 1100, 0, 0, 0, 0, 0,
    0, 0, 0, 1101, 0, 1102, 0, 0, 0, 0, 1103, 0, 0, 1104, 0, 1105, 0, 0, 0, 0, 1106, 0, 1107, 0, 1108, 0, 0, 0, 0, 1109, 0, 1110,
    0, 0, 0, 0, 0, 0, 0, 1111, 0, 1112, 0, 0, 0, 0, 0, 0, 0, 1113, 0, 1114, 0, 0, 0, 0, 0, 0, 0, 1115, 0, 0, 0, 0,
    0, 0, 1116, 0, 1117, 0, 0, 0, 1118, 0, 0, 1119, 0, 1120, 0, 0, 1121, 0, 1122, 0, 1123, 0, 1124, 0, 0, 0, 0, 0, 1125, 0, 0, 0,
    0, 1126, 0, 1127, 0, 0, 0, 0, 0, 0, 0, 1128, 0, 1129, 0, 0, 0, 0, 0, 0, 0, 1130, 0, 1131, 0, 0, 0, 0, 0, 0, 0, 1132,
    0, 0, 0, 0, 0, 0, 1133, 0, 1134, 0, 0, 0, 1135, 0, 1136, 0, 1137, 0, 0, 1138, 0, 1139, 0, 1140, 0, 1141, 0, 0, 0, 0, 0, 0,
    0, 0, 1142, 0, 0, 0, 0, 1143, 0, 1144, 0, 1145, 0, 0, 1146, 0, 0, 1147, 0, 1148, 0, 0, 0, 0, 1149, 0, 1150, 0, 1151,
};
void recomp_unit_0183_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE0004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0183[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE0004;
    case 2u: goto L_08AE0010;
    case 3u: goto L_08AE0018;
    case 4u: goto L_08AE0020;
    case 5u: goto L_08AE0028;
    case 6u: goto L_08AE0030;
    case 7u: goto L_08AE0048;
    case 8u: goto L_08AE0050;
    case 9u: goto L_08AE0070;
    case 10u: goto L_08AE0088;
    case 11u: goto L_08AE009C;
    case 12u: goto L_08AE00AC;
    case 13u: goto L_08AE00B4;
    case 14u: goto L_08AE00BC;
    case 15u: goto L_08AE00C8;
    case 16u: goto L_08AE00D0;
    case 17u: goto L_08AE00D8;
    case 18u: goto L_08AE00EC;
    case 19u: goto L_08AE00FC;
    case 20u: goto L_08AE0104;
    case 21u: goto L_08AE0110;
    case 22u: goto L_08AE0118;
    case 23u: goto L_08AE012C;
    case 24u: goto L_08AE0134;
    case 25u: goto L_08AE0154;
    case 26u: goto L_08AE015C;
    case 27u: goto L_08AE017C;
    case 28u: goto L_08AE0184;
    case 29u: goto L_08AE019C;
    case 30u: goto L_08AE01AC;
    case 31u: goto L_08AE01B4;
    case 32u: goto L_08AE01BC;
    case 33u: goto L_08AE01C8;
    case 34u: goto L_08AE01D0;
    case 35u: goto L_08AE01D8;
    case 36u: goto L_08AE01EC;
    case 37u: goto L_08AE01FC;
    case 38u: goto L_08AE0204;
    case 39u: goto L_08AE020C;
    case 40u: goto L_08AE0218;
    case 41u: goto L_08AE0220;
    case 42u: goto L_08AE0234;
    case 43u: goto L_08AE023C;
    case 44u: goto L_08AE025C;
    case 45u: goto L_08AE0264;
    case 46u: goto L_08AE0284;
    case 47u: goto L_08AE0290;
    case 48u: goto L_08AE0298;
    case 49u: goto L_08AE02A4;
    case 50u: goto L_08AE02AC;
    case 51u: goto L_08AE02B4;
    case 52u: goto L_08AE02C8;
    case 53u: goto L_08AE02D8;
    case 54u: goto L_08AE02E0;
    case 55u: goto L_08AE02E8;
    case 56u: goto L_08AE02F0;
    case 57u: goto L_08AE02F8;
    case 58u: goto L_08AE0300;
    case 59u: goto L_08AE0308;
    case 60u: goto L_08AE0314;
    case 61u: goto L_08AE0318;
    case 62u: goto L_08AE0320;
    case 63u: goto L_08AE0328;
    case 64u: goto L_08AE0334;
    case 65u: goto L_08AE033C;
    case 66u: goto L_08AE0344;
    case 67u: goto L_08AE0358;
    case 68u: goto L_08AE0360;
    case 69u: goto L_08AE0368;
    case 70u: goto L_08AE0374;
    case 71u: goto L_08AE037C;
    case 72u: goto L_08AE0384;
    case 73u: goto L_08AE0398;
    case 74u: goto L_08AE03A0;
    case 75u: goto L_08AE03B4;
    case 76u: goto L_08AE03BC;
    case 77u: goto L_08AE03D0;
    case 78u: goto L_08AE03E0;
    case 79u: goto L_08AE03E8;
    case 80u: goto L_08AE03F4;
    case 81u: goto L_08AE03FC;
    case 82u: goto L_08AE0410;
    case 83u: goto L_08AE0418;
    case 84u: goto L_08AE0438;
    case 85u: goto L_08AE0440;
    case 86u: goto L_08AE0460;
    case 87u: goto L_08AE0468;
    case 88u: goto L_08AE0480;
    case 89u: goto L_08AE0488;
    case 90u: goto L_08AE048C;
    case 91u: goto L_08AE049C;
    case 92u: goto L_08AE04BC;
    case 93u: goto L_08AE04C8;
    case 94u: goto L_08AE04D4;
    case 95u: goto L_08AE04DC;
    case 96u: goto L_08AE04E4;
    case 97u: goto L_08AE04EC;
    case 98u: goto L_08AE04F8;
    case 99u: goto L_08AE0500;
    case 100u: goto L_08AE0530;
    case 101u: goto L_08AE0538;
    case 102u: goto L_08AE0548;
    case 103u: goto L_08AE0554;
    case 104u: goto L_08AE055C;
    case 105u: goto L_08AE056C;
    case 106u: goto L_08AE0578;
    case 107u: goto L_08AE0580;
    case 108u: goto L_08AE0590;
    case 109u: goto L_08AE05B0;
    case 110u: goto L_08AE05B8;
    case 111u: goto L_08AE05C8;
    case 112u: goto L_08AE05E8;
    case 113u: goto L_08AE05F0;
    case 114u: goto L_08AE0600;
    case 115u: goto L_08AE0620;
    case 116u: goto L_08AE0628;
    case 117u: goto L_08AE0630;
    case 118u: goto L_08AE0638;
    case 119u: goto L_08AE0640;
    case 120u: goto L_08AE0648;
    case 121u: goto L_08AE0654;
    case 122u: goto L_08AE066C;
    case 123u: goto L_08AE0674;
    case 124u: goto L_08AE0680;
    case 125u: goto L_08AE0688;
    case 126u: goto L_08AE06A0;
    case 127u: goto L_08AE06A8;
    case 128u: goto L_08AE06B4;
    case 129u: goto L_08AE06C0;
    case 130u: goto L_08AE06CC;
    case 131u: goto L_08AE06D4;
    case 132u: goto L_08AE06E8;
    case 133u: goto L_08AE06F4;
    case 134u: goto L_08AE06FC;
    case 135u: goto L_08AE0714;
    case 136u: goto L_08AE0720;
    case 137u: goto L_08AE0728;
    case 138u: goto L_08AE0730;
    case 139u: goto L_08AE073C;
    case 140u: goto L_08AE0744;
    case 141u: goto L_08AE074C;
    case 142u: goto L_08AE075C;
    case 143u: goto L_08AE0764;
    case 144u: goto L_08AE076C;
    case 145u: goto L_08AE0778;
    case 146u: goto L_08AE0790;
    case 147u: goto L_08AE079C;
    case 148u: goto L_08AE07A4;
    case 149u: goto L_08AE07A8;
    case 150u: goto L_08AE07B8;
    case 151u: goto L_08AE07D8;
    case 152u: goto L_08AE07E4;
    case 153u: goto L_08AE07F0;
    case 154u: goto L_08AE07F8;
    case 155u: goto L_08AE0800;
    case 156u: goto L_08AE0808;
    case 157u: goto L_08AE0818;
    case 158u: goto L_08AE0820;
    case 159u: goto L_08AE0840;
    case 160u: goto L_08AE0848;
    case 161u: goto L_08AE0854;
    case 162u: goto L_08AE085C;
    case 163u: goto L_08AE088C;
    case 164u: goto L_08AE0894;
    case 165u: goto L_08AE08A4;
    case 166u: goto L_08AE08B0;
    case 167u: goto L_08AE08B8;
    case 168u: goto L_08AE08C8;
    case 169u: goto L_08AE08E8;
    case 170u: goto L_08AE08F0;
    case 171u: goto L_08AE0900;
    case 172u: goto L_08AE0920;
    case 173u: goto L_08AE0928;
    case 174u: goto L_08AE0938;
    case 175u: goto L_08AE0958;
    case 176u: goto L_08AE0960;
    case 177u: goto L_08AE096C;
    case 178u: goto L_08AE0984;
    case 179u: goto L_08AE098C;
    case 180u: goto L_08AE0998;
    case 181u: goto L_08AE09A0;
    case 182u: goto L_08AE09B8;
    case 183u: goto L_08AE09C0;
    case 184u: goto L_08AE09CC;
    case 185u: goto L_08AE09D8;
    case 186u: goto L_08AE09E4;
    case 187u: goto L_08AE09EC;
    case 188u: goto L_08AE0A00;
    case 189u: goto L_08AE0A0C;
    case 190u: goto L_08AE0A14;
    case 191u: goto L_08AE0A2C;
    case 192u: goto L_08AE0A38;
    case 193u: goto L_08AE0A40;
    case 194u: goto L_08AE0A48;
    case 195u: goto L_08AE0A54;
    case 196u: goto L_08AE0A5C;
    case 197u: goto L_08AE0A64;
    case 198u: goto L_08AE0A74;
    case 199u: goto L_08AE0A7C;
    case 200u: goto L_08AE0A84;
    case 201u: goto L_08AE0A90;
    case 202u: goto L_08AE0AA8;
    case 203u: goto L_08AE0AB4;
    case 204u: goto L_08AE0AC4;
    case 205u: goto L_08AE0AC8;
    case 206u: goto L_08AE0AD8;
    case 207u: goto L_08AE0AF8;
    case 208u: goto L_08AE0B04;
    case 209u: goto L_08AE0B10;
    case 210u: goto L_08AE0B1C;
    case 211u: goto L_08AE0B24;
    case 212u: goto L_08AE0B2C;
    case 213u: goto L_08AE0B34;
    case 214u: goto L_08AE0B44;
    case 215u: goto L_08AE0B4C;
    case 216u: goto L_08AE0B6C;
    case 217u: goto L_08AE0B74;
    case 218u: goto L_08AE0B80;
    case 219u: goto L_08AE0B88;
    case 220u: goto L_08AE0BB8;
    case 221u: goto L_08AE0BC0;
    case 222u: goto L_08AE0BD0;
    case 223u: goto L_08AE0BDC;
    case 224u: goto L_08AE0BE4;
    case 225u: goto L_08AE0BF4;
    case 226u: goto L_08AE0C14;
    case 227u: goto L_08AE0C1C;
    case 228u: goto L_08AE0C2C;
    case 229u: goto L_08AE0C4C;
    case 230u: goto L_08AE0C54;
    case 231u: goto L_08AE0C64;
    case 232u: goto L_08AE0C84;
    case 233u: goto L_08AE0C8C;
    case 234u: goto L_08AE0C9C;
    case 235u: goto L_08AE0CBC;
    case 236u: goto L_08AE0CC4;
    case 237u: goto L_08AE0CD4;
    case 238u: goto L_08AE0CDC;
    case 239u: goto L_08AE0CE8;
    case 240u: goto L_08AE0D00;
    case 241u: goto L_08AE0D08;
    case 242u: goto L_08AE0D14;
    case 243u: goto L_08AE0D1C;
    case 244u: goto L_08AE0D34;
    case 245u: goto L_08AE0D3C;
    case 246u: goto L_08AE0D48;
    case 247u: goto L_08AE0D50;
    case 248u: goto L_08AE0D58;
    case 249u: goto L_08AE0D64;
    case 250u: goto L_08AE0D70;
    case 251u: goto L_08AE0D7C;
    case 252u: goto L_08AE0D84;
    case 253u: goto L_08AE0D90;
    case 254u: goto L_08AE0D9C;
    case 255u: goto L_08AE0DA4;
    case 256u: goto L_08AE0DBC;
    case 257u: goto L_08AE0DC8;
    case 258u: goto L_08AE0DCC;
    case 259u: goto L_08AE0DD4;
    case 260u: goto L_08AE0DDC;
    case 261u: goto L_08AE0DE8;
    case 262u: goto L_08AE0DF0;
    case 263u: goto L_08AE0E00;
    case 264u: goto L_08AE0E0C;
    case 265u: goto L_08AE0E14;
    case 266u: goto L_08AE0E24;
    case 267u: goto L_08AE0E2C;
    case 268u: goto L_08AE0E34;
    case 269u: goto L_08AE0E40;
    case 270u: goto L_08AE0E50;
    case 271u: goto L_08AE0E58;
    case 272u: goto L_08AE0E64;
    case 273u: goto L_08AE0E6C;
    case 274u: goto L_08AE0E80;
    case 275u: goto L_08AE0E90;
    case 276u: goto L_08AE0E94;
    case 277u: goto L_08AE0E9C;
    case 278u: goto L_08AE0EA8;
    case 279u: goto L_08AE0EB0;
    case 280u: goto L_08AE0EC0;
    case 281u: goto L_08AE0EC8;
    case 282u: goto L_08AE0ED0;
    case 283u: goto L_08AE0EDC;
    case 284u: goto L_08AE0EEC;
    case 285u: goto L_08AE0EF0;
    case 286u: goto L_08AE0F00;
    case 287u: goto L_08AE0F20;
    case 288u: goto L_08AE0F2C;
    case 289u: goto L_08AE0F38;
    case 290u: goto L_08AE0F44;
    case 291u: goto L_08AE0F4C;
    case 292u: goto L_08AE0F54;
    case 293u: goto L_08AE0F5C;
    case 294u: goto L_08AE0F68;
    case 295u: goto L_08AE0F70;
    case 296u: goto L_08AE0FA0;
    case 297u: goto L_08AE0FA8;
    case 298u: goto L_08AE0FB8;
    case 299u: goto L_08AE0FC4;
    case 300u: goto L_08AE0FD0;
    case 301u: goto L_08AE0FD8;
    case 302u: goto L_08AE0FE8;
    case 303u: goto L_08AE1008;
    case 304u: goto L_08AE1010;
    case 305u: goto L_08AE1020;
    case 306u: goto L_08AE1040;
    case 307u: goto L_08AE1048;
    case 308u: goto L_08AE1058;
    case 309u: goto L_08AE1078;
    case 310u: goto L_08AE1080;
    case 311u: goto L_08AE1088;
    case 312u: goto L_08AE1090;
    case 313u: goto L_08AE10A0;
    case 314u: goto L_08AE10C0;
    case 315u: goto L_08AE10C8;
    case 316u: goto L_08AE10D8;
    case 317u: goto L_08AE10F8;
    case 318u: goto L_08AE1100;
    case 319u: goto L_08AE1110;
    case 320u: goto L_08AE1130;
    case 321u: goto L_08AE1138;
    case 322u: goto L_08AE1144;
    case 323u: goto L_08AE115C;
    case 324u: goto L_08AE1164;
    case 325u: goto L_08AE1170;
    case 326u: goto L_08AE1178;
    case 327u: goto L_08AE1190;
    case 328u: goto L_08AE1198;
    case 329u: goto L_08AE11A4;
    case 330u: goto L_08AE11AC;
    case 331u: goto L_08AE11B4;
    case 332u: goto L_08AE11C0;
    case 333u: goto L_08AE11CC;
    case 334u: goto L_08AE11D8;
    case 335u: goto L_08AE11E0;
    case 336u: goto L_08AE11EC;
    case 337u: goto L_08AE11F8;
    case 338u: goto L_08AE1200;
    case 339u: goto L_08AE1218;
    case 340u: goto L_08AE1224;
    case 341u: goto L_08AE1228;
    case 342u: goto L_08AE1230;
    case 343u: goto L_08AE1238;
    case 344u: goto L_08AE1244;
    case 345u: goto L_08AE124C;
    case 346u: goto L_08AE1254;
    case 347u: goto L_08AE1260;
    case 348u: goto L_08AE1268;
    case 349u: goto L_08AE1278;
    case 350u: goto L_08AE1280;
    case 351u: goto L_08AE1288;
    case 352u: goto L_08AE1294;
    case 353u: goto L_08AE12A4;
    case 354u: goto L_08AE12AC;
    case 355u: goto L_08AE12B8;
    case 356u: goto L_08AE12C0;
    case 357u: goto L_08AE12C8;
    case 358u: goto L_08AE12D4;
    case 359u: goto L_08AE12DC;
    case 360u: goto L_08AE12EC;
    case 361u: goto L_08AE12F4;
    case 362u: goto L_08AE12FC;
    case 363u: goto L_08AE1308;
    case 364u: goto L_08AE1320;
    case 365u: goto L_08AE1324;
    case 366u: goto L_08AE1334;
    case 367u: goto L_08AE1358;
    case 368u: goto L_08AE1360;
    case 369u: goto L_08AE1364;
    case 370u: goto L_08AE136C;
    case 371u: goto L_08AE137C;
    case 372u: goto L_08AE1384;
    case 373u: goto L_08AE1388;
    case 374u: goto L_08AE1390;
    case 375u: goto L_08AE13A0;
    case 376u: goto L_08AE13AC;
    case 377u: goto L_08AE13B4;
    case 378u: goto L_08AE13C8;
    case 379u: goto L_08AE13D0;
    case 380u: goto L_08AE13D4;
    case 381u: goto L_08AE13E0;
    case 382u: goto L_08AE13EC;
    case 383u: goto L_08AE13F0;
    case 384u: goto L_08AE13F8;
    case 385u: goto L_08AE1404;
    case 386u: goto L_08AE1408;
    case 387u: goto L_08AE1420;
    case 388u: goto L_08AE1444;
    case 389u: goto L_08AE1450;
    case 390u: goto L_08AE145C;
    case 391u: goto L_08AE1468;
    case 392u: goto L_08AE1470;
    case 393u: goto L_08AE1478;
    case 394u: goto L_08AE1480;
    case 395u: goto L_08AE1490;
    case 396u: goto L_08AE1498;
    case 397u: goto L_08AE14B8;
    case 398u: goto L_08AE14C0;
    case 399u: goto L_08AE14CC;
    case 400u: goto L_08AE14D4;
    case 401u: goto L_08AE1504;
    case 402u: goto L_08AE150C;
    case 403u: goto L_08AE151C;
    case 404u: goto L_08AE1528;
    case 405u: goto L_08AE1530;
    case 406u: goto L_08AE1540;
    case 407u: goto L_08AE1560;
    case 408u: goto L_08AE1568;
    case 409u: goto L_08AE1578;
    case 410u: goto L_08AE1598;
    case 411u: goto L_08AE15A0;
    case 412u: goto L_08AE15B0;
    case 413u: goto L_08AE15D0;
    case 414u: goto L_08AE15D8;
    case 415u: goto L_08AE15E8;
    case 416u: goto L_08AE15F0;
    case 417u: goto L_08AE15FC;
    case 418u: goto L_08AE1614;
    case 419u: goto L_08AE161C;
    case 420u: goto L_08AE1628;
    case 421u: goto L_08AE1630;
    case 422u: goto L_08AE1648;
    case 423u: goto L_08AE1650;
    case 424u: goto L_08AE165C;
    case 425u: goto L_08AE1664;
    case 426u: goto L_08AE166C;
    case 427u: goto L_08AE1678;
    case 428u: goto L_08AE1684;
    case 429u: goto L_08AE1690;
    case 430u: goto L_08AE1698;
    case 431u: goto L_08AE16A4;
    case 432u: goto L_08AE16B0;
    case 433u: goto L_08AE16B8;
    case 434u: goto L_08AE16D0;
    case 435u: goto L_08AE16DC;
    case 436u: goto L_08AE16E0;
    case 437u: goto L_08AE16E8;
    case 438u: goto L_08AE16F0;
    case 439u: goto L_08AE16FC;
    case 440u: goto L_08AE1704;
    case 441u: goto L_08AE1724;
    case 442u: goto L_08AE1730;
    case 443u: goto L_08AE1738;
    case 444u: goto L_08AE1748;
    case 445u: goto L_08AE1750;
    case 446u: goto L_08AE1758;
    case 447u: goto L_08AE1764;
    case 448u: goto L_08AE1774;
    case 449u: goto L_08AE177C;
    case 450u: goto L_08AE1788;
    case 451u: goto L_08AE1790;
    case 452u: goto L_08AE17A0;
    case 453u: goto L_08AE17AC;
    case 454u: goto L_08AE17BC;
    case 455u: goto L_08AE17C4;
    case 456u: goto L_08AE17C8;
    case 457u: goto L_08AE17D0;
    case 458u: goto L_08AE17D8;
    case 459u: goto L_08AE17E8;
    case 460u: goto L_08AE17F4;
    case 461u: goto L_08AE17F8;
    case 462u: goto L_08AE1808;
    case 463u: goto L_08AE1814;
    case 464u: goto L_08AE181C;
    case 465u: goto L_08AE182C;
    case 466u: goto L_08AE1834;
    case 467u: goto L_08AE183C;
    case 468u: goto L_08AE1848;
    case 469u: goto L_08AE1858;
    case 470u: goto L_08AE185C;
    case 471u: goto L_08AE1870;
    case 472u: goto L_08AE1884;
    case 473u: goto L_08AE1898;
    case 474u: goto L_08AE18A0;
    case 475u: goto L_08AE18B4;
    case 476u: goto L_08AE18BC;
    case 477u: goto L_08AE18D0;
    case 478u: goto L_08AE18E4;
    case 479u: goto L_08AE18F0;
    case 480u: goto L_08AE18F8;
    case 481u: goto L_08AE1900;
    case 482u: goto L_08AE190C;
    case 483u: goto L_08AE1914;
    case 484u: goto L_08AE191C;
    case 485u: goto L_08AE1934;
    case 486u: goto L_08AE1940;
    case 487u: goto L_08AE1944;
    case 488u: goto L_08AE1954;
    case 489u: goto L_08AE198C;
    case 490u: goto L_08AE1998;
    case 491u: goto L_08AE19AC;
    case 492u: goto L_08AE19B8;
    case 493u: goto L_08AE19D0;
    case 494u: goto L_08AE19E4;
    case 495u: goto L_08AE1A04;
    case 496u: goto L_08AE1A0C;
    case 497u: goto L_08AE1A20;
    case 498u: goto L_08AE1A38;
    case 499u: goto L_08AE1A40;
    case 500u: goto L_08AE1A4C;
    case 501u: goto L_08AE1A54;
    case 502u: goto L_08AE1A5C;
    case 503u: goto L_08AE1A70;
    case 504u: goto L_08AE1A7C;
    case 505u: goto L_08AE1A84;
    case 506u: goto L_08AE1A8C;
    case 507u: goto L_08AE1A94;
    case 508u: goto L_08AE1A9C;
    case 509u: goto L_08AE1AA4;
    case 510u: goto L_08AE1AB0;
    case 511u: goto L_08AE1AB4;
    case 512u: goto L_08AE1ACC;
    case 513u: goto L_08AE1AD4;
    case 514u: goto L_08AE1ADC;
    case 515u: goto L_08AE1AE4;
    case 516u: goto L_08AE1AF8;
    case 517u: goto L_08AE1B00;
    case 518u: goto L_08AE1B0C;
    case 519u: goto L_08AE1B14;
    case 520u: goto L_08AE1B1C;
    case 521u: goto L_08AE1B30;
    case 522u: goto L_08AE1B4C;
    case 523u: goto L_08AE1B54;
    case 524u: goto L_08AE1B5C;
    case 525u: goto L_08AE1B64;
    case 526u: goto L_08AE1B78;
    case 527u: goto L_08AE1B7C;
    case 528u: goto L_08AE1B8C;
    case 529u: goto L_08AE1BA8;
    case 530u: goto L_08AE1BBC;
    case 531u: goto L_08AE1BD8;
    case 532u: goto L_08AE1BEC;
    case 533u: goto L_08AE1C00;
    case 534u: goto L_08AE1C20;
    case 535u: goto L_08AE1C28;
    case 536u: goto L_08AE1C3C;
    case 537u: goto L_08AE1C4C;
    case 538u: goto L_08AE1C58;
    case 539u: goto L_08AE1C64;
    case 540u: goto L_08AE1C68;
    case 541u: goto L_08AE1C74;
    case 542u: goto L_08AE1C7C;
    case 543u: goto L_08AE1C90;
    case 544u: goto L_08AE1CA8;
    case 545u: goto L_08AE1CB0;
    case 546u: goto L_08AE1CB8;
    case 547u: goto L_08AE1CCC;
    case 548u: goto L_08AE1CD4;
    case 549u: goto L_08AE1D30;
    case 550u: goto L_08AE1D38;
    case 551u: goto L_08AE1D64;
    case 552u: goto L_08AE1D68;
    case 553u: goto L_08AE1D74;
    case 554u: goto L_08AE1D90;
    case 555u: goto L_08AE1DB4;
    case 556u: goto L_08AE1DC0;
    case 557u: goto L_08AE1DC8;
    case 558u: goto L_08AE1DDC;
    case 559u: goto L_08AE1DE4;
    case 560u: goto L_08AE1DF4;
    case 561u: goto L_08AE1DFC;
    case 562u: goto L_08AE1E00;
    case 563u: goto L_08AE1E08;
    case 564u: goto L_08AE1E10;
    case 565u: goto L_08AE1E24;
    case 566u: goto L_08AE1E34;
    case 567u: goto L_08AE1E40;
    case 568u: goto L_08AE1E44;
    case 569u: goto L_08AE1E74;
    case 570u: goto L_08AE1E80;
    case 571u: goto L_08AE1E84;
    case 572u: goto L_08AE1E94;
    case 573u: goto L_08AE1E98;
    case 574u: goto L_08AE1EA8;
    case 575u: goto L_08AE1EB8;
    case 576u: goto L_08AE1EC0;
    case 577u: goto L_08AE1EC8;
    case 578u: goto L_08AE1ED0;
    case 579u: goto L_08AE1EE8;
    case 580u: goto L_08AE1EF0;
    case 581u: goto L_08AE1F30;
    case 582u: goto L_08AE1F40;
    case 583u: goto L_08AE1F4C;
    case 584u: goto L_08AE1F50;
    case 585u: goto L_08AE1F58;
    case 586u: goto L_08AE1F60;
    case 587u: goto L_08AE1F78;
    case 588u: goto L_08AE1F8C;
    case 589u: goto L_08AE1F94;
    case 590u: goto L_08AE1F9C;
    case 591u: goto L_08AE1FA4;
    case 592u: goto L_08AE1FB8;
    case 593u: goto L_08AE1FC0;
    case 594u: goto L_08AE1FE0;
    case 595u: goto L_08AE1FE8;
    case 596u: goto L_08AE1FF0;
    case 597u: goto L_08AE2000;
    case 598u: goto L_08AE2008;
    case 599u: goto L_08AE201C;
    case 600u: goto L_08AE2024;
    case 601u: goto L_08AE2034;
    case 602u: goto L_08AE203C;
    case 603u: goto L_08AE2040;
    case 604u: goto L_08AE2048;
    case 605u: goto L_08AE2050;
    case 606u: goto L_08AE2064;
    case 607u: goto L_08AE2074;
    case 608u: goto L_08AE2080;
    case 609u: goto L_08AE2084;
    case 610u: goto L_08AE20B4;
    case 611u: goto L_08AE20C0;
    case 612u: goto L_08AE20C4;
    case 613u: goto L_08AE20D4;
    case 614u: goto L_08AE20D8;
    case 615u: goto L_08AE20E8;
    case 616u: goto L_08AE20F8;
    case 617u: goto L_08AE2100;
    case 618u: goto L_08AE2108;
    case 619u: goto L_08AE2110;
    case 620u: goto L_08AE2128;
    case 621u: goto L_08AE2130;
    case 622u: goto L_08AE2170;
    case 623u: goto L_08AE2180;
    case 624u: goto L_08AE218C;
    case 625u: goto L_08AE2190;
    case 626u: goto L_08AE2198;
    case 627u: goto L_08AE21A0;
    case 628u: goto L_08AE21B4;
    case 629u: goto L_08AE21BC;
    case 630u: goto L_08AE21C4;
    case 631u: goto L_08AE21D8;
    case 632u: goto L_08AE21E0;
    case 633u: goto L_08AE2200;
    case 634u: goto L_08AE2208;
    case 635u: goto L_08AE220C;
    case 636u: goto L_08AE2224;
    case 637u: goto L_08AE224C;
    case 638u: goto L_08AE225C;
    case 639u: goto L_08AE2264;
    case 640u: goto L_08AE2278;
    case 641u: goto L_08AE2280;
    case 642u: goto L_08AE2290;
    case 643u: goto L_08AE2298;
    case 644u: goto L_08AE22A0;
    case 645u: goto L_08AE22A8;
    case 646u: goto L_08AE22B4;
    case 647u: goto L_08AE22C8;
    case 648u: goto L_08AE22DC;
    case 649u: goto L_08AE22E8;
    case 650u: goto L_08AE22EC;
    case 651u: goto L_08AE22F8;
    case 652u: goto L_08AE2308;
    case 653u: goto L_08AE230C;
    case 654u: goto L_08AE231C;
    case 655u: goto L_08AE2324;
    case 656u: goto L_08AE2328;
    case 657u: goto L_08AE2338;
    case 658u: goto L_08AE2348;
    case 659u: goto L_08AE2350;
    case 660u: goto L_08AE2358;
    case 661u: goto L_08AE2360;
    case 662u: goto L_08AE2378;
    case 663u: goto L_08AE2380;
    case 664u: goto L_08AE23C0;
    case 665u: goto L_08AE23D0;
    case 666u: goto L_08AE23DC;
    case 667u: goto L_08AE23E0;
    case 668u: goto L_08AE23E8;
    case 669u: goto L_08AE23F0;
    case 670u: goto L_08AE2404;
    case 671u: goto L_08AE240C;
    case 672u: goto L_08AE2414;
    case 673u: goto L_08AE2428;
    case 674u: goto L_08AE2430;
    case 675u: goto L_08AE2450;
    case 676u: goto L_08AE2458;
    case 677u: goto L_08AE2460;
    case 678u: goto L_08AE2470;
    case 679u: goto L_08AE2478;
    case 680u: goto L_08AE248C;
    case 681u: goto L_08AE2494;
    case 682u: goto L_08AE24A4;
    case 683u: goto L_08AE24AC;
    case 684u: goto L_08AE24B4;
    case 685u: goto L_08AE24BC;
    case 686u: goto L_08AE24C8;
    case 687u: goto L_08AE24DC;
    case 688u: goto L_08AE24F0;
    case 689u: goto L_08AE24FC;
    case 690u: goto L_08AE2500;
    case 691u: goto L_08AE250C;
    case 692u: goto L_08AE251C;
    case 693u: goto L_08AE2520;
    case 694u: goto L_08AE2530;
    case 695u: goto L_08AE2538;
    case 696u: goto L_08AE253C;
    case 697u: goto L_08AE254C;
    case 698u: goto L_08AE255C;
    case 699u: goto L_08AE2564;
    case 700u: goto L_08AE256C;
    case 701u: goto L_08AE2574;
    case 702u: goto L_08AE258C;
    case 703u: goto L_08AE2594;
    case 704u: goto L_08AE25D4;
    case 705u: goto L_08AE25E4;
    case 706u: goto L_08AE25F0;
    case 707u: goto L_08AE25F4;
    case 708u: goto L_08AE25FC;
    case 709u: goto L_08AE2604;
    case 710u: goto L_08AE2618;
    case 711u: goto L_08AE2620;
    case 712u: goto L_08AE2628;
    case 713u: goto L_08AE263C;
    case 714u: goto L_08AE2644;
    case 715u: goto L_08AE2664;
    case 716u: goto L_08AE266C;
    case 717u: goto L_08AE2670;
    case 718u: goto L_08AE268C;
    case 719u: goto L_08AE26A0;
    case 720u: goto L_08AE26B4;
    case 721u: goto L_08AE26BC;
    case 722u: goto L_08AE26D0;
    case 723u: goto L_08AE26D8;
    case 724u: goto L_08AE2704;
    case 725u: goto L_08AE270C;
    case 726u: goto L_08AE2738;
    case 727u: goto L_08AE2748;
    case 728u: goto L_08AE2758;
    case 729u: goto L_08AE276C;
    case 730u: goto L_08AE2774;
    case 731u: goto L_08AE2788;
    case 732u: goto L_08AE2794;
    case 733u: goto L_08AE27AC;
    case 734u: goto L_08AE27B4;
    case 735u: goto L_08AE27BC;
    case 736u: goto L_08AE27E0;
    case 737u: goto L_08AE27E8;
    case 738u: goto L_08AE2800;
    case 739u: goto L_08AE2814;
    case 740u: goto L_08AE2828;
    case 741u: goto L_08AE283C;
    case 742u: goto L_08AE284C;
    case 743u: goto L_08AE2860;
    case 744u: goto L_08AE2874;
    case 745u: goto L_08AE287C;
    case 746u: goto L_08AE2884;
    case 747u: goto L_08AE288C;
    case 748u: goto L_08AE28A8;
    case 749u: goto L_08AE28B0;
    case 750u: goto L_08AE28C4;
    case 751u: goto L_08AE28D8;
    case 752u: goto L_08AE28EC;
    case 753u: goto L_08AE290C;
    case 754u: goto L_08AE2918;
    case 755u: goto L_08AE2924;
    case 756u: goto L_08AE2928;
    case 757u: goto L_08AE2930;
    case 758u: goto L_08AE2948;
    case 759u: goto L_08AE2958;
    case 760u: goto L_08AE2960;
    case 761u: goto L_08AE296C;
    case 762u: goto L_08AE2970;
    case 763u: goto L_08AE2988;
    case 764u: goto L_08AE29CC;
    case 765u: goto L_08AE29D4;
    case 766u: goto L_08AE29E0;
    case 767u: goto L_08AE29E8;
    case 768u: goto L_08AE29F0;
    case 769u: goto L_08AE29F8;
    case 770u: goto L_08AE2A00;
    case 771u: goto L_08AE2A14;
    case 772u: goto L_08AE2A1C;
    case 773u: goto L_08AE2A20;
    case 774u: goto L_08AE2A28;
    case 775u: goto L_08AE2A30;
    case 776u: goto L_08AE2A3C;
    case 777u: goto L_08AE2A40;
    case 778u: goto L_08AE2A44;
    case 779u: goto L_08AE2A4C;
    case 780u: goto L_08AE2A54;
    case 781u: goto L_08AE2A5C;
    case 782u: goto L_08AE2A68;
    case 783u: goto L_08AE2A70;
    case 784u: goto L_08AE2A94;
    case 785u: goto L_08AE2A9C;
    case 786u: goto L_08AE2AC0;
    case 787u: goto L_08AE2AD8;
    case 788u: goto L_08AE2AE0;
    case 789u: goto L_08AE2AF8;
    case 790u: goto L_08AE2B00;
    case 791u: goto L_08AE2B10;
    case 792u: goto L_08AE2B1C;
    case 793u: goto L_08AE2B54;
    case 794u: goto L_08AE2B64;
    case 795u: goto L_08AE2B6C;
    case 796u: goto L_08AE2B84;
    case 797u: goto L_08AE2B98;
    case 798u: goto L_08AE2BA8;
    case 799u: goto L_08AE2BAC;
    case 800u: goto L_08AE2BB4;
    case 801u: goto L_08AE2BBC;
    case 802u: goto L_08AE2BC4;
    case 803u: goto L_08AE2BCC;
    case 804u: goto L_08AE2BE0;
    case 805u: goto L_08AE2BE8;
    case 806u: goto L_08AE2BFC;
    case 807u: goto L_08AE2C04;
    case 808u: goto L_08AE2C18;
    case 809u: goto L_08AE2C54;
    case 810u: goto L_08AE2C68;
    case 811u: goto L_08AE2C7C;
    case 812u: goto L_08AE2C8C;
    case 813u: goto L_08AE2C94;
    case 814u: goto L_08AE2C9C;
    case 815u: goto L_08AE2CA0;
    case 816u: goto L_08AE2CC4;
    case 817u: goto L_08AE2CE0;
    case 818u: goto L_08AE2CEC;
    case 819u: goto L_08AE2CF8;
    case 820u: goto L_08AE2D04;
    case 821u: goto L_08AE2D0C;
    case 822u: goto L_08AE2D14;
    case 823u: goto L_08AE2D1C;
    case 824u: goto L_08AE2D24;
    case 825u: goto L_08AE2D30;
    case 826u: goto L_08AE2D3C;
    case 827u: goto L_08AE2D50;
    case 828u: goto L_08AE2D5C;
    case 829u: goto L_08AE2D64;
    case 830u: goto L_08AE2D78;
    case 831u: goto L_08AE2D80;
    case 832u: goto L_08AE2D88;
    case 833u: goto L_08AE2D9C;
    case 834u: goto L_08AE2DA4;
    case 835u: goto L_08AE2DB8;
    case 836u: goto L_08AE2DC0;
    case 837u: goto L_08AE2DD4;
    case 838u: goto L_08AE2DDC;
    case 839u: goto L_08AE2DE4;
    case 840u: goto L_08AE2DEC;
    case 841u: goto L_08AE2E00;
    case 842u: goto L_08AE2E08;
    case 843u: goto L_08AE2E10;
    case 844u: goto L_08AE2E24;
    case 845u: goto L_08AE2E28;
    case 846u: goto L_08AE2E30;
    case 847u: goto L_08AE2E38;
    case 848u: goto L_08AE2E40;
    case 849u: goto L_08AE2E4C;
    case 850u: goto L_08AE2E58;
    case 851u: goto L_08AE2E60;
    case 852u: goto L_08AE2E6C;
    case 853u: goto L_08AE2E78;
    case 854u: goto L_08AE2E80;
    case 855u: goto L_08AE2E94;
    case 856u: goto L_08AE2E9C;
    case 857u: goto L_08AE2EA4;
    case 858u: goto L_08AE2EB8;
    case 859u: goto L_08AE2EBC;
    case 860u: goto L_08AE2EC4;
    case 861u: goto L_08AE2EC8;
    case 862u: goto L_08AE2ED0;
    case 863u: goto L_08AE2EDC;
    case 864u: goto L_08AE2EE8;
    case 865u: goto L_08AE2EF0;
    case 866u: goto L_08AE2F04;
    case 867u: goto L_08AE2F0C;
    case 868u: goto L_08AE2F14;
    case 869u: goto L_08AE2F28;
    case 870u: goto L_08AE2F2C;
    case 871u: goto L_08AE2F34;
    case 872u: goto L_08AE2F3C;
    case 873u: goto L_08AE2F44;
    case 874u: goto L_08AE2F50;
    case 875u: goto L_08AE2F5C;
    case 876u: goto L_08AE2F70;
    case 877u: goto L_08AE2F7C;
    case 878u: goto L_08AE2F84;
    case 879u: goto L_08AE2F98;
    case 880u: goto L_08AE2FA0;
    case 881u: goto L_08AE2FA8;
    case 882u: goto L_08AE2FBC;
    case 883u: goto L_08AE2FC4;
    case 884u: goto L_08AE2FD8;
    case 885u: goto L_08AE2FE0;
    case 886u: goto L_08AE2FF4;
    case 887u: goto L_08AE2FFC;
    case 888u: goto L_08AE3004;
    case 889u: goto L_08AE300C;
    case 890u: goto L_08AE3020;
    case 891u: goto L_08AE3028;
    case 892u: goto L_08AE3030;
    case 893u: goto L_08AE3044;
    case 894u: goto L_08AE3048;
    case 895u: goto L_08AE3050;
    case 896u: goto L_08AE3058;
    case 897u: goto L_08AE3060;
    case 898u: goto L_08AE306C;
    case 899u: goto L_08AE3078;
    case 900u: goto L_08AE3080;
    case 901u: goto L_08AE3094;
    case 902u: goto L_08AE309C;
    case 903u: goto L_08AE30A4;
    case 904u: goto L_08AE30B8;
    case 905u: goto L_08AE30BC;
    case 906u: goto L_08AE30C4;
    case 907u: goto L_08AE30CC;
    case 908u: goto L_08AE30D4;
    case 909u: goto L_08AE30E8;
    case 910u: goto L_08AE30F0;
    case 911u: goto L_08AE30F8;
    case 912u: goto L_08AE310C;
    case 913u: goto L_08AE3110;
    case 914u: goto L_08AE3118;
    case 915u: goto L_08AE3120;
    case 916u: goto L_08AE3128;
    case 917u: goto L_08AE3130;
    case 918u: goto L_08AE3134;
    case 919u: goto L_08AE3144;
    case 920u: goto L_08AE3154;
    case 921u: goto L_08AE3188;
    case 922u: goto L_08AE3190;
    case 923u: goto L_08AE31C4;
    case 924u: goto L_08AE31CC;
    case 925u: goto L_08AE3200;
    case 926u: goto L_08AE3208;
    case 927u: goto L_08AE3240;
    case 928u: goto L_08AE3248;
    case 929u: goto L_08AE327C;
    case 930u: goto L_08AE3284;
    case 931u: goto L_08AE32B8;
    case 932u: goto L_08AE32C0;
    case 933u: goto L_08AE32F4;
    case 934u: goto L_08AE32FC;
    case 935u: goto L_08AE3334;
    case 936u: goto L_08AE333C;
    case 937u: goto L_08AE3370;
    case 938u: goto L_08AE3378;
    case 939u: goto L_08AE33AC;
    case 940u: goto L_08AE33B0;
    case 941u: goto L_08AE33B8;
    case 942u: goto L_08AE33EC;
    case 943u: goto L_08AE33FC;
    case 944u: goto L_08AE3404;
    case 945u: goto L_08AE3438;
    case 946u: goto L_08AE343C;
    case 947u: goto L_08AE3444;
    case 948u: goto L_08AE3458;
    case 949u: goto L_08AE3468;
    case 950u: goto L_08AE3478;
    case 951u: goto L_08AE3484;
    case 952u: goto L_08AE348C;
    case 953u: goto L_08AE34A0;
    case 954u: goto L_08AE34A8;
    case 955u: goto L_08AE34BC;
    case 956u: goto L_08AE34C4;
    case 957u: goto L_08AE34D8;
    case 958u: goto L_08AE34E0;
    case 959u: goto L_08AE34F4;
    case 960u: goto L_08AE34FC;
    case 961u: goto L_08AE3510;
    case 962u: goto L_08AE3518;
    case 963u: goto L_08AE352C;
    case 964u: goto L_08AE3534;
    case 965u: goto L_08AE3548;
    case 966u: goto L_08AE3550;
    case 967u: goto L_08AE3570;
    case 968u: goto L_08AE3578;
    case 969u: goto L_08AE358C;
    case 970u: goto L_08AE3594;
    case 971u: goto L_08AE35B4;
    case 972u: goto L_08AE35BC;
    case 973u: goto L_08AE35D0;
    case 974u: goto L_08AE35D8;
    case 975u: goto L_08AE35F8;
    case 976u: goto L_08AE3600;
    case 977u: goto L_08AE3608;
    case 978u: goto L_08AE361C;
    case 979u: goto L_08AE3624;
    case 980u: goto L_08AE3644;
    case 981u: goto L_08AE364C;
    case 982u: goto L_08AE3660;
    case 983u: goto L_08AE3668;
    case 984u: goto L_08AE3688;
    case 985u: goto L_08AE3690;
    case 986u: goto L_08AE36A4;
    case 987u: goto L_08AE36AC;
    case 988u: goto L_08AE36CC;
    case 989u: goto L_08AE36D4;
    case 990u: goto L_08AE36E8;
    case 991u: goto L_08AE36F0;
    case 992u: goto L_08AE3714;
    case 993u: goto L_08AE371C;
    case 994u: goto L_08AE3730;
    case 995u: goto L_08AE3738;
    case 996u: goto L_08AE3758;
    case 997u: goto L_08AE3760;
    case 998u: goto L_08AE3774;
    case 999u: goto L_08AE377C;
    case 1000u: goto L_08AE379C;
    case 1001u: goto L_08AE37A4;
    case 1002u: goto L_08AE37B8;
    case 1003u: goto L_08AE37C0;
    case 1004u: goto L_08AE37E0;
    case 1005u: goto L_08AE37E8;
    case 1006u: goto L_08AE37FC;
    case 1007u: goto L_08AE3804;
    case 1008u: goto L_08AE3824;
    case 1009u: goto L_08AE382C;
    case 1010u: goto L_08AE3840;
    case 1011u: goto L_08AE3848;
    case 1012u: goto L_08AE3868;
    case 1013u: goto L_08AE3870;
    case 1014u: goto L_08AE3884;
    case 1015u: goto L_08AE388C;
    case 1016u: goto L_08AE38A0;
    case 1017u: goto L_08AE38A8;
    case 1018u: goto L_08AE38BC;
    case 1019u: goto L_08AE38C4;
    case 1020u: goto L_08AE38D8;
    case 1021u: goto L_08AE38DC;
    case 1022u: goto L_08AE38E4;
    case 1023u: goto L_08AE38F4;
    case 1024u: goto L_08AE38FC;
    case 1025u: goto L_08AE390C;
    case 1026u: goto L_08AE3918;
    case 1027u: goto L_08AE3920;
    case 1028u: goto L_08AE3930;
    case 1029u: goto L_08AE3934;
    case 1030u: goto L_08AE3940;
    case 1031u: goto L_08AE3950;
    case 1032u: goto L_08AE3988;
    case 1033u: goto L_08AE3994;
    case 1034u: goto L_08AE39A0;
    case 1035u: goto L_08AE39A8;
    case 1036u: goto L_08AE39B0;
    case 1037u: goto L_08AE39B8;
    case 1038u: goto L_08AE39C0;
    case 1039u: goto L_08AE39C8;
    case 1040u: goto L_08AE39D8;
    case 1041u: goto L_08AE39E0;
    case 1042u: goto L_08AE39F0;
    case 1043u: goto L_08AE39F8;
    case 1044u: goto L_08AE3A00;
    case 1045u: goto L_08AE3A08;
    case 1046u: goto L_08AE3A10;
    case 1047u: goto L_08AE3A18;
    case 1048u: goto L_08AE3A44;
    case 1049u: goto L_08AE3A4C;
    case 1050u: goto L_08AE3A54;
    case 1051u: goto L_08AE3A5C;
    case 1052u: goto L_08AE3A80;
    case 1053u: goto L_08AE3A84;
    case 1054u: goto L_08AE3A90;
    case 1055u: goto L_08AE3A98;
    case 1056u: goto L_08AE3AAC;
    case 1057u: goto L_08AE3AB4;
    case 1058u: goto L_08AE3ABC;
    case 1059u: goto L_08AE3AD0;
    case 1060u: goto L_08AE3AE8;
    case 1061u: goto L_08AE3AF8;
    case 1062u: goto L_08AE3B00;
    case 1063u: goto L_08AE3B08;
    case 1064u: goto L_08AE3B14;
    case 1065u: goto L_08AE3B1C;
    case 1066u: goto L_08AE3B3C;
    case 1067u: goto L_08AE3B44;
    case 1068u: goto L_08AE3B58;
    case 1069u: goto L_08AE3B68;
    case 1070u: goto L_08AE3B70;
    case 1071u: goto L_08AE3B7C;
    case 1072u: goto L_08AE3B84;
    case 1073u: goto L_08AE3BA4;
    case 1074u: goto L_08AE3BAC;
    case 1075u: goto L_08AE3BC0;
    case 1076u: goto L_08AE3BCC;
    case 1077u: goto L_08AE3BD0;
    case 1078u: goto L_08AE3BDC;
    case 1079u: goto L_08AE3BE8;
    case 1080u: goto L_08AE3BF4;
    case 1081u: goto L_08AE3BFC;
    case 1082u: goto L_08AE3C08;
    case 1083u: goto L_08AE3C10;
    case 1084u: goto L_08AE3C18;
    case 1085u: goto L_08AE3C20;
    case 1086u: goto L_08AE3C30;
    case 1087u: goto L_08AE3C38;
    case 1088u: goto L_08AE3C4C;
    case 1089u: goto L_08AE3C58;
    case 1090u: goto L_08AE3C60;
    case 1091u: goto L_08AE3C74;
    case 1092u: goto L_08AE3C7C;
    case 1093u: goto L_08AE3C84;
    case 1094u: goto L_08AE3C98;
    case 1095u: goto L_08AE3CA0;
    case 1096u: goto L_08AE3CB4;
    case 1097u: goto L_08AE3CBC;
    case 1098u: goto L_08AE3CD0;
    case 1099u: goto L_08AE3CD8;
    case 1100u: goto L_08AE3CEC;
    case 1101u: goto L_08AE3D10;
    case 1102u: goto L_08AE3D18;
    case 1103u: goto L_08AE3D2C;
    case 1104u: goto L_08AE3D38;
    case 1105u: goto L_08AE3D40;
    case 1106u: goto L_08AE3D54;
    case 1107u: goto L_08AE3D5C;
    case 1108u: goto L_08AE3D64;
    case 1109u: goto L_08AE3D78;
    case 1110u: goto L_08AE3D80;
    case 1111u: goto L_08AE3DA0;
    case 1112u: goto L_08AE3DA8;
    case 1113u: goto L_08AE3DC8;
    case 1114u: goto L_08AE3DD0;
    case 1115u: goto L_08AE3DF0;
    case 1116u: goto L_08AE3E0C;
    case 1117u: goto L_08AE3E14;
    case 1118u: goto L_08AE3E24;
    case 1119u: goto L_08AE3E30;
    case 1120u: goto L_08AE3E38;
    case 1121u: goto L_08AE3E44;
    case 1122u: goto L_08AE3E4C;
    case 1123u: goto L_08AE3E54;
    case 1124u: goto L_08AE3E5C;
    case 1125u: goto L_08AE3E74;
    case 1126u: goto L_08AE3E88;
    case 1127u: goto L_08AE3E90;
    case 1128u: goto L_08AE3EB0;
    case 1129u: goto L_08AE3EB8;
    case 1130u: goto L_08AE3ED8;
    case 1131u: goto L_08AE3EE0;
    case 1132u: goto L_08AE3F00;
    case 1133u: goto L_08AE3F1C;
    case 1134u: goto L_08AE3F24;
    case 1135u: goto L_08AE3F34;
    case 1136u: goto L_08AE3F3C;
    case 1137u: goto L_08AE3F44;
    case 1138u: goto L_08AE3F50;
    case 1139u: goto L_08AE3F58;
    case 1140u: goto L_08AE3F60;
    case 1141u: goto L_08AE3F68;
    case 1142u: goto L_08AE3F8C;
    case 1143u: goto L_08AE3FA0;
    case 1144u: goto L_08AE3FA8;
    case 1145u: goto L_08AE3FB0;
    case 1146u: goto L_08AE3FBC;
    case 1147u: goto L_08AE3FC8;
    case 1148u: goto L_08AE3FD0;
    case 1149u: goto L_08AE3FE4;
    case 1150u: goto L_08AE3FEC;
    case 1151u: goto L_08AE3FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE0004:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08AE00AC;
    }
    goto L_08AE0010;
L_08AE0010:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0020;
      }
      goto L_08AE0018;
    }
L_08AE0018:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0020;
    }
L_08AE0020:
    ctx.set_gpr(31, 0x08AE0028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE0028u) goto L_08AE0028;
    return;
L_08AE0028:
    ctx.set_gpr(31, 0x08AE0030u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0030u) goto L_08AE0030;
    return;
L_08AE0030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AE0048u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE0048u) goto L_08AE0048;
    return;
L_08AE0048:
    ctx.set_gpr(31, 0x08AE0050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE0050u) goto L_08AE0050;
    return;
L_08AE0050:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE0070u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE0070u) goto L_08AE0070;
    return;
L_08AE0070:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE0088u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE0088u) goto L_08AE0088;
    return;
L_08AE0088:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(427));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08AE009Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE009Cu) goto L_08AE009C;
    return;
L_08AE009C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE0488;
      }
      goto L_08AE00AC;
    }
L_08AE00AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE01AC;
      }
      goto L_08AE00B4;
    }
L_08AE00B4:
    ctx.set_gpr(31, 0x08AE00BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE00BCu) goto L_08AE00BC;
    return;
L_08AE00BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE00C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE00C8u) goto L_08AE00C8;
    return;
L_08AE00C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0290;
      }
      goto L_08AE00D0;
    }
L_08AE00D0:
    ctx.set_gpr(31, 0x08AE00D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE00D8u) goto L_08AE00D8;
    return;
L_08AE00D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE00ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE00ECu) goto L_08AE00EC;
    return;
L_08AE00EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE00FCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE00FCu) goto L_08AE00FC;
    return;
L_08AE00FC:
    ctx.set_gpr(31, 0x08AE0104u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0104u) goto L_08AE0104;
    return;
L_08AE0104:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08AE0110u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0110u) goto L_08AE0110;
    return;
L_08AE0110:
    ctx.set_gpr(31, 0x08AE0118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0118u) goto L_08AE0118;
    return;
L_08AE0118:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE012Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE012Cu) goto L_08AE012C;
    return;
L_08AE012C:
    ctx.set_gpr(31, 0x08AE0134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0134u) goto L_08AE0134;
    return;
L_08AE0134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE0154u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE0154u) goto L_08AE0154;
    return;
L_08AE0154:
    ctx.set_gpr(31, 0x08AE015Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE015Cu) goto L_08AE015C;
    return;
L_08AE015C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE017Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE017Cu) goto L_08AE017C;
    return;
L_08AE017C:
    ctx.set_gpr(31, 0x08AE0184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0184u) goto L_08AE0184;
    return;
L_08AE0184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AE019Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE019Cu) goto L_08AE019C;
    return;
L_08AE019C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
      if (branch_taken) {
          goto L_08AE0290;
      }
      goto L_08AE01AC;
    }
L_08AE01AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0290;
      }
      goto L_08AE01B4;
    }
L_08AE01B4:
    ctx.set_gpr(31, 0x08AE01BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE01BCu) goto L_08AE01BC;
    return;
L_08AE01BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE01C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE01C8u) goto L_08AE01C8;
    return;
L_08AE01C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0290;
      }
      goto L_08AE01D0;
    }
L_08AE01D0:
    ctx.set_gpr(31, 0x08AE01D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01D8u) goto L_08AE01D8;
    return;
L_08AE01D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE01ECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01ECu) goto L_08AE01EC;
    return;
L_08AE01EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE01FCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 711u, 0x08ADE65Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE01FCu) goto L_08AE01FC;
    return;
L_08AE01FC:
    ctx.set_gpr(31, 0x08AE0204u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE0204u) goto L_08AE0204;
    return;
L_08AE0204:
    ctx.set_gpr(31, 0x08AE020Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE020Cu) goto L_08AE020C;
    return;
L_08AE020C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08AE0218u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0218u) goto L_08AE0218;
    return;
L_08AE0218:
    ctx.set_gpr(31, 0x08AE0220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0220u) goto L_08AE0220;
    return;
L_08AE0220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE0234u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0234u) goto L_08AE0234;
    return;
L_08AE0234:
    ctx.set_gpr(31, 0x08AE023Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE023Cu) goto L_08AE023C;
    return;
L_08AE023C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE025Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE025Cu) goto L_08AE025C;
    return;
L_08AE025C:
    ctx.set_gpr(31, 0x08AE0264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0264u) goto L_08AE0264;
    return;
L_08AE0264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE0284u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE0284u) goto L_08AE0284;
    return;
L_08AE0284:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08AE0290;
L_08AE0290:
    ctx.set_gpr(31, 0x08AE0298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0298u) goto L_08AE0298;
    return;
L_08AE0298:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE02A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE02A4u) goto L_08AE02A4;
    return;
L_08AE02A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0488;
      }
      goto L_08AE02AC;
    }
L_08AE02AC:
    ctx.set_gpr(31, 0x08AE02B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE02B4u) goto L_08AE02B4;
    return;
L_08AE02B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE02C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE02C8u) goto L_08AE02C8;
    return;
L_08AE02C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE0488;
      }
      goto L_08AE02D8;
    }
L_08AE02D8:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
        goto L_08AE0318;
    }
    goto L_08AE02E0;
L_08AE02E0:
    ctx.set_gpr(31, 0x08AE02E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE02E8u) goto L_08AE02E8;
    return;
L_08AE02E8:
    ctx.set_gpr(31, 0x08AE02F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE02F0u) goto L_08AE02F0;
    return;
L_08AE02F0:
    ctx.set_gpr(31, 0x08AE02F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE02F8u) goto L_08AE02F8;
    return;
L_08AE02F8:
    ctx.set_gpr(31, 0x08AE0300u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE0300u) goto L_08AE0300;
    return;
L_08AE0300:
    ctx.set_gpr(31, 0x08AE0308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0308u) goto L_08AE0308;
    return;
L_08AE0308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0314u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0314u) goto L_08AE0314;
    return;
L_08AE0314:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08AE0318;
L_08AE0318:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0320;
    }
L_08AE0320:
    ctx.set_gpr(31, 0x08AE0328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0328u) goto L_08AE0328;
    return;
L_08AE0328:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0334u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE0334u) goto L_08AE0334;
    return;
L_08AE0334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0360;
      }
      goto L_08AE033C;
    }
L_08AE033C:
    ctx.set_gpr(31, 0x08AE0344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0344u) goto L_08AE0344;
    return;
L_08AE0344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0358u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0358u) goto L_08AE0358;
    return;
L_08AE0358:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE048C;
      }
      goto L_08AE0360;
    }
L_08AE0360:
    ctx.set_gpr(31, 0x08AE0368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0368u) goto L_08AE0368;
    return;
L_08AE0368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0374u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0374u) goto L_08AE0374;
    return;
L_08AE0374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0488;
      }
      goto L_08AE037C;
    }
L_08AE037C:
    ctx.set_gpr(31, 0x08AE0384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0384u) goto L_08AE0384;
    return;
L_08AE0384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0398u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0398u) goto L_08AE0398;
    return;
L_08AE0398:
    ctx.set_gpr(31, 0x08AE03A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE03A0u) goto L_08AE03A0;
    return;
L_08AE03A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AE03B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE03B4u) goto L_08AE03B4;
    return;
L_08AE03B4:
    ctx.set_gpr(31, 0x08AE03BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE03BCu) goto L_08AE03BC;
    return;
L_08AE03BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08AE03D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE03D0u) goto L_08AE03D0;
    return;
L_08AE03D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE03E0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE03E0u) goto L_08AE03E0;
    return;
L_08AE03E0:
    ctx.set_gpr(31, 0x08AE03E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE03E8u) goto L_08AE03E8;
    return;
L_08AE03E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08AE03F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE03F4u) goto L_08AE03F4;
    return;
L_08AE03F4:
    ctx.set_gpr(31, 0x08AE03FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE03FCu) goto L_08AE03FC;
    return;
L_08AE03FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE0410u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0410u) goto L_08AE0410;
    return;
L_08AE0410:
    ctx.set_gpr(31, 0x08AE0418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0418u) goto L_08AE0418;
    return;
L_08AE0418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE0438u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE0438u) goto L_08AE0438;
    return;
L_08AE0438:
    ctx.set_gpr(31, 0x08AE0440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0440u) goto L_08AE0440;
    return;
L_08AE0440:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE0460u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE0460u) goto L_08AE0460;
    return;
L_08AE0460:
    ctx.set_gpr(31, 0x08AE0468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0468u) goto L_08AE0468;
    return;
L_08AE0468:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AE0480u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE0480u) goto L_08AE0480;
    return;
L_08AE0480:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    goto L_08AE0488;
L_08AE0488:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE048C;
L_08AE048C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE049C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE0728;
      }
      goto L_08AE04BC;
    }
L_08AE04BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE06A0;
      }
      goto L_08AE04C8;
    }
L_08AE04C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE066C;
      }
      goto L_08AE04D4;
    }
L_08AE04D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE04E4;
      }
      goto L_08AE04DC;
    }
L_08AE04DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE07A8;
      }
      goto L_08AE04E4;
    }
L_08AE04E4:
    ctx.set_gpr(31, 0x08AE04ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE04ECu) goto L_08AE04EC;
    return;
L_08AE04EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE04F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE04F8u) goto L_08AE04F8;
    return;
L_08AE04F8:
    ctx.set_gpr(31, 0x08AE0500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0500u) goto L_08AE0500;
    return;
L_08AE0500:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0530u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE0530u) goto L_08AE0530;
    return;
L_08AE0530:
    ctx.set_gpr(31, 0x08AE0538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0538u) goto L_08AE0538;
    return;
L_08AE0538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0548u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0548u) goto L_08AE0548;
    return;
L_08AE0548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0554u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0554u) goto L_08AE0554;
    return;
L_08AE0554:
    ctx.set_gpr(31, 0x08AE055Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE055Cu) goto L_08AE055C;
    return;
L_08AE055C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE056Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE056Cu) goto L_08AE056C;
    return;
L_08AE056C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0578u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0578u) goto L_08AE0578;
    return;
L_08AE0578:
    ctx.set_gpr(31, 0x08AE0580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0580u) goto L_08AE0580;
    return;
L_08AE0580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0590u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0590u) goto L_08AE0590;
    return;
L_08AE0590:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6928));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE05B0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE05B0u) goto L_08AE05B0;
    return;
L_08AE05B0:
    ctx.set_gpr(31, 0x08AE05B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE05B8u) goto L_08AE05B8;
    return;
L_08AE05B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE05C8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE05C8u) goto L_08AE05C8;
    return;
L_08AE05C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6956));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE05E8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE05E8u) goto L_08AE05E8;
    return;
L_08AE05E8:
    ctx.set_gpr(31, 0x08AE05F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE05F0u) goto L_08AE05F0;
    return;
L_08AE05F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0600u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0600u) goto L_08AE0600;
    return;
L_08AE0600:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6984));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0620u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0620u) goto L_08AE0620;
    return;
L_08AE0620:
    ctx.set_gpr(31, 0x08AE0628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE0628u) goto L_08AE0628;
    return;
L_08AE0628:
    ctx.set_gpr(31, 0x08AE0630u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE0630u) goto L_08AE0630;
    return;
L_08AE0630:
    ctx.set_gpr(31, 0x08AE0638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE0638u) goto L_08AE0638;
    return;
L_08AE0638:
    ctx.set_gpr(31, 0x08AE0640u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AE0640u) goto L_08AE0640;
    return;
L_08AE0640:
    ctx.set_gpr(31, 0x08AE0648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0648u) goto L_08AE0648;
    return;
L_08AE0648:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0654u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE0654u) goto L_08AE0654;
    return;
L_08AE0654:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE066C;
    }
L_08AE066C:
    ctx.set_gpr(31, 0x08AE0674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0674u) goto L_08AE0674;
    return;
L_08AE0674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0680u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0680u) goto L_08AE0680;
    return;
L_08AE0680:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE0688;
    }
L_08AE0688:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE06A0;
    }
L_08AE06A0:
    ctx.set_gpr(31, 0x08AE06A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE06A8u) goto L_08AE06A8;
    return;
L_08AE06A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE06B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE06B4u) goto L_08AE06B4;
    return;
L_08AE06B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE06FC;
      }
      goto L_08AE06C0;
    }
L_08AE06C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08AE06D4;
    }
    goto L_08AE06CC;
L_08AE06CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE06D4;
    }
L_08AE06D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE06E8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE06E8u) goto L_08AE06E8;
    return;
L_08AE06E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE06F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE06F4u) goto L_08AE06F4;
    return;
L_08AE06F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE06FC;
    }
L_08AE06FC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE0714u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0714u) goto L_08AE0714;
    return;
L_08AE0714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0720u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE0720u) goto L_08AE0720;
    return;
L_08AE0720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE0728;
    }
L_08AE0728:
    ctx.set_gpr(31, 0x08AE0730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0730u) goto L_08AE0730;
    return;
L_08AE0730:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE073Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE073Cu) goto L_08AE073C;
    return;
L_08AE073C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE07A4;
      }
      goto L_08AE0744;
    }
L_08AE0744:
    ctx.set_gpr(31, 0x08AE074Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE074Cu) goto L_08AE074C;
    return;
L_08AE074C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE075Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE075Cu) goto L_08AE075C;
    return;
L_08AE075C:
    ctx.set_gpr(31, 0x08AE0764u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE0764u) goto L_08AE0764;
    return;
L_08AE0764:
    ctx.set_gpr(31, 0x08AE076Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE076Cu) goto L_08AE076C;
    return;
L_08AE076C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0778u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0778u) goto L_08AE0778;
    return;
L_08AE0778:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23096), 0u);
    ctx.set_gpr(31, 0x08AE0790u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0790u) goto L_08AE0790;
    return;
L_08AE0790:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE079Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE079Cu) goto L_08AE079C;
    return;
L_08AE079C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE07A8;
      }
      goto L_08AE07A4;
    }
L_08AE07A4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE07A8;
L_08AE07A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE07B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE0A40;
      }
      goto L_08AE07D8;
    }
L_08AE07D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE09B8;
      }
      goto L_08AE07E4;
    }
L_08AE07E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE0984;
      }
      goto L_08AE07F0;
    }
L_08AE07F0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0800;
      }
      goto L_08AE07F8;
    }
L_08AE07F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE0AC8;
      }
      goto L_08AE0800;
    }
L_08AE0800:
    ctx.set_gpr(31, 0x08AE0808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0808u) goto L_08AE0808;
    return;
L_08AE0808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AE0818u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32656)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0818u) goto L_08AE0818;
    return;
L_08AE0818:
    ctx.set_gpr(31, 0x08AE0820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE0820u) goto L_08AE0820;
    return;
L_08AE0820:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE0840u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE0840u) goto L_08AE0840;
    return;
L_08AE0840:
    ctx.set_gpr(31, 0x08AE0848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0848u) goto L_08AE0848;
    return;
L_08AE0848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0854u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE0854u) goto L_08AE0854;
    return;
L_08AE0854:
    ctx.set_gpr(31, 0x08AE085Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE085Cu) goto L_08AE085C;
    return;
L_08AE085C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AE088Cu);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE088Cu) goto L_08AE088C;
    return;
L_08AE088C:
    ctx.set_gpr(31, 0x08AE0894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0894u) goto L_08AE0894;
    return;
L_08AE0894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE08A4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE08A4u) goto L_08AE08A4;
    return;
L_08AE08A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE08B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE08B0u) goto L_08AE08B0;
    return;
L_08AE08B0:
    ctx.set_gpr(31, 0x08AE08B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE08B8u) goto L_08AE08B8;
    return;
L_08AE08B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE08C8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE08C8u) goto L_08AE08C8;
    return;
L_08AE08C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7004));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE08E8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE08E8u) goto L_08AE08E8;
    return;
L_08AE08E8:
    ctx.set_gpr(31, 0x08AE08F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE08F0u) goto L_08AE08F0;
    return;
L_08AE08F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0900u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0900u) goto L_08AE0900;
    return;
L_08AE0900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7032));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0920u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0920u) goto L_08AE0920;
    return;
L_08AE0920:
    ctx.set_gpr(31, 0x08AE0928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0928u) goto L_08AE0928;
    return;
L_08AE0928:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0938u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0938u) goto L_08AE0938;
    return;
L_08AE0938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7064));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0958u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0958u) goto L_08AE0958;
    return;
L_08AE0958:
    ctx.set_gpr(31, 0x08AE0960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0960u) goto L_08AE0960;
    return;
L_08AE0960:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE096Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE096Cu) goto L_08AE096C;
    return;
L_08AE096C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE0984;
    }
L_08AE0984:
    ctx.set_gpr(31, 0x08AE098Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE098Cu) goto L_08AE098C;
    return;
L_08AE098C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0998u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0998u) goto L_08AE0998;
    return;
L_08AE0998:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE09A0;
    }
L_08AE09A0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE09B8;
    }
L_08AE09B8:
    ctx.set_gpr(31, 0x08AE09C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE09C0u) goto L_08AE09C0;
    return;
L_08AE09C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE09CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE09CCu) goto L_08AE09CC;
    return;
L_08AE09CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE0A14;
      }
      goto L_08AE09D8;
    }
L_08AE09D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08AE09EC;
    }
    goto L_08AE09E4;
L_08AE09E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE09EC;
    }
L_08AE09EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE0A00u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A00u) goto L_08AE0A00;
    return;
L_08AE0A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0A0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A0Cu) goto L_08AE0A0C;
    return;
L_08AE0A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE0A14;
    }
L_08AE0A14:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE0A2Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A2Cu) goto L_08AE0A2C;
    return;
L_08AE0A2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0A38u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A38u) goto L_08AE0A38;
    return;
L_08AE0A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE0A40;
    }
L_08AE0A40:
    ctx.set_gpr(31, 0x08AE0A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A48u) goto L_08AE0A48;
    return;
L_08AE0A48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0A54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A54u) goto L_08AE0A54;
    return;
L_08AE0A54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0AC4;
      }
      goto L_08AE0A5C;
    }
L_08AE0A5C:
    ctx.set_gpr(31, 0x08AE0A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A64u) goto L_08AE0A64;
    return;
L_08AE0A64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0A74u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0A74u) goto L_08AE0A74;
    return;
L_08AE0A74:
    ctx.set_gpr(31, 0x08AE0A7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A7Cu) goto L_08AE0A7C;
    return;
L_08AE0A7C:
    ctx.set_gpr(31, 0x08AE0A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0A84u) goto L_08AE0A84;
    return;
L_08AE0A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0A90u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0A90u) goto L_08AE0A90;
    return;
L_08AE0A90:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092), 0u);
    ctx.set_gpr(31, 0x08AE0AA8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0AA8u) goto L_08AE0AA8;
    return;
L_08AE0AA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0AB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE0AB4u) goto L_08AE0AB4;
    return;
L_08AE0AB4:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23092), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE0AC8;
      }
      goto L_08AE0AC4;
    }
L_08AE0AC4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE0AC8;
L_08AE0AC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0AD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE0E50;
      }
      goto L_08AE0AF8;
    }
L_08AE0AF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE0DD4;
      }
      goto L_08AE0B04;
    }
L_08AE0B04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE0D34;
      }
      goto L_08AE0B10;
    }
L_08AE0B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE0D00;
      }
      goto L_08AE0B1C;
    }
L_08AE0B1C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0B2C;
      }
      goto L_08AE0B24;
    }
L_08AE0B24:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE0EF0;
      }
      goto L_08AE0B2C;
    }
L_08AE0B2C:
    ctx.set_gpr(31, 0x08AE0B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0B34u) goto L_08AE0B34;
    return;
L_08AE0B34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AE0B44u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32656)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B44u) goto L_08AE0B44;
    return;
L_08AE0B44:
    ctx.set_gpr(31, 0x08AE0B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B4Cu) goto L_08AE0B4C;
    return;
L_08AE0B4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE0B6Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE0B6Cu) goto L_08AE0B6C;
    return;
L_08AE0B6C:
    ctx.set_gpr(31, 0x08AE0B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B74u) goto L_08AE0B74;
    return;
L_08AE0B74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0B80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B80u) goto L_08AE0B80;
    return;
L_08AE0B80:
    ctx.set_gpr(31, 0x08AE0B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0B88u) goto L_08AE0B88;
    return;
L_08AE0B88:
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
    ctx.set_gpr(31, 0x08AE0BB8u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BB8u) goto L_08AE0BB8;
    return;
L_08AE0BB8:
    ctx.set_gpr(31, 0x08AE0BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BC0u) goto L_08AE0BC0;
    return;
L_08AE0BC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0BD0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0BD0u) goto L_08AE0BD0;
    return;
L_08AE0BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0BDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0BDCu) goto L_08AE0BDC;
    return;
L_08AE0BDC:
    ctx.set_gpr(31, 0x08AE0BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0BE4u) goto L_08AE0BE4;
    return;
L_08AE0BE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0BF4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0BF4u) goto L_08AE0BF4;
    return;
L_08AE0BF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7088));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0C14u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C14u) goto L_08AE0C14;
    return;
L_08AE0C14:
    ctx.set_gpr(31, 0x08AE0C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C1Cu) goto L_08AE0C1C;
    return;
L_08AE0C1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0C2Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0C2Cu) goto L_08AE0C2C;
    return;
L_08AE0C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7120));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0C4Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C4Cu) goto L_08AE0C4C;
    return;
L_08AE0C4C:
    ctx.set_gpr(31, 0x08AE0C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C54u) goto L_08AE0C54;
    return;
L_08AE0C54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0C64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0C64u) goto L_08AE0C64;
    return;
L_08AE0C64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7156));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0C84u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C84u) goto L_08AE0C84;
    return;
L_08AE0C84:
    ctx.set_gpr(31, 0x08AE0C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0C8Cu) goto L_08AE0C8C;
    return;
L_08AE0C8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0C9Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0C9Cu) goto L_08AE0C9C;
    return;
L_08AE0C9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7172));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0CBCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CBCu) goto L_08AE0CBC;
    return;
L_08AE0CBC:
    ctx.set_gpr(31, 0x08AE0CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CC4u) goto L_08AE0CC4;
    return;
L_08AE0CC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0CD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CD4u) goto L_08AE0CD4;
    return;
L_08AE0CD4:
    ctx.set_gpr(31, 0x08AE0CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CDCu) goto L_08AE0CDC;
    return;
L_08AE0CDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0CE8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE0CE8u) goto L_08AE0CE8;
    return;
L_08AE0CE8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0D00;
    }
L_08AE0D00:
    ctx.set_gpr(31, 0x08AE0D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D08u) goto L_08AE0D08;
    return;
L_08AE0D08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0D14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D14u) goto L_08AE0D14;
    return;
L_08AE0D14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0D1C;
    }
L_08AE0D1C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0D34;
    }
L_08AE0D34:
    ctx.set_gpr(31, 0x08AE0D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D3Cu) goto L_08AE0D3C;
    return;
L_08AE0D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0D48u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D48u) goto L_08AE0D48;
    return;
L_08AE0D48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0D50;
    }
L_08AE0D50:
    ctx.set_gpr(31, 0x08AE0D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D58u) goto L_08AE0D58;
    return;
L_08AE0D58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0D64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D64u) goto L_08AE0D64;
    return;
L_08AE0D64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE0DA4;
      }
      goto L_08AE0D70;
    }
L_08AE0D70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AE0D84;
    }
    goto L_08AE0D7C;
L_08AE0D7C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08AE0DCC;
      }
      goto L_08AE0D84;
    }
L_08AE0D84:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AE0D90u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D90u) goto L_08AE0D90;
    return;
L_08AE0D90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0D9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE0D9Cu) goto L_08AE0D9C;
    return;
L_08AE0D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0DC8;
      }
      goto L_08AE0DA4;
    }
L_08AE0DA4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE0DBCu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DBCu) goto L_08AE0DBC;
    return;
L_08AE0DBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0DC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DC8u) goto L_08AE0DC8;
    return;
L_08AE0DC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AE0DCC;
L_08AE0DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0DD4;
    }
L_08AE0DD4:
    ctx.set_gpr(31, 0x08AE0DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DDCu) goto L_08AE0DDC;
    return;
L_08AE0DDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0DE8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0DE8u) goto L_08AE0DE8;
    return;
L_08AE0DE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0DF0;
    }
L_08AE0DF0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE0E00u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E00u) goto L_08AE0E00;
    return;
L_08AE0E00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0E0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E0Cu) goto L_08AE0E0C;
    return;
L_08AE0E0C:
    ctx.set_gpr(31, 0x08AE0E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E14u) goto L_08AE0E14;
    return;
L_08AE0E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0E24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0E24u) goto L_08AE0E24;
    return;
L_08AE0E24:
    ctx.set_gpr(31, 0x08AE0E2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E2Cu) goto L_08AE0E2C;
    return;
L_08AE0E2C:
    ctx.set_gpr(31, 0x08AE0E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E34u) goto L_08AE0E34;
    return;
L_08AE0E34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0E40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0E40u) goto L_08AE0E40;
    return;
L_08AE0E40:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE0EF0;
      }
      goto L_08AE0E50;
    }
L_08AE0E50:
    ctx.set_gpr(31, 0x08AE0E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E58u) goto L_08AE0E58;
    return;
L_08AE0E58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0E64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E64u) goto L_08AE0E64;
    return;
L_08AE0E64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0EEC;
      }
      goto L_08AE0E6C;
    }
L_08AE0E6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(165)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
        goto L_08AE0E94;
    }
    goto L_08AE0E80;
L_08AE0E80:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AE0E90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1104u, 0x08A93DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E90u) goto L_08AE0E90;
    return;
L_08AE0E90:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_08AE0E94;
L_08AE0E94:
    ctx.set_gpr(31, 0x08AE0E9Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0E9Cu) goto L_08AE0E9C;
    return;
L_08AE0E9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0EA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EA8u) goto L_08AE0EA8;
    return;
L_08AE0EA8:
    ctx.set_gpr(31, 0x08AE0EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EB0u) goto L_08AE0EB0;
    return;
L_08AE0EB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0EC0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0EC0u) goto L_08AE0EC0;
    return;
L_08AE0EC0:
    ctx.set_gpr(31, 0x08AE0EC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE0EC8u) goto L_08AE0EC8;
    return;
L_08AE0EC8:
    ctx.set_gpr(31, 0x08AE0ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0ED0u) goto L_08AE0ED0;
    return;
L_08AE0ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0EDCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0EDCu) goto L_08AE0EDC;
    return;
L_08AE0EDC:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23088), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE0EF0;
      }
      goto L_08AE0EEC;
    }
L_08AE0EEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE0EF0;
L_08AE0EF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE0F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE12A4;
      }
      goto L_08AE0F20;
    }
L_08AE0F20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE1230;
      }
      goto L_08AE0F2C;
    }
L_08AE0F2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE1190;
      }
      goto L_08AE0F38;
    }
L_08AE0F38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE115C;
      }
      goto L_08AE0F44;
    }
L_08AE0F44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE0F54;
      }
      goto L_08AE0F4C;
    }
L_08AE0F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE1324;
      }
      goto L_08AE0F54;
    }
L_08AE0F54:
    ctx.set_gpr(31, 0x08AE0F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F5Cu) goto L_08AE0F5C;
    return;
L_08AE0F5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0F68u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F68u) goto L_08AE0F68;
    return;
L_08AE0F68:
    ctx.set_gpr(31, 0x08AE0F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0F70u) goto L_08AE0F70;
    return;
L_08AE0F70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(150));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0FA0u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FA0u) goto L_08AE0FA0;
    return;
L_08AE0FA0:
    ctx.set_gpr(31, 0x08AE0FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FA8u) goto L_08AE0FA8;
    return;
L_08AE0FA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0FB8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0FB8u) goto L_08AE0FB8;
    return;
L_08AE0FB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE0FC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0FC4u) goto L_08AE0FC4;
    return;
L_08AE0FC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(179)));
        goto L_08AE1080;
    }
    goto L_08AE0FD0;
L_08AE0FD0:
    ctx.set_gpr(31, 0x08AE0FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE0FD8u) goto L_08AE0FD8;
    return;
L_08AE0FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE0FE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE0FE8u) goto L_08AE0FE8;
    return;
L_08AE0FE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7192));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1008u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE1008u) goto L_08AE1008;
    return;
L_08AE1008:
    ctx.set_gpr(31, 0x08AE1010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1010u) goto L_08AE1010;
    return;
L_08AE1010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1020u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1020u) goto L_08AE1020;
    return;
L_08AE1020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7220));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1040u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE1040u) goto L_08AE1040;
    return;
L_08AE1040:
    ctx.set_gpr(31, 0x08AE1048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1048u) goto L_08AE1048;
    return;
L_08AE1048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1058u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1058u) goto L_08AE1058;
    return;
L_08AE1058:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6984));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1078u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE1078u) goto L_08AE1078;
    return;
L_08AE1078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1130;
      }
      goto L_08AE1080;
    }
L_08AE1080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1130;
      }
      goto L_08AE1088;
    }
L_08AE1088:
    ctx.set_gpr(31, 0x08AE1090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1090u) goto L_08AE1090;
    return;
L_08AE1090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE10A0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE10A0u) goto L_08AE10A0;
    return;
L_08AE10A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6928));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE10C0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE10C0u) goto L_08AE10C0;
    return;
L_08AE10C0:
    ctx.set_gpr(31, 0x08AE10C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE10C8u) goto L_08AE10C8;
    return;
L_08AE10C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE10D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE10D8u) goto L_08AE10D8;
    return;
L_08AE10D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6956));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE10F8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE10F8u) goto L_08AE10F8;
    return;
L_08AE10F8:
    ctx.set_gpr(31, 0x08AE1100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1100u) goto L_08AE1100;
    return;
L_08AE1100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1110u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1110u) goto L_08AE1110;
    return;
L_08AE1110:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6984));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1130u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE1130u) goto L_08AE1130;
    return;
L_08AE1130:
    ctx.set_gpr(31, 0x08AE1138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1138u) goto L_08AE1138;
    return;
L_08AE1138:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1144u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE1144u) goto L_08AE1144;
    return;
L_08AE1144:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE115C;
    }
L_08AE115C:
    ctx.set_gpr(31, 0x08AE1164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1164u) goto L_08AE1164;
    return;
L_08AE1164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1170u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1170u) goto L_08AE1170;
    return;
L_08AE1170:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE1178;
    }
L_08AE1178:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE1190;
    }
L_08AE1190:
    ctx.set_gpr(31, 0x08AE1198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1198u) goto L_08AE1198;
    return;
L_08AE1198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE11A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE11A4u) goto L_08AE11A4;
    return;
L_08AE11A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE11AC;
    }
L_08AE11AC:
    ctx.set_gpr(31, 0x08AE11B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE11B4u) goto L_08AE11B4;
    return;
L_08AE11B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE11C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE11C0u) goto L_08AE11C0;
    return;
L_08AE11C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE1200;
      }
      goto L_08AE11CC;
    }
L_08AE11CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AE11E0;
    }
    goto L_08AE11D8;
L_08AE11D8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08AE1228;
      }
      goto L_08AE11E0;
    }
L_08AE11E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AE11ECu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE11ECu) goto L_08AE11EC;
    return;
L_08AE11EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE11F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE11F8u) goto L_08AE11F8;
    return;
L_08AE11F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1224;
      }
      goto L_08AE1200;
    }
L_08AE1200:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE1218u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1218u) goto L_08AE1218;
    return;
L_08AE1218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1224u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE1224u) goto L_08AE1224;
    return;
L_08AE1224:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AE1228;
L_08AE1228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE1230;
    }
L_08AE1230:
    ctx.set_gpr(31, 0x08AE1238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1238u) goto L_08AE1238;
    return;
L_08AE1238:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1244u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1244u) goto L_08AE1244;
    return;
L_08AE1244:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE124C;
    }
L_08AE124C:
    ctx.set_gpr(31, 0x08AE1254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1254u) goto L_08AE1254;
    return;
L_08AE1254:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1260u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE1260u) goto L_08AE1260;
    return;
L_08AE1260:
    ctx.set_gpr(31, 0x08AE1268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1268u) goto L_08AE1268;
    return;
L_08AE1268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1278u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1278u) goto L_08AE1278;
    return;
L_08AE1278:
    ctx.set_gpr(31, 0x08AE1280u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE1280u) goto L_08AE1280;
    return;
L_08AE1280:
    ctx.set_gpr(31, 0x08AE1288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1288u) goto L_08AE1288;
    return;
L_08AE1288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1294u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1294u) goto L_08AE1294;
    return;
L_08AE1294:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1324;
      }
      goto L_08AE12A4;
    }
L_08AE12A4:
    ctx.set_gpr(31, 0x08AE12ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE12ACu) goto L_08AE12AC;
    return;
L_08AE12AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE12B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE12B8u) goto L_08AE12B8;
    return;
L_08AE12B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1320;
      }
      goto L_08AE12C0;
    }
L_08AE12C0:
    ctx.set_gpr(31, 0x08AE12C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE12C8u) goto L_08AE12C8;
    return;
L_08AE12C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE12D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE12D4u) goto L_08AE12D4;
    return;
L_08AE12D4:
    ctx.set_gpr(31, 0x08AE12DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE12DCu) goto L_08AE12DC;
    return;
L_08AE12DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE12ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE12ECu) goto L_08AE12EC;
    return;
L_08AE12EC:
    ctx.set_gpr(31, 0x08AE12F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE12F4u) goto L_08AE12F4;
    return;
L_08AE12F4:
    ctx.set_gpr(31, 0x08AE12FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE12FCu) goto L_08AE12FC;
    return;
L_08AE12FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1308u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1308u) goto L_08AE1308;
    return;
L_08AE1308:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23084), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1324;
      }
      goto L_08AE1320;
    }
L_08AE1320:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE1324;
L_08AE1324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE1358u);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AE1358u) goto L_08AE1358;
    return;
L_08AE1358:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AE1408;
    }
    goto L_08AE1360;
L_08AE1360:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AE1364;
L_08AE1364:
    ctx.set_gpr(31, 0x08AE136Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE136Cu) goto L_08AE136C;
    return;
L_08AE136C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE137Cu);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE137Cu) goto L_08AE137C;
    return;
L_08AE137C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE13F0;
    }
    goto L_08AE1384;
L_08AE1384:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AE1388;
L_08AE1388:
    ctx.set_gpr(31, 0x08AE1390u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1390u) goto L_08AE1390;
    return;
L_08AE1390:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE13A0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08AE13A0u) goto L_08AE13A0;
    return;
L_08AE13A0:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE13D4;
    }
    goto L_08AE13AC;
L_08AE13AC:
    ctx.set_gpr(31, 0x08AE13B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE13B4u) goto L_08AE13B4;
    return;
L_08AE13B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE13C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE13C8u) goto L_08AE13C8;
    return;
L_08AE13C8:
    ctx.set_gpr(31, 0x08AE13D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AE13D0u) goto L_08AE13D0;
    return;
L_08AE13D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AE13D4;
L_08AE13D4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE13E0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE13E0u) goto L_08AE13E0;
    return;
L_08AE13E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE1388;
    }
    goto L_08AE13EC;
L_08AE13EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AE13F0;
L_08AE13F0:
    ctx.set_gpr(31, 0x08AE13F8u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AE13F8u) goto L_08AE13F8;
    return;
L_08AE13F8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE1364;
    }
    goto L_08AE1404;
L_08AE1404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AE1408;
L_08AE1408:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE1774;
      }
      goto L_08AE1444;
    }
L_08AE1444:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE16E8;
      }
      goto L_08AE1450;
    }
L_08AE1450:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE1648;
      }
      goto L_08AE145C;
    }
L_08AE145C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE1614;
      }
      goto L_08AE1468;
    }
L_08AE1468:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1478;
      }
      goto L_08AE1470;
    }
L_08AE1470:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE185C;
      }
      goto L_08AE1478;
    }
L_08AE1478:
    ctx.set_gpr(31, 0x08AE1480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1480u) goto L_08AE1480;
    return;
L_08AE1480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AE1490u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32656)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE1490u) goto L_08AE1490;
    return;
L_08AE1490:
    ctx.set_gpr(31, 0x08AE1498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE1498u) goto L_08AE1498;
    return;
L_08AE1498:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AE14B8u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE14B8u) goto L_08AE14B8;
    return;
L_08AE14B8:
    ctx.set_gpr(31, 0x08AE14C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE14C0u) goto L_08AE14C0;
    return;
L_08AE14C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE14CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE14CCu) goto L_08AE14CC;
    return;
L_08AE14CC:
    ctx.set_gpr(31, 0x08AE14D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE14D4u) goto L_08AE14D4;
    return;
L_08AE14D4:
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
    ctx.set_gpr(31, 0x08AE1504u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08AE1504u) goto L_08AE1504;
    return;
L_08AE1504:
    ctx.set_gpr(31, 0x08AE150Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE150Cu) goto L_08AE150C;
    return;
L_08AE150C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE151Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE151Cu) goto L_08AE151C;
    return;
L_08AE151C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1528u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1528u) goto L_08AE1528;
    return;
L_08AE1528:
    ctx.set_gpr(31, 0x08AE1530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1530u) goto L_08AE1530;
    return;
L_08AE1530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1540u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1540u) goto L_08AE1540;
    return;
L_08AE1540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7240));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1560u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE1560u) goto L_08AE1560;
    return;
L_08AE1560:
    ctx.set_gpr(31, 0x08AE1568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1568u) goto L_08AE1568;
    return;
L_08AE1568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1578u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1578u) goto L_08AE1578;
    return;
L_08AE1578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7276));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1598u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE1598u) goto L_08AE1598;
    return;
L_08AE1598:
    ctx.set_gpr(31, 0x08AE15A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE15A0u) goto L_08AE15A0;
    return;
L_08AE15A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE15B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE15B0u) goto L_08AE15B0;
    return;
L_08AE15B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7172));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE15D0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AE15D0u) goto L_08AE15D0;
    return;
L_08AE15D0:
    ctx.set_gpr(31, 0x08AE15D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE15D8u) goto L_08AE15D8;
    return;
L_08AE15D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE15E8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08AE15E8u) goto L_08AE15E8;
    return;
L_08AE15E8:
    ctx.set_gpr(31, 0x08AE15F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE15F0u) goto L_08AE15F0;
    return;
L_08AE15F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE15FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AE15FCu) goto L_08AE15FC;
    return;
L_08AE15FC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE1614;
    }
L_08AE1614:
    ctx.set_gpr(31, 0x08AE161Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE161Cu) goto L_08AE161C;
    return;
L_08AE161C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1628u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1628u) goto L_08AE1628;
    return;
L_08AE1628:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE1630;
    }
L_08AE1630:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE1648;
    }
L_08AE1648:
    ctx.set_gpr(31, 0x08AE1650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1650u) goto L_08AE1650;
    return;
L_08AE1650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE165Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE165Cu) goto L_08AE165C;
    return;
L_08AE165C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE1664;
    }
L_08AE1664:
    ctx.set_gpr(31, 0x08AE166Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE166Cu) goto L_08AE166C;
    return;
L_08AE166C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1678u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AE1678u) goto L_08AE1678;
    return;
L_08AE1678:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE16B8;
      }
      goto L_08AE1684;
    }
L_08AE1684:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08AE1698;
    }
    goto L_08AE1690;
L_08AE1690:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
      if (branch_taken) {
          goto L_08AE16E0;
      }
      goto L_08AE1698;
    }
L_08AE1698:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AE16A4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE16A4u) goto L_08AE16A4;
    return;
L_08AE16A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE16B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE16B0u) goto L_08AE16B0;
    return;
L_08AE16B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE16DC;
      }
      goto L_08AE16B8;
    }
L_08AE16B8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE16D0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE16D0u) goto L_08AE16D0;
    return;
L_08AE16D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE16DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AE16DCu) goto L_08AE16DC;
    return;
L_08AE16DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08AE16E0;
L_08AE16E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE16E8;
    }
L_08AE16E8:
    ctx.set_gpr(31, 0x08AE16F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE16F0u) goto L_08AE16F0;
    return;
L_08AE16F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE16FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE16FCu) goto L_08AE16FC;
    return;
L_08AE16FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE1704;
    }
L_08AE1704:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE1724u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1724u) goto L_08AE1724;
    return;
L_08AE1724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1730u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE1730u) goto L_08AE1730;
    return;
L_08AE1730:
    ctx.set_gpr(31, 0x08AE1738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1738u) goto L_08AE1738;
    return;
L_08AE1738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1748u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1748u) goto L_08AE1748;
    return;
L_08AE1748:
    ctx.set_gpr(31, 0x08AE1750u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE1750u) goto L_08AE1750;
    return;
L_08AE1750:
    ctx.set_gpr(31, 0x08AE1758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1758u) goto L_08AE1758;
    return;
L_08AE1758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1764u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1764u) goto L_08AE1764;
    return;
L_08AE1764:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE185C;
      }
      goto L_08AE1774;
    }
L_08AE1774:
    ctx.set_gpr(31, 0x08AE177Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE177Cu) goto L_08AE177C;
    return;
L_08AE177C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1788u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1788u) goto L_08AE1788;
    return;
L_08AE1788:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1858;
      }
      goto L_08AE1790;
    }
L_08AE1790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE17A0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE17A0u) goto L_08AE17A0;
    return;
L_08AE17A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE17ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE17ACu) goto L_08AE17AC;
    return;
L_08AE17AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE17BCu);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE17BCu) goto L_08AE17BC;
    return;
L_08AE17BC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AE17F8;
    }
    goto L_08AE17C4;
L_08AE17C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE17C8;
L_08AE17C8:
    ctx.set_gpr(31, 0x08AE17D0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE17D0u) goto L_08AE17D0;
    return;
L_08AE17D0:
    ctx.set_gpr(31, 0x08AE17D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08AE17D8u) goto L_08AE17D8;
    return;
L_08AE17D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE17E8u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE17E8u) goto L_08AE17E8;
    return;
L_08AE17E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE17C8;
    }
    goto L_08AE17F4;
L_08AE17F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE17F8;
L_08AE17F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE1808u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE1808u) goto L_08AE1808;
    return;
L_08AE1808:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1814u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08AE1814u) goto L_08AE1814;
    return;
L_08AE1814:
    ctx.set_gpr(31, 0x08AE181Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE181Cu) goto L_08AE181C;
    return;
L_08AE181C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE182Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE182Cu) goto L_08AE182C;
    return;
L_08AE182C:
    ctx.set_gpr(31, 0x08AE1834u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AE1834u) goto L_08AE1834;
    return;
L_08AE1834:
    ctx.set_gpr(31, 0x08AE183Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE183Cu) goto L_08AE183C;
    return;
L_08AE183C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1848u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1848u) goto L_08AE1848;
    return;
L_08AE1848:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23080), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE185C;
      }
      goto L_08AE1858;
    }
L_08AE1858:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE185C;
L_08AE185C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1870:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AE1884u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1884u) goto L_08AE1884;
    return;
L_08AE1884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE1898u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1898u) goto L_08AE1898;
    return;
L_08AE1898:
    ctx.set_gpr(31, 0x08AE18A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE18A0u) goto L_08AE18A0;
    return;
L_08AE18A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08AE18B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE18B4u) goto L_08AE18B4;
    return;
L_08AE18B4:
    ctx.set_gpr(31, 0x08AE18BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE18BCu) goto L_08AE18BC;
    return;
L_08AE18BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AE18D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE18D0u) goto L_08AE18D0;
    return;
L_08AE18D0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23076)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08AE1934;
    }
    goto L_08AE18E4;
L_08AE18E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AE190C;
    }
    goto L_08AE18F0;
L_08AE18F0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08AE1900;
    }
    goto L_08AE18F8;
L_08AE18F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE1944;
      }
      goto L_08AE1900;
    }
L_08AE1900:
    ctx.set_gpr(2, 2247u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23076), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE1940;
      }
      goto L_08AE190C;
    }
L_08AE190C:
    ctx.set_gpr(31, 0x08AE1914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 560u, 0x08AE5CFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1914u) goto L_08AE1914;
    return;
L_08AE1914:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1940;
      }
      goto L_08AE191C;
    }
L_08AE191C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23076)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23076), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AE1940;
      }
      goto L_08AE1934;
    }
L_08AE1934:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23076), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1944;
      }
      goto L_08AE1940;
    }
L_08AE1940:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE1944;
L_08AE1944:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1954:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AE198Cu);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE198Cu) goto L_08AE198C;
    return;
L_08AE198C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1998u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1998u) goto L_08AE1998;
    return;
L_08AE1998:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE19ACu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08AE19ACu) goto L_08AE19AC;
    return;
L_08AE19AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE19B8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AE19B8u) goto L_08AE19B8;
    return;
L_08AE19B8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AE19D0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE19D0u) goto L_08AE19D0;
    return;
L_08AE19D0:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE19E4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7320));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE19E4u) goto L_08AE19E4;
    return;
L_08AE19E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(3, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AE1A0C;
      }
      goto L_08AE1A04;
    }
L_08AE1A04:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AE1A0C;
L_08AE1A0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1A20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE1AF8;
      }
      goto L_08AE1A38;
    }
L_08AE1A38:
    ctx.set_gpr(31, 0x08AE1A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A40u) goto L_08AE1A40;
    return;
L_08AE1A40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1A4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A4Cu) goto L_08AE1A4C;
    return;
L_08AE1A4C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AE1B7C;
    }
    goto L_08AE1A54;
L_08AE1A54:
    ctx.set_gpr(31, 0x08AE1A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1A5Cu) goto L_08AE1A5C;
    return;
L_08AE1A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1A70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1A70u) goto L_08AE1A70;
    return;
L_08AE1A70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(165)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
        goto L_08AE1AB4;
    }
    goto L_08AE1A7C;
L_08AE1A7C:
    ctx.set_gpr(31, 0x08AE1A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1A84u) goto L_08AE1A84;
    return;
L_08AE1A84:
    ctx.set_gpr(31, 0x08AE1A8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A8Cu) goto L_08AE1A8C;
    return;
L_08AE1A8C:
    ctx.set_gpr(31, 0x08AE1A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A94u) goto L_08AE1A94;
    return;
L_08AE1A94:
    ctx.set_gpr(31, 0x08AE1A9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE1A9Cu) goto L_08AE1A9C;
    return;
L_08AE1A9C:
    ctx.set_gpr(31, 0x08AE1AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1AA4u) goto L_08AE1AA4;
    return;
L_08AE1AA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1AB0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1AB0u) goto L_08AE1AB0;
    return;
L_08AE1AB0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    goto L_08AE1AB4;
L_08AE1AB4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
        goto L_08AE1AE4;
    }
    goto L_08AE1ACC;
L_08AE1ACC:
    ctx.set_gpr(31, 0x08AE1AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1AD4u) goto L_08AE1AD4;
    return;
L_08AE1AD4:
    ctx.set_gpr(31, 0x08AE1ADCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE1ADCu) goto L_08AE1ADC;
    return;
L_08AE1ADC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    goto L_08AE1AE4;
L_08AE1AE4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1B7C;
      }
      goto L_08AE1AF8;
    }
L_08AE1AF8:
    ctx.set_gpr(31, 0x08AE1B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B00u) goto L_08AE1B00;
    return;
L_08AE1B00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE1B0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B0Cu) goto L_08AE1B0C;
    return;
L_08AE1B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1B78;
      }
      goto L_08AE1B14;
    }
L_08AE1B14:
    ctx.set_gpr(31, 0x08AE1B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1B1Cu) goto L_08AE1B1C;
    return;
L_08AE1B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1B30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1B30u) goto L_08AE1B30;
    return;
L_08AE1B30:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
        goto L_08AE1B64;
    }
    goto L_08AE1B4C;
L_08AE1B4C:
    ctx.set_gpr(31, 0x08AE1B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1B54u) goto L_08AE1B54;
    return;
L_08AE1B54:
    ctx.set_gpr(31, 0x08AE1B5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE1B5Cu) goto L_08AE1B5C;
    return;
L_08AE1B5C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    goto L_08AE1B64;
L_08AE1B64:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE1B7C;
      }
      goto L_08AE1B78;
    }
L_08AE1B78:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE1B7C;
L_08AE1B7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1B8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1BA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 266u, 0x08A9116Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1BA8u) goto L_08AE1BA8;
    return;
L_08AE1BA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1BBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1BD8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AE1BD8u) goto L_08AE1BD8;
    return;
L_08AE1BD8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1BECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1BECu) goto L_08AE1BEC;
    return;
L_08AE1BEC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE1C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AE1C20;
L_08AE1C20:
    ctx.set_gpr(31, 0x08AE1C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C28u) goto L_08AE1C28;
    return;
L_08AE1C28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE1C3Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1C3Cu) goto L_08AE1C3C;
    return;
L_08AE1C3C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1C20;
      }
      goto L_08AE1C4C;
    }
L_08AE1C4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1C58u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1C58u) goto L_08AE1C58;
    return;
L_08AE1C58:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08AE1D74;
      }
      goto L_08AE1C64;
    }
L_08AE1C64:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AE1C68;
L_08AE1C68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE1C74u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C74u) goto L_08AE1C74;
    return;
L_08AE1C74:
    ctx.set_gpr(31, 0x08AE1C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1C7Cu) goto L_08AE1C7C;
    return;
L_08AE1C7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE1C90u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1C90u) goto L_08AE1C90;
    return;
L_08AE1C90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AE1CA8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CA8u) goto L_08AE1CA8;
    return;
L_08AE1CA8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08AE1D68;
    }
    goto L_08AE1CB0;
L_08AE1CB0:
    ctx.set_gpr(31, 0x08AE1CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CB8u) goto L_08AE1CB8;
    return;
L_08AE1CB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE1CCCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1CCCu) goto L_08AE1CCC;
    return;
L_08AE1CCC:
    ctx.set_gpr(31, 0x08AE1CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1CD4u) goto L_08AE1CD4;
    return;
L_08AE1CD4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16948u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08AE1D30u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D30u) goto L_08AE1D30;
    return;
L_08AE1D30:
    ctx.set_gpr(31, 0x08AE1D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D38u) goto L_08AE1D38;
    return;
L_08AE1D38:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE1D64u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1D64u) goto L_08AE1D64;
    return;
L_08AE1D64:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AE1D68;
L_08AE1D68:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08AE1C68;
      }
      goto L_08AE1D74;
    }
L_08AE1D74:
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
L_08AE1D90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE1FF0;
      }
      goto L_08AE1DB4;
    }
L_08AE1DB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (static_cast<std::int32_t>(ctx.gpr[3]) <= 0) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AE220C;
    }
    goto L_08AE1DC0;
L_08AE1DC0:
    ctx.set_gpr(31, 0x08AE1DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1DC8u) goto L_08AE1DC8;
    return;
L_08AE1DC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE1DDCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1DDCu) goto L_08AE1DDC;
    return;
L_08AE1DDC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AE1DE4;
L_08AE1DE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1DF4u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1DF4u) goto L_08AE1DF4;
    return;
L_08AE1DF4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, 50298u << 16u);
        goto L_08AE1E44;
    }
    goto L_08AE1DFC;
L_08AE1DFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE1E00;
L_08AE1E00:
    ctx.set_gpr(31, 0x08AE1E08u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E08u) goto L_08AE1E08;
    return;
L_08AE1E08:
    ctx.set_gpr(31, 0x08AE1E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE1E10u) goto L_08AE1E10;
    return;
L_08AE1E10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE1E24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE1E24u) goto L_08AE1E24;
    return;
L_08AE1E24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1E34u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1E34u) goto L_08AE1E34;
    return;
L_08AE1E34:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AE1E00;
    }
    goto L_08AE1E40;
L_08AE1E40:
    ctx.set_gpr(2, 50298u << 16u);
    goto L_08AE1E44;
L_08AE1E44:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE1DE4;
      }
      goto L_08AE1E74;
    }
L_08AE1E74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1E84;
      }
      goto L_08AE1E80;
    }
L_08AE1E80:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AE1E84;
L_08AE1E84:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE1E98;
      }
      goto L_08AE1E94;
    }
L_08AE1E94:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AE1E98;
L_08AE1E98:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1EA8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EA8u) goto L_08AE1EA8;
    return;
L_08AE1EA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE1EB8u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1EB8u) goto L_08AE1EB8;
    return;
L_08AE1EB8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_08AE1F50;
    }
    goto L_08AE1EC0;
L_08AE1EC0:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE1EC8;
L_08AE1EC8:
    ctx.set_gpr(31, 0x08AE1ED0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE1ED0u) goto L_08AE1ED0;
    return;
L_08AE1ED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AE1EE8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AE1EE8u) goto L_08AE1EE8;
    return;
L_08AE1EE8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AE1F30;
    }
    goto L_08AE1EF0;
L_08AE1EF0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE1F30;
L_08AE1F30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE1F40u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE1F40u) goto L_08AE1F40;
    return;
L_08AE1F40:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AE1EC8;
    }
    goto L_08AE1F4C;
L_08AE1F4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_08AE1F50;
L_08AE1F50:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AE1F60;
    }
    goto L_08AE1F58;
L_08AE1F58:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AE1F60;
L_08AE1F60:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08AE1F8C;
    }
    goto L_08AE1F78;
L_08AE1F78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AE1F8C;
L_08AE1F8C:
    ctx.set_gpr(31, 0x08AE1F94u);
    // nop
    goto L_08AE1BBC;
L_08AE1F94:
    ctx.set_gpr(31, 0x08AE1F9Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AE1C00;
L_08AE1F9C:
    ctx.set_gpr(31, 0x08AE1FA4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AE1B8C;
L_08AE1FA4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), 0u);
    ctx.set_gpr(31, 0x08AE1FB8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE1FB8u) goto L_08AE1FB8;
    return;
L_08AE1FB8:
    ctx.set_gpr(31, 0x08AE1FC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE1FC0u) goto L_08AE1FC0;
    return;
L_08AE1FC0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08AE1FE0u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE1FE0u) goto L_08AE1FE0;
    return;
L_08AE1FE0:
    ctx.set_gpr(31, 0x08AE1FE8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 687u, 0x08ADAA24u>(ctx, &aot_mem) && ctx.pc == 0x08AE1FE8u) goto L_08AE1FE8;
    return;
L_08AE1FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2208;
      }
      goto L_08AE1FF0;
    }
L_08AE1FF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2208;
      }
      goto L_08AE2000;
    }
L_08AE2000:
    ctx.set_gpr(31, 0x08AE2008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2008u) goto L_08AE2008;
    return;
L_08AE2008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE201Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE201Cu) goto L_08AE201C;
    return;
L_08AE201C:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08AE2024;
L_08AE2024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE2034u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2034u) goto L_08AE2034;
    return;
L_08AE2034:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, 50298u << 16u);
        goto L_08AE2084;
    }
    goto L_08AE203C;
L_08AE203C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE2040;
L_08AE2040:
    ctx.set_gpr(31, 0x08AE2048u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2048u) goto L_08AE2048;
    return;
L_08AE2048:
    ctx.set_gpr(31, 0x08AE2050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2050u) goto L_08AE2050;
    return;
L_08AE2050:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE2064u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2064u) goto L_08AE2064;
    return;
L_08AE2064:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE2074u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2074u) goto L_08AE2074;
    return;
L_08AE2074:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AE2040;
    }
    goto L_08AE2080;
L_08AE2080:
    ctx.set_gpr(2, 50298u << 16u);
    goto L_08AE2084;
L_08AE2084:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE2024;
      }
      goto L_08AE20B4;
    }
L_08AE20B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE20C4;
      }
      goto L_08AE20C0;
    }
L_08AE20C0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AE20C4;
L_08AE20C4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE20D8;
      }
      goto L_08AE20D4;
    }
L_08AE20D4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08AE20D8;
L_08AE20D8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE20E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE20E8u) goto L_08AE20E8;
    return;
L_08AE20E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE20F8u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE20F8u) goto L_08AE20F8;
    return;
L_08AE20F8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
        goto L_08AE2190;
    }
    goto L_08AE2100;
L_08AE2100:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE2108;
L_08AE2108:
    ctx.set_gpr(31, 0x08AE2110u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2110u) goto L_08AE2110;
    return;
L_08AE2110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AE2128u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AE2128u) goto L_08AE2128;
    return;
L_08AE2128:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AE2170;
    }
    goto L_08AE2130;
L_08AE2130:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE2170;
L_08AE2170:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE2180u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2180u) goto L_08AE2180;
    return;
L_08AE2180:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AE2108;
    }
    goto L_08AE218C;
L_08AE218C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    goto L_08AE2190;
L_08AE2190:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AE21A0;
    }
    goto L_08AE2198;
L_08AE2198:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AE21A0;
L_08AE21A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AE21B4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    goto L_08AE1BBC;
L_08AE21B4:
    ctx.set_gpr(31, 0x08AE21BCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AE1C00;
L_08AE21BC:
    ctx.set_gpr(31, 0x08AE21C4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08AE1B8C;
L_08AE21C4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), 0u);
    ctx.set_gpr(31, 0x08AE21D8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE21D8u) goto L_08AE21D8;
    return;
L_08AE21D8:
    ctx.set_gpr(31, 0x08AE21E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE21E0u) goto L_08AE21E0;
    return;
L_08AE21E0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08AE2200u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE2200u) goto L_08AE2200;
    return;
L_08AE2200:
    ctx.set_gpr(31, 0x08AE2208u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 687u, 0x08ADAA24u>(ctx, &aot_mem) && ctx.pc == 0x08AE2208u) goto L_08AE2208;
    return;
L_08AE2208:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AE220C;
L_08AE220C:
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
L_08AE2224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE2460;
      }
      goto L_08AE224C;
    }
L_08AE224C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 199 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08AE2670;
    }
    goto L_08AE225C;
L_08AE225C:
    ctx.set_gpr(31, 0x08AE2264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2264u) goto L_08AE2264;
    return;
L_08AE2264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE2278u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2278u) goto L_08AE2278;
    return;
L_08AE2278:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    goto L_08AE2280;
L_08AE2280:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE2290u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2290u) goto L_08AE2290;
    return;
L_08AE2290:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AE22EC;
    }
    goto L_08AE2298;
L_08AE2298:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE22A0;
L_08AE22A0:
    ctx.set_gpr(31, 0x08AE22A8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE22A8u) goto L_08AE22A8;
    return;
L_08AE22A8:
    ctx.set_gpr(2, 50298u << 16u);
    ctx.set_gpr(31, 0x08AE22B4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE22B4u) goto L_08AE22B4;
    return;
L_08AE22B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE22C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE22C8u) goto L_08AE22C8;
    return;
L_08AE22C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE22DCu);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE22DCu) goto L_08AE22DC;
    return;
L_08AE22DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE22A0;
    }
    goto L_08AE22E8;
L_08AE22E8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AE22EC;
L_08AE22EC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE2280;
      }
      goto L_08AE22F8;
    }
L_08AE22F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(199));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE230C;
      }
      goto L_08AE2308;
    }
L_08AE2308:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AE230C;
L_08AE230C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08AE231Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AE231Cu) goto L_08AE231C;
    return;
L_08AE231C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE2328;
      }
      goto L_08AE2324;
    }
L_08AE2324:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AE2328;
L_08AE2328:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE2338u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2338u) goto L_08AE2338;
    return;
L_08AE2338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE2348u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2348u) goto L_08AE2348;
    return;
L_08AE2348:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AE23E0;
    }
    goto L_08AE2350;
L_08AE2350:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE2358;
L_08AE2358:
    ctx.set_gpr(31, 0x08AE2360u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2360u) goto L_08AE2360;
    return;
L_08AE2360:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AE2378u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AE2378u) goto L_08AE2378;
    return;
L_08AE2378:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE23C0;
    }
    goto L_08AE2380;
L_08AE2380:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE23C0;
L_08AE23C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE23D0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE23D0u) goto L_08AE23D0;
    return;
L_08AE23D0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE2358;
    }
    goto L_08AE23DC;
L_08AE23DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AE23E0;
L_08AE23E0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AE23F0;
    }
    goto L_08AE23E8;
L_08AE23E8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AE23F0;
L_08AE23F0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AE2404u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_08AE1BBC;
L_08AE2404:
    ctx.set_gpr(31, 0x08AE240Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE1C00;
L_08AE240C:
    ctx.set_gpr(31, 0x08AE2414u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE1B8C;
L_08AE2414:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    ctx.set_gpr(31, 0x08AE2428u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE2428u) goto L_08AE2428;
    return;
L_08AE2428:
    ctx.set_gpr(31, 0x08AE2430u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2430u) goto L_08AE2430;
    return;
L_08AE2430:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08AE2450u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE2450u) goto L_08AE2450;
    return;
L_08AE2450:
    ctx.set_gpr(31, 0x08AE2458u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 687u, 0x08ADAA24u>(ctx, &aot_mem) && ctx.pc == 0x08AE2458u) goto L_08AE2458;
    return;
L_08AE2458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE266C;
      }
      goto L_08AE2460;
    }
L_08AE2460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 199 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE266C;
      }
      goto L_08AE2470;
    }
L_08AE2470:
    ctx.set_gpr(31, 0x08AE2478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2478u) goto L_08AE2478;
    return;
L_08AE2478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE248Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE248Cu) goto L_08AE248C;
    return;
L_08AE248C:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    goto L_08AE2494;
L_08AE2494:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE24A4u);
    ctx.set_gpr(19, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE24A4u) goto L_08AE24A4;
    return;
L_08AE24A4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08AE2500;
    }
    goto L_08AE24AC;
L_08AE24AC:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE24B4;
L_08AE24B4:
    ctx.set_gpr(31, 0x08AE24BCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE24BCu) goto L_08AE24BC;
    return;
L_08AE24BC:
    ctx.set_gpr(2, 50298u << 16u);
    ctx.set_gpr(31, 0x08AE24C8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE24C8u) goto L_08AE24C8;
    return;
L_08AE24C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE24DCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE24DCu) goto L_08AE24DC;
    return;
L_08AE24DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE24F0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE24F0u) goto L_08AE24F0;
    return;
L_08AE24F0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE24B4;
    }
    goto L_08AE24FC;
L_08AE24FC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AE2500;
L_08AE2500:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE2494;
      }
      goto L_08AE250C;
    }
L_08AE250C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(199));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE2520;
      }
      goto L_08AE251C;
    }
L_08AE251C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08AE2520;
L_08AE2520:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08AE2530u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem) && ctx.pc == 0x08AE2530u) goto L_08AE2530;
    return;
L_08AE2530:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE253C;
      }
      goto L_08AE2538;
    }
L_08AE2538:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AE253C;
L_08AE253C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE254Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AE254Cu) goto L_08AE254C;
    return;
L_08AE254C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08AE255Cu);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE255Cu) goto L_08AE255C;
    return;
L_08AE255C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AE25F4;
    }
    goto L_08AE2564;
L_08AE2564:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE256C;
L_08AE256C:
    ctx.set_gpr(31, 0x08AE2574u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2574u) goto L_08AE2574;
    return;
L_08AE2574:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08AE258Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AE258Cu) goto L_08AE258C;
    return;
L_08AE258C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE25D4;
    }
    goto L_08AE2594;
L_08AE2594:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AE25D4;
L_08AE25D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08AE25E4u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE25E4u) goto L_08AE25E4;
    return;
L_08AE25E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AE256C;
    }
    goto L_08AE25F0;
L_08AE25F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AE25F4;
L_08AE25F4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08AE2604;
    }
    goto L_08AE25FC;
L_08AE25FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08AE2604;
L_08AE2604:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AE2618u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    goto L_08AE1BBC;
L_08AE2618:
    ctx.set_gpr(31, 0x08AE2620u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE1C00;
L_08AE2620:
    ctx.set_gpr(31, 0x08AE2628u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AE1B8C;
L_08AE2628:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    ctx.set_gpr(31, 0x08AE263Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE263Cu) goto L_08AE263C;
    return;
L_08AE263C:
    ctx.set_gpr(31, 0x08AE2644u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2644u) goto L_08AE2644;
    return;
L_08AE2644:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(156));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08AE2664u);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 983u, 0x08A8B858u>(ctx, &aot_mem) && ctx.pc == 0x08AE2664u) goto L_08AE2664;
    return;
L_08AE2664:
    ctx.set_gpr(31, 0x08AE266Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 687u, 0x08ADAA24u>(ctx, &aot_mem) && ctx.pc == 0x08AE266Cu) goto L_08AE266C;
    return;
L_08AE266C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08AE2670;
L_08AE2670:
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
L_08AE268C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08AE26A0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE26A0u) goto L_08AE26A0;
    return;
L_08AE26A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08AE26B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE26B4u) goto L_08AE26B4;
    return;
L_08AE26B4:
    ctx.set_gpr(31, 0x08AE26BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE26BCu) goto L_08AE26BC;
    return;
L_08AE26BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08AE26D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE26D0u) goto L_08AE26D0;
    return;
L_08AE26D0:
    ctx.set_gpr(31, 0x08AE26D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE26D8u) goto L_08AE26D8;
    return;
L_08AE26D8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17222u << 16u);
    ctx.set_gpr(31, 0x08AE2704u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE2704u) goto L_08AE2704;
    return;
L_08AE2704:
    ctx.set_gpr(31, 0x08AE270Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE270Cu) goto L_08AE270C;
    return;
L_08AE270C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 17044u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 17299u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AE2738u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE2738u) goto L_08AE2738;
    return;
L_08AE2738:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AE2758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2758u) goto L_08AE2758;
    return;
L_08AE2758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AE276Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE276Cu) goto L_08AE276C;
    return;
L_08AE276C:
    ctx.set_gpr(31, 0x08AE2774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2774u) goto L_08AE2774;
    return;
L_08AE2774:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08AE2788u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2788u) goto L_08AE2788;
    return;
L_08AE2788:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2794:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AE27ACu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE27ACu) goto L_08AE27AC;
    return;
L_08AE27AC:
    ctx.set_gpr(31, 0x08AE27B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE27B4u) goto L_08AE27B4;
    return;
L_08AE27B4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AE27E8;
    }
    goto L_08AE27BC;
L_08AE27BC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE27E0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE27E0u) goto L_08AE27E0;
    return;
L_08AE27E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2800;
      }
      goto L_08AE27E8;
    }
L_08AE27E8:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AE2800u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE2800u) goto L_08AE2800;
    return;
L_08AE2800:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(31, 0x08AE2814u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7332));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2814u) goto L_08AE2814;
    return;
L_08AE2814:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE2828u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7352));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2828u) goto L_08AE2828;
    return;
L_08AE2828:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AE283Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7364));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE283Cu) goto L_08AE283C;
    return;
L_08AE283C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE2874;
      }
      goto L_08AE284C;
    }
L_08AE284C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE2860u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE2860u) goto L_08AE2860;
    return;
L_08AE2860:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(427));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08AE2874u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2874u) goto L_08AE2874;
    return;
L_08AE2874:
    ctx.set_gpr(31, 0x08AE287Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AE287Cu) goto L_08AE287C;
    return;
L_08AE287C:
    ctx.set_gpr(31, 0x08AE2884u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2884u) goto L_08AE2884;
    return;
L_08AE2884:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AE28B0;
    }
    goto L_08AE288C;
L_08AE288C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(15, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE28A8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE28A8u) goto L_08AE28A8;
    return;
L_08AE28A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE28C4;
      }
      goto L_08AE28B0;
    }
L_08AE28B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE28C4u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE28C4u) goto L_08AE28C4;
    return;
L_08AE28C4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(426));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x08AE28D8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE28D8u) goto L_08AE28D8;
    return;
L_08AE28D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE28EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AE290Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE290Cu) goto L_08AE290C;
    return;
L_08AE290C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE2918u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2918u) goto L_08AE2918;
    return;
L_08AE2918:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AE296C;
      }
      goto L_08AE2924;
    }
L_08AE2924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AE2928;
L_08AE2928:
    ctx.set_gpr(31, 0x08AE2930u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2930u) goto L_08AE2930;
    return;
L_08AE2930:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AE2948u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08AE2948u) goto L_08AE2948;
    return;
L_08AE2948:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08AE2960;
    }
    goto L_08AE2958;
L_08AE2958:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE2970;
      }
      goto L_08AE2960;
    }
L_08AE2960:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08AE2928;
    }
    goto L_08AE296C;
L_08AE296C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE2970;
L_08AE2970:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE2B10;
      }
      goto L_08AE29CC;
    }
L_08AE29CC:
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
        goto L_08AE2AD8;
    }
    goto L_08AE29D4;
L_08AE29D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE29E8;
      }
      goto L_08AE29E0;
    }
L_08AE29E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE2CA0;
      }
      goto L_08AE29E8;
    }
L_08AE29E8:
    ctx.set_gpr(31, 0x08AE29F0u);
    // nop
    goto L_08AE3144;
L_08AE29F0:
    ctx.set_gpr(31, 0x08AE29F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE29F8u) goto L_08AE29F8;
    return;
L_08AE29F8:
    ctx.set_gpr(31, 0x08AE2A00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A00u) goto L_08AE2A00;
    return;
L_08AE2A00:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(328)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
        goto L_08AE2A20;
    }
    goto L_08AE2A14;
L_08AE2A14:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2A28;
      }
      goto L_08AE2A1C;
    }
L_08AE2A1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(120));
    goto L_08AE2A20;
L_08AE2A20:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2A40;
      }
      goto L_08AE2A28;
    }
L_08AE2A28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AE2A44;
    }
    goto L_08AE2A30;
L_08AE2A30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AE2A3Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 266u, 0x08A9116Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2A3Cu) goto L_08AE2A3C;
    return;
L_08AE2A3C:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AE2A40;
L_08AE2A40:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE2A44;
L_08AE2A44:
    ctx.set_gpr(31, 0x08AE2A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 58u, 0x08AE4370u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A4Cu) goto L_08AE2A4C;
    return;
L_08AE2A4C:
    ctx.set_gpr(31, 0x08AE2A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A54u) goto L_08AE2A54;
    return;
L_08AE2A54:
    ctx.set_gpr(31, 0x08AE2A5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A5Cu) goto L_08AE2A5C;
    return;
L_08AE2A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE2A68u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2A68u) goto L_08AE2A68;
    return;
L_08AE2A68:
    ctx.set_gpr(31, 0x08AE2A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A70u) goto L_08AE2A70;
    return;
L_08AE2A70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE2A94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A94u) goto L_08AE2A94;
    return;
L_08AE2A94:
    ctx.set_gpr(31, 0x08AE2A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2A9Cu) goto L_08AE2A9C;
    return;
L_08AE2A9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE2AC0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE2AC0u) goto L_08AE2AC0;
    return;
L_08AE2AC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2C9C;
      }
      goto L_08AE2AD8;
    }
L_08AE2AD8:
    ctx.set_gpr(31, 0x08AE2AE0u);
    // nop
    goto L_08AE3478;
L_08AE2AE0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AE2AF8u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE2CC4;
L_08AE2AF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2C9C;
      }
      goto L_08AE2B00;
    }
L_08AE2B00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE2C9C;
      }
      goto L_08AE2B10;
    }
L_08AE2B10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AE2BBC;
      }
      goto L_08AE2B1C;
    }
L_08AE2B1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(328), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE2B54u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 400u, 0x08A81258u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B54u) goto L_08AE2B54;
    return;
L_08AE2B54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08AE2B64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1104u, 0x08A93DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B64u) goto L_08AE2B64;
    return;
L_08AE2B64:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_08AE2BAC;
    }
    goto L_08AE2B6C;
L_08AE2B6C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE2B84u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B84u) goto L_08AE2B84;
    return;
L_08AE2B84:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(401));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08AE2B98u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7376));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2B98u) goto L_08AE2B98;
    return;
L_08AE2B98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE2BA8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2BA8u) goto L_08AE2BA8;
    return;
L_08AE2BA8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE2BAC;
L_08AE2BAC:
    ctx.set_gpr(31, 0x08AE2BB4u);
    // nop
    goto L_08AE38E4;
L_08AE2BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE2CA0;
      }
      goto L_08AE2BBC;
    }
L_08AE2BBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2C9C;
      }
      goto L_08AE2BC4;
    }
L_08AE2BC4:
    ctx.set_gpr(31, 0x08AE2BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2BCCu) goto L_08AE2BCC;
    return;
L_08AE2BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AE2BE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2BE0u) goto L_08AE2BE0;
    return;
L_08AE2BE0:
    ctx.set_gpr(31, 0x08AE2BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2BE8u) goto L_08AE2BE8;
    return;
L_08AE2BE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AE2BFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2BFCu) goto L_08AE2BFC;
    return;
L_08AE2BFC:
    ctx.set_gpr(31, 0x08AE2C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C04u) goto L_08AE2C04;
    return;
L_08AE2C04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08AE2C18u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2C18u) goto L_08AE2C18;
    return;
L_08AE2C18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(328), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AE2C8C;
      }
      goto L_08AE2C54;
    }
L_08AE2C54:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AE2C68u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C68u) goto L_08AE2C68;
    return;
L_08AE2C68:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(317));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08AE2C7Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7388));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C7Cu) goto L_08AE2C7C;
    return;
L_08AE2C7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AE2C8Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08AE2C8Cu) goto L_08AE2C8C;
    return;
L_08AE2C8C:
    ctx.set_gpr(31, 0x08AE2C94u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_08AE38E4;
L_08AE2C94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE2CA0;
      }
      goto L_08AE2C9C;
    }
L_08AE2C9C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE2CA0;
L_08AE2CA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE2CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AE3118;
      }
      goto L_08AE2CE0;
    }
L_08AE2CE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
        goto L_08AE3050;
    }
    goto L_08AE2CEC;
L_08AE2CEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
        goto L_08AE2F34;
    }
    goto L_08AE2CF8;
L_08AE2CF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AE2E30;
      }
      goto L_08AE2D04;
    }
L_08AE2D04:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D14;
      }
      goto L_08AE2D0C;
    }
L_08AE2D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE2D14;
    }
L_08AE2D14:
    ctx.set_gpr(31, 0x08AE2D1Cu);
    // nop
    goto L_08AE3950;
L_08AE2D1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE2D24;
    }
L_08AE2D24:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(163)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08AE2DDC;
    }
    goto L_08AE2D30;
L_08AE2D30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE2D3Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D3Cu) goto L_08AE2D3C;
    return;
L_08AE2D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08AE2D50u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2D50u) goto L_08AE2D50;
    return;
L_08AE2D50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D80;
      }
      goto L_08AE2D5C;
    }
L_08AE2D5C:
    ctx.set_gpr(31, 0x08AE2D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D64u) goto L_08AE2D64;
    return;
L_08AE2D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2D78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2D78u) goto L_08AE2D78;
    return;
L_08AE2D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2D9C;
      }
      goto L_08AE2D80;
    }
L_08AE2D80:
    ctx.set_gpr(31, 0x08AE2D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2D88u) goto L_08AE2D88;
    return;
L_08AE2D88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2D9Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2D9Cu) goto L_08AE2D9C;
    return;
L_08AE2D9C:
    ctx.set_gpr(31, 0x08AE2DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DA4u) goto L_08AE2DA4;
    return;
L_08AE2DA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08AE2DB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2DB8u) goto L_08AE2DB8;
    return;
L_08AE2DB8:
    ctx.set_gpr(31, 0x08AE2DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DC0u) goto L_08AE2DC0;
    return;
L_08AE2DC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE2DD4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2DD4u) goto L_08AE2DD4;
    return;
L_08AE2DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE2DDC;
    }
L_08AE2DDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E08;
      }
      goto L_08AE2DE4;
    }
L_08AE2DE4:
    ctx.set_gpr(31, 0x08AE2DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2DECu) goto L_08AE2DEC;
    return;
L_08AE2DEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2E00u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2E00u) goto L_08AE2E00;
    return;
L_08AE2E00:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
      if (branch_taken) {
          goto L_08AE2E28;
      }
      goto L_08AE2E08;
    }
L_08AE2E08:
    ctx.set_gpr(31, 0x08AE2E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E10u) goto L_08AE2E10;
    return;
L_08AE2E10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2E24u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2E24u) goto L_08AE2E24;
    return;
L_08AE2E24:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    goto L_08AE2E28;
L_08AE2E28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE2E30;
    }
L_08AE2E30:
    ctx.set_gpr(31, 0x08AE2E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 307u, 0x08AE4FBCu>(ctx, &aot_mem) && ctx.pc == 0x08AE2E38u) goto L_08AE2E38;
    return;
L_08AE2E38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE2E40;
    }
L_08AE2E40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(142)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(163)));
        goto L_08AE2E58;
    }
    goto L_08AE2E4C;
L_08AE2E4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(163)));
    goto L_08AE2E58;
L_08AE2E58:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
        goto L_08AE2EC8;
    }
    goto L_08AE2E60;
L_08AE2E60:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2EC4;
      }
      goto L_08AE2E6C;
    }
L_08AE2E6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2E9C;
      }
      goto L_08AE2E78;
    }
L_08AE2E78:
    ctx.set_gpr(31, 0x08AE2E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2E80u) goto L_08AE2E80;
    return;
L_08AE2E80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2E94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2E94u) goto L_08AE2E94;
    return;
L_08AE2E94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE2EBC;
      }
      goto L_08AE2E9C;
    }
L_08AE2E9C:
    ctx.set_gpr(31, 0x08AE2EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2EA4u) goto L_08AE2EA4;
    return;
L_08AE2EA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2EB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2EB8u) goto L_08AE2EB8;
    return;
L_08AE2EB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE2EBC;
L_08AE2EBC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE2EC4;
    }
L_08AE2EC4:
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
    goto L_08AE2EC8;
L_08AE2EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE2ED0;
    }
L_08AE2ED0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(142)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE2EDC;
    }
L_08AE2EDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2F0C;
      }
      goto L_08AE2EE8;
    }
L_08AE2EE8:
    ctx.set_gpr(31, 0x08AE2EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2EF0u) goto L_08AE2EF0;
    return;
L_08AE2EF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2F04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2F04u) goto L_08AE2F04;
    return;
L_08AE2F04:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
      if (branch_taken) {
          goto L_08AE2F2C;
      }
      goto L_08AE2F0C;
    }
L_08AE2F0C:
    ctx.set_gpr(31, 0x08AE2F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F14u) goto L_08AE2F14;
    return;
L_08AE2F14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2F28u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2F28u) goto L_08AE2F28;
    return;
L_08AE2F28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    goto L_08AE2F2C;
L_08AE2F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE2F34;
    }
L_08AE2F34:
    ctx.set_gpr(31, 0x08AE2F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 74u, 0x08AE44A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F3Cu) goto L_08AE2F3C;
    return;
L_08AE2F3C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AE3134;
    }
    goto L_08AE2F44;
L_08AE2F44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(169)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08AE2FFC;
    }
    goto L_08AE2F50;
L_08AE2F50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AE2F5Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F5Cu) goto L_08AE2F5C;
    return;
L_08AE2F5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08AE2F70u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2F70u) goto L_08AE2F70;
    return;
L_08AE2F70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2FA0;
      }
      goto L_08AE2F7C;
    }
L_08AE2F7C:
    ctx.set_gpr(31, 0x08AE2F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2F84u) goto L_08AE2F84;
    return;
L_08AE2F84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2F98u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2F98u) goto L_08AE2F98;
    return;
L_08AE2F98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE2FBC;
      }
      goto L_08AE2FA0;
    }
L_08AE2FA0:
    ctx.set_gpr(31, 0x08AE2FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FA8u) goto L_08AE2FA8;
    return;
L_08AE2FA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE2FBCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2FBCu) goto L_08AE2FBC;
    return;
L_08AE2FBC:
    ctx.set_gpr(31, 0x08AE2FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FC4u) goto L_08AE2FC4;
    return;
L_08AE2FC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08AE2FD8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2FD8u) goto L_08AE2FD8;
    return;
L_08AE2FD8:
    ctx.set_gpr(31, 0x08AE2FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE2FE0u) goto L_08AE2FE0;
    return;
L_08AE2FE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE2FF4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE2FF4u) goto L_08AE2FF4;
    return;
L_08AE2FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE2FFC;
    }
L_08AE2FFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3028;
      }
      goto L_08AE3004;
    }
L_08AE3004:
    ctx.set_gpr(31, 0x08AE300Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE300Cu) goto L_08AE300C;
    return;
L_08AE300C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3020u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3020u) goto L_08AE3020;
    return;
L_08AE3020:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
      if (branch_taken) {
          goto L_08AE3048;
      }
      goto L_08AE3028;
    }
L_08AE3028:
    ctx.set_gpr(31, 0x08AE3030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3030u) goto L_08AE3030;
    return;
L_08AE3030:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3044u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3044u) goto L_08AE3044;
    return;
L_08AE3044:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    goto L_08AE3048;
L_08AE3048:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE3050;
    }
L_08AE3050:
    ctx.set_gpr(31, 0x08AE3058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 194u, 0x08AE4A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3058u) goto L_08AE3058;
    return;
L_08AE3058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE3060;
    }
L_08AE3060:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(169)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08AE30C4;
    }
    goto L_08AE306C;
L_08AE306C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE309C;
      }
      goto L_08AE3078;
    }
L_08AE3078:
    ctx.set_gpr(31, 0x08AE3080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3080u) goto L_08AE3080;
    return;
L_08AE3080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3094u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3094u) goto L_08AE3094;
    return;
L_08AE3094:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE30BC;
      }
      goto L_08AE309C;
    }
L_08AE309C:
    ctx.set_gpr(31, 0x08AE30A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE30A4u) goto L_08AE30A4;
    return;
L_08AE30A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE30B8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE30B8u) goto L_08AE30B8;
    return;
L_08AE30B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AE30BC;
L_08AE30BC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE30C4;
    }
L_08AE30C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE30F0;
      }
      goto L_08AE30CC;
    }
L_08AE30CC:
    ctx.set_gpr(31, 0x08AE30D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE30D4u) goto L_08AE30D4;
    return;
L_08AE30D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE30E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE30E8u) goto L_08AE30E8;
    return;
L_08AE30E8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
      if (branch_taken) {
          goto L_08AE3110;
      }
      goto L_08AE30F0;
    }
L_08AE30F0:
    ctx.set_gpr(31, 0x08AE30F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE30F8u) goto L_08AE30F8;
    return;
L_08AE30F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE310Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE310Cu) goto L_08AE310C;
    return;
L_08AE310C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    goto L_08AE3110;
L_08AE3110:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE3134;
      }
      goto L_08AE3118;
    }
L_08AE3118:
    ctx.set_gpr(31, 0x08AE3120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 457u, 0x08AE5780u>(ctx, &aot_mem) && ctx.pc == 0x08AE3120u) goto L_08AE3120;
    return;
L_08AE3120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3130;
      }
      goto L_08AE3128;
    }
L_08AE3128:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    goto L_08AE3130;
L_08AE3130:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AE3134;
L_08AE3134:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08AE3154u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3154u) goto L_08AE3154;
    return;
L_08AE3154:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17132u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x08AE3188u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE3188u) goto L_08AE3188;
    return;
L_08AE3188:
    ctx.set_gpr(31, 0x08AE3190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3190u) goto L_08AE3190;
    return;
L_08AE3190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17126u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x08AE31C4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE31C4u) goto L_08AE31C4;
    return;
L_08AE31C4:
    ctx.set_gpr(31, 0x08AE31CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE31CCu) goto L_08AE31CC;
    return;
L_08AE31CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17210u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17157u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AE3200u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE3200u) goto L_08AE3200;
    return;
L_08AE3200:
    ctx.set_gpr(31, 0x08AE3208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3208u) goto L_08AE3208;
    return;
L_08AE3208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17294u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17157u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AE3240u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE3240u) goto L_08AE3240;
    return;
L_08AE3240:
    ctx.set_gpr(31, 0x08AE3248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3248u) goto L_08AE3248;
    return;
L_08AE3248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17207u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17154u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08AE327Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE327Cu) goto L_08AE327C;
    return;
L_08AE327C:
    ctx.set_gpr(31, 0x08AE3284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3284u) goto L_08AE3284;
    return;
L_08AE3284:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17293u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17154u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08AE32B8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE32B8u) goto L_08AE32B8;
    return;
L_08AE32B8:
    ctx.set_gpr(31, 0x08AE32C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE32C0u) goto L_08AE32C0;
    return;
L_08AE32C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17210u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17176u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AE32F4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE32F4u) goto L_08AE32F4;
    return;
L_08AE32F4:
    ctx.set_gpr(31, 0x08AE32FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE32FCu) goto L_08AE32FC;
    return;
L_08AE32FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17294u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17176u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AE3334u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE3334u) goto L_08AE3334;
    return;
L_08AE3334:
    ctx.set_gpr(31, 0x08AE333Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE333Cu) goto L_08AE333C;
    return;
L_08AE333C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17189u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AE3370u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE3370u) goto L_08AE3370;
    return;
L_08AE3370:
    ctx.set_gpr(31, 0x08AE3378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3378u) goto L_08AE3378;
    return;
L_08AE3378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17189u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AE33ACu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE33ACu) goto L_08AE33AC;
    return;
L_08AE33AC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AE33B0;
L_08AE33B0:
    ctx.set_gpr(31, 0x08AE33B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE33B8u) goto L_08AE33B8;
    return;
L_08AE33B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17299u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AE33ECu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE33ECu) goto L_08AE33EC;
    return;
L_08AE33EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE33B0;
      }
      goto L_08AE33FC;
    }
L_08AE33FC:
    ctx.set_gpr(31, 0x08AE3404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3404u) goto L_08AE3404;
    return;
L_08AE3404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17299u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17044u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(31, 0x08AE3438u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AE3438u) goto L_08AE3438;
    return;
L_08AE3438:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AE343C;
L_08AE343C:
    ctx.set_gpr(31, 0x08AE3444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3444u) goto L_08AE3444;
    return;
L_08AE3444:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3458u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3458u) goto L_08AE3458;
    return;
L_08AE3458:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE343C;
      }
      goto L_08AE3468;
    }
L_08AE3468:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08AE3600;
      }
      goto L_08AE3484;
    }
L_08AE3484:
    ctx.set_gpr(31, 0x08AE348Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE348Cu) goto L_08AE348C;
    return;
L_08AE348C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08AE34A0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE34A0u) goto L_08AE34A0;
    return;
L_08AE34A0:
    ctx.set_gpr(31, 0x08AE34A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE34A8u) goto L_08AE34A8;
    return;
L_08AE34A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE34BCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE34BCu) goto L_08AE34BC;
    return;
L_08AE34BC:
    ctx.set_gpr(31, 0x08AE34C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE34C4u) goto L_08AE34C4;
    return;
L_08AE34C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AE34D8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE34D8u) goto L_08AE34D8;
    return;
L_08AE34D8:
    ctx.set_gpr(31, 0x08AE34E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE34E0u) goto L_08AE34E0;
    return;
L_08AE34E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AE34F4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE34F4u) goto L_08AE34F4;
    return;
L_08AE34F4:
    ctx.set_gpr(31, 0x08AE34FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE34FCu) goto L_08AE34FC;
    return;
L_08AE34FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE3510u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3510u) goto L_08AE3510;
    return;
L_08AE3510:
    ctx.set_gpr(31, 0x08AE3518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3518u) goto L_08AE3518;
    return;
L_08AE3518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE352Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE352Cu) goto L_08AE352C;
    return;
L_08AE352C:
    ctx.set_gpr(31, 0x08AE3534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3534u) goto L_08AE3534;
    return;
L_08AE3534:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3548u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3548u) goto L_08AE3548;
    return;
L_08AE3548:
    ctx.set_gpr(31, 0x08AE3550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3550u) goto L_08AE3550;
    return;
L_08AE3550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17246u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17162u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3570u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3570u) goto L_08AE3570;
    return;
L_08AE3570:
    ctx.set_gpr(31, 0x08AE3578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3578u) goto L_08AE3578;
    return;
L_08AE3578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08AE358Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE358Cu) goto L_08AE358C;
    return;
L_08AE358C:
    ctx.set_gpr(31, 0x08AE3594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3594u) goto L_08AE3594;
    return;
L_08AE3594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17162u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE35B4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE35B4u) goto L_08AE35B4;
    return;
L_08AE35B4:
    ctx.set_gpr(31, 0x08AE35BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE35BCu) goto L_08AE35BC;
    return;
L_08AE35BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE35D0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE35D0u) goto L_08AE35D0;
    return;
L_08AE35D0:
    ctx.set_gpr(31, 0x08AE35D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE35D8u) goto L_08AE35D8;
    return;
L_08AE35D8:
    ctx.set_gpr(3, 17281u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 17162u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE35F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE35F8u) goto L_08AE35F8;
    return;
L_08AE35F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AE38DC;
      }
      goto L_08AE3600;
    }
L_08AE3600:
    ctx.set_gpr(31, 0x08AE3608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3608u) goto L_08AE3608;
    return;
L_08AE3608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08AE361Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE361Cu) goto L_08AE361C;
    return;
L_08AE361C:
    ctx.set_gpr(31, 0x08AE3624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3624u) goto L_08AE3624;
    return;
L_08AE3624:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3644u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3644u) goto L_08AE3644;
    return;
L_08AE3644:
    ctx.set_gpr(31, 0x08AE364Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE364Cu) goto L_08AE364C;
    return;
L_08AE364C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE3660u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3660u) goto L_08AE3660;
    return;
L_08AE3660:
    ctx.set_gpr(31, 0x08AE3668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3668u) goto L_08AE3668;
    return;
L_08AE3668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17222u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17050u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3688u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3688u) goto L_08AE3688;
    return;
L_08AE3688:
    ctx.set_gpr(31, 0x08AE3690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3690u) goto L_08AE3690;
    return;
L_08AE3690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08AE36A4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE36A4u) goto L_08AE36A4;
    return;
L_08AE36A4:
    ctx.set_gpr(31, 0x08AE36ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE36ACu) goto L_08AE36AC;
    return;
L_08AE36AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17210u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE36CCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE36CCu) goto L_08AE36CC;
    return;
L_08AE36CC:
    ctx.set_gpr(31, 0x08AE36D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE36D4u) goto L_08AE36D4;
    return;
L_08AE36D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(31, 0x08AE36E8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE36E8u) goto L_08AE36E8;
    return;
L_08AE36E8:
    ctx.set_gpr(31, 0x08AE36F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE36F0u) goto L_08AE36F0;
    return;
L_08AE36F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17294u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3714u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3714u) goto L_08AE3714;
    return;
L_08AE3714:
    ctx.set_gpr(31, 0x08AE371Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE371Cu) goto L_08AE371C;
    return;
L_08AE371C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE3730u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3730u) goto L_08AE3730;
    return;
L_08AE3730:
    ctx.set_gpr(31, 0x08AE3738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3738u) goto L_08AE3738;
    return;
L_08AE3738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17207u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17080u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3758u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3758u) goto L_08AE3758;
    return;
L_08AE3758:
    ctx.set_gpr(31, 0x08AE3760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3760u) goto L_08AE3760;
    return;
L_08AE3760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE3774u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3774u) goto L_08AE3774;
    return;
L_08AE3774:
    ctx.set_gpr(31, 0x08AE377Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE377Cu) goto L_08AE377C;
    return;
L_08AE377C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17293u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17080u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE379Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE379Cu) goto L_08AE379C;
    return;
L_08AE379C:
    ctx.set_gpr(31, 0x08AE37A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE37A4u) goto L_08AE37A4;
    return;
L_08AE37A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE37B8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE37B8u) goto L_08AE37B8;
    return;
L_08AE37B8:
    ctx.set_gpr(31, 0x08AE37C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE37C0u) goto L_08AE37C0;
    return;
L_08AE37C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17246u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE37E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE37E0u) goto L_08AE37E0;
    return;
L_08AE37E0:
    ctx.set_gpr(31, 0x08AE37E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE37E8u) goto L_08AE37E8;
    return;
L_08AE37E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    ctx.set_gpr(31, 0x08AE37FCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE37FCu) goto L_08AE37FC;
    return;
L_08AE37FC:
    ctx.set_gpr(31, 0x08AE3804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3804u) goto L_08AE3804;
    return;
L_08AE3804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3824u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(83));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3824u) goto L_08AE3824;
    return;
L_08AE3824:
    ctx.set_gpr(31, 0x08AE382Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE382Cu) goto L_08AE382C;
    return;
L_08AE382C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08AE3840u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3840u) goto L_08AE3840;
    return;
L_08AE3840:
    ctx.set_gpr(31, 0x08AE3848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3848u) goto L_08AE3848;
    return;
L_08AE3848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17281u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AE3868u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(81));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AE3868u) goto L_08AE3868;
    return;
L_08AE3868:
    ctx.set_gpr(31, 0x08AE3870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3870u) goto L_08AE3870;
    return;
L_08AE3870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(31, 0x08AE3884u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3884u) goto L_08AE3884;
    return;
L_08AE3884:
    ctx.set_gpr(31, 0x08AE388Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE388Cu) goto L_08AE388C;
    return;
L_08AE388C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08AE38A0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE38A0u) goto L_08AE38A0;
    return;
L_08AE38A0:
    ctx.set_gpr(31, 0x08AE38A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE38A8u) goto L_08AE38A8;
    return;
L_08AE38A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08AE38BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE38BCu) goto L_08AE38BC;
    return;
L_08AE38BC:
    ctx.set_gpr(31, 0x08AE38C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE38C4u) goto L_08AE38C4;
    return;
L_08AE38C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08AE38D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE38D8u) goto L_08AE38D8;
    return;
L_08AE38D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AE38DC;
L_08AE38DC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE38E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AE38F4;
L_08AE38F4:
    ctx.set_gpr(31, 0x08AE38FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE38FCu) goto L_08AE38FC;
    return;
L_08AE38FC:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE390Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AE390Cu) goto L_08AE390C;
    return;
L_08AE390C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08AE3934;
    }
    goto L_08AE3918;
L_08AE3918:
    ctx.set_gpr(31, 0x08AE3920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3920u) goto L_08AE3920;
    return;
L_08AE3920:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3930u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3930u) goto L_08AE3930;
    return;
L_08AE3930:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08AE3934;
L_08AE3934:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE38F4;
      }
      goto L_08AE3940;
    }
L_08AE3940:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE3950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 35u, 0x08AE4210u>(ctx, &aot_mem); return;
      }
      goto L_08AE3988;
    }
L_08AE3988:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
        goto L_08AE3AF8;
    }
    goto L_08AE3994;
L_08AE3994:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
        goto L_08AE3AE8;
    }
    goto L_08AE39A0;
L_08AE39A0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE39B0;
      }
      goto L_08AE39A8;
    }
L_08AE39A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 57u, 0x08AE4354u>(ctx, &aot_mem); return;
      }
      goto L_08AE39B0;
    }
L_08AE39B0:
    ctx.set_gpr(31, 0x08AE39B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE39B8u) goto L_08AE39B8;
    return;
L_08AE39B8:
    ctx.set_gpr(31, 0x08AE39C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE39C0u) goto L_08AE39C0;
    return;
L_08AE39C0:
    ctx.set_gpr(31, 0x08AE39C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE39C8u) goto L_08AE39C8;
    return;
L_08AE39C8:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE39D8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7400));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AE39D8u) goto L_08AE39D8;
    return;
L_08AE39D8:
    ctx.set_gpr(31, 0x08AE39E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AE39E0u) goto L_08AE39E0;
    return;
L_08AE39E0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE39F0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7408));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AE39F0u) goto L_08AE39F0;
    return;
L_08AE39F0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3A4C;
      }
      goto L_08AE39F8;
    }
L_08AE39F8:
    ctx.set_gpr(31, 0x08AE3A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A00u) goto L_08AE3A00;
    return;
L_08AE3A00:
    ctx.set_gpr(31, 0x08AE3A08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A08u) goto L_08AE3A08;
    return;
L_08AE3A08:
    ctx.set_gpr(31, 0x08AE3A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A10u) goto L_08AE3A10;
    return;
L_08AE3A10:
    ctx.set_gpr(31, 0x08AE3A18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A18u) goto L_08AE3A18;
    return;
L_08AE3A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3A44u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A44u) goto L_08AE3A44;
    return;
L_08AE3A44:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE3A84;
      }
      goto L_08AE3A4C;
    }
L_08AE3A4C:
    ctx.set_gpr(31, 0x08AE3A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A54u) goto L_08AE3A54;
    return;
L_08AE3A54:
    ctx.set_gpr(31, 0x08AE3A5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A5Cu) goto L_08AE3A5C;
    return;
L_08AE3A5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(31, 0x08AE3A80u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A80u) goto L_08AE3A80;
    return;
L_08AE3A80:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    goto L_08AE3A84;
L_08AE3A84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AB4;
      }
      goto L_08AE3A90;
    }
L_08AE3A90:
    ctx.set_gpr(31, 0x08AE3A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3A98u) goto L_08AE3A98;
    return;
L_08AE3A98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3AACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AACu) goto L_08AE3AAC;
    return;
L_08AE3AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3AD0;
      }
      goto L_08AE3AB4;
    }
L_08AE3AB4:
    ctx.set_gpr(31, 0x08AE3ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3ABCu) goto L_08AE3ABC;
    return;
L_08AE3ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3AD0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3AD0u) goto L_08AE3AD0;
    return;
L_08AE3AD0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), ctx.gpr[3]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 56u, 0x08AE4350u>(ctx, &aot_mem); return;
      }
      goto L_08AE3AE8;
    }
L_08AE3AE8:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23072), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 57u, 0x08AE4354u>(ctx, &aot_mem); return;
      }
      goto L_08AE3AF8;
    }
L_08AE3AF8:
    ctx.set_gpr(31, 0x08AE3B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 58u, 0x08AE4370u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B00u) goto L_08AE3B00;
    return;
L_08AE3B00:
    ctx.set_gpr(31, 0x08AE3B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B08u) goto L_08AE3B08;
    return;
L_08AE3B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3B14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B14u) goto L_08AE3B14;
    return;
L_08AE3B14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3B68;
      }
      goto L_08AE3B1C;
    }
L_08AE3B1C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_08AE3BD0;
    }
    goto L_08AE3B3C;
L_08AE3B3C:
    ctx.set_gpr(31, 0x08AE3B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B44u) goto L_08AE3B44;
    return;
L_08AE3B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3B58u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3B58u) goto L_08AE3B58;
    return;
L_08AE3B58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AE3BCC;
      }
      goto L_08AE3B68;
    }
L_08AE3B68:
    ctx.set_gpr(31, 0x08AE3B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B70u) goto L_08AE3B70;
    return;
L_08AE3B70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3B7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3B7Cu) goto L_08AE3B7C;
    return;
L_08AE3B7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3BCC;
      }
      goto L_08AE3B84;
    }
L_08AE3B84:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE3BCC;
      }
      goto L_08AE3BA4;
    }
L_08AE3BA4:
    ctx.set_gpr(31, 0x08AE3BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BACu) goto L_08AE3BAC;
    return;
L_08AE3BAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3BC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3BC0u) goto L_08AE3BC0;
    return;
L_08AE3BC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08AE3BCC;
L_08AE3BCC:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AE3BD0;
L_08AE3BD0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AE3BDCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 583u, 0x08AE5E50u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BDCu) goto L_08AE3BDC;
    return;
L_08AE3BDC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AE3BE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 612u, 0x08AE60E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BE8u) goto L_08AE3BE8;
    return;
L_08AE3BE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AE3BF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 604u, 0x08AE5F84u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BF4u) goto L_08AE3BF4;
    return;
L_08AE3BF4:
    ctx.set_gpr(31, 0x08AE3BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3BFCu) goto L_08AE3BFC;
    return;
L_08AE3BFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3C08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C08u) goto L_08AE3C08;
    return;
L_08AE3C08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3E30;
      }
      goto L_08AE3C10;
    }
L_08AE3C10:
    ctx.set_gpr(31, 0x08AE3C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C18u) goto L_08AE3C18;
    return;
L_08AE3C18:
    ctx.set_gpr(31, 0x08AE3C20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C20u) goto L_08AE3C20;
    return;
L_08AE3C20:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), 0u);
      if (branch_taken) {
          goto L_08AE3D10;
      }
      goto L_08AE3C30;
    }
L_08AE3C30:
    ctx.set_gpr(31, 0x08AE3C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C38u) goto L_08AE3C38;
    return;
L_08AE3C38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3C4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C4Cu) goto L_08AE3C4C;
    return;
L_08AE3C4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C7C;
      }
      goto L_08AE3C58;
    }
L_08AE3C58:
    ctx.set_gpr(31, 0x08AE3C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C60u) goto L_08AE3C60;
    return;
L_08AE3C60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3C74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C74u) goto L_08AE3C74;
    return;
L_08AE3C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3C98;
      }
      goto L_08AE3C7C;
    }
L_08AE3C7C:
    ctx.set_gpr(31, 0x08AE3C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3C84u) goto L_08AE3C84;
    return;
L_08AE3C84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3C98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3C98u) goto L_08AE3C98;
    return;
L_08AE3C98:
    ctx.set_gpr(31, 0x08AE3CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3CA0u) goto L_08AE3CA0;
    return;
L_08AE3CA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AE3CB4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CB4u) goto L_08AE3CB4;
    return;
L_08AE3CB4:
    ctx.set_gpr(31, 0x08AE3CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3CBCu) goto L_08AE3CBC;
    return;
L_08AE3CBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(31, 0x08AE3CD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CD0u) goto L_08AE3CD0;
    return;
L_08AE3CD0:
    ctx.set_gpr(31, 0x08AE3CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3CD8u) goto L_08AE3CD8;
    return;
L_08AE3CD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08AE3CECu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3CECu) goto L_08AE3CEC;
    return;
L_08AE3CEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 56u, 0x08AE4350u>(ctx, &aot_mem); return;
      }
      goto L_08AE3D10;
    }
L_08AE3D10:
    ctx.set_gpr(31, 0x08AE3D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3D18u) goto L_08AE3D18;
    return;
L_08AE3D18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3D2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3D2Cu) goto L_08AE3D2C;
    return;
L_08AE3D2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3D5C;
      }
      goto L_08AE3D38;
    }
L_08AE3D38:
    ctx.set_gpr(31, 0x08AE3D40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D40u) goto L_08AE3D40;
    return;
L_08AE3D40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3D54u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3D54u) goto L_08AE3D54;
    return;
L_08AE3D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3D78;
      }
      goto L_08AE3D5C;
    }
L_08AE3D5C:
    ctx.set_gpr(31, 0x08AE3D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D64u) goto L_08AE3D64;
    return;
L_08AE3D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3D78u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3D78u) goto L_08AE3D78;
    return;
L_08AE3D78:
    ctx.set_gpr(31, 0x08AE3D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3D80u) goto L_08AE3D80;
    return;
L_08AE3D80:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE3DA0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3DA0u) goto L_08AE3DA0;
    return;
L_08AE3DA0:
    ctx.set_gpr(31, 0x08AE3DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3DA8u) goto L_08AE3DA8;
    return;
L_08AE3DA8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE3DC8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3DC8u) goto L_08AE3DC8;
    return;
L_08AE3DC8:
    ctx.set_gpr(31, 0x08AE3DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3DD0u) goto L_08AE3DD0;
    return;
L_08AE3DD0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE3DF0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3DF0u) goto L_08AE3DF0;
    return;
L_08AE3DF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), 0u);
    ctx.set_gpr(31, 0x08AE3E0Cu);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E0Cu) goto L_08AE3E0C;
    return;
L_08AE3E0C:
    ctx.set_gpr(31, 0x08AE3E14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E14u) goto L_08AE3E14;
    return;
L_08AE3E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08AE3E24u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3E24u) goto L_08AE3E24;
    return;
L_08AE3E24:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 56u, 0x08AE4350u>(ctx, &aot_mem); return;
      }
      goto L_08AE3E30;
    }
L_08AE3E30:
    ctx.set_gpr(31, 0x08AE3E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E38u) goto L_08AE3E38;
    return;
L_08AE3E38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3E44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E44u) goto L_08AE3E44;
    return;
L_08AE3E44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3F3C;
      }
      goto L_08AE3E4C;
    }
L_08AE3E4C:
    ctx.set_gpr(31, 0x08AE3E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3E54u) goto L_08AE3E54;
    return;
L_08AE3E54:
    ctx.set_gpr(31, 0x08AE3E5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E5Cu) goto L_08AE3E5C;
    return;
L_08AE3E5C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08AE3E74u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3E74u) goto L_08AE3E74;
    return;
L_08AE3E74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3E88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3E88u) goto L_08AE3E88;
    return;
L_08AE3E88:
    ctx.set_gpr(31, 0x08AE3E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3E90u) goto L_08AE3E90;
    return;
L_08AE3E90:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE3EB0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3EB0u) goto L_08AE3EB0;
    return;
L_08AE3EB0:
    ctx.set_gpr(31, 0x08AE3EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EB8u) goto L_08AE3EB8;
    return;
L_08AE3EB8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE3ED8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3ED8u) goto L_08AE3ED8;
    return;
L_08AE3ED8:
    ctx.set_gpr(31, 0x08AE3EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3EE0u) goto L_08AE3EE0;
    return;
L_08AE3EE0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AE3F00u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F00u) goto L_08AE3F00;
    return;
L_08AE3F00:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AE3F1Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23072), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F1Cu) goto L_08AE3F1C;
    return;
L_08AE3F1C:
    ctx.set_gpr(31, 0x08AE3F24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F24u) goto L_08AE3F24;
    return;
L_08AE3F24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3F34u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F34u) goto L_08AE3F34;
    return;
L_08AE3F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 56u, 0x08AE4350u>(ctx, &aot_mem); return;
      }
      goto L_08AE3F3C;
    }
L_08AE3F3C:
    ctx.set_gpr(31, 0x08AE3F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F44u) goto L_08AE3F44;
    return;
L_08AE3F44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3F50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F50u) goto L_08AE3F50;
    return;
L_08AE3F50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 12u, 0x08AE40D0u>(ctx, &aot_mem); return;
      }
      goto L_08AE3F58;
    }
L_08AE3F58:
    ctx.set_gpr(31, 0x08AE3F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F60u) goto L_08AE3F60;
    return;
L_08AE3F60:
    ctx.set_gpr(31, 0x08AE3F68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08AE3F68u) goto L_08AE3F68;
    return;
L_08AE3F68:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08AE3F8Cu);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3F8Cu) goto L_08AE3F8C;
    return;
L_08AE3F8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AE3FA0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3FA0u) goto L_08AE3FA0;
    return;
L_08AE3FA0:
    ctx.set_gpr(31, 0x08AE3FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FA8u) goto L_08AE3FA8;
    return;
L_08AE3FA8:
    ctx.set_gpr(31, 0x08AE3FB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FB0u) goto L_08AE3FB0;
    return;
L_08AE3FB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AE3FBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3FBCu) goto L_08AE3FBC;
    return;
L_08AE3FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE3FEC;
      }
      goto L_08AE3FC8;
    }
L_08AE3FC8:
    ctx.set_gpr(31, 0x08AE3FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FD0u) goto L_08AE3FD0;
    return;
L_08AE3FD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.set_gpr(31, 0x08AE3FE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE3FE4u) goto L_08AE3FE4;
    return;
L_08AE3FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 2u, 0x08AE4008u>(ctx, &aot_mem); return;
      }
      goto L_08AE3FEC;
    }
L_08AE3FEC:
    ctx.set_gpr(31, 0x08AE3FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AE3FF4u) goto L_08AE3FF4;
    return;
L_08AE3FF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(82));
    ctx.pc = 0x08AE4000u; return;
}

void recomp_unit_0183(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0183_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_183(Runtime &runtime) {
    runtime.register_generated_unit(183u, 0x08AE0000u, 16384u, &recomp_unit_0183, &recomp_unit_0183_entry);
    runtime.register_function(0x08AE0004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0010u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0018u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0028u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0050u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0070u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0088u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE009Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE00FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0104u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0118u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE012Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0134u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0154u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE015Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE017Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0184u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE019Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE01FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0204u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE020Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0220u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0234u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE023Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE025Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0264u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0290u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0298u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE02F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0300u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0314u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0318u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0328u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0334u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE033Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0344u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0368u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0374u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE037Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0384u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0398u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE03FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0410u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0418u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0440u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0480u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0488u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE048Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE049Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE04F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0530u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0538u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0548u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0554u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE055Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE056Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0580u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0590u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE05F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0620u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0630u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0638u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0640u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0648u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0654u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE066Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0674u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0680u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0688u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE06FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0714u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0720u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0728u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE073Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0744u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE074Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE075Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE076Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0778u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0790u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE079Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE07F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0800u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0808u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0818u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0820u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0840u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0848u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0854u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE085Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE088Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0894u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE08F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0900u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0928u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0938u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0958u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0960u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE096Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0984u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE098Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE09ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0B88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0C9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0CE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D48u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0D9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0EF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE0FE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1010u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1040u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1058u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1080u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1088u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1090u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE10F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1100u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1138u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE115Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1164u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1170u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1178u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1198u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE11F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1218u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1224u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1228u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1230u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1238u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1244u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE124Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1254u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1260u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1268u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1280u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1288u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1294u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE12FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1320u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1334u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1364u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE136Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE137Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1384u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1388u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1390u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE13F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1408u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1420u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE145Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1470u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1480u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1490u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1498u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE14D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1504u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE150Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE151Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1528u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1530u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1540u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1560u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1568u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1598u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE15FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1614u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE161Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1630u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1648u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1650u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE165Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1664u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE166Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1678u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1684u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1690u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1698u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE16FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1704u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1724u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1748u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1750u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1758u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1764u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1774u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE177Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1788u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1790u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE17F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1808u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1814u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE181Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE182Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1834u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE183Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1848u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1858u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE185Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1870u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1884u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1898u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE18F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1900u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE190Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1914u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE191Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1940u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1944u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1954u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE198Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1998u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE19E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1A9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ACCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ADCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1B8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1BECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1C90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1CD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1D90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1DFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1E98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1EF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1F9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE1FF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2000u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2008u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE201Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2024u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2034u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE203Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2040u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2050u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2064u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2074u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2080u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2084u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE20F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2100u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2108u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2128u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2170u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2180u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE218Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2198u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE21E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2208u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE220Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2224u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE224Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE225Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2264u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2278u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2280u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2290u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2298u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE22F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2308u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE230Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE231Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2324u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2328u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2338u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2348u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2350u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2358u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2360u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2380u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE23F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE240Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2414u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2428u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2430u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2450u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2458u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2460u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2470u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE248Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2494u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE24FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2500u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE250Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE251Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2520u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2530u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2538u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE253Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE254Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE255Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2564u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE256Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2574u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE258Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2594u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE25FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2604u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2618u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2620u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2628u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE263Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2644u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2664u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE266Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2670u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE268Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE26D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2704u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE270Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2748u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2758u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE276Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2774u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2788u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2794u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE27E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2800u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2814u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2828u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE283Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE284Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2860u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2874u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE287Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2884u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE288Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE28ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE290Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2918u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2924u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2928u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2930u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2948u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2958u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2960u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE296Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2970u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2988u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE29F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2A9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2B98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2BFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2C9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2CF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2D9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DD4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2DECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E6Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E94u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2E9Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2ED0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2EF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F04u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F28u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2F98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FC4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE2FFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3004u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE300Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3020u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3028u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3030u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3044u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3048u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3050u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3058u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3060u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE306Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3078u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3080u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3094u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE309Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE30F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE310Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3110u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3118u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3120u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3128u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3130u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3134u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3144u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3154u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3188u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3190u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE31CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3200u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3208u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3240u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3248u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE327Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3284u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE32FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3334u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE333Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3370u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3378u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33ECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE33FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3404u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3438u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE343Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3444u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3458u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3468u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3478u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3484u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE348Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE34FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3510u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3518u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE352Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3534u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3548u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3550u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3570u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3578u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE358Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3594u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35B4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35D0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE35F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3600u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3608u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE361Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3624u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3644u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE364Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3660u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3668u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3688u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3690u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36ACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36CCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36D4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE36F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3714u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE371Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3730u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3738u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3758u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3760u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3774u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE377Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE379Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37A4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37E8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE37FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3804u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3824u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE382Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3840u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3848u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3868u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3870u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3884u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE388Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38BCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38C4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38DCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38E4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38F4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE38FCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE390Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3918u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3920u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3930u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3934u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3940u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3950u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3988u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3994u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39A0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39A8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39B0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39B8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39C0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39C8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39D8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39E0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39F0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE39F8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3A98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ABCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3AF8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B70u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3B84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BA4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BACu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BC0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BCCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BDCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BE8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BF4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3BFCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C08u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C20u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C7Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C84u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3C98u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CB4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CD8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3CECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D10u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D18u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D2Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D40u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D64u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D78u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3D80u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3DF0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E0Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E14u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E30u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E38u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E4Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E54u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E5Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E74u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E88u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3E90u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EB8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3ED8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3EE0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F00u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F1Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F24u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F34u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F3Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F44u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F50u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F58u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F60u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F68u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3F8Cu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FA0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FA8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FB0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FBCu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FC8u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FD0u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FE4u, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FECu, &recomp_unit_0183, "recomp_unit_0183");
    runtime.register_function(0x08AE3FF4u, &recomp_unit_0183, "recomp_unit_0183");
}
} // namespace psprecomp
