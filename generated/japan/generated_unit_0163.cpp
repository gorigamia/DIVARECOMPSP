#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0163[4078] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 10, 0, 11, 12, 0, 0, 0,
    13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 15, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0,
    52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0,
    63, 0, 64, 0, 0, 65, 66, 0, 67, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0, 71, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0,
    0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0,
    92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 95, 96, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 101, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108,
    0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116,
    0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0,
    123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0,
    137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0,
    0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165,
    0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0,
    0, 0, 0, 0, 175, 176, 0, 177, 0, 178, 0, 0, 0, 0, 179, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186,
    0, 187, 0, 0, 0, 0, 0, 188, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0,
    202, 0, 203, 0, 0, 0, 0, 204, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216,
    0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0,
    233, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 246,
    0, 247, 0, 248, 249, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 0, 0,
    258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0,
    0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 289, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0,
    296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 299, 0, 0, 300, 0, 0, 301,
    0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 310, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0,
    322, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0,
    331, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338,
    0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0,
    0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0,
    0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370,
    0, 371, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 0, 375, 0, 376, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 381, 382, 0,
    383, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 0, 0,
    0, 396, 0, 397, 398, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 406,
    0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419,
    0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 428, 429, 0, 0, 0, 0, 0, 0, 430, 0,
    431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438,
    439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 446, 0,
    447, 0, 0, 0, 448, 0, 449, 450, 451, 0, 452, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456,
    0, 457, 0, 0, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0,
    0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 0, 475,
    0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 485,
    0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0,
    495, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505,
    0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 518,
    0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 522, 0, 523, 524, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0,
    529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0,
    0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 549, 0, 550, 0, 0,
    0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 0,
    0, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 570, 0, 571, 0, 0,
    572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 580, 0, 581, 0, 0, 0, 582, 0, 583, 0, 584, 0,
    0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 589, 590, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0,
    0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 620, 0, 621, 0,
    622, 0, 623, 0, 0, 624, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 631, 0, 0, 0,
    632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0,
    0, 0, 0, 0, 0, 641, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0,
    0, 0, 651, 0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0,
    0, 662, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 0, 671, 0, 672,
    0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 683, 0, 684, 0,
    0, 0, 0, 685, 0, 686, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 695, 0, 696,
    0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 706, 0, 0,
    0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0,
    717, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 725, 0, 0, 726,
    0, 727, 0, 0, 0, 0, 728, 729, 0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 739,
    0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753,
    754, 0, 755, 0, 0, 0, 756, 0, 0, 757, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0,
    766, 0, 0, 0, 0, 767, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774,
    0, 775, 0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0,
    784, 785, 0, 0, 786, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794, 0, 795, 0,
    0, 0, 796, 0, 797, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 0, 0, 807,
    0, 0, 808, 0, 809, 810, 0, 811, 0, 812, 0, 813, 0, 814, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 822, 0, 823,
    0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 829, 0, 830, 0, 831, 0, 832, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0,
    839, 0, 840, 0, 0, 841, 842, 0, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 0, 851, 0,
    852, 0, 0, 0, 0, 853, 0, 0, 854, 855, 0, 856, 0, 0, 0, 0, 0, 857, 0, 858, 0, 859, 0, 0, 860, 0, 861, 0, 862, 0, 863, 0,
    864, 0, 865, 0, 866, 0, 0, 0, 867, 0, 868, 0, 869, 0, 0, 870, 0, 0, 0, 871, 0, 872, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0,
    0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 0, 0, 881, 0, 882, 0, 883, 0, 0, 0, 0, 884,
    0, 885, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 898, 0,
    899, 0, 900, 0, 901, 0, 0, 0, 0, 0, 902, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 0, 909, 0, 0, 910,
    0, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 0, 0, 0, 0, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 922, 0, 923, 0,
    924, 0, 925, 0, 926, 0, 927, 0, 928, 0, 929, 0, 930, 0, 931, 0, 932, 0, 0, 933, 0, 934, 0, 0, 0, 0, 935, 0, 936, 937, 0, 0,
    0, 0, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 941, 0, 942, 0, 943, 0, 944, 0, 945, 0, 0, 0, 946, 0,
    947, 0, 0, 948, 0, 949, 0, 950, 0, 0, 0, 951, 0, 952, 0, 0, 953, 954, 955, 0, 0, 956, 0, 0, 0, 0, 0, 957, 0, 0, 0, 0,
    0, 958, 0, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0,
    0, 964, 0, 0, 0, 0, 0, 965, 966, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0,
    969, 0, 0, 0, 0, 970, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0,
    0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 977, 0, 978, 0, 979, 0, 0, 0, 980, 0, 981, 0, 982, 0, 0, 983,
    0, 984, 0, 0, 0, 985, 0, 986, 0, 987, 0, 0, 988, 0, 989, 0, 0, 0, 990, 0, 991, 0, 992, 0, 0, 993, 0, 0, 994, 0, 995, 0,
    996, 0, 997, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 999, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1000, 0, 0, 1001, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 1004, 0, 0, 0, 0, 1005, 0, 1006, 0, 0, 1007, 0, 0, 0, 0, 1008, 0, 1009, 0,
    0, 1010, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1011, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1012, 0,
    0, 1013, 0, 0, 1014, 0, 0, 0, 0, 0, 1015, 0, 0, 0, 1016, 0, 1017, 0, 0, 0, 1018, 0, 0, 1019, 1020, 0, 0, 1021, 0, 0, 1022, 1023,
    1024, 0, 1025, 0, 1026, 0, 0, 0, 1027, 0, 0, 1028, 1029, 0, 0, 1030, 0, 0, 1031, 1032, 1033, 0, 1034, 0, 0, 1035, 0, 1036, 0, 0, 1037, 0,
    1038, 0, 0, 1039, 0, 0, 0, 1040, 0, 0, 0, 0, 0, 1041, 1042, 0, 0, 0, 1043, 0, 1044, 1045, 0, 0, 0, 0, 0, 0, 1046, 0, 0, 0,
    0, 0, 0, 0, 1047, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 0, 0, 1049, 0, 0, 0, 0, 0, 0, 1050, 0, 1051, 0, 0, 1052, 0, 0, 0,
    1053, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1054, 0, 0, 0, 1055, 0, 0, 0, 1056, 0, 1057, 0, 1058, 0, 1059, 0, 0, 1060, 0, 0, 0,
    0, 0, 1061, 0, 1062, 0, 0, 0, 0, 0, 1063, 1064, 0, 0, 1065, 0, 0, 0, 1066, 0, 0, 0, 0, 1067, 0, 0, 0, 0, 0, 0, 1068, 0,
    0, 0, 0, 1069, 0, 0, 0, 1070, 0, 0, 0, 1071, 0, 0, 1072, 0, 1073, 0, 1074, 0, 1075, 0, 1076, 0, 0, 1077, 1078, 1079, 0, 0, 1080, 0,
    0, 0, 0, 1081, 0, 0, 0, 0, 0, 1082, 0, 0, 0, 1083, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1084, 0, 0, 0, 0, 0, 0, 1085, 0, 0, 1086, 0, 0, 1087, 0, 0, 0, 0, 0, 0, 0, 1088, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1089, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1092, 0, 0, 0, 0, 0, 1093, 0, 0, 0, 1094, 0, 0, 0, 0, 0, 1095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1096, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1097, 0, 0, 0, 0, 1098, 0, 0, 0, 0, 0, 1099, 0, 1100, 0, 1101, 0, 0, 0, 0, 0, 1102, 0, 0, 0,
    0, 0, 1103, 0, 0, 0, 0, 0, 0, 1104, 0, 0, 0, 1105, 0, 0, 0, 0, 0, 0, 1106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1107, 0, 0, 1108, 0, 0, 1109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1110, 0, 0, 0, 0, 0, 1111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1113, 0, 0, 0, 0,
    1114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1115,
};
void recomp_unit_0163_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A90004u;
        entry_id = (entry_delta < 16312u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0163[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A90004;
    case 2u: goto L_08A90014;
    case 3u: goto L_08A9001C;
    case 4u: goto L_08A90024;
    case 5u: goto L_08A90030;
    case 6u: goto L_08A90040;
    case 7u: goto L_08A9004C;
    case 8u: goto L_08A90054;
    case 9u: goto L_08A9005C;
    case 10u: goto L_08A90068;
    case 11u: goto L_08A90070;
    case 12u: goto L_08A90074;
    case 13u: goto L_08A90084;
    case 14u: goto L_08A90180;
    case 15u: goto L_08A9018C;
    case 16u: goto L_08A90194;
    case 17u: goto L_08A901A0;
    case 18u: goto L_08A901A8;
    case 19u: goto L_08A901B0;
    case 20u: goto L_08A901C0;
    case 21u: goto L_08A901C8;
    case 22u: goto L_08A901D8;
    case 23u: goto L_08A901F4;
    case 24u: goto L_08A9020C;
    case 25u: goto L_08A9022C;
    case 26u: goto L_08A90234;
    case 27u: goto L_08A90274;
    case 28u: goto L_08A9027C;
    case 29u: goto L_08A902B8;
    case 30u: goto L_08A902C8;
    case 31u: goto L_08A902D0;
    case 32u: goto L_08A90304;
    case 33u: goto L_08A9030C;
    case 34u: goto L_08A90354;
    case 35u: goto L_08A9035C;
    case 36u: goto L_08A903A4;
    case 37u: goto L_08A903AC;
    case 38u: goto L_08A903C4;
    case 39u: goto L_08A903D8;
    case 40u: goto L_08A903E0;
    case 41u: goto L_08A903EC;
    case 42u: goto L_08A903F4;
    case 43u: goto L_08A90400;
    case 44u: goto L_08A90408;
    case 45u: goto L_08A90438;
    case 46u: goto L_08A9044C;
    case 47u: goto L_08A90454;
    case 48u: goto L_08A90460;
    case 49u: goto L_08A90468;
    case 50u: goto L_08A90470;
    case 51u: goto L_08A9047C;
    case 52u: goto L_08A90484;
    case 53u: goto L_08A90490;
    case 54u: goto L_08A904A4;
    case 55u: goto L_08A904AC;
    case 56u: goto L_08A904B4;
    case 57u: goto L_08A904C0;
    case 58u: goto L_08A904C8;
    case 59u: goto L_08A904D4;
    case 60u: goto L_08A904E8;
    case 61u: goto L_08A904F0;
    case 62u: goto L_08A904F8;
    case 63u: goto L_08A90504;
    case 64u: goto L_08A9050C;
    case 65u: goto L_08A90518;
    case 66u: goto L_08A9051C;
    case 67u: goto L_08A90524;
    case 68u: goto L_08A9052C;
    case 69u: goto L_08A90538;
    case 70u: goto L_08A90540;
    case 71u: goto L_08A90550;
    case 72u: goto L_08A90554;
    case 73u: goto L_08A9055C;
    case 74u: goto L_08A90564;
    case 75u: goto L_08A90570;
    case 76u: goto L_08A90578;
    case 77u: goto L_08A90588;
    case 78u: goto L_08A905A4;
    case 79u: goto L_08A905B8;
    case 80u: goto L_08A905C8;
    case 81u: goto L_08A905D8;
    case 82u: goto L_08A905E8;
    case 83u: goto L_08A905F8;
    case 84u: goto L_08A90608;
    case 85u: goto L_08A90610;
    case 86u: goto L_08A9061C;
    case 87u: goto L_08A90624;
    case 88u: goto L_08A90634;
    case 89u: goto L_08A90650;
    case 90u: goto L_08A90664;
    case 91u: goto L_08A90674;
    case 92u: goto L_08A90684;
    case 93u: goto L_08A90694;
    case 94u: goto L_08A906A4;
    case 95u: goto L_08A906B0;
    case 96u: goto L_08A906B4;
    case 97u: goto L_08A906C8;
    case 98u: goto L_08A906D8;
    case 99u: goto L_08A906E8;
    case 100u: goto L_08A906F4;
    case 101u: goto L_08A906F8;
    case 102u: goto L_08A90718;
    case 103u: goto L_08A90724;
    case 104u: goto L_08A90730;
    case 105u: goto L_08A90740;
    case 106u: goto L_08A9074C;
    case 107u: goto L_08A9076C;
    case 108u: goto L_08A90780;
    case 109u: goto L_08A9078C;
    case 110u: goto L_08A90798;
    case 111u: goto L_08A907B8;
    case 112u: goto L_08A907C4;
    case 113u: goto L_08A907D0;
    case 114u: goto L_08A907DC;
    case 115u: goto L_08A907F4;
    case 116u: goto L_08A90800;
    case 117u: goto L_08A9080C;
    case 118u: goto L_08A90818;
    case 119u: goto L_08A90840;
    case 120u: goto L_08A9084C;
    case 121u: goto L_08A90858;
    case 122u: goto L_08A90864;
    case 123u: goto L_08A90884;
    case 124u: goto L_08A90890;
    case 125u: goto L_08A9089C;
    case 126u: goto L_08A908A8;
    case 127u: goto L_08A908CC;
    case 128u: goto L_08A908E0;
    case 129u: goto L_08A908F8;
    case 130u: goto L_08A9090C;
    case 131u: goto L_08A90918;
    case 132u: goto L_08A90928;
    case 133u: goto L_08A90938;
    case 134u: goto L_08A90944;
    case 135u: goto L_08A90964;
    case 136u: goto L_08A90978;
    case 137u: goto L_08A90984;
    case 138u: goto L_08A90990;
    case 139u: goto L_08A9099C;
    case 140u: goto L_08A909A8;
    case 141u: goto L_08A909B4;
    case 142u: goto L_08A909C0;
    case 143u: goto L_08A909CC;
    case 144u: goto L_08A909D8;
    case 145u: goto L_08A909E4;
    case 146u: goto L_08A909F0;
    case 147u: goto L_08A909FC;
    case 148u: goto L_08A90A08;
    case 149u: goto L_08A90A14;
    case 150u: goto L_08A90A20;
    case 151u: goto L_08A90A2C;
    case 152u: goto L_08A90A38;
    case 153u: goto L_08A90A44;
    case 154u: goto L_08A90A50;
    case 155u: goto L_08A90A60;
    case 156u: goto L_08A90A68;
    case 157u: goto L_08A90A70;
    case 158u: goto L_08A90A94;
    case 159u: goto L_08A90AA4;
    case 160u: goto L_08A90AB8;
    case 161u: goto L_08A90AC0;
    case 162u: goto L_08A90AD8;
    case 163u: goto L_08A90AE0;
    case 164u: goto L_08A90AF8;
    case 165u: goto L_08A90B00;
    case 166u: goto L_08A90B0C;
    case 167u: goto L_08A90B14;
    case 168u: goto L_08A90B2C;
    case 169u: goto L_08A90B34;
    case 170u: goto L_08A90B4C;
    case 171u: goto L_08A90B54;
    case 172u: goto L_08A90B5C;
    case 173u: goto L_08A90B74;
    case 174u: goto L_08A90B7C;
    case 175u: goto L_08A90B94;
    case 176u: goto L_08A90B98;
    case 177u: goto L_08A90BA0;
    case 178u: goto L_08A90BA8;
    case 179u: goto L_08A90BBC;
    case 180u: goto L_08A90BC0;
    case 181u: goto L_08A90BC8;
    case 182u: goto L_08A90BD0;
    case 183u: goto L_08A90BD8;
    case 184u: goto L_08A90BE0;
    case 185u: goto L_08A90BF8;
    case 186u: goto L_08A90C00;
    case 187u: goto L_08A90C08;
    case 188u: goto L_08A90C20;
    case 189u: goto L_08A90C24;
    case 190u: goto L_08A90C30;
    case 191u: goto L_08A90C38;
    case 192u: goto L_08A90C6C;
    case 193u: goto L_08A90C74;
    case 194u: goto L_08A90CA8;
    case 195u: goto L_08A90CB4;
    case 196u: goto L_08A90CBC;
    case 197u: goto L_08A90CD0;
    case 198u: goto L_08A90CD4;
    case 199u: goto L_08A90CE0;
    case 200u: goto L_08A90CE8;
    case 201u: goto L_08A90CFC;
    case 202u: goto L_08A90D04;
    case 203u: goto L_08A90D0C;
    case 204u: goto L_08A90D20;
    case 205u: goto L_08A90D24;
    case 206u: goto L_08A90D64;
    case 207u: goto L_08A90D7C;
    case 208u: goto L_08A90DA4;
    case 209u: goto L_08A90DC4;
    case 210u: goto L_08A90DE0;
    case 211u: goto L_08A90DF0;
    case 212u: goto L_08A90E08;
    case 213u: goto L_08A90E28;
    case 214u: goto L_08A90E40;
    case 215u: goto L_08A90E60;
    case 216u: goto L_08A90E80;
    case 217u: goto L_08A90E8C;
    case 218u: goto L_08A90EA0;
    case 219u: goto L_08A90EC0;
    case 220u: goto L_08A90ED8;
    case 221u: goto L_08A90EF8;
    case 222u: goto L_08A90F04;
    case 223u: goto L_08A90F34;
    case 224u: goto L_08A90F4C;
    case 225u: goto L_08A90F54;
    case 226u: goto L_08A90F70;
    case 227u: goto L_08A90F88;
    case 228u: goto L_08A90FA0;
    case 229u: goto L_08A90FA8;
    case 230u: goto L_08A90FC4;
    case 231u: goto L_08A90FCC;
    case 232u: goto L_08A90FE4;
    case 233u: goto L_08A91004;
    case 234u: goto L_08A91010;
    case 235u: goto L_08A91018;
    case 236u: goto L_08A91020;
    case 237u: goto L_08A91028;
    case 238u: goto L_08A91030;
    case 239u: goto L_08A91040;
    case 240u: goto L_08A91048;
    case 241u: goto L_08A91054;
    case 242u: goto L_08A9105C;
    case 243u: goto L_08A91064;
    case 244u: goto L_08A91070;
    case 245u: goto L_08A91078;
    case 246u: goto L_08A91080;
    case 247u: goto L_08A91088;
    case 248u: goto L_08A91090;
    case 249u: goto L_08A91094;
    case 250u: goto L_08A9109C;
    case 251u: goto L_08A910AC;
    case 252u: goto L_08A910B4;
    case 253u: goto L_08A910C4;
    case 254u: goto L_08A910D4;
    case 255u: goto L_08A910DC;
    case 256u: goto L_08A910EC;
    case 257u: goto L_08A910F4;
    case 258u: goto L_08A91104;
    case 259u: goto L_08A9110C;
    case 260u: goto L_08A9111C;
    case 261u: goto L_08A91124;
    case 262u: goto L_08A9112C;
    case 263u: goto L_08A91134;
    case 264u: goto L_08A91138;
    case 265u: goto L_08A9115C;
    case 266u: goto L_08A9116C;
    case 267u: goto L_08A9117C;
    case 268u: goto L_08A911B0;
    case 269u: goto L_08A911B8;
    case 270u: goto L_08A911C8;
    case 271u: goto L_08A911D0;
    case 272u: goto L_08A911E8;
    case 273u: goto L_08A911F0;
    case 274u: goto L_08A911F8;
    case 275u: goto L_08A91208;
    case 276u: goto L_08A91210;
    case 277u: goto L_08A91228;
    case 278u: goto L_08A91230;
    case 279u: goto L_08A91238;
    case 280u: goto L_08A91250;
    case 281u: goto L_08A91254;
    case 282u: goto L_08A91268;
    case 283u: goto L_08A91290;
    case 284u: goto L_08A912A8;
    case 285u: goto L_08A912C0;
    case 286u: goto L_08A912D8;
    case 287u: goto L_08A912FC;
    case 288u: goto L_08A91330;
    case 289u: goto L_08A91334;
    case 290u: goto L_08A9133C;
    case 291u: goto L_08A91348;
    case 292u: goto L_08A91354;
    case 293u: goto L_08A91360;
    case 294u: goto L_08A91368;
    case 295u: goto L_08A91378;
    case 296u: goto L_08A91384;
    case 297u: goto L_08A913A8;
    case 298u: goto L_08A913E4;
    case 299u: goto L_08A913E8;
    case 300u: goto L_08A913F4;
    case 301u: goto L_08A91400;
    case 302u: goto L_08A9140C;
    case 303u: goto L_08A91418;
    case 304u: goto L_08A91420;
    case 305u: goto L_08A91428;
    case 306u: goto L_08A91434;
    case 307u: goto L_08A9143C;
    case 308u: goto L_08A91448;
    case 309u: goto L_08A91450;
    case 310u: goto L_08A91458;
    case 311u: goto L_08A9145C;
    case 312u: goto L_08A91464;
    case 313u: goto L_08A91490;
    case 314u: goto L_08A914B0;
    case 315u: goto L_08A914B8;
    case 316u: goto L_08A914C4;
    case 317u: goto L_08A914D0;
    case 318u: goto L_08A914DC;
    case 319u: goto L_08A914E4;
    case 320u: goto L_08A914EC;
    case 321u: goto L_08A914FC;
    case 322u: goto L_08A91504;
    case 323u: goto L_08A91514;
    case 324u: goto L_08A9151C;
    case 325u: goto L_08A91524;
    case 326u: goto L_08A9152C;
    case 327u: goto L_08A91534;
    case 328u: goto L_08A9153C;
    case 329u: goto L_08A9156C;
    case 330u: goto L_08A91574;
    case 331u: goto L_08A91584;
    case 332u: goto L_08A91590;
    case 333u: goto L_08A91598;
    case 334u: goto L_08A915A8;
    case 335u: goto L_08A915C8;
    case 336u: goto L_08A915D0;
    case 337u: goto L_08A915E0;
    case 338u: goto L_08A91600;
    case 339u: goto L_08A91608;
    case 340u: goto L_08A91618;
    case 341u: goto L_08A91638;
    case 342u: goto L_08A91640;
    case 343u: goto L_08A91650;
    case 344u: goto L_08A91670;
    case 345u: goto L_08A91678;
    case 346u: goto L_08A91688;
    case 347u: goto L_08A91690;
    case 348u: goto L_08A9169C;
    case 349u: goto L_08A916B0;
    case 350u: goto L_08A916B8;
    case 351u: goto L_08A916C4;
    case 352u: goto L_08A916CC;
    case 353u: goto L_08A916D4;
    case 354u: goto L_08A916DC;
    case 355u: goto L_08A916E8;
    case 356u: goto L_08A916F0;
    case 357u: goto L_08A916F8;
    case 358u: goto L_08A91708;
    case 359u: goto L_08A91710;
    case 360u: goto L_08A91718;
    case 361u: goto L_08A91724;
    case 362u: goto L_08A91730;
    case 363u: goto L_08A91738;
    case 364u: goto L_08A91744;
    case 365u: goto L_08A9174C;
    case 366u: goto L_08A91754;
    case 367u: goto L_08A91760;
    case 368u: goto L_08A9176C;
    case 369u: goto L_08A91778;
    case 370u: goto L_08A91780;
    case 371u: goto L_08A91788;
    case 372u: goto L_08A91798;
    case 373u: goto L_08A917A0;
    case 374u: goto L_08A917A8;
    case 375u: goto L_08A917B8;
    case 376u: goto L_08A917C0;
    case 377u: goto L_08A917C8;
    case 378u: goto L_08A917D4;
    case 379u: goto L_08A917DC;
    case 380u: goto L_08A917EC;
    case 381u: goto L_08A917F8;
    case 382u: goto L_08A917FC;
    case 383u: goto L_08A91804;
    case 384u: goto L_08A9180C;
    case 385u: goto L_08A91818;
    case 386u: goto L_08A91820;
    case 387u: goto L_08A91828;
    case 388u: goto L_08A91830;
    case 389u: goto L_08A91838;
    case 390u: goto L_08A91840;
    case 391u: goto L_08A91848;
    case 392u: goto L_08A91858;
    case 393u: goto L_08A91860;
    case 394u: goto L_08A91868;
    case 395u: goto L_08A91874;
    case 396u: goto L_08A91888;
    case 397u: goto L_08A91890;
    case 398u: goto L_08A91894;
    case 399u: goto L_08A91898;
    case 400u: goto L_08A918A4;
    case 401u: goto L_08A918B4;
    case 402u: goto L_08A918C8;
    case 403u: goto L_08A918D4;
    case 404u: goto L_08A918F0;
    case 405u: goto L_08A918FC;
    case 406u: goto L_08A91900;
    case 407u: goto L_08A91908;
    case 408u: goto L_08A91914;
    case 409u: goto L_08A9191C;
    case 410u: goto L_08A91948;
    case 411u: goto L_08A91950;
    case 412u: goto L_08A91958;
    case 413u: goto L_08A91980;
    case 414u: goto L_08A91988;
    case 415u: goto L_08A919B8;
    case 416u: goto L_08A919BC;
    case 417u: goto L_08A919CC;
    case 418u: goto L_08A919F4;
    case 419u: goto L_08A91A00;
    case 420u: goto L_08A91A08;
    case 421u: goto L_08A91A10;
    case 422u: goto L_08A91A18;
    case 423u: goto L_08A91A24;
    case 424u: goto L_08A91A2C;
    case 425u: goto L_08A91A38;
    case 426u: goto L_08A91A40;
    case 427u: goto L_08A91A54;
    case 428u: goto L_08A91A5C;
    case 429u: goto L_08A91A60;
    case 430u: goto L_08A91A7C;
    case 431u: goto L_08A91A84;
    case 432u: goto L_08A91A90;
    case 433u: goto L_08A91A9C;
    case 434u: goto L_08A91AB8;
    case 435u: goto L_08A91AC4;
    case 436u: goto L_08A91AD8;
    case 437u: goto L_08A91AEC;
    case 438u: goto L_08A91B00;
    case 439u: goto L_08A91B04;
    case 440u: goto L_08A91B1C;
    case 441u: goto L_08A91B2C;
    case 442u: goto L_08A91B3C;
    case 443u: goto L_08A91B5C;
    case 444u: goto L_08A91B68;
    case 445u: goto L_08A91B70;
    case 446u: goto L_08A91B7C;
    case 447u: goto L_08A91B84;
    case 448u: goto L_08A91B94;
    case 449u: goto L_08A91B9C;
    case 450u: goto L_08A91BA0;
    case 451u: goto L_08A91BA4;
    case 452u: goto L_08A91BAC;
    case 453u: goto L_08A91BC0;
    case 454u: goto L_08A91BC8;
    case 455u: goto L_08A91BE4;
    case 456u: goto L_08A91C00;
    case 457u: goto L_08A91C08;
    case 458u: goto L_08A91C1C;
    case 459u: goto L_08A91C28;
    case 460u: goto L_08A91C34;
    case 461u: goto L_08A91C3C;
    case 462u: goto L_08A91C50;
    case 463u: goto L_08A91C58;
    case 464u: goto L_08A91C6C;
    case 465u: goto L_08A91C74;
    case 466u: goto L_08A91C88;
    case 467u: goto L_08A91C90;
    case 468u: goto L_08A91CA8;
    case 469u: goto L_08A91CB0;
    case 470u: goto L_08A91CBC;
    case 471u: goto L_08A91CCC;
    case 472u: goto L_08A91CD8;
    case 473u: goto L_08A91CE0;
    case 474u: goto L_08A91CF4;
    case 475u: goto L_08A91D00;
    case 476u: goto L_08A91D0C;
    case 477u: goto L_08A91D14;
    case 478u: goto L_08A91D28;
    case 479u: goto L_08A91D30;
    case 480u: goto L_08A91D44;
    case 481u: goto L_08A91D4C;
    case 482u: goto L_08A91D60;
    case 483u: goto L_08A91D68;
    case 484u: goto L_08A91D70;
    case 485u: goto L_08A91D80;
    case 486u: goto L_08A91D8C;
    case 487u: goto L_08A91D98;
    case 488u: goto L_08A91DA4;
    case 489u: goto L_08A91DB0;
    case 490u: goto L_08A91DB8;
    case 491u: goto L_08A91DCC;
    case 492u: goto L_08A91DD4;
    case 493u: goto L_08A91DE8;
    case 494u: goto L_08A91DF0;
    case 495u: goto L_08A91E04;
    case 496u: goto L_08A91E0C;
    case 497u: goto L_08A91E14;
    case 498u: goto L_08A91E1C;
    case 499u: goto L_08A91E24;
    case 500u: goto L_08A91E2C;
    case 501u: goto L_08A91E4C;
    case 502u: goto L_08A91E54;
    case 503u: goto L_08A91E64;
    case 504u: goto L_08A91E6C;
    case 505u: goto L_08A91E80;
    case 506u: goto L_08A91E88;
    case 507u: goto L_08A91E90;
    case 508u: goto L_08A91E98;
    case 509u: goto L_08A91EA0;
    case 510u: goto L_08A91EA8;
    case 511u: goto L_08A91EB0;
    case 512u: goto L_08A91EB8;
    case 513u: goto L_08A91EC0;
    case 514u: goto L_08A91EC8;
    case 515u: goto L_08A91ED0;
    case 516u: goto L_08A91EE4;
    case 517u: goto L_08A91EEC;
    case 518u: goto L_08A91F00;
    case 519u: goto L_08A91F08;
    case 520u: goto L_08A91F1C;
    case 521u: goto L_08A91F28;
    case 522u: goto L_08A91F2C;
    case 523u: goto L_08A91F34;
    case 524u: goto L_08A91F38;
    case 525u: goto L_08A91F3C;
    case 526u: goto L_08A91F48;
    case 527u: goto L_08A91F6C;
    case 528u: goto L_08A91F78;
    case 529u: goto L_08A91F84;
    case 530u: goto L_08A91F8C;
    case 531u: goto L_08A91F94;
    case 532u: goto L_08A91FB0;
    case 533u: goto L_08A91FB8;
    case 534u: goto L_08A91FC0;
    case 535u: goto L_08A91FC8;
    case 536u: goto L_08A91FD0;
    case 537u: goto L_08A91FD8;
    case 538u: goto L_08A91FE0;
    case 539u: goto L_08A91FF4;
    case 540u: goto L_08A91FFC;
    case 541u: goto L_08A92010;
    case 542u: goto L_08A92018;
    case 543u: goto L_08A9202C;
    case 544u: goto L_08A92034;
    case 545u: goto L_08A92044;
    case 546u: goto L_08A9204C;
    case 547u: goto L_08A9205C;
    case 548u: goto L_08A9206C;
    case 549u: goto L_08A92070;
    case 550u: goto L_08A92078;
    case 551u: goto L_08A92088;
    case 552u: goto L_08A92098;
    case 553u: goto L_08A920B4;
    case 554u: goto L_08A920C4;
    case 555u: goto L_08A920CC;
    case 556u: goto L_08A920DC;
    case 557u: goto L_08A920E8;
    case 558u: goto L_08A920F0;
    case 559u: goto L_08A920FC;
    case 560u: goto L_08A9210C;
    case 561u: goto L_08A92114;
    case 562u: goto L_08A9211C;
    case 563u: goto L_08A92128;
    case 564u: goto L_08A92134;
    case 565u: goto L_08A9213C;
    case 566u: goto L_08A92144;
    case 567u: goto L_08A9214C;
    case 568u: goto L_08A9215C;
    case 569u: goto L_08A92164;
    case 570u: goto L_08A92170;
    case 571u: goto L_08A92178;
    case 572u: goto L_08A92184;
    case 573u: goto L_08A92190;
    case 574u: goto L_08A92198;
    case 575u: goto L_08A921A4;
    case 576u: goto L_08A921B0;
    case 577u: goto L_08A921B8;
    case 578u: goto L_08A921C0;
    case 579u: goto L_08A921CC;
    case 580u: goto L_08A921D4;
    case 581u: goto L_08A921DC;
    case 582u: goto L_08A921EC;
    case 583u: goto L_08A921F4;
    case 584u: goto L_08A921FC;
    case 585u: goto L_08A92208;
    case 586u: goto L_08A92214;
    case 587u: goto L_08A92220;
    case 588u: goto L_08A92228;
    case 589u: goto L_08A92230;
    case 590u: goto L_08A92234;
    case 591u: goto L_08A9224C;
    case 592u: goto L_08A92254;
    case 593u: goto L_08A92278;
    case 594u: goto L_08A922AC;
    case 595u: goto L_08A922BC;
    case 596u: goto L_08A922C8;
    case 597u: goto L_08A922D4;
    case 598u: goto L_08A922DC;
    case 599u: goto L_08A922E4;
    case 600u: goto L_08A9230C;
    case 601u: goto L_08A92314;
    case 602u: goto L_08A9231C;
    case 603u: goto L_08A92324;
    case 604u: goto L_08A9232C;
    case 605u: goto L_08A92334;
    case 606u: goto L_08A9233C;
    case 607u: goto L_08A92350;
    case 608u: goto L_08A92358;
    case 609u: goto L_08A9236C;
    case 610u: goto L_08A92374;
    case 611u: goto L_08A92388;
    case 612u: goto L_08A92390;
    case 613u: goto L_08A923A0;
    case 614u: goto L_08A923A8;
    case 615u: goto L_08A923B8;
    case 616u: goto L_08A923C8;
    case 617u: goto L_08A923D0;
    case 618u: goto L_08A923E0;
    case 619u: goto L_08A923EC;
    case 620u: goto L_08A923F4;
    case 621u: goto L_08A923FC;
    case 622u: goto L_08A92404;
    case 623u: goto L_08A9240C;
    case 624u: goto L_08A92418;
    case 625u: goto L_08A92420;
    case 626u: goto L_08A92428;
    case 627u: goto L_08A92438;
    case 628u: goto L_08A92448;
    case 629u: goto L_08A92464;
    case 630u: goto L_08A9246C;
    case 631u: goto L_08A92474;
    case 632u: goto L_08A92484;
    case 633u: goto L_08A924A4;
    case 634u: goto L_08A924AC;
    case 635u: goto L_08A924BC;
    case 636u: goto L_08A924CC;
    case 637u: goto L_08A924D4;
    case 638u: goto L_08A924DC;
    case 639u: goto L_08A924EC;
    case 640u: goto L_08A924FC;
    case 641u: goto L_08A92518;
    case 642u: goto L_08A9251C;
    case 643u: goto L_08A92528;
    case 644u: goto L_08A92530;
    case 645u: goto L_08A9253C;
    case 646u: goto L_08A92548;
    case 647u: goto L_08A92560;
    case 648u: goto L_08A92568;
    case 649u: goto L_08A92574;
    case 650u: goto L_08A9257C;
    case 651u: goto L_08A9258C;
    case 652u: goto L_08A92594;
    case 653u: goto L_08A925A0;
    case 654u: goto L_08A925AC;
    case 655u: goto L_08A925B4;
    case 656u: goto L_08A925BC;
    case 657u: goto L_08A925CC;
    case 658u: goto L_08A925D4;
    case 659u: goto L_08A925E0;
    case 660u: goto L_08A925EC;
    case 661u: goto L_08A925F4;
    case 662u: goto L_08A92608;
    case 663u: goto L_08A92614;
    case 664u: goto L_08A92620;
    case 665u: goto L_08A92628;
    case 666u: goto L_08A92638;
    case 667u: goto L_08A92648;
    case 668u: goto L_08A92650;
    case 669u: goto L_08A92664;
    case 670u: goto L_08A9266C;
    case 671u: goto L_08A92678;
    case 672u: goto L_08A92680;
    case 673u: goto L_08A9268C;
    case 674u: goto L_08A92694;
    case 675u: goto L_08A9269C;
    case 676u: goto L_08A926AC;
    case 677u: goto L_08A926B4;
    case 678u: goto L_08A926BC;
    case 679u: goto L_08A926C4;
    case 680u: goto L_08A926D4;
    case 681u: goto L_08A926DC;
    case 682u: goto L_08A926E8;
    case 683u: goto L_08A926F4;
    case 684u: goto L_08A926FC;
    case 685u: goto L_08A92710;
    case 686u: goto L_08A92718;
    case 687u: goto L_08A92724;
    case 688u: goto L_08A9272C;
    case 689u: goto L_08A92734;
    case 690u: goto L_08A92744;
    case 691u: goto L_08A9274C;
    case 692u: goto L_08A9275C;
    case 693u: goto L_08A92764;
    case 694u: goto L_08A92770;
    case 695u: goto L_08A92778;
    case 696u: goto L_08A92780;
    case 697u: goto L_08A9278C;
    case 698u: goto L_08A92794;
    case 699u: goto L_08A9279C;
    case 700u: goto L_08A927AC;
    case 701u: goto L_08A927B4;
    case 702u: goto L_08A927C4;
    case 703u: goto L_08A927D8;
    case 704u: goto L_08A927E8;
    case 705u: goto L_08A927F0;
    case 706u: goto L_08A927F8;
    case 707u: goto L_08A9280C;
    case 708u: goto L_08A92814;
    case 709u: goto L_08A92824;
    case 710u: goto L_08A9282C;
    case 711u: goto L_08A92834;
    case 712u: goto L_08A92848;
    case 713u: goto L_08A92854;
    case 714u: goto L_08A9285C;
    case 715u: goto L_08A9286C;
    case 716u: goto L_08A92874;
    case 717u: goto L_08A92884;
    case 718u: goto L_08A9288C;
    case 719u: goto L_08A9289C;
    case 720u: goto L_08A928A4;
    case 721u: goto L_08A928C4;
    case 722u: goto L_08A928D4;
    case 723u: goto L_08A928DC;
    case 724u: goto L_08A928E4;
    case 725u: goto L_08A928F4;
    case 726u: goto L_08A92900;
    case 727u: goto L_08A92908;
    case 728u: goto L_08A9291C;
    case 729u: goto L_08A92920;
    case 730u: goto L_08A92928;
    case 731u: goto L_08A92930;
    case 732u: goto L_08A9293C;
    case 733u: goto L_08A92944;
    case 734u: goto L_08A9294C;
    case 735u: goto L_08A9295C;
    case 736u: goto L_08A92964;
    case 737u: goto L_08A9296C;
    case 738u: goto L_08A92978;
    case 739u: goto L_08A92980;
    case 740u: goto L_08A92988;
    case 741u: goto L_08A92990;
    case 742u: goto L_08A92998;
    case 743u: goto L_08A929A0;
    case 744u: goto L_08A929A8;
    case 745u: goto L_08A929B0;
    case 746u: goto L_08A929C0;
    case 747u: goto L_08A929C8;
    case 748u: goto L_08A929D0;
    case 749u: goto L_08A929D8;
    case 750u: goto L_08A929E0;
    case 751u: goto L_08A929EC;
    case 752u: goto L_08A929F4;
    case 753u: goto L_08A92A00;
    case 754u: goto L_08A92A04;
    case 755u: goto L_08A92A0C;
    case 756u: goto L_08A92A1C;
    case 757u: goto L_08A92A28;
    case 758u: goto L_08A92A2C;
    case 759u: goto L_08A92A4C;
    case 760u: goto L_08A92B48;
    case 761u: goto L_08A92B54;
    case 762u: goto L_08A92B60;
    case 763u: goto L_08A92B6C;
    case 764u: goto L_08A92B74;
    case 765u: goto L_08A92B7C;
    case 766u: goto L_08A92B84;
    case 767u: goto L_08A92B98;
    case 768u: goto L_08A92BAC;
    case 769u: goto L_08A92BB4;
    case 770u: goto L_08A92BC4;
    case 771u: goto L_08A92BCC;
    case 772u: goto L_08A92BD8;
    case 773u: goto L_08A92BE0;
    case 774u: goto L_08A92C00;
    case 775u: goto L_08A92C08;
    case 776u: goto L_08A92C14;
    case 777u: goto L_08A92C24;
    case 778u: goto L_08A92C30;
    case 779u: goto L_08A92C38;
    case 780u: goto L_08A92C44;
    case 781u: goto L_08A92C50;
    case 782u: goto L_08A92C58;
    case 783u: goto L_08A92C68;
    case 784u: goto L_08A92C84;
    case 785u: goto L_08A92C88;
    case 786u: goto L_08A92C94;
    case 787u: goto L_08A92C9C;
    case 788u: goto L_08A92CAC;
    case 789u: goto L_08A92CB8;
    case 790u: goto L_08A92CC0;
    case 791u: goto L_08A92CCC;
    case 792u: goto L_08A92CE0;
    case 793u: goto L_08A92CE8;
    case 794u: goto L_08A92CF4;
    case 795u: goto L_08A92CFC;
    case 796u: goto L_08A92D0C;
    case 797u: goto L_08A92D14;
    case 798u: goto L_08A92D20;
    case 799u: goto L_08A92D2C;
    case 800u: goto L_08A92D34;
    case 801u: goto L_08A92D3C;
    case 802u: goto L_08A92D4C;
    case 803u: goto L_08A92D54;
    case 804u: goto L_08A92D5C;
    case 805u: goto L_08A92D6C;
    case 806u: goto L_08A92D74;
    case 807u: goto L_08A92D80;
    case 808u: goto L_08A92D8C;
    case 809u: goto L_08A92D94;
    case 810u: goto L_08A92D98;
    case 811u: goto L_08A92DA0;
    case 812u: goto L_08A92DA8;
    case 813u: goto L_08A92DB0;
    case 814u: goto L_08A92DB8;
    case 815u: goto L_08A92DC0;
    case 816u: goto L_08A92DC8;
    case 817u: goto L_08A92DD0;
    case 818u: goto L_08A92DD8;
    case 819u: goto L_08A92DE0;
    case 820u: goto L_08A92DE8;
    case 821u: goto L_08A92DF0;
    case 822u: goto L_08A92DF8;
    case 823u: goto L_08A92E00;
    case 824u: goto L_08A92E08;
    case 825u: goto L_08A92E10;
    case 826u: goto L_08A92E18;
    case 827u: goto L_08A92E20;
    case 828u: goto L_08A92E28;
    case 829u: goto L_08A92E34;
    case 830u: goto L_08A92E3C;
    case 831u: goto L_08A92E44;
    case 832u: goto L_08A92E4C;
    case 833u: goto L_08A92E54;
    case 834u: goto L_08A92E5C;
    case 835u: goto L_08A92E64;
    case 836u: goto L_08A92E6C;
    case 837u: goto L_08A92E74;
    case 838u: goto L_08A92E7C;
    case 839u: goto L_08A92E84;
    case 840u: goto L_08A92E8C;
    case 841u: goto L_08A92E98;
    case 842u: goto L_08A92E9C;
    case 843u: goto L_08A92EA8;
    case 844u: goto L_08A92EB4;
    case 845u: goto L_08A92EBC;
    case 846u: goto L_08A92EC4;
    case 847u: goto L_08A92ED4;
    case 848u: goto L_08A92EDC;
    case 849u: goto L_08A92EE4;
    case 850u: goto L_08A92EEC;
    case 851u: goto L_08A92EFC;
    case 852u: goto L_08A92F04;
    case 853u: goto L_08A92F18;
    case 854u: goto L_08A92F24;
    case 855u: goto L_08A92F28;
    case 856u: goto L_08A92F30;
    case 857u: goto L_08A92F48;
    case 858u: goto L_08A92F50;
    case 859u: goto L_08A92F58;
    case 860u: goto L_08A92F64;
    case 861u: goto L_08A92F6C;
    case 862u: goto L_08A92F74;
    case 863u: goto L_08A92F7C;
    case 864u: goto L_08A92F84;
    case 865u: goto L_08A92F8C;
    case 866u: goto L_08A92F94;
    case 867u: goto L_08A92FA4;
    case 868u: goto L_08A92FAC;
    case 869u: goto L_08A92FB4;
    case 870u: goto L_08A92FC0;
    case 871u: goto L_08A92FD0;
    case 872u: goto L_08A92FD8;
    case 873u: goto L_08A92FE8;
    case 874u: goto L_08A92FF8;
    case 875u: goto L_08A93014;
    case 876u: goto L_08A9301C;
    case 877u: goto L_08A93030;
    case 878u: goto L_08A93038;
    case 879u: goto L_08A93040;
    case 880u: goto L_08A93048;
    case 881u: goto L_08A9305C;
    case 882u: goto L_08A93064;
    case 883u: goto L_08A9306C;
    case 884u: goto L_08A93080;
    case 885u: goto L_08A93088;
    case 886u: goto L_08A93090;
    case 887u: goto L_08A93098;
    case 888u: goto L_08A930AC;
    case 889u: goto L_08A930B4;
    case 890u: goto L_08A930BC;
    case 891u: goto L_08A930C4;
    case 892u: goto L_08A930CC;
    case 893u: goto L_08A930D4;
    case 894u: goto L_08A930DC;
    case 895u: goto L_08A930E4;
    case 896u: goto L_08A930EC;
    case 897u: goto L_08A930F4;
    case 898u: goto L_08A930FC;
    case 899u: goto L_08A93104;
    case 900u: goto L_08A9310C;
    case 901u: goto L_08A93114;
    case 902u: goto L_08A9312C;
    case 903u: goto L_08A93134;
    case 904u: goto L_08A9313C;
    case 905u: goto L_08A93144;
    case 906u: goto L_08A9314C;
    case 907u: goto L_08A93154;
    case 908u: goto L_08A9315C;
    case 909u: goto L_08A93174;
    case 910u: goto L_08A93180;
    case 911u: goto L_08A9318C;
    case 912u: goto L_08A93194;
    case 913u: goto L_08A9319C;
    case 914u: goto L_08A931A4;
    case 915u: goto L_08A931AC;
    case 916u: goto L_08A931C4;
    case 917u: goto L_08A931CC;
    case 918u: goto L_08A931D4;
    case 919u: goto L_08A931DC;
    case 920u: goto L_08A931E4;
    case 921u: goto L_08A931EC;
    case 922u: goto L_08A931F4;
    case 923u: goto L_08A931FC;
    case 924u: goto L_08A93204;
    case 925u: goto L_08A9320C;
    case 926u: goto L_08A93214;
    case 927u: goto L_08A9321C;
    case 928u: goto L_08A93224;
    case 929u: goto L_08A9322C;
    case 930u: goto L_08A93234;
    case 931u: goto L_08A9323C;
    case 932u: goto L_08A93244;
    case 933u: goto L_08A93250;
    case 934u: goto L_08A93258;
    case 935u: goto L_08A9326C;
    case 936u: goto L_08A93274;
    case 937u: goto L_08A93278;
    case 938u: goto L_08A93290;
    case 939u: goto L_08A93298;
    case 940u: goto L_08A932BC;
    case 941u: goto L_08A932CC;
    case 942u: goto L_08A932D4;
    case 943u: goto L_08A932DC;
    case 944u: goto L_08A932E4;
    case 945u: goto L_08A932EC;
    case 946u: goto L_08A932FC;
    case 947u: goto L_08A93304;
    case 948u: goto L_08A93310;
    case 949u: goto L_08A93318;
    case 950u: goto L_08A93320;
    case 951u: goto L_08A93330;
    case 952u: goto L_08A93338;
    case 953u: goto L_08A93344;
    case 954u: goto L_08A93348;
    case 955u: goto L_08A9334C;
    case 956u: goto L_08A93358;
    case 957u: goto L_08A93370;
    case 958u: goto L_08A93388;
    case 959u: goto L_08A933A0;
    case 960u: goto L_08A933B8;
    case 961u: goto L_08A933C0;
    case 962u: goto L_08A933D4;
    case 963u: goto L_08A933F0;
    case 964u: goto L_08A93408;
    case 965u: goto L_08A93420;
    case 966u: goto L_08A93424;
    case 967u: goto L_08A93438;
    case 968u: goto L_08A93478;
    case 969u: goto L_08A93484;
    case 970u: goto L_08A93498;
    case 971u: goto L_08A934A4;
    case 972u: goto L_08A934BC;
    case 973u: goto L_08A934D0;
    case 974u: goto L_08A934F0;
    case 975u: goto L_08A934F8;
    case 976u: goto L_08A93510;
    case 977u: goto L_08A93544;
    case 978u: goto L_08A9354C;
    case 979u: goto L_08A93554;
    case 980u: goto L_08A93564;
    case 981u: goto L_08A9356C;
    case 982u: goto L_08A93574;
    case 983u: goto L_08A93580;
    case 984u: goto L_08A93588;
    case 985u: goto L_08A93598;
    case 986u: goto L_08A935A0;
    case 987u: goto L_08A935A8;
    case 988u: goto L_08A935B4;
    case 989u: goto L_08A935BC;
    case 990u: goto L_08A935CC;
    case 991u: goto L_08A935D4;
    case 992u: goto L_08A935DC;
    case 993u: goto L_08A935E8;
    case 994u: goto L_08A935F4;
    case 995u: goto L_08A935FC;
    case 996u: goto L_08A93604;
    case 997u: goto L_08A9360C;
    case 998u: goto L_08A9362C;
    case 999u: goto L_08A93650;
    case 1000u: goto L_08A93684;
    case 1001u: goto L_08A93690;
    case 1002u: goto L_08A936A4;
    case 1003u: goto L_08A936AC;
    case 1004u: goto L_08A936B8;
    case 1005u: goto L_08A936CC;
    case 1006u: goto L_08A936D4;
    case 1007u: goto L_08A936E0;
    case 1008u: goto L_08A936F4;
    case 1009u: goto L_08A936FC;
    case 1010u: goto L_08A93708;
    case 1011u: goto L_08A93740;
    case 1012u: goto L_08A9377C;
    case 1013u: goto L_08A93788;
    case 1014u: goto L_08A93794;
    case 1015u: goto L_08A937AC;
    case 1016u: goto L_08A937BC;
    case 1017u: goto L_08A937C4;
    case 1018u: goto L_08A937D4;
    case 1019u: goto L_08A937E0;
    case 1020u: goto L_08A937E4;
    case 1021u: goto L_08A937F0;
    case 1022u: goto L_08A937FC;
    case 1023u: goto L_08A93800;
    case 1024u: goto L_08A93804;
    case 1025u: goto L_08A9380C;
    case 1026u: goto L_08A93814;
    case 1027u: goto L_08A93824;
    case 1028u: goto L_08A93830;
    case 1029u: goto L_08A93834;
    case 1030u: goto L_08A93840;
    case 1031u: goto L_08A9384C;
    case 1032u: goto L_08A93850;
    case 1033u: goto L_08A93854;
    case 1034u: goto L_08A9385C;
    case 1035u: goto L_08A93868;
    case 1036u: goto L_08A93870;
    case 1037u: goto L_08A9387C;
    case 1038u: goto L_08A93884;
    case 1039u: goto L_08A93890;
    case 1040u: goto L_08A938A0;
    case 1041u: goto L_08A938B8;
    case 1042u: goto L_08A938BC;
    case 1043u: goto L_08A938CC;
    case 1044u: goto L_08A938D4;
    case 1045u: goto L_08A938D8;
    case 1046u: goto L_08A938F4;
    case 1047u: goto L_08A93914;
    case 1048u: goto L_08A93928;
    case 1049u: goto L_08A93944;
    case 1050u: goto L_08A93960;
    case 1051u: goto L_08A93968;
    case 1052u: goto L_08A93974;
    case 1053u: goto L_08A93984;
    case 1054u: goto L_08A939B0;
    case 1055u: goto L_08A939C0;
    case 1056u: goto L_08A939D0;
    case 1057u: goto L_08A939D8;
    case 1058u: goto L_08A939E0;
    case 1059u: goto L_08A939E8;
    case 1060u: goto L_08A939F4;
    case 1061u: goto L_08A93A0C;
    case 1062u: goto L_08A93A14;
    case 1063u: goto L_08A93A2C;
    case 1064u: goto L_08A93A30;
    case 1065u: goto L_08A93A3C;
    case 1066u: goto L_08A93A4C;
    case 1067u: goto L_08A93A60;
    case 1068u: goto L_08A93A7C;
    case 1069u: goto L_08A93A90;
    case 1070u: goto L_08A93AA0;
    case 1071u: goto L_08A93AB0;
    case 1072u: goto L_08A93ABC;
    case 1073u: goto L_08A93AC4;
    case 1074u: goto L_08A93ACC;
    case 1075u: goto L_08A93AD4;
    case 1076u: goto L_08A93ADC;
    case 1077u: goto L_08A93AE8;
    case 1078u: goto L_08A93AEC;
    case 1079u: goto L_08A93AF0;
    case 1080u: goto L_08A93AFC;
    case 1081u: goto L_08A93B10;
    case 1082u: goto L_08A93B28;
    case 1083u: goto L_08A93B38;
    case 1084u: goto L_08A93B90;
    case 1085u: goto L_08A93BAC;
    case 1086u: goto L_08A93BB8;
    case 1087u: goto L_08A93BC4;
    case 1088u: goto L_08A93BE4;
    case 1089u: goto L_08A93C14;
    case 1090u: goto L_08A93C48;
    case 1091u: goto L_08A93C50;
    case 1092u: goto L_08A93C84;
    case 1093u: goto L_08A93C9C;
    case 1094u: goto L_08A93CAC;
    case 1095u: goto L_08A93CC4;
    case 1096u: goto L_08A93CEC;
    case 1097u: goto L_08A93D20;
    case 1098u: goto L_08A93D34;
    case 1099u: goto L_08A93D4C;
    case 1100u: goto L_08A93D54;
    case 1101u: goto L_08A93D5C;
    case 1102u: goto L_08A93D74;
    case 1103u: goto L_08A93D8C;
    case 1104u: goto L_08A93DA8;
    case 1105u: goto L_08A93DB8;
    case 1106u: goto L_08A93DD4;
    case 1107u: goto L_08A93E30;
    case 1108u: goto L_08A93E3C;
    case 1109u: goto L_08A93E48;
    case 1110u: goto L_08A93E94;
    case 1111u: goto L_08A93EAC;
    case 1112u: goto L_08A93F10;
    case 1113u: goto L_08A93F70;
    case 1114u: goto L_08A93F84;
    case 1115u: goto L_08A93FB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A90004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A90014u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90014u) goto L_08A90014;
    return;
L_08A90014:
    ctx.set_gpr(31, 0x08A9001Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A9001Cu) goto L_08A9001C;
    return;
L_08A9001C:
    ctx.set_gpr(31, 0x08A90024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A90024u) goto L_08A90024;
    return;
L_08A90024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90030u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90030u) goto L_08A90030;
    return;
