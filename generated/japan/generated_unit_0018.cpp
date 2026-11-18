#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0018[4095] = {
    1, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0,
    0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 40,
    0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 50, 0, 51, 0, 0, 0, 52, 0, 53,
    0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0,
    0, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 67, 68, 0, 69,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 0, 0, 0, 84,
    0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 89, 0, 90, 91, 0,
    0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106,
    0, 107, 0, 0, 108, 0, 109, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 122, 123, 0, 0, 0, 0, 124, 0, 125, 0,
    126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132,
    0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145,
    0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0,
    0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0,
    169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0,
    0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192,
    193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0,
    0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 214, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221,
    0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 232, 0, 233, 0, 0, 234, 0, 0,
    235, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0,
    0, 248, 0, 249, 0, 0, 250, 251, 0, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 258,
    0, 0, 259, 0, 0, 260, 0, 261, 262, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 276, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 281, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 293, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 295, 0, 296, 0, 0, 297, 0, 298, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 305, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 310, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0,
    314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 321,
    0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330,
    0, 331, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 334, 0, 335, 0, 336, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0,
    342, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 0,
    0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0,
    363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0,
    372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 383,
    0, 0, 384, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 390, 0, 391, 0, 392, 393, 0, 0, 0,
    394, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402,
    0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 426, 427, 0, 428, 0,
    0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0,
    439, 0, 440, 0, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0,
    452, 0, 453, 0, 0, 454, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 461,
    0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 464, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 468, 469, 0,
    0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476,
    0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 483, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489,
    0, 490, 0, 0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 0, 500,
    0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 510,
    0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 515, 516, 0, 0, 517, 0, 518, 0, 0,
    519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0, 0, 526, 0, 527, 528, 0, 529, 530, 0, 0, 0,
    0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 539,
    0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0,
    547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 0, 554, 0, 0, 555, 556, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0,
    564, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    570, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573, 574, 575, 576, 0, 577, 0, 0, 578, 0, 0, 579, 580, 581, 582, 0, 583, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 0, 587, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0,
    0, 0, 0, 611, 0, 612, 0, 613, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0,
    618, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 625, 626, 0, 0, 0, 0, 0, 627, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 632, 0, 633, 0, 0, 634, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643, 644, 0,
    0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 651, 0, 652, 0, 653, 0, 0, 654,
    0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665,
    0, 0, 666, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 671, 0, 672, 673, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0,
    676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685,
    0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0,
    693, 0, 694, 695, 0, 0, 696, 0, 697, 0, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 701, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0,
    0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 713, 0, 0, 714, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0,
    0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 724,
    0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 727, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0,
    731, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 742, 0,
    0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0,
    0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 754, 0, 755, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758,
    0, 759, 0, 0, 760, 0, 761, 762, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 767, 768, 0, 0, 0, 0,
    769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0,
    0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 784, 0, 0,
    785, 0, 0, 786, 0, 787, 788, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794,
    0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 803, 0, 804, 0, 0, 0, 805, 0, 806, 807,
    0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 810, 0, 811, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 818, 0, 819, 0, 0, 820, 0, 821, 0, 0, 0,
    822, 0, 0, 0, 823, 0, 824, 0, 825, 0, 0, 0, 826, 0, 0, 0, 827, 0, 828, 0, 829, 0, 830, 0, 0, 0, 0, 0, 831, 0, 832, 0,
    0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 837, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 840, 0, 841,
    0, 842, 0, 843, 0, 844, 0, 845, 0, 0, 846, 847, 0, 848, 0, 0, 849, 0, 0, 850, 0, 851, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0,
    855, 0, 856, 0, 0, 857, 0, 858, 0, 0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 863, 0, 864, 0, 0, 865, 0, 866, 0, 0, 867, 0,
    0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 872, 0, 0, 873, 0, 0, 874, 0, 875, 0, 0, 0, 876, 0, 877, 0, 0, 0, 878, 0, 879, 0,
    0, 880, 0, 881, 0, 0, 882, 0, 0, 883, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0, 0, 888, 0, 0, 889, 0, 890, 0, 891, 0, 892, 0,
    0, 893, 0, 894, 0, 0, 895, 0, 896, 0, 0, 897, 0, 898, 0, 0, 0, 899, 0, 900, 0, 0, 0, 901, 0, 902, 0, 0, 903, 0, 904, 0,
    0, 905, 0, 0, 906, 0, 907, 0, 908, 0, 0, 909, 0, 910, 0, 0, 911, 0, 912, 0, 0, 913, 914, 0, 915, 0, 916, 0, 0, 0, 0, 0,
    0, 0, 0, 917, 0, 918, 0, 919, 0, 0, 0, 920, 0, 0, 921, 0, 922, 923, 0, 924, 0, 0, 925, 926, 0, 0, 0, 0, 0, 0, 0, 0,
    927, 0, 0, 0, 0, 0, 0, 928, 0, 929, 0, 0, 930, 0, 931, 932, 0, 0, 0, 0, 933, 0, 934, 0, 0, 0, 935, 0, 0, 0, 936, 0,
    937, 0, 938, 0, 0, 0, 0, 939, 0, 0, 940, 0, 0, 0, 0, 941, 0, 942, 0, 0, 943, 0, 944, 0, 945, 0, 0, 0, 0, 946, 0, 0,
    947, 0, 0, 0, 0, 948, 0, 949, 0, 0, 950, 0, 0, 0, 0, 951, 0, 0, 952, 0, 0, 0, 0, 953, 0, 954, 0, 955, 0, 0, 0, 0,
    956, 0, 0, 957, 0, 0, 0, 0, 958, 0, 959, 0, 0, 960, 0, 961, 0, 962, 0, 0, 0, 0, 963, 0, 0, 0, 0, 964, 0, 0, 0, 0,
    0, 965, 0, 966, 0, 0, 967, 0, 968, 0, 969, 970, 0, 0, 0, 971, 0, 0, 972, 0, 0, 973, 0, 0, 0, 0, 0, 0, 974, 0, 0, 0,
    0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 977, 0, 978, 0, 979, 0, 980, 0, 981,
    0, 0, 0, 0, 0, 982, 0, 983, 0, 0, 984, 0, 985, 0, 986, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 987, 0, 988, 0, 0, 0, 0,
    0, 989, 0, 990, 0, 0, 991, 0, 992, 0, 993, 0, 994, 0, 995, 0, 996, 0, 0, 997, 998, 0, 999, 0, 0, 1000, 0, 0, 1001, 0, 1002, 0,
    1003, 0, 0, 1004, 0, 1005, 0, 1006, 0, 0, 1007, 0, 1008, 0, 0, 1009, 0, 1010, 0, 0, 1011, 0, 1012, 0, 0, 1013, 0, 1014, 0, 0, 1015, 0,
    1016, 0, 0, 1017, 0, 0, 1018, 0, 1019, 0, 1020, 0, 0, 1021, 0, 1022, 0, 0, 1023, 0, 0, 1024, 0, 1025, 0, 0, 0, 1026, 0, 1027, 0, 0,
    0, 1028, 0, 1029, 0, 0, 1030, 0, 1031, 0, 0, 1032, 0, 0, 1033, 0, 1034, 0, 1035, 0, 0, 1036, 0, 1037, 0, 0, 1038, 0, 0, 1039, 0, 1040,
    0, 1041, 0, 1042, 0, 0, 1043, 0, 1044, 0, 0, 1045, 0, 1046, 0, 0, 1047, 0, 1048, 0, 0, 0, 1049, 0, 1050, 0, 0, 0, 1051, 0, 1052, 0,
    0, 1053, 0, 1054, 0, 0, 1055, 0, 0, 1056, 0, 1057, 0, 1058, 0, 0, 1059, 0, 1060, 0, 0, 1061, 0, 1062, 0, 0, 1063, 1064, 0, 1065, 0, 1066,
    0, 0, 0, 0, 0, 0, 0, 1067, 0, 0, 1068, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1070, 0, 1071, 0, 1072, 0, 1073, 0, 0, 0, 0, 0, 1074, 0, 1075, 0, 1076, 0, 0, 1077,
    0, 0, 1078, 0, 1079, 0, 0, 0, 1080, 0, 0, 1081, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1082, 0, 0, 1083, 0, 1084, 0, 0,
    0, 0, 0, 1085, 0, 1086, 0, 0, 1087, 0, 1088, 0, 1089, 0, 1090, 0, 1091, 0, 1092, 0, 0, 1093, 1094, 0, 1095, 0, 0, 1096, 0, 0, 1097, 1098,
    0, 0, 1099, 1100, 0, 1101, 0, 1102, 0, 0, 1103, 0, 1104, 0, 0, 1105, 0, 1106, 0, 0, 1107, 0, 1108, 0, 0, 1109, 0, 1110, 0, 0, 1111, 0,
    1112, 0, 0, 1113, 0, 0, 1114, 0, 1115, 0, 1116, 0, 0, 1117, 0, 1118, 0, 0, 1119, 0, 0, 1120, 0, 1121, 0, 0, 0, 1122, 0, 1123, 0, 0,
    0, 1124, 0, 1125, 0, 0, 1126, 0, 1127, 0, 0, 1128, 0, 0, 1129, 0, 1130, 0, 1131, 0, 0, 1132, 0, 1133, 0, 0, 1134, 0, 0, 1135, 0, 1136,
    0, 1137, 0, 1138, 0, 0, 1139, 0, 1140, 0, 0, 1141, 0, 1142, 0, 0, 1143, 0, 1144, 0, 0, 0, 1145, 0, 1146, 0, 0, 0, 1147, 0, 1148, 0,
    0, 1149, 0, 1150, 0, 0, 1151, 0, 0, 1152, 0, 1153, 0, 1154, 0, 0, 1155, 0, 1156, 0, 0, 1157, 0, 1158, 0, 0, 1159, 1160, 0, 1161, 0, 1162,
    0, 0, 0, 0, 0, 0, 0, 1163, 0, 0, 1164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1165, 0, 0, 0, 0, 0, 1166, 0, 0,
    1167, 0, 0, 0, 1168, 0, 0, 0, 0, 1169, 0, 0, 1170, 0, 0, 0, 0, 1171, 0, 1172, 0, 0, 1173, 0, 1174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1175, 0, 1176, 0, 0, 0, 1177, 0, 0, 1178, 0, 0, 1179, 0, 1180, 0, 0, 0, 0, 0, 0, 1181, 0, 0, 1182,
    0, 0, 1183, 0, 1184, 0, 1185, 0, 0, 1186, 1187, 0, 1188, 0, 1189, 0, 1190, 0, 0, 1191, 0, 1192, 0, 0, 1193, 0, 1194, 0, 0, 1195, 0, 1196,
    0, 0, 1197, 0, 1198, 0, 0, 1199, 0, 1200, 0, 0, 1201, 0, 0, 1202, 0, 0, 1203, 0, 0, 1204, 0, 0, 1205, 1206, 0, 1207, 0, 0, 1208, 0,
    1209, 0, 0, 1210, 0, 0, 1211, 0, 1212, 0, 0, 0, 1213, 0, 1214, 0, 0, 0, 0, 0, 1215, 0, 1216, 0, 0, 1217, 0, 1218, 0, 0, 1219, 0,
    0, 1220, 0, 1221, 1222, 0, 1223, 0, 0, 1224, 0, 1225, 0, 0, 1226, 0, 0, 1227, 0, 1228, 0, 1229, 0, 0, 1230, 0, 0, 1231, 1232, 0, 1233,
};
void recomp_unit_0018_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0884C000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0018[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0884C000;
    case 2u: goto L_0884C010;
    case 3u: goto L_0884C018;
    case 4u: goto L_0884C040;
    case 5u: goto L_0884C050;
    case 6u: goto L_0884C058;
    case 7u: goto L_0884C064;
    case 8u: goto L_0884C06C;
    case 9u: goto L_0884C074;
    case 10u: goto L_0884C088;
    case 11u: goto L_0884C098;
    case 12u: goto L_0884C0A0;
    case 13u: goto L_0884C0B0;
    case 14u: goto L_0884C0BC;
    case 15u: goto L_0884C0CC;
    case 16u: goto L_0884C0D4;
    case 17u: goto L_0884C0F4;
    case 18u: goto L_0884C0FC;
    case 19u: goto L_0884C124;
    case 20u: goto L_0884C12C;
    case 21u: goto L_0884C140;
    case 22u: goto L_0884C150;
    case 23u: goto L_0884C158;
    case 24u: goto L_0884C168;
    case 25u: goto L_0884C174;
    case 26u: goto L_0884C190;
    case 27u: goto L_0884C1B8;
    case 28u: goto L_0884C1C0;
    case 29u: goto L_0884C1E0;
    case 30u: goto L_0884C1E8;
    case 31u: goto L_0884C210;
    case 32u: goto L_0884C220;
    case 33u: goto L_0884C228;
    case 34u: goto L_0884C234;
    case 35u: goto L_0884C23C;
    case 36u: goto L_0884C244;
    case 37u: goto L_0884C258;
    case 38u: goto L_0884C264;
    case 39u: goto L_0884C26C;
    case 40u: goto L_0884C27C;
    case 41u: goto L_0884C288;
    case 42u: goto L_0884C294;
    case 43u: goto L_0884C29C;
    case 44u: goto L_0884C2A4;
    case 45u: goto L_0884C2A8;
    case 46u: goto L_0884C2B0;
    case 47u: goto L_0884C2C0;
    case 48u: goto L_0884C2C8;
    case 49u: goto L_0884C2D8;
    case 50u: goto L_0884C2DC;
    case 51u: goto L_0884C2E4;
    case 52u: goto L_0884C2F4;
    case 53u: goto L_0884C2FC;
    case 54u: goto L_0884C30C;
    case 55u: goto L_0884C31C;
    case 56u: goto L_0884C324;
    case 57u: goto L_0884C33C;
    case 58u: goto L_0884C344;
    case 59u: goto L_0884C364;
    case 60u: goto L_0884C378;
    case 61u: goto L_0884C394;
    case 62u: goto L_0884C398;
    case 63u: goto L_0884C3AC;
    case 64u: goto L_0884C3DC;
    case 65u: goto L_0884C41C;
    case 66u: goto L_0884C45C;
    case 67u: goto L_0884C470;
    case 68u: goto L_0884C474;
    case 69u: goto L_0884C47C;
    case 70u: goto L_0884C4BC;
    case 71u: goto L_0884C4C4;
    case 72u: goto L_0884C4C8;
    case 73u: goto L_0884C4D0;
    case 74u: goto L_0884C4FC;
    case 75u: goto L_0884C504;
    case 76u: goto L_0884C50C;
    case 77u: goto L_0884C52C;
    case 78u: goto L_0884C534;
    case 79u: goto L_0884C540;
    case 80u: goto L_0884C54C;
    case 81u: goto L_0884C558;
    case 82u: goto L_0884C564;
    case 83u: goto L_0884C56C;
    case 84u: goto L_0884C57C;
    case 85u: goto L_0884C58C;
    case 86u: goto L_0884C5BC;
    case 87u: goto L_0884C5D8;
    case 88u: goto L_0884C5E0;
    case 89u: goto L_0884C5EC;
    case 90u: goto L_0884C5F4;
    case 91u: goto L_0884C5F8;
    case 92u: goto L_0884C60C;
    case 93u: goto L_0884C628;
    case 94u: goto L_0884C630;
    case 95u: goto L_0884C63C;
    case 96u: goto L_0884C644;
    case 97u: goto L_0884C648;
    case 98u: goto L_0884C65C;
    case 99u: goto L_0884C670;
    case 100u: goto L_0884C684;
    case 101u: goto L_0884C698;
    case 102u: goto L_0884C6AC;
    case 103u: goto L_0884C6C0;
    case 104u: goto L_0884C6D4;
    case 105u: goto L_0884C6E0;
    case 106u: goto L_0884C6FC;
    case 107u: goto L_0884C704;
    case 108u: goto L_0884C710;
    case 109u: goto L_0884C718;
    case 110u: goto L_0884C71C;
    case 111u: goto L_0884C730;
    case 112u: goto L_0884C73C;
    case 113u: goto L_0884C748;
    case 114u: goto L_0884C754;
    case 115u: goto L_0884C770;
    case 116u: goto L_0884C788;
    case 117u: goto L_0884C7A0;
    case 118u: goto L_0884C7AC;
    case 119u: goto L_0884C7B8;
    case 120u: goto L_0884C7C4;
    case 121u: goto L_0884C7D0;
    case 122u: goto L_0884C7D8;
    case 123u: goto L_0884C7DC;
    case 124u: goto L_0884C7F0;
    case 125u: goto L_0884C7F8;
    case 126u: goto L_0884C800;
    case 127u: goto L_0884C814;
    case 128u: goto L_0884C820;
    case 129u: goto L_0884C830;
    case 130u: goto L_0884C86C;
    case 131u: goto L_0884C874;
    case 132u: goto L_0884C87C;
    case 133u: goto L_0884C884;
    case 134u: goto L_0884C894;
    case 135u: goto L_0884C8A0;
    case 136u: goto L_0884C8AC;
    case 137u: goto L_0884C8B8;
    case 138u: goto L_0884C8C0;
    case 139u: goto L_0884C8C8;
    case 140u: goto L_0884C8D0;
    case 141u: goto L_0884C8D8;
    case 142u: goto L_0884C8E0;
    case 143u: goto L_0884C8EC;
    case 144u: goto L_0884C8F4;
    case 145u: goto L_0884C8FC;
    case 146u: goto L_0884C904;
    case 147u: goto L_0884C914;
    case 148u: goto L_0884C924;
    case 149u: goto L_0884C92C;
    case 150u: goto L_0884C934;
    case 151u: goto L_0884C944;
    case 152u: goto L_0884C94C;
    case 153u: goto L_0884C954;
    case 154u: goto L_0884C960;
    case 155u: goto L_0884C968;
    case 156u: goto L_0884C970;
    case 157u: goto L_0884C978;
    case 158u: goto L_0884C990;
    case 159u: goto L_0884C998;
    case 160u: goto L_0884C9A4;
    case 161u: goto L_0884C9AC;
    case 162u: goto L_0884C9B8;
    case 163u: goto L_0884C9C0;
    case 164u: goto L_0884C9CC;
    case 165u: goto L_0884C9D4;
    case 166u: goto L_0884C9E0;
    case 167u: goto L_0884C9EC;
    case 168u: goto L_0884C9F4;
    case 169u: goto L_0884CA00;
    case 170u: goto L_0884CA0C;
    case 171u: goto L_0884CA14;
    case 172u: goto L_0884CA20;
    case 173u: goto L_0884CA28;
    case 174u: goto L_0884CA30;
    case 175u: goto L_0884CA38;
    case 176u: goto L_0884CA48;
    case 177u: goto L_0884CA58;
    case 178u: goto L_0884CA60;
    case 179u: goto L_0884CA68;
    case 180u: goto L_0884CA70;
    case 181u: goto L_0884CA88;
    case 182u: goto L_0884CA90;
    case 183u: goto L_0884CA9C;
    case 184u: goto L_0884CAA8;
    case 185u: goto L_0884CAB0;
    case 186u: goto L_0884CABC;
    case 187u: goto L_0884CACC;
    case 188u: goto L_0884CAD8;
    case 189u: goto L_0884CAE0;
    case 190u: goto L_0884CAEC;
    case 191u: goto L_0884CAF4;
    case 192u: goto L_0884CAFC;
    case 193u: goto L_0884CB00;
    case 194u: goto L_0884CB0C;
    case 195u: goto L_0884CB14;
    case 196u: goto L_0884CB1C;
    case 197u: goto L_0884CB2C;
    case 198u: goto L_0884CB34;
    case 199u: goto L_0884CB3C;
    case 200u: goto L_0884CB44;
    case 201u: goto L_0884CB5C;
    case 202u: goto L_0884CB64;
    case 203u: goto L_0884CB70;
    case 204u: goto L_0884CB78;
    case 205u: goto L_0884CB84;
    case 206u: goto L_0884CB94;
    case 207u: goto L_0884CBA4;
    case 208u: goto L_0884CBB0;
    case 209u: goto L_0884CBB8;
    case 210u: goto L_0884CBD0;
    case 211u: goto L_0884CBD8;
    case 212u: goto L_0884CBE4;
    case 213u: goto L_0884CBF0;
    case 214u: goto L_0884CBF8;
    case 215u: goto L_0884CC04;
    case 216u: goto L_0884CC10;
    case 217u: goto L_0884CC24;
    case 218u: goto L_0884CC30;
    case 219u: goto L_0884CC3C;
    case 220u: goto L_0884CC74;
    case 221u: goto L_0884CC7C;
    case 222u: goto L_0884CC84;
    case 223u: goto L_0884CC90;
    case 224u: goto L_0884CC98;
    case 225u: goto L_0884CCA4;
    case 226u: goto L_0884CCAC;
    case 227u: goto L_0884CCB4;
    case 228u: goto L_0884CCBC;
    case 229u: goto L_0884CCC8;
    case 230u: goto L_0884CCD0;
    case 231u: goto L_0884CCDC;
    case 232u: goto L_0884CCE0;
    case 233u: goto L_0884CCE8;
    case 234u: goto L_0884CCF4;
    case 235u: goto L_0884CD00;
    case 236u: goto L_0884CD08;
    case 237u: goto L_0884CD14;
    case 238u: goto L_0884CD24;
    case 239u: goto L_0884CD2C;
    case 240u: goto L_0884CD38;
    case 241u: goto L_0884CD40;
    case 242u: goto L_0884CD48;
    case 243u: goto L_0884CD50;
    case 244u: goto L_0884CD5C;
    case 245u: goto L_0884CD68;
    case 246u: goto L_0884CD70;
    case 247u: goto L_0884CD78;
    case 248u: goto L_0884CD84;
    case 249u: goto L_0884CD8C;
    case 250u: goto L_0884CD98;
    case 251u: goto L_0884CD9C;
    case 252u: goto L_0884CDA4;
    case 253u: goto L_0884CDAC;
    case 254u: goto L_0884CDCC;
    case 255u: goto L_0884CDD4;
    case 256u: goto L_0884CDE4;
    case 257u: goto L_0884CDF0;
    case 258u: goto L_0884CDFC;
    case 259u: goto L_0884CE08;
    case 260u: goto L_0884CE14;
    case 261u: goto L_0884CE1C;
    case 262u: goto L_0884CE20;
    case 263u: goto L_0884CE28;
    case 264u: goto L_0884CE34;
    case 265u: goto L_0884CE40;
    case 266u: goto L_0884CE4C;
    case 267u: goto L_0884CE58;
    case 268u: goto L_0884CE5C;
    case 269u: goto L_0884CE80;
    case 270u: goto L_0884CE9C;
    case 271u: goto L_0884CEB0;
    case 272u: goto L_0884CECC;
    case 273u: goto L_0884CED4;
    case 274u: goto L_0884CEE0;
    case 275u: goto L_0884CEE8;
    case 276u: goto L_0884CEEC;
    case 277u: goto L_0884CF00;
    case 278u: goto L_0884CF1C;
    case 279u: goto L_0884CF24;
    case 280u: goto L_0884CF30;
    case 281u: goto L_0884CF38;
    case 282u: goto L_0884CF3C;
    case 283u: goto L_0884CF50;
    case 284u: goto L_0884CF6C;
    case 285u: goto L_0884CF80;
    case 286u: goto L_0884CF8C;
    case 287u: goto L_0884CF98;
    case 288u: goto L_0884CFA4;
    case 289u: goto L_0884CFB0;
    case 290u: goto L_0884CFBC;
    case 291u: goto L_0884CFC8;
    case 292u: goto L_0884CFD0;
    case 293u: goto L_0884CFD4;
    case 294u: goto L_0884CFE8;
    case 295u: goto L_0884D004;
    case 296u: goto L_0884D00C;
    case 297u: goto L_0884D018;
    case 298u: goto L_0884D020;
    case 299u: goto L_0884D024;
    case 300u: goto L_0884D038;
    case 301u: goto L_0884D054;
    case 302u: goto L_0884D05C;
    case 303u: goto L_0884D068;
    case 304u: goto L_0884D070;
    case 305u: goto L_0884D074;
    case 306u: goto L_0884D088;
    case 307u: goto L_0884D0A4;
    case 308u: goto L_0884D0AC;
    case 309u: goto L_0884D0B8;
    case 310u: goto L_0884D0C0;
    case 311u: goto L_0884D0C4;
    case 312u: goto L_0884D0D8;
    case 313u: goto L_0884D0EC;
    case 314u: goto L_0884D100;
    case 315u: goto L_0884D114;
    case 316u: goto L_0884D128;
    case 317u: goto L_0884D148;
    case 318u: goto L_0884D15C;
    case 319u: goto L_0884D16C;
    case 320u: goto L_0884D174;
    case 321u: goto L_0884D17C;
    case 322u: goto L_0884D190;
    case 323u: goto L_0884D19C;
    case 324u: goto L_0884D1B0;
    case 325u: goto L_0884D1B8;
    case 326u: goto L_0884D1C4;
    case 327u: goto L_0884D1CC;
    case 328u: goto L_0884D1E0;
    case 329u: goto L_0884D1F4;
    case 330u: goto L_0884D1FC;
    case 331u: goto L_0884D204;
    case 332u: goto L_0884D21C;
    case 333u: goto L_0884D224;
    case 334u: goto L_0884D230;
    case 335u: goto L_0884D238;
    case 336u: goto L_0884D240;
    case 337u: goto L_0884D244;
    case 338u: goto L_0884D254;
    case 339u: goto L_0884D260;
    case 340u: goto L_0884D270;
    case 341u: goto L_0884D278;
    case 342u: goto L_0884D280;
    case 343u: goto L_0884D28C;
    case 344u: goto L_0884D294;
    case 345u: goto L_0884D29C;
    case 346u: goto L_0884D2A4;
    case 347u: goto L_0884D2AC;
    case 348u: goto L_0884D2C0;
    case 349u: goto L_0884D2CC;
    case 350u: goto L_0884D2E0;
    case 351u: goto L_0884D2E8;
    case 352u: goto L_0884D2F4;
    case 353u: goto L_0884D308;
    case 354u: goto L_0884D31C;
    case 355u: goto L_0884D334;
    case 356u: goto L_0884D340;
    case 357u: goto L_0884D350;
    case 358u: goto L_0884D358;
    case 359u: goto L_0884D360;
    case 360u: goto L_0884D368;
    case 361u: goto L_0884D370;
    case 362u: goto L_0884D378;
    case 363u: goto L_0884D380;
    case 364u: goto L_0884D388;
    case 365u: goto L_0884D39C;
    case 366u: goto L_0884D3A8;
    case 367u: goto L_0884D3BC;
    case 368u: goto L_0884D3C4;
    case 369u: goto L_0884D3D0;
    case 370u: goto L_0884D3D8;
    case 371u: goto L_0884D3EC;
    case 372u: goto L_0884D400;
    case 373u: goto L_0884D408;
    case 374u: goto L_0884D410;
    case 375u: goto L_0884D418;
    case 376u: goto L_0884D42C;
    case 377u: goto L_0884D440;
    case 378u: goto L_0884D448;
    case 379u: goto L_0884D450;
    case 380u: goto L_0884D458;
    case 381u: goto L_0884D460;
    case 382u: goto L_0884D468;
    case 383u: goto L_0884D47C;
    case 384u: goto L_0884D488;
    case 385u: goto L_0884D49C;
    case 386u: goto L_0884D4A4;
    case 387u: goto L_0884D4B0;
    case 388u: goto L_0884D4C8;
    case 389u: goto L_0884D4D0;
    case 390u: goto L_0884D4DC;
    case 391u: goto L_0884D4E4;
    case 392u: goto L_0884D4EC;
    case 393u: goto L_0884D4F0;
    case 394u: goto L_0884D500;
    case 395u: goto L_0884D50C;
    case 396u: goto L_0884D520;
    case 397u: goto L_0884D52C;
    case 398u: goto L_0884D540;
    case 399u: goto L_0884D548;
    case 400u: goto L_0884D554;
    case 401u: goto L_0884D574;
    case 402u: goto L_0884D57C;
    case 403u: goto L_0884D584;
    case 404u: goto L_0884D58C;
    case 405u: goto L_0884D5A0;
    case 406u: goto L_0884D5B8;
    case 407u: goto L_0884D5E0;
    case 408u: goto L_0884D60C;
    case 409u: goto L_0884D61C;
    case 410u: goto L_0884D628;
    case 411u: goto L_0884D634;
    case 412u: goto L_0884D640;
    case 413u: goto L_0884D64C;
    case 414u: goto L_0884D658;
    case 415u: goto L_0884D678;
    case 416u: goto L_0884D680;
    case 417u: goto L_0884D688;
    case 418u: goto L_0884D694;
    case 419u: goto L_0884D69C;
    case 420u: goto L_0884D6A8;
    case 421u: goto L_0884D6B8;
    case 422u: goto L_0884D6C8;
    case 423u: goto L_0884D6D0;
    case 424u: goto L_0884D6D8;
    case 425u: goto L_0884D6E0;
    case 426u: goto L_0884D6EC;
    case 427u: goto L_0884D6F0;
    case 428u: goto L_0884D6F8;
    case 429u: goto L_0884D704;
    case 430u: goto L_0884D70C;
    case 431u: goto L_0884D720;
    case 432u: goto L_0884D73C;
    case 433u: goto L_0884D744;
    case 434u: goto L_0884D74C;
    case 435u: goto L_0884D754;
    case 436u: goto L_0884D75C;
    case 437u: goto L_0884D768;
    case 438u: goto L_0884D774;
    case 439u: goto L_0884D780;
    case 440u: goto L_0884D788;
    case 441u: goto L_0884D794;
    case 442u: goto L_0884D7A0;
    case 443u: goto L_0884D7A8;
    case 444u: goto L_0884D7B0;
    case 445u: goto L_0884D7B8;
    case 446u: goto L_0884D7C0;
    case 447u: goto L_0884D7CC;
    case 448u: goto L_0884D7D4;
    case 449u: goto L_0884D7E0;
    case 450u: goto L_0884D7EC;
    case 451u: goto L_0884D7F4;
    case 452u: goto L_0884D800;
    case 453u: goto L_0884D808;
    case 454u: goto L_0884D814;
    case 455u: goto L_0884D818;
    case 456u: goto L_0884D828;
    case 457u: goto L_0884D840;
    case 458u: goto L_0884D850;
    case 459u: goto L_0884D860;
    case 460u: goto L_0884D868;
    case 461u: goto L_0884D87C;
    case 462u: goto L_0884D888;
    case 463u: goto L_0884D8C0;
    case 464u: goto L_0884D8C4;
    case 465u: goto L_0884D8D0;
    case 466u: goto L_0884D8E0;
    case 467u: goto L_0884D8E8;
    case 468u: goto L_0884D8F4;
    case 469u: goto L_0884D8F8;
    case 470u: goto L_0884D91C;
    case 471u: goto L_0884D924;
    case 472u: goto L_0884D94C;
    case 473u: goto L_0884D95C;
    case 474u: goto L_0884D968;
    case 475u: goto L_0884D974;
    case 476u: goto L_0884D97C;
    case 477u: goto L_0884D984;
    case 478u: goto L_0884D98C;
    case 479u: goto L_0884D994;
    case 480u: goto L_0884D99C;
    case 481u: goto L_0884D9AC;
    case 482u: goto L_0884D9B4;
    case 483u: goto L_0884D9C0;
    case 484u: goto L_0884D9C4;
    case 485u: goto L_0884D9CC;
    case 486u: goto L_0884D9D4;
    case 487u: goto L_0884D9E4;
    case 488u: goto L_0884D9F4;
    case 489u: goto L_0884D9FC;
    case 490u: goto L_0884DA04;
    case 491u: goto L_0884DA14;
    case 492u: goto L_0884DA1C;
    case 493u: goto L_0884DA24;
    case 494u: goto L_0884DA2C;
    case 495u: goto L_0884DA44;
    case 496u: goto L_0884DA4C;
    case 497u: goto L_0884DA60;
    case 498u: goto L_0884DA68;
    case 499u: goto L_0884DA70;
    case 500u: goto L_0884DA7C;
    case 501u: goto L_0884DA84;
    case 502u: goto L_0884DA9C;
    case 503u: goto L_0884DAA4;
    case 504u: goto L_0884DAB0;
    case 505u: goto L_0884DABC;
    case 506u: goto L_0884DAC4;
    case 507u: goto L_0884DAD0;
    case 508u: goto L_0884DADC;
    case 509u: goto L_0884DAF0;
    case 510u: goto L_0884DAFC;
    case 511u: goto L_0884DB08;
    case 512u: goto L_0884DB40;
    case 513u: goto L_0884DB48;
    case 514u: goto L_0884DB50;
    case 515u: goto L_0884DB5C;
    case 516u: goto L_0884DB60;
    case 517u: goto L_0884DB6C;
    case 518u: goto L_0884DB74;
    case 519u: goto L_0884DB80;
    case 520u: goto L_0884DB88;
    case 521u: goto L_0884DB90;
    case 522u: goto L_0884DBB0;
    case 523u: goto L_0884DBB8;
    case 524u: goto L_0884DBC0;
    case 525u: goto L_0884DBC8;
    case 526u: goto L_0884DBD8;
    case 527u: goto L_0884DBE0;
    case 528u: goto L_0884DBE4;
    case 529u: goto L_0884DBEC;
    case 530u: goto L_0884DBF0;
    case 531u: goto L_0884DC08;
    case 532u: goto L_0884DC10;
    case 533u: goto L_0884DC40;
    case 534u: goto L_0884DC48;
    case 535u: goto L_0884DC50;
    case 536u: goto L_0884DC5C;
    case 537u: goto L_0884DC6C;
    case 538u: goto L_0884DC74;
    case 539u: goto L_0884DC7C;
    case 540u: goto L_0884DC88;
    case 541u: goto L_0884DC94;
    case 542u: goto L_0884DCA8;
    case 543u: goto L_0884DCC8;
    case 544u: goto L_0884DCD4;
    case 545u: goto L_0884DCE0;
    case 546u: goto L_0884DCF8;
    case 547u: goto L_0884DD00;
    case 548u: goto L_0884DD0C;
    case 549u: goto L_0884DD18;
    case 550u: goto L_0884DD24;
    case 551u: goto L_0884DD2C;
    case 552u: goto L_0884DD40;
    case 553u: goto L_0884DD88;
    case 554u: goto L_0884DD94;
    case 555u: goto L_0884DDA0;
    case 556u: goto L_0884DDA4;
    case 557u: goto L_0884DDAC;
    case 558u: goto L_0884DDBC;
    case 559u: goto L_0884DDC8;
    case 560u: goto L_0884DDD4;
    case 561u: goto L_0884DDDC;
    case 562u: goto L_0884DDE8;
    case 563u: goto L_0884DDF0;
    case 564u: goto L_0884DE00;
    case 565u: goto L_0884DE08;
    case 566u: goto L_0884DE10;
    case 567u: goto L_0884DE1C;
    case 568u: goto L_0884DE44;
    case 569u: goto L_0884DE4C;
    case 570u: goto L_0884DE80;
    case 571u: goto L_0884DE90;
    case 572u: goto L_0884DE9C;
    case 573u: goto L_0884DEA8;
    case 574u: goto L_0884DEAC;
    case 575u: goto L_0884DEB0;
    case 576u: goto L_0884DEB4;
    case 577u: goto L_0884DEBC;
    case 578u: goto L_0884DEC8;
    case 579u: goto L_0884DED4;
    case 580u: goto L_0884DED8;
    case 581u: goto L_0884DEDC;
    case 582u: goto L_0884DEE0;
    case 583u: goto L_0884DEE8;
    case 584u: goto L_0884DF1C;
    case 585u: goto L_0884DF24;
    case 586u: goto L_0884DF30;
    case 587u: goto L_0884DF40;
    case 588u: goto L_0884DF44;
    case 589u: goto L_0884DF74;
    case 590u: goto L_0884DF80;
    case 591u: goto L_0884DFA8;
    case 592u: goto L_0884DFB0;
    case 593u: goto L_0884DFB8;
    case 594u: goto L_0884DFC0;
    case 595u: goto L_0884DFC8;
    case 596u: goto L_0884DFD0;
    case 597u: goto L_0884DFDC;
    case 598u: goto L_0884DFF0;
    case 599u: goto L_0884E034;
    case 600u: goto L_0884E058;
    case 601u: goto L_0884E07C;
    case 602u: goto L_0884E09C;
    case 603u: goto L_0884E0A8;
    case 604u: goto L_0884E0B0;
    case 605u: goto L_0884E0B8;
    case 606u: goto L_0884E0C4;
    case 607u: goto L_0884E0CC;
    case 608u: goto L_0884E0D4;
    case 609u: goto L_0884E0F0;
    case 610u: goto L_0884E0F8;
    case 611u: goto L_0884E10C;
    case 612u: goto L_0884E114;
    case 613u: goto L_0884E11C;
    case 614u: goto L_0884E120;
    case 615u: goto L_0884E138;
    case 616u: goto L_0884E168;
    case 617u: goto L_0884E178;
    case 618u: goto L_0884E180;
    case 619u: goto L_0884E198;
    case 620u: goto L_0884E1A0;
    case 621u: goto L_0884E1B0;
    case 622u: goto L_0884E1B8;
    case 623u: goto L_0884E1C8;
    case 624u: goto L_0884E1D0;
    case 625u: goto L_0884E1DC;
    case 626u: goto L_0884E1E0;
    case 627u: goto L_0884E1F8;
    case 628u: goto L_0884E220;
    case 629u: goto L_0884E244;
    case 630u: goto L_0884E250;
    case 631u: goto L_0884E25C;
    case 632u: goto L_0884E264;
    case 633u: goto L_0884E26C;
    case 634u: goto L_0884E278;
    case 635u: goto L_0884E2A4;
    case 636u: goto L_0884E2AC;
    case 637u: goto L_0884E2B8;
    case 638u: goto L_0884E2C0;
    case 639u: goto L_0884E2CC;
    case 640u: goto L_0884E2D8;
    case 641u: goto L_0884E2E0;
    case 642u: goto L_0884E2E8;
    case 643u: goto L_0884E2F4;
    case 644u: goto L_0884E2F8;
    case 645u: goto L_0884E318;
    case 646u: goto L_0884E320;
    case 647u: goto L_0884E328;
    case 648u: goto L_0884E334;
    case 649u: goto L_0884E350;
    case 650u: goto L_0884E358;
    case 651u: goto L_0884E360;
    case 652u: goto L_0884E368;
    case 653u: goto L_0884E370;
    case 654u: goto L_0884E37C;
    case 655u: goto L_0884E390;
    case 656u: goto L_0884E39C;
    case 657u: goto L_0884E3B0;
    case 658u: goto L_0884E3BC;
    case 659u: goto L_0884E3C4;
    case 660u: goto L_0884E3D0;
    case 661u: goto L_0884E3D8;
    case 662u: goto L_0884E3E0;
    case 663u: goto L_0884E3EC;
    case 664u: goto L_0884E3F4;
    case 665u: goto L_0884E3FC;
    case 666u: goto L_0884E408;
    case 667u: goto L_0884E410;
    case 668u: goto L_0884E424;
    case 669u: goto L_0884E430;
    case 670u: goto L_0884E438;
    case 671u: goto L_0884E43C;
    case 672u: goto L_0884E444;
    case 673u: goto L_0884E448;
    case 674u: goto L_0884E44C;
    case 675u: goto L_0884E45C;
    case 676u: goto L_0884E480;
    case 677u: goto L_0884E48C;
    case 678u: goto L_0884E498;
    case 679u: goto L_0884E4AC;
    case 680u: goto L_0884E4C4;
    case 681u: goto L_0884E4DC;
    case 682u: goto L_0884E4E4;
    case 683u: goto L_0884E4EC;
    case 684u: goto L_0884E4F4;
    case 685u: goto L_0884E4FC;
    case 686u: goto L_0884E520;
    case 687u: goto L_0884E548;
    case 688u: goto L_0884E550;
    case 689u: goto L_0884E558;
    case 690u: goto L_0884E560;
    case 691u: goto L_0884E568;
    case 692u: goto L_0884E570;
    case 693u: goto L_0884E580;
    case 694u: goto L_0884E588;
    case 695u: goto L_0884E58C;
    case 696u: goto L_0884E598;
    case 697u: goto L_0884E5A0;
    case 698u: goto L_0884E5B0;
    case 699u: goto L_0884E5B8;
    case 700u: goto L_0884E5C0;
    case 701u: goto L_0884E5D0;
    case 702u: goto L_0884E5D4;
    case 703u: goto L_0884E5EC;
    case 704u: goto L_0884E604;
    case 705u: goto L_0884E60C;
    case 706u: goto L_0884E614;
    case 707u: goto L_0884E61C;
    case 708u: goto L_0884E624;
    case 709u: goto L_0884E62C;
    case 710u: goto L_0884E634;
    case 711u: goto L_0884E63C;
    case 712u: goto L_0884E644;
    case 713u: goto L_0884E648;
    case 714u: goto L_0884E654;
    case 715u: goto L_0884E65C;
    case 716u: goto L_0884E664;
    case 717u: goto L_0884E66C;
    case 718u: goto L_0884E68C;
    case 719u: goto L_0884E6A0;
    case 720u: goto L_0884E6D0;
    case 721u: goto L_0884E6DC;
    case 722u: goto L_0884E6E8;
    case 723u: goto L_0884E6F0;
    case 724u: goto L_0884E6FC;
    case 725u: goto L_0884E70C;
    case 726u: goto L_0884E714;
    case 727u: goto L_0884E728;
    case 728u: goto L_0884E72C;
    case 729u: goto L_0884E748;
    case 730u: goto L_0884E774;
    case 731u: goto L_0884E780;
    case 732u: goto L_0884E798;
    case 733u: goto L_0884E7A4;
    case 734u: goto L_0884E7DC;
    case 735u: goto L_0884E828;
    case 736u: goto L_0884E840;
    case 737u: goto L_0884E848;
    case 738u: goto L_0884E850;
    case 739u: goto L_0884E858;
    case 740u: goto L_0884E860;
    case 741u: goto L_0884E868;
    case 742u: goto L_0884E878;
    case 743u: goto L_0884E884;
    case 744u: goto L_0884E890;
    case 745u: goto L_0884E89C;
    case 746u: goto L_0884E8A8;
    case 747u: goto L_0884E8B4;
    case 748u: goto L_0884E8E4;
    case 749u: goto L_0884E8EC;
    case 750u: goto L_0884E8F4;
    case 751u: goto L_0884E910;
    case 752u: goto L_0884E92C;
    case 753u: goto L_0884E934;
    case 754u: goto L_0884E940;
    case 755u: goto L_0884E948;
    case 756u: goto L_0884E94C;
    case 757u: goto L_0884E960;
    case 758u: goto L_0884E97C;
    case 759u: goto L_0884E984;
    case 760u: goto L_0884E990;
    case 761u: goto L_0884E998;
    case 762u: goto L_0884E99C;
    case 763u: goto L_0884E9B0;
    case 764u: goto L_0884E9CC;
    case 765u: goto L_0884E9D4;
    case 766u: goto L_0884E9E0;
    case 767u: goto L_0884E9E8;
    case 768u: goto L_0884E9EC;
    case 769u: goto L_0884EA00;
    case 770u: goto L_0884EA14;
    case 771u: goto L_0884EA28;
    case 772u: goto L_0884EA3C;
    case 773u: goto L_0884EA50;
    case 774u: goto L_0884EA64;
    case 775u: goto L_0884EA78;
    case 776u: goto L_0884EA84;
    case 777u: goto L_0884EA90;
    case 778u: goto L_0884EA9C;
    case 779u: goto L_0884EAB8;
    case 780u: goto L_0884EAC4;
    case 781u: goto L_0884EAD0;
    case 782u: goto L_0884EADC;
    case 783u: goto L_0884EAE8;
    case 784u: goto L_0884EAF4;
    case 785u: goto L_0884EB00;
    case 786u: goto L_0884EB0C;
    case 787u: goto L_0884EB14;
    case 788u: goto L_0884EB18;
    case 789u: goto L_0884EB2C;
    case 790u: goto L_0884EB34;
    case 791u: goto L_0884EB3C;
    case 792u: goto L_0884EB68;
    case 793u: goto L_0884EB74;
    case 794u: goto L_0884EB7C;
    case 795u: goto L_0884EB84;
    case 796u: goto L_0884EB8C;
    case 797u: goto L_0884EB94;
    case 798u: goto L_0884EB9C;
    case 799u: goto L_0884EBA8;
    case 800u: goto L_0884EBB0;
    case 801u: goto L_0884EBC0;
    case 802u: goto L_0884EBD0;
    case 803u: goto L_0884EBD8;
    case 804u: goto L_0884EBE0;
    case 805u: goto L_0884EBF0;
    case 806u: goto L_0884EBF8;
    case 807u: goto L_0884EBFC;
    case 808u: goto L_0884EC14;
    case 809u: goto L_0884EC28;
    case 810u: goto L_0884EC34;
    case 811u: goto L_0884EC3C;
    case 812u: goto L_0884EC44;
    case 813u: goto L_0884EC54;
    case 814u: goto L_0884EC98;
    case 815u: goto L_0884ECA8;
    case 816u: goto L_0884ECC4;
    case 817u: goto L_0884ECCC;
    case 818u: goto L_0884ECD4;
    case 819u: goto L_0884ECDC;
    case 820u: goto L_0884ECE8;
    case 821u: goto L_0884ECF0;
    case 822u: goto L_0884ED00;
    case 823u: goto L_0884ED10;
    case 824u: goto L_0884ED18;
    case 825u: goto L_0884ED20;
    case 826u: goto L_0884ED30;
    case 827u: goto L_0884ED40;
    case 828u: goto L_0884ED48;
    case 829u: goto L_0884ED50;
    case 830u: goto L_0884ED58;
    case 831u: goto L_0884ED70;
    case 832u: goto L_0884ED78;
    case 833u: goto L_0884ED84;
    case 834u: goto L_0884ED8C;
    case 835u: goto L_0884ED94;
    case 836u: goto L_0884EDC0;
    case 837u: goto L_0884EDC8;
    case 838u: goto L_0884EDE0;
    case 839u: goto L_0884EDE8;
    case 840u: goto L_0884EDF4;
    case 841u: goto L_0884EDFC;
    case 842u: goto L_0884EE04;
    case 843u: goto L_0884EE0C;
    case 844u: goto L_0884EE14;
    case 845u: goto L_0884EE1C;
    case 846u: goto L_0884EE28;
    case 847u: goto L_0884EE2C;
    case 848u: goto L_0884EE34;
    case 849u: goto L_0884EE40;
    case 850u: goto L_0884EE4C;
    case 851u: goto L_0884EE54;
    case 852u: goto L_0884EE5C;
    case 853u: goto L_0884EE68;
    case 854u: goto L_0884EE78;
    case 855u: goto L_0884EE80;
    case 856u: goto L_0884EE88;
    case 857u: goto L_0884EE94;
    case 858u: goto L_0884EE9C;
    case 859u: goto L_0884EEA8;
    case 860u: goto L_0884EEB0;
    case 861u: goto L_0884EEBC;
    case 862u: goto L_0884EEC4;
    case 863u: goto L_0884EED0;
    case 864u: goto L_0884EED8;
    case 865u: goto L_0884EEE4;
    case 866u: goto L_0884EEEC;
    case 867u: goto L_0884EEF8;
    case 868u: goto L_0884EF04;
    case 869u: goto L_0884EF0C;
    case 870u: goto L_0884EF14;
    case 871u: goto L_0884EF20;
    case 872u: goto L_0884EF28;
    case 873u: goto L_0884EF34;
    case 874u: goto L_0884EF40;
    case 875u: goto L_0884EF48;
    case 876u: goto L_0884EF58;
    case 877u: goto L_0884EF60;
    case 878u: goto L_0884EF70;
    case 879u: goto L_0884EF78;
    case 880u: goto L_0884EF84;
    case 881u: goto L_0884EF8C;
    case 882u: goto L_0884EF98;
    case 883u: goto L_0884EFA4;
    case 884u: goto L_0884EFAC;
    case 885u: goto L_0884EFB4;
    case 886u: goto L_0884EFC0;
    case 887u: goto L_0884EFC8;
    case 888u: goto L_0884EFD4;
    case 889u: goto L_0884EFE0;
    case 890u: goto L_0884EFE8;
    case 891u: goto L_0884EFF0;
    case 892u: goto L_0884EFF8;
    case 893u: goto L_0884F004;
    case 894u: goto L_0884F00C;
    case 895u: goto L_0884F018;
    case 896u: goto L_0884F020;
    case 897u: goto L_0884F02C;
    case 898u: goto L_0884F034;
    case 899u: goto L_0884F044;
    case 900u: goto L_0884F04C;
    case 901u: goto L_0884F05C;
    case 902u: goto L_0884F064;
    case 903u: goto L_0884F070;
    case 904u: goto L_0884F078;
    case 905u: goto L_0884F084;
    case 906u: goto L_0884F090;
    case 907u: goto L_0884F098;
    case 908u: goto L_0884F0A0;
    case 909u: goto L_0884F0AC;
    case 910u: goto L_0884F0B4;
    case 911u: goto L_0884F0C0;
    case 912u: goto L_0884F0C8;
    case 913u: goto L_0884F0D4;
    case 914u: goto L_0884F0D8;
    case 915u: goto L_0884F0E0;
    case 916u: goto L_0884F0E8;
    case 917u: goto L_0884F10C;
    case 918u: goto L_0884F114;
    case 919u: goto L_0884F11C;
    case 920u: goto L_0884F12C;
    case 921u: goto L_0884F138;
    case 922u: goto L_0884F140;
    case 923u: goto L_0884F144;
    case 924u: goto L_0884F14C;
    case 925u: goto L_0884F158;
    case 926u: goto L_0884F15C;
    case 927u: goto L_0884F180;
    case 928u: goto L_0884F19C;
    case 929u: goto L_0884F1A4;
    case 930u: goto L_0884F1B0;
    case 931u: goto L_0884F1B8;
    case 932u: goto L_0884F1BC;
    case 933u: goto L_0884F1D0;
    case 934u: goto L_0884F1D8;
    case 935u: goto L_0884F1E8;
    case 936u: goto L_0884F1F8;
    case 937u: goto L_0884F200;
    case 938u: goto L_0884F208;
    case 939u: goto L_0884F21C;
    case 940u: goto L_0884F228;
    case 941u: goto L_0884F23C;
    case 942u: goto L_0884F244;
    case 943u: goto L_0884F250;
    case 944u: goto L_0884F258;
    case 945u: goto L_0884F260;
    case 946u: goto L_0884F274;
    case 947u: goto L_0884F280;
    case 948u: goto L_0884F294;
    case 949u: goto L_0884F29C;
    case 950u: goto L_0884F2A8;
    case 951u: goto L_0884F2BC;
    case 952u: goto L_0884F2C8;
    case 953u: goto L_0884F2DC;
    case 954u: goto L_0884F2E4;
    case 955u: goto L_0884F2EC;
    case 956u: goto L_0884F300;
    case 957u: goto L_0884F30C;
    case 958u: goto L_0884F320;
    case 959u: goto L_0884F328;
    case 960u: goto L_0884F334;
    case 961u: goto L_0884F33C;
    case 962u: goto L_0884F344;
    case 963u: goto L_0884F358;
    case 964u: goto L_0884F36C;
    case 965u: goto L_0884F384;
    case 966u: goto L_0884F38C;
    case 967u: goto L_0884F398;
    case 968u: goto L_0884F3A0;
    case 969u: goto L_0884F3A8;
    case 970u: goto L_0884F3AC;
    case 971u: goto L_0884F3BC;
    case 972u: goto L_0884F3C8;
    case 973u: goto L_0884F3D4;
    case 974u: goto L_0884F3F0;
    case 975u: goto L_0884F404;
    case 976u: goto L_0884F454;
    case 977u: goto L_0884F45C;
    case 978u: goto L_0884F464;
    case 979u: goto L_0884F46C;
    case 980u: goto L_0884F474;
    case 981u: goto L_0884F47C;
    case 982u: goto L_0884F494;
    case 983u: goto L_0884F49C;
    case 984u: goto L_0884F4A8;
    case 985u: goto L_0884F4B0;
    case 986u: goto L_0884F4B8;
    case 987u: goto L_0884F4E4;
    case 988u: goto L_0884F4EC;
    case 989u: goto L_0884F504;
    case 990u: goto L_0884F50C;
    case 991u: goto L_0884F518;
    case 992u: goto L_0884F520;
    case 993u: goto L_0884F528;
    case 994u: goto L_0884F530;
    case 995u: goto L_0884F538;
    case 996u: goto L_0884F540;
    case 997u: goto L_0884F54C;
    case 998u: goto L_0884F550;
    case 999u: goto L_0884F558;
    case 1000u: goto L_0884F564;
    case 1001u: goto L_0884F570;
    case 1002u: goto L_0884F578;
    case 1003u: goto L_0884F580;
    case 1004u: goto L_0884F58C;
    case 1005u: goto L_0884F594;
    case 1006u: goto L_0884F59C;
    case 1007u: goto L_0884F5A8;
    case 1008u: goto L_0884F5B0;
    case 1009u: goto L_0884F5BC;
    case 1010u: goto L_0884F5C4;
    case 1011u: goto L_0884F5D0;
    case 1012u: goto L_0884F5D8;
    case 1013u: goto L_0884F5E4;
    case 1014u: goto L_0884F5EC;
    case 1015u: goto L_0884F5F8;
    case 1016u: goto L_0884F600;
    case 1017u: goto L_0884F60C;
    case 1018u: goto L_0884F618;
    case 1019u: goto L_0884F620;
    case 1020u: goto L_0884F628;
    case 1021u: goto L_0884F634;
    case 1022u: goto L_0884F63C;
    case 1023u: goto L_0884F648;
    case 1024u: goto L_0884F654;
    case 1025u: goto L_0884F65C;
    case 1026u: goto L_0884F66C;
    case 1027u: goto L_0884F674;
    case 1028u: goto L_0884F684;
    case 1029u: goto L_0884F68C;
    case 1030u: goto L_0884F698;
    case 1031u: goto L_0884F6A0;
    case 1032u: goto L_0884F6AC;
    case 1033u: goto L_0884F6B8;
    case 1034u: goto L_0884F6C0;
    case 1035u: goto L_0884F6C8;
    case 1036u: goto L_0884F6D4;
    case 1037u: goto L_0884F6DC;
    case 1038u: goto L_0884F6E8;
    case 1039u: goto L_0884F6F4;
    case 1040u: goto L_0884F6FC;
    case 1041u: goto L_0884F704;
    case 1042u: goto L_0884F70C;
    case 1043u: goto L_0884F718;
    case 1044u: goto L_0884F720;
    case 1045u: goto L_0884F72C;
    case 1046u: goto L_0884F734;
    case 1047u: goto L_0884F740;
    case 1048u: goto L_0884F748;
    case 1049u: goto L_0884F758;
    case 1050u: goto L_0884F760;
    case 1051u: goto L_0884F770;
    case 1052u: goto L_0884F778;
    case 1053u: goto L_0884F784;
    case 1054u: goto L_0884F78C;
    case 1055u: goto L_0884F798;
    case 1056u: goto L_0884F7A4;
    case 1057u: goto L_0884F7AC;
    case 1058u: goto L_0884F7B4;
    case 1059u: goto L_0884F7C0;
    case 1060u: goto L_0884F7C8;
    case 1061u: goto L_0884F7D4;
    case 1062u: goto L_0884F7DC;
    case 1063u: goto L_0884F7E8;
    case 1064u: goto L_0884F7EC;
    case 1065u: goto L_0884F7F4;
    case 1066u: goto L_0884F7FC;
    case 1067u: goto L_0884F81C;
    case 1068u: goto L_0884F828;
    case 1069u: goto L_0884F85C;
    case 1070u: goto L_0884F8B0;
    case 1071u: goto L_0884F8B8;
    case 1072u: goto L_0884F8C0;
    case 1073u: goto L_0884F8C8;
    case 1074u: goto L_0884F8E0;
    case 1075u: goto L_0884F8E8;
    case 1076u: goto L_0884F8F0;
    case 1077u: goto L_0884F8FC;
    case 1078u: goto L_0884F908;
    case 1079u: goto L_0884F910;
    case 1080u: goto L_0884F920;
    case 1081u: goto L_0884F92C;
    case 1082u: goto L_0884F960;
    case 1083u: goto L_0884F96C;
    case 1084u: goto L_0884F974;
    case 1085u: goto L_0884F98C;
    case 1086u: goto L_0884F994;
    case 1087u: goto L_0884F9A0;
    case 1088u: goto L_0884F9A8;
    case 1089u: goto L_0884F9B0;
    case 1090u: goto L_0884F9B8;
    case 1091u: goto L_0884F9C0;
    case 1092u: goto L_0884F9C8;
    case 1093u: goto L_0884F9D4;
    case 1094u: goto L_0884F9D8;
    case 1095u: goto L_0884F9E0;
    case 1096u: goto L_0884F9EC;
    case 1097u: goto L_0884F9F8;
    case 1098u: goto L_0884F9FC;
    case 1099u: goto L_0884FA08;
    case 1100u: goto L_0884FA0C;
    case 1101u: goto L_0884FA14;
    case 1102u: goto L_0884FA1C;
    case 1103u: goto L_0884FA28;
    case 1104u: goto L_0884FA30;
    case 1105u: goto L_0884FA3C;
    case 1106u: goto L_0884FA44;
    case 1107u: goto L_0884FA50;
    case 1108u: goto L_0884FA58;
    case 1109u: goto L_0884FA64;
    case 1110u: goto L_0884FA6C;
    case 1111u: goto L_0884FA78;
    case 1112u: goto L_0884FA80;
    case 1113u: goto L_0884FA8C;
    case 1114u: goto L_0884FA98;
    case 1115u: goto L_0884FAA0;
    case 1116u: goto L_0884FAA8;
    case 1117u: goto L_0884FAB4;
    case 1118u: goto L_0884FABC;
    case 1119u: goto L_0884FAC8;
    case 1120u: goto L_0884FAD4;
    case 1121u: goto L_0884FADC;
    case 1122u: goto L_0884FAEC;
    case 1123u: goto L_0884FAF4;
    case 1124u: goto L_0884FB04;
    case 1125u: goto L_0884FB0C;
    case 1126u: goto L_0884FB18;
    case 1127u: goto L_0884FB20;
    case 1128u: goto L_0884FB2C;
    case 1129u: goto L_0884FB38;
    case 1130u: goto L_0884FB40;
    case 1131u: goto L_0884FB48;
    case 1132u: goto L_0884FB54;
    case 1133u: goto L_0884FB5C;
    case 1134u: goto L_0884FB68;
    case 1135u: goto L_0884FB74;
    case 1136u: goto L_0884FB7C;
    case 1137u: goto L_0884FB84;
    case 1138u: goto L_0884FB8C;
    case 1139u: goto L_0884FB98;
    case 1140u: goto L_0884FBA0;
    case 1141u: goto L_0884FBAC;
    case 1142u: goto L_0884FBB4;
    case 1143u: goto L_0884FBC0;
    case 1144u: goto L_0884FBC8;
    case 1145u: goto L_0884FBD8;
    case 1146u: goto L_0884FBE0;
    case 1147u: goto L_0884FBF0;
    case 1148u: goto L_0884FBF8;
    case 1149u: goto L_0884FC04;
    case 1150u: goto L_0884FC0C;
    case 1151u: goto L_0884FC18;
    case 1152u: goto L_0884FC24;
    case 1153u: goto L_0884FC2C;
    case 1154u: goto L_0884FC34;
    case 1155u: goto L_0884FC40;
    case 1156u: goto L_0884FC48;
    case 1157u: goto L_0884FC54;
    case 1158u: goto L_0884FC5C;
    case 1159u: goto L_0884FC68;
    case 1160u: goto L_0884FC6C;
    case 1161u: goto L_0884FC74;
    case 1162u: goto L_0884FC7C;
    case 1163u: goto L_0884FC9C;
    case 1164u: goto L_0884FCA8;
    case 1165u: goto L_0884FCDC;
    case 1166u: goto L_0884FCF4;
    case 1167u: goto L_0884FD00;
    case 1168u: goto L_0884FD10;
    case 1169u: goto L_0884FD24;
    case 1170u: goto L_0884FD30;
    case 1171u: goto L_0884FD44;
    case 1172u: goto L_0884FD4C;
    case 1173u: goto L_0884FD58;
    case 1174u: goto L_0884FD60;
    case 1175u: goto L_0884FD9C;
    case 1176u: goto L_0884FDA4;
    case 1177u: goto L_0884FDB4;
    case 1178u: goto L_0884FDC0;
    case 1179u: goto L_0884FDCC;
    case 1180u: goto L_0884FDD4;
    case 1181u: goto L_0884FDF0;
    case 1182u: goto L_0884FDFC;
    case 1183u: goto L_0884FE08;
    case 1184u: goto L_0884FE10;
    case 1185u: goto L_0884FE18;
    case 1186u: goto L_0884FE24;
    case 1187u: goto L_0884FE28;
    case 1188u: goto L_0884FE30;
    case 1189u: goto L_0884FE38;
    case 1190u: goto L_0884FE40;
    case 1191u: goto L_0884FE4C;
    case 1192u: goto L_0884FE54;
    case 1193u: goto L_0884FE60;
    case 1194u: goto L_0884FE68;
    case 1195u: goto L_0884FE74;
    case 1196u: goto L_0884FE7C;
    case 1197u: goto L_0884FE88;
    case 1198u: goto L_0884FE90;
    case 1199u: goto L_0884FE9C;
    case 1200u: goto L_0884FEA4;
    case 1201u: goto L_0884FEB0;
    case 1202u: goto L_0884FEBC;
    case 1203u: goto L_0884FEC8;
    case 1204u: goto L_0884FED4;
    case 1205u: goto L_0884FEE0;
    case 1206u: goto L_0884FEE4;
    case 1207u: goto L_0884FEEC;
    case 1208u: goto L_0884FEF8;
    case 1209u: goto L_0884FF00;
    case 1210u: goto L_0884FF0C;
    case 1211u: goto L_0884FF18;
    case 1212u: goto L_0884FF20;
    case 1213u: goto L_0884FF30;
    case 1214u: goto L_0884FF38;
    case 1215u: goto L_0884FF50;
    case 1216u: goto L_0884FF58;
    case 1217u: goto L_0884FF64;
    case 1218u: goto L_0884FF6C;
    case 1219u: goto L_0884FF78;
    case 1220u: goto L_0884FF84;
    case 1221u: goto L_0884FF8C;
    case 1222u: goto L_0884FF90;
    case 1223u: goto L_0884FF98;
    case 1224u: goto L_0884FFA4;
    case 1225u: goto L_0884FFAC;
    case 1226u: goto L_0884FFB8;
    case 1227u: goto L_0884FFC4;
    case 1228u: goto L_0884FFCC;
    case 1229u: goto L_0884FFD4;
    case 1230u: goto L_0884FFE0;
    case 1231u: goto L_0884FFEC;
    case 1232u: goto L_0884FFF0;
    case 1233u: goto L_0884FFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0884C000:
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884C010u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    goto L_0884C41C;
L_0884C010:
    ctx.set_gpr(31, 0x0884C018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C018u) goto L_0884C018;
    return;
L_0884C018:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884C040u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_0884C3DC;
L_0884C040:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884C294;
      }
      goto L_0884C050;
    }
L_0884C050:
    ctx.set_gpr(31, 0x0884C058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0884C058u) goto L_0884C058;
    return;
L_0884C058:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C064u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0884C064u) goto L_0884C064;
    return;
L_0884C064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C06C;
    }
L_0884C06C:
    ctx.set_gpr(31, 0x0884C074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C074u) goto L_0884C074;
    return;
L_0884C074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0884C088u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884C47C;
L_0884C088:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884C294;
      }
      goto L_0884C098;
    }
L_0884C098:
    ctx.set_gpr(31, 0x0884C0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C0A0u) goto L_0884C0A0;
    return;
L_0884C0A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884C0B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    goto L_0884C3AC;
L_0884C0B0:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C0BC;
    }
L_0884C0BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884C294;
      }
      goto L_0884C0CC;
    }
L_0884C0CC:
    ctx.set_gpr(31, 0x0884C0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C0D4u) goto L_0884C0D4;
    return;
L_0884C0D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884C0F4u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_0884C41C;
L_0884C0F4:
    ctx.set_gpr(31, 0x0884C0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C0FCu) goto L_0884C0FC;
    return;
L_0884C0FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884C124u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    goto L_0884C3DC;
L_0884C124:
    ctx.set_gpr(31, 0x0884C12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C12Cu) goto L_0884C12C;
    return;