L_08A90030:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18260)));
        goto L_08A9004C;
    }
    goto L_08A90040;
L_08A90040:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A90074;
      }
      goto L_08A9004C;
    }
L_08A9004C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
        goto L_08A9005C;
    }
    goto L_08A90054;
L_08A90054:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A90074;
      }
      goto L_08A9005C;
    }
L_08A9005C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90068u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 693u, 0x08AA6968u>(ctx, &aot_mem) && ctx.pc == 0x08A90068u) goto L_08A90068;
    return;
L_08A90068:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A90074;
      }
      goto L_08A90070;
    }
L_08A90070:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A90074;
L_08A90074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23712)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23708)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18416)));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23704)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23700)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23696)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23692)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23688)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23684)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23680)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23676)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23672)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23668)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23664)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23660)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23656)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23652)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A91048;
      }
      goto L_08A90180;
    }
L_08A90180:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
        goto L_08A90FCC;
    }
    goto L_08A9018C;
L_08A9018C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903D8;
      }
      goto L_08A90194;
    }
L_08A90194:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A901A8;
      }
      goto L_08A901A0;
    }
L_08A901A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18436)));
      if (branch_taken) {
          goto L_08A91054;
      }
      goto L_08A901A8;
    }
L_08A901A8:
    ctx.set_gpr(31, 0x08A901B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A901B0u) goto L_08A901B0;
    return;