L_0884C12C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884C140u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_0884C47C;
L_0884C140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884C294;
      }
      goto L_0884C150;
    }
L_0884C150:
    ctx.set_gpr(31, 0x0884C158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C158u) goto L_0884C158;
    return;
L_0884C158:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C168u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    goto L_0884C3AC;
L_0884C168:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C174;
    }
L_0884C174:
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(3, 2244u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24280), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884C294;
      }
      goto L_0884C190;
    }
L_0884C190:
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24280)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 2244u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24280), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0884C220;
      }
      goto L_0884C1B8;
    }
L_0884C1B8:
    ctx.set_gpr(31, 0x0884C1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C1C0u) goto L_0884C1C0;
    return;
L_0884C1C0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884C1E0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    goto L_0884C41C;
L_0884C1E0:
    ctx.set_gpr(31, 0x0884C1E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C1E8u) goto L_0884C1E8;
    return;
L_0884C1E8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884C210u);
    ctx.set_gpr(10, 0u + 0u);
    goto L_0884C3DC;
L_0884C210:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0884C294;
      }
      goto L_0884C220;
    }
L_0884C220:
    ctx.set_gpr(31, 0x0884C228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x0884C228u) goto L_0884C228;
    return;
L_0884C228:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C234u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x0884C234u) goto L_0884C234;
    return;
L_0884C234:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C23C;
    }
L_0884C23C:
    ctx.set_gpr(31, 0x0884C244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C244u) goto L_0884C244;
    return;
L_0884C244:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884C258u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884C47C;
L_0884C258:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C264;
    }
L_0884C264:
    ctx.set_gpr(31, 0x0884C26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C26Cu) goto L_0884C26C;
    return;
L_0884C26C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C27Cu);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    goto L_0884C3AC;
L_0884C27C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C288;
    }
L_0884C288:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C294;
    }
L_0884C294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C394;
      }
      goto L_0884C29C;
    }
L_0884C29C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884C2A8;
      }
      goto L_0884C2A4;
    }
L_0884C2A4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_0884C2A8;
L_0884C2A8:
    ctx.set_gpr(31, 0x0884C2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C2B0u) goto L_0884C2B0;
    return;
L_0884C2B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x0884C2C0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x0884C2C0u) goto L_0884C2C0;
    return;
L_0884C2C0:
    ctx.set_gpr(31, 0x0884C2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C2C8u) goto L_0884C2C8;
    return;
L_0884C2C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(31, 0x0884C2D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 887u, 0x08AB33C4u>(ctx, &aot_mem) && ctx.pc == 0x0884C2D8u) goto L_0884C2D8;
    return;
L_0884C2D8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_0884C2DC;
L_0884C2DC:
    ctx.set_gpr(31, 0x0884C2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C2E4u) goto L_0884C2E4;
    return;
L_0884C2E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884C2F4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x0884C2F4u) goto L_0884C2F4;
    return;
L_0884C2F4:
    ctx.set_gpr(31, 0x0884C2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C2FCu) goto L_0884C2FC;
    return;
L_0884C2FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0884C30Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C30Cu) goto L_0884C30C;
    return;
L_0884C30C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884C2DC;
      }
      goto L_0884C31C;
    }
L_0884C31C:
    ctx.set_gpr(31, 0x0884C324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x0884C324u) goto L_0884C324;
    return;
L_0884C324:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884C33Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x0884C33Cu) goto L_0884C33C;
    return;
L_0884C33C:
    ctx.set_gpr(31, 0x0884C344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884C344u) goto L_0884C344;
    return;
L_0884C344:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x0884C364u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x0884C364u) goto L_0884C364;
    return;
L_0884C364:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884C378u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884C378u) goto L_0884C378;
    return;
L_0884C378:
    ctx.set_gpr(3, 2186u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20396));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), 0u);
    goto L_0884C394;
L_0884C394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884C398;
L_0884C398:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C3AC:
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 456u, 0x08846E40u>(ctx, &aot_mem); return;
L_0884C3DC:
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 420u, 0x08846830u>(ctx, &aot_mem); return;
L_0884C41C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884C474;
    }
    goto L_0884C45C;
L_0884C45C:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x0884C470u);
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 426u, 0x0884694Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C470u) goto L_0884C470;
    return;
L_0884C470:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884C474;
L_0884C474:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C47C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884C4C8;
    }
    goto L_0884C4BC;
L_0884C4BC:
    ctx.set_gpr(31, 0x0884C4C4u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 414u, 0x08846608u>(ctx, &aot_mem) && ctx.pc == 0x0884C4C4u) goto L_0884C4C4;
    return;
L_0884C4C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884C4C8;
L_0884C4C8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C4D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31012));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884C4FCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0884C748;
L_0884C4FC:
    ctx.set_gpr(31, 0x0884C504u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 304u, 0x08849458u>(ctx, &aot_mem) && ctx.pc == 0x0884C504u) goto L_0884C504;
    return;
L_0884C504:
    ctx.set_gpr(31, 0x0884C50Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884C73C;
L_0884C50C:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14544));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14624));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884C52Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x0884C52Cu) goto L_0884C52C;
    return;
L_0884C52C:
    ctx.set_gpr(31, 0x0884C534u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(140));
    goto L_0884C6D4;
L_0884C534:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884C540u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C6AC;
L_0884C540:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884C54Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0884C54Cu) goto L_0884C54C;
    return;
L_0884C54C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884C558u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0884C558u) goto L_0884C558;
    return;
L_0884C558:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884C564u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C684;
L_0884C564:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0884C56C;
L_0884C56C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884C57Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884C57C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884C56C;
      }
      goto L_0884C58C;
    }
L_0884C58C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
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
L_0884C5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884C5F4;
      }
      goto L_0884C5D8;
    }
L_0884C5D8:
    ctx.set_gpr(31, 0x0884C5E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C5E0u) goto L_0884C5E0;
    return;
L_0884C5E0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884C5F8;
    }
    goto L_0884C5EC;
L_0884C5EC:
    ctx.set_gpr(31, 0x0884C5F4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884C5F4u) goto L_0884C5F4;
    return;
L_0884C5F4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884C5F8;
L_0884C5F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C60C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884C644;
      }
      goto L_0884C628;
    }
L_0884C628:
    ctx.set_gpr(31, 0x0884C630u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C630u) goto L_0884C630;
    return;
L_0884C630:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884C648;
    }
    goto L_0884C63C;
L_0884C63C:
    ctx.set_gpr(31, 0x0884C644u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884C644u) goto L_0884C644;
    return;
L_0884C644:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884C648;
L_0884C648:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884C670u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884C670u) goto L_0884C670;
    return;
L_0884C670:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884C698u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884C698u) goto L_0884C698;
    return;
L_0884C698:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C6AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884C6C0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884C6C0u) goto L_0884C6C0;
    return;
L_0884C6C0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C6D4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C6E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884C718;
      }
      goto L_0884C6FC;
    }
L_0884C6FC:
    ctx.set_gpr(31, 0x0884C704u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C704u) goto L_0884C704;
    return;
L_0884C704:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884C71C;
    }
    goto L_0884C710;
L_0884C710:
    ctx.set_gpr(31, 0x0884C718u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884C718u) goto L_0884C718;
    return;
L_0884C718:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884C71C;
L_0884C71C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C730:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C73C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C748:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C754:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884C7D8;
      }
      goto L_0884C770;
    }
L_0884C770:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31012));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884C788u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0884C788u) goto L_0884C788;
    return;
L_0884C788:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-14624));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884C7A0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(30));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x0884C7A0u) goto L_0884C7A0;
    return;
L_0884C7A0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884C7ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884C5BC;
L_0884C7AC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884C7B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x0884C7B8u) goto L_0884C7B8;
    return;
L_0884C7B8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884C7C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884C60C;
L_0884C7C4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884C7DC;
    }
    goto L_0884C7D0;
L_0884C7D0:
    ctx.set_gpr(31, 0x0884C7D8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884C7F0;
L_0884C7D8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884C7DC;
L_0884C7DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C7F0:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_0884C7F8:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C800:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884C814u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0884C814u) goto L_0884C814;
    return;
L_0884C814:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884C820u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884C7F8;
L_0884C820:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884C830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0884C86Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_0884C730;
L_0884C86C:
    ctx.set_gpr(31, 0x0884C874u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_0884D64C;
L_0884C874:
    ctx.set_gpr(31, 0x0884C87Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_0884D640;
L_0884C87C:
    ctx.set_gpr(31, 0x0884C884u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0884D554;
L_0884C884:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
        goto L_0884CD24;
    }
    goto L_0884C894;
L_0884C894:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884CB0C;
      }
      goto L_0884C8A0;
    }
L_0884C8A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884C924;
      }
      goto L_0884C8AC;
    }
L_0884C8AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884C8EC;
      }
      goto L_0884C8B8;
    }
L_0884C8B8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C8C8;
      }
      goto L_0884C8C0;
    }
L_0884C8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0884CE20;
      }
      goto L_0884C8C8;
    }
L_0884C8C8:
    ctx.set_gpr(31, 0x0884C8D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884C8D0u) goto L_0884C8D0;
    return;
L_0884C8D0:
    ctx.set_gpr(31, 0x0884C8D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0884C8D8u) goto L_0884C8D8;
    return;
L_0884C8D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884C8E0;
    }
L_0884C8E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884C8EC;
L_0884C8EC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884C8FC;
      }
      goto L_0884C8F4;
    }
L_0884C8F4:
    ctx.set_gpr(31, 0x0884C8FCu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0884C8FCu) goto L_0884C8FC;
    return;
L_0884C8FC:
    ctx.set_gpr(31, 0x0884C904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884C904u) goto L_0884C904;
    return;
L_0884C904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884C914u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x0884C914u) goto L_0884C914;
    return;
L_0884C914:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884C924;
    }
L_0884C924:
    ctx.set_gpr(31, 0x0884C92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884C92Cu) goto L_0884C92C;
    return;
L_0884C92C:
    ctx.set_gpr(31, 0x0884C934u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x0884C934u) goto L_0884C934;
    return;
L_0884C934:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884C944;
    }
L_0884C944:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0884CA58;
      }
      goto L_0884C94C;
    }
L_0884C94C:
    ctx.set_gpr(31, 0x0884C954u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_0884D548;
L_0884C954:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884C960u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_0884D50C;
L_0884C960:
    ctx.set_gpr(31, 0x0884C968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884C968u) goto L_0884C968;
    return;
L_0884C968:
    ctx.set_gpr(31, 0x0884C970u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884C970u) goto L_0884C970;
    return;
L_0884C970:
    ctx.set_gpr(31, 0x0884C978u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884C978u) goto L_0884C978;
    return;
L_0884C978:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16212));
    ctx.set_gpr(31, 0x0884C990u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884C990u) goto L_0884C990;
    return;
L_0884C990:
    ctx.set_gpr(31, 0x0884C998u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D4B0;
L_0884C998:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C9A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_0884C65C;
L_0884C9A4:
    ctx.set_gpr(31, 0x0884C9ACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    goto L_0884D4A4;
L_0884C9AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0884C9B8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    goto L_0884D468;
L_0884C9B8:
    ctx.set_gpr(31, 0x0884C9C0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_0884D460;
L_0884C9C0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C9CCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_0884D458;
L_0884C9CC:
    ctx.set_gpr(31, 0x0884C9D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D448;
L_0884C9D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884C9E0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D440;
L_0884C9E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884C9ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884D410;
L_0884C9EC:
    ctx.set_gpr(31, 0x0884C9F4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D408;
L_0884C9F4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CA00u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_0884D400;
L_0884CA00:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884CA0Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884D3D0;
L_0884CA0C:
    ctx.set_gpr(31, 0x0884CA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CA14u) goto L_0884CA14;
    return;
L_0884CA14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CA20u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884CA20u) goto L_0884CA20;
    return;
L_0884CA20:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884CA30;
      }
      goto L_0884CA28;
    }
L_0884CA28:
    ctx.set_gpr(31, 0x0884CA30u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0884CA30u) goto L_0884CA30;
    return;
L_0884CA30:
    ctx.set_gpr(31, 0x0884CA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CA38u) goto L_0884CA38;
    return;
L_0884CA38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0884CA48u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x0884CA48u) goto L_0884CA48;
    return;
L_0884CA48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884CA58;
    }
L_0884CA58:
    ctx.set_gpr(31, 0x0884CA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CA60u) goto L_0884CA60;
    return;
L_0884CA60:
    ctx.set_gpr(31, 0x0884CA68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884CA68u) goto L_0884CA68;
    return;
L_0884CA68:
    ctx.set_gpr(31, 0x0884CA70u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884CA70u) goto L_0884CA70;
    return;
L_0884CA70:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16232));
    ctx.set_gpr(31, 0x0884CA88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884CA88u) goto L_0884CA88;
    return;
L_0884CA88:
    ctx.set_gpr(31, 0x0884CA90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 343u, 0x08849650u>(ctx, &aot_mem) && ctx.pc == 0x0884CA90u) goto L_0884CA90;
    return;
L_0884CA90:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CA9Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0884CA9Cu) goto L_0884CA9C;
    return;
L_0884CA9C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884CAA8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884CAA8:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884CAB0;
L_0884CAB0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884CABCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884CABC:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884CAB0;
      }
      goto L_0884CACC;
    }
L_0884CACC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884CAD8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C684;
L_0884CAD8:
    ctx.set_gpr(31, 0x0884CAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CAE0u) goto L_0884CAE0;
    return;
L_0884CAE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CAECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884CAECu) goto L_0884CAEC;
    return;
L_0884CAEC:
    if (ctx.gpr[21] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0884CB00;
    }
    goto L_0884CAF4;
L_0884CAF4:
    ctx.set_gpr(31, 0x0884CAFCu);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x0884CAFCu) goto L_0884CAFC;
    return;
L_0884CAFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0884CB00;
L_0884CB00:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884CB0C;
    }
L_0884CB0C:
    ctx.set_gpr(31, 0x0884CB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CB14u) goto L_0884CB14;
    return;
L_0884CB14:
    ctx.set_gpr(31, 0x0884CB1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x0884CB1Cu) goto L_0884CB1C;
    return;
L_0884CB1C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884CB2C;
    }
L_0884CB2C:
    ctx.set_gpr(31, 0x0884CB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CB34u) goto L_0884CB34;
    return;
L_0884CB34:
    ctx.set_gpr(31, 0x0884CB3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884CB3Cu) goto L_0884CB3C;
    return;
L_0884CB3C:
    ctx.set_gpr(31, 0x0884CB44u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884CB44u) goto L_0884CB44;
    return;
L_0884CB44:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16212));
    ctx.set_gpr(31, 0x0884CB5Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884CB5Cu) goto L_0884CB5C;
    return;
L_0884CB5C:
    ctx.set_gpr(31, 0x0884CB64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D4B0;
L_0884CB64:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CB70u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0884C65C;
L_0884CB70:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884CB78;
L_0884CB78:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884CB84u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884CB84:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884CB78;
      }
      goto L_0884CB94;
    }
L_0884CB94:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x0884CBA4u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    goto L_0884D3C4;
L_0884CBA4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884CBB0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    goto L_0884D388;
L_0884CBB0:
    ctx.set_gpr(31, 0x0884CBB8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884CBB8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884CBD0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884D458;
L_0884CBD0:
    ctx.set_gpr(31, 0x0884CBD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D370;
L_0884CBD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CBE4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D368;
L_0884CBE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884CBF0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 576u, 0x08A2B0F0u>(ctx, &aot_mem) && ctx.pc == 0x0884CBF0u) goto L_0884CBF0;
    return;
L_0884CBF0:
    ctx.set_gpr(31, 0x0884CBF8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D408;
L_0884CBF8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CC04u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_0884D360;
L_0884CC04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884CC10u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 23u, 0x08A282ACu>(ctx, &aot_mem) && ctx.pc == 0x0884CC10u) goto L_0884CC10;
    return;
L_0884CC10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884CC24u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884D458;
L_0884CC24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CC30u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D31C;
L_0884CC30:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CC3Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0884D2F4;
L_0884CC3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.set_gpr(31, 0x0884CC74u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    goto L_0884D380;
L_0884CC74:
    ctx.set_gpr(31, 0x0884CC7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 778u, 0x08A2BFE8u>(ctx, &aot_mem) && ctx.pc == 0x0884CC7Cu) goto L_0884CC7C;
    return;
L_0884CC7C:
    ctx.set_gpr(31, 0x0884CC84u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884CC84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CC90u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 717u, 0x08A2BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CC90u) goto L_0884CC90;
    return;
L_0884CC90:
    ctx.set_gpr(31, 0x0884CC98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    goto L_0884D2E8;
L_0884CC98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x0884CCA4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    goto L_0884D2AC;
L_0884CCA4:
    ctx.set_gpr(31, 0x0884CCACu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D408;
L_0884CCAC:
    ctx.set_gpr(31, 0x0884CCB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D260;
L_0884CCB4:
    ctx.set_gpr(31, 0x0884CCBCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D204;
L_0884CCBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
        goto L_0884CCE0;
    }
    goto L_0884CCC8;
L_0884CCC8:
    ctx.set_gpr(31, 0x0884CCD0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_0884D1FC;
L_0884CCD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CCDCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 779u, 0x08947920u>(ctx, &aot_mem) && ctx.pc == 0x0884CCDCu) goto L_0884CCDC;
    return;
L_0884CCDC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884CCE0;
L_0884CCE0:
    ctx.set_gpr(31, 0x0884CCE8u);
    // nop
    goto L_0884D408;
L_0884CCE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CCF4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_0884D1F4;
L_0884CCF4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884CD00u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884D1C4;
L_0884CD00:
    ctx.set_gpr(31, 0x0884CD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CD08u) goto L_0884CD08;
    return;
L_0884CD08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CD14u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884CD14u) goto L_0884CD14;
    return;
L_0884CD14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884CE1C;
      }
      goto L_0884CD24;
    }
L_0884CD24:
    ctx.set_gpr(31, 0x0884CD2Cu);
    // nop
    goto L_0884D1B8;
L_0884CD2C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884CD38u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    goto L_0884D17C;
L_0884CD38:
    ctx.set_gpr(31, 0x0884CD40u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D174;
L_0884CD40:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
        goto L_0884CD70;
    }
    goto L_0884CD48;
L_0884CD48:
    ctx.set_gpr(31, 0x0884CD50u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CD50u) goto L_0884CD50;
    return;
L_0884CD50:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CD5Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D174;
L_0884CD5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884CD68u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884CD68u) goto L_0884CD68;
    return;
L_0884CD68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_0884CD9C;
      }
      goto L_0884CD70;
    }