L_08A901B0:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A901C0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24276));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A901C0u) goto L_08A901C0;
    return;
L_08A901C0:
    ctx.set_gpr(31, 0x08A901C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A901C8u) goto L_08A901C8;
    return;
L_08A901C8:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A901D8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23648));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A901D8u) goto L_08A901D8;
    return;
L_08A901D8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A901F4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A901F4u) goto L_08A901F4;
    return;
L_08A901F4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18416), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18436), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18440), 0u);
    ctx.set_gpr(31, 0x08A9020Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A9020Cu) goto L_08A9020C;
    return;
L_08A9020C:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
    goto L_08A9022C;
L_08A9022C:
    ctx.set_gpr(31, 0x08A90234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90234u) goto L_08A90234;
    return;
L_08A90234:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(47));
    ctx.set_gpr(31, 0x08A90274u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A90274u) goto L_08A90274;
    return;
L_08A90274:
    ctx.set_gpr(31, 0x08A9027Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9027Cu) goto L_08A9027C;
    return;
L_08A9027C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(87));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A902B8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A902B8u) goto L_08A902B8;
    return;
L_08A902B8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9022C;
      }
      goto L_08A902C8;
    }
L_08A902C8:
    ctx.set_gpr(31, 0x08A902D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A902D0u) goto L_08A902D0;
    return;
L_08A902D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17108u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(31, 0x08A90304u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A90304u) goto L_08A90304;
    return;
L_08A90304:
    ctx.set_gpr(31, 0x08A9030Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9030Cu) goto L_08A9030C;
    return;
L_08A9030C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(2, 17108u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(49));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A90354u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A90354u) goto L_08A90354;
    return;
L_08A90354:
    ctx.set_gpr(31, 0x08A9035Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9035Cu) goto L_08A9035C;
    return;
L_08A9035C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(2, 17190u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(49));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08A903A4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A903A4u) goto L_08A903A4;
    return;
L_08A903A4:
    ctx.set_gpr(31, 0x08A903ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A903ACu) goto L_08A903AC;
    return;
L_08A903AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A903C4u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A903C4u) goto L_08A903C4;
    return;
L_08A903C4:
    ctx.set_gpr(2, 9u << 16u);
    ctx.set_gpr(17, ctx.gpr[2] | 10176u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18457), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A903D8;
L_08A903D8:
    ctx.set_gpr(31, 0x08A903E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A903E0u) goto L_08A903E0;
    return;
L_08A903E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A903ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A903ECu) goto L_08A903EC;
    return;
L_08A903EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90468;
      }
      goto L_08A903F4;
    }
L_08A903F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18436)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9044C;
      }
      goto L_08A90400;
    }
L_08A90400:
    ctx.set_gpr(31, 0x08A90408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90408u) goto L_08A90408;
    return;
L_08A90408:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18308)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90438u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08A90438u) goto L_08A90438;
    return;
L_08A90438:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18440), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18436), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A9044C;
    }
L_08A9044C:
    ctx.set_gpr(31, 0x08A90454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90454u) goto L_08A90454;
    return;
L_08A90454:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90460u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 352u, 0x08AB14ACu>(ctx, &aot_mem) && ctx.pc == 0x08A90460u) goto L_08A90460;
    return;
L_08A90460:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18436), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90468;
    }
L_08A90468:
    ctx.set_gpr(31, 0x08A90470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A90470u) goto L_08A90470;
    return;
L_08A90470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9047Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A9047Cu) goto L_08A9047C;
    return;
L_08A9047C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A904AC;
      }
      goto L_08A90484;
    }
L_08A90484:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A90490u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90490u) goto L_08A90490;
    return;
L_08A90490:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A904A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A904A4u) goto L_08A904A4;
    return;
L_08A904A4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
      if (branch_taken) {
          goto L_08A906B4;
      }
      goto L_08A904AC;
    }
L_08A904AC:
    ctx.set_gpr(31, 0x08A904B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A904B4u) goto L_08A904B4;
    return;
L_08A904B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A904C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A904C0u) goto L_08A904C0;
    return;
L_08A904C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A904F0;
      }
      goto L_08A904C8;
    }
L_08A904C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A904D4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A904D4u) goto L_08A904D4;
    return;
L_08A904D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A904E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A904E8u) goto L_08A904E8;
    return;
L_08A904E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A904F0;
    }
L_08A904F0:
    ctx.set_gpr(31, 0x08A904F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A904F8u) goto L_08A904F8;
    return;
L_08A904F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90504u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A90504u) goto L_08A90504;
    return;
L_08A90504:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90524;
      }
      goto L_08A9050C;
    }
L_08A9050C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A9051C;
      }
      goto L_08A90518;
    }
L_08A90518:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08A9051C;
L_08A9051C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18416), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90524;
    }
L_08A90524:
    ctx.set_gpr(31, 0x08A9052Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A9052Cu) goto L_08A9052C;
    return;
L_08A9052C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90538u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A90538u) goto L_08A90538;
    return;
L_08A90538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9055C;
      }
      goto L_08A90540;
    }
L_08A90540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90554;
      }
      goto L_08A90550;
    }
L_08A90550:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A90554;
L_08A90554:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18416), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A9055C;
    }
L_08A9055C:
    ctx.set_gpr(31, 0x08A90564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A90564u) goto L_08A90564;
    return;
L_08A90564:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90570u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A90570u) goto L_08A90570;
    return;
L_08A90570:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90608;
      }
      goto L_08A90578;
    }
L_08A90578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90588;
    }