L_0884CD70:
    ctx.set_gpr(31, 0x0884CD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CD78u) goto L_0884CD78;
    return;
L_0884CD78:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884CD84u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884CD84u) goto L_0884CD84;
    return;
L_0884CD84:
    ctx.set_gpr(31, 0x0884CD8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884CD8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884CD98u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884CD98u) goto L_0884CD98;
    return;
L_0884CD98:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(148));
    goto L_0884CD9C;
L_0884CD9C:
    ctx.set_gpr(31, 0x0884CDA4u);
    // nop
    goto L_0884D15C;
L_0884CDA4:
    ctx.set_gpr(31, 0x0884CDACu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(160));
    goto L_0884D15C;
L_0884CDAC:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0884CDCCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884CDCCu) goto L_0884CDCC;
    return;
L_0884CDCC:
    ctx.set_gpr(31, 0x0884CDD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0884CDD4u) goto L_0884CDD4;
    return;
L_0884CDD4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884CDE4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_0884D128;
L_0884CDE4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0884CDF0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF50;
L_0884CDF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x0884CDFCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF00;
L_0884CDFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0884CE08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CEB0;
L_0884CE08:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x0884CE14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884C6E0;
L_0884CE14:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884CE5C;
      }
      goto L_0884CE1C;
    }
L_0884CE1C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884CE20;
L_0884CE20:
    ctx.set_gpr(31, 0x0884CE28u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884CE80;
L_0884CE28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0884CE34u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF50;
L_0884CE34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x0884CE40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF00;
L_0884CE40:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x0884CE4Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CEB0;
L_0884CE4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x0884CE58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884C6E0;
L_0884CE58:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884CE5C;
L_0884CE5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CE80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884CE9Cu);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x0884CE9Cu) goto L_0884CE9C;
    return;
L_0884CE9C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CEB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884CEE8;
      }
      goto L_0884CECC;
    }
L_0884CECC:
    ctx.set_gpr(31, 0x0884CED4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CED4u) goto L_0884CED4;
    return;
L_0884CED4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884CEEC;
    }
    goto L_0884CEE0;
L_0884CEE0:
    ctx.set_gpr(31, 0x0884CEE8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884CEE8u) goto L_0884CEE8;
    return;
L_0884CEE8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884CEEC;
L_0884CEEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CF00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884CF38;
      }
      goto L_0884CF1C;
    }
L_0884CF1C:
    ctx.set_gpr(31, 0x0884CF24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884CF24u) goto L_0884CF24;
    return;
L_0884CF24:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884CF3C;
    }
    goto L_0884CF30;
L_0884CF30:
    ctx.set_gpr(31, 0x0884CF38u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884CF38u) goto L_0884CF38;
    return;
L_0884CF38:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884CF3C;
L_0884CF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CF50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884CFD0;
      }
      goto L_0884CF6C;
    }
L_0884CF6C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31000));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884CF80u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D2F4;
L_0884CF80:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884CF8Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D100;
L_0884CF8C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0884CF98u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D0D8;
L_0884CF98:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0884CFA4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884D088;
L_0884CFA4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884CFB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884D038;
L_0884CFB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884CFBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CFE8;
L_0884CFBC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884CFD4;
    }
    goto L_0884CFC8;
L_0884CFC8:
    ctx.set_gpr(31, 0x0884CFD0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884CFD0u) goto L_0884CFD0;
    return;
L_0884CFD0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884CFD4;
L_0884CFD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884CFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884D020;
      }
      goto L_0884D004;
    }
L_0884D004:
    ctx.set_gpr(31, 0x0884D00Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D00Cu) goto L_0884D00C;
    return;
L_0884D00C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884D024;
    }
    goto L_0884D018;
L_0884D018:
    ctx.set_gpr(31, 0x0884D020u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884D020u) goto L_0884D020;
    return;
L_0884D020:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884D024;
L_0884D024:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D038:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884D070;
      }
      goto L_0884D054;
    }
L_0884D054:
    ctx.set_gpr(31, 0x0884D05Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D05Cu) goto L_0884D05C;
    return;
L_0884D05C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884D074;
    }
    goto L_0884D068;
L_0884D068:
    ctx.set_gpr(31, 0x0884D070u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884D070u) goto L_0884D070;
    return;
L_0884D070:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884D074;
L_0884D074:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884D0C0;
      }
      goto L_0884D0A4;
    }
L_0884D0A4:
    ctx.set_gpr(31, 0x0884D0ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D0ACu) goto L_0884D0AC;
    return;
L_0884D0AC:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884D0C4;
    }
    goto L_0884D0B8;
L_0884D0B8:
    ctx.set_gpr(31, 0x0884D0C0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884D0C0u) goto L_0884D0C0;
    return;
L_0884D0C0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884D0C4;
L_0884D0C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D0D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D0ECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884D0ECu) goto L_0884D0EC;
    return;
L_0884D0EC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D100:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D114u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884D114u) goto L_0884D114;
    return;
L_0884D114:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884D148u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x0884D148u) goto L_0884D148;
    return;
L_0884D148:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D15C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D16C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D174:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D17C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D190u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884D1B0;
L_0884D190:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D19Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D19Cu) goto L_0884D19C;
    return;
L_0884D19C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D1B0:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 741u, 0x08A073BCu>(ctx, &aot_mem); return;
L_0884D1B8:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D1C4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_0884D1CC;
L_0884D1CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D1E0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884D1E0u) goto L_0884D1E0;
    return;
L_0884D1E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D1F4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D1FC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0884D244;
    }
    goto L_0884D21C;
L_0884D21C:
    ctx.set_gpr(31, 0x0884D224u);
    // nop
    goto L_0884D254;
L_0884D224:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D230u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D230u) goto L_0884D230;
    return;
L_0884D230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D240;
      }
      goto L_0884D238;
    }
L_0884D238:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0884D244;
      }
      goto L_0884D240;
    }
L_0884D240:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884D244;
L_0884D244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D254:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26660)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0884D270u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(44));
    goto L_0884D460;
L_0884D270:
    ctx.set_gpr(31, 0x0884D278u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D29C;
L_0884D278:
    ctx.set_gpr(31, 0x0884D280u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D28C;
L_0884D280:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D28C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16));
    goto L_0884D294;
L_0884D294:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D29C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_0884D2A4;
L_0884D2A4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D2AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D2C0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884D2E0;
L_0884D2C0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D2CCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D2CCu) goto L_0884D2CC;
    return;
L_0884D2CC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D2E0:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem); return;
L_0884D2E8:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D2F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D308u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884D308u) goto L_0884D308;
    return;
L_0884D308:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D31C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884D334u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    goto L_0884D358;
L_0884D334:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D340u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D350;
L_0884D340:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D350:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_0884D358:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D360:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D368:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_0884D370:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_0884D378;
L_0884D378:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D380:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D388:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D39Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884D3BC;
L_0884D39C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D3A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D3A8u) goto L_0884D3A8;
    return;
L_0884D3A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D3BC:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 172u, 0x08A24F24u>(ctx, &aot_mem); return;
L_0884D3C4:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D3D0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(44));
    goto L_0884D3D8;
L_0884D3D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D3ECu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884D3ECu) goto L_0884D3EC;
    return;
L_0884D3EC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D400:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D408:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D410:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_0884D418;
L_0884D418:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D42Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884D42Cu) goto L_0884D42C;
    return;
L_0884D42C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D440:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_0884D448:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    goto L_0884D450;
L_0884D450:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D458:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D460:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D47Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884D49C;
L_0884D47C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D488u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D488u) goto L_0884D488;
    return;
L_0884D488:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D49C:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 495u, 0x08A229FCu>(ctx, &aot_mem); return;
L_0884D4A4:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D4B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0884D4F0;
    }
    goto L_0884D4C8;
L_0884D4C8:
    ctx.set_gpr(31, 0x0884D4D0u);
    // nop
    goto L_0884D500;
L_0884D4D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D4DCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D4DCu) goto L_0884D4DC;
    return;
L_0884D4DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D4EC;
      }
      goto L_0884D4E4;
    }
L_0884D4E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0884D4F0;
      }
      goto L_0884D4EC;
    }
L_0884D4EC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884D4F0;
L_0884D4F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D500:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22812)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D50C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884D520u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884D540;
L_0884D520:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D52Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D52Cu) goto L_0884D52C;
    return;
L_0884D52C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D540:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 591u, 0x08A27330u>(ctx, &aot_mem); return;
L_0884D548:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31000));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884D574u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_0884D634;
L_0884D574:
    ctx.set_gpr(31, 0x0884D57Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_0884D628;
L_0884D57C:
    ctx.set_gpr(31, 0x0884D584u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_0884D61C;
L_0884D584:
    ctx.set_gpr(31, 0x0884D58Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884D5A0;
L_0884D58C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D5A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884D5B8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D2F4;
L_0884D5B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884D5E0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D100;
L_0884D5E0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0884D60Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    goto L_0884D0D8;
L_0884D60C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D61C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D628:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D634:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D640:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D64C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884D678u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884D678u) goto L_0884D678;
    return;
L_0884D678:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884D70C;
    }
    goto L_0884D680;
L_0884D680:
    ctx.set_gpr(31, 0x0884D688u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884D720;
L_0884D688:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884D694u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0884D694u) goto L_0884D694;
    return;
L_0884D694:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    goto L_0884D69C;
L_0884D69C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884D6A8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884D6A8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884D69C;
      }
      goto L_0884D6B8;
    }
L_0884D6B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884D6C8u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    goto L_0884D360;
L_0884D6C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
        goto L_0884D6F0;
    }
    goto L_0884D6D0;
L_0884D6D0:
    ctx.set_gpr(31, 0x0884D6D8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884D6D8:
    ctx.set_gpr(31, 0x0884D6E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 778u, 0x08A2BFE8u>(ctx, &aot_mem) && ctx.pc == 0x0884D6E0u) goto L_0884D6E0;
    return;
L_0884D6E0:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884D6ECu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C684;
L_0884D6EC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0884D6F0;
L_0884D6F0:
    ctx.set_gpr(31, 0x0884D6F8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C6AC;
L_0884D6F8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884D704u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0884D704u) goto L_0884D704;
    return;
L_0884D704:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884D70C;
L_0884D70C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D720:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x0884D73Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884D73Cu) goto L_0884D73C;
    return;
L_0884D73C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884D818;
    }
    goto L_0884D744;
L_0884D744:
    ctx.set_gpr(31, 0x0884D74Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D174;
L_0884D74C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
        goto L_0884D7A8;
    }
    goto L_0884D754;
L_0884D754:
    ctx.set_gpr(31, 0x0884D75Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D75Cu) goto L_0884D75C;
    return;
L_0884D75C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D768u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0884D174;
L_0884D768:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D774u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884D828;
L_0884D774:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0884D814;
      }
      goto L_0884D780;
    }
L_0884D780:
    ctx.set_gpr(31, 0x0884D788u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D788u) goto L_0884D788;
    return;
L_0884D788:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884D794u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0884D174;
L_0884D794:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D7A0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0884D7A0u) goto L_0884D7A0;
    return;
L_0884D7A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D814;
      }
      goto L_0884D7A8;
    }
L_0884D7A8:
    ctx.set_gpr(31, 0x0884D7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 355u, 0x088496F4u>(ctx, &aot_mem) && ctx.pc == 0x0884D7B0u) goto L_0884D7B0;
    return;
L_0884D7B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D814;
      }
      goto L_0884D7B8;
    }
L_0884D7B8:
    ctx.set_gpr(31, 0x0884D7C0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D7C0u) goto L_0884D7C0;
    return;
L_0884D7C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D7CCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884D7CCu) goto L_0884D7CC;
    return;
L_0884D7CC:
    ctx.set_gpr(31, 0x0884D7D4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884D7D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D7E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884D828;
L_0884D7E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0884D814;
      }
      goto L_0884D7EC;
    }
L_0884D7EC:
    ctx.set_gpr(31, 0x0884D7F4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884D7F4u) goto L_0884D7F4;
    return;
L_0884D7F4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884D800u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884D800u) goto L_0884D800;
    return;
L_0884D800:
    ctx.set_gpr(31, 0x0884D808u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884D808:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D814u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 253u, 0x08A493B8u>(ctx, &aot_mem) && ctx.pc == 0x0884D814u) goto L_0884D814;
    return;
L_0884D814:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884D818;
L_0884D818:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884D840u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 426u, 0x08849A58u>(ctx, &aot_mem) && ctx.pc == 0x0884D840u) goto L_0884D840;
    return;
L_0884D840:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884D850u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0884D860;
L_0884D850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D860:
    // nop
    goto L_0884D868;
L_0884D868:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(31, 0x0884D87Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_0884D888;
L_0884D87C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_0884D8F4;
      }
      goto L_0884D8C0;
    }
L_0884D8C0:
    ctx.set_gpr(18, ctx.gpr[6] << 2u);
    goto L_0884D8C4;
L_0884D8C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0884D8D0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_0884D91C;
L_0884D8D0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0884D8E8;
    }
    goto L_0884D8E0;
L_0884D8E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_0884D8F8;
      }
      goto L_0884D8E8;
    }
L_0884D8E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884D8C4;
      }
      goto L_0884D8F4;
    }
L_0884D8F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884D8F8;
L_0884D8F8:
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
L_0884D91C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884D924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0884D94Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0884D554;
L_0884D94C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884DB6C;
      }
      goto L_0884D95C;
    }
L_0884D95C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884D9F4;
      }
      goto L_0884D968;
    }
L_0884D968:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884D9CC;
      }
      goto L_0884D974;
    }
L_0884D974:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884D984;
      }
      goto L_0884D97C;
    }
L_0884D97C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_0884DBE4;
      }
      goto L_0884D984;
    }
L_0884D984:
    ctx.set_gpr(31, 0x0884D98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884D98Cu) goto L_0884D98C;
    return;
L_0884D98C:
    ctx.set_gpr(31, 0x0884D994u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0884D994u) goto L_0884D994;
    return;
L_0884D994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DBE0;
      }
      goto L_0884D99C;
    }
L_0884D99C:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884D9ACu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884DC08;
L_0884D9AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0884D9C4;
    }
    goto L_0884D9B4;
L_0884D9B4:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884D9C0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884DC10;
L_0884D9C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0884D9C4;
L_0884D9C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884D9CC;
L_0884D9CC:
    ctx.set_gpr(31, 0x0884D9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884D9D4u) goto L_0884D9D4;
    return;
L_0884D9D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884D9E4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x0884D9E4u) goto L_0884D9E4;
    return;
L_0884D9E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884DBE0;
      }
      goto L_0884D9F4;
    }
L_0884D9F4:
    ctx.set_gpr(31, 0x0884D9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884D9FCu) goto L_0884D9FC;
    return;
L_0884D9FC:
    ctx.set_gpr(31, 0x0884DA04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x0884DA04u) goto L_0884DA04;
    return;
L_0884DA04:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884DBE0;
      }
      goto L_0884DA14;
    }
L_0884DA14:
    ctx.set_gpr(31, 0x0884DA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884DA1Cu) goto L_0884DA1C;
    return;
L_0884DA1C:
    ctx.set_gpr(31, 0x0884DA24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884DA24u) goto L_0884DA24;
    return;
L_0884DA24:
    ctx.set_gpr(31, 0x0884DA2Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884DA2Cu) goto L_0884DA2C;
    return;
L_0884DA2C:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16212));
    ctx.set_gpr(31, 0x0884DA44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884DA44u) goto L_0884DA44;
    return;
L_0884DA44:
    ctx.set_gpr(31, 0x0884DA4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D4B0;
L_0884DA4C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884DA60u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884C65C;
L_0884DA60:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0884DB60;
    }
    goto L_0884DA68;
L_0884DA68:
    ctx.set_gpr(31, 0x0884DA70u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884D3C4;
L_0884DA70:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884DA7Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884D388;
L_0884DA7C:
    ctx.set_gpr(31, 0x0884DA84u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884DA84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884DA9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884D458;
L_0884DA9C:
    ctx.set_gpr(31, 0x0884DAA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D370;
L_0884DAA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DAB0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D368;
L_0884DAB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884DABCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 576u, 0x08A2B0F0u>(ctx, &aot_mem) && ctx.pc == 0x0884DABCu) goto L_0884DABC;
    return;
L_0884DABC:
    ctx.set_gpr(31, 0x0884DAC4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    goto L_0884D408;
L_0884DAC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DAD0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884D360;
L_0884DAD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884DADCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 23u, 0x08A282ACu>(ctx, &aot_mem) && ctx.pc == 0x0884DADCu) goto L_0884DADC;
    return;
L_0884DADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884DAF0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884D458;
L_0884DAF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DAFCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D31C;
L_0884DAFC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DB08u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0884D2F4;
L_0884DB08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x0884DB40u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    goto L_0884D380;
L_0884DB40:
    ctx.set_gpr(31, 0x0884DB48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 778u, 0x08A2BFE8u>(ctx, &aot_mem) && ctx.pc == 0x0884DB48u) goto L_0884DB48;
    return;
L_0884DB48:
    ctx.set_gpr(31, 0x0884DB50u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884DB50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DB5Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 717u, 0x08A2BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0884DB5Cu) goto L_0884DB5C;
    return;
L_0884DB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0884DB60;
L_0884DB60:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884DBE0;
      }
      goto L_0884DB6C;
    }
L_0884DB6C:
    ctx.set_gpr(31, 0x0884DB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884DB74u) goto L_0884DB74;
    return;
L_0884DB74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DB80u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884DB80u) goto L_0884DB80;
    return;
L_0884DB80:
    ctx.set_gpr(31, 0x0884DB88u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(148));
    goto L_0884D15C;
L_0884DB88:
    ctx.set_gpr(31, 0x0884DB90u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(160));
    goto L_0884D15C;
L_0884DB90:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884DBB8;
      }
      goto L_0884DBB0;
    }
L_0884DBB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    goto L_0884DBB8;
L_0884DBB8:
    ctx.set_gpr(31, 0x0884DBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884DBC0u) goto L_0884DBC0;
    return;
L_0884DBC0:
    ctx.set_gpr(31, 0x0884DBC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0884DBC8u) goto L_0884DBC8;
    return;
L_0884DBC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0884DBD8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_0884CF50;
L_0884DBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884DBF0;
      }
      goto L_0884DBE0;
    }
L_0884DBE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_0884DBE4;
L_0884DBE4:
    ctx.set_gpr(31, 0x0884DBECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF50;
L_0884DBEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884DBF0;
L_0884DBF0:
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
L_0884DC08:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DC10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884DC40u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884DC40:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884DC94;
    }
    goto L_0884DC48;
L_0884DC48:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0884DC50;
L_0884DC50:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884DC5Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C65C;
L_0884DC5C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 30 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884DC50;
      }
      goto L_0884DC6C;
    }
L_0884DC6C:
    ctx.set_gpr(31, 0x0884DC74u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884DC74:
    ctx.set_gpr(31, 0x0884DC7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 778u, 0x08A2BFE8u>(ctx, &aot_mem) && ctx.pc == 0x0884DC7Cu) goto L_0884DC7C;
    return;
L_0884DC7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884DC88u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884C684;
L_0884DC88:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884DC94;
L_0884DC94:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DCA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884DCC8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0884D554;
L_0884DCC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
        goto L_0884DD24;
    }
    goto L_0884DCD4;
L_0884DCD4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884DCE0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    goto L_0884D380;
L_0884DCE0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884DCF8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    goto L_0884D458;
L_0884DCF8:
    ctx.set_gpr(31, 0x0884DD00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D370;
L_0884DD00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DD0Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884D368;
L_0884DD0C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884DD18u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 576u, 0x08A2B0F0u>(ctx, &aot_mem) && ctx.pc == 0x0884DD18u) goto L_0884DD18;
    return;
L_0884DD18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0884DD24;
L_0884DD24:
    ctx.set_gpr(31, 0x0884DD2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF50;
L_0884DD2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DD40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_0884DDA0;
      }
      goto L_0884DD88;
    }
L_0884DD88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    if (ctx.gpr[23] != ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
        goto L_0884DDA4;
    }
    goto L_0884DD94;
L_0884DD94:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0884DF44;
    }
    goto L_0884DDA0;
L_0884DDA0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    goto L_0884DDA4;
L_0884DDA4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
        goto L_0884DDBC;
    }
    goto L_0884DDAC;
L_0884DDAC:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    goto L_0884DDBC;
L_0884DDBC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0884DDC8u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_0884DF80;
L_0884DDC8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DDD4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884D554;
L_0884DDD4:
    if (ctx.gpr[18] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_0884DDF0;
    }
    goto L_0884DDDC;
L_0884DDDC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x0884DDE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884CF50;
L_0884DDE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DF40;
      }
      goto L_0884DDF0;
    }
L_0884DDF0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_0884DE44;
    }
    goto L_0884DE00;
L_0884DE00:
    ctx.set_gpr(31, 0x0884DE08u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884DE08:
    ctx.set_gpr(31, 0x0884DE10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 778u, 0x08A2BFE8u>(ctx, &aot_mem) && ctx.pc == 0x0884DE10u) goto L_0884DE10;
    return;
L_0884DE10:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884DE1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884D2F4;
L_0884DE1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884DF1C;
      }
      goto L_0884DE44;
    }
L_0884DE44:
    ctx.set_gpr(31, 0x0884DE4Cu);
    // nop
    goto L_0884DF74;
L_0884DE4C:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 20078u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 27432u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15496u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 34953u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x0884DE80u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x0884DE80u) goto L_0884DE80;
    return;
L_0884DE80:
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0884DEB0;
      }
      goto L_0884DE90;
    }
L_0884DE90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(30, ctx.gpr[17] + 0u);
        goto L_0884DEAC;
    }
    goto L_0884DE9C;
L_0884DE9C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[30] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_0884DEB4;
    }
    goto L_0884DEA8;
L_0884DEA8:
    ctx.set_gpr(30, ctx.gpr[17] + 0u);
    goto L_0884DEAC;
L_0884DEAC:
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    goto L_0884DEB0;
L_0884DEB0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_0884DEB4;
L_0884DEB4:
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
        goto L_0884DEE0;
    }
    goto L_0884DEBC;
L_0884DEBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
        goto L_0884DED8;
    }
    goto L_0884DEC8;
L_0884DEC8:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884DEDC;
      }
      goto L_0884DED4;
    }
L_0884DED4:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    goto L_0884DED8;
L_0884DED8:
    ctx.set_gpr(19, ctx.gpr[16] + 0u);
    goto L_0884DEDC;
L_0884DEDC:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_0884DEE0;
L_0884DEE0:
    ctx.set_gpr(31, 0x0884DEE8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884D2F4;
L_0884DEE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_0884DF1C;
L_0884DF1C:
    ctx.set_gpr(31, 0x0884DF24u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    goto L_0884D380;
L_0884DF24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884DF30u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 717u, 0x08A2BA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0884DF30u) goto L_0884DF30;
    return;
L_0884DF30:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0884DF40u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    goto L_0884CF50;
L_0884DF40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0884DF44;
L_0884DF44:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DF74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DF80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884DFA8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0884DC08;
L_0884DFA8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_0884DFB8;
    }
    goto L_0884DFB0;
L_0884DFB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DFB8;
    }
L_0884DFB8:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_0884DFC8;
    }
    goto L_0884DFC0;
L_0884DFC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884DFDC;
      }
      goto L_0884DFC8;
    }
L_0884DFC8:
    ctx.set_gpr(31, 0x0884DFD0u);
    // nop
    goto L_0884D458;
L_0884DFD0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884DFDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D31C;
L_0884DFDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884DFF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884E034u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884E034u) goto L_0884E034;
    return;
L_0884E034:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884E058u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884E058u) goto L_0884E058;
    return;
L_0884E058:
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
L_0884E07C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884E09Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0884E328;
L_0884E09C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
        goto L_0884E0B0;
    }
    goto L_0884E0A8;
L_0884E0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884E120;
      }
      goto L_0884E0B0;
    }
L_0884E0B0:
    ctx.set_gpr(31, 0x0884E0B8u);
    // nop
    goto L_0884D380;
L_0884E0B8:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884E0C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884E278;
L_0884E0C4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
        goto L_0884E0D4;
    }
    goto L_0884E0CC;
L_0884E0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884E120;
      }
      goto L_0884E0D4;
    }
L_0884E0D4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(31, 0x0884E0F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    goto L_0884E138;
L_0884E0F0:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_0884E10C;
    }
    goto L_0884E0F8;
L_0884E0F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0884E10C;
L_0884E10C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0884E11C;
      }
      goto L_0884E114;
    }
L_0884E114:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0884E120;
    }
    goto L_0884E11C;
L_0884E11C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884E120;
L_0884E120:
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
L_0884E138:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884E168u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0884E26C;
L_0884E168:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E178u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_0884E25C;
L_0884E178:
    ctx.set_gpr(31, 0x0884E180u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884E250;
L_0884E180:
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884E198u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_0884E25C;
L_0884E198:
    ctx.set_gpr(31, 0x0884E1A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884E244;
L_0884E1A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0884E1B0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    goto L_0884E25C;
L_0884E1B0:
    ctx.set_gpr(31, 0x0884E1B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884DF74;
L_0884E1B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0884E1DC;
      }
      goto L_0884E1C8;
    }
L_0884E1C8:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
        goto L_0884E1E0;
    }
    goto L_0884E1D0;
L_0884E1D0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_0884E220;
      }
      goto L_0884E1DC;
    }
L_0884E1DC:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_0884E1E0;
L_0884E1E0:
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[20] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[20]);
    ctx.set_gpr(31, 0x0884E1F8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x0884E1F8u) goto L_0884E1F8;
    return;
L_0884E1F8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_0884E220;
L_0884E220:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E244:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E250:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E25C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    goto L_0884E264;
L_0884E264:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E26C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x0884E2A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_0884E320;
L_0884E2A4:
    ctx.set_gpr(31, 0x0884E2ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 73u, 0x08844420u>(ctx, &aot_mem) && ctx.pc == 0x0884E2ACu) goto L_0884E2AC;
    return;
L_0884E2AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0884E2F4;
      }
      goto L_0884E2B8;
    }
L_0884E2B8:
    ctx.set_gpr(31, 0x0884E2C0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(56));
    goto L_0884E320;
L_0884E2C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E2CCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0884E318;
L_0884E2CC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E2D8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_0884E25C;
L_0884E2D8:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0884E2E8;
    }
    goto L_0884E2E0;
L_0884E2E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_0884E2F8;
      }
      goto L_0884E2E8;
    }
L_0884E2E8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E2B8;
      }
      goto L_0884E2F4;
    }
L_0884E2F4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884E2F8;
L_0884E2F8:
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
L_0884E318:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem); return;
L_0884E320:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E328:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    goto L_0884DF80;
L_0884E334:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E350;
    }
L_0884E350:
    ctx.set_gpr(31, 0x0884E358u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884E358u) goto L_0884E358;
    return;
L_0884E358:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_0884E44C;
    }
    goto L_0884E360;
L_0884E360:
    ctx.set_gpr(31, 0x0884E368u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E368u) goto L_0884E368;
    return;
L_0884E368:
    ctx.set_gpr(31, 0x0884E370u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x0884E370u) goto L_0884E370;
    return;
L_0884E370:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E37Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x0884E37Cu) goto L_0884E37C;
    return;
L_0884E37C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(172)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x0884E390u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x0884E390u) goto L_0884E390;
    return;
L_0884E390:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E39Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x0884E39Cu) goto L_0884E39C;
    return;
L_0884E39C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(31, 0x0884E3B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884E45C;
L_0884E3B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884E3BCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 737u, 0x089FFB18u>(ctx, &aot_mem) && ctx.pc == 0x0884E3BCu) goto L_0884E3BC;
    return;
L_0884E3BC:
    ctx.set_gpr(31, 0x0884E3C4u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0884E3C4u) goto L_0884E3C4;
    return;
L_0884E3C4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0884E3D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x0884E3D0u) goto L_0884E3D0;
    return;
L_0884E3D0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(148));
        goto L_0884E43C;
    }
    goto L_0884E3D8;
L_0884E3D8:
    ctx.set_gpr(31, 0x0884E3E0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0884E3E0u) goto L_0884E3E0;
    return;
L_0884E3E0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0884E3ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x0884E3ECu) goto L_0884E3EC;
    return;
L_0884E3EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E438;
      }
      goto L_0884E3F4;
    }
L_0884E3F4:
    ctx.set_gpr(31, 0x0884E3FCu);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0884E3FCu) goto L_0884E3FC;
    return;
L_0884E3FC:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0884E408u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 254u, 0x0880D4DCu>(ctx, &aot_mem) && ctx.pc == 0x0884E408u) goto L_0884E408;
    return;
L_0884E408:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884E438;
      }
      goto L_0884E410;
    }
L_0884E410:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x0884E424u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x0884E424u) goto L_0884E424;
    return;
L_0884E424:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884E430u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 751u, 0x089FFD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E430u) goto L_0884E430;
    return;
L_0884E430:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0884E448;
      }
      goto L_0884E438;
    }
L_0884E438:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(148));
    goto L_0884E43C;
L_0884E43C:
    ctx.set_gpr(31, 0x0884E444u);
    // nop
    goto L_0884D15C;
L_0884E444:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    goto L_0884E448;
L_0884E448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884E44C;
L_0884E44C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E45C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x0884E480u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 431u, 0x08849ADCu>(ctx, &aot_mem) && ctx.pc == 0x0884E480u) goto L_0884E480;
    return;
L_0884E480:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x0884E48Cu);
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 431u, 0x08849ADCu>(ctx, &aot_mem) && ctx.pc == 0x0884E48Cu) goto L_0884E48C;
    return;
L_0884E48C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884E498u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 431u, 0x08849ADCu>(ctx, &aot_mem) && ctx.pc == 0x0884E498u) goto L_0884E498;
    return;
L_0884E498:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884E4ACu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 23u, 0x08A00434u>(ctx, &aot_mem) && ctx.pc == 0x0884E4ACu) goto L_0884E4AC;
    return;
L_0884E4AC:
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
L_0884E4C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884E4DCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E4DCu) goto L_0884E4DC;
    return;
L_0884E4DC:
    ctx.set_gpr(31, 0x0884E4E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 560u, 0x0884A250u>(ctx, &aot_mem) && ctx.pc == 0x0884E4E4u) goto L_0884E4E4;
    return;
L_0884E4E4:
    ctx.set_gpr(31, 0x0884E4ECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x0884E4ECu) goto L_0884E4EC;
    return;
L_0884E4EC:
    ctx.set_gpr(31, 0x0884E4F4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(148));
    goto L_0884D15C;
L_0884E4F4:
    ctx.set_gpr(31, 0x0884E4FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    goto L_0884D15C;
L_0884E4FC:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x0884E548u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884E548u) goto L_0884E548;
    return;
L_0884E548:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
        goto L_0884E558;
    }
    goto L_0884E550;
L_0884E550:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884E5D4;
      }
      goto L_0884E558;
    }
L_0884E558:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[18] & 255u);
        goto L_0884E568;
    }
    goto L_0884E560;
L_0884E560:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884E5D4;
      }
      goto L_0884E568;
    }
L_0884E568:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_0884E58C;
    }
    goto L_0884E570;
L_0884E570:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884E588;
      }
      goto L_0884E580;
    }
L_0884E580:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884E5D4;
      }
      goto L_0884E588;
    }
L_0884E588:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_0884E58C;
L_0884E58C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
        goto L_0884E5B8;
    }
    goto L_0884E598;
L_0884E598:
    ctx.set_gpr(31, 0x0884E5A0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884E5A0u) goto L_0884E5A0;
    return;
L_0884E5A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E5B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 462u, 0x0885186Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E5B0u) goto L_0884E5B0;
    return;
L_0884E5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884E5D4;
      }
      goto L_0884E5B8;
    }
L_0884E5B8:
    ctx.set_gpr(31, 0x0884E5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884E5C0u) goto L_0884E5C0;
    return;
L_0884E5C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884E5D0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 491u, 0x088519C4u>(ctx, &aot_mem) && ctx.pc == 0x0884E5D0u) goto L_0884E5D0;
    return;
L_0884E5D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0884E5D4;
L_0884E5D4:
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
L_0884E5EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884E604u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0884D174;
L_0884E604:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
        goto L_0884E634;
    }
    goto L_0884E60C;
L_0884E60C:
    ctx.set_gpr(31, 0x0884E614u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0884D408;
L_0884E614:
    ctx.set_gpr(31, 0x0884E61Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884E65C;
L_0884E61C:
    ctx.set_gpr(31, 0x0884E624u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884D29C;
L_0884E624:
    ctx.set_gpr(31, 0x0884E62Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884E654;
L_0884E62C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0884E648;
      }
      goto L_0884E634;
    }
L_0884E634:
    ctx.set_gpr(31, 0x0884E63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884E63Cu) goto L_0884E63C;
    return;
L_0884E63C:
    ctx.set_gpr(31, 0x0884E644u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884E644:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884E648;
L_0884E648:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E654:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_0884D16C;
L_0884E65C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(44));
    goto L_0884D400;
L_0884E664:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_0884E66C;
L_0884E66C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884E68Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x0884E68Cu) goto L_0884E68C;
    return;
L_0884E68C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x0884E6D0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    goto L_0884E328;
L_0884E6D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_0884E72C;
    }
    goto L_0884E6DC;
L_0884E6DC:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0884E6E8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884E664;
L_0884E6E8:
    ctx.set_gpr(31, 0x0884E6F0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884D380;
L_0884E6F0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884E6FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884E278;
L_0884E6FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x0884E70Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884C5BC;
L_0884E70C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884E728;
      }
      goto L_0884E714;
    }
L_0884E714:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884E728u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    goto L_0884E748;
L_0884E728:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0884E72C;
L_0884E72C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(3, ctx.gpr[6] >> 18u);
    ctx.set_gpr(2, ctx.gpr[7] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884E780;
      }
      goto L_0884E774;
    }
L_0884E774:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
      if (branch_taken) {
          goto L_0884E798;
      }
      goto L_0884E780;
    }
L_0884E780:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_0884E798;
L_0884E798:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x0884E7A4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x0884E7A4u) goto L_0884E7A4;
    return;
L_0884E7A4:
    ctx.set_gpr(10, ctx.gpr[2] << 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(9, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0884E7DCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x0884E7DCu) goto L_0884E7DC;
    return;
L_0884E7DC:
    ctx.set_gpr(4, ctx.gpr[3] << 18u);
    ctx.set_gpr(3, ctx.gpr[2] >> 14u);
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, ctx.gpr[2] << 18u);
    ctx.set_gpr(5, ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
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
L_0884E828:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884E840u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 304u, 0x08849458u>(ctx, &aot_mem) && ctx.pc == 0x0884E840u) goto L_0884E840;
    return;
L_0884E840:
    ctx.set_gpr(31, 0x0884E848u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_0884C6D4;
L_0884E848:
    ctx.set_gpr(31, 0x0884E850u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    goto L_0884EA90;
L_0884E850:
    ctx.set_gpr(31, 0x0884E858u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_0884EA84;
L_0884E858:
    ctx.set_gpr(31, 0x0884E860u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    goto L_0884C6D4;
L_0884E860:
    ctx.set_gpr(31, 0x0884E868u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    goto L_0884EA78;
L_0884E868:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0884E878u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0884E878u) goto L_0884E878;
    return;
L_0884E878:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884E884u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0884E884u) goto L_0884E884;
    return;
L_0884E884:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884E890u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884EA50;
L_0884E890:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884E89Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884EA28;
L_0884E89C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884E8A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 577u, 0x0884A344u>(ctx, &aot_mem) && ctx.pc == 0x0884E8A8u) goto L_0884E8A8;
    return;
L_0884E8A8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0884E8B4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884EA00;
L_0884E8B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x0884E8E4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    goto L_0884D15C;
L_0884E8E4:
    ctx.set_gpr(31, 0x0884E8ECu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    goto L_0884D15C;
L_0884E8EC:
    ctx.set_gpr(31, 0x0884E8F4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(96));
    goto L_0884D15C;
L_0884E8F4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884E948;
      }
      goto L_0884E92C;
    }
L_0884E92C:
    ctx.set_gpr(31, 0x0884E934u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E934u) goto L_0884E934;
    return;
L_0884E934:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884E94C;
    }
    goto L_0884E940;
L_0884E940:
    ctx.set_gpr(31, 0x0884E948u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884E948u) goto L_0884E948;
    return;
L_0884E948:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884E94C;
L_0884E94C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884E998;
      }
      goto L_0884E97C;
    }
L_0884E97C:
    ctx.set_gpr(31, 0x0884E984u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E984u) goto L_0884E984;
    return;
L_0884E984:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884E99C;
    }
    goto L_0884E990;
L_0884E990:
    ctx.set_gpr(31, 0x0884E998u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884E998u) goto L_0884E998;
    return;
L_0884E998:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884E99C;
L_0884E99C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884E9B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884E9E8;
      }
      goto L_0884E9CC;
    }
L_0884E9CC:
    ctx.set_gpr(31, 0x0884E9D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884E9D4u) goto L_0884E9D4;
    return;
L_0884E9D4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884E9EC;
    }
    goto L_0884E9E0;
L_0884E9E0:
    ctx.set_gpr(31, 0x0884E9E8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884E9E8u) goto L_0884E9E8;
    return;
L_0884E9E8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884E9EC;
L_0884E9EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884EA14u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884EA14u) goto L_0884EA14;
    return;
L_0884EA14:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884EA3Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884EA3Cu) goto L_0884EA3C;
    return;
L_0884EA3C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884EA64u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884EA64u) goto L_0884EA64;
    return;
L_0884EA64:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA78:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA84:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA90:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EA9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884EB14;
      }
      goto L_0884EAB8;
    }
L_0884EAB8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0884EAC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884E910;
L_0884EAC4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884EAD0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0884EAD0u) goto L_0884EAD0;
    return;
L_0884EAD0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884EADCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884E960;
L_0884EADC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884EAE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884E9B0;
L_0884EAE8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884EAF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x0884EAF4u) goto L_0884EAF4;
    return;
L_0884EAF4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884EB00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x0884EB00u) goto L_0884EB00;
    return;
L_0884EB00:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884EB18;
    }
    goto L_0884EB0C;
L_0884EB0C:
    ctx.set_gpr(31, 0x0884EB14u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0884EB2C;
L_0884EB14:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884EB18;
L_0884EB18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EB2C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_0884EB34:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EB3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0884EBD0;
      }
      goto L_0884EB68;
    }
L_0884EB68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884EBA8;
      }
      goto L_0884EB74;
    }
L_0884EB74:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EB84;
      }
      goto L_0884EB7C;
    }
L_0884EB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884EBFC;
      }
      goto L_0884EB84;
    }
L_0884EB84:
    ctx.set_gpr(31, 0x0884EB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884EB8Cu) goto L_0884EB8C;
    return;
L_0884EB8C:
    ctx.set_gpr(31, 0x0884EB94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0884EB94u) goto L_0884EB94;
    return;
L_0884EB94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EBF8;
      }
      goto L_0884EB9C;
    }
L_0884EB9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884EBA8;
L_0884EBA8:
    ctx.set_gpr(31, 0x0884EBB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884EBB0u) goto L_0884EBB0;
    return;
L_0884EBB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884EBC0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x0884EBC0u) goto L_0884EBC0;
    return;
L_0884EBC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884EBF8;
      }
      goto L_0884EBD0;
    }
L_0884EBD0:
    ctx.set_gpr(31, 0x0884EBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884EBD8u) goto L_0884EBD8;
    return;
L_0884EBD8:
    ctx.set_gpr(31, 0x0884EBE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x0884EBE0u) goto L_0884EBE0;
    return;
L_0884EBE0:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884EBF8;
      }
      goto L_0884EBF0;
    }
L_0884EBF0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0884EBFC;
      }
      goto L_0884EBF8;
    }
L_0884EBF8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884EBFC;
L_0884EBFC:
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
L_0884EC14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884EC28u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884EC28u) goto L_0884EC28;
    return;
L_0884EC28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EC34u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884EC34u) goto L_0884EC34;
    return;
L_0884EC34:
    ctx.set_gpr(31, 0x0884EC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884EC3Cu) goto L_0884EC3C;
    return;
L_0884EC3C:
    ctx.set_gpr(31, 0x0884EC44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0884EC44u) goto L_0884EC44;
    return;
L_0884EC44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884EC54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0884EC98u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884F3D4;
L_0884EC98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_0884F144;
    }
    goto L_0884ECA8;
L_0884ECA8:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8452));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884ECC4:
    ctx.set_gpr(31, 0x0884ECCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884ECCCu) goto L_0884ECCC;
    return;