L_08A90588:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26296));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A905A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27232));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A905B8;
    }
L_08A905B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10000));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A905C8;
    }
L_08A905C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A905D8;
    }
L_08A905D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-100));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A905E8;
    }
L_08A905E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A905F8;
    }
L_08A905F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90608;
    }
L_08A90608:
    ctx.set_gpr(31, 0x08A90610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A90610u) goto L_08A90610;
    return;
L_08A90610:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9061Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08A9061Cu) goto L_08A9061C;
    return;
L_08A9061C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90624;
    }
L_08A90624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90634;
    }
L_08A90634:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26320));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90650:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27233));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90664;
    }
L_08A90664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90674;
    }
L_08A90674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90684;
    }
L_08A90684:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A90694;
    }
L_08A90694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906B0;
      }
      goto L_08A906A4;
    }
L_08A906A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
    goto L_08A906B0;
L_08A906B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    goto L_08A906B4;
L_08A906B4:
    ctx.set_gpr(1, 65526u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 55361u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, 9u << 16u);
        goto L_08A906D8;
    }
    goto L_08A906C8;
L_08A906C8:
    ctx.set_gpr(2, 65526u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55361u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A906F4;
      }
      goto L_08A906D8;
    }
L_08A906D8:
    ctx.set_gpr(1, ctx.gpr[1] | 10176u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
        goto L_08A906F8;
    }
    goto L_08A906E8;
L_08A906E8:
    ctx.set_gpr(2, 9u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 10175u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18432), ctx.gpr[2]);
    goto L_08A906F4;
L_08A906F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    goto L_08A906F8;
L_08A906F8:
    ctx.set_gpr(2, 17895u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45683u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 14u));
    ctx.set_gpr(31, 0x08A90718u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90718u) goto L_08A90718;
    return;
L_08A90718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90724u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90724u) goto L_08A90724;
    return;
L_08A90724:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A90730u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A90730u) goto L_08A90730;
    return;
L_08A90730:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18420), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18424), 0u);
    ctx.set_gpr(31, 0x08A90740u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90740u) goto L_08A90740;
    return;
L_08A90740:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9074Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9074Cu) goto L_08A9074C;
    return;
L_08A9074C:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18420)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u | 60000u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(31, 0x08A9076Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9076Cu) goto L_08A9076C;
    return;
L_08A9076C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90780u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A90780u) goto L_08A90780;
    return;
L_08A90780:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A9078Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A9078Cu) goto L_08A9078C;
    return;
L_08A9078C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90798u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90798u) goto L_08A90798;
    return;
L_08A90798:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18424), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A907B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A907B8u) goto L_08A907B8;
    return;
L_08A907B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A907C4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A907C4u) goto L_08A907C4;
    return;
L_08A907C4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A907D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A907D0u) goto L_08A907D0;
    return;
L_08A907D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A907DCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A907DCu) goto L_08A907DC;
    return;
L_08A907DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18424)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18424), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18428), 0u);
    ctx.set_gpr(31, 0x08A907F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A907F4u) goto L_08A907F4;
    return;
L_08A907F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90800u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90800u) goto L_08A90800;
    return;
L_08A90800:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A9080Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A9080Cu) goto L_08A9080C;
    return;
L_08A9080C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90818u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90818u) goto L_08A90818;
    return;
L_08A90818:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18428)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18428), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A90840u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90840u) goto L_08A90840;
    return;
L_08A90840:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9084Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9084Cu) goto L_08A9084C;
    return;
L_08A9084C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A90858u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A90858u) goto L_08A90858;
    return;
L_08A90858:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90864u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90864u) goto L_08A90864;
    return;
L_08A90864:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18428)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18428), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A90884u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90884u) goto L_08A90884;
    return;
L_08A90884:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90890u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90890u) goto L_08A90890;
    return;
L_08A90890:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A9089Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A9089Cu) goto L_08A9089C;
    return;
L_08A9089C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A908A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A908A8u) goto L_08A908A8;
    return;
L_08A908A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18428)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18428), ctx.gpr[2]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A908CCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A908CCu) goto L_08A908CC;
    return;
L_08A908CC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(161));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(143));
    ctx.set_gpr(31, 0x08A908E0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23540));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A908E0u) goto L_08A908E0;
    return;
L_08A908E0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A908F8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A908F8u) goto L_08A908F8;
    return;
L_08A908F8:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(142));
    ctx.set_gpr(31, 0x08A9090Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23540));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A9090Cu) goto L_08A9090C;
    return;
L_08A9090C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A90928;
      }
      goto L_08A90918;
    }
L_08A90918:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A90918;
      }
      goto L_08A90928;
    }
L_08A90928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18420)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(31, 0x08A90938u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90938u) goto L_08A90938;
    return;
L_08A90938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90944u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90944u) goto L_08A90944;
    return;
L_08A90944:
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18420)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u | 60000u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(31, 0x08A90964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90964u) goto L_08A90964;
    return;
L_08A90964:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90978u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A90978u) goto L_08A90978;
    return;
L_08A90978:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A90984u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A90984u) goto L_08A90984;
    return;
L_08A90984:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90990u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90990u) goto L_08A90990;
    return;
L_08A90990:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(31, 0x08A9099Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9099Cu) goto L_08A9099C;
    return;
L_08A9099C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A909A8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A909A8u) goto L_08A909A8;
    return;
L_08A909A8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A909B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A909B4u) goto L_08A909B4;
    return;
L_08A909B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A909C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A909C0u) goto L_08A909C0;
    return;
L_08A909C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(31, 0x08A909CCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A909CCu) goto L_08A909CC;
    return;
L_08A909CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A909D8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A909D8u) goto L_08A909D8;
    return;
L_08A909D8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A909E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A909E4u) goto L_08A909E4;
    return;
L_08A909E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A909F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A909F0u) goto L_08A909F0;
    return;
L_08A909F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(31, 0x08A909FCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A909FCu) goto L_08A909FC;
    return;
L_08A909FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90A08u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90A08u) goto L_08A90A08;
    return;
L_08A90A08:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A90A14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A90A14u) goto L_08A90A14;
    return;
L_08A90A14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90A20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90A20u) goto L_08A90A20;
    return;
L_08A90A20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(31, 0x08A90A2Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90A2Cu) goto L_08A90A2C;
    return;
L_08A90A2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90A38u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90A38u) goto L_08A90A38;
    return;
L_08A90A38:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A90A44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A90A44u) goto L_08A90A44;
    return;
L_08A90A44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A90A50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90A50u) goto L_08A90A50;
    return;
L_08A90A50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
        goto L_08A90BC0;
    }
    goto L_08A90A60;
L_08A90A60:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_08A90A68;
L_08A90A68:
    ctx.set_gpr(31, 0x08A90A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90A70u) goto L_08A90A70;
    return;
L_08A90A70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(87));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(31, 0x08A90A94u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90A94u) goto L_08A90A94;
    return;
L_08A90A94:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90A68;
      }
      goto L_08A90AA4;
    }
L_08A90AA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_gpr(2, 9u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 10175u);
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 65526u << 16u);
        goto L_08A90B00;
    }
    goto L_08A90AB8;
L_08A90AB8:
    ctx.set_gpr(31, 0x08A90AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AC0u) goto L_08A90AC0;
    return;
L_08A90AC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90AD8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(50));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AD8u) goto L_08A90AD8;
    return;
L_08A90AD8:
    ctx.set_gpr(31, 0x08A90AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AE0u) goto L_08A90AE0;
    return;
L_08A90AE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90AF8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AF8u) goto L_08A90AF8;
    return;
L_08A90AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18457)));
      if (branch_taken) {
          goto L_08A90B98;
      }
      goto L_08A90B00;
    }
L_08A90B00:
    ctx.set_gpr(2, ctx.gpr[2] | 55361u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A90B54;
      }
      goto L_08A90B0C;
    }
L_08A90B0C:
    ctx.set_gpr(31, 0x08A90B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B14u) goto L_08A90B14;
    return;
L_08A90B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90B2Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B2Cu) goto L_08A90B2C;
    return;
L_08A90B2C:
    ctx.set_gpr(31, 0x08A90B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B34u) goto L_08A90B34;
    return;
L_08A90B34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90B4Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(50));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B4Cu) goto L_08A90B4C;
    return;
L_08A90B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90B94;
      }
      goto L_08A90B54;
    }
L_08A90B54:
    ctx.set_gpr(31, 0x08A90B5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B5Cu) goto L_08A90B5C;
    return;
L_08A90B5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90B74u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B74u) goto L_08A90B74;
    return;
L_08A90B74:
    ctx.set_gpr(31, 0x08A90B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B7Cu) goto L_08A90B7C;
    return;
L_08A90B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90B94u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B94u) goto L_08A90B94;
    return;
L_08A90B94:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18457)));
    goto L_08A90B98;
L_08A90B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BBC;
      }
      goto L_08A90BA0;
    }
L_08A90BA0:
    ctx.set_gpr(31, 0x08A90BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90BA8u) goto L_08A90BA8;
    return;
L_08A90BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A90BBCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90BBCu) goto L_08A90BBC;
    return;
L_08A90BBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    goto L_08A90BC0;
L_08A90BC0:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18457), static_cast<std::uint8_t>(0u));
        goto L_08A90CD4;
    }
    goto L_08A90BC8;
L_08A90BC8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    goto L_08A90BD0;
L_08A90BD0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A90C00;
      }
      goto L_08A90BD8;
    }
L_08A90BD8:
    ctx.set_gpr(31, 0x08A90BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90BE0u) goto L_08A90BE0;
    return;
L_08A90BE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90BF8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90BF8u) goto L_08A90BF8;
    return;
L_08A90BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A90C24;
      }
      goto L_08A90C00;
    }
L_08A90C00:
    ctx.set_gpr(31, 0x08A90C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90C08u) goto L_08A90C08;
    return;
L_08A90C08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A90C20u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(47));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90C20u) goto L_08A90C20;
    return;
L_08A90C20:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A90C24;
L_08A90C24:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
        goto L_08A90BD0;
    }
    goto L_08A90C30;
L_08A90C30:
    ctx.set_gpr(31, 0x08A90C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90C38u) goto L_08A90C38;
    return;
L_08A90C38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    ctx.set_gpr(2, 17108u << 16u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A90C6Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A90C6Cu) goto L_08A90C6C;
    return;
L_08A90C6C:
    ctx.set_gpr(31, 0x08A90C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90C74u) goto L_08A90C74;
    return;
L_08A90C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18416)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    ctx.set_gpr(2, 17190u << 16u);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08A90CA8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A90CA8u) goto L_08A90CA8;
    return;
L_08A90CA8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18457)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90CD0;
      }
      goto L_08A90CB4;
    }
L_08A90CB4:
    ctx.set_gpr(31, 0x08A90CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90CBCu) goto L_08A90CBC;
    return;
L_08A90CBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A90CD0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90CD0u) goto L_08A90CD0;
    return;
L_08A90CD0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18457), static_cast<std::uint8_t>(0u));
    goto L_08A90CD4;
L_08A90CD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A90D04;
      }
      goto L_08A90CE0;
    }
L_08A90CE0:
    ctx.set_gpr(31, 0x08A90CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90CE8u) goto L_08A90CE8;
    return;
L_08A90CE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08A90CFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90CFCu) goto L_08A90CFC;
    return;
L_08A90CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18440)));
      if (branch_taken) {
          goto L_08A90D24;
      }
      goto L_08A90D04;
    }
L_08A90D04:
    ctx.set_gpr(31, 0x08A90D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90D0Cu) goto L_08A90D0C;
    return;
L_08A90D0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08A90D20u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90D20u) goto L_08A90D20;
    return;
L_08A90D20:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18440)));
    goto L_08A90D24;
L_08A90D24:
    ctx.set_gpr(2, 34952u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34953u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[16] >> 31u);
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 5u));
    ctx.set_gpr(20, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x08A90D64u);
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90D64u) goto L_08A90D64;
    return;
L_08A90D64:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] << 1u);
    ctx.set_gpr(31, 0x08A90D7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90D7Cu) goto L_08A90D7C;
    return;
L_08A90D7C:
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18440)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08A90DA4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90DA4u) goto L_08A90DA4;
    return;
L_08A90DA4:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A90DC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90DC4u) goto L_08A90DC4;
    return;
L_08A90DC4:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A90DE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 196u, 0x088A8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A90DE0u) goto L_08A90DE0;
    return;
L_08A90DE0:
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18436)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08A90E8C;
    }
    goto L_08A90DF0;
L_08A90DF0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90E08u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A90E08u) goto L_08A90E08;
    return;
L_08A90E08:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(351));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(221));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23520));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A90E28u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90E28u) goto L_08A90E28;
    return;
L_08A90E28:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90E40u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A90E40u) goto L_08A90E40;
    return;
L_08A90E40:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08A90E60u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23520));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90E60u) goto L_08A90E60;
    return;
L_08A90E60:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18440)));
    ctx.set_gpr(2, 17430u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18440), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08A90EF8;
      }
      goto L_08A90E80;
    }
L_08A90E80:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18436), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18440), 0u);
      if (branch_taken) {
          goto L_08A90EF8;
      }
      goto L_08A90E8C;
    }
L_08A90E8C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90EA0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A90EA0u) goto L_08A90EA0;
    return;
L_08A90EA0:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(351));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(221));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23520));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A90EC0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90EC0u) goto L_08A90EC0;
    return;
L_08A90EC0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90ED8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A90ED8u) goto L_08A90ED8;
    return;
L_08A90ED8:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08A90EF8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23520));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90EF8u) goto L_08A90EF8;
    return;
L_08A90EF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A90F04u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A9116C;
L_08A90F04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90F34u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A90F34u) goto L_08A90F34;
    return;
L_08A90F34:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(351));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(181));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23500));
    ctx.set_gpr(31, 0x08A90F4Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90F4Cu) goto L_08A90F4C;
    return;
L_08A90F4C:
    ctx.set_gpr(31, 0x08A90F54u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90F54u) goto L_08A90F54;
    return;
L_08A90F54:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(351));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(201));
    ctx.set_gpr(31, 0x08A90F70u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23480));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90F70u) goto L_08A90F70;
    return;
L_08A90F70:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A90F88u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A90F88u) goto L_08A90F88;
    return;
L_08A90F88:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08A90FA0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23500));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90FA0u) goto L_08A90FA0;
    return;
L_08A90FA0:
    ctx.set_gpr(31, 0x08A90FA8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A90FA8u) goto L_08A90FA8;
    return;
L_08A90FA8:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(350));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x08A90FC4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23480));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A90FC4u) goto L_08A90FC4;
    return;
L_08A90FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A91138;
      }
      goto L_08A90FCC;
    }
L_08A90FCC:
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17530u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A90FE4u);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A90FE4u) goto L_08A90FE4;
    return;
L_08A90FE4:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18432)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A91040;
    }
    goto L_08A91004;
L_08A91004:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91010u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08A9115C;
L_08A91010:
    ctx.set_gpr(31, 0x08A91018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91018u) goto L_08A91018;
    return;
L_08A91018:
    ctx.set_gpr(31, 0x08A91020u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A91020u) goto L_08A91020;
    return;
L_08A91020:
    ctx.set_gpr(31, 0x08A91028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A91028u) goto L_08A91028;
    return;
L_08A91028:
    ctx.set_gpr(31, 0x08A91030u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A91030u) goto L_08A91030;
    return;
L_08A91030:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91134;
      }
      goto L_08A91040;
    }
L_08A91040:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91134;
      }
      goto L_08A91048;
    }
L_08A91048:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91134;
      }
      goto L_08A91054;
    }
L_08A91054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91070;
      }
      goto L_08A9105C;
    }
L_08A9105C:
    ctx.set_gpr(31, 0x08A91064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91064u) goto L_08A91064;
    return;
L_08A91064:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91070u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 352u, 0x08AB14ACu>(ctx, &aot_mem) && ctx.pc == 0x08A91070u) goto L_08A91070;
    return;
L_08A91070:
    ctx.set_gpr(31, 0x08A91078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91078u) goto L_08A91078;
    return;
L_08A91078:
    ctx.set_gpr(31, 0x08A91080u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A91080u) goto L_08A91080;
    return;
L_08A91080:
    ctx.set_gpr(31, 0x08A91088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A91088u) goto L_08A91088;
    return;
L_08A91088:
    ctx.set_gpr(31, 0x08A91090u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A91090u) goto L_08A91090;
    return;
L_08A91090:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A91094;
L_08A91094:
    ctx.set_gpr(31, 0x08A9109Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9109Cu) goto L_08A9109C;
    return;
L_08A9109C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08A910ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A910ACu) goto L_08A910AC;
    return;
L_08A910AC:
    ctx.set_gpr(31, 0x08A910B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A910B4u) goto L_08A910B4;
    return;
L_08A910B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08A910C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A910C4u) goto L_08A910C4;
    return;
L_08A910C4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91094;
      }
      goto L_08A910D4;
    }
L_08A910D4:
    ctx.set_gpr(31, 0x08A910DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A910DCu) goto L_08A910DC;
    return;
L_08A910DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A910ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A910ECu) goto L_08A910EC;
    return;
L_08A910EC:
    ctx.set_gpr(31, 0x08A910F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A910F4u) goto L_08A910F4;
    return;
L_08A910F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A91104u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(94));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91104u) goto L_08A91104;
    return;
L_08A91104:
    ctx.set_gpr(31, 0x08A9110Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9110Cu) goto L_08A9110C;
    return;
L_08A9110C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A9111Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(95));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9111Cu) goto L_08A9111C;
    return;
L_08A9111C:
    ctx.set_gpr(31, 0x08A91124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91124u) goto L_08A91124;
    return;
L_08A91124:
    ctx.set_gpr(31, 0x08A9112Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A9112Cu) goto L_08A9112C;
    return;
L_08A9112C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A91138;
      }
      goto L_08A91134;
    }
L_08A91134:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A91138;
L_08A91138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9115C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3652), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9116C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem); return;
L_08A9117C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A911B0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23468));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A911B0u) goto L_08A911B0;
    return;
L_08A911B0:
    ctx.set_gpr(31, 0x08A911B8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A911B8u) goto L_08A911B8;
    return;
L_08A911B8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A911F0;
    }
    goto L_08A911C8;
L_08A911C8:
    ctx.set_gpr(31, 0x08A911D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A911D0u) goto L_08A911D0;
    return;
L_08A911D0:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A911E8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23456));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A911E8u) goto L_08A911E8;
    return;
L_08A911E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A91254;
      }
      goto L_08A911F0;
    }
L_08A911F0:
    ctx.set_gpr(31, 0x08A911F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A911F8u) goto L_08A911F8;
    return;
L_08A911F8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A91230;
    }
    goto L_08A91208;
L_08A91208:
    ctx.set_gpr(31, 0x08A91210u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91210u) goto L_08A91210;
    return;
L_08A91210:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A91228u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23456));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A91228u) goto L_08A91228;
    return;
L_08A91228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91250;
      }
      goto L_08A91230;
    }
L_08A91230:
    ctx.set_gpr(31, 0x08A91238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91238u) goto L_08A91238;
    return;
L_08A91238:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A91250u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-23448));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A91250u) goto L_08A91250;
    return;
L_08A91250:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A91254;
L_08A91254:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A91290u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 455u, 0x08A85998u>(ctx, &aot_mem) && ctx.pc == 0x08A91290u) goto L_08A91290;
    return;
L_08A91290:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A912A8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 455u, 0x08A85998u>(ctx, &aot_mem) && ctx.pc == 0x08A912A8u) goto L_08A912A8;
    return;
L_08A912A8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A912C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 455u, 0x08A85998u>(ctx, &aot_mem) && ctx.pc == 0x08A912C0u) goto L_08A912C0;
    return;
L_08A912C0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A912D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 455u, 0x08A85998u>(ctx, &aot_mem) && ctx.pc == 0x08A912D8u) goto L_08A912D8;
    return;
L_08A912D8:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A912FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A91378;
      }
      goto L_08A91330;
    }
L_08A91330:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A91334;
L_08A91334:
    ctx.set_gpr(31, 0x08A9133Cu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08A9133Cu) goto L_08A9133C;
    return;
L_08A9133C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
        goto L_08A91368;
    }
    goto L_08A91348;
L_08A91348:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(6));
        goto L_08A91368;
    }
    goto L_08A91354;
L_08A91354:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
        goto L_08A91368;
    }
    goto L_08A91360;
L_08A91360:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
        goto L_08A91368;
    }
    goto L_08A91368;
L_08A91368:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A91334;
    }
    goto L_08A91378;
L_08A91378:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91384u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A9116C;
L_08A91384:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
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
L_08A913A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A91464;
      }
      goto L_08A913E4;
    }
L_08A913E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08A913E8;
L_08A913E8:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A913F4u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08A913F4u) goto L_08A913F4;
    return;
L_08A913F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
        goto L_08A91448;
    }
    goto L_08A91400;
L_08A91400:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(6));
        goto L_08A91434;
    }
    goto L_08A9140C;
L_08A9140C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
        goto L_08A91420;
    }
    goto L_08A91418;
L_08A91418:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A9145C;
      }
      goto L_08A91420;
    }
L_08A91420:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A91458;
      }
      goto L_08A91428;
    }
L_08A91428:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A91458;
      }
      goto L_08A91434;
    }
L_08A91434:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A91458;
      }
      goto L_08A9143C;
    }
L_08A9143C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A91458;
      }
      goto L_08A91448;
    }
L_08A91448:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A91458;
      }
      goto L_08A91450;
    }
L_08A91450:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A91458;
L_08A91458:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08A9145C;
L_08A9145C:
    if (static_cast<std::int32_t>(ctx.gpr[16]) > 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_08A913E8;
    }
    goto L_08A91464;
L_08A91464:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
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
L_08A91490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A91804;
      }
      goto L_08A914B0;
    }
L_08A914B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91730;
      }
      goto L_08A914B8;
    }
L_08A914B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A916D4;
      }
      goto L_08A914C4;
    }
L_08A914C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A916B0;
      }
      goto L_08A914D0;
    }
L_08A914D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A914E4;
      }
      goto L_08A914DC;
    }
L_08A914DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91888;
      }
      goto L_08A914E4;
    }
L_08A914E4:
    ctx.set_gpr(31, 0x08A914ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A914ECu) goto L_08A914EC;
    return;
L_08A914EC:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A914FCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24240));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A914FCu) goto L_08A914FC;
    return;
L_08A914FC:
    ctx.set_gpr(31, 0x08A91504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A91504u) goto L_08A91504;
    return;
L_08A91504:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91514u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23440));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A91514u) goto L_08A91514;
    return;
L_08A91514:
    ctx.set_gpr(31, 0x08A9151Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9151Cu) goto L_08A9151C;
    return;
L_08A9151C:
    ctx.set_gpr(31, 0x08A91524u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A91524u) goto L_08A91524;
    return;
L_08A91524:
    ctx.set_gpr(31, 0x08A9152Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9152Cu) goto L_08A9152C;
    return;
L_08A9152C:
    ctx.set_gpr(31, 0x08A91534u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A91534u) goto L_08A91534;
    return;
L_08A91534:
    ctx.set_gpr(31, 0x08A9153Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9153Cu) goto L_08A9153C;
    return;
L_08A9153C:
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
    ctx.set_gpr(31, 0x08A9156Cu);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A9156Cu) goto L_08A9156C;
    return;
L_08A9156C:
    ctx.set_gpr(31, 0x08A91574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91574u) goto L_08A91574;
    return;
L_08A91574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91584u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91584u) goto L_08A91584;
    return;
L_08A91584:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91590u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91590u) goto L_08A91590;
    return;
L_08A91590:
    ctx.set_gpr(31, 0x08A91598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91598u) goto L_08A91598;
    return;
L_08A91598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A915A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A915A8u) goto L_08A915A8;
    return;
L_08A915A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23408));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A915C8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A915C8u) goto L_08A915C8;
    return;
L_08A915C8:
    ctx.set_gpr(31, 0x08A915D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A915D0u) goto L_08A915D0;
    return;
L_08A915D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A915E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A915E0u) goto L_08A915E0;
    return;
L_08A915E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24088));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A91600u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A91600u) goto L_08A91600;
    return;
L_08A91600:
    ctx.set_gpr(31, 0x08A91608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91608u) goto L_08A91608;
    return;
L_08A91608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91618u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91618u) goto L_08A91618;
    return;
L_08A91618:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24052));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A91638u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A91638u) goto L_08A91638;
    return;
L_08A91638:
    ctx.set_gpr(31, 0x08A91640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91640u) goto L_08A91640;
    return;
L_08A91640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91650u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91650u) goto L_08A91650;
    return;
L_08A91650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24744));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A91670u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A91670u) goto L_08A91670;
    return;
L_08A91670:
    ctx.set_gpr(31, 0x08A91678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91678u) goto L_08A91678;
    return;
L_08A91678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91688u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A91688u) goto L_08A91688;
    return;
L_08A91688:
    ctx.set_gpr(31, 0x08A91690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91690u) goto L_08A91690;
    return;
L_08A91690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9169Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A9169Cu) goto L_08A9169C;
    return;
L_08A9169C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A916B0;
    }
L_08A916B0:
    ctx.set_gpr(31, 0x08A916B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A916B8u) goto L_08A916B8;
    return;
L_08A916B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A916C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A916C4u) goto L_08A916C4;
    return;
L_08A916C4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A91894;
    }
    goto L_08A916CC;
L_08A916CC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A916D4;
    }
L_08A916D4:
    ctx.set_gpr(31, 0x08A916DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A916DCu) goto L_08A916DC;
    return;
L_08A916DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A916E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A916E8u) goto L_08A916E8;
    return;
L_08A916E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A916F0;
    }
L_08A916F0:
    ctx.set_gpr(31, 0x08A916F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A916F8u) goto L_08A916F8;
    return;
L_08A916F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91708u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91708u) goto L_08A91708;
    return;
L_08A91708:
    ctx.set_gpr(31, 0x08A91710u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A91710u) goto L_08A91710;
    return;
L_08A91710:
    ctx.set_gpr(31, 0x08A91718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91718u) goto L_08A91718;
    return;
L_08A91718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91724u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91724u) goto L_08A91724;
    return;
L_08A91724:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A91730;
    }
L_08A91730:
    ctx.set_gpr(31, 0x08A91738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91738u) goto L_08A91738;
    return;
L_08A91738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91744u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A91744u) goto L_08A91744;
    return;
L_08A91744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A9174C;
    }
L_08A9174C:
    ctx.set_gpr(31, 0x08A91754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91754u) goto L_08A91754;
    return;
L_08A91754:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91760u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A91760u) goto L_08A91760;
    return;
L_08A91760:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A917DC;
      }
      goto L_08A9176C;
    }
L_08A9176C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A91780;
      }
      goto L_08A91778;
    }
L_08A91778:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
      if (branch_taken) {
          goto L_08A917FC;
      }
      goto L_08A91780;
    }
L_08A91780:
    ctx.set_gpr(31, 0x08A91788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91788u) goto L_08A91788;
    return;
L_08A91788:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91798u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91798u) goto L_08A91798;
    return;
L_08A91798:
    ctx.set_gpr(31, 0x08A917A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A917A0u) goto L_08A917A0;
    return;
L_08A917A0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
        goto L_08A917B8;
    }
    goto L_08A917A8;
L_08A917A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A917C0;
      }
      goto L_08A917B8;
    }
L_08A917B8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    goto L_08A917C0;
L_08A917C0:
    ctx.set_gpr(31, 0x08A917C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A917C8u) goto L_08A917C8;
    return;
L_08A917C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A917D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A917D4u) goto L_08A917D4;
    return;
L_08A917D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A917F8;
      }
      goto L_08A917DC;
    }
L_08A917DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A917ECu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A917ECu) goto L_08A917EC;
    return;
L_08A917EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A917F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A917F8u) goto L_08A917F8;
    return;
L_08A917F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
    goto L_08A917FC;
L_08A917FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A91804;
    }
L_08A91804:
    ctx.set_gpr(31, 0x08A9180Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9180Cu) goto L_08A9180C;
    return;
L_08A9180C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91818u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A91818u) goto L_08A91818;
    return;
L_08A91818:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91890;
      }
      goto L_08A91820;
    }
L_08A91820:
    ctx.set_gpr(31, 0x08A91828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91828u) goto L_08A91828;
    return;
L_08A91828:
    ctx.set_gpr(31, 0x08A91830u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A91830u) goto L_08A91830;
    return;
L_08A91830:
    ctx.set_gpr(31, 0x08A91838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A91838u) goto L_08A91838;
    return;
L_08A91838:
    ctx.set_gpr(31, 0x08A91840u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A91840u) goto L_08A91840;
    return;
L_08A91840:
    ctx.set_gpr(31, 0x08A91848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91848u) goto L_08A91848;
    return;
L_08A91848:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A91858u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91858u) goto L_08A91858;
    return;
L_08A91858:
    ctx.set_gpr(31, 0x08A91860u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A91860u) goto L_08A91860;
    return;
L_08A91860:
    ctx.set_gpr(31, 0x08A91868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A91868u) goto L_08A91868;
    return;
L_08A91868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91874u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91874u) goto L_08A91874;
    return;
L_08A91874:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A91894;
      }
      goto L_08A91888;
    }
L_08A91888:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A91898;
      }
      goto L_08A91890;
    }
L_08A91890:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A91894;
L_08A91894:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A91898;
L_08A91898:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A918A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A918B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A918B4u) goto L_08A918B4;
    return;
L_08A918B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A918C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A918C8u) goto L_08A918C8;
    return;
L_08A918C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A918D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08A91950;
      }
      goto L_08A918F0;
    }
L_08A918F0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91900;
      }
      goto L_08A918FC;
    }
L_08A918FC:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_08A91900;
L_08A91900:
    ctx.set_gpr(31, 0x08A91908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91908u) goto L_08A91908;
    return;
L_08A91908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91914u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08A91914u) goto L_08A91914;
    return;
L_08A91914:
    ctx.set_gpr(31, 0x08A9191Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9191Cu) goto L_08A9191C;
    return;
L_08A9191C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18308)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x08A91948u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08A91948u) goto L_08A91948;
    return;
L_08A91948:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A919BC;
      }
      goto L_08A91950;
    }
L_08A91950:
    ctx.set_gpr(31, 0x08A91958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91958u) goto L_08A91958;
    return;
L_08A91958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 49024u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18308)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A91980u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 286u, 0x088555B8u>(ctx, &aot_mem) && ctx.pc == 0x08A91980u) goto L_08A91980;
    return;
L_08A91980:
    ctx.set_gpr(31, 0x08A91988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91988u) goto L_08A91988;
    return;
L_08A91988:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18308)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A919B8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 285u, 0x088555A8u>(ctx, &aot_mem) && ctx.pc == 0x08A919B8u) goto L_08A919B8;
    return;
L_08A919B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A919BC;
L_08A919BC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A919CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A91AEC;
      }
      goto L_08A919F4;
    }
L_08A919F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A91A7C;
      }
      goto L_08A91A00;
    }
L_08A91A00:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A10;
      }
      goto L_08A91A08;
    }
L_08A91A08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A91B04;
      }
      goto L_08A91A10;
    }
L_08A91A10:
    ctx.set_gpr(31, 0x08A91A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91A18u) goto L_08A91A18;
    return;
L_08A91A18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91A24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 275u, 0x08AB0FF8u>(ctx, &aot_mem) && ctx.pc == 0x08A91A24u) goto L_08A91A24;
    return;
L_08A91A24:
    ctx.set_gpr(31, 0x08A91A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91A2Cu) goto L_08A91A2C;
    return;
L_08A91A2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91A38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 266u, 0x08AB0F70u>(ctx, &aot_mem) && ctx.pc == 0x08A91A38u) goto L_08A91A38;
    return;
L_08A91A38:
    ctx.set_gpr(31, 0x08A91A40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A91A40u) goto L_08A91A40;
    return;
L_08A91A40:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A91A5C;
      }
      goto L_08A91A54;
    }
L_08A91A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A60;
      }
      goto L_08A91A5C;
    }
L_08A91A5C:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    goto L_08A91A60;
L_08A91A60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18392), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A91B00;
      }
      goto L_08A91A7C;
    }
L_08A91A7C:
    ctx.set_gpr(31, 0x08A91A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91A84u) goto L_08A91A84;
    return;
L_08A91A84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91A90u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_08A91B2C;
L_08A91A90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91A9Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A91B1C;
L_08A91A9C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18392)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A91AB8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 459u, 0x08AB1B04u>(ctx, &aot_mem) && ctx.pc == 0x08A91AB8u) goto L_08A91AB8;
    return;
L_08A91AB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 2246u << 16u);
        goto L_08A91AD8;
    }
    goto L_08A91AC4;
L_08A91AC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A91B04;
      }
      goto L_08A91AD8;
    }
L_08A91AD8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A91B00;
      }
      goto L_08A91AEC;
    }
L_08A91AEC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19640), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18398), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A91B04;
      }
      goto L_08A91B00;
    }
L_08A91B00:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A91B04;
L_08A91B04:
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
L_08A91B1C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1748u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91B2C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91B3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18302)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A91BA0;
      }
      goto L_08A91B5C;
    }
L_08A91B5C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18996)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A91B7C;
    }
    goto L_08A91B68;
L_08A91B68:
    ctx.set_gpr(31, 0x08A91B70u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A91B70u) goto L_08A91B70;
    return;
L_08A91B70:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18996), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A91B7C;
L_08A91B7C:
    ctx.set_gpr(31, 0x08A91B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A91B84u) goto L_08A91B84;
    return;
L_08A91B84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A91BA4;
    }
    goto L_08A91B94;
L_08A91B94:
    ctx.set_gpr(31, 0x08A91B9Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A91B9Cu) goto L_08A91B9C;
    return;
L_08A91B9C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_08A91BA0;
L_08A91BA0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A91BA4;
L_08A91BA4:
    ctx.set_gpr(31, 0x08A91BACu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 157u, 0x08A94BDCu>(ctx, &aot_mem) && ctx.pc == 0x08A91BACu) goto L_08A91BAC;
    return;
L_08A91BAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91BC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 820u, 0x08866940u>(ctx, &aot_mem); return;
L_08A91BC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A91E88;
      }
      goto L_08A91BE4;
    }
L_08A91BE4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26272));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91C00:
    ctx.set_gpr(31, 0x08A91C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 165u, 0x08A80734u>(ctx, &aot_mem) && ctx.pc == 0x08A91C08u) goto L_08A91C08;
    return;
L_08A91C08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91C1C;
    }
L_08A91C1C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91C34;
      }
      goto L_08A91C28;
    }
L_08A91C28:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91C34;
    }
L_08A91C34:
    ctx.set_gpr(31, 0x08A91C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91C3Cu) goto L_08A91C3C;
    return;
L_08A91C3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A91C50u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91C50u) goto L_08A91C50;
    return;
L_08A91C50:
    ctx.set_gpr(31, 0x08A91C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91C58u) goto L_08A91C58;
    return;
L_08A91C58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A91C6Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91C6Cu) goto L_08A91C6C;
    return;
L_08A91C6C:
    ctx.set_gpr(31, 0x08A91C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91C74u) goto L_08A91C74;
    return;
L_08A91C74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A91C88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91C88u) goto L_08A91C88;
    return;
L_08A91C88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A91F38;
      }
      goto L_08A91C90;
    }
L_08A91C90:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(18396));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A91CA8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 763u, 0x08AE2988u>(ctx, &aot_mem) && ctx.pc == 0x08A91CA8u) goto L_08A91CA8;
    return;
L_08A91CA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91CB0;
    }
L_08A91CB0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18396)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
        goto L_08A91CCC;
    }
    goto L_08A91CBC;
L_08A91CBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91CCC;
    }
L_08A91CCC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91CD8;
    }
L_08A91CD8:
    ctx.set_gpr(31, 0x08A91CE0u);
    // nop
    goto L_08A91F48;
L_08A91CE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91CF4;
    }
L_08A91CF4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91D0C;
      }
      goto L_08A91D00;
    }
L_08A91D00:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91D0C;
    }
L_08A91D0C:
    ctx.set_gpr(31, 0x08A91D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91D14u) goto L_08A91D14;
    return;
L_08A91D14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A91D28u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91D28u) goto L_08A91D28;
    return;
L_08A91D28:
    ctx.set_gpr(31, 0x08A91D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91D30u) goto L_08A91D30;
    return;
L_08A91D30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A91D44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91D44u) goto L_08A91D44;
    return;
L_08A91D44:
    ctx.set_gpr(31, 0x08A91D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91D4Cu) goto L_08A91D4C;
    return;
L_08A91D4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A91D60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91D60u) goto L_08A91D60;
    return;
L_08A91D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91D68;
    }
L_08A91D68:
    ctx.set_gpr(31, 0x08A91D70u);
    // nop
    goto L_08A92278;
L_08A91D70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91D80;
    }
L_08A91D80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91D8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A91D8Cu) goto L_08A91D8C;
    return;
L_08A91D8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91D98u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A91D98u) goto L_08A91D98;
    return;
L_08A91D98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91DA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A91DA4u) goto L_08A91DA4;
    return;
L_08A91DA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A91DB0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 557u, 0x08A96A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91DB0u) goto L_08A91DB0;
    return;
L_08A91DB0:
    ctx.set_gpr(31, 0x08A91DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91DB8u) goto L_08A91DB8;
    return;
L_08A91DB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A91DCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91DCCu) goto L_08A91DCC;
    return;
L_08A91DCC:
    ctx.set_gpr(31, 0x08A91DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91DD4u) goto L_08A91DD4;
    return;
L_08A91DD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A91DE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91DE8u) goto L_08A91DE8;
    return;
L_08A91DE8:
    ctx.set_gpr(31, 0x08A91DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91DF0u) goto L_08A91DF0;
    return;
L_08A91DF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A91E04u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91E04u) goto L_08A91E04;
    return;
L_08A91E04:
    ctx.set_gpr(31, 0x08A91E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91E0Cu) goto L_08A91E0C;
    return;
L_08A91E0C:
    ctx.set_gpr(31, 0x08A91E14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A91E14u) goto L_08A91E14;
    return;
L_08A91E14:
    ctx.set_gpr(31, 0x08A91E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A91E1Cu) goto L_08A91E1C;
    return;
L_08A91E1C:
    ctx.set_gpr(31, 0x08A91E24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A91E24u) goto L_08A91E24;
    return;
L_08A91E24:
    ctx.set_gpr(31, 0x08A91E2Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 786u, 0x08AA6D98u>(ctx, &aot_mem) && ctx.pc == 0x08A91E2Cu) goto L_08A91E2C;
    return;
L_08A91E2C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18464), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18468), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18412), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91E4C;
    }
L_08A91E4C:
    ctx.set_gpr(31, 0x08A91E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1068u, 0x08A8F3F4u>(ctx, &aot_mem) && ctx.pc == 0x08A91E54u) goto L_08A91E54;
    return;
L_08A91E54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91E64;
    }
L_08A91E64:
    ctx.set_gpr(31, 0x08A91E6Cu);
    // nop
    goto L_08A92A4C;
L_08A91E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18460), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A91F34;
      }
      goto L_08A91E80;
    }
L_08A91E80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A91F38;
      }
      goto L_08A91E88;
    }
L_08A91E88:
    ctx.set_gpr(31, 0x08A91E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A91E90u) goto L_08A91E90;
    return;
L_08A91E90:
    ctx.set_gpr(31, 0x08A91E98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A91E98u) goto L_08A91E98;
    return;
L_08A91E98:
    ctx.set_gpr(31, 0x08A91EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91EA0u) goto L_08A91EA0;
    return;
L_08A91EA0:
    ctx.set_gpr(31, 0x08A91EA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A91EA8u) goto L_08A91EA8;
    return;
L_08A91EA8:
    ctx.set_gpr(31, 0x08A91EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A91EB0u) goto L_08A91EB0;
    return;
L_08A91EB0:
    ctx.set_gpr(31, 0x08A91EB8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A91EB8u) goto L_08A91EB8;
    return;
L_08A91EB8:
    ctx.set_gpr(31, 0x08A91EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A91EC0u) goto L_08A91EC0;
    return;
L_08A91EC0:
    ctx.set_gpr(31, 0x08A91EC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A91EC8u) goto L_08A91EC8;
    return;
L_08A91EC8:
    ctx.set_gpr(31, 0x08A91ED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91ED0u) goto L_08A91ED0;
    return;
L_08A91ED0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A91EE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91EE4u) goto L_08A91EE4;
    return;
L_08A91EE4:
    ctx.set_gpr(31, 0x08A91EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91EECu) goto L_08A91EEC;
    return;