L_0884ECCC:
    ctx.set_gpr(31, 0x0884ECD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x0884ECD4u) goto L_0884ECD4;
    return;
L_0884ECD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F140;
      }
      goto L_0884ECDC;
    }
L_0884ECDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0884ECE8;
L_0884ECE8:
    ctx.set_gpr(31, 0x0884ECF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884ECF0u) goto L_0884ECF0;
    return;
L_0884ECF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884ED00u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 27u, 0x08AB0148u>(ctx, &aot_mem) && ctx.pc == 0x0884ED00u) goto L_0884ED00;
    return;
L_0884ED00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884F140;
      }
      goto L_0884ED10;
    }
L_0884ED10:
    ctx.set_gpr(31, 0x0884ED18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884ED18u) goto L_0884ED18;
    return;
L_0884ED18:
    ctx.set_gpr(31, 0x0884ED20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 61u, 0x08AB0304u>(ctx, &aot_mem) && ctx.pc == 0x0884ED20u) goto L_0884ED20;
    return;
L_0884ED20:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0884F140;
      }
      goto L_0884ED30;
    }
L_0884ED30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884F140;
      }
      goto L_0884ED40;
    }
L_0884ED40:
    ctx.set_gpr(31, 0x0884ED48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884ED48u) goto L_0884ED48;
    return;
L_0884ED48:
    ctx.set_gpr(31, 0x0884ED50u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884ED50u) goto L_0884ED50;
    return;
L_0884ED50:
    ctx.set_gpr(31, 0x0884ED58u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884ED58u) goto L_0884ED58;
    return;
L_0884ED58:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16296));
    ctx.set_gpr(31, 0x0884ED70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884ED70u) goto L_0884ED70;
    return;
L_0884ED70:
    ctx.set_gpr(31, 0x0884ED78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 343u, 0x08849650u>(ctx, &aot_mem) && ctx.pc == 0x0884ED78u) goto L_0884ED78;
    return;
L_0884ED78:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884ED84u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0884ED84u) goto L_0884ED84;
    return;
L_0884ED84:
    ctx.set_gpr(31, 0x0884ED8Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884ED8Cu) goto L_0884ED8C;
    return;
L_0884ED8C:
    ctx.set_gpr(31, 0x0884ED94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884F3C8;
L_0884ED94:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + 0u);
    goto L_0884EDC0;
L_0884EDC0:
    ctx.set_gpr(31, 0x0884EDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884EDC8u) goto L_0884EDC8;
    return;
L_0884EDC8:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16308));
    ctx.set_gpr(31, 0x0884EDE0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884EDE0u) goto L_0884EDE0;
    return;
L_0884EDE0:
    ctx.set_gpr(31, 0x0884EDE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884F36C;
L_0884EDE8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EDF4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F344;
L_0884EDF4:
    ctx.set_gpr(31, 0x0884EDFCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F33C;
L_0884EDFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884EE54;
      }
      goto L_0884EE04;
    }
L_0884EE04:
    ctx.set_gpr(31, 0x0884EE0Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    goto L_0884F334;
L_0884EE0C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
        goto L_0884EE2C;
    }
    goto L_0884EE14;
L_0884EE14:
    ctx.set_gpr(31, 0x0884EE1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0884F328;
L_0884EE1C:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0884EE28u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0884F2EC;
L_0884EE28:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    goto L_0884EE2C;
L_0884EE2C:
    ctx.set_gpr(31, 0x0884EE34u);
    // nop
    goto L_0884F2E4;
L_0884EE34:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EE40u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F33C;
L_0884EE40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884EE4Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884F2DC;
L_0884EE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884EDC0;
      }
      goto L_0884EE54;
    }
L_0884EE54:
    ctx.set_gpr(31, 0x0884EE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884EE5Cu) goto L_0884EE5C;
    return;
L_0884EE5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EE68u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884EE68u) goto L_0884EE68;
    return;
L_0884EE68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884F140;
      }
      goto L_0884EE78;
    }
L_0884EE78:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0884EFE8;
      }
      goto L_0884EE80;
    }
L_0884EE80:
    ctx.set_gpr(31, 0x0884EE88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0884D1B8;
L_0884EE88:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884EE94u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0884F2A8;
L_0884EE94:
    ctx.set_gpr(31, 0x0884EE9Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EE9Cu) goto L_0884EE9C;
    return;
L_0884EE9C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EEA8u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884EEA8u) goto L_0884EEA8;
    return;
L_0884EEA8:
    ctx.set_gpr(31, 0x0884EEB0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884EEB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884EEBCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884EEBCu) goto L_0884EEBC;
    return;
L_0884EEBC:
    ctx.set_gpr(31, 0x0884EEC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884F29C;
L_0884EEC4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884EED0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884F260;
L_0884EED0:
    ctx.set_gpr(31, 0x0884EED8u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884EED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EEE4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_0884F250;
L_0884EEE4:
    ctx.set_gpr(31, 0x0884EEECu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884EEEC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EEF8u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884EEF8u) goto L_0884EEF8;
    return;
L_0884EEF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884EF04u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884EF04u) goto L_0884EF04;
    return;
L_0884EF04:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
        goto L_0884EFAC;
    }
    goto L_0884EF0C;
L_0884EF0C:
    ctx.set_gpr(31, 0x0884EF14u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F244;
L_0884EF14:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884EF20u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F208;
L_0884EF20:
    ctx.set_gpr(31, 0x0884EF28u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884EF28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EF34u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884EF34:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884EF40u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884EF40u) goto L_0884EF40;
    return;
L_0884EF40:
    ctx.set_gpr(31, 0x0884EF48u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884EF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884EF58u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884EF58:
    ctx.set_gpr(31, 0x0884EF60u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884EF60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884EF70u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884F1D8;
L_0884EF70:
    ctx.set_gpr(31, 0x0884EF78u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884D1B8;
L_0884EF78:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884EF84u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884F2A8;
L_0884EF84:
    ctx.set_gpr(31, 0x0884EF8Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EF8Cu) goto L_0884EF8C;
    return;
L_0884EF8C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EF98u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884EF98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884EFA4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884EFA4u) goto L_0884EFA4;
    return;
L_0884EFA4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0884F0D8;
      }
      goto L_0884EFAC;
    }
L_0884EFAC:
    ctx.set_gpr(31, 0x0884EFB4u);
    // nop
    goto L_0884D1B8;
L_0884EFB4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884EFC0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0884F2A8;
L_0884EFC0:
    ctx.set_gpr(31, 0x0884EFC8u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884EFC8u) goto L_0884EFC8;
    return;
L_0884EFC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884EFD4u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884EFD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884EFE0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884EFE0u) goto L_0884EFE0;
    return;
L_0884EFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F0D4;
      }
      goto L_0884EFE8;
    }
L_0884EFE8:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_0884F098;
    }
    goto L_0884EFF0;
L_0884EFF0:
    ctx.set_gpr(31, 0x0884EFF8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884F244;
L_0884EFF8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884F004u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884F208;
L_0884F004:
    ctx.set_gpr(31, 0x0884F00Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F00C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F018u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F018u) goto L_0884F018;
    return;
L_0884F018:
    ctx.set_gpr(31, 0x0884F020u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884F020:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F02Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F02Cu) goto L_0884F02C;
    return;
L_0884F02C:
    ctx.set_gpr(31, 0x0884F034u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884F044u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884F044:
    ctx.set_gpr(31, 0x0884F04Cu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F04C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884F05Cu);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884F1D8;
L_0884F05C:
    ctx.set_gpr(31, 0x0884F064u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0884D1B8;
L_0884F064:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F070u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0884F2A8;
L_0884F070:
    ctx.set_gpr(31, 0x0884F078u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F078u) goto L_0884F078;
    return;
L_0884F078:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F084u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884F084:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F090u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F090u) goto L_0884F090;
    return;
L_0884F090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F0D4;
      }
      goto L_0884F098;
    }
L_0884F098:
    ctx.set_gpr(31, 0x0884F0A0u);
    // nop
    goto L_0884D1B8;
L_0884F0A0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F0ACu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_0884F2A8;
L_0884F0AC:
    ctx.set_gpr(31, 0x0884F0B4u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F0B4u) goto L_0884F0B4;
    return;
L_0884F0B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F0C0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F0C0u) goto L_0884F0C0;
    return;
L_0884F0C0:
    ctx.set_gpr(31, 0x0884F0C8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884F0C8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F0D4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F0D4u) goto L_0884F0D4;
    return;
L_0884F0D4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(72));
    goto L_0884F0D8;
L_0884F0D8:
    ctx.set_gpr(31, 0x0884F0E0u);
    // nop
    goto L_0884D15C;
L_0884F0E0:
    ctx.set_gpr(31, 0x0884F0E8u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(84));
    goto L_0884D15C;
L_0884F0E8:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884F140;
      }
      goto L_0884F10C;
    }
L_0884F10C:
    ctx.set_gpr(31, 0x0884F114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884F114u) goto L_0884F114;
    return;
L_0884F114:
    ctx.set_gpr(31, 0x0884F11Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0884F11Cu) goto L_0884F11C;
    return;
L_0884F11C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F12Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    goto L_0884D128;
L_0884F12C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0884F138u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884F180;
L_0884F138:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884F15C;
      }
      goto L_0884F140;
    }
L_0884F140:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_0884F144;
L_0884F144:
    ctx.set_gpr(31, 0x0884F14Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0884CE80;
L_0884F14C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0884F158u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884F180;
L_0884F158:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884F15C;
L_0884F15C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884F1B8;
      }
      goto L_0884F19C;
    }
L_0884F19C:
    ctx.set_gpr(31, 0x0884F1A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F1A4u) goto L_0884F1A4;
    return;
L_0884F1A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_0884F1BC;
    }
    goto L_0884F1B0;
L_0884F1B0:
    ctx.set_gpr(31, 0x0884F1B8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x0884F1B8u) goto L_0884F1B8;
    return;
L_0884F1B8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0884F1BC;
L_0884F1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F1D0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F1D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F1E8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F1F8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F200:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884F21Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884F23C;
L_0884F21C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F228u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F228u) goto L_0884F228;
    return;
L_0884F228:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F23C:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 116u, 0x08A08AF8u>(ctx, &aot_mem); return;
L_0884F244:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F250:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F258:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884F274u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884F294;
L_0884F274:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F280u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F280u) goto L_0884F280;
    return;
L_0884F280:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F294:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 282u, 0x08A217A0u>(ctx, &aot_mem); return;
L_0884F29C:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F2A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884F2BCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884D1B0;
L_0884F2BC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F2C8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F2C8u) goto L_0884F2C8;
    return;
L_0884F2C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F2DC:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem); return;
L_0884F2E4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F2EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884F300u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884F320;
L_0884F300:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F30Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F30Cu) goto L_0884F30C;
    return;
L_0884F30C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F320:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 244u, 0x088F14A8u>(ctx, &aot_mem); return;
L_0884F328:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F334:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F33C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884F358u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x0884F358u) goto L_0884F358;
    return;
L_0884F358:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F36C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_0884F3AC;
    }
    goto L_0884F384;
L_0884F384:
    ctx.set_gpr(31, 0x0884F38Cu);
    // nop
    goto L_0884F3BC;
L_0884F38C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F398u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F398u) goto L_0884F398;
    return;
L_0884F398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F3A8;
      }
      goto L_0884F3A0;
    }
L_0884F3A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0884F3AC;
      }
      goto L_0884F3A8;
    }
L_0884F3A8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884F3AC;
L_0884F3AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F3BC:
    ctx.set_gpr(2, 2246u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20388)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F3C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F3D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0884F3F0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x0884F3F0u) goto L_0884F3F0;
    return;
L_0884F3F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F404:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(30, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0884F454u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_0884F3D4;
L_0884F454:
    ctx.set_gpr(31, 0x0884F45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884F45Cu) goto L_0884F45C;
    return;
L_0884F45C:
    ctx.set_gpr(31, 0x0884F464u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 39u, 0x08AB0210u>(ctx, &aot_mem) && ctx.pc == 0x0884F464u) goto L_0884F464;
    return;
L_0884F464:
    ctx.set_gpr(31, 0x0884F46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884F46Cu) goto L_0884F46C;
    return;
L_0884F46C:
    ctx.set_gpr(31, 0x0884F474u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884F474u) goto L_0884F474;
    return;
L_0884F474:
    ctx.set_gpr(31, 0x0884F47Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884F47Cu) goto L_0884F47C;
    return;
L_0884F47C:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16296));
    ctx.set_gpr(31, 0x0884F494u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884F494u) goto L_0884F494;
    return;
L_0884F494:
    ctx.set_gpr(31, 0x0884F49Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 343u, 0x08849650u>(ctx, &aot_mem) && ctx.pc == 0x0884F49Cu) goto L_0884F49C;
    return;
L_0884F49C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F4A8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 301u, 0x08849424u>(ctx, &aot_mem) && ctx.pc == 0x0884F4A8u) goto L_0884F4A8;
    return;
L_0884F4A8:
    ctx.set_gpr(31, 0x0884F4B0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F4B0u) goto L_0884F4B0;
    return;
L_0884F4B0:
    ctx.set_gpr(31, 0x0884F4B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884F3C8;
L_0884F4B8:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(17, 0u + 0u);
    goto L_0884F4E4;
L_0884F4E4:
    ctx.set_gpr(31, 0x0884F4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884F4ECu) goto L_0884F4EC;
    return;
L_0884F4EC:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16308));
    ctx.set_gpr(31, 0x0884F504u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884F504u) goto L_0884F504;
    return;
L_0884F504:
    ctx.set_gpr(31, 0x0884F50Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884F36C;
L_0884F50C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F518u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884F344;
L_0884F518:
    ctx.set_gpr(31, 0x0884F520u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884F33C;
L_0884F520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F578;
      }
      goto L_0884F528;
    }
L_0884F528:
    ctx.set_gpr(31, 0x0884F530u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    goto L_0884F334;
L_0884F530:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
        goto L_0884F550;
    }
    goto L_0884F538;
L_0884F538:
    ctx.set_gpr(31, 0x0884F540u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0884F328;
L_0884F540:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0884F54Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0884F2EC;
L_0884F54C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    goto L_0884F550;
L_0884F550:
    ctx.set_gpr(31, 0x0884F558u);
    // nop
    goto L_0884F2E4;
L_0884F558:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F564u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884F33C;
L_0884F564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F570u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884F2DC;
L_0884F570:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884F4E4;
      }
      goto L_0884F578;
    }
L_0884F578:
    ctx.set_gpr(31, 0x0884F580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884F580u) goto L_0884F580;
    return;
L_0884F580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F58Cu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 97u, 0x08AB0554u>(ctx, &aot_mem) && ctx.pc == 0x0884F58Cu) goto L_0884F58C;
    return;
L_0884F58C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
      if (branch_taken) {
          goto L_0884F6FC;
      }
      goto L_0884F594;
    }
L_0884F594:
    ctx.set_gpr(31, 0x0884F59Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0884D1B8;
L_0884F59C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884F5A8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0884F2A8;
L_0884F5A8:
    ctx.set_gpr(31, 0x0884F5B0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F5B0u) goto L_0884F5B0;
    return;
L_0884F5B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F5BCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F5BCu) goto L_0884F5BC;
    return;
L_0884F5BC:
    ctx.set_gpr(31, 0x0884F5C4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884F5C4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F5D0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F5D0u) goto L_0884F5D0;
    return;
L_0884F5D0:
    ctx.set_gpr(31, 0x0884F5D8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0884F29C;
L_0884F5D8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884F5E4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0884F260;
L_0884F5E4:
    ctx.set_gpr(31, 0x0884F5ECu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884F5EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F5F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_0884F250;
L_0884F5F8:
    ctx.set_gpr(31, 0x0884F600u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884F600:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F60Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884F60Cu) goto L_0884F60C;
    return;
L_0884F60C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F618u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F618u) goto L_0884F618;
    return;
L_0884F618:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
        goto L_0884F6C0;
    }
    goto L_0884F620;
L_0884F620:
    ctx.set_gpr(31, 0x0884F628u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F244;
L_0884F628:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884F634u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F208;
L_0884F634:
    ctx.set_gpr(31, 0x0884F63Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F63C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F648u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884F648:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F654u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F654u) goto L_0884F654;
    return;
L_0884F654:
    ctx.set_gpr(31, 0x0884F65Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F65C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884F66Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884F66C:
    ctx.set_gpr(31, 0x0884F674u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884F684u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884F1D8;
L_0884F684:
    ctx.set_gpr(31, 0x0884F68Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0884D1B8;
L_0884F68C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F698u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0884F2A8;
L_0884F698:
    ctx.set_gpr(31, 0x0884F6A0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F6A0u) goto L_0884F6A0;
    return;
L_0884F6A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F6ACu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884F6AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F6B8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F6B8u) goto L_0884F6B8;
    return;
L_0884F6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0884F7EC;
      }
      goto L_0884F6C0;
    }
L_0884F6C0:
    ctx.set_gpr(31, 0x0884F6C8u);
    // nop
    goto L_0884D1B8;
L_0884F6C8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F6D4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0884F2A8;
L_0884F6D4:
    ctx.set_gpr(31, 0x0884F6DCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F6DCu) goto L_0884F6DC;
    return;
L_0884F6DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F6E8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884F6E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F6F4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F6F4u) goto L_0884F6F4;
    return;
L_0884F6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7E8;
      }
      goto L_0884F6FC;
    }
L_0884F6FC:
    if (ctx.gpr[19] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
        goto L_0884F7AC;
    }
    goto L_0884F704;
L_0884F704:
    ctx.set_gpr(31, 0x0884F70Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884F244;
L_0884F70C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884F718u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884F208;
L_0884F718:
    ctx.set_gpr(31, 0x0884F720u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F720:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F72Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F72Cu) goto L_0884F72C;
    return;
L_0884F72C:
    ctx.set_gpr(31, 0x0884F734u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884F734:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F740u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F740u) goto L_0884F740;
    return;
L_0884F740:
    ctx.set_gpr(31, 0x0884F748u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F748:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884F758u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884F758:
    ctx.set_gpr(31, 0x0884F760u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884F760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884F770u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884F1D8;
L_0884F770:
    ctx.set_gpr(31, 0x0884F778u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884D1B8;
L_0884F778:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F784u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F2A8;
L_0884F784:
    ctx.set_gpr(31, 0x0884F78Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F78Cu) goto L_0884F78C;
    return;
L_0884F78C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F798u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884F798:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F7A4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F7A4u) goto L_0884F7A4;
    return;
L_0884F7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884F7E8;
      }
      goto L_0884F7AC;
    }
L_0884F7AC:
    ctx.set_gpr(31, 0x0884F7B4u);
    // nop
    goto L_0884D1B8;
L_0884F7B4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F7C0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884F2A8;
L_0884F7C0:
    ctx.set_gpr(31, 0x0884F7C8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884F7C8u) goto L_0884F7C8;
    return;
L_0884F7C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F7D4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F7D4u) goto L_0884F7D4;
    return;
L_0884F7D4:
    ctx.set_gpr(31, 0x0884F7DCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884F7DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F7E8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884F7E8u) goto L_0884F7E8;
    return;
L_0884F7E8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    goto L_0884F7EC;
L_0884F7EC:
    ctx.set_gpr(31, 0x0884F7F4u);
    // nop
    goto L_0884D15C;
L_0884F7F4:
    ctx.set_gpr(31, 0x0884F7FCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(84));
    goto L_0884D15C;
L_0884F7FC:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884F81Cu);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_0884D128;
L_0884F81C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x0884F828u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884F180;
L_0884F828:
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
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884F85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(30, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0884F8B0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_0884F3D4;
L_0884F8B0:
    ctx.set_gpr(31, 0x0884F8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884F8B8u) goto L_0884F8B8;
    return;
L_0884F8B8:
    ctx.set_gpr(31, 0x0884F8C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 114u, 0x08AB0628u>(ctx, &aot_mem) && ctx.pc == 0x0884F8C0u) goto L_0884F8C0;
    return;
L_0884F8C0:
    ctx.set_gpr(31, 0x0884F8C8u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884F8C8u) goto L_0884F8C8;
    return;
L_0884F8C8:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16296));
    ctx.set_gpr(31, 0x0884F8E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884F8E0u) goto L_0884F8E0;
    return;
L_0884F8E0:
    ctx.set_gpr(31, 0x0884F8E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 343u, 0x08849650u>(ctx, &aot_mem) && ctx.pc == 0x0884F8E8u) goto L_0884F8E8;
    return;
L_0884F8E8:
    ctx.set_gpr(31, 0x0884F8F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884FD58;
L_0884F8F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F8FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0884FD4C;
L_0884F8FC:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884F908u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    goto L_0884FD10;
L_0884F908:
    ctx.set_gpr(31, 0x0884F910u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884F910u) goto L_0884F910;
    return;
L_0884F910:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0884F920u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0884FCDC;
L_0884F920:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884F92Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 222u, 0x08A5D200u>(ctx, &aot_mem) && ctx.pc == 0x0884F92Cu) goto L_0884F92C;
    return;