L_08A91EEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A91F00u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91F00u) goto L_08A91F00;
    return;
L_08A91F00:
    ctx.set_gpr(31, 0x08A91F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91F08u) goto L_08A91F08;
    return;
L_08A91F08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A91F1Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91F1Cu) goto L_08A91F1C;
    return;
L_08A91F1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18460)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A91F2C;
    }
    goto L_08A91F28;
L_08A91F28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A91F2C;
L_08A91F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A91F3C;
      }
      goto L_08A91F34;
    }
L_08A91F34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A91F38;
L_08A91F38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A91F3C;
L_08A91F3C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91F48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A92230;
      }
      goto L_08A91F6C;
    }
L_08A91F6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_08A92114;
    }
    goto L_08A91F78;
L_08A91F78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08A9210C;
    }
    goto L_08A91F84;
L_08A91F84:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
        goto L_08A91F94;
    }
    goto L_08A91F8C;
L_08A91F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A921B8;
      }
      goto L_08A91F94;
    }
L_08A91F94:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(26));
    ctx.set_gpr(31, 0x08A91FB0u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A91FB0u) goto L_08A91FB0;
    return;
L_08A91FB0:
    ctx.set_gpr(31, 0x08A91FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A91FB8u) goto L_08A91FB8;
    return;
L_08A91FB8:
    ctx.set_gpr(31, 0x08A91FC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A91FC0u) goto L_08A91FC0;
    return;
L_08A91FC0:
    ctx.set_gpr(31, 0x08A91FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91FC8u) goto L_08A91FC8;
    return;
L_08A91FC8:
    ctx.set_gpr(31, 0x08A91FD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91FD0u) goto L_08A91FD0;
    return;
L_08A91FD0:
    ctx.set_gpr(31, 0x08A91FD8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A91FD8u) goto L_08A91FD8;
    return;
L_08A91FD8:
    ctx.set_gpr(31, 0x08A91FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91FE0u) goto L_08A91FE0;
    return;
L_08A91FE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A91FF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91FF4u) goto L_08A91FF4;
    return;
L_08A91FF4:
    ctx.set_gpr(31, 0x08A91FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A91FFCu) goto L_08A91FFC;
    return;
L_08A91FFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A92010u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92010u) goto L_08A92010;
    return;
L_08A92010:
    ctx.set_gpr(31, 0x08A92018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92018u) goto L_08A92018;
    return;
L_08A92018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A9202Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9202Cu) goto L_08A9202C;
    return;
L_08A9202C:
    ctx.set_gpr(31, 0x08A92034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92034u) goto L_08A92034;
    return;
L_08A92034:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92044u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23388));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A92044u) goto L_08A92044;
    return;
L_08A92044:
    ctx.set_gpr(31, 0x08A9204Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A9204Cu) goto L_08A9204C;
    return;
L_08A9204C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9205Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23376));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A9205Cu) goto L_08A9205C;
    return;
L_08A9205C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9206Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A9206Cu) goto L_08A9206C;
    return;
L_08A9206C:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A92070;
L_08A92070:
    ctx.set_gpr(31, 0x08A92078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92078u) goto L_08A92078;
    return;
L_08A92078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92088u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92088u) goto L_08A92088;
    return;
L_08A92088:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92098u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08A92254;
L_08A92098:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A920B4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A920B4u) goto L_08A920B4;
    return;
L_08A920B4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92070;
      }
      goto L_08A920C4;
    }
L_08A920C4:
    ctx.set_gpr(31, 0x08A920CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A920CCu) goto L_08A920CC;
    return;
L_08A920CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A920DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A920DCu) goto L_08A920DC;
    return;
L_08A920DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A920E8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A920E8u) goto L_08A920E8;
    return;
L_08A920E8:
    ctx.set_gpr(31, 0x08A920F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A920F0u) goto L_08A920F0;
    return;
L_08A920F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A920FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A920FCu) goto L_08A920FC;
    return;
L_08A920FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92230;
      }
      goto L_08A9210C;
    }
L_08A9210C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92230;
      }
      goto L_08A92114;
    }
L_08A92114:
    ctx.set_gpr(31, 0x08A9211Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9211Cu) goto L_08A9211C;
    return;
L_08A9211C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92198;
      }
      goto L_08A92128;
    }
L_08A92128:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A9213C;
    }
    goto L_08A92134;
L_08A92134:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A92234;
      }
      goto L_08A9213C;
    }
L_08A9213C:
    ctx.set_gpr(31, 0x08A92144u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A92144u) goto L_08A92144;
    return;
L_08A92144:
    ctx.set_gpr(31, 0x08A9214Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9214Cu) goto L_08A9214C;
    return;
L_08A9214C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9215Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9215Cu) goto L_08A9215C;
    return;
L_08A9215C:
    ctx.set_gpr(31, 0x08A92164u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A92164u) goto L_08A92164;
    return;
L_08A92164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A92170u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08A9224C;
L_08A92170:
    ctx.set_gpr(31, 0x08A92178u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 538u, 0x08A9B4F0u>(ctx, &aot_mem) && ctx.pc == 0x08A92178u) goto L_08A92178;
    return;
L_08A92178:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A92184u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92184u) goto L_08A92184;
    return;
L_08A92184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92190u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A92190u) goto L_08A92190;
    return;
L_08A92190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92230;
      }
      goto L_08A92198;
    }
L_08A92198:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A921A4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A921A4u) goto L_08A921A4;
    return;
L_08A921A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A921B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A921B0u) goto L_08A921B0;
    return;
L_08A921B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92230;
      }
      goto L_08A921B8;
    }
L_08A921B8:
    ctx.set_gpr(31, 0x08A921C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A921C0u) goto L_08A921C0;
    return;
L_08A921C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A921CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A921CCu) goto L_08A921CC;
    return;
L_08A921CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92230;
      }
      goto L_08A921D4;
    }
L_08A921D4:
    ctx.set_gpr(31, 0x08A921DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A921DCu) goto L_08A921DC;
    return;
L_08A921DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A921ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A921ECu) goto L_08A921EC;
    return;
L_08A921EC:
    ctx.set_gpr(31, 0x08A921F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A921F4u) goto L_08A921F4;
    return;
L_08A921F4:
    ctx.set_gpr(31, 0x08A921FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A921FCu) goto L_08A921FC;
    return;
L_08A921FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92208u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92208u) goto L_08A92208;
    return;
L_08A92208:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A92228;
      }
      goto L_08A92214;
    }
L_08A92214:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A92220u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A92220u) goto L_08A92220;
    return;
L_08A92220:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A92234;
      }
      goto L_08A92228;
    }
L_08A92228:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A92234;
      }
      goto L_08A92230;
    }
L_08A92230:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A92234;
L_08A92234:
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
L_08A9224C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1592), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92254:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19340));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A922ACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A922ACu) goto L_08A922AC;
    return;
L_08A922AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A92814;
    }
    goto L_08A922BC;
L_08A922BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A9258C;
    }
    goto L_08A922C8;
L_08A922C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92560;
      }
      goto L_08A922D4;
    }
L_08A922D4:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
        goto L_08A922E4;
    }
    goto L_08A922DC;
L_08A922DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92928;
      }
      goto L_08A922E4;
    }
L_08A922E4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A9230Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A9230Cu) goto L_08A9230C;
    return;
L_08A9230C:
    ctx.set_gpr(31, 0x08A92314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A92314u) goto L_08A92314;
    return;
L_08A92314:
    ctx.set_gpr(31, 0x08A9231Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A9231Cu) goto L_08A9231C;
    return;
L_08A9231C:
    ctx.set_gpr(31, 0x08A92324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92324u) goto L_08A92324;
    return;
L_08A92324:
    ctx.set_gpr(31, 0x08A9232Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9232Cu) goto L_08A9232C;
    return;
L_08A9232C:
    ctx.set_gpr(31, 0x08A92334u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A92334u) goto L_08A92334;
    return;
L_08A92334:
    ctx.set_gpr(31, 0x08A9233Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9233Cu) goto L_08A9233C;
    return;
L_08A9233C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A92350u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92350u) goto L_08A92350;
    return;
L_08A92350:
    ctx.set_gpr(31, 0x08A92358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92358u) goto L_08A92358;
    return;
L_08A92358:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9236Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9236Cu) goto L_08A9236C;
    return;
L_08A9236C:
    ctx.set_gpr(31, 0x08A92374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92374u) goto L_08A92374;
    return;
L_08A92374:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A92388u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92388u) goto L_08A92388;
    return;
L_08A92388:
    ctx.set_gpr(31, 0x08A92390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92390u) goto L_08A92390;
    return;
L_08A92390:
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A923A0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28964));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A923A0u) goto L_08A923A0;
    return;
L_08A923A0:
    ctx.set_gpr(31, 0x08A923A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A923A8u) goto L_08A923A8;
    return;
L_08A923A8:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A923B8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23332));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A923B8u) goto L_08A923B8;
    return;
L_08A923B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A923C8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A923C8u) goto L_08A923C8;
    return;
L_08A923C8:
    ctx.set_gpr(31, 0x08A923D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A923D0u) goto L_08A923D0;
    return;
L_08A923D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A923E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A923E0u) goto L_08A923E0;
    return;
L_08A923E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A923ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(228));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A923ECu) goto L_08A923EC;
    return;
L_08A923EC:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08A923F4;
L_08A923F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A924D4;
      }
      goto L_08A923FC;
    }
L_08A923FC:
    ctx.set_gpr(31, 0x08A92404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A92404u) goto L_08A92404;
    return;
L_08A92404:
    ctx.set_gpr(31, 0x08A9240Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 633u, 0x08847AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A9240Cu) goto L_08A9240C;
    return;
L_08A9240C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-30));
    ctx.set_gpr(31, 0x08A92418u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 364u, 0x0886170Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92418u) goto L_08A92418;
    return;
L_08A92418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9246C;
      }
      goto L_08A92420;
    }
L_08A92420:
    ctx.set_gpr(31, 0x08A92428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92428u) goto L_08A92428;
    return;
L_08A92428:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92438u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92438u) goto L_08A92438;
    return;
L_08A92438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92448u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A92448u) goto L_08A92448;
    return;
L_08A92448:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A92464u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A92464u) goto L_08A92464;
    return;
L_08A92464:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9251C;
      }
      goto L_08A9246C;
    }
L_08A9246C:
    ctx.set_gpr(31, 0x08A92474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92474u) goto L_08A92474;
    return;
L_08A92474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92484u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92484u) goto L_08A92484;
    return;
L_08A92484:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23792));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A924A4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A924A4u) goto L_08A924A4;
    return;
L_08A924A4:
    ctx.set_gpr(31, 0x08A924ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A924ACu) goto L_08A924AC;
    return;
L_08A924AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A924BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A924BCu) goto L_08A924BC;
    return;
L_08A924BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A924CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 644u, 0x08AF2918u>(ctx, &aot_mem) && ctx.pc == 0x08A924CCu) goto L_08A924CC;
    return;
L_08A924CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92518;
      }
      goto L_08A924D4;
    }
L_08A924D4:
    ctx.set_gpr(31, 0x08A924DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A924DCu) goto L_08A924DC;
    return;
L_08A924DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A924ECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A924ECu) goto L_08A924EC;
    return;
L_08A924EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A924FCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A924FCu) goto L_08A924FC;
    return;
L_08A924FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A92518u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A92518u) goto L_08A92518;
    return;
L_08A92518:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A9251C;
L_08A9251C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 228 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
        goto L_08A923F4;
    }
    goto L_08A92528;
L_08A92528:
    ctx.set_gpr(31, 0x08A92530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92530u) goto L_08A92530;
    return;
L_08A92530:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9253Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A9253Cu) goto L_08A9253C;
    return;
L_08A9253C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A92548u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1241u, 0x08A8FCC4u>(ctx, &aot_mem) && ctx.pc == 0x08A92548u) goto L_08A92548;
    return;
L_08A92548:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18228), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92560;
    }
L_08A92560:
    ctx.set_gpr(31, 0x08A92568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92568u) goto L_08A92568;
    return;
L_08A92568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92574u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A92574u) goto L_08A92574;
    return;
L_08A92574:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A92A2C;
    }
    goto L_08A9257C;
L_08A9257C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A9258C;
    }
L_08A9258C:
    ctx.set_gpr(31, 0x08A92594u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 550u, 0x08A7E3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92594u) goto L_08A92594;
    return;
L_08A92594:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92628;
      }
      goto L_08A925A0;
    }
L_08A925A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A925B4;
      }
      goto L_08A925AC;
    }
L_08A925AC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
      if (branch_taken) {
          goto L_08A92694;
      }
      goto L_08A925B4;
    }
L_08A925B4:
    ctx.set_gpr(31, 0x08A925BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A925BCu) goto L_08A925BC;
    return;
L_08A925BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A925CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A925CCu) goto L_08A925CC;
    return;
L_08A925CC:
    ctx.set_gpr(31, 0x08A925D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A925D4u) goto L_08A925D4;
    return;
L_08A925D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A925E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A925E0u) goto L_08A925E0;
    return;
L_08A925E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A925ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A925ECu) goto L_08A925EC;
    return;
L_08A925EC:
    ctx.set_gpr(31, 0x08A925F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A925F4u) goto L_08A925F4;
    return;
L_08A925F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A92608u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92608u) goto L_08A92608;
    return;
L_08A92608:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A92614u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92614u) goto L_08A92614;
    return;
L_08A92614:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92620u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A92620u) goto L_08A92620;
    return;
L_08A92620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92628;
    }
L_08A92628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A92638u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A92638u) goto L_08A92638;
    return;
L_08A92638:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18228)));
    ctx.set_gpr(31, 0x08A92648u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A92648u) goto L_08A92648;
    return;
L_08A92648:
    ctx.set_gpr(31, 0x08A92650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92650u) goto L_08A92650;
    return;
L_08A92650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A92664u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92664u) goto L_08A92664;
    return;
L_08A92664:
    ctx.set_gpr(31, 0x08A9266Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9266Cu) goto L_08A9266C;
    return;
L_08A9266C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92678u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A92678u) goto L_08A92678;
    return;
L_08A92678:
    ctx.set_gpr(31, 0x08A92680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92680u) goto L_08A92680;
    return;
L_08A92680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9268Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A9268Cu) goto L_08A9268C;
    return;
L_08A9268C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92694;
    }
L_08A92694:
    ctx.set_gpr(31, 0x08A9269Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9269Cu) goto L_08A9269C;
    return;
L_08A9269C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A926ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A926ACu) goto L_08A926AC;
    return;
L_08A926AC:
    ctx.set_gpr(31, 0x08A926B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A926B4u) goto L_08A926B4;
    return;
L_08A926B4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92710;
      }
      goto L_08A926BC;
    }
L_08A926BC:
    ctx.set_gpr(31, 0x08A926C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A926C4u) goto L_08A926C4;
    return;
L_08A926C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A926D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A926D4u) goto L_08A926D4;
    return;
L_08A926D4:
    ctx.set_gpr(31, 0x08A926DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A926DCu) goto L_08A926DC;
    return;
L_08A926DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A926E8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A926E8u) goto L_08A926E8;
    return;
L_08A926E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A926F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A926F4u) goto L_08A926F4;
    return;
L_08A926F4:
    ctx.set_gpr(31, 0x08A926FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A926FCu) goto L_08A926FC;
    return;
L_08A926FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A92710u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92710u) goto L_08A92710;
    return;
L_08A92710:
    ctx.set_gpr(31, 0x08A92718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A92718u) goto L_08A92718;
    return;
L_08A92718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92724u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A92724u) goto L_08A92724;
    return;
L_08A92724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A9272C;
    }
L_08A9272C:
    ctx.set_gpr(31, 0x08A92734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92734u) goto L_08A92734;
    return;
L_08A92734:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92744u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92744u) goto L_08A92744;
    return;
L_08A92744:
    ctx.set_gpr(31, 0x08A9274Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9274Cu) goto L_08A9274C;
    return;
L_08A9274C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9275Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9275Cu) goto L_08A9275C;
    return;
L_08A9275C:
    ctx.set_gpr(31, 0x08A92764u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A92764u) goto L_08A92764;
    return;
L_08A92764:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A92770u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 886u, 0x08A7F1E8u>(ctx, &aot_mem) && ctx.pc == 0x08A92770u) goto L_08A92770;
    return;
L_08A92770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92778;
    }
L_08A92778:
    ctx.set_gpr(31, 0x08A92780u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A92780u) goto L_08A92780;
    return;
L_08A92780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9278Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9278Cu) goto L_08A9278C;
    return;
L_08A9278C:
    ctx.set_gpr(31, 0x08A92794u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A92794u) goto L_08A92794;
    return;
L_08A92794:
    ctx.set_gpr(31, 0x08A9279Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9279Cu) goto L_08A9279C;
    return;
L_08A9279C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A927ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A927ACu) goto L_08A927AC;
    return;
L_08A927AC:
    ctx.set_gpr(31, 0x08A927B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A927B4u) goto L_08A927B4;
    return;
L_08A927B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A927C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A927C4u) goto L_08A927C4;
    return;
L_08A927C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A927D8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A927D8u) goto L_08A927D8;
    return;
L_08A927D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A927E8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A927E8u) goto L_08A927E8;
    return;
L_08A927E8:
    ctx.set_gpr(31, 0x08A927F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A927F0u) goto L_08A927F0;
    return;
L_08A927F0:
    ctx.set_gpr(31, 0x08A927F8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A927F8u) goto L_08A927F8;
    return;
L_08A927F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A9280Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9280Cu) goto L_08A9280C;
    return;
L_08A9280C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92814;
    }
L_08A92814:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18732), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A92824u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 232u, 0x08A95114u>(ctx, &aot_mem) && ctx.pc == 0x08A92824u) goto L_08A92824;
    return;
L_08A92824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A9282C;
    }
L_08A9282C:
    ctx.set_gpr(31, 0x08A92834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92834u) goto L_08A92834;
    return;
L_08A92834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A92848u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92848u) goto L_08A92848;
    return;
L_08A92848:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A92854u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08A92854u) goto L_08A92854;
    return;
L_08A92854:
    ctx.set_gpr(31, 0x08A9285Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9285Cu) goto L_08A9285C;
    return;
L_08A9285C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08A9286Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 859u, 0x0885F49Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9286Cu) goto L_08A9286C;
    return;
L_08A9286C:
    ctx.set_gpr(31, 0x08A92874u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x08A92874u) goto L_08A92874;
    return;
L_08A92874:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x08A92884u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x08A92884u) goto L_08A92884;
    return;
L_08A92884:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08A92920;
    }
    goto L_08A9288C;
L_08A9288C:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17592)));
    ctx.set_gpr(31, 0x08A9289Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08A9289Cu) goto L_08A9289C;
    return;
L_08A9289C:
    ctx.set_gpr(31, 0x08A928A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A928A4u) goto L_08A928A4;
    return;
L_08A928A4:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A928C4u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08A928C4u) goto L_08A928C4;
    return;
L_08A928C4:
    ctx.set_gpr(19, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A928D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A928D4u) goto L_08A928D4;
    return;
L_08A928D4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92900;
      }
      goto L_08A928DC;
    }
L_08A928DC:
    ctx.set_gpr(31, 0x08A928E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A928E4u) goto L_08A928E4;
    return;
L_08A928E4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A928F4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08A928F4u) goto L_08A928F4;
    return;
L_08A928F4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A92900u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08A92900u) goto L_08A92900;
    return;
L_08A92900:
    ctx.set_gpr(31, 0x08A92908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A92908u) goto L_08A92908;
    return;
L_08A92908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9291Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08A9291Cu) goto L_08A9291C;
    return;
L_08A9291C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    goto L_08A92920;
L_08A92920:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92928;
    }
L_08A92928:
    ctx.set_gpr(31, 0x08A92930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92930u) goto L_08A92930;
    return;
L_08A92930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9293Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9293Cu) goto L_08A9293C;
    return;
L_08A9293C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92A28;
      }
      goto L_08A92944;
    }
L_08A92944:
    ctx.set_gpr(31, 0x08A9294Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9294Cu) goto L_08A9294C;
    return;
L_08A9294C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9295Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9295Cu) goto L_08A9295C;
    return;
L_08A9295C:
    ctx.set_gpr(31, 0x08A92964u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A92964u) goto L_08A92964;
    return;
L_08A92964:
    ctx.set_gpr(31, 0x08A9296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A9296Cu) goto L_08A9296C;
    return;
L_08A9296C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92978u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92978u) goto L_08A92978;
    return;
L_08A92978:
    ctx.set_gpr(31, 0x08A92980u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18248)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A92980u) goto L_08A92980;
    return;
L_08A92980:
    ctx.set_gpr(31, 0x08A92988u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A92988u) goto L_08A92988;
    return;
L_08A92988:
    ctx.set_gpr(31, 0x08A92990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92990u) goto L_08A92990;
    return;
L_08A92990:
    ctx.set_gpr(31, 0x08A92998u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92998u) goto L_08A92998;
    return;
L_08A92998:
    ctx.set_gpr(31, 0x08A929A0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A929A0u) goto L_08A929A0;
    return;
L_08A929A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A929B0;
      }
      goto L_08A929A8;
    }
L_08A929A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A92A2C;
      }
      goto L_08A929B0;
    }
L_08A929B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18460)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08A92A04;
    }
    goto L_08A929C0;
L_08A929C0:
    ctx.set_gpr(31, 0x08A929C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A929C8u) goto L_08A929C8;
    return;
L_08A929C8:
    ctx.set_gpr(31, 0x08A929D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A929D0u) goto L_08A929D0;
    return;
L_08A929D0:
    ctx.set_gpr(31, 0x08A929D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A929D8u) goto L_08A929D8;
    return;
L_08A929D8:
    ctx.set_gpr(31, 0x08A929E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A929E0u) goto L_08A929E0;
    return;
L_08A929E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A929ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A929ECu) goto L_08A929EC;
    return;
L_08A929EC:
    ctx.set_gpr(31, 0x08A929F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A929F4u) goto L_08A929F4;
    return;
L_08A929F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92A00u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A92A00u) goto L_08A92A00;
    return;
L_08A92A00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08A92A04;
L_08A92A04:
    ctx.set_gpr(31, 0x08A92A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A92A0Cu) goto L_08A92A0C;
    return;
L_08A92A0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(31, 0x08A92A1Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 219u, 0x08A94FECu>(ctx, &aot_mem) && ctx.pc == 0x08A92A1Cu) goto L_08A92A1C;
    return;
L_08A92A1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A92A2C;
      }
      goto L_08A92A28;
    }
L_08A92A28:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A92A2C;
L_08A92A2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92A4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23224)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18464)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22916)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22912)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22908)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22904)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22900)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22896)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22892)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22888)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22884)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A92FE8;
      }
      goto L_08A92B48;
    }
L_08A92B48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92F50;
      }
      goto L_08A92B54;
    }
L_08A92B54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92D0C;
      }
      goto L_08A92B60;
    }
L_08A92B60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92CE0;
      }
      goto L_08A92B6C;
    }
L_08A92B6C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92B7C;
      }
      goto L_08A92B74;
    }
L_08A92B74:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18460), 0u);
      if (branch_taken) {
          goto L_08A93258;
      }
      goto L_08A92B7C;
    }
L_08A92B7C:
    ctx.set_gpr(31, 0x08A92B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92B84u) goto L_08A92B84;
    return;
L_08A92B84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A92B98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92B98u) goto L_08A92B98;
    return;
L_08A92B98:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x08A92BACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A92BACu) goto L_08A92BAC;
    return;
L_08A92BAC:
    ctx.set_gpr(31, 0x08A92BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92BB4u) goto L_08A92BB4;
    return;
L_08A92BB4:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92BC4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-22880));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A92BC4u) goto L_08A92BC4;
    return;
L_08A92BC4:
    ctx.set_gpr(31, 0x08A92BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A92BCCu) goto L_08A92BCC;
    return;
L_08A92BCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A92BD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A92BD8u) goto L_08A92BD8;
    return;
L_08A92BD8:
    ctx.set_gpr(31, 0x08A92BE0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A92BE0u) goto L_08A92BE0;
    return;
L_08A92BE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A92C00u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A92C00u) goto L_08A92C00;
    return;
L_08A92C00:
    ctx.set_gpr(31, 0x08A92C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A92C08u) goto L_08A92C08;
    return;
L_08A92C08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92C14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A92C14u) goto L_08A92C14;
    return;
L_08A92C14:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92C24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A92C24u) goto L_08A92C24;
    return;
L_08A92C24:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A92C30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A92C30u) goto L_08A92C30;
    return;
L_08A92C30:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_08A92C38;
L_08A92C38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92C50;
      }
      goto L_08A92C44;
    }
L_08A92C44:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A92C88;
    }
    goto L_08A92C50;
L_08A92C50:
    ctx.set_gpr(31, 0x08A92C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92C58u) goto L_08A92C58;
    return;
L_08A92C58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92C68u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92C68u) goto L_08A92C68;
    return;
L_08A92C68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A92C84u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A92C84u) goto L_08A92C84;
    return;
L_08A92C84:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A92C88;
L_08A92C88:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A92C38;
      }
      goto L_08A92C94;
    }
L_08A92C94:
    ctx.set_gpr(31, 0x08A92C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92C9Cu) goto L_08A92C9C;
    return;
L_08A92C9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92CACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92CACu) goto L_08A92CAC;
    return;
L_08A92CAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92CB8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A93290;
L_08A92CB8:
    ctx.set_gpr(31, 0x08A92CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92CC0u) goto L_08A92CC0;
    return;
L_08A92CC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92CCCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A92CCCu) goto L_08A92CCC;
    return;
L_08A92CCC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18468), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18464)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92CE0;
    }
L_08A92CE0:
    ctx.set_gpr(31, 0x08A92CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92CE8u) goto L_08A92CE8;
    return;
L_08A92CE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92CF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A92CF4u) goto L_08A92CF4;
    return;
L_08A92CF4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A93278;
    }
    goto L_08A92CFC;
L_08A92CFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18464)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92D0C;
    }
L_08A92D0C:
    ctx.set_gpr(31, 0x08A92D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92D14u) goto L_08A92D14;
    return;
L_08A92D14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92D20u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A92D20u) goto L_08A92D20;
    return;
L_08A92D20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A92D34;
      }
      goto L_08A92D2C;
    }
L_08A92D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
      if (branch_taken) {
          goto L_08A92EBC;
      }
      goto L_08A92D34;
    }
L_08A92D34:
    ctx.set_gpr(31, 0x08A92D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92D3Cu) goto L_08A92D3C;
    return;
L_08A92D3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92D4Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92D4Cu) goto L_08A92D4C;
    return;
L_08A92D4C:
    ctx.set_gpr(31, 0x08A92D54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08A92D54u) goto L_08A92D54;
    return;
L_08A92D54:
    ctx.set_gpr(31, 0x08A92D5Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18412), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92D5Cu) goto L_08A92D5C;
    return;
L_08A92D5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92D6Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92D6Cu) goto L_08A92D6C;
    return;
L_08A92D6C:
    ctx.set_gpr(31, 0x08A92D74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A92D74u) goto L_08A92D74;
    return;
L_08A92D74:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18468), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A92D94;
      }
      goto L_08A92D80;
    }
L_08A92D80:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18468)));
        goto L_08A92D98;
    }
    goto L_08A92D8C;
L_08A92D8C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18468), ctx.gpr[2]);
    goto L_08A92D94;
L_08A92D94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18468)));
    goto L_08A92D98;
L_08A92D98:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A92DD8;
    }
    goto L_08A92DA0;
L_08A92DA0:
    ctx.set_gpr(31, 0x08A92DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A92DA8u) goto L_08A92DA8;
    return;
L_08A92DA8:
    ctx.set_gpr(31, 0x08A92DB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08A92DB0u) goto L_08A92DB0;
    return;
L_08A92DB0:
    ctx.set_gpr(31, 0x08A92DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A92DB8u) goto L_08A92DB8;
    return;
L_08A92DB8:
    ctx.set_gpr(31, 0x08A92DC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A92DC0u) goto L_08A92DC0;
    return;
L_08A92DC0:
    ctx.set_gpr(31, 0x08A92DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A92DC8u) goto L_08A92DC8;
    return;
L_08A92DC8:
    ctx.set_gpr(31, 0x08A92DD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A92DD0u) goto L_08A92DD0;
    return;
L_08A92DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18464)));
      if (branch_taken) {
          goto L_08A92E9C;
      }
      goto L_08A92DD8;
    }
L_08A92DD8:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08A92E18;
    }
    goto L_08A92DE0;
L_08A92DE0:
    ctx.set_gpr(31, 0x08A92DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A92DE8u) goto L_08A92DE8;
    return;
L_08A92DE8:
    ctx.set_gpr(31, 0x08A92DF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08A92DF0u) goto L_08A92DF0;
    return;
L_08A92DF0:
    ctx.set_gpr(31, 0x08A92DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A92DF8u) goto L_08A92DF8;
    return;
L_08A92DF8:
    ctx.set_gpr(31, 0x08A92E00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A92E00u) goto L_08A92E00;
    return;
L_08A92E00:
    ctx.set_gpr(31, 0x08A92E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A92E08u) goto L_08A92E08;
    return;
L_08A92E08:
    ctx.set_gpr(31, 0x08A92E10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A92E10u) goto L_08A92E10;
    return;
L_08A92E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92E98;
      }
      goto L_08A92E18;
    }
L_08A92E18:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08A92E5C;
    }
    goto L_08A92E20;
L_08A92E20:
    ctx.set_gpr(31, 0x08A92E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92E28u) goto L_08A92E28;
    return;
L_08A92E28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92E34u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A92E34u) goto L_08A92E34;
    return;
L_08A92E34:
    ctx.set_gpr(31, 0x08A92E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92E3Cu) goto L_08A92E3C;
    return;
L_08A92E3C:
    ctx.set_gpr(31, 0x08A92E44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A92E44u) goto L_08A92E44;
    return;
L_08A92E44:
    ctx.set_gpr(31, 0x08A92E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A92E4Cu) goto L_08A92E4C;
    return;
L_08A92E4C:
    ctx.set_gpr(31, 0x08A92E54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A92E54u) goto L_08A92E54;
    return;
L_08A92E54:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18472), 0u);
      if (branch_taken) {
          goto L_08A92E98;
      }
      goto L_08A92E5C;
    }
L_08A92E5C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A92E98;
      }
      goto L_08A92E64;
    }
L_08A92E64:
    ctx.set_gpr(31, 0x08A92E6Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18472), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92E6Cu) goto L_08A92E6C;
    return;
L_08A92E6C:
    ctx.set_gpr(31, 0x08A92E74u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A92E74u) goto L_08A92E74;
    return;
L_08A92E74:
    ctx.set_gpr(31, 0x08A92E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A92E7Cu) goto L_08A92E7C;
    return;
L_08A92E7C:
    ctx.set_gpr(31, 0x08A92E84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A92E84u) goto L_08A92E84;
    return;
L_08A92E84:
    ctx.set_gpr(31, 0x08A92E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92E8Cu) goto L_08A92E8C;
    return;
L_08A92E8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92E98u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A92E98u) goto L_08A92E98;
    return;
L_08A92E98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18464)));
    goto L_08A92E9C;
L_08A92E9C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A92EA8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92EA8u) goto L_08A92EA8;
    return;
L_08A92EA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92EB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A92EB4u) goto L_08A92EB4;
    return;
L_08A92EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92EBC;
    }
L_08A92EBC:
    ctx.set_gpr(31, 0x08A92EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92EC4u) goto L_08A92EC4;
    return;
L_08A92EC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92ED4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92ED4u) goto L_08A92ED4;
    return;
L_08A92ED4:
    ctx.set_gpr(31, 0x08A92EDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A92EDCu) goto L_08A92EDC;
    return;
L_08A92EDC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92EE4;
    }
L_08A92EE4:
    ctx.set_gpr(31, 0x08A92EECu);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92EECu) goto L_08A92EEC;
    return;
L_08A92EEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92EFCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92EFCu) goto L_08A92EFC;
    return;
L_08A92EFC:
    ctx.set_gpr(31, 0x08A92F04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A92F04u) goto L_08A92F04;
    return;
L_08A92F04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92F28;
      }
      goto L_08A92F18;
    }
L_08A92F18:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92F28;
      }
      goto L_08A92F24;
    }
L_08A92F24:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08A92F28;
L_08A92F28:
    ctx.set_gpr(31, 0x08A92F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A92F30u) goto L_08A92F30;
    return;
L_08A92F30:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x08A92F48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A92F48u) goto L_08A92F48;
    return;
L_08A92F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92F50;
    }
L_08A92F50:
    ctx.set_gpr(31, 0x08A92F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92F58u) goto L_08A92F58;
    return;
L_08A92F58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92F64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A92F64u) goto L_08A92F64;
    return;
L_08A92F64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92F6C;
    }
L_08A92F6C:
    ctx.set_gpr(31, 0x08A92F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92F74u) goto L_08A92F74;
    return;
L_08A92F74:
    ctx.set_gpr(31, 0x08A92F7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A92F7Cu) goto L_08A92F7C;
    return;
L_08A92F7C:
    ctx.set_gpr(31, 0x08A92F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A92F84u) goto L_08A92F84;
    return;
L_08A92F84:
    ctx.set_gpr(31, 0x08A92F8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A92F8Cu) goto L_08A92F8C;
    return;
L_08A92F8C:
    ctx.set_gpr(31, 0x08A92F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92F94u) goto L_08A92F94;
    return;
L_08A92F94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A92FA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92FA4u) goto L_08A92FA4;
    return;
L_08A92FA4:
    ctx.set_gpr(31, 0x08A92FACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A92FACu) goto L_08A92FAC;
    return;
L_08A92FAC:
    ctx.set_gpr(31, 0x08A92FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A92FB4u) goto L_08A92FB4;
    return;
L_08A92FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A92FC0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92FC0u) goto L_08A92FC0;
    return;
L_08A92FC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18468)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), 0u);
        goto L_08A92FD8;
    }
    goto L_08A92FD0;
L_08A92FD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    goto L_08A92FD8;
L_08A92FD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18464)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92FE8;
    }
L_08A92FE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18468)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A92FF8;
    }
L_08A92FF8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26244));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93014:
    ctx.set_gpr(31, 0x08A9301Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9301Cu) goto L_08A9301C;
    return;
L_08A9301C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A93030u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93030u) goto L_08A93030;
    return;
L_08A93030:
    ctx.set_gpr(31, 0x08A93038u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15840));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 136u, 0x08AA876Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93038u) goto L_08A93038;
    return;
L_08A93038:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93040;
    }
L_08A93040:
    ctx.set_gpr(31, 0x08A93048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A93048u) goto L_08A93048;
    return;
L_08A93048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A9305Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9305Cu) goto L_08A9305C;
    return;
L_08A9305C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93064;
    }
L_08A93064:
    ctx.set_gpr(31, 0x08A9306Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9306Cu) goto L_08A9306C;
    return;
L_08A9306C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A93080u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93080u) goto L_08A93080;
    return;
L_08A93080:
    ctx.set_gpr(31, 0x08A93088u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15840));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 138u, 0x08AA877Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93088u) goto L_08A93088;
    return;
L_08A93088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93090;
    }
L_08A93090:
    ctx.set_gpr(31, 0x08A93098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A93098u) goto L_08A93098;
    return;
L_08A93098:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A930ACu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A930ACu) goto L_08A930AC;
    return;
L_08A930AC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A930B4;
    }
L_08A930B4:
    ctx.set_gpr(31, 0x08A930BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 536u, 0x08A89CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A930BCu) goto L_08A930BC;
    return;
L_08A930BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A930C4;
    }
L_08A930C4:
    ctx.set_gpr(31, 0x08A930CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A930CCu) goto L_08A930CC;
    return;
L_08A930CC:
    ctx.set_gpr(31, 0x08A930D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A930D4u) goto L_08A930D4;
    return;
L_08A930D4:
    ctx.set_gpr(31, 0x08A930DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A930DCu) goto L_08A930DC;
    return;
L_08A930DC:
    ctx.set_gpr(31, 0x08A930E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A930E4u) goto L_08A930E4;
    return;
L_08A930E4:
    ctx.set_gpr(31, 0x08A930ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A930ECu) goto L_08A930EC;
    return;
L_08A930EC:
    ctx.set_gpr(31, 0x08A930F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08A930F4u) goto L_08A930F4;
    return;
L_08A930F4:
    ctx.set_gpr(31, 0x08A930FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A930FCu) goto L_08A930FC;
    return;
L_08A930FC:
    ctx.set_gpr(31, 0x08A93104u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A93104u) goto L_08A93104;
    return;
L_08A93104:
    ctx.set_gpr(31, 0x08A9310Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A9310Cu) goto L_08A9310C;
    return;
L_08A9310C:
    ctx.set_gpr(31, 0x08A93114u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A93114u) goto L_08A93114;
    return;
L_08A93114:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18476), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A9312Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9312Cu) goto L_08A9312C;
    return;
L_08A9312C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93134;
    }
L_08A93134:
    ctx.set_gpr(31, 0x08A9313Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 536u, 0x08A89CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9313Cu) goto L_08A9313C;
    return;
L_08A9313C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93144;
    }
L_08A93144:
    ctx.set_gpr(31, 0x08A9314Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9314Cu) goto L_08A9314C;
    return;
L_08A9314C:
    ctx.set_gpr(31, 0x08A93154u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A93154u) goto L_08A93154;
    return;
L_08A93154:
    ctx.set_gpr(31, 0x08A9315Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A9315Cu) goto L_08A9315C;
    return;
L_08A9315C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A93174u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A93174u) goto L_08A93174;
    return;
L_08A93174:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x08A93180u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A93180u) goto L_08A93180;
    return;
L_08A93180:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9318Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A9318Cu) goto L_08A9318C;
    return;
L_08A9318C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93194;
    }
L_08A93194:
    ctx.set_gpr(31, 0x08A9319Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 165u, 0x08A80734u>(ctx, &aot_mem) && ctx.pc == 0x08A9319Cu) goto L_08A9319C;
    return;
L_08A9319C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931A4;
    }
L_08A931A4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931AC;
    }
L_08A931AC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18396));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A931C4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 763u, 0x08AE2988u>(ctx, &aot_mem) && ctx.pc == 0x08A931C4u) goto L_08A931C4;
    return;
L_08A931C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931CC;
    }
L_08A931CC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931D4;
    }
L_08A931D4:
    ctx.set_gpr(31, 0x08A931DCu);
    // nop
    goto L_08A91F48;
L_08A931DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931E4;
    }
L_08A931E4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931EC;
    }
L_08A931EC:
    ctx.set_gpr(31, 0x08A931F4u);
    // nop
    goto L_08A92278;
L_08A931F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A931FC;
    }
L_08A931FC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93204;
    }
L_08A93204:
    ctx.set_gpr(31, 0x08A9320Cu);
    // nop
    goto L_08A91490;
L_08A9320C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93274;
      }
      goto L_08A93214;
    }
L_08A93214:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
        goto L_08A93274;
    }
    goto L_08A9321C;
L_08A9321C:
    ctx.set_gpr(31, 0x08A93224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A93224u) goto L_08A93224;
    return;
L_08A93224:
    ctx.set_gpr(31, 0x08A9322Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A9322Cu) goto L_08A9322C;
    return;
L_08A9322C:
    ctx.set_gpr(31, 0x08A93234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A93234u) goto L_08A93234;
    return;
L_08A93234:
    ctx.set_gpr(31, 0x08A9323Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A9323Cu) goto L_08A9323C;
    return;
L_08A9323C:
    ctx.set_gpr(31, 0x08A93244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93244u) goto L_08A93244;
    return;
L_08A93244:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A93250u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A93250u) goto L_08A93250;
    return;
L_08A93250:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A93278;
      }
      goto L_08A93258;
    }
L_08A93258:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18464), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9326Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A9326Cu) goto L_08A9326C;
    return;
L_08A9326C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A93278;
      }
      goto L_08A93274;
    }
L_08A93274:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A93278;
L_08A93278:
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
L_08A93290:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A932BCu);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A932BCu) goto L_08A932BC;
    return;
L_08A932BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A932CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A932CCu) goto L_08A932CC;
    return;
L_08A932CC:
    ctx.set_gpr(31, 0x08A932D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A932D4u) goto L_08A932D4;
    return;
L_08A932D4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18736)));
        goto L_08A9334C;
    }
    goto L_08A932DC;
L_08A932DC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93318;
      }
      goto L_08A932E4;
    }
L_08A932E4:
    ctx.set_gpr(31, 0x08A932ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A932ECu) goto L_08A932EC;
    return;
L_08A932EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A932FCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A932FCu) goto L_08A932FC;
    return;