L_0884F92C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_0884F960;
L_0884F960:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (static_cast<std::int32_t>(ctx.gpr[21]) < 0) {
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
        goto L_0884FA0C;
    }
    goto L_0884F96C;
L_0884F96C:
    ctx.set_gpr(31, 0x0884F974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x0884F974u) goto L_0884F974;
    return;
L_0884F974:
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884F98Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16308));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 824u, 0x089575C4u>(ctx, &aot_mem) && ctx.pc == 0x0884F98Cu) goto L_0884F98C;
    return;
L_0884F98C:
    ctx.set_gpr(31, 0x0884F994u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0884F36C;
L_0884F994:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F9A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884F344;
L_0884F9A0:
    ctx.set_gpr(31, 0x0884F9A8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884F33C;
L_0884F9A8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_0884F9FC;
    }
    goto L_0884F9B0;
L_0884F9B0:
    ctx.set_gpr(31, 0x0884F9B8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    goto L_0884F334;
L_0884F9B8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
        goto L_0884F9D8;
    }
    goto L_0884F9C0;
L_0884F9C0:
    ctx.set_gpr(31, 0x0884F9C8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0884F328;
L_0884F9C8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0884F9D4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    goto L_0884F2EC;
L_0884F9D4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    goto L_0884F9D8;
L_0884F9D8:
    ctx.set_gpr(31, 0x0884F9E0u);
    // nop
    goto L_0884F2E4;
L_0884F9E0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884F9ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_0884F33C;
L_0884F9EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0884F9F8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_0884F2DC;
L_0884F9F8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_0884F9FC;
L_0884F9FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0884F960;
      }
      goto L_0884FA08;
    }
L_0884FA08:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    goto L_0884FA0C;
L_0884FA0C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FB7C;
      }
      goto L_0884FA14;
    }
L_0884FA14:
    ctx.set_gpr(31, 0x0884FA1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0884D1B8;
L_0884FA1C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884FA28u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0884F2A8;
L_0884FA28:
    ctx.set_gpr(31, 0x0884FA30u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FA30u) goto L_0884FA30;
    return;
L_0884FA30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FA3Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884FA3Cu) goto L_0884FA3C;
    return;
L_0884FA3C:
    ctx.set_gpr(31, 0x0884FA44u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884FA44:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FA50u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FA50u) goto L_0884FA50;
    return;
L_0884FA50:
    ctx.set_gpr(31, 0x0884FA58u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F29C;
L_0884FA58:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884FA64u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F260;
L_0884FA64:
    ctx.set_gpr(31, 0x0884FA6Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884FA6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FA78u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_0884F250;
L_0884FA78:
    ctx.set_gpr(31, 0x0884FA80u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884FA80:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FA8Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884FA8Cu) goto L_0884FA8C;
    return;
L_0884FA8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FA98u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FA98u) goto L_0884FA98;
    return;
L_0884FA98:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_0884FB40;
    }
    goto L_0884FAA0;
L_0884FAA0:
    ctx.set_gpr(31, 0x0884FAA8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0884F244;
L_0884FAA8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884FAB4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_0884F208;
L_0884FAB4:
    ctx.set_gpr(31, 0x0884FABCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FABC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FAC8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884FAC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FAD4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FAD4u) goto L_0884FAD4;
    return;
L_0884FAD4:
    ctx.set_gpr(31, 0x0884FADCu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FADC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884FAECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884FAEC:
    ctx.set_gpr(31, 0x0884FAF4u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FAF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884FB04u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884F1D8;
L_0884FB04:
    ctx.set_gpr(31, 0x0884FB0Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0884D1B8;
L_0884FB0C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FB18u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    goto L_0884F2A8;
L_0884FB18:
    ctx.set_gpr(31, 0x0884FB20u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FB20u) goto L_0884FB20;
    return;
L_0884FB20:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FB2Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884FB2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FB38u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FB38u) goto L_0884FB38;
    return;
L_0884FB38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0884FC6C;
      }
      goto L_0884FB40;
    }
L_0884FB40:
    ctx.set_gpr(31, 0x0884FB48u);
    // nop
    goto L_0884D1B8;
L_0884FB48:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FB54u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884F2A8;
L_0884FB54:
    ctx.set_gpr(31, 0x0884FB5Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FB5Cu) goto L_0884FB5C;
    return;
L_0884FB5C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FB68u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884FB68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FB74u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FB74u) goto L_0884FB74;
    return;
L_0884FB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC68;
      }
      goto L_0884FB7C;
    }
L_0884FB7C:
    if (ctx.gpr[18] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
        goto L_0884FC2C;
    }
    goto L_0884FB84;
L_0884FB84:
    ctx.set_gpr(31, 0x0884FB8Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F244;
L_0884FB8C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884FB98u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F208;
L_0884FB98:
    ctx.set_gpr(31, 0x0884FBA0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FBA0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FBACu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884FBACu) goto L_0884FBAC;
    return;
L_0884FBAC:
    ctx.set_gpr(31, 0x0884FBB4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884FBB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FBC0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FBC0u) goto L_0884FBC0;
    return;
L_0884FBC0:
    ctx.set_gpr(31, 0x0884FBC8u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FBC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884FBD8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884FBD8:
    ctx.set_gpr(31, 0x0884FBE0u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FBE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0884FBF0u);
    ctx.set_gpr(7, 0u + 0u);
    goto L_0884F1D8;
L_0884FBF0:
    ctx.set_gpr(31, 0x0884FBF8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884D1B8;
L_0884FBF8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FC04u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884F2A8;
L_0884FC04:
    ctx.set_gpr(31, 0x0884FC0Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC0Cu) goto L_0884FC0C;
    return;
L_0884FC0C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FC18u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884FC18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FC24u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FC24u) goto L_0884FC24;
    return;
L_0884FC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884FC68;
      }
      goto L_0884FC2C;
    }
L_0884FC2C:
    ctx.set_gpr(31, 0x0884FC34u);
    // nop
    goto L_0884D1B8;
L_0884FC34:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FC40u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0884F2A8;
L_0884FC40:
    ctx.set_gpr(31, 0x0884FC48u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FC48u) goto L_0884FC48;
    return;
L_0884FC48:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FC54u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884FC54u) goto L_0884FC54;
    return;
L_0884FC54:
    ctx.set_gpr(31, 0x0884FC5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884FC5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FC68u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FC68u) goto L_0884FC68;
    return;
L_0884FC68:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    goto L_0884FC6C;
L_0884FC6C:
    ctx.set_gpr(31, 0x0884FC74u);
    // nop
    goto L_0884D15C;
L_0884FC74:
    ctx.set_gpr(31, 0x0884FC7Cu);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(84));
    goto L_0884D15C;
L_0884FC7C:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FC9Cu);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_0884D128;
L_0884FC9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x0884FCA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884F180;
L_0884FCA8:
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
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FCDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0884FCF4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 426u, 0x08849A58u>(ctx, &aot_mem) && ctx.pc == 0x0884FCF4u) goto L_0884FCF4;
    return;
L_0884FCF4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0884FD00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 425u, 0x08849A50u>(ctx, &aot_mem) && ctx.pc == 0x0884FD00u) goto L_0884FD00;
    return;
L_0884FD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FD10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0884FD24u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884FD44;
L_0884FD24:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FD30u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FD30u) goto L_0884FD30;
    return;
L_0884FD30:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FD44:
    ctx.set_gpr(4, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 760u, 0x08A0FE28u>(ctx, &aot_mem); return;
L_0884FD4C:
    ctx.set_gpr(3, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884FD58:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884FD60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0884FD9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 43u, 0x088501F8u>(ctx, &aot_mem) && ctx.pc == 0x0884FD9Cu) goto L_0884FD9C;
    return;
L_0884FD9C:
    ctx.set_gpr(31, 0x0884FDA4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 218u, 0x08850A68u>(ctx, &aot_mem) && ctx.pc == 0x0884FDA4u) goto L_0884FDA4;
    return;
L_0884FDA4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x0884FDB4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 209u, 0x088509B4u>(ctx, &aot_mem) && ctx.pc == 0x0884FDB4u) goto L_0884FDB4;
    return;
L_0884FDB4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0884FDC0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 41u, 0x088501CCu>(ctx, &aot_mem) && ctx.pc == 0x0884FDC0u) goto L_0884FDC0;
    return;
L_0884FDC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x0884FDCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 253u, 0x08849158u>(ctx, &aot_mem) && ctx.pc == 0x0884FDCCu) goto L_0884FDCC;
    return;
L_0884FDCC:
    ctx.set_gpr(31, 0x0884FDD4u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 219u, 0x08850A70u>(ctx, &aot_mem) && ctx.pc == 0x0884FDD4u) goto L_0884FDD4;
    return;
L_0884FDD4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0884FDF0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 212u, 0x088509F0u>(ctx, &aot_mem) && ctx.pc == 0x0884FDF0u) goto L_0884FDF0;
    return;
L_0884FDF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x0884FDFCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 39u, 0x088501A0u>(ctx, &aot_mem) && ctx.pc == 0x0884FDFCu) goto L_0884FDFC;
    return;
L_0884FDFC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0884FE08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0884E910;
L_0884FE08:
    ctx.set_gpr(31, 0x0884FE10u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_0884F334;
L_0884FE10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
        goto L_0884FE28;
    }
    goto L_0884FE18;
L_0884FE18:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0884FE24u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 39u, 0x088501A0u>(ctx, &aot_mem) && ctx.pc == 0x0884FE24u) goto L_0884FE24;
    return;
L_0884FE24:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    goto L_0884FE28;
L_0884FE28:
    ctx.set_gpr(31, 0x0884FE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 216u, 0x08850A48u>(ctx, &aot_mem) && ctx.pc == 0x0884FE30u) goto L_0884FE30;
    return;
L_0884FE30:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
        goto L_0884FFCC;
    }
    goto L_0884FE38;
L_0884FE38:
    ctx.set_gpr(31, 0x0884FE40u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884D1B8;
L_0884FE40:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0884FE4Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    goto L_0884F2A8;
L_0884FE4C:
    ctx.set_gpr(31, 0x0884FE54u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FE54u) goto L_0884FE54;
    return;
L_0884FE54:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FE60u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 453u, 0x08849BE0u>(ctx, &aot_mem) && ctx.pc == 0x0884FE60u) goto L_0884FE60;
    return;
L_0884FE60:
    ctx.set_gpr(31, 0x0884FE68u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    goto L_0884D16C;
L_0884FE68:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884FE74u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FE74u) goto L_0884FE74;
    return;
L_0884FE74:
    ctx.set_gpr(31, 0x0884FE7Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F29C;
L_0884FE7C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0884FE88u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    goto L_0884F260;
L_0884FE88:
    ctx.set_gpr(31, 0x0884FE90u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884FE90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FE9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    goto L_0884F250;
L_0884FE9C:
    ctx.set_gpr(31, 0x0884FEA4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0884F258;
L_0884FEA4:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FEB0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x0884FEB0u) goto L_0884FEB0;
    return;
L_0884FEB0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884FEBCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FEBCu) goto L_0884FEBC;
    return;
L_0884FEBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
        goto L_0884FF90;
    }
    goto L_0884FEC8;
L_0884FEC8:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
        goto L_0884FEE4;
    }
    goto L_0884FED4;
L_0884FED4:
    ctx.set_gpr(1, ctx.gpr[17] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884FF8C;
      }
      goto L_0884FEE0;
    }
L_0884FEE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884FEE4;
L_0884FEE4:
    ctx.set_gpr(31, 0x0884FEECu);
    // nop
    goto L_0884F244;
L_0884FEEC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x0884FEF8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    goto L_0884F208;
L_0884FEF8:
    ctx.set_gpr(31, 0x0884FF00u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FF00:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FF0Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884FF0C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884FF18u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FF18u) goto L_0884FF18;
    return;
L_0884FF18:
    ctx.set_gpr(31, 0x0884FF20u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FF20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(31, 0x0884FF30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0884F1E8;
L_0884FF30:
    ctx.set_gpr(31, 0x0884FF38u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884F200;
L_0884FF38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[16]);
    ctx.set_gpr(6, 0u - ctx.gpr[17]);
    ctx.set_gpr(31, 0x0884FF50u);
    ctx.set_gpr(7, ctx.gpr[2] - ctx.gpr[3]);
    goto L_0884F1D8;
L_0884FF50:
    ctx.set_gpr(31, 0x0884FF58u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0884D1B8;
L_0884FF58:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FF64u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    goto L_0884F2A8;
L_0884FF64:
    ctx.set_gpr(31, 0x0884FF6Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FF6Cu) goto L_0884FF6C;
    return;
L_0884FF6C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FF78u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    goto L_0884F1D0;
L_0884FF78:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884FF84u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FF84u) goto L_0884FF84;
    return;
L_0884FF84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 24u, 0x088500E4u>(ctx, &aot_mem); return;
      }
      goto L_0884FF8C;
    }
L_0884FF8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884FF90;
L_0884FF90:
    ctx.set_gpr(31, 0x0884FF98u);
    // nop
    goto L_0884D1B8;
L_0884FF98:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x0884FFA4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_0884F2A8;
L_0884FFA4:
    ctx.set_gpr(31, 0x0884FFACu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 562u, 0x0884A27Cu>(ctx, &aot_mem) && ctx.pc == 0x0884FFACu) goto L_0884FFAC;
    return;
L_0884FFAC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884FFB8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0884F1F8;
L_0884FFB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884FFC4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 207u, 0x08A49074u>(ctx, &aot_mem) && ctx.pc == 0x0884FFC4u) goto L_0884FFC4;
    return;
L_0884FFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 23u, 0x088500E0u>(ctx, &aot_mem); return;
      }
      goto L_0884FFCC;
    }
L_0884FFCC:
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
        (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 17u, 0x088500A4u>(ctx, &aot_mem); return;
    }
    goto L_0884FFD4;
L_0884FFD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
        goto L_0884FFF0;
    }
    goto L_0884FFE0;
L_0884FFE0:
    ctx.set_gpr(1, ctx.gpr[17] < 0u ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 16u, 0x088500A0u>(ctx, &aot_mem); return;
      }
      goto L_0884FFEC;
    }
L_0884FFEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0884FFF0;
L_0884FFF0:
    ctx.set_gpr(31, 0x0884FFF8u);
    // nop
    goto L_0884F244;
L_0884FFF8:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08850004u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_0884F208;
}

void recomp_unit_0018(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0018_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_18(Runtime &runtime) {
    runtime.register_generated_unit(18u, 0x0884C000u, 16384u, &recomp_unit_0018, &recomp_unit_0018_entry);
    runtime.register_function(0x0884C000u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C010u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C018u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C040u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C050u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C058u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C064u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C06Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C074u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C088u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C098u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C0FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C124u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C12Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C140u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C150u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C158u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C168u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C174u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C190u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C1E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C210u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C220u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C228u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C234u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C23Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C244u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C264u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C26Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C27Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C288u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C294u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C29Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C2FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C30Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C31Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C324u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C344u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C364u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C378u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C394u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C398u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C3DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C41Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C45Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C470u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C474u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C47Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C4FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C504u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C50Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C52Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C534u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C540u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C54Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C558u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C564u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C56Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C57Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C58Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C5F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C60Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C628u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C630u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C63Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C644u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C648u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C65Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C670u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C684u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C698u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C6FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C704u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C710u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C718u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C71Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C730u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C73Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C748u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C754u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C770u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C788u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C7F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C800u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C814u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C820u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C830u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C86Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C874u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C87Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C884u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C894u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C8FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C904u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C914u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C924u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C92Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C934u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C944u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C94Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C954u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C960u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C968u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C970u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C978u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C990u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C998u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884C9F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CA9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CABCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CACCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CAFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CB94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CBF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CC98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CCF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CD9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CDFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CECCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CED4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CEECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CF98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884CFE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D004u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D00Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D018u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D020u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D024u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D038u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D054u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D05Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D068u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D070u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D074u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D088u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D0ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D100u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D114u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D128u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D148u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D15Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D16Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D174u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D17Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D190u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D19Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D1FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D204u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D21Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D224u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D230u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D238u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D240u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D244u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D254u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D270u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D278u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D280u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D28Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D294u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D29Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D2F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D308u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D31Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D334u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D340u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D350u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D358u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D360u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D368u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D370u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D378u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D380u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D388u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D39Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D3ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D400u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D408u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D410u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D418u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D42Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D440u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D448u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D450u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D458u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D460u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D468u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D47Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D488u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D49Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D4F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D500u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D50Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D520u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D52Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D540u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D548u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D554u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D574u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D57Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D584u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D58Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D5E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D60Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D61Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D628u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D634u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D640u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D64Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D658u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D678u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D680u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D688u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D694u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D69Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D6F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D704u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D70Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D720u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D73Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D744u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D74Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D754u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D75Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D768u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D774u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D780u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D788u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D794u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D7F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D800u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D808u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D814u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D818u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D828u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D840u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D850u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D860u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D868u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D87Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D888u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D8F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D91Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D924u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D94Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D95Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D968u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D974u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D97Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D984u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D98Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D994u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D99Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884D9FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DA9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DABCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DADCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DAFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DB90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DBF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DC94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DCF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DD94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DDF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DED4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DED8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DEE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DF80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884DFF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E034u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E058u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E07Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E09Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E0F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E10Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E114u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E11Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E120u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E138u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E168u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E178u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E180u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E198u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E1F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E220u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E244u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E250u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E25Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E264u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E26Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E278u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E2F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E318u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E320u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E328u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E334u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E350u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E358u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E360u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E368u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E370u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E37Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E390u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E39Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E3FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E408u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E410u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E424u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E430u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E438u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E43Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E444u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E448u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E44Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E45Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E480u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E48Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E498u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E4FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E520u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E548u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E550u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E558u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E560u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E568u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E570u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E580u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E588u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E58Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E598u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E5ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E604u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E60Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E614u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E61Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E624u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E62Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E634u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E63Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E644u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E648u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E654u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E65Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E664u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E66Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E68Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E6FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E70Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E714u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E728u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E72Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E748u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E774u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E780u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E798u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E7DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E828u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E840u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E848u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E850u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E858u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E860u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E868u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E878u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E884u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E890u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E89Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E8F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E910u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E92Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E934u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E940u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E948u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E94Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E960u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E97Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E984u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E990u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E998u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E99Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9CCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884E9ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EA9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EADCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EAF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EB9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBD0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EBFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EC98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ECF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884ED94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EDFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE94u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EED0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EED8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EEF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF70u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EF98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFE8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884EFF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F004u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F00Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F018u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F020u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F02Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F034u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F044u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F04Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F05Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F064u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F070u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F078u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F084u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F090u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F098u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F0E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F10Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F114u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F11Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F12Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F138u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F140u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F144u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F14Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F158u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F15Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F180u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F19Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F1F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F200u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F208u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F21Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F228u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F23Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F244u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F250u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F258u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F260u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F274u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F280u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F294u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F29Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F2ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F300u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F30Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F320u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F328u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F334u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F33Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F344u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F358u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F36Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F384u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F38Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F398u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F3F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F404u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F454u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F45Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F464u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F46Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F474u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F47Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F494u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F49Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F4ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F504u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F50Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F518u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F520u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F528u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F530u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F538u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F540u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F54Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F550u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F558u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F564u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F570u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F578u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F580u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F58Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F594u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F59Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5BCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5C4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5D0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5E4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F5F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F600u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F60Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F618u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F620u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F628u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F634u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F63Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F648u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F654u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F65Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F66Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F674u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F684u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F68Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F698u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F6FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F704u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F70Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F718u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F720u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F72Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F734u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F740u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F748u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F758u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F760u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F770u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F778u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F784u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F78Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F798u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7A4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7ACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7B4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7DCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7F4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F7FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F81Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F828u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F85Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8E8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8F0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F8FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F908u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F910u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F920u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F92Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F960u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F96Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F974u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F98Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F994u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9A0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9A8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9B0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9B8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9C0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9C8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9D4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9D8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9E0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9ECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9F8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884F9FCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA14u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA1Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA3Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA80u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FA98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FABCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FADCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FAF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FB98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBA0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBD8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FBF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC04u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC2Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC34u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC48u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC5Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FC9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCA8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCDCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FCF4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD44u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FD9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDB4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDC0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FDFCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE08u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE10u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE24u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE28u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE40u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE4Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE54u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE60u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE68u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE74u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE7Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE88u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FE9Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEB0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEBCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEC8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FED4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEE4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FEF8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF00u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF0Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF18u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF20u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF30u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF38u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF50u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF58u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF64u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF6Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF78u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF84u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF8Cu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF90u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FF98u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFA4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFACu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFB8u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFC4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFCCu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFD4u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFE0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFECu, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFF0u, &recomp_unit_0018, "recomp_unit_0018");
    runtime.register_function(0x0884FFF8u, &recomp_unit_0018, "recomp_unit_0018");
}
} // namespace psprecomp