L_08A932FC:
    ctx.set_gpr(31, 0x08A93304u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A93304u) goto L_08A93304;
    return;
L_08A93304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A93310u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 515u, 0x08A8D800u>(ctx, &aot_mem) && ctx.pc == 0x08A93310u) goto L_08A93310;
    return;
L_08A93310:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A93348;
      }
      goto L_08A93318;
    }
L_08A93318:
    ctx.set_gpr(31, 0x08A93320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A93320u) goto L_08A93320;
    return;
L_08A93320:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93330u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93330u) goto L_08A93330;
    return;
L_08A93330:
    ctx.set_gpr(31, 0x08A93338u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A93338u) goto L_08A93338;
    return;
L_08A93338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A93344u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 884u, 0x08A8EAACu>(ctx, &aot_mem) && ctx.pc == 0x08A93344u) goto L_08A93344;
    return;
L_08A93344:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    goto L_08A93348;
L_08A93348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18736)));
    goto L_08A9334C;
L_08A9334C:
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08A933C0;
    }
    goto L_08A93358;
L_08A93358:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A93370u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A93370u) goto L_08A93370;
    return;
L_08A93370:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(391));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(236));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22868));
    ctx.set_gpr(31, 0x08A93388u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A93388u) goto L_08A93388;
    return;
L_08A93388:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A933A0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A933A0u) goto L_08A933A0;
    return;
L_08A933A0:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(390));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08A933B8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A933B8u) goto L_08A933B8;
    return;
L_08A933B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A93424;
      }
      goto L_08A933C0;
    }
L_08A933C0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A933D4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A933D4u) goto L_08A933D4;
    return;
L_08A933D4:
    ctx.set_gpr(16, 0u - ctx.gpr[16]);
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(391));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(236));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22852));
    ctx.set_gpr(31, 0x08A933F0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A933F0u) goto L_08A933F0;
    return;
L_08A933F0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A93408u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A93408u) goto L_08A93408;
    return;
L_08A93408:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(390));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(31, 0x08A93420u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22852));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A93420u) goto L_08A93420;
    return;
L_08A93420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A93424;
L_08A93424:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93438:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19224)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A93478u);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A93478u) goto L_08A93478;
    return;
L_08A93478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A93484u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93484u) goto L_08A93484;
    return;
L_08A93484:
    ctx.set_gpr(5, 16352u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A93498u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93498u) goto L_08A93498;
    return;
L_08A93498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A934A4u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08A934A4u) goto L_08A934A4;
    return;
L_08A934A4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08A934BCu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08A934BCu) goto L_08A934BC;
    return;
L_08A934BC:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A934D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22836));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08A934D0u) goto L_08A934D0;
    return;
L_08A934D0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19224)));
    ctx.set_gpr(3, 16672u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(19224), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08A934F8;
      }
      goto L_08A934F0;
    }
L_08A934F0:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(19224), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A934F8;
L_08A934F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9354C;
      }
      goto L_08A93544;
    }
L_08A93544:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9362C;
      }
      goto L_08A9354C;
    }
L_08A9354C:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08A93554;
L_08A93554:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A93564u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1241u, 0x08A8FCC4u>(ctx, &aot_mem) && ctx.pc == 0x08A93564u) goto L_08A93564;
    return;
L_08A93564:
    if (ctx.gpr[21] == ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A93574;
    }
    goto L_08A9356C;
L_08A9356C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9362C;
      }
      goto L_08A93574;
    }
L_08A93574:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A93554;
      }
      goto L_08A93580;
    }
L_08A93580:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08A93588;
L_08A93588:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A93598u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1231u, 0x08A8FC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93598u) goto L_08A93598;
    return;
L_08A93598:
    if (ctx.gpr[21] == ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A935A8;
    }
    goto L_08A935A0;
L_08A935A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9362C;
      }
      goto L_08A935A8;
    }
L_08A935A8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A93588;
      }
      goto L_08A935B4;
    }
L_08A935B4:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08A935BC;
L_08A935BC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A935CCu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1067u, 0x08A8F3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A935CCu) goto L_08A935CC;
    return;
L_08A935CC:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08A935DC;
    }
    goto L_08A935D4;
L_08A935D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9362C;
      }
      goto L_08A935DC;
    }
L_08A935DC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A935BC;
      }
      goto L_08A935E8;
    }
L_08A935E8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, 0x08A935F4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A935F4u) goto L_08A935F4;
    return;
L_08A935F4:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A93604;
    }
    goto L_08A935FC;
L_08A935FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9362C;
      }
      goto L_08A93604;
    }
L_08A93604:
    ctx.set_gpr(31, 0x08A9360Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A9360Cu) goto L_08A9360C;
    return;
L_08A9360C:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[3]);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A9362C;
L_08A9362C:
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
L_08A93650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08A93684;
L_08A93684:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A93690u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1241u, 0x08A8FCC4u>(ctx, &aot_mem) && ctx.pc == 0x08A93690u) goto L_08A93690;
    return;
L_08A93690:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A93684;
      }
      goto L_08A936A4;
    }
L_08A936A4:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    goto L_08A936AC;
L_08A936AC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A936B8u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1231u, 0x08A8FC28u>(ctx, &aot_mem) && ctx.pc == 0x08A936B8u) goto L_08A936B8;
    return;
L_08A936B8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A936AC;
      }
      goto L_08A936CC;
    }
L_08A936CC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    goto L_08A936D4;
L_08A936D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A936E0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1067u, 0x08A8F3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A936E0u) goto L_08A936E0;
    return;
L_08A936E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A936D4;
      }
      goto L_08A936F4;
    }
L_08A936F4:
    ctx.set_gpr(31, 0x08A936FCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A936FCu) goto L_08A936FC;
    return;
L_08A936FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A93708u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A93708u) goto L_08A93708;
    return;
L_08A93708:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
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
L_08A93740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x08A9377Cu);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9377Cu) goto L_08A9377C;
    return;
L_08A9377C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A93788u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A93788u) goto L_08A93788;
    return;
L_08A93788:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A93794u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 599u, 0x08A96E24u>(ctx, &aot_mem) && ctx.pc == 0x08A93794u) goto L_08A93794;
    return;
L_08A93794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A937ACu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 759u, 0x08A97B58u>(ctx, &aot_mem) && ctx.pc == 0x08A937ACu) goto L_08A937AC;
    return;
L_08A937AC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
        goto L_08A93804;
    }
    goto L_08A937BC;
L_08A937BC:
    ctx.set_gpr(31, 0x08A937C4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1241u, 0x08A8FCC4u>(ctx, &aot_mem) && ctx.pc == 0x08A937C4u) goto L_08A937C4;
    return;
L_08A937C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
        goto L_08A937E4;
    }
    goto L_08A937D4;
L_08A937D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
    ctx.set_gpr(31, 0x08A937E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 626u, 0x08A97070u>(ctx, &aot_mem) && ctx.pc == 0x08A937E0u) goto L_08A937E0;
    return;
L_08A937E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
    goto L_08A937E4;
L_08A937E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A93800;
      }
      goto L_08A937F0;
    }
L_08A937F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A93800;
      }
      goto L_08A937FC;
    }
L_08A937FC:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_08A93800;
L_08A93800:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 30 ? 1u : 0u);
    goto L_08A93804;
L_08A93804:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08A93854;
    }
    goto L_08A9380C;
L_08A9380C:
    ctx.set_gpr(31, 0x08A93814u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1231u, 0x08A8FC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93814u) goto L_08A93814;
    return;
L_08A93814:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_08A93834;
    }
    goto L_08A93824;
L_08A93824:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
    ctx.set_gpr(31, 0x08A93830u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 804u, 0x08A97F60u>(ctx, &aot_mem) && ctx.pc == 0x08A93830u) goto L_08A93830;
    return;
L_08A93830:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_08A93834;
L_08A93834:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A93850;
      }
      goto L_08A93840;
    }
L_08A93840:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A93850;
      }
      goto L_08A9384C;
    }
L_08A9384C:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08A93850;
L_08A93850:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08A93854;
L_08A93854:
    ctx.set_gpr(31, 0x08A9385Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9385Cu) goto L_08A9385C;
    return;
L_08A9385C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A93868u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A93868u) goto L_08A93868;
    return;
L_08A93868:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9387C;
      }
      goto L_08A93870;
    }
L_08A93870:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9387Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 557u, 0x08A96A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9387Cu) goto L_08A9387C;
    return;
L_08A9387C:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
        goto L_08A938BC;
    }
    goto L_08A93884;
L_08A93884:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A93890u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A93890u) goto L_08A93890;
    return;
L_08A93890:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A938A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A938A0u) goto L_08A938A0;
    return;
L_08A938A0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A938B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 717u, 0x08A9771Cu>(ctx, &aot_mem) && ctx.pc == 0x08A938B8u) goto L_08A938B8;
    return;
L_08A938B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19228)));
    goto L_08A938BC;
L_08A938BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(19228), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A938D4;
      }
      goto L_08A938CC;
    }
L_08A938CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A938D8;
      }
      goto L_08A938D4;
    }
L_08A938D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A938D8;
L_08A938D8:
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
L_08A938F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A93914u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08A93740;
L_08A93914:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A93928u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(204));
    goto L_08A93438;
L_08A93928:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A93A4C;
      }
      goto L_08A93960;
    }
L_08A93960:
    ctx.set_gpr(31, 0x08A93968u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(18142));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A93968u) goto L_08A93968;
    return;
L_08A93968:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(51));
      if (branch_taken) {
          goto L_08A93984;
      }
      goto L_08A93974;
    }
L_08A93974:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A93974;
      }
      goto L_08A93984;
    }
L_08A93984:
    ctx.set_gpr(3, 2230u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-22824)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 38 ? 1u : 0u);
    ctx.set_gpr(3, 2230u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-22823)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2230u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-22822)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[1] != 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08A93A4C;
      }
      goto L_08A939B0;
    }
L_08A939B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18142));
    ctx.set_gpr(31, 0x08A939C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A939C0u) goto L_08A939C0;
    return;
L_08A939C0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(18142));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A939D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(51));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A939D0u) goto L_08A939D0;
    return;
L_08A939D0:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    goto L_08A939D8;
L_08A939D8:
    ctx.set_gpr(31, 0x08A939E0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 360u, 0x0883DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A939E0u) goto L_08A939E0;
    return;
L_08A939E0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
        goto L_08A93A0C;
    }
    goto L_08A939E8;
L_08A939E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(34));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08A93A2C;
    }
    goto L_08A939F4;
L_08A939F4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(35));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A93A3C;
      }
      goto L_08A93A0C;
    }
L_08A93A0C:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08A93A30;
    }
    goto L_08A93A14;
L_08A93A14:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(35));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A93A3C;
      }
      goto L_08A93A2C;
    }
L_08A93A2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A93A30;
L_08A93A30:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
        goto L_08A939D8;
    }
    goto L_08A93A3C;
L_08A93A3C:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A93A4Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 395u, 0x08A811FCu>(ctx, &aot_mem) && ctx.pc == 0x08A93A4Cu) goto L_08A93A4C;
    return;
L_08A93A4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A93A7Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A93A7Cu) goto L_08A93A7C;
    return;
L_08A93A7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93A90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93A90u) goto L_08A93A90;
    return;
L_08A93A90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A93AA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A93AA0u) goto L_08A93AA0;
    return;
L_08A93AA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93AB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93AB0u) goto L_08A93AB0;
    return;
L_08A93AB0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A93AF0;
    }
    goto L_08A93ABC;
L_08A93ABC:
    ctx.set_gpr(31, 0x08A93AC4u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(58)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 360u, 0x0883DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A93AC4u) goto L_08A93AC4;
    return;
L_08A93AC4:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
        goto L_08A93AEC;
    }
    goto L_08A93ACC;
L_08A93ACC:
    ctx.set_gpr(31, 0x08A93AD4u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(59)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 360u, 0x0883DB70u>(ctx, &aot_mem) && ctx.pc == 0x08A93AD4u) goto L_08A93AD4;
    return;
L_08A93AD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93AE8;
      }
      goto L_08A93ADC;
    }
L_08A93ADC:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A93AEC;
      }
      goto L_08A93AE8;
    }
L_08A93AE8:
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_08A93AEC;
L_08A93AEC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A93AF0;
L_08A93AF0:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A93AFCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A93AFCu) goto L_08A93AFC;
    return;
L_08A93AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93B10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A93B28u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1556));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A93B28u) goto L_08A93B28;
    return;
L_08A93B28:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11528u);
    ctx.set_gpr(31, 0x08A93B38u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 5u, 0x08A9407Cu>(ctx, &aot_mem) && ctx.pc == 0x08A93B38u) goto L_08A93B38;
    return;
L_08A93B38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11516), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11520), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11524), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(11525), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93B90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1524));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93B90u) goto L_08A93B90;
    return;
L_08A93B90:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1592), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1612));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    ctx.set_gpr(31, 0x08A93BACu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93BACu) goto L_08A93BAC;
    return;
L_08A93BAC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(31, 0x08A93BB8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    goto L_08A93DB8;
L_08A93BB8:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A93BC4;
L_08A93BC4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[7]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3904), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[1]);
    goto L_08A93BE4;
L_08A93BE4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 84 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A93BE4;
      }
      goto L_08A93C14;
    }
L_08A93C14:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08A93BC4;
      }
      goto L_08A93C48;
    }
L_08A93C48:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A93C50;
L_08A93C50:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] | 11284u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A93C50;
    }
    goto L_08A93C84;
L_08A93C84:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08A93C9Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08A93DA8;
L_08A93C9C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93CACu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CACu) goto L_08A93CAC;
    return;
L_08A93CAC:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[1] | 11528u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1552), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A93CC4u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[1]);
    goto L_08A93CEC;
L_08A93CC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1604), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1600), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1608), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93CEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08A93D20;
L_08A93D20:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A93D34u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D34u) goto L_08A93D34;
    return;
L_08A93D34:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A93D20;
      }
      goto L_08A93D4C;
    }
L_08A93D4C:
    ctx.set_gpr(31, 0x08A93D54u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A93D54u) goto L_08A93D54;
    return;
L_08A93D54:
    ctx.set_gpr(31, 0x08A93D5Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A93D5Cu) goto L_08A93D5C;
    return;
L_08A93D5C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x08A93D74u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D74u) goto L_08A93D74;
    return;
L_08A93D74:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(184));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A93D8Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D8Cu) goto L_08A93D8C;
    return;
L_08A93D8C:
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
L_08A93DA8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    (void)rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 457u, 0x08A898F4u>(ctx, &aot_mem); return;
L_08A93DB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93DD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93DD4u) goto L_08A93DD4;
    return;
L_08A93DD4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32048), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32000), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32024), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32052), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32004), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32028), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32056), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32008), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32032), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32060), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32012), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32036), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32064), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32016), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32040), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32068), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32020), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(31, 0x08A93E30u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32044), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 397u, 0x08A81214u>(ctx, &aot_mem) && ctx.pc == 0x08A93E30u) goto L_08A93E30;
    return;
L_08A93E30:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(912));
    ctx.set_gpr(31, 0x08A93E3Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 397u, 0x08A81214u>(ctx, &aot_mem) && ctx.pc == 0x08A93E3Cu) goto L_08A93E3C;
    return;
L_08A93E3C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A93E48;
L_08A93E48:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30256), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30252), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30248), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30244), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30240), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08A93E48;
      }
      goto L_08A93E94;
    }
L_08A93E94:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30176), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A93EAC;
L_08A93EAC:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30176), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30172), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30168), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30164), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30160), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30156), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30152), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A93EAC;
      }
      goto L_08A93F10;
    }
L_08A93F10:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30176), ctx.gpr[4]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30264), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30260), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30056), 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30052), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2728));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93F70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93F70u) goto L_08A93F70;
    return;
L_08A93F70:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(2772));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A93F84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A93F84u) goto L_08A93F84;
    return;
L_08A93F84:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30008), 0u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29964), 0u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(6, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29960), 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18560));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08A93FB8;
L_08A93FB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29956), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29952), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29948), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29944), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.pc = 0x08A94000u; return;
}

void recomp_unit_0163(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0163_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_163(Runtime &runtime) {
    runtime.register_generated_unit(163u, 0x08A90000u, 16384u, &recomp_unit_0163, &recomp_unit_0163_entry);
    runtime.register_function(0x08A90004u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90014u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9001Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90024u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90030u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90040u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9004Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9005Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90068u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90070u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90074u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90084u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9018Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90194u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9020Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9022Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90234u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90274u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9027Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90304u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9030Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90354u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9035Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90400u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90408u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9044Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90454u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90460u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90468u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90470u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9047Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90484u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90490u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90504u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9050Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90518u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9051Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90524u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9052Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90538u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90540u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90550u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90554u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9055Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90564u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90570u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90578u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90588u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90608u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9061Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90624u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90634u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90650u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90674u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90684u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90694u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90718u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90724u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90730u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90740u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9074Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9076Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90780u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9078Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90798u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90800u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9080Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90818u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90840u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9084Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90858u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90864u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90884u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9089Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9090Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90918u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90938u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90944u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90964u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90978u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90984u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90990u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9099Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90ED8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90EF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91004u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91010u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91018u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91020u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91028u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91030u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91040u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91048u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9105Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91064u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91070u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91078u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91080u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91088u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91090u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9109Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91104u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9110Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9111Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91124u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9112Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91134u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91138u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9115Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9116Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9117Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91208u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91210u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91228u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91230u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91238u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91250u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91254u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91268u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91290u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91334u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9133Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91348u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91354u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91360u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91368u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91378u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91384u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91400u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9140Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91418u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91420u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91428u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91434u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9143Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91448u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91450u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9145Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91464u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91490u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91504u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91514u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9151Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91524u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9152Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91534u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9153Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9156Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91574u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91584u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91590u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91598u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91600u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91608u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91618u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91638u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91640u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91650u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91670u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91678u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91688u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91690u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9169Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91710u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91718u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91724u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91730u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91738u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91744u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9174Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91754u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91760u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9176Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91778u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91780u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91788u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91798u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91804u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9180Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91818u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91820u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91828u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91830u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91838u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91840u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91848u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91858u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91860u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91868u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91874u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91888u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91894u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91898u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91900u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91908u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91914u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9191Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91948u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91950u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91958u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91980u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91988u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91ED0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92010u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92018u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9202Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92034u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92044u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9204Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9205Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9206Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92070u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92078u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92088u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92098u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9210Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92114u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9211Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92128u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92134u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9213Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92144u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9214Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9215Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92164u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92170u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92178u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92184u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92190u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92198u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92208u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92214u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92220u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92228u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92230u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92234u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9224Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92254u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92278u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9230Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92314u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9231Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92324u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9232Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92334u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9233Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92350u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92358u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9236Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92374u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92388u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92390u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92404u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9240Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92418u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92420u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92428u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92448u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92464u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9246Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92474u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92484u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92518u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9251Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92528u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92530u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9253Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92548u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92560u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92568u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92574u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9257Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9258Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92594u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92608u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92614u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92620u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92628u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92638u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92648u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92650u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9266Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92678u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92680u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9268Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92694u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9269Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92710u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92718u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92724u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9272Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92734u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92744u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9274Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9275Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92764u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92770u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92778u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92780u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9278Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92794u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9279Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9280Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92814u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92824u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9282Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92834u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92848u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92854u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9285Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9286Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92874u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92884u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9288Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9289Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92900u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92908u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9291Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92920u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92930u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9293Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92944u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9294Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9295Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92964u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9296Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92978u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92980u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92988u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92990u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92998u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92ED4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93014u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9301Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93030u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93038u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93040u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93048u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9305Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93064u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9306Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93080u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93088u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93090u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93098u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93104u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9310Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93114u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9312Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93134u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9313Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93144u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9314Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93154u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9315Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93174u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9318Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93194u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9319Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93204u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9320Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93214u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9321Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93224u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9322Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93234u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9323Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93244u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93250u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93258u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9326Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93274u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93278u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93290u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93298u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93304u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93310u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93318u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93320u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93338u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93344u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93348u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9334Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93358u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93370u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93388u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93408u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93420u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93424u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93478u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93484u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93498u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93510u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93544u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9354Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93554u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93564u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9356Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93574u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93580u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93588u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93598u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93604u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9360Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9362Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93650u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93684u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93690u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93740u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9377Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93788u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93794u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93800u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93804u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9380Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93814u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93824u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93830u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93834u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93840u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9384Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93850u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93854u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9385Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93868u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93870u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9387Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93884u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93914u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93944u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93960u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93968u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93974u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93984u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ABCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ACCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ADCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FB8u, &recomp_unit_0163, "recomp_unit_0163");
}
} // namespace psprecomp
