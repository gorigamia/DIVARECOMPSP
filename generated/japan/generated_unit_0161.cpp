#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0161[4096] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18,
    0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 27, 0, 28,
    29, 30, 0, 0, 31, 0, 32, 0, 33, 34, 35, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 56, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 78, 0, 79,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    110, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 117, 118, 0, 119, 0, 0, 0, 120, 0,
    0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0,
    131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0,
    142, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 148, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155,
    0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 0,
    173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 180, 0, 0, 181, 0, 182, 0, 0, 0,
    183, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0,
    194, 0, 0, 195, 0, 196, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0,
    205, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 218,
    0, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 0, 229, 0,
    0, 230, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 241, 242, 0,
    243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0,
    265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0,
    0, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 284, 0, 285, 0, 286, 0, 0,
    0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0,
    0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 312,
    0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0,
    0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333,
    0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346,
    0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0,
    0, 358, 0, 359, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 367, 0,
    0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 378,
    0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0,
    390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0,
    400, 0, 401, 0, 402, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411,
    0, 0, 0, 412, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 0, 421, 0, 422, 0, 423,
    0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0,
    432, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441,
    0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 449, 0, 0, 0, 0, 0, 450,
    0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0,
    458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 464, 465, 0, 466, 0, 0, 0, 0,
    0, 0, 467, 0, 0, 468, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 476, 0, 477, 0, 478,
    0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 488, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496, 0,
    0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    0, 0, 503, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0, 513, 0, 0, 514,
    0, 0, 515, 0, 0, 516, 0, 517, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0,
    0, 0, 528, 0, 529, 0, 530, 0, 0, 531, 0, 0, 532, 0, 533, 534, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 547, 0, 548, 0,
    549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 559,
    0, 560, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0,
    0, 0, 570, 571, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 581, 0, 0,
    0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589,
    0, 590, 0, 0, 591, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 597, 0, 598,
    0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 0, 605,
    0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0,
    0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 619, 0, 0,
    0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 627, 0,
    628, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 0, 0, 639, 0, 640,
    0, 641, 0, 0, 642, 0, 0, 0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 652,
    0, 653, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0,
    665, 666, 0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0,
    679, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0,
    0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 696, 697, 0, 0,
    0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 703, 0,
    0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 724, 0,
    725, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 734, 0, 735, 0, 0, 736, 0,
    737, 0, 0, 738, 0, 739, 0, 0, 740, 741, 0, 742, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0,
    0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 0,
    758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 764, 0, 765, 0, 0, 0, 766, 0,
    767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 769, 770, 0, 0, 771, 0, 772, 773, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0, 777,
    0, 0, 0, 778, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 0, 786,
    0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794,
    795, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803,
    0, 0, 0, 804, 0, 805, 0, 806, 0, 807, 808, 809, 0, 810, 0, 811, 812, 813, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 824, 0, 0, 825, 0,
    0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832,
    0, 833, 0, 834, 0, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 841, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 843, 844, 0, 845, 0, 846, 0, 0, 847, 0, 848, 0, 0, 0, 0, 849, 850, 0, 851, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 856, 0, 857, 0, 858, 0, 0, 0, 859, 860,
    0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 866, 0, 0,
    0, 0, 867, 0, 868, 0, 0, 0, 0, 869, 870, 0, 871, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 876,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0,
    0, 0, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0,
    0, 0, 0, 0, 0, 886, 887, 0, 888, 0, 889, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 0, 0, 0, 892, 0, 893, 0,
    0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 900,
    901, 0, 0, 902, 903, 0, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0, 906, 0,
    907, 0, 0, 0, 0, 908, 0, 909, 0, 0, 0, 0, 910, 911, 0, 912, 0, 0, 0, 0, 913, 0, 914, 0, 0, 0, 0, 915, 0, 0, 0, 916,
    0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0,
    0, 0, 0, 0, 0, 0, 920, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 924, 0, 0, 0, 0, 0, 0, 0, 925, 0,
    926, 0, 0, 0, 0, 0, 0, 0, 927, 928, 0, 929, 0, 930, 0, 0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 933,
    0, 934, 0, 0, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 0, 0, 0, 0, 0, 0, 0, 939, 0, 0,
    940, 0, 941, 942, 0, 0, 943, 944, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 947, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 951, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 956, 0, 957, 0, 0, 0, 0, 0, 0, 0, 958, 0, 959, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 960, 0, 961,
    0, 0, 0, 0, 0, 0, 0, 962, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 965, 0, 0, 0, 0, 0, 0, 0, 966,
    0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 968, 0, 969, 0, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 0, 971,
    0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 973, 974, 0, 975, 0, 0, 0, 0, 976, 0, 0, 0, 977, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 978, 0, 0, 0, 979, 0, 980, 0, 0, 0, 981, 0, 0, 0, 982, 0, 0, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 984, 0, 0, 0, 0, 985, 0, 986, 0, 0, 0, 0, 987, 0, 988, 0, 0, 0, 0, 989, 0, 990, 0, 0, 991,
    0, 992, 0, 0, 993, 0, 0, 994, 0, 995, 0, 0, 996, 997, 0, 998, 0, 0, 999, 0, 1000, 0, 1001, 0, 1002, 0, 1003, 0, 1004, 0, 1005, 0,
    0, 0, 1006, 0, 1007, 0, 1008, 0, 0, 0, 0, 0, 1009, 0, 1010, 0, 1011, 0, 0, 0, 0, 0, 1012, 0, 1013, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1014, 0, 1015, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1016, 0, 1017, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1018, 0, 1019, 0, 1020, 0, 0, 1021, 0, 1022, 0, 0, 0,
    0, 0, 1023, 0, 1024, 0, 0, 0, 0, 0, 0, 0, 1025, 0, 1026, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1027,
    0, 1028, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1029, 0, 1030, 0, 1031, 0, 1032, 0, 0, 0, 0, 0, 1033, 0,
    1034, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1035, 0, 1036, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1037, 0, 1038, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1039, 1040, 1041, 1042, 0, 0, 0,
    0, 0, 0, 0, 0, 1043, 0, 0, 0, 0, 0, 0, 0, 1044, 0, 0, 0, 0, 0, 0, 1045, 0, 0, 0, 0, 0, 1046, 0, 1047, 0, 0, 1048,
    0, 0, 0, 1049, 0, 0, 1050, 0, 1051, 0, 0, 0, 1052, 0, 1053, 0, 0, 0, 0, 0, 1054, 0, 0, 0, 1055, 0, 0, 1056, 0, 1057, 0, 0,
    0, 1058, 0, 1059, 0, 0, 0, 1060, 0, 1061, 0, 0, 0, 1062, 0, 1063, 0, 0, 0, 1064, 0, 1065, 0, 0, 0, 1066, 0, 1067, 0, 0, 0, 0,
    1068, 0, 1069, 0, 0, 0, 0, 1070, 0, 1071, 0, 0, 0, 0, 1072, 0, 1073, 1074, 0, 1075, 0, 0, 0, 0, 1076, 0, 0, 0, 0, 0, 0, 1077,
    0, 0, 0, 0, 1078, 0, 0, 0, 0, 0, 0, 0, 0, 1079, 0, 1080, 0, 0, 1081, 0, 0, 1082, 0, 1083, 0, 0, 0, 0, 0, 0, 0, 0,
    1084, 0, 1085, 0, 1086, 0, 1087, 0, 1088, 0, 1089, 0, 1090, 0, 0, 0, 0, 0, 0, 0, 0, 1091, 0, 1092, 0, 0, 0, 0, 0, 0, 0, 1093,
};
void recomp_unit_0161_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A88000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0161[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A88000;
    case 2u: goto L_08A88008;
    case 3u: goto L_08A88010;
    case 4u: goto L_08A88028;
    case 5u: goto L_08A88030;
    case 6u: goto L_08A8803C;
    case 7u: goto L_08A88044;
    case 8u: goto L_08A8805C;
    case 9u: goto L_08A88064;
    case 10u: goto L_08A8806C;
    case 11u: goto L_08A88098;
    case 12u: goto L_08A880A0;
    case 13u: goto L_08A880B8;
    case 14u: goto L_08A880C0;
    case 15u: goto L_08A880E0;
    case 16u: goto L_08A880E8;
    case 17u: goto L_08A880F4;
    case 18u: goto L_08A880FC;
    case 19u: goto L_08A88104;
    case 20u: goto L_08A8810C;
    case 21u: goto L_08A88114;
    case 22u: goto L_08A88130;
    case 23u: goto L_08A88138;
    case 24u: goto L_08A88158;
    case 25u: goto L_08A88160;
    case 26u: goto L_08A8816C;
    case 27u: goto L_08A88174;
    case 28u: goto L_08A8817C;
    case 29u: goto L_08A88180;
    case 30u: goto L_08A88184;
    case 31u: goto L_08A88190;
    case 32u: goto L_08A88198;
    case 33u: goto L_08A881A0;
    case 34u: goto L_08A881A4;
    case 35u: goto L_08A881A8;
    case 36u: goto L_08A881BC;
    case 37u: goto L_08A881C4;
    case 38u: goto L_08A881CC;
    case 39u: goto L_08A881E4;
    case 40u: goto L_08A881EC;
    case 41u: goto L_08A8820C;
    case 42u: goto L_08A88214;
    case 43u: goto L_08A8822C;
    case 44u: goto L_08A88234;
    case 45u: goto L_08A88248;
    case 46u: goto L_08A88250;
    case 47u: goto L_08A88268;
    case 48u: goto L_08A88270;
    case 49u: goto L_08A88278;
    case 50u: goto L_08A88280;
    case 51u: goto L_08A882AC;
    case 52u: goto L_08A882B4;
    case 53u: goto L_08A882BC;
    case 54u: goto L_08A882E8;
    case 55u: goto L_08A882F0;
    case 56u: goto L_08A882F8;
    case 57u: goto L_08A88324;
    case 58u: goto L_08A8832C;
    case 59u: goto L_08A88338;
    case 60u: goto L_08A88340;
    case 61u: goto L_08A88358;
    case 62u: goto L_08A88360;
    case 63u: goto L_08A88368;
    case 64u: goto L_08A88394;
    case 65u: goto L_08A8839C;
    case 66u: goto L_08A883BC;
    case 67u: goto L_08A883C8;
    case 68u: goto L_08A883D0;
    case 69u: goto L_08A883D4;
    case 70u: goto L_08A883DC;
    case 71u: goto L_08A883F8;
    case 72u: goto L_08A88400;
    case 73u: goto L_08A88420;
    case 74u: goto L_08A88424;
    case 75u: goto L_08A88444;
    case 76u: goto L_08A88464;
    case 77u: goto L_08A88470;
    case 78u: goto L_08A88474;
    case 79u: goto L_08A8847C;
    case 80u: goto L_08A8850C;
    case 81u: goto L_08A8851C;
    case 82u: goto L_08A88524;
    case 83u: goto L_08A88558;
    case 84u: goto L_08A88560;
    case 85u: goto L_08A88594;
    case 86u: goto L_08A8859C;
    case 87u: goto L_08A885D0;
    case 88u: goto L_08A885D8;
    case 89u: goto L_08A88610;
    case 90u: goto L_08A88618;
    case 91u: goto L_08A8864C;
    case 92u: goto L_08A88654;
    case 93u: goto L_08A88668;
    case 94u: goto L_08A88670;
    case 95u: goto L_08A886A8;
    case 96u: goto L_08A886B0;
    case 97u: goto L_08A886E8;
    case 98u: goto L_08A886F0;
    case 99u: goto L_08A88728;
    case 100u: goto L_08A88730;
    case 101u: goto L_08A88750;
    case 102u: goto L_08A88758;
    case 103u: goto L_08A88790;
    case 104u: goto L_08A88798;
    case 105u: goto L_08A887D4;
    case 106u: goto L_08A887DC;
    case 107u: goto L_08A88814;
    case 108u: goto L_08A88818;
    case 109u: goto L_08A88820;
    case 110u: goto L_08A88880;
    case 111u: goto L_08A88888;
    case 112u: goto L_08A8889C;
    case 113u: goto L_08A888A4;
    case 114u: goto L_08A888B8;
    case 115u: goto L_08A888C8;
    case 116u: goto L_08A888D0;
    case 117u: goto L_08A888DC;
    case 118u: goto L_08A888E0;
    case 119u: goto L_08A888E8;
    case 120u: goto L_08A888F8;
    case 121u: goto L_08A88908;
    case 122u: goto L_08A88910;
    case 123u: goto L_08A88920;
    case 124u: goto L_08A88928;
    case 125u: goto L_08A88938;
    case 126u: goto L_08A88940;
    case 127u: goto L_08A88950;
    case 128u: goto L_08A88958;
    case 129u: goto L_08A88968;
    case 130u: goto L_08A88970;
    case 131u: goto L_08A88980;
    case 132u: goto L_08A88988;
    case 133u: goto L_08A88998;
    case 134u: goto L_08A889A0;
    case 135u: goto L_08A889B0;
    case 136u: goto L_08A889B8;
    case 137u: goto L_08A889C8;
    case 138u: goto L_08A889D0;
    case 139u: goto L_08A889E0;
    case 140u: goto L_08A889E8;
    case 141u: goto L_08A889F8;
    case 142u: goto L_08A88A00;
    case 143u: goto L_08A88A10;
    case 144u: goto L_08A88A14;
    case 145u: goto L_08A88A1C;
    case 146u: goto L_08A88A2C;
    case 147u: goto L_08A88A3C;
    case 148u: goto L_08A88A40;
    case 149u: goto L_08A88A44;
    case 150u: goto L_08A88A58;
    case 151u: goto L_08A88AA4;
    case 152u: goto L_08A88ACC;
    case 153u: goto L_08A88AE8;
    case 154u: goto L_08A88AF4;
    case 155u: goto L_08A88AFC;
    case 156u: goto L_08A88B14;
    case 157u: goto L_08A88B1C;
    case 158u: goto L_08A88B28;
    case 159u: goto L_08A88B30;
    case 160u: goto L_08A88B44;
    case 161u: goto L_08A88B4C;
    case 162u: goto L_08A88B60;
    case 163u: goto L_08A88B68;
    case 164u: goto L_08A88B78;
    case 165u: goto L_08A88B80;
    case 166u: goto L_08A88BA0;
    case 167u: goto L_08A88BA8;
    case 168u: goto L_08A88BB0;
    case 169u: goto L_08A88BB8;
    case 170u: goto L_08A88BD8;
    case 171u: goto L_08A88BE8;
    case 172u: goto L_08A88BF4;
    case 173u: goto L_08A88C00;
    case 174u: goto L_08A88C0C;
    case 175u: goto L_08A88C18;
    case 176u: goto L_08A88C24;
    case 177u: goto L_08A88C2C;
    case 178u: goto L_08A88C3C;
    case 179u: goto L_08A88C58;
    case 180u: goto L_08A88C5C;
    case 181u: goto L_08A88C68;
    case 182u: goto L_08A88C70;
    case 183u: goto L_08A88C80;
    case 184u: goto L_08A88C8C;
    case 185u: goto L_08A88C94;
    case 186u: goto L_08A88CA4;
    case 187u: goto L_08A88CB0;
    case 188u: goto L_08A88CBC;
    case 189u: goto L_08A88CCC;
    case 190u: goto L_08A88CD8;
    case 191u: goto L_08A88CE0;
    case 192u: goto L_08A88CEC;
    case 193u: goto L_08A88CF8;
    case 194u: goto L_08A88D00;
    case 195u: goto L_08A88D0C;
    case 196u: goto L_08A88D14;
    case 197u: goto L_08A88D1C;
    case 198u: goto L_08A88D24;
    case 199u: goto L_08A88D30;
    case 200u: goto L_08A88D38;
    case 201u: goto L_08A88D54;
    case 202u: goto L_08A88D64;
    case 203u: goto L_08A88D6C;
    case 204u: goto L_08A88D74;
    case 205u: goto L_08A88D80;
    case 206u: goto L_08A88D90;
    case 207u: goto L_08A88D98;
    case 208u: goto L_08A88DA4;
    case 209u: goto L_08A88DAC;
    case 210u: goto L_08A88DB4;
    case 211u: goto L_08A88DBC;
    case 212u: goto L_08A88DC4;
    case 213u: goto L_08A88DCC;
    case 214u: goto L_08A88DD4;
    case 215u: goto L_08A88DE0;
    case 216u: goto L_08A88DE8;
    case 217u: goto L_08A88DF0;
    case 218u: goto L_08A88DFC;
    case 219u: goto L_08A88E08;
    case 220u: goto L_08A88E14;
    case 221u: goto L_08A88E1C;
    case 222u: goto L_08A88E24;
    case 223u: goto L_08A88E34;
    case 224u: goto L_08A88E3C;
    case 225u: goto L_08A88E4C;
    case 226u: goto L_08A88E54;
    case 227u: goto L_08A88E64;
    case 228u: goto L_08A88E6C;
    case 229u: goto L_08A88E78;
    case 230u: goto L_08A88E84;
    case 231u: goto L_08A88E8C;
    case 232u: goto L_08A88E9C;
    case 233u: goto L_08A88EA4;
    case 234u: goto L_08A88EAC;
    case 235u: goto L_08A88EB4;
    case 236u: goto L_08A88EBC;
    case 237u: goto L_08A88EC8;
    case 238u: goto L_08A88ED4;
    case 239u: goto L_08A88EE4;
    case 240u: goto L_08A88EF0;
    case 241u: goto L_08A88EF4;
    case 242u: goto L_08A88EF8;
    case 243u: goto L_08A88F00;
    case 244u: goto L_08A88F10;
    case 245u: goto L_08A88F18;
    case 246u: goto L_08A88F20;
    case 247u: goto L_08A88F2C;
    case 248u: goto L_08A88F34;
    case 249u: goto L_08A88F44;
    case 250u: goto L_08A88F4C;
    case 251u: goto L_08A88F58;
    case 252u: goto L_08A88F60;
    case 253u: goto L_08A88F68;
    case 254u: goto L_08A88F78;
    case 255u: goto L_08A88F80;
    case 256u: goto L_08A88F9C;
    case 257u: goto L_08A88FA4;
    case 258u: goto L_08A88FAC;
    case 259u: goto L_08A88FB4;
    case 260u: goto L_08A88FC4;
    case 261u: goto L_08A88FCC;
    case 262u: goto L_08A88FE8;
    case 263u: goto L_08A88FF0;
    case 264u: goto L_08A88FF8;
    case 265u: goto L_08A89000;
    case 266u: goto L_08A89010;
    case 267u: goto L_08A89018;
    case 268u: goto L_08A89034;
    case 269u: goto L_08A8903C;
    case 270u: goto L_08A8904C;
    case 271u: goto L_08A89054;
    case 272u: goto L_08A8905C;
    case 273u: goto L_08A89064;
    case 274u: goto L_08A8906C;
    case 275u: goto L_08A89074;
    case 276u: goto L_08A89088;
    case 277u: goto L_08A89094;
    case 278u: goto L_08A8909C;
    case 279u: goto L_08A890A4;
    case 280u: goto L_08A890AC;
    case 281u: goto L_08A890B8;
    case 282u: goto L_08A890CC;
    case 283u: goto L_08A890D4;
    case 284u: goto L_08A890E4;
    case 285u: goto L_08A890EC;
    case 286u: goto L_08A890F4;
    case 287u: goto L_08A89108;
    case 288u: goto L_08A89110;
    case 289u: goto L_08A89118;
    case 290u: goto L_08A8912C;
    case 291u: goto L_08A89134;
    case 292u: goto L_08A8913C;
    case 293u: goto L_08A89144;
    case 294u: goto L_08A8914C;
    case 295u: goto L_08A89154;
    case 296u: goto L_08A89160;
    case 297u: goto L_08A89168;
    case 298u: goto L_08A89170;
    case 299u: goto L_08A89178;
    case 300u: goto L_08A8918C;
    case 301u: goto L_08A89194;
    case 302u: goto L_08A8919C;
    case 303u: goto L_08A891A4;
    case 304u: goto L_08A891AC;
    case 305u: goto L_08A891B4;
    case 306u: goto L_08A891C0;
    case 307u: goto L_08A891C8;
    case 308u: goto L_08A891D0;
    case 309u: goto L_08A891D8;
    case 310u: goto L_08A891EC;
    case 311u: goto L_08A891F4;
    case 312u: goto L_08A891FC;
    case 313u: goto L_08A89210;
    case 314u: goto L_08A89218;
    case 315u: goto L_08A89220;
    case 316u: goto L_08A89228;
    case 317u: goto L_08A89238;
    case 318u: goto L_08A89240;
    case 319u: goto L_08A89254;
    case 320u: goto L_08A8925C;
    case 321u: goto L_08A89264;
    case 322u: goto L_08A8926C;
    case 323u: goto L_08A89274;
    case 324u: goto L_08A8928C;
    case 325u: goto L_08A89294;
    case 326u: goto L_08A8929C;
    case 327u: goto L_08A892A4;
    case 328u: goto L_08A892B8;
    case 329u: goto L_08A892C0;
    case 330u: goto L_08A892C8;
    case 331u: goto L_08A892D0;
    case 332u: goto L_08A892F0;
    case 333u: goto L_08A892FC;
    case 334u: goto L_08A89304;
    case 335u: goto L_08A8930C;
    case 336u: goto L_08A89314;
    case 337u: goto L_08A8931C;
    case 338u: goto L_08A89324;
    case 339u: goto L_08A8932C;
    case 340u: goto L_08A89334;
    case 341u: goto L_08A8933C;
    case 342u: goto L_08A89348;
    case 343u: goto L_08A89354;
    case 344u: goto L_08A8935C;
    case 345u: goto L_08A89374;
    case 346u: goto L_08A8937C;
    case 347u: goto L_08A89384;
    case 348u: goto L_08A8938C;
    case 349u: goto L_08A89394;
    case 350u: goto L_08A8939C;
    case 351u: goto L_08A893A4;
    case 352u: goto L_08A893AC;
    case 353u: goto L_08A893B8;
    case 354u: goto L_08A893C4;
    case 355u: goto L_08A893CC;
    case 356u: goto L_08A893D4;
    case 357u: goto L_08A893E8;
    case 358u: goto L_08A89404;
    case 359u: goto L_08A8940C;
    case 360u: goto L_08A89424;
    case 361u: goto L_08A8942C;
    case 362u: goto L_08A8943C;
    case 363u: goto L_08A8944C;
    case 364u: goto L_08A89460;
    case 365u: goto L_08A89468;
    case 366u: goto L_08A89470;
    case 367u: goto L_08A89478;
    case 368u: goto L_08A89484;
    case 369u: goto L_08A89498;
    case 370u: goto L_08A894B4;
    case 371u: goto L_08A894BC;
    case 372u: goto L_08A894C4;
    case 373u: goto L_08A894CC;
    case 374u: goto L_08A894D8;
    case 375u: goto L_08A894E0;
    case 376u: goto L_08A894EC;
    case 377u: goto L_08A894F4;
    case 378u: goto L_08A894FC;
    case 379u: goto L_08A8950C;
    case 380u: goto L_08A89514;
    case 381u: goto L_08A8951C;
    case 382u: goto L_08A89528;
    case 383u: goto L_08A89530;
    case 384u: goto L_08A89538;
    case 385u: goto L_08A89540;
    case 386u: goto L_08A89548;
    case 387u: goto L_08A89550;
    case 388u: goto L_08A89568;
    case 389u: goto L_08A89578;
    case 390u: goto L_08A89580;
    case 391u: goto L_08A8958C;
    case 392u: goto L_08A895AC;
    case 393u: goto L_08A895B4;
    case 394u: goto L_08A895BC;
    case 395u: goto L_08A895CC;
    case 396u: goto L_08A895D4;
    case 397u: goto L_08A895E0;
    case 398u: goto L_08A895EC;
    case 399u: goto L_08A895F4;
    case 400u: goto L_08A89600;
    case 401u: goto L_08A89608;
    case 402u: goto L_08A89610;
    case 403u: goto L_08A89618;
    case 404u: goto L_08A89628;
    case 405u: goto L_08A89638;
    case 406u: goto L_08A8964C;
    case 407u: goto L_08A89654;
    case 408u: goto L_08A8965C;
    case 409u: goto L_08A8966C;
    case 410u: goto L_08A89674;
    case 411u: goto L_08A8967C;
    case 412u: goto L_08A8968C;
    case 413u: goto L_08A89694;
    case 414u: goto L_08A8969C;
    case 415u: goto L_08A896AC;
    case 416u: goto L_08A896B4;
    case 417u: goto L_08A896BC;
    case 418u: goto L_08A896D0;
    case 419u: goto L_08A896D8;
    case 420u: goto L_08A896E0;
    case 421u: goto L_08A896EC;
    case 422u: goto L_08A896F4;
    case 423u: goto L_08A896FC;
    case 424u: goto L_08A8970C;
    case 425u: goto L_08A89714;
    case 426u: goto L_08A8971C;
    case 427u: goto L_08A8973C;
    case 428u: goto L_08A8974C;
    case 429u: goto L_08A89754;
    case 430u: goto L_08A8975C;
    case 431u: goto L_08A89764;
    case 432u: goto L_08A89780;
    case 433u: goto L_08A8978C;
    case 434u: goto L_08A897A4;
    case 435u: goto L_08A897B0;
    case 436u: goto L_08A897C8;
    case 437u: goto L_08A897D4;
    case 438u: goto L_08A897DC;
    case 439u: goto L_08A897E8;
    case 440u: goto L_08A897F0;
    case 441u: goto L_08A897FC;
    case 442u: goto L_08A89804;
    case 443u: goto L_08A89810;
    case 444u: goto L_08A8981C;
    case 445u: goto L_08A89828;
    case 446u: goto L_08A89850;
    case 447u: goto L_08A89858;
    case 448u: goto L_08A89860;
    case 449u: goto L_08A89864;
    case 450u: goto L_08A8987C;
    case 451u: goto L_08A89884;
    case 452u: goto L_08A898A0;
    case 453u: goto L_08A898AC;
    case 454u: goto L_08A898B8;
    case 455u: goto L_08A898D0;
    case 456u: goto L_08A898E4;
    case 457u: goto L_08A898F4;
    case 458u: goto L_08A89900;
    case 459u: goto L_08A8990C;
    case 460u: goto L_08A89928;
    case 461u: goto L_08A89934;
    case 462u: goto L_08A8993C;
    case 463u: goto L_08A89954;
    case 464u: goto L_08A89960;
    case 465u: goto L_08A89964;
    case 466u: goto L_08A8996C;
    case 467u: goto L_08A89988;
    case 468u: goto L_08A89994;
    case 469u: goto L_08A89998;
    case 470u: goto L_08A899A4;
    case 471u: goto L_08A899AC;
    case 472u: goto L_08A899B4;
    case 473u: goto L_08A899CC;
    case 474u: goto L_08A899D8;
    case 475u: goto L_08A899E4;
    case 476u: goto L_08A899EC;
    case 477u: goto L_08A899F4;
    case 478u: goto L_08A899FC;
    case 479u: goto L_08A89A04;
    case 480u: goto L_08A89A0C;
    case 481u: goto L_08A89A14;
    case 482u: goto L_08A89A1C;
    case 483u: goto L_08A89A24;
    case 484u: goto L_08A89A34;
    case 485u: goto L_08A89A3C;
    case 486u: goto L_08A89A4C;
    case 487u: goto L_08A89A54;
    case 488u: goto L_08A89A84;
    case 489u: goto L_08A89A8C;
    case 490u: goto L_08A89A9C;
    case 491u: goto L_08A89AA8;
    case 492u: goto L_08A89AB0;
    case 493u: goto L_08A89AC0;
    case 494u: goto L_08A89AE0;
    case 495u: goto L_08A89AE8;
    case 496u: goto L_08A89AF8;
    case 497u: goto L_08A89B18;
    case 498u: goto L_08A89B20;
    case 499u: goto L_08A89B30;
    case 500u: goto L_08A89B50;
    case 501u: goto L_08A89B58;
    case 502u: goto L_08A89B68;
    case 503u: goto L_08A89B88;
    case 504u: goto L_08A89B90;
    case 505u: goto L_08A89BA0;
    case 506u: goto L_08A89BA8;
    case 507u: goto L_08A89BB4;
    case 508u: goto L_08A89BC4;
    case 509u: goto L_08A89BCC;
    case 510u: goto L_08A89BD8;
    case 511u: goto L_08A89BE0;
    case 512u: goto L_08A89BE8;
    case 513u: goto L_08A89BF0;
    case 514u: goto L_08A89BFC;
    case 515u: goto L_08A89C08;
    case 516u: goto L_08A89C14;
    case 517u: goto L_08A89C1C;
    case 518u: goto L_08A89C24;
    case 519u: goto L_08A89C30;
    case 520u: goto L_08A89C38;
    case 521u: goto L_08A89C40;
    case 522u: goto L_08A89C4C;
    case 523u: goto L_08A89C54;
    case 524u: goto L_08A89C5C;
    case 525u: goto L_08A89C68;
    case 526u: goto L_08A89C70;
    case 527u: goto L_08A89C78;
    case 528u: goto L_08A89C88;
    case 529u: goto L_08A89C90;
    case 530u: goto L_08A89C98;
    case 531u: goto L_08A89CA4;
    case 532u: goto L_08A89CB0;
    case 533u: goto L_08A89CB8;
    case 534u: goto L_08A89CBC;
    case 535u: goto L_08A89CCC;
    case 536u: goto L_08A89CD4;
    case 537u: goto L_08A89CF4;
    case 538u: goto L_08A89D10;
    case 539u: goto L_08A89D18;
    case 540u: goto L_08A89D20;
    case 541u: goto L_08A89D30;
    case 542u: goto L_08A89D38;
    case 543u: goto L_08A89D44;
    case 544u: goto L_08A89D50;
    case 545u: goto L_08A89D58;
    case 546u: goto L_08A89D68;
    case 547u: goto L_08A89D70;
    case 548u: goto L_08A89D78;
    case 549u: goto L_08A89D80;
    case 550u: goto L_08A89D88;
    case 551u: goto L_08A89D98;
    case 552u: goto L_08A89DA8;
    case 553u: goto L_08A89DB8;
    case 554u: goto L_08A89DC0;
    case 555u: goto L_08A89DC8;
    case 556u: goto L_08A89DD8;
    case 557u: goto L_08A89DE0;
    case 558u: goto L_08A89DE8;
    case 559u: goto L_08A89DFC;
    case 560u: goto L_08A89E04;
    case 561u: goto L_08A89E10;
    case 562u: goto L_08A89E18;
    case 563u: goto L_08A89E20;
    case 564u: goto L_08A89E30;
    case 565u: goto L_08A89E38;
    case 566u: goto L_08A89E40;
    case 567u: goto L_08A89E48;
    case 568u: goto L_08A89E60;
    case 569u: goto L_08A89E68;
    case 570u: goto L_08A89E88;
    case 571u: goto L_08A89E8C;
    case 572u: goto L_08A89E98;
    case 573u: goto L_08A89EA0;
    case 574u: goto L_08A89EA8;
    case 575u: goto L_08A89EB0;
    case 576u: goto L_08A89EB8;
    case 577u: goto L_08A89ED0;
    case 578u: goto L_08A89EDC;
    case 579u: goto L_08A89EE8;
    case 580u: goto L_08A89EF0;
    case 581u: goto L_08A89EF4;
    case 582u: goto L_08A89F08;
    case 583u: goto L_08A89F20;
    case 584u: goto L_08A89F28;
    case 585u: goto L_08A89F30;
    case 586u: goto L_08A89F54;
    case 587u: goto L_08A89F5C;
    case 588u: goto L_08A89F74;
    case 589u: goto L_08A89F7C;
    case 590u: goto L_08A89F84;
    case 591u: goto L_08A89F90;
    case 592u: goto L_08A89F94;
    case 593u: goto L_08A89FA0;
    case 594u: goto L_08A89FC0;
    case 595u: goto L_08A89FDC;
    case 596u: goto L_08A89FE4;
    case 597u: goto L_08A89FF4;
    case 598u: goto L_08A89FFC;
    case 599u: goto L_08A8A00C;
    case 600u: goto L_08A8A020;
    case 601u: goto L_08A8A028;
    case 602u: goto L_08A8A058;
    case 603u: goto L_08A8A060;
    case 604u: goto L_08A8A070;
    case 605u: goto L_08A8A07C;
    case 606u: goto L_08A8A084;
    case 607u: goto L_08A8A094;
    case 608u: goto L_08A8A0B4;
    case 609u: goto L_08A8A0BC;
    case 610u: goto L_08A8A0CC;
    case 611u: goto L_08A8A0EC;
    case 612u: goto L_08A8A0F4;
    case 613u: goto L_08A8A104;
    case 614u: goto L_08A8A124;
    case 615u: goto L_08A8A12C;
    case 616u: goto L_08A8A13C;
    case 617u: goto L_08A8A15C;
    case 618u: goto L_08A8A164;
    case 619u: goto L_08A8A174;
    case 620u: goto L_08A8A194;
    case 621u: goto L_08A8A19C;
    case 622u: goto L_08A8A1AC;
    case 623u: goto L_08A8A1CC;
    case 624u: goto L_08A8A1D4;
    case 625u: goto L_08A8A1E4;
    case 626u: goto L_08A8A1EC;
    case 627u: goto L_08A8A1F8;
    case 628u: goto L_08A8A200;
    case 629u: goto L_08A8A208;
    case 630u: goto L_08A8A21C;
    case 631u: goto L_08A8A224;
    case 632u: goto L_08A8A230;
    case 633u: goto L_08A8A238;
    case 634u: goto L_08A8A240;
    case 635u: goto L_08A8A248;
    case 636u: goto L_08A8A254;
    case 637u: goto L_08A8A25C;
    case 638u: goto L_08A8A264;
    case 639u: goto L_08A8A274;
    case 640u: goto L_08A8A27C;
    case 641u: goto L_08A8A284;
    case 642u: goto L_08A8A290;
    case 643u: goto L_08A8A2A0;
    case 644u: goto L_08A8A2AC;
    case 645u: goto L_08A8A2B4;
    case 646u: goto L_08A8A2BC;
    case 647u: goto L_08A8A2C8;
    case 648u: goto L_08A8A2D0;
    case 649u: goto L_08A8A2D8;
    case 650u: goto L_08A8A2E4;
    case 651u: goto L_08A8A2F0;
    case 652u: goto L_08A8A2FC;
    case 653u: goto L_08A8A304;
    case 654u: goto L_08A8A30C;
    case 655u: goto L_08A8A31C;
    case 656u: goto L_08A8A328;
    case 657u: goto L_08A8A330;
    case 658u: goto L_08A8A33C;
    case 659u: goto L_08A8A344;
    case 660u: goto L_08A8A34C;
    case 661u: goto L_08A8A354;
    case 662u: goto L_08A8A35C;
    case 663u: goto L_08A8A364;
    case 664u: goto L_08A8A374;
    case 665u: goto L_08A8A380;
    case 666u: goto L_08A8A384;
    case 667u: goto L_08A8A38C;
    case 668u: goto L_08A8A394;
    case 669u: goto L_08A8A39C;
    case 670u: goto L_08A8A3AC;
    case 671u: goto L_08A8A3B4;
    case 672u: goto L_08A8A3C0;
    case 673u: goto L_08A8A3C8;
    case 674u: goto L_08A8A3D0;
    case 675u: goto L_08A8A3D8;
    case 676u: goto L_08A8A3E0;
    case 677u: goto L_08A8A3E8;
    case 678u: goto L_08A8A3F0;
    case 679u: goto L_08A8A400;
    case 680u: goto L_08A8A408;
    case 681u: goto L_08A8A410;
    case 682u: goto L_08A8A41C;
    case 683u: goto L_08A8A42C;
    case 684u: goto L_08A8A43C;
    case 685u: goto L_08A8A444;
    case 686u: goto L_08A8A44C;
    case 687u: goto L_08A8A470;
    case 688u: goto L_08A8A478;
    case 689u: goto L_08A8A490;
    case 690u: goto L_08A8A498;
    case 691u: goto L_08A8A4AC;
    case 692u: goto L_08A8A4B4;
    case 693u: goto L_08A8A4C0;
    case 694u: goto L_08A8A4DC;
    case 695u: goto L_08A8A4E4;
    case 696u: goto L_08A8A4F0;
    case 697u: goto L_08A8A4F4;
    case 698u: goto L_08A8A504;
    case 699u: goto L_08A8A548;
    case 700u: goto L_08A8A558;
    case 701u: goto L_08A8A560;
    case 702u: goto L_08A8A570;
    case 703u: goto L_08A8A578;
    case 704u: goto L_08A8A588;
    case 705u: goto L_08A8A59C;
    case 706u: goto L_08A8A5A8;
    case 707u: goto L_08A8A5B0;
    case 708u: goto L_08A8A5C4;
    case 709u: goto L_08A8A5CC;
    case 710u: goto L_08A8A5E0;
    case 711u: goto L_08A8A5EC;
    case 712u: goto L_08A8A5FC;
    case 713u: goto L_08A8A648;
    case 714u: goto L_08A8A658;
    case 715u: goto L_08A8A6A4;
    case 716u: goto L_08A8A6B4;
    case 717u: goto L_08A8A710;
    case 718u: goto L_08A8A71C;
    case 719u: goto L_08A8A738;
    case 720u: goto L_08A8A740;
    case 721u: goto L_08A8A74C;
    case 722u: goto L_08A8A764;
    case 723u: goto L_08A8A76C;
    case 724u: goto L_08A8A778;
    case 725u: goto L_08A8A780;
    case 726u: goto L_08A8A78C;
    case 727u: goto L_08A8A794;
    case 728u: goto L_08A8A7A4;
    case 729u: goto L_08A8A7AC;
    case 730u: goto L_08A8A7B8;
    case 731u: goto L_08A8A7C0;
    case 732u: goto L_08A8A7D0;
    case 733u: goto L_08A8A7D8;
    case 734u: goto L_08A8A7E4;
    case 735u: goto L_08A8A7EC;
    case 736u: goto L_08A8A7F8;
    case 737u: goto L_08A8A800;
    case 738u: goto L_08A8A80C;
    case 739u: goto L_08A8A814;
    case 740u: goto L_08A8A820;
    case 741u: goto L_08A8A824;
    case 742u: goto L_08A8A82C;
    case 743u: goto L_08A8A834;
    case 744u: goto L_08A8A840;
    case 745u: goto L_08A8A84C;
    case 746u: goto L_08A8A858;
    case 747u: goto L_08A8A864;
    case 748u: goto L_08A8A874;
    case 749u: goto L_08A8A884;
    case 750u: goto L_08A8A88C;
    case 751u: goto L_08A8A898;
    case 752u: goto L_08A8A8BC;
    case 753u: goto L_08A8A8C4;
    case 754u: goto L_08A8A8CC;
    case 755u: goto L_08A8A8D8;
    case 756u: goto L_08A8A8E4;
    case 757u: goto L_08A8A8F0;
    case 758u: goto L_08A8A900;
    case 759u: goto L_08A8A910;
    case 760u: goto L_08A8A920;
    case 761u: goto L_08A8A928;
    case 762u: goto L_08A8A934;
    case 763u: goto L_08A8A958;
    case 764u: goto L_08A8A960;
    case 765u: goto L_08A8A968;
    case 766u: goto L_08A8A978;
    case 767u: goto L_08A8A980;
    case 768u: goto L_08A8A98C;
    case 769u: goto L_08A8A9B0;
    case 770u: goto L_08A8A9B4;
    case 771u: goto L_08A8A9C0;
    case 772u: goto L_08A8A9C8;
    case 773u: goto L_08A8A9CC;
    case 774u: goto L_08A8A9D4;
    case 775u: goto L_08A8A9E0;
    case 776u: goto L_08A8A9EC;
    case 777u: goto L_08A8A9FC;
    case 778u: goto L_08A8AA0C;
    case 779u: goto L_08A8AA14;
    case 780u: goto L_08A8AA20;
    case 781u: goto L_08A8AA44;
    case 782u: goto L_08A8AA4C;
    case 783u: goto L_08A8AA54;
    case 784u: goto L_08A8AA60;
    case 785u: goto L_08A8AA6C;
    case 786u: goto L_08A8AA7C;
    case 787u: goto L_08A8AA88;
    case 788u: goto L_08A8AA94;
    case 789u: goto L_08A8AAA8;
    case 790u: goto L_08A8AAB8;
    case 791u: goto L_08A8AAC0;
    case 792u: goto L_08A8AAD0;
    case 793u: goto L_08A8AAF4;
    case 794u: goto L_08A8AAFC;
    case 795u: goto L_08A8AB00;
    case 796u: goto L_08A8AB08;
    case 797u: goto L_08A8AB14;
    case 798u: goto L_08A8AB20;
    case 799u: goto L_08A8AB30;
    case 800u: goto L_08A8AB40;
    case 801u: goto L_08A8AB48;
    case 802u: goto L_08A8AB58;
    case 803u: goto L_08A8AB7C;
    case 804u: goto L_08A8AB8C;
    case 805u: goto L_08A8AB94;
    case 806u: goto L_08A8AB9C;
    case 807u: goto L_08A8ABA4;
    case 808u: goto L_08A8ABA8;
    case 809u: goto L_08A8ABAC;
    case 810u: goto L_08A8ABB4;
    case 811u: goto L_08A8ABBC;
    case 812u: goto L_08A8ABC0;
    case 813u: goto L_08A8ABC4;
    case 814u: goto L_08A8ABCC;
    case 815u: goto L_08A8ABD8;
    case 816u: goto L_08A8ABE4;
    case 817u: goto L_08A8ABEC;
    case 818u: goto L_08A8AC18;
    case 819u: goto L_08A8AC20;
    case 820u: goto L_08A8AC28;
    case 821u: goto L_08A8AC30;
    case 822u: goto L_08A8AC5C;
    case 823u: goto L_08A8AC64;
    case 824u: goto L_08A8AC6C;
    case 825u: goto L_08A8AC78;
    case 826u: goto L_08A8AC84;
    case 827u: goto L_08A8AC8C;
    case 828u: goto L_08A8ACB8;
    case 829u: goto L_08A8ACC0;
    case 830u: goto L_08A8ACC8;
    case 831u: goto L_08A8ACD0;
    case 832u: goto L_08A8ACFC;
    case 833u: goto L_08A8AD04;
    case 834u: goto L_08A8AD0C;
    case 835u: goto L_08A8AD1C;
    case 836u: goto L_08A8AD28;
    case 837u: goto L_08A8AD30;
    case 838u: goto L_08A8AD5C;
    case 839u: goto L_08A8AD64;
    case 840u: goto L_08A8AD6C;
    case 841u: goto L_08A8AD74;
    case 842u: goto L_08A8ADA0;
    case 843u: goto L_08A8ADA8;
    case 844u: goto L_08A8ADAC;
    case 845u: goto L_08A8ADB4;
    case 846u: goto L_08A8ADBC;
    case 847u: goto L_08A8ADC8;
    case 848u: goto L_08A8ADD0;
    case 849u: goto L_08A8ADE4;
    case 850u: goto L_08A8ADE8;
    case 851u: goto L_08A8ADF0;
    case 852u: goto L_08A8AE20;
    case 853u: goto L_08A8AE30;
    case 854u: goto L_08A8AE40;
    case 855u: goto L_08A8AE50;
    case 856u: goto L_08A8AE58;
    case 857u: goto L_08A8AE60;
    case 858u: goto L_08A8AE68;
    case 859u: goto L_08A8AE78;
    case 860u: goto L_08A8AE7C;
    case 861u: goto L_08A8AE8C;
    case 862u: goto L_08A8AE94;
    case 863u: goto L_08A8AEA8;
    case 864u: goto L_08A8AED8;
    case 865u: goto L_08A8AEEC;
    case 866u: goto L_08A8AEF4;
    case 867u: goto L_08A8AF08;
    case 868u: goto L_08A8AF10;
    case 869u: goto L_08A8AF24;
    case 870u: goto L_08A8AF28;
    case 871u: goto L_08A8AF30;
    case 872u: goto L_08A8AF44;
    case 873u: goto L_08A8AF4C;
    case 874u: goto L_08A8AF60;
    case 875u: goto L_08A8AF70;
    case 876u: goto L_08A8AF7C;
    case 877u: goto L_08A8AFA4;
    case 878u: goto L_08A8AFE8;
    case 879u: goto L_08A8B00C;
    case 880u: goto L_08A8B014;
    case 881u: goto L_08A8B038;
    case 882u: goto L_08A8B044;
    case 883u: goto L_08A8B04C;
    case 884u: goto L_08A8B06C;
    case 885u: goto L_08A8B074;
    case 886u: goto L_08A8B094;
    case 887u: goto L_08A8B098;
    case 888u: goto L_08A8B0A0;
    case 889u: goto L_08A8B0A8;
    case 890u: goto L_08A8B0C8;
    case 891u: goto L_08A8B0D0;
    case 892u: goto L_08A8B0F0;
    case 893u: goto L_08A8B0F8;
    case 894u: goto L_08A8B110;
    case 895u: goto L_08A8B118;
    case 896u: goto L_08A8B13C;
    case 897u: goto L_08A8B144;
    case 898u: goto L_08A8B168;
    case 899u: goto L_08A8B174;
    case 900u: goto L_08A8B17C;
    case 901u: goto L_08A8B180;
    case 902u: goto L_08A8B18C;
    case 903u: goto L_08A8B190;
    case 904u: goto L_08A8B1B4;
    case 905u: goto L_08A8B1E4;
    case 906u: goto L_08A8B1F8;
    case 907u: goto L_08A8B200;
    case 908u: goto L_08A8B214;
    case 909u: goto L_08A8B21C;
    case 910u: goto L_08A8B230;
    case 911u: goto L_08A8B234;
    case 912u: goto L_08A8B23C;
    case 913u: goto L_08A8B250;
    case 914u: goto L_08A8B258;
    case 915u: goto L_08A8B26C;
    case 916u: goto L_08A8B27C;
    case 917u: goto L_08A8B288;
    case 918u: goto L_08A8B2B0;
    case 919u: goto L_08A8B2F4;
    case 920u: goto L_08A8B318;
    case 921u: goto L_08A8B320;
    case 922u: goto L_08A8B344;
    case 923u: goto L_08A8B350;
    case 924u: goto L_08A8B358;
    case 925u: goto L_08A8B378;
    case 926u: goto L_08A8B380;
    case 927u: goto L_08A8B3A0;
    case 928u: goto L_08A8B3A4;
    case 929u: goto L_08A8B3AC;
    case 930u: goto L_08A8B3B4;
    case 931u: goto L_08A8B3D4;
    case 932u: goto L_08A8B3DC;
    case 933u: goto L_08A8B3FC;
    case 934u: goto L_08A8B404;
    case 935u: goto L_08A8B41C;
    case 936u: goto L_08A8B424;
    case 937u: goto L_08A8B448;
    case 938u: goto L_08A8B450;
    case 939u: goto L_08A8B474;
    case 940u: goto L_08A8B480;
    case 941u: goto L_08A8B488;
    case 942u: goto L_08A8B48C;
    case 943u: goto L_08A8B498;
    case 944u: goto L_08A8B49C;
    case 945u: goto L_08A8B4C0;
    case 946u: goto L_08A8B4E8;
    case 947u: goto L_08A8B51C;
    case 948u: goto L_08A8B524;
    case 949u: goto L_08A8B548;
    case 950u: goto L_08A8B550;
    case 951u: goto L_08A8B584;
    case 952u: goto L_08A8B58C;
    case 953u: goto L_08A8B5B0;
    case 954u: goto L_08A8B5C8;
    case 955u: goto L_08A8B5E4;
    case 956u: goto L_08A8B614;
    case 957u: goto L_08A8B61C;
    case 958u: goto L_08A8B63C;
    case 959u: goto L_08A8B644;
    case 960u: goto L_08A8B674;
    case 961u: goto L_08A8B67C;
    case 962u: goto L_08A8B69C;
    case 963u: goto L_08A8B6A4;
    case 964u: goto L_08A8B6D4;
    case 965u: goto L_08A8B6DC;
    case 966u: goto L_08A8B6FC;
    case 967u: goto L_08A8B704;
    case 968u: goto L_08A8B734;
    case 969u: goto L_08A8B73C;
    case 970u: goto L_08A8B75C;
    case 971u: goto L_08A8B77C;
    case 972u: goto L_08A8B784;
    case 973u: goto L_08A8B7B8;
    case 974u: goto L_08A8B7BC;
    case 975u: goto L_08A8B7C4;
    case 976u: goto L_08A8B7D8;
    case 977u: goto L_08A8B7E8;
    case 978u: goto L_08A8B810;
    case 979u: goto L_08A8B820;
    case 980u: goto L_08A8B828;
    case 981u: goto L_08A8B838;
    case 982u: goto L_08A8B848;
    case 983u: goto L_08A8B858;
    case 984u: goto L_08A8B89C;
    case 985u: goto L_08A8B8B0;
    case 986u: goto L_08A8B8B8;
    case 987u: goto L_08A8B8CC;
    case 988u: goto L_08A8B8D4;
    case 989u: goto L_08A8B8E8;
    case 990u: goto L_08A8B8F0;
    case 991u: goto L_08A8B8FC;
    case 992u: goto L_08A8B904;
    case 993u: goto L_08A8B910;
    case 994u: goto L_08A8B91C;
    case 995u: goto L_08A8B924;
    case 996u: goto L_08A8B930;
    case 997u: goto L_08A8B934;
    case 998u: goto L_08A8B93C;
    case 999u: goto L_08A8B948;
    case 1000u: goto L_08A8B950;
    case 1001u: goto L_08A8B958;
    case 1002u: goto L_08A8B960;
    case 1003u: goto L_08A8B968;
    case 1004u: goto L_08A8B970;
    case 1005u: goto L_08A8B978;
    case 1006u: goto L_08A8B988;
    case 1007u: goto L_08A8B990;
    case 1008u: goto L_08A8B998;
    case 1009u: goto L_08A8B9B0;
    case 1010u: goto L_08A8B9B8;
    case 1011u: goto L_08A8B9C0;
    case 1012u: goto L_08A8B9D8;
    case 1013u: goto L_08A8B9E0;
    case 1014u: goto L_08A8BA0C;
    case 1015u: goto L_08A8BA14;
    case 1016u: goto L_08A8BA68;
    case 1017u: goto L_08A8BA70;
    case 1018u: goto L_08A8BACC;
    case 1019u: goto L_08A8BAD4;
    case 1020u: goto L_08A8BADC;
    case 1021u: goto L_08A8BAE8;
    case 1022u: goto L_08A8BAF0;
    case 1023u: goto L_08A8BB08;
    case 1024u: goto L_08A8BB10;
    case 1025u: goto L_08A8BB30;
    case 1026u: goto L_08A8BB38;
    case 1027u: goto L_08A8BB7C;
    case 1028u: goto L_08A8BB84;
    case 1029u: goto L_08A8BBC8;
    case 1030u: goto L_08A8BBD0;
    case 1031u: goto L_08A8BBD8;
    case 1032u: goto L_08A8BBE0;
    case 1033u: goto L_08A8BBF8;
    case 1034u: goto L_08A8BC00;
    case 1035u: goto L_08A8BC2C;
    case 1036u: goto L_08A8BC34;
    case 1037u: goto L_08A8BC88;
    case 1038u: goto L_08A8BC90;
    case 1039u: goto L_08A8BCE4;
    case 1040u: goto L_08A8BCE8;
    case 1041u: goto L_08A8BCEC;
    case 1042u: goto L_08A8BCF0;
    case 1043u: goto L_08A8BD14;
    case 1044u: goto L_08A8BD34;
    case 1045u: goto L_08A8BD50;
    case 1046u: goto L_08A8BD68;
    case 1047u: goto L_08A8BD70;
    case 1048u: goto L_08A8BD7C;
    case 1049u: goto L_08A8BD8C;
    case 1050u: goto L_08A8BD98;
    case 1051u: goto L_08A8BDA0;
    case 1052u: goto L_08A8BDB0;
    case 1053u: goto L_08A8BDB8;
    case 1054u: goto L_08A8BDD0;
    case 1055u: goto L_08A8BDE0;
    case 1056u: goto L_08A8BDEC;
    case 1057u: goto L_08A8BDF4;
    case 1058u: goto L_08A8BE04;
    case 1059u: goto L_08A8BE0C;
    case 1060u: goto L_08A8BE1C;
    case 1061u: goto L_08A8BE24;
    case 1062u: goto L_08A8BE34;
    case 1063u: goto L_08A8BE3C;
    case 1064u: goto L_08A8BE4C;
    case 1065u: goto L_08A8BE54;
    case 1066u: goto L_08A8BE64;
    case 1067u: goto L_08A8BE6C;
    case 1068u: goto L_08A8BE80;
    case 1069u: goto L_08A8BE88;
    case 1070u: goto L_08A8BE9C;
    case 1071u: goto L_08A8BEA4;
    case 1072u: goto L_08A8BEB8;
    case 1073u: goto L_08A8BEC0;
    case 1074u: goto L_08A8BEC4;
    case 1075u: goto L_08A8BECC;
    case 1076u: goto L_08A8BEE0;
    case 1077u: goto L_08A8BEFC;
    case 1078u: goto L_08A8BF10;
    case 1079u: goto L_08A8BF34;
    case 1080u: goto L_08A8BF3C;
    case 1081u: goto L_08A8BF48;
    case 1082u: goto L_08A8BF54;
    case 1083u: goto L_08A8BF5C;
    case 1084u: goto L_08A8BF80;
    case 1085u: goto L_08A8BF88;
    case 1086u: goto L_08A8BF90;
    case 1087u: goto L_08A8BF98;
    case 1088u: goto L_08A8BFA0;
    case 1089u: goto L_08A8BFA8;
    case 1090u: goto L_08A8BFB0;
    case 1091u: goto L_08A8BFD4;
    case 1092u: goto L_08A8BFDC;
    case 1093u: goto L_08A8BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A88000:
    ctx.set_gpr(31, 0x08A88008u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A88008u) goto L_08A88008;
    return;
L_08A88008:
    ctx.set_gpr(31, 0x08A88010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88010u) goto L_08A88010;
    return;
L_08A88010:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88028u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A88028u) goto L_08A88028;
    return;
L_08A88028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A88030;
    }
L_08A88030:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
        goto L_08A880C0;
    }
    goto L_08A8803C;
L_08A8803C:
    ctx.set_gpr(31, 0x08A88044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88044u) goto L_08A88044;
    return;
L_08A88044:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8805Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8805Cu) goto L_08A8805C;
    return;
L_08A8805C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A88098;
      }
      goto L_08A88064;
    }
L_08A88064:
    ctx.set_gpr(31, 0x08A8806Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8806Cu) goto L_08A8806C;
    return;
L_08A8806C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A88098u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A88098u) goto L_08A88098;
    return;
L_08A88098:
    ctx.set_gpr(31, 0x08A880A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A880A0u) goto L_08A880A0;
    return;
L_08A880A0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A880B8u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A880B8u) goto L_08A880B8;
    return;
L_08A880B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A880C0;
    }
L_08A880C0:
    ctx.set_gpr(16, ctx.gpr[17] ^ ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(31, 0x08A880E0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A880E0u) goto L_08A880E0;
    return;
L_08A880E0:
    ctx.set_gpr(31, 0x08A880E8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A880E8u) goto L_08A880E8;
    return;
L_08A880E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A881C4;
      }
      goto L_08A880F4;
    }
L_08A880F4:
    ctx.set_gpr(31, 0x08A880FCu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A880FCu) goto L_08A880FC;
    return;
L_08A880FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
      if (branch_taken) {
          goto L_08A8810C;
      }
      goto L_08A88104;
    }
L_08A88104:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A8810C;
L_08A8810C:
    ctx.set_gpr(31, 0x08A88114u);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88114u) goto L_08A88114;
    return;
L_08A88114:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88130u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A88130u) goto L_08A88130;
    return;
L_08A88130:
    ctx.set_gpr(31, 0x08A88138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88138u) goto L_08A88138;
    return;
L_08A88138:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A88158u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88158u) goto L_08A88158;
    return;
L_08A88158:
    ctx.set_gpr(31, 0x08A88160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88160u) goto L_08A88160;
    return;
L_08A88160:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8816Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A8816Cu) goto L_08A8816C;
    return;
L_08A8816C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08A88180;
      }
      goto L_08A88174;
    }
L_08A88174:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] ^ 1u);
        goto L_08A88184;
    }
    goto L_08A8817C;
L_08A8817C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    goto L_08A88180;
L_08A88180:
    ctx.set_gpr(2, ctx.gpr[3] ^ 1u);
    goto L_08A88184;
L_08A88184:
    ctx.set_gpr(19, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(31, 0x08A88190u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08A88190u) goto L_08A88190;
    return;
L_08A88190:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 3u);
      if (branch_taken) {
          goto L_08A881A4;
      }
      goto L_08A88198;
    }
L_08A88198:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
        goto L_08A881A8;
    }
    goto L_08A881A0;
L_08A881A0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    goto L_08A881A4;
L_08A881A4:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    goto L_08A881A8;
L_08A881A8:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A881BCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A881BCu) goto L_08A881BC;
    return;
L_08A881BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A881C4;
    }
L_08A881C4:
    ctx.set_gpr(31, 0x08A881CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A881CCu) goto L_08A881CC;
    return;
L_08A881CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A881E4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A881E4u) goto L_08A881E4;
    return;
L_08A881E4:
    ctx.set_gpr(31, 0x08A881ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A881ECu) goto L_08A881EC;
    return;
L_08A881EC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8820Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8820Cu) goto L_08A8820C;
    return;
L_08A8820C:
    ctx.set_gpr(31, 0x08A88214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88214u) goto L_08A88214;
    return;
L_08A88214:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8822Cu);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08A8822Cu) goto L_08A8822C;
    return;
L_08A8822C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A88234;
    }
L_08A88234:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(5));
        goto L_08A8832C;
    }
    goto L_08A88248;
L_08A88248:
    ctx.set_gpr(31, 0x08A88250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88250u) goto L_08A88250;
    return;
L_08A88250:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A88268u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A88268u) goto L_08A88268;
    return;
L_08A88268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A882F0;
      }
      goto L_08A88270;
    }
L_08A88270:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A882B4;
      }
      goto L_08A88278;
    }
L_08A88278:
    ctx.set_gpr(31, 0x08A88280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88280u) goto L_08A88280;
    return;
L_08A88280:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A882ACu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A882ACu) goto L_08A882AC;
    return;
L_08A882AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A882B4;
    }
L_08A882B4:
    ctx.set_gpr(31, 0x08A882BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A882BCu) goto L_08A882BC;
    return;
L_08A882BC:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A882E8u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A882E8u) goto L_08A882E8;
    return;
L_08A882E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A882F0;
    }
L_08A882F0:
    ctx.set_gpr(31, 0x08A882F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A882F8u) goto L_08A882F8;
    return;
L_08A882F8:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A88324u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A88324u) goto L_08A88324;
    return;
L_08A88324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A8832C;
    }
L_08A8832C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[5]);
        goto L_08A8839C;
    }
    goto L_08A88338;
L_08A88338:
    ctx.set_gpr(31, 0x08A88340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88340u) goto L_08A88340;
    return;
L_08A88340:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A88358u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A88358u) goto L_08A88358;
    return;
L_08A88358:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A88360;
    }
L_08A88360:
    ctx.set_gpr(31, 0x08A88368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88368u) goto L_08A88368;
    return;
L_08A88368:
    ctx.set_gpr(3, 15948u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, ctx.gpr[3] | 52429u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A88394u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 64u, 0x0884C3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A88394u) goto L_08A88394;
    return;
L_08A88394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88420;
      }
      goto L_08A8839C;
    }
L_08A8839C:
    ctx.set_gpr(16, ctx.gpr[17] ^ ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(31, 0x08A883BCu);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A883BCu) goto L_08A883BC;
    return;
L_08A883BC:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(16328));
    ctx.set_gpr(31, 0x08A883C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 1269u, 0x08AEBD14u>(ctx, &aot_mem) && ctx.pc == 0x08A883C8u) goto L_08A883C8;
    return;
L_08A883C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, 0u + 0u);
        goto L_08A883D4;
    }
    goto L_08A883D0;
L_08A883D0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(10));
    goto L_08A883D4;
L_08A883D4:
    ctx.set_gpr(31, 0x08A883DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A883DCu) goto L_08A883DC;
    return;
L_08A883DC:
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A883F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A883F8u) goto L_08A883F8;
    return;
L_08A883F8:
    ctx.set_gpr(31, 0x08A88400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88400u) goto L_08A88400;
    return;
L_08A88400:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A88420u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88420u) goto L_08A88420;
    return;
L_08A88420:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A88424;
L_08A88424:
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
L_08A88444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A888D0;
      }
      goto L_08A88464;
    }
L_08A88464:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18300)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A88A44;
    }
    goto L_08A88470;
L_08A88470:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A88474;
L_08A88474:
    ctx.set_gpr(31, 0x08A8847Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8847Cu) goto L_08A8847C;
    return;
L_08A8847C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.gpr[16] >> 31u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 17042u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 37449u << 16u);
    ctx.set_gpr(10, ctx.gpr[2] | 9363u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.hi);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08A8850Cu);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8850Cu) goto L_08A8850C;
    return;
L_08A8850C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88474;
      }
      goto L_08A8851C;
    }
L_08A8851C:
    ctx.set_gpr(31, 0x08A88524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88524u) goto L_08A88524;
    return;
L_08A88524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17166u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17062u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A88558u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88558u) goto L_08A88558;
    return;
L_08A88558:
    ctx.set_gpr(31, 0x08A88560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88560u) goto L_08A88560;
    return;
L_08A88560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17239u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17062u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A88594u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88594u) goto L_08A88594;
    return;
L_08A88594:
    ctx.set_gpr(31, 0x08A8859Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8859Cu) goto L_08A8859C;
    return;
L_08A8859C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17296u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17062u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(35));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A885D0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A885D0u) goto L_08A885D0;
    return;
L_08A885D0:
    ctx.set_gpr(31, 0x08A885D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A885D8u) goto L_08A885D8;
    return;
L_08A885D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17332u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17062u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A88610u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88610u) goto L_08A88610;
    return;
L_08A88610:
    ctx.set_gpr(31, 0x08A88618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88618u) goto L_08A88618;
    return;
L_08A88618:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17369u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17062u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A8864Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8864Cu) goto L_08A8864C;
    return;
L_08A8864C:
    ctx.set_gpr(31, 0x08A88654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88654u) goto L_08A88654;
    return;
L_08A88654:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(31, 0x08A88668u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88668u) goto L_08A88668;
    return;
L_08A88668:
    ctx.set_gpr(31, 0x08A88670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88670u) goto L_08A88670;
    return;
L_08A88670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16179u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x08A886A8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A886A8u) goto L_08A886A8;
    return;
L_08A886A8:
    ctx.set_gpr(31, 0x08A886B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A886B0u) goto L_08A886B0;
    return;
L_08A886B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17182u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16988u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x08A886E8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A886E8u) goto L_08A886E8;
    return;
L_08A886E8:
    ctx.set_gpr(31, 0x08A886F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A886F0u) goto L_08A886F0;
    return;
L_08A886F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17182u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16988u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A88728u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88728u) goto L_08A88728;
    return;
L_08A88728:
    ctx.set_gpr(31, 0x08A88730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88730u) goto L_08A88730;
    return;
L_08A88730:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A88750u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88750u) goto L_08A88750;
    return;
L_08A88750:
    ctx.set_gpr(31, 0x08A88758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88758u) goto L_08A88758;
    return;
L_08A88758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17182u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16988u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16262u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(29));
    ctx.set_gpr(31, 0x08A88790u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88790u) goto L_08A88790;
    return;
L_08A88790:
    ctx.set_gpr(31, 0x08A88798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88798u) goto L_08A88798;
    return;
L_08A88798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17322u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(34));
    ctx.set_gpr(31, 0x08A887D4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A887D4u) goto L_08A887D4;
    return;
L_08A887D4:
    ctx.set_gpr(31, 0x08A887DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A887DCu) goto L_08A887DC;
    return;
L_08A887DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17362u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16268u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(57));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A88814u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88814u) goto L_08A88814;
    return;
L_08A88814:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A88818;
L_08A88818:
    ctx.set_gpr(31, 0x08A88820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88820u) goto L_08A88820;
    return;
L_08A88820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17042u << 16u);
    ctx.set_gpr(3, 17066u << 16u);
    ctx.set_gpr(8, 17026u << 16u);
    ctx.set_gpr(10, 16512u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16253u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 28836u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A88880u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A88880u) goto L_08A88880;
    return;
L_08A88880:
    ctx.set_gpr(31, 0x08A88888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88888u) goto L_08A88888;
    return;
L_08A88888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8889Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8889Cu) goto L_08A8889C;
    return;
L_08A8889C:
    ctx.set_gpr(31, 0x08A888A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A888A4u) goto L_08A888A4;
    return;
L_08A888A4:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A888B8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A88A58;
L_08A888B8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88818;
      }
      goto L_08A888C8;
    }
L_08A888C8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18300), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A88A40;
      }
      goto L_08A888D0;
    }
L_08A888D0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18300)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88A40;
      }
      goto L_08A888DC;
    }
L_08A888DC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A888E0;
L_08A888E0:
    ctx.set_gpr(31, 0x08A888E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A888E8u) goto L_08A888E8;
    return;
L_08A888E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A888F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A888F8u) goto L_08A888F8;
    return;
L_08A888F8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A888E0;
      }
      goto L_08A88908;
    }
L_08A88908:
    ctx.set_gpr(31, 0x08A88910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88910u) goto L_08A88910;
    return;
L_08A88910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88920u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88920u) goto L_08A88920;
    return;
L_08A88920:
    ctx.set_gpr(31, 0x08A88928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88928u) goto L_08A88928;
    return;
L_08A88928:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88938u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(34));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88938u) goto L_08A88938;
    return;
L_08A88938:
    ctx.set_gpr(31, 0x08A88940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88940u) goto L_08A88940;
    return;
L_08A88940:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88950u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(35));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88950u) goto L_08A88950;
    return;
L_08A88950:
    ctx.set_gpr(31, 0x08A88958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88958u) goto L_08A88958;
    return;
L_08A88958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88968u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88968u) goto L_08A88968;
    return;
L_08A88968:
    ctx.set_gpr(31, 0x08A88970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88970u) goto L_08A88970;
    return;
L_08A88970:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88980u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88980u) goto L_08A88980;
    return;
L_08A88980:
    ctx.set_gpr(31, 0x08A88988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88988u) goto L_08A88988;
    return;
L_08A88988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88998u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88998u) goto L_08A88998;
    return;
L_08A88998:
    ctx.set_gpr(31, 0x08A889A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A889A0u) goto L_08A889A0;
    return;
L_08A889A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A889B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A889B0u) goto L_08A889B0;
    return;
L_08A889B0:
    ctx.set_gpr(31, 0x08A889B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A889B8u) goto L_08A889B8;
    return;
L_08A889B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A889C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(42));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A889C8u) goto L_08A889C8;
    return;
L_08A889C8:
    ctx.set_gpr(31, 0x08A889D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A889D0u) goto L_08A889D0;
    return;
L_08A889D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A889E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(55));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A889E0u) goto L_08A889E0;
    return;
L_08A889E0:
    ctx.set_gpr(31, 0x08A889E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A889E8u) goto L_08A889E8;
    return;
L_08A889E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A889F8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A889F8u) goto L_08A889F8;
    return;
L_08A889F8:
    ctx.set_gpr(31, 0x08A88A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88A00u) goto L_08A88A00;
    return;
L_08A88A00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A88A10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(57));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88A10u) goto L_08A88A10;
    return;
L_08A88A10:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A88A14;
L_08A88A14:
    ctx.set_gpr(31, 0x08A88A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88A1Cu) goto L_08A88A1C;
    return;
L_08A88A1C:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88A2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88A2Cu) goto L_08A88A2C;
    return;
L_08A88A2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88A14;
      }
      goto L_08A88A3C;
    }
L_08A88A3C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18300), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08A88A40;
L_08A88A40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A88A44;
L_08A88A44:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88A58:
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] << 4u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13100)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13520), static_cast<std::uint8_t>(ctx.gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88AA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A89484;
      }
      goto L_08A88ACC;
    }
L_08A88ACC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26688));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A88AE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A88AF4u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18140), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88AF4u) goto L_08A88AF4;
    return;
L_08A88AF4:
    ctx.set_gpr(31, 0x08A88AFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A88AFCu) goto L_08A88AFC;
    return;
L_08A88AFC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A88B14u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A88B14u) goto L_08A88B14;
    return;
L_08A88B14:
    ctx.set_gpr(31, 0x08A88B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08A88B1Cu) goto L_08A88B1C;
    return;
L_08A88B1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88B28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08A88B28u) goto L_08A88B28;
    return;
L_08A88B28:
    ctx.set_gpr(31, 0x08A88B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88B30u) goto L_08A88B30;
    return;
L_08A88B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A88B44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88B44u) goto L_08A88B44;
    return;
L_08A88B44:
    ctx.set_gpr(31, 0x08A88B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88B4Cu) goto L_08A88B4C;
    return;
L_08A88B4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A88B60u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88B60u) goto L_08A88B60;
    return;
L_08A88B60:
    ctx.set_gpr(31, 0x08A88B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88B68u) goto L_08A88B68;
    return;
L_08A88B68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A88B78u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32752)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A88B78u) goto L_08A88B78;
    return;
L_08A88B78:
    ctx.set_gpr(31, 0x08A88B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A88B80u) goto L_08A88B80;
    return;
L_08A88B80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32756));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A88BA0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A88BA0u) goto L_08A88BA0;
    return;
L_08A88BA0:
    ctx.set_gpr(31, 0x08A88BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88BA8u) goto L_08A88BA8;
    return;
L_08A88BA8:
    ctx.set_gpr(31, 0x08A88BB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A88BB0u) goto L_08A88BB0;
    return;
L_08A88BB0:
    ctx.set_gpr(31, 0x08A88BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A88BB8u) goto L_08A88BB8;
    return;
L_08A88BB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A88BD8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A88BD8u) goto L_08A88BD8;
    return;
L_08A88BD8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88BE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08A88BE8u) goto L_08A88BE8;
    return;
L_08A88BE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A88BF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A88BF4u) goto L_08A88BF4;
    return;
L_08A88BF4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(31, 0x08A88C00u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A899AC;
L_08A88C00:
    ctx.set_gpr(16, 2230u << 16u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-24224));
    goto L_08A88C0C;
L_08A88C0C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88C24;
      }
      goto L_08A88C18;
    }
L_08A88C18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A88C5C;
    }
    goto L_08A88C24;
L_08A88C24:
    ctx.set_gpr(31, 0x08A88C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88C2Cu) goto L_08A88C2C;
    return;
L_08A88C2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88C3Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88C3Cu) goto L_08A88C3C;
    return;
L_08A88C3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A88C58u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A88C58u) goto L_08A88C58;
    return;
L_08A88C58:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A88C5C;
L_08A88C5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A88C0C;
      }
      goto L_08A88C68;
    }
L_08A88C68:
    ctx.set_gpr(31, 0x08A88C70u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88C70u) goto L_08A88C70;
    return;
L_08A88C70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88C80u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88C80u) goto L_08A88C80;
    return;
L_08A88C80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88C8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 651u, 0x08AF29BCu>(ctx, &aot_mem) && ctx.pc == 0x08A88C8Cu) goto L_08A88C8C;
    return;
L_08A88C8C:
    ctx.set_gpr(31, 0x08A88C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88C94u) goto L_08A88C94;
    return;
L_08A88C94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88CA4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88CA4u) goto L_08A88CA4;
    return;
L_08A88CA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A88CB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08A88CB0u) goto L_08A88CB0;
    return;
L_08A88CB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(31, 0x08A88CBCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18224), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88CBCu) goto L_08A88CBC;
    return;
L_08A88CBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88CCCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88CCCu) goto L_08A88CCC;
    return;
L_08A88CCC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18412)));
    ctx.set_gpr(31, 0x08A88CD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08A88CD8u) goto L_08A88CD8;
    return;
L_08A88CD8:
    ctx.set_gpr(31, 0x08A88CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88CE0u) goto L_08A88CE0;
    return;
L_08A88CE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88CECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A88CECu) goto L_08A88CEC;
    return;
L_08A88CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    goto L_08A88CF8;
L_08A88CF8:
    ctx.set_gpr(31, 0x08A88D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88D00u) goto L_08A88D00;
    return;
L_08A88D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88D0Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88D0Cu) goto L_08A88D0C;
    return;
L_08A88D0C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A89864;
    }
    goto L_08A88D14;
L_08A88D14:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), 0u);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A88D1C;
    }
L_08A88D1C:
    ctx.set_gpr(31, 0x08A88D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88D24u) goto L_08A88D24;
    return;
L_08A88D24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88D30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A88D30u) goto L_08A88D30;
    return;
L_08A88D30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A88D38;
    }
L_08A88D38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A88D54u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88D54u) goto L_08A88D54;
    return;
L_08A88D54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88D64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88D64u) goto L_08A88D64;
    return;
L_08A88D64:
    ctx.set_gpr(31, 0x08A88D6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A88D6Cu) goto L_08A88D6C;
    return;
L_08A88D6C:
    ctx.set_gpr(31, 0x08A88D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88D74u) goto L_08A88D74;
    return;
L_08A88D74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88D80u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88D80u) goto L_08A88D80;
    return;
L_08A88D80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18136)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
        goto L_08A88D98;
    }
    goto L_08A88D90;
L_08A88D90:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18248), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
    goto L_08A88D98;
L_08A88D98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A88DA4;
    }
L_08A88DA4:
    ctx.set_gpr(31, 0x08A88DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88DACu) goto L_08A88DAC;
    return;
L_08A88DAC:
    ctx.set_gpr(31, 0x08A88DB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A88DB4u) goto L_08A88DB4;
    return;
L_08A88DB4:
    ctx.set_gpr(31, 0x08A88DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A88DBCu) goto L_08A88DBC;
    return;
L_08A88DBC:
    ctx.set_gpr(31, 0x08A88DC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A88DC4u) goto L_08A88DC4;
    return;
L_08A88DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A88DCC;
    }
L_08A88DCC:
    ctx.set_gpr(31, 0x08A88DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88DD4u) goto L_08A88DD4;
    return;
L_08A88DD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88DE0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A88DE0u) goto L_08A88DE0;
    return;
L_08A88DE0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18224)));
        goto L_08A88EF8;
    }
    goto L_08A88DE8;
L_08A88DE8:
    ctx.set_gpr(31, 0x08A88DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88DF0u) goto L_08A88DF0;
    return;
L_08A88DF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88DFCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A88DFCu) goto L_08A88DFC;
    return;
L_08A88DFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A88ED4;
      }
      goto L_08A88E08;
    }
L_08A88E08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A88E1C;
      }
      goto L_08A88E14;
    }
L_08A88E14:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18232), 0u);
      if (branch_taken) {
          goto L_08A88EF4;
      }
      goto L_08A88E1C;
    }
L_08A88E1C:
    ctx.set_gpr(31, 0x08A88E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88E24u) goto L_08A88E24;
    return;
L_08A88E24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88E34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88E34u) goto L_08A88E34;
    return;
L_08A88E34:
    ctx.set_gpr(31, 0x08A88E3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A88E3Cu) goto L_08A88E3C;
    return;
L_08A88E3C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88E84;
      }
      goto L_08A88E4C;
    }
L_08A88E4C:
    ctx.set_gpr(31, 0x08A88E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88E54u) goto L_08A88E54;
    return;
L_08A88E54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88E64u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88E64u) goto L_08A88E64;
    return;
L_08A88E64:
    ctx.set_gpr(31, 0x08A88E6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A88E6Cu) goto L_08A88E6C;
    return;
L_08A88E6C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88E84;
      }
      goto L_08A88E78;
    }
L_08A88E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18264)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), ctx.gpr[2]);
    goto L_08A88E84;
L_08A88E84:
    ctx.set_gpr(31, 0x08A88E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88E8Cu) goto L_08A88E8C;
    return;
L_08A88E8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88E9Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88E9Cu) goto L_08A88E9C;
    return;
L_08A88E9C:
    ctx.set_gpr(31, 0x08A88EA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08A88EA4u) goto L_08A88EA4;
    return;
L_08A88EA4:
    ctx.set_gpr(31, 0x08A88EACu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18412), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88EACu) goto L_08A88EAC;
    return;
L_08A88EAC:
    ctx.set_gpr(31, 0x08A88EB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A88EB4u) goto L_08A88EB4;
    return;
L_08A88EB4:
    ctx.set_gpr(31, 0x08A88EBCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88EBCu) goto L_08A88EBC;
    return;
L_08A88EBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88EC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A88EC8u) goto L_08A88EC8;
    return;
L_08A88EC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A88EF0;
      }
      goto L_08A88ED4;
    }
L_08A88ED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A88EE4u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88EE4u) goto L_08A88EE4;
    return;
L_08A88EE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A88EF0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A88EF0u) goto L_08A88EF0;
    return;
L_08A88EF0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18232), 0u);
    goto L_08A88EF4;
L_08A88EF4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18224)));
    goto L_08A88EF8;
L_08A88EF8:
    ctx.set_gpr(31, 0x08A88F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88F00u) goto L_08A88F00;
    return;
L_08A88F00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88F10u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88F10u) goto L_08A88F10;
    return;
L_08A88F10:
    ctx.set_gpr(31, 0x08A88F18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A88F18u) goto L_08A88F18;
    return;
L_08A88F18:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A88F20;
    }
L_08A88F20:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A88FF0;
      }
      goto L_08A88F2C;
    }
L_08A88F2C:
    ctx.set_gpr(31, 0x08A88F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88F34u) goto L_08A88F34;
    return;
L_08A88F34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88F44u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88F44u) goto L_08A88F44;
    return;
L_08A88F44:
    ctx.set_gpr(31, 0x08A88F4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A88F4Cu) goto L_08A88F4C;
    return;
L_08A88F4C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A88FA4;
      }
      goto L_08A88F58;
    }
L_08A88F58:
    ctx.set_gpr(31, 0x08A88F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A88F60u) goto L_08A88F60;
    return;
L_08A88F60:
    ctx.set_gpr(31, 0x08A88F68u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88F68u) goto L_08A88F68;
    return;
L_08A88F68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88F78u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88F78u) goto L_08A88F78;
    return;
L_08A88F78:
    ctx.set_gpr(31, 0x08A88F80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A88F80u) goto L_08A88F80;
    return;
L_08A88F80:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A88F9Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A88F9Cu) goto L_08A88F9C;
    return;
L_08A88F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89034;
      }
      goto L_08A88FA4;
    }
L_08A88FA4:
    ctx.set_gpr(31, 0x08A88FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A88FACu) goto L_08A88FAC;
    return;
L_08A88FAC:
    ctx.set_gpr(31, 0x08A88FB4u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A88FB4u) goto L_08A88FB4;
    return;
L_08A88FB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A88FC4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A88FC4u) goto L_08A88FC4;
    return;
L_08A88FC4:
    ctx.set_gpr(31, 0x08A88FCCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A88FCCu) goto L_08A88FCC;
    return;
L_08A88FCC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32756));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A88FE8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A88FE8u) goto L_08A88FE8;
    return;
L_08A88FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89034;
      }
      goto L_08A88FF0;
    }
L_08A88FF0:
    ctx.set_gpr(31, 0x08A88FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A88FF8u) goto L_08A88FF8;
    return;
L_08A88FF8:
    ctx.set_gpr(31, 0x08A89000u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89000u) goto L_08A89000;
    return;
L_08A89000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89010u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89010u) goto L_08A89010;
    return;
L_08A89010:
    ctx.set_gpr(31, 0x08A89018u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A89018u) goto L_08A89018;
    return;
L_08A89018:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32756));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A89034u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A89034u) goto L_08A89034;
    return;
L_08A89034:
    ctx.set_gpr(31, 0x08A8903Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8903Cu) goto L_08A8903C;
    return;
L_08A8903C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8904Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8904Cu) goto L_08A8904C;
    return;
L_08A8904C:
    ctx.set_gpr(31, 0x08A89054u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08A89054u) goto L_08A89054;
    return;
L_08A89054:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18224), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8905C;
    }
L_08A8905C:
    ctx.set_gpr(31, 0x08A89064u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15840));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 1032u, 0x08AA7C44u>(ctx, &aot_mem) && ctx.pc == 0x08A89064u) goto L_08A89064;
    return;
L_08A89064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8906C;
    }
L_08A8906C:
    ctx.set_gpr(31, 0x08A89074u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89074u) goto L_08A89074;
    return;
L_08A89074:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A89088u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89088u) goto L_08A89088;
    return;
L_08A89088:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89094;
    }
L_08A89094:
    ctx.set_gpr(31, 0x08A8909Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 165u, 0x08A80734u>(ctx, &aot_mem) && ctx.pc == 0x08A8909Cu) goto L_08A8909C;
    return;
L_08A8909C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A890A4;
    }
L_08A890A4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A890D4;
    }
    goto L_08A890AC;
L_08A890AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
        goto L_08A890CC;
    }
    goto L_08A890B8;
L_08A890B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A890CC;
    }
L_08A890CC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A890D4;
    }
L_08A890D4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A890E4;
    }
L_08A890E4:
    ctx.set_gpr(31, 0x08A890ECu);
    // nop
    goto L_08A8BF10;
L_08A890EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A890F4;
    }
L_08A890F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89108;
    }
L_08A89108:
    ctx.set_gpr(31, 0x08A89110u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 166u, 0x08A8C75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89110u) goto L_08A89110;
    return;
L_08A89110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89118;
    }
L_08A89118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08A8912Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8912Cu) goto L_08A8912C;
    return;
L_08A8912C:
    ctx.set_gpr(31, 0x08A89134u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A89134u) goto L_08A89134;
    return;
L_08A89134:
    ctx.set_gpr(31, 0x08A8913Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8913Cu) goto L_08A8913C;
    return;
L_08A8913C:
    ctx.set_gpr(31, 0x08A89144u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A89144u) goto L_08A89144;
    return;
L_08A89144:
    ctx.set_gpr(31, 0x08A8914Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8914Cu) goto L_08A8914C;
    return;
L_08A8914C:
    ctx.set_gpr(31, 0x08A89154u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A89154u) goto L_08A89154;
    return;
L_08A89154:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A89160u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A89160u) goto L_08A89160;
    return;
L_08A89160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89168;
    }
L_08A89168:
    ctx.set_gpr(31, 0x08A89170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8D814u>(ctx, &aot_mem) && ctx.pc == 0x08A89170u) goto L_08A89170;
    return;
L_08A89170:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89178;
    }
L_08A89178:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08A8918Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8918Cu) goto L_08A8918C;
    return;
L_08A8918C:
    ctx.set_gpr(31, 0x08A89194u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A89194u) goto L_08A89194;
    return;
L_08A89194:
    ctx.set_gpr(31, 0x08A8919Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8919Cu) goto L_08A8919C;
    return;
L_08A8919C:
    ctx.set_gpr(31, 0x08A891A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A891A4u) goto L_08A891A4;
    return;
L_08A891A4:
    ctx.set_gpr(31, 0x08A891ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A891ACu) goto L_08A891AC;
    return;
L_08A891AC:
    ctx.set_gpr(31, 0x08A891B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A891B4u) goto L_08A891B4;
    return;
L_08A891B4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A891C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08A891C0u) goto L_08A891C0;
    return;
L_08A891C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A891C8;
    }
L_08A891C8:
    ctx.set_gpr(31, 0x08A891D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 885u, 0x08A8EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A891D0u) goto L_08A891D0;
    return;
L_08A891D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A891D8;
    }
L_08A891D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A891EC;
    }
L_08A891EC:
    ctx.set_gpr(31, 0x08A891F4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 257u, 0x08A9D9F0u>(ctx, &aot_mem) && ctx.pc == 0x08A891F4u) goto L_08A891F4;
    return;
L_08A891F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A891FC;
    }
L_08A891FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89210;
    }
L_08A89210:
    ctx.set_gpr(31, 0x08A89218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08A89218u) goto L_08A89218;
    return;
L_08A89218:
    ctx.set_gpr(31, 0x08A89220u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 527u, 0x08861EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A89220u) goto L_08A89220;
    return;
L_08A89220:
    ctx.set_gpr(31, 0x08A89228u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088AC998u>(ctx, &aot_mem) && ctx.pc == 0x08A89228u) goto L_08A89228;
    return;
L_08A89228:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A89238u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 395u, 0x08A811FCu>(ctx, &aot_mem) && ctx.pc == 0x08A89238u) goto L_08A89238;
    return;
L_08A89238:
    ctx.set_gpr(31, 0x08A89240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89240u) goto L_08A89240;
    return;
L_08A89240:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A89254u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89254u) goto L_08A89254;
    return;
L_08A89254:
    ctx.set_gpr(31, 0x08A8925Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8925Cu) goto L_08A8925C;
    return;
L_08A8925C:
    ctx.set_gpr(31, 0x08A89264u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A89264u) goto L_08A89264;
    return;
L_08A89264:
    ctx.set_gpr(31, 0x08A8926Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8926Cu) goto L_08A8926C;
    return;
L_08A8926C:
    ctx.set_gpr(31, 0x08A89274u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A89274u) goto L_08A89274;
    return;
L_08A89274:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A8928Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8928Cu) goto L_08A8928C;
    return;
L_08A8928C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89294;
    }
L_08A89294:
    ctx.set_gpr(31, 0x08A8929Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 13u, 0x08A90084u>(ctx, &aot_mem) && ctx.pc == 0x08A8929Cu) goto L_08A8929C;
    return;
L_08A8929C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A892A4;
    }
L_08A892A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A892B8;
    }
L_08A892B8:
    ctx.set_gpr(31, 0x08A892C0u);
    // nop
    goto L_08A899B4;
L_08A892C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A892C8;
    }
L_08A892C8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
        goto L_08A8935C;
    }
    goto L_08A892D0;
L_08A892D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18460), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18216), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18196), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18200), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(18236), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A892F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A892F0u) goto L_08A892F0;
    return;
L_08A892F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A892FCu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18208), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A892FCu) goto L_08A892FC;
    return;
L_08A892FC:
    ctx.set_gpr(31, 0x08A89304u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A89304u) goto L_08A89304;
    return;
L_08A89304:
    ctx.set_gpr(31, 0x08A8930Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8930Cu) goto L_08A8930C;
    return;
L_08A8930C:
    ctx.set_gpr(31, 0x08A89314u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A89314u) goto L_08A89314;
    return;
L_08A89314:
    ctx.set_gpr(31, 0x08A8931Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 95u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x08A8931Cu) goto L_08A8931C;
    return;
L_08A8931C:
    ctx.set_gpr(31, 0x08A89324u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A89324u) goto L_08A89324;
    return;
L_08A89324:
    ctx.set_gpr(31, 0x08A8932Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 633u, 0x0885E624u>(ctx, &aot_mem) && ctx.pc == 0x08A8932Cu) goto L_08A8932C;
    return;
L_08A8932C:
    ctx.set_gpr(31, 0x08A89334u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 259u, 0x08A7D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89334u) goto L_08A89334;
    return;
L_08A89334:
    ctx.set_gpr(31, 0x08A8933Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8933Cu) goto L_08A8933C;
    return;
L_08A8933C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A89348u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 1005u, 0x0885FE18u>(ctx, &aot_mem) && ctx.pc == 0x08A89348u) goto L_08A89348;
    return;
L_08A89348:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A89354u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A89354u) goto L_08A89354;
    return;
L_08A89354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8935C;
    }
L_08A8935C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89374;
    }
L_08A89374:
    ctx.set_gpr(31, 0x08A8937Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 313u, 0x08A91490u>(ctx, &aot_mem) && ctx.pc == 0x08A8937Cu) goto L_08A8937C;
    return;
L_08A8937C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89384;
    }
L_08A89384:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A893CC;
      }
      goto L_08A8938C;
    }
L_08A8938C:
    ctx.set_gpr(31, 0x08A89394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A89394u) goto L_08A89394;
    return;
L_08A89394:
    ctx.set_gpr(31, 0x08A8939Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A8939Cu) goto L_08A8939C;
    return;
L_08A8939C:
    ctx.set_gpr(31, 0x08A893A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A893A4u) goto L_08A893A4;
    return;
L_08A893A4:
    ctx.set_gpr(31, 0x08A893ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A893ACu) goto L_08A893AC;
    return;
L_08A893AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A893B8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A893B8u) goto L_08A893B8;
    return;
L_08A893B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A893C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A893C4u) goto L_08A893C4;
    return;
L_08A893C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A893CC;
    }
L_08A893CC:
    ctx.set_gpr(31, 0x08A893D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A893D4u) goto L_08A893D4;
    return;
L_08A893D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(79));
    ctx.set_gpr(31, 0x08A893E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A893E8u) goto L_08A893E8;
    return;
L_08A893E8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89404;
    }
L_08A89404:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A89864;
      }
      goto L_08A8940C;
    }
L_08A8940C:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18396));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A89424u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 763u, 0x08AE2988u>(ctx, &aot_mem) && ctx.pc == 0x08A89424u) goto L_08A89424;
    return;
L_08A89424:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8942C;
    }
L_08A8942C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(19000), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x08A8943Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 396u, 0x08A81204u>(ctx, &aot_mem) && ctx.pc == 0x08A8943Cu) goto L_08A8943C;
    return;
L_08A8943C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8944Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    goto L_08A898E4;
L_08A8944C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89460;
    }
L_08A89460:
    ctx.set_gpr(31, 0x08A89468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1046u, 0x08A938F4u>(ctx, &aot_mem) && ctx.pc == 0x08A89468u) goto L_08A89468;
    return;
L_08A89468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89470;
    }
L_08A89470:
    ctx.set_gpr(31, 0x08A89478u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 2u, 0x08A98028u>(ctx, &aot_mem) && ctx.pc == 0x08A89478u) goto L_08A89478;
    return;
L_08A89478:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89484;
    }
L_08A89484:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89498;
    }
L_08A89498:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26724));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A894B4:
    ctx.set_gpr(31, 0x08A894BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A894BCu) goto L_08A894BC;
    return;
L_08A894BC:
    ctx.set_gpr(31, 0x08A894C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08A894C4u) goto L_08A894C4;
    return;
L_08A894C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A894CC;
    }
L_08A894CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A894D8;
    }
L_08A894D8:
    ctx.set_gpr(31, 0x08A894E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A894E0u) goto L_08A894E0;
    return;
L_08A894E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A894ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A894ECu) goto L_08A894EC;
    return;
L_08A894EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A894F4;
    }
L_08A894F4:
    ctx.set_gpr(31, 0x08A894FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A894FCu) goto L_08A894FC;
    return;
L_08A894FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8950Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8950Cu) goto L_08A8950C;
    return;
L_08A8950C:
    ctx.set_gpr(31, 0x08A89514u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A89514u) goto L_08A89514;
    return;
L_08A89514:
    ctx.set_gpr(31, 0x08A8951Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8951Cu) goto L_08A8951C;
    return;
L_08A8951C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89528u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89528u) goto L_08A89528;
    return;
L_08A89528:
    ctx.set_gpr(31, 0x08A89530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89530u) goto L_08A89530;
    return;
L_08A89530:
    ctx.set_gpr(31, 0x08A89538u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A89538u) goto L_08A89538;
    return;
L_08A89538:
    ctx.set_gpr(31, 0x08A89540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A89540u) goto L_08A89540;
    return;
L_08A89540:
    ctx.set_gpr(31, 0x08A89548u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A89548u) goto L_08A89548;
    return;
L_08A89548:
    ctx.set_gpr(31, 0x08A89550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89550u) goto L_08A89550;
    return;
L_08A89550:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A89568u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A89568u) goto L_08A89568;
    return;
L_08A89568:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(19000));
    ctx.set_gpr(31, 0x08A89578u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 976u, 0x08A93510u>(ctx, &aot_mem) && ctx.pc == 0x08A89578u) goto L_08A89578;
    return;
L_08A89578:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A895B4;
      }
      goto L_08A89580;
    }
L_08A89580:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8958Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8958Cu) goto L_08A8958C;
    return;
L_08A8958C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A895ACu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A895ACu) goto L_08A895AC;
    return;
L_08A895AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A895B4;
    }
L_08A895B4:
    ctx.set_gpr(31, 0x08A895BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A895BCu) goto L_08A895BC;
    return;
L_08A895BC:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A895CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A895CCu) goto L_08A895CC;
    return;
L_08A895CC:
    ctx.set_gpr(31, 0x08A895D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A895D4u) goto L_08A895D4;
    return;
L_08A895D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A895E0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08A898D0;
L_08A895E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A895ECu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A895ECu) goto L_08A895EC;
    return;
L_08A895EC:
    ctx.set_gpr(31, 0x08A895F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A895F4u) goto L_08A895F4;
    return;
L_08A895F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89600u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A89600u) goto L_08A89600;
    return;
L_08A89600:
    ctx.set_gpr(31, 0x08A89608u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A89608u) goto L_08A89608;
    return;
L_08A89608:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A89610;
L_08A89610:
    ctx.set_gpr(31, 0x08A89618u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1231u, 0x08A8FC28u>(ctx, &aot_mem) && ctx.pc == 0x08A89618u) goto L_08A89618;
    return;
L_08A89618:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89628u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A89628u) goto L_08A89628;
    return;
L_08A89628:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A89610;
    }
    goto L_08A89638;
L_08A89638:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(19228), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8964C;
    }
L_08A8964C:
    ctx.set_gpr(31, 0x08A89654u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1011u, 0x08A93740u>(ctx, &aot_mem) && ctx.pc == 0x08A89654u) goto L_08A89654;
    return;
L_08A89654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8965C;
    }
L_08A8965C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8966C;
    }
L_08A8966C:
    ctx.set_gpr(31, 0x08A89674u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A89674u) goto L_08A89674;
    return;
L_08A89674:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8967C;
    }
L_08A8967C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8968C;
    }
L_08A8968C:
    ctx.set_gpr(31, 0x08A89694u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 279u, 0x08A954F8u>(ctx, &aot_mem) && ctx.pc == 0x08A89694u) goto L_08A89694;
    return;
L_08A89694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8969C;
    }
L_08A8969C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A896AC;
    }
L_08A896AC:
    ctx.set_gpr(31, 0x08A896B4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 333u, 0x08A958E0u>(ctx, &aot_mem) && ctx.pc == 0x08A896B4u) goto L_08A896B4;
    return;
L_08A896B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A896BC;
    }
L_08A896BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A896D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x08A896D0u) goto L_08A896D0;
    return;
L_08A896D0:
    ctx.set_gpr(31, 0x08A896D8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 979u, 0x08AA78D4u>(ctx, &aot_mem) && ctx.pc == 0x08A896D8u) goto L_08A896D8;
    return;
L_08A896D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A896E0;
    }
L_08A896E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08A8970C;
    }
    goto L_08A896EC;
L_08A896EC:
    ctx.set_gpr(31, 0x08A896F4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 417u, 0x08A919CCu>(ctx, &aot_mem) && ctx.pc == 0x08A896F4u) goto L_08A896F4;
    return;
L_08A896F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A896FC;
    }
L_08A896FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8970C;
    }
L_08A8970C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89714;
    }
L_08A89714:
    ctx.set_gpr(31, 0x08A8971Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8971Cu) goto L_08A8971C;
    return;
L_08A8971C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8973Cu);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A8973Cu) goto L_08A8973C;
    return;
L_08A8973C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A8974C;
    }
L_08A8974C:
    ctx.set_gpr(31, 0x08A89754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89754u) goto L_08A89754;
    return;
L_08A89754:
    ctx.set_gpr(31, 0x08A8975Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08A8975Cu) goto L_08A8975C;
    return;
L_08A8975C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89860;
      }
      goto L_08A89764;
    }
L_08A89764:
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A89780u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A89780u) goto L_08A89780;
    return;
L_08A89780:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8978Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A8978Cu) goto L_08A8978C;
    return;
L_08A8978C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A897A4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A897A4u) goto L_08A897A4;
    return;
L_08A897A4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A897B0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A897B0u) goto L_08A897B0;
    return;
L_08A897B0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A897C8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A897C8u) goto L_08A897C8;
    return;
L_08A897C8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A897D4u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A897D4u) goto L_08A897D4;
    return;
L_08A897D4:
    ctx.set_gpr(31, 0x08A897DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A897DCu) goto L_08A897DC;
    return;
L_08A897DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A897E8u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 462u, 0x08A85A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A897E8u) goto L_08A897E8;
    return;
L_08A897E8:
    ctx.set_gpr(31, 0x08A897F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A897F0u) goto L_08A897F0;
    return;
L_08A897F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A897FCu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18356));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 535u, 0x0884A0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A897FCu) goto L_08A897FC;
    return;
L_08A897FC:
    ctx.set_gpr(31, 0x08A89804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A89804u) goto L_08A89804;
    return;
L_08A89804:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89810u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18368));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 461u, 0x08A85A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89810u) goto L_08A89810;
    return;
L_08A89810:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A8981Cu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(18344));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8981Cu) goto L_08A8981C;
    return;
L_08A8981C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A89828u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08A8987C;
L_08A89828:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18252), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18212), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18208), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18136), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A89850u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(18264), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A89850u) goto L_08A89850;
    return;
L_08A89850:
    ctx.set_gpr(31, 0x08A89858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89858u) goto L_08A89858;
    return;
L_08A89858:
    ctx.set_gpr(31, 0x08A89860u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08A89860u) goto L_08A89860;
    return;
L_08A89860:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A89864;
L_08A89864:
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
L_08A8987C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1556));
    goto L_08A89884;
L_08A89884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A898A0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A898A0u) goto L_08A898A0;
    return;
L_08A898A0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A898ACu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A898ACu) goto L_08A898AC;
    return;
L_08A898AC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A898B8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A898B8u) goto L_08A898B8;
    return;
L_08A898B8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A898D0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3352), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A898E4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1748u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    goto L_08A898F4;
L_08A898F4:
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A89900;
L_08A89900:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A89934;
      }
      goto L_08A8990C;
    }
L_08A8990C:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(800), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A899A4;
      }
      goto L_08A89928;
    }
L_08A89928:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A899A4;
      }
      goto L_08A89934;
    }
L_08A89934:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
        goto L_08A89964;
    }
    goto L_08A8993C;
L_08A8993C:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(800), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A899A4;
      }
      goto L_08A89954;
    }
L_08A89954:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A899A4;
      }
      goto L_08A89960;
    }
L_08A89960:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    goto L_08A89964;
L_08A89964:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08A89998;
    }
    goto L_08A8996C;
L_08A8996C:
    ctx.set_gpr(3, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(800), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(200));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A899A4;
      }
      goto L_08A89988;
    }
L_08A89988:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A899A4;
      }
      goto L_08A89994;
    }
L_08A89994:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08A89998;
L_08A89998:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A89900;
      }
      goto L_08A899A4;
    }
L_08A899A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A899AC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A899B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18248)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A89BE8;
      }
      goto L_08A899CC;
    }
L_08A899CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A89BC4;
      }
      goto L_08A899D8;
    }
L_08A899D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A899EC;
      }
      goto L_08A899E4;
    }
L_08A899E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89C54;
      }
      goto L_08A899EC;
    }
L_08A899EC:
    ctx.set_gpr(31, 0x08A899F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A899F4u) goto L_08A899F4;
    return;
L_08A899F4:
    ctx.set_gpr(31, 0x08A899FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A899FCu) goto L_08A899FC;
    return;
L_08A899FC:
    ctx.set_gpr(31, 0x08A89A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A89A04u) goto L_08A89A04;
    return;
L_08A89A04:
    ctx.set_gpr(31, 0x08A89A0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08A89A0Cu) goto L_08A89A0C;
    return;
L_08A89A0C:
    ctx.set_gpr(31, 0x08A89A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A89A14u) goto L_08A89A14;
    return;
L_08A89A14:
    ctx.set_gpr(31, 0x08A89A1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A89A1Cu) goto L_08A89A1C;
    return;
L_08A89A1C:
    ctx.set_gpr(31, 0x08A89A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89A24u) goto L_08A89A24;
    return;
L_08A89A24:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89A34u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24256));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A89A34u) goto L_08A89A34;
    return;
L_08A89A34:
    ctx.set_gpr(31, 0x08A89A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A89A3Cu) goto L_08A89A3C;
    return;
L_08A89A3C:
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89A4Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24180));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A89A4Cu) goto L_08A89A4C;
    return;
L_08A89A4C:
    ctx.set_gpr(31, 0x08A89A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89A54u) goto L_08A89A54;
    return;
L_08A89A54:
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
    ctx.set_gpr(31, 0x08A89A84u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A89A84u) goto L_08A89A84;
    return;
L_08A89A84:
    ctx.set_gpr(31, 0x08A89A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89A8Cu) goto L_08A89A8C;
    return;
L_08A89A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89A9Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89A9Cu) goto L_08A89A9C;
    return;
L_08A89A9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89AA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89AA8u) goto L_08A89AA8;
    return;
L_08A89AA8:
    ctx.set_gpr(31, 0x08A89AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89AB0u) goto L_08A89AB0;
    return;
L_08A89AB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89AC0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89AC0u) goto L_08A89AC0;
    return;
L_08A89AC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24112));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A89AE0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A89AE0u) goto L_08A89AE0;
    return;
L_08A89AE0:
    ctx.set_gpr(31, 0x08A89AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89AE8u) goto L_08A89AE8;
    return;
L_08A89AE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89AF8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89AF8u) goto L_08A89AF8;
    return;
L_08A89AF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24088));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A89B18u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A89B18u) goto L_08A89B18;
    return;
L_08A89B18:
    ctx.set_gpr(31, 0x08A89B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89B20u) goto L_08A89B20;
    return;
L_08A89B20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89B30u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89B30u) goto L_08A89B30;
    return;
L_08A89B30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24052));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A89B50u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A89B50u) goto L_08A89B50;
    return;
L_08A89B50:
    ctx.set_gpr(31, 0x08A89B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89B58u) goto L_08A89B58;
    return;
L_08A89B58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89B68u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89B68u) goto L_08A89B68;
    return;
L_08A89B68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24744));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A89B88u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A89B88u) goto L_08A89B88;
    return;
L_08A89B88:
    ctx.set_gpr(31, 0x08A89B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89B90u) goto L_08A89B90;
    return;
L_08A89B90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89BA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A89BA0u) goto L_08A89BA0;
    return;
L_08A89BA0:
    ctx.set_gpr(31, 0x08A89BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89BA8u) goto L_08A89BA8;
    return;
L_08A89BA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89BB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A89BB4u) goto L_08A89BB4;
    return;
L_08A89BB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89CB8;
      }
      goto L_08A89BC4;
    }
L_08A89BC4:
    ctx.set_gpr(31, 0x08A89BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89BCCu) goto L_08A89BCC;
    return;
L_08A89BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89BD8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A89BD8u) goto L_08A89BD8;
    return;
L_08A89BD8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A89CBC;
    }
    goto L_08A89BE0;
L_08A89BE0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), 0u);
      if (branch_taken) {
          goto L_08A89CB8;
      }
      goto L_08A89BE8;
    }
L_08A89BE8:
    ctx.set_gpr(31, 0x08A89BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89BF0u) goto L_08A89BF0;
    return;
L_08A89BF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89BFCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A89BFCu) goto L_08A89BFC;
    return;
L_08A89BFC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A89C38;
    }
    goto L_08A89C08;
L_08A89C08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[3]);
        goto L_08A89C1C;
    }
    goto L_08A89C14;
L_08A89C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89CB8;
      }
      goto L_08A89C1C;
    }
L_08A89C1C:
    ctx.set_gpr(31, 0x08A89C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89C24u) goto L_08A89C24;
    return;
L_08A89C24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89C30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A89C30u) goto L_08A89C30;
    return;
L_08A89C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89CB8;
      }
      goto L_08A89C38;
    }
L_08A89C38:
    ctx.set_gpr(31, 0x08A89C40u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89C40u) goto L_08A89C40;
    return;
L_08A89C40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89C4Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A89C4Cu) goto L_08A89C4C;
    return;
L_08A89C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89CB8;
      }
      goto L_08A89C54;
    }
L_08A89C54:
    ctx.set_gpr(31, 0x08A89C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89C5Cu) goto L_08A89C5C;
    return;
L_08A89C5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89C68u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A89C68u) goto L_08A89C68;
    return;
L_08A89C68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89CB8;
      }
      goto L_08A89C70;
    }
L_08A89C70:
    ctx.set_gpr(31, 0x08A89C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89C78u) goto L_08A89C78;
    return;
L_08A89C78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A89C88u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89C88u) goto L_08A89C88;
    return;
L_08A89C88:
    ctx.set_gpr(31, 0x08A89C90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A89C90u) goto L_08A89C90;
    return;
L_08A89C90:
    ctx.set_gpr(31, 0x08A89C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A89C98u) goto L_08A89C98;
    return;
L_08A89C98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89CA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89CA4u) goto L_08A89CA4;
    return;
L_08A89CA4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(31, 0x08A89CB0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A89CCC;
L_08A89CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18248)));
      if (branch_taken) {
          goto L_08A89CBC;
      }
      goto L_08A89CB8;
    }
L_08A89CB8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A89CBC;
L_08A89CBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89CCC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(328), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89CD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18472)));
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89CF4;
    }
L_08A89CF4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26612));
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89D10:
    ctx.set_gpr(31, 0x08A89D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1049u, 0x08A93944u>(ctx, &aot_mem) && ctx.pc == 0x08A89D18u) goto L_08A89D18;
    return;
L_08A89D18:
    ctx.set_gpr(31, 0x08A89D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A89D20u) goto L_08A89D20;
    return;
L_08A89D20:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A89D30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A89D30u) goto L_08A89D30;
    return;
L_08A89D30:
    ctx.set_gpr(31, 0x08A89D38u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x088641F8u>(ctx, &aot_mem) && ctx.pc == 0x08A89D38u) goto L_08A89D38;
    return;
L_08A89D38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A89D44u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08A898D0;
L_08A89D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A89D50u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 167u, 0x08A94C70u>(ctx, &aot_mem) && ctx.pc == 0x08A89D50u) goto L_08A89D50;
    return;
L_08A89D50:
    ctx.set_gpr(31, 0x08A89D58u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A89D58u) goto L_08A89D58;
    return;
L_08A89D58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89D68;
    }
L_08A89D68:
    ctx.set_gpr(31, 0x08A89D70u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 180u, 0x08A94D54u>(ctx, &aot_mem) && ctx.pc == 0x08A89D70u) goto L_08A89D70;
    return;
L_08A89D70:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A89EF4;
    }
    goto L_08A89D78;
L_08A89D78:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A89D80;
L_08A89D80:
    ctx.set_gpr(31, 0x08A89D88u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1231u, 0x08A8FC28u>(ctx, &aot_mem) && ctx.pc == 0x08A89D88u) goto L_08A89D88;
    return;
L_08A89D88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A89D98u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A89D98u) goto L_08A89D98;
    return;
L_08A89D98:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A89D80;
    }
    goto L_08A89DA8;
L_08A89DA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89DB8;
    }
L_08A89DB8:
    ctx.set_gpr(31, 0x08A89DC0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 279u, 0x08A954F8u>(ctx, &aot_mem) && ctx.pc == 0x08A89DC0u) goto L_08A89DC0;
    return;
L_08A89DC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89DC8;
    }
L_08A89DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89DD8;
    }
L_08A89DD8:
    ctx.set_gpr(31, 0x08A89DE0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 333u, 0x08A958E0u>(ctx, &aot_mem) && ctx.pc == 0x08A89DE0u) goto L_08A89DE0;
    return;
L_08A89DE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89DE8;
    }
L_08A89DE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A89DFCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 733u, 0x08862E68u>(ctx, &aot_mem) && ctx.pc == 0x08A89DFCu) goto L_08A89DFC;
    return;
L_08A89DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89E04;
    }
L_08A89E04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18302)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_08A89E30;
    }
    goto L_08A89E10;
L_08A89E10:
    ctx.set_gpr(31, 0x08A89E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 417u, 0x08A919CCu>(ctx, &aot_mem) && ctx.pc == 0x08A89E18u) goto L_08A89E18;
    return;
L_08A89E18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89E20;
    }
L_08A89E20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89E30;
    }
L_08A89E30:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89E38;
    }
L_08A89E38:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
        goto L_08A89E8C;
    }
    goto L_08A89E40;
L_08A89E40:
    ctx.set_gpr(31, 0x08A89E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89E48u) goto L_08A89E48;
    return;
L_08A89E48:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A89E60u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08A89E60u) goto L_08A89E60;
    return;
L_08A89E60:
    ctx.set_gpr(31, 0x08A89E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89E68u) goto L_08A89E68;
    return;
L_08A89E68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A89E88u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08A89E88u) goto L_08A89E88;
    return;
L_08A89E88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18472)));
    goto L_08A89E8C;
L_08A89E8C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89E98;
    }
L_08A89E98:
    ctx.set_gpr(31, 0x08A89EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A89EA0u) goto L_08A89EA0;
    return;
L_08A89EA0:
    ctx.set_gpr(31, 0x08A89EA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08A89EA8u) goto L_08A89EA8;
    return;
L_08A89EA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A89EF0;
      }
      goto L_08A89EB0;
    }
L_08A89EB0:
    ctx.set_gpr(31, 0x08A89EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A89EB8u) goto L_08A89EB8;
    return;
L_08A89EB8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A89ED0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A89ED0u) goto L_08A89ED0;
    return;
L_08A89ED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A89EDCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A89EDCu) goto L_08A89EDC;
    return;
L_08A89EDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A89EE8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A89EE8u) goto L_08A89EE8;
    return;
L_08A89EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A89EF4;
      }
      goto L_08A89EF0;
    }
L_08A89EF0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A89EF4;
L_08A89EF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A89F20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 176u, 0x08A9981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89F20u) goto L_08A89F20;
    return;
L_08A89F20:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A89F7C;
    }
    goto L_08A89F28;
L_08A89F28:
    ctx.set_gpr(31, 0x08A89F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A89F30u) goto L_08A89F30;
    return;
L_08A89F30:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A89F54u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A89F54u) goto L_08A89F54;
    return;
L_08A89F54:
    ctx.set_gpr(31, 0x08A89F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A89F5Cu) goto L_08A89F5C;
    return;
L_08A89F5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A89F74u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A89F74u) goto L_08A89F74;
    return;
L_08A89F74:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A89F94;
      }
      goto L_08A89F7C;
    }
L_08A89F7C:
    ctx.set_gpr(31, 0x08A89F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A89F84u) goto L_08A89F84;
    return;
L_08A89F84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A89F90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A89F90u) goto L_08A89F90;
    return;
L_08A89F90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A89F94;
L_08A89F94:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89FA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A89FC0;
    }
L_08A89FC0:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26584));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A89FDC:
    ctx.set_gpr(31, 0x08A89FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A89FE4u) goto L_08A89FE4;
    return;
L_08A89FE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A89FF4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32704)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A89FF4u) goto L_08A89FF4;
    return;
L_08A89FF4:
    ctx.set_gpr(31, 0x08A89FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A89FFCu) goto L_08A89FFC;
    return;
L_08A89FFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8A00Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32708)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8A00Cu) goto L_08A8A00C;
    return;
L_08A8A00C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08A8A020u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8A020u) goto L_08A8A020;
    return;
L_08A8A020:
    ctx.set_gpr(31, 0x08A8A028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A028u) goto L_08A8A028;
    return;
L_08A8A028:
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
    ctx.set_gpr(31, 0x08A8A058u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08A8A058u) goto L_08A8A058;
    return;
L_08A8A058:
    ctx.set_gpr(31, 0x08A8A060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A060u) goto L_08A8A060;
    return;
L_08A8A060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A070u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A070u) goto L_08A8A070;
    return;
L_08A8A070:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A07Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A07Cu) goto L_08A8A07C;
    return;
L_08A8A07C:
    ctx.set_gpr(31, 0x08A8A084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A084u) goto L_08A8A084;
    return;
L_08A8A084:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A094u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A094u) goto L_08A8A094;
    return;
L_08A8A094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24024));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A0B4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8A0B4u) goto L_08A8A0B4;
    return;
L_08A8A0B4:
    ctx.set_gpr(31, 0x08A8A0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A0BCu) goto L_08A8A0BC;
    return;
L_08A8A0BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A0CCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A0CCu) goto L_08A8A0CC;
    return;
L_08A8A0CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23984));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A0ECu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8A0ECu) goto L_08A8A0EC;
    return;
L_08A8A0EC:
    ctx.set_gpr(31, 0x08A8A0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A0F4u) goto L_08A8A0F4;
    return;
L_08A8A0F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A104u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A104u) goto L_08A8A104;
    return;
L_08A8A104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23940));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A124u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8A124u) goto L_08A8A124;
    return;
L_08A8A124:
    ctx.set_gpr(31, 0x08A8A12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A12Cu) goto L_08A8A12C;
    return;
L_08A8A12C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A13Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A13Cu) goto L_08A8A13C;
    return;
L_08A8A13C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23900));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A15Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8A15Cu) goto L_08A8A15C;
    return;
L_08A8A15C:
    ctx.set_gpr(31, 0x08A8A164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A164u) goto L_08A8A164;
    return;
L_08A8A164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A174u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A174u) goto L_08A8A174;
    return;
L_08A8A174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23868));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A194u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8A194u) goto L_08A8A194;
    return;
L_08A8A194:
    ctx.set_gpr(31, 0x08A8A19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A19Cu) goto L_08A8A19C;
    return;
L_08A8A19C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A1ACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A1ACu) goto L_08A8A1AC;
    return;
L_08A8A1AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2230u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-23828));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A1CCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1CCu) goto L_08A8A1CC;
    return;
L_08A8A1CC:
    ctx.set_gpr(31, 0x08A8A1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1D4u) goto L_08A8A1D4;
    return;
L_08A8A1D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A1E4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1E4u) goto L_08A8A1E4;
    return;
L_08A8A1E4:
    ctx.set_gpr(31, 0x08A8A1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1ECu) goto L_08A8A1EC;
    return;
L_08A8A1EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A1F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08A8A1F8u) goto L_08A8A1F8;
    return;
L_08A8A1F8:
    ctx.set_gpr(31, 0x08A8A200u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08A8A200u) goto L_08A8A200;
    return;
L_08A8A200:
    ctx.set_gpr(31, 0x08A8A208u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08A8A208u) goto L_08A8A208;
    return;
L_08A8A208:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A21C;
    }
L_08A8A21C:
    ctx.set_gpr(31, 0x08A8A224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A224u) goto L_08A8A224;
    return;
L_08A8A224:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A230u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A230u) goto L_08A8A230;
    return;
L_08A8A230:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8A4F4;
    }
    goto L_08A8A238;
L_08A8A238:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), 0u);
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A240;
    }
L_08A8A240:
    ctx.set_gpr(31, 0x08A8A248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A248u) goto L_08A8A248;
    return;
L_08A8A248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A254u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A254u) goto L_08A8A254;
    return;
L_08A8A254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A25C;
    }
L_08A8A25C:
    ctx.set_gpr(31, 0x08A8A264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A264u) goto L_08A8A264;
    return;
L_08A8A264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A274u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A274u) goto L_08A8A274;
    return;
L_08A8A274:
    ctx.set_gpr(31, 0x08A8A27Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8A27Cu) goto L_08A8A27C;
    return;
L_08A8A27C:
    ctx.set_gpr(31, 0x08A8A284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A284u) goto L_08A8A284;
    return;
L_08A8A284:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A290u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A290u) goto L_08A8A290;
    return;
L_08A8A290:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8A2A0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8A2A0u) goto L_08A8A2A0;
    return;
L_08A8A2A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8A2ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A2ACu) goto L_08A8A2AC;
    return;
L_08A8A2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A2B4;
    }
L_08A8A2B4:
    ctx.set_gpr(31, 0x08A8A2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A2BCu) goto L_08A8A2BC;
    return;
L_08A8A2BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A2C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8A2C8u) goto L_08A8A2C8;
    return;
L_08A8A2C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A2D0;
    }
L_08A8A2D0:
    ctx.set_gpr(31, 0x08A8A2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A2D8u) goto L_08A8A2D8;
    return;
L_08A8A2D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A2E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08A8A2E4u) goto L_08A8A2E4;
    return;
L_08A8A2E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A364;
      }
      goto L_08A8A2F0;
    }
L_08A8A2F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8A304;
    }
    goto L_08A8A2FC;
L_08A8A2FC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
      if (branch_taken) {
          goto L_08A8A384;
      }
      goto L_08A8A304;
    }
L_08A8A304:
    ctx.set_gpr(31, 0x08A8A30Cu);
    // nop
    goto L_08A8B4C0;
L_08A8A30C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8A31Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A31Cu) goto L_08A8A31C;
    return;
L_08A8A31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A328u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8A328u) goto L_08A8A328;
    return;
L_08A8A328:
    ctx.set_gpr(31, 0x08A8A330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A330u) goto L_08A8A330;
    return;
L_08A8A330:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A33Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 789u, 0x08ACEAC4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A33Cu) goto L_08A8A33C;
    return;
L_08A8A33C:
    ctx.set_gpr(31, 0x08A8A344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A344u) goto L_08A8A344;
    return;
L_08A8A344:
    ctx.set_gpr(31, 0x08A8A34Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A34Cu) goto L_08A8A34C;
    return;
L_08A8A34C:
    ctx.set_gpr(31, 0x08A8A354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8A354u) goto L_08A8A354;
    return;
L_08A8A354:
    ctx.set_gpr(31, 0x08A8A35Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8A35Cu) goto L_08A8A35C;
    return;
L_08A8A35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A380;
      }
      goto L_08A8A364;
    }
L_08A8A364:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A8A374u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A374u) goto L_08A8A374;
    return;
L_08A8A374:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A380u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08A8A380u) goto L_08A8A380;
    return;
L_08A8A380:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18232), 0u);
    goto L_08A8A384;
L_08A8A384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A38C;
    }
L_08A8A38C:
    ctx.set_gpr(31, 0x08A8A394u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A89CD4;
L_08A8A394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A39C;
    }
L_08A8A39C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18380)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A3AC;
    }
L_08A8A3AC:
    ctx.set_gpr(31, 0x08A8A3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3B4u) goto L_08A8A3B4;
    return;
L_08A8A3B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A3C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3C0u) goto L_08A8A3C0;
    return;
L_08A8A3C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A4F0;
      }
      goto L_08A8A3C8;
    }
L_08A8A3C8:
    ctx.set_gpr(31, 0x08A8A3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A3D0u) goto L_08A8A3D0;
    return;
L_08A8A3D0:
    ctx.set_gpr(31, 0x08A8A3D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 208u, 0x08AF0DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3D8u) goto L_08A8A3D8;
    return;
L_08A8A3D8:
    ctx.set_gpr(31, 0x08A8A3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3E0u) goto L_08A8A3E0;
    return;
L_08A8A3E0:
    ctx.set_gpr(31, 0x08A8A3E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 455u, 0x08AF1C18u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3E8u) goto L_08A8A3E8;
    return;
L_08A8A3E8:
    ctx.set_gpr(31, 0x08A8A3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A3F0u) goto L_08A8A3F0;
    return;
L_08A8A3F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A8A400u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A400u) goto L_08A8A400;
    return;
L_08A8A400:
    ctx.set_gpr(31, 0x08A8A408u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08A8A408u) goto L_08A8A408;
    return;
L_08A8A408:
    ctx.set_gpr(31, 0x08A8A410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A410u) goto L_08A8A410;
    return;
L_08A8A410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A41Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A41Cu) goto L_08A8A41C;
    return;
L_08A8A41C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8A42Cu);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 165u, 0x08A99780u>(ctx, &aot_mem) && ctx.pc == 0x08A8A42Cu) goto L_08A8A42C;
    return;
L_08A8A42C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19220), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(19221), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08A8A43Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 176u, 0x08A9981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A43Cu) goto L_08A8A43C;
    return;
L_08A8A43C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08A8A4DC;
    }
    goto L_08A8A444;
L_08A8A444:
    ctx.set_gpr(31, 0x08A8A44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A44Cu) goto L_08A8A44C;
    return;
L_08A8A44C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8A470u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8A470u) goto L_08A8A470;
    return;
L_08A8A470:
    ctx.set_gpr(31, 0x08A8A478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A478u) goto L_08A8A478;
    return;
L_08A8A478:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A8A490u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A8A490u) goto L_08A8A490;
    return;
L_08A8A490:
    ctx.set_gpr(31, 0x08A8A498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8A498u) goto L_08A8A498;
    return;
L_08A8A498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8A4ACu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A4ACu) goto L_08A8A4AC;
    return;
L_08A8A4AC:
    ctx.set_gpr(31, 0x08A8A4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08A8A4B4u) goto L_08A8A4B4;
    return;
L_08A8A4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A4C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 76u, 0x08B00684u>(ctx, &aot_mem) && ctx.pc == 0x08A8A4C0u) goto L_08A8A4C0;
    return;
L_08A8A4C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18397), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18380), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18136), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18472), 0u);
      if (branch_taken) {
          goto L_08A8A4F4;
      }
      goto L_08A8A4DC;
    }
L_08A8A4DC:
    ctx.set_gpr(31, 0x08A8A4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 125u, 0x08A7C7E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8A4E4u) goto L_08A8A4E4;
    return;
L_08A8A4E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A8A4F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1021u, 0x08A7F7F8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A4F0u) goto L_08A8A4F0;
    return;
L_08A8A4F0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8A4F4;
L_08A8A4F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8A504:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8A548u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(12));
    goto L_08A8AE94;
L_08A8A548:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(18397)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A5A8;
      }
      goto L_08A8A558;
    }
L_08A8A558:
    ctx.set_gpr(31, 0x08A8A560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A560u) goto L_08A8A560;
    return;
L_08A8A560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8A570u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32704)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08A8A570u) goto L_08A8A570;
    return;
L_08A8A570:
    ctx.set_gpr(31, 0x08A8A578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08A8A578u) goto L_08A8A578;
    return;
L_08A8A578:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08A8A588u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32708)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08A8A588u) goto L_08A8A588;
    return;
L_08A8A588:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(31, 0x08A8A59Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8A59Cu) goto L_08A8A59C;
    return;
L_08A8A59C:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(18397), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-19644), 0u);
    goto L_08A8A5A8;
L_08A8A5A8:
    ctx.set_gpr(31, 0x08A8A5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8A5B0u) goto L_08A8A5B0;
    return;
L_08A8A5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A8A5C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8A5C4u) goto L_08A8A5C4;
    return;
L_08A8A5C4:
    ctx.set_gpr(31, 0x08A8A5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A5CCu) goto L_08A8A5CC;
    return;
L_08A8A5CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 15948u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(31, 0x08A8A5E0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1017u, 0x08A7F7C8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A5E0u) goto L_08A8A5E0;
    return;
L_08A8A5E0:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8A5FC;
      }
      goto L_08A8A5EC;
    }
L_08A8A5EC:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8A5EC;
      }
      goto L_08A8A5FC;
    }
L_08A8A5FC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8A658;
      }
      goto L_08A8A648;
    }
L_08A8A648:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8A648;
      }
      goto L_08A8A658;
    }
L_08A8A658:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A8A6B4;
      }
      goto L_08A8A6A4;
    }
L_08A8A6A4:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8A6A4;
      }
      goto L_08A8A6B4;
    }
L_08A8A6B4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x08A8A710u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19644));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 135u, 0x08A949D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A710u) goto L_08A8A710;
    return;
L_08A8A710:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A8A71Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A71Cu) goto L_08A8A71C;
    return;
L_08A8A71C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19644)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A8A738u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    goto L_08A8AEA8;
L_08A8A738:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A74C;
      }
      goto L_08A8A740;
    }
L_08A8A740:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(19220)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(19220), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A8A74C;
L_08A8A74C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19644)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A8A764u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    goto L_08A8B1B4;
L_08A8A764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A778;
      }
      goto L_08A8A76C;
    }
L_08A8A76C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(19221)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(19221), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A8A778;
L_08A8A778:
    ctx.set_gpr(31, 0x08A8A780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A780u) goto L_08A8A780;
    return;
L_08A8A780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A78Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8A78Cu) goto L_08A8A78C;
    return;
L_08A8A78C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A7A4;
      }
      goto L_08A8A794;
    }
L_08A8A794:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18384), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A820;
      }
      goto L_08A8A7A4;
    }
L_08A8A7A4:
    ctx.set_gpr(31, 0x08A8A7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A7ACu) goto L_08A8A7AC;
    return;
L_08A8A7AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A7B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8A7B8u) goto L_08A8A7B8;
    return;
L_08A8A7B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A7D0;
      }
      goto L_08A8A7C0;
    }
L_08A8A7C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18384), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8A820;
      }
      goto L_08A8A7D0;
    }
L_08A8A7D0:
    ctx.set_gpr(31, 0x08A8A7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A7D8u) goto L_08A8A7D8;
    return;
L_08A8A7D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A7E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8A7E4u) goto L_08A8A7E4;
    return;
L_08A8A7E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A7F8;
      }
      goto L_08A8A7EC;
    }
L_08A8A7EC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18384), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A8A820;
      }
      goto L_08A8A7F8;
    }
L_08A8A7F8:
    ctx.set_gpr(31, 0x08A8A800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A800u) goto L_08A8A800;
    return;
L_08A8A800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8A80Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08A8A80Cu) goto L_08A8A80C;
    return;
L_08A8A80C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
        goto L_08A8A824;
    }
    goto L_08A8A814;
L_08A8A814:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(18384), ctx.gpr[2]);
    goto L_08A8A820;
L_08A8A820:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08A8A824;
L_08A8A824:
    if (ctx.gpr[18] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
        goto L_08A8ADAC;
    }
    goto L_08A8A82C;
L_08A8A82C:
    ctx.set_gpr(31, 0x08A8A834u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A834u) goto L_08A8A834;
    return;
L_08A8A834:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADA8;
      }
      goto L_08A8A840;
    }
L_08A8A840:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A8A8C4;
    }
    goto L_08A8A84C;
L_08A8A84C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A8A858u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A858u) goto L_08A8A858;
    return;
L_08A8A858:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8A864u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A864u) goto L_08A8A864;
    return;
L_08A8A864:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A8A874u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8A874u) goto L_08A8A874;
    return;
L_08A8A874:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8A884u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A8A884u) goto L_08A8A884;
    return;
L_08A8A884:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8A88C;
    }
L_08A8A88C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8A898;
    }
L_08A8A898:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A8A8BCu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A8BCu) goto L_08A8A8BC;
    return;
L_08A8A8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8A8C4;
    }
L_08A8A8C4:
    ctx.set_gpr(31, 0x08A8A8CCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A8AE20;
L_08A8A8CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08A8A9CC;
    }
    goto L_08A8A8D8;
L_08A8A8D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8A9C8;
      }
      goto L_08A8A8E4;
    }
L_08A8A8E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A8A8F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A8F0u) goto L_08A8A8F0;
    return;
L_08A8A8F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A8A960;
    }
    goto L_08A8A900;
L_08A8A900:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8A910u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A910u) goto L_08A8A910;
    return;
L_08A8A910:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8A920u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A8A920u) goto L_08A8A920;
    return;
L_08A8A920:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
        goto L_08A8A9B4;
    }
    goto L_08A8A928;
L_08A8A928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8A9B0;
      }
      goto L_08A8A934;
    }
L_08A8A934:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A8A958u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A958u) goto L_08A8A958;
    return;
L_08A8A958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A9B0;
      }
      goto L_08A8A960;
    }
L_08A8A960:
    ctx.set_gpr(31, 0x08A8A968u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A968u) goto L_08A8A968;
    return;
L_08A8A968:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8A978u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A8A978u) goto L_08A8A978;
    return;
L_08A8A978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8A9B0;
      }
      goto L_08A8A980;
    }
L_08A8A980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8A9B0;
      }
      goto L_08A8A98C;
    }
L_08A8A98C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A8A9B0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8A9B0u) goto L_08A8A9B0;
    return;
L_08A8A9B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_08A8A9B4;
L_08A8A9B4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A8A9C0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8A9C0u) goto L_08A8A9C0;
    return;
L_08A8A9C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8A9C8;
    }
L_08A8A9C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    goto L_08A8A9CC;
L_08A8A9CC:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A8AA4C;
    }
    goto L_08A8A9D4;
L_08A8A9D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A8A9E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8A9E0u) goto L_08A8A9E0;
    return;
L_08A8A9E0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8A9ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8A9ECu) goto L_08A8A9EC;
    return;
L_08A8A9EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A8A9FCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8A9FCu) goto L_08A8A9FC;
    return;
L_08A8A9FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8AA0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A8AA0Cu) goto L_08A8AA0C;
    return;
L_08A8AA0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AA14;
    }
L_08A8AA14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AA20;
    }
L_08A8AA20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A8AA44u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8AA44u) goto L_08A8AA44;
    return;
L_08A8AA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AA4C;
    }
L_08A8AA4C:
    ctx.set_gpr(31, 0x08A8AA54u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A8AE20;
L_08A8AA54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08A8AB00;
    }
    goto L_08A8AA60;
L_08A8AA60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8AAFC;
      }
      goto L_08A8AA6C;
    }
L_08A8AA6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AAFC;
      }
      goto L_08A8AA7C;
    }
L_08A8AA7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8AA88u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8AA88u) goto L_08A8AA88;
    return;
L_08A8AA88:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8AA94u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8AA94u) goto L_08A8AA94;
    return;
L_08A8AA94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A8AAA8u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8AAA8u) goto L_08A8AAA8;
    return;
L_08A8AAA8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8AAB8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A8AAB8u) goto L_08A8AAB8;
    return;
L_08A8AAB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AAC0;
    }
L_08A8AAC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AAD0;
    }
L_08A8AAD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A8AAF4u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8AAF4u) goto L_08A8AAF4;
    return;
L_08A8AAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AAFC;
    }
L_08A8AAFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_08A8AB00;
L_08A8AB00:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AB08;
    }
L_08A8AB08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(31, 0x08A8AB14u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8AB14u) goto L_08A8AB14;
    return;
L_08A8AB14:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8AB20u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8AB20u) goto L_08A8AB20;
    return;
L_08A8AB20:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A8AB30u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8AB30u) goto L_08A8AB30;
    return;
L_08A8AB30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(31, 0x08A8AB40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08A8AB40u) goto L_08A8AB40;
    return;
L_08A8AB40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AB48;
    }
L_08A8AB48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AB7C;
      }
      goto L_08A8AB58;
    }
L_08A8AB58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A8AB7Cu);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08A8AB7Cu) goto L_08A8AB7C;
    return;
L_08A8AB7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-19644)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
      if (branch_taken) {
          goto L_08A8AB94;
      }
      goto L_08A8AB8C;
    }
L_08A8AB8C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08A8AB94;
L_08A8AB94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
      if (branch_taken) {
          goto L_08A8ABA8;
      }
      goto L_08A8AB9C;
    }
L_08A8AB9C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(16, ctx.gpr[4] & 7u);
        goto L_08A8ABAC;
    }
    goto L_08A8ABA4;
L_08A8ABA4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    goto L_08A8ABA8;
L_08A8ABA8:
    ctx.set_gpr(16, ctx.gpr[4] & 7u);
    goto L_08A8ABAC;
L_08A8ABAC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08A8ABC4;
    }
    goto L_08A8ABB4;
L_08A8ABB4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ABC0;
      }
      goto L_08A8ABBC;
    }
L_08A8ABBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    goto L_08A8ABC0;
L_08A8ABC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    goto L_08A8ABC4;
L_08A8ABC4:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
        goto L_08A8AC64;
    }
    goto L_08A8ABCC;
L_08A8ABCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08A8ADE8;
    }
    goto L_08A8ABD8;
L_08A8ABD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8AC20;
      }
      goto L_08A8ABE4;
    }
L_08A8ABE4:
    ctx.set_gpr(31, 0x08A8ABECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ABECu) goto L_08A8ABEC;
    return;
L_08A8ABEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18384)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27004));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8AC18u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AC18u) goto L_08A8AC18;
    return;
L_08A8AC18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AC20;
    }
L_08A8AC20:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AC28;
    }
L_08A8AC28:
    ctx.set_gpr(31, 0x08A8AC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AC30u) goto L_08A8AC30;
    return;
L_08A8AC30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18384)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27004));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8AC5Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AC5Cu) goto L_08A8AC5C;
    return;
L_08A8AC5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AC64;
    }
L_08A8AC64:
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
        goto L_08A8AD04;
    }
    goto L_08A8AC6C;
L_08A8AC6C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AC78;
    }
L_08A8AC78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8ACC0;
      }
      goto L_08A8AC84;
    }
L_08A8AC84:
    ctx.set_gpr(31, 0x08A8AC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AC8Cu) goto L_08A8AC8C;
    return;
L_08A8AC8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18384)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27004));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8ACB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ACB8u) goto L_08A8ACB8;
    return;
L_08A8ACB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8ACC0;
    }
L_08A8ACC0:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8ACC8;
    }
L_08A8ACC8:
    ctx.set_gpr(31, 0x08A8ACD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ACD0u) goto L_08A8ACD0;
    return;
L_08A8ACD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18384)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27004));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8ACFCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ACFCu) goto L_08A8ACFC;
    return;
L_08A8ACFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AD04;
    }
L_08A8AD04:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AD0C;
    }
L_08A8AD0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AD1C;
    }
L_08A8AD1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8AD64;
      }
      goto L_08A8AD28;
    }
L_08A8AD28:
    ctx.set_gpr(31, 0x08A8AD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AD30u) goto L_08A8AD30;
    return;
L_08A8AD30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18384)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27004));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8AD5Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AD5Cu) goto L_08A8AD5C;
    return;
L_08A8AD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AD64;
    }
L_08A8AD64:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8AD6C;
    }
L_08A8AD6C:
    ctx.set_gpr(31, 0x08A8AD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AD74u) goto L_08A8AD74;
    return;
L_08A8AD74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(18384)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27004));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8ADA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8ADA0u) goto L_08A8ADA0;
    return;
L_08A8ADA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8ADA8;
    }
L_08A8ADA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08A8ADAC;
L_08A8ADAC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8ADB4;
    }
L_08A8ADB4:
    ctx.set_gpr(31, 0x08A8ADBCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8ADBCu) goto L_08A8ADBC;
    return;
L_08A8ADBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ADE4;
      }
      goto L_08A8ADC8;
    }
L_08A8ADC8:
    ctx.set_gpr(31, 0x08A8ADD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8ADD0u) goto L_08A8ADD0;
    return;
L_08A8ADD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A8ADE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8ADE4u) goto L_08A8ADE4;
    return;
L_08A8ADE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08A8ADE8;
L_08A8ADE8:
    ctx.set_gpr(31, 0x08A8ADF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 38u, 0x08A94354u>(ctx, &aot_mem) && ctx.pc == 0x08A8ADF0u) goto L_08A8ADF0;
    return;
L_08A8ADF0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE20:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1748u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[1]);
    goto L_08A8AE30;
L_08A8AE30:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A8AE40;
L_08A8AE40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AE8C;
      }
      goto L_08A8AE50;
    }
L_08A8AE50:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A8AE60;
      }
      goto L_08A8AE58;
    }
L_08A8AE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AE8C;
      }
      goto L_08A8AE60;
    }
L_08A8AE60:
    if (ctx.gpr[5] != ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(800)));
        goto L_08A8AE7C;
    }
    goto L_08A8AE68;
L_08A8AE68:
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(800)));
      if (branch_taken) {
          goto L_08A8AE8C;
      }
      goto L_08A8AE78;
    }
L_08A8AE78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(800)));
    goto L_08A8AE7C;
L_08A8AE7C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A8AE40;
      }
      goto L_08A8AE8C;
    }
L_08A8AE8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AE94:
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2016));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8AEA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A8AED8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AED8u) goto L_08A8AED8;
    return;
L_08A8AED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A8AEECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AEECu) goto L_08A8AEEC;
    return;
L_08A8AEEC:
    ctx.set_gpr(31, 0x08A8AEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AEF4u) goto L_08A8AEF4;
    return;
L_08A8AEF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A8AF08u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AF08u) goto L_08A8AF08;
    return;
L_08A8AF08:
    ctx.set_gpr(31, 0x08A8AF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AF10u) goto L_08A8AF10;
    return;
L_08A8AF10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(117));
    ctx.set_gpr(31, 0x08A8AF24u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AF24u) goto L_08A8AF24;
    return;
L_08A8AF24:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A8AF28;
L_08A8AF28:
    ctx.set_gpr(31, 0x08A8AF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AF30u) goto L_08A8AF30;
    return;
L_08A8AF30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8AF44u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AF44u) goto L_08A8AF44;
    return;
L_08A8AF44:
    ctx.set_gpr(31, 0x08A8AF4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AF4Cu) goto L_08A8AF4C;
    return;
L_08A8AF4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8AF60u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8AF60u) goto L_08A8AF60;
    return;
L_08A8AF60:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8AF28;
      }
      goto L_08A8AF70;
    }
L_08A8AF70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8AF7Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 117u, 0x08A94820u>(ctx, &aot_mem) && ctx.pc == 0x08A8AF7Cu) goto L_08A8AF7C;
    return;
L_08A8AF7C:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[2] << 4u);
    goto L_08A8AFA4;
L_08A8AFA4:
    ctx.set_gpr(2, 17436u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(19220)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08A8AFE8u);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8AFE8u) goto L_08A8AFE8;
    return;
L_08A8AFE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B00Cu);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B00Cu) goto L_08A8B00C;
    return;
L_08A8B00C:
    ctx.set_gpr(31, 0x08A8B014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B014u) goto L_08A8B014;
    return;
L_08A8B014:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B038u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B038u) goto L_08A8B038;
    return;
L_08A8B038:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 396 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
        goto L_08A8B098;
    }
    goto L_08A8B044;
L_08A8B044:
    ctx.set_gpr(31, 0x08A8B04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B04Cu) goto L_08A8B04C;
    return;
L_08A8B04C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B06Cu);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B06Cu) goto L_08A8B06C;
    return;
L_08A8B06C:
    ctx.set_gpr(31, 0x08A8B074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B074u) goto L_08A8B074;
    return;
L_08A8B074:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B094u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B094u) goto L_08A8B094;
    return;
L_08A8B094:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    goto L_08A8B098;
L_08A8B098:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A8B180;
    }
    goto L_08A8B0A0;
L_08A8B0A0:
    ctx.set_gpr(31, 0x08A8B0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B0A8u) goto L_08A8B0A8;
    return;
L_08A8B0A8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B0C8u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B0C8u) goto L_08A8B0C8;
    return;
L_08A8B0C8:
    ctx.set_gpr(31, 0x08A8B0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B0D0u) goto L_08A8B0D0;
    return;
L_08A8B0D0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B0F0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B0F0u) goto L_08A8B0F0;
    return;
L_08A8B0F0:
    ctx.set_gpr(31, 0x08A8B0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B0F8u) goto L_08A8B0F8;
    return;
L_08A8B0F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A8B110u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B110u) goto L_08A8B110;
    return;
L_08A8B110:
    ctx.set_gpr(31, 0x08A8B118u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(818));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B118u) goto L_08A8B118;
    return;
L_08A8B118:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8B13Cu);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B13Cu) goto L_08A8B13C;
    return;
L_08A8B13C:
    ctx.set_gpr(31, 0x08A8B144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B144u) goto L_08A8B144;
    return;
L_08A8B144:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8B168u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B168u) goto L_08A8B168;
    return;
L_08A8B168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8B17C;
      }
      goto L_08A8B174;
    }
L_08A8B174:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8B190;
      }
      goto L_08A8B17C;
    }
L_08A8B17C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A8B180;
L_08A8B180:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A8AFA4;
      }
      goto L_08A8B18C;
    }
L_08A8B18C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8B190;
L_08A8B190:
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
L_08A8B1B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A8B1E4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B1E4u) goto L_08A8B1E4;
    return;
L_08A8B1E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08A8B1F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B1F8u) goto L_08A8B1F8;
    return;
L_08A8B1F8:
    ctx.set_gpr(31, 0x08A8B200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B200u) goto L_08A8B200;
    return;
L_08A8B200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08A8B214u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B214u) goto L_08A8B214;
    return;
L_08A8B214:
    ctx.set_gpr(31, 0x08A8B21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B21Cu) goto L_08A8B21C;
    return;
L_08A8B21C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(117));
    ctx.set_gpr(31, 0x08A8B230u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B230u) goto L_08A8B230;
    return;
L_08A8B230:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A8B234;
L_08A8B234:
    ctx.set_gpr(31, 0x08A8B23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B23Cu) goto L_08A8B23C;
    return;
L_08A8B23C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8B250u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B250u) goto L_08A8B250;
    return;
L_08A8B250:
    ctx.set_gpr(31, 0x08A8B258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B258u) goto L_08A8B258;
    return;
L_08A8B258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8B26Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B26Cu) goto L_08A8B26C;
    return;
L_08A8B26C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B234;
      }
      goto L_08A8B27C;
    }
L_08A8B27C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A8B288u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 117u, 0x08A94820u>(ctx, &aot_mem) && ctx.pc == 0x08A8B288u) goto L_08A8B288;
    return;
L_08A8B288:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, 0u + 0u);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[2] << 4u);
    goto L_08A8B2B0;
L_08A8B2B0:
    ctx.set_gpr(2, 17532u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(19221)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08A8B2F4u);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B2F4u) goto L_08A8B2F4;
    return;
L_08A8B2F4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B318u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B318u) goto L_08A8B318;
    return;
L_08A8B318:
    ctx.set_gpr(31, 0x08A8B320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B320u) goto L_08A8B320;
    return;
L_08A8B320:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B344u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B344u) goto L_08A8B344;
    return;
L_08A8B344:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 396 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
        goto L_08A8B3A4;
    }
    goto L_08A8B350;
L_08A8B350:
    ctx.set_gpr(31, 0x08A8B358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B358u) goto L_08A8B358;
    return;
L_08A8B358:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B378u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B378u) goto L_08A8B378;
    return;
L_08A8B378:
    ctx.set_gpr(31, 0x08A8B380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B380u) goto L_08A8B380;
    return;
L_08A8B380:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B3A0u);
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B3A0u) goto L_08A8B3A0;
    return;
L_08A8B3A0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    goto L_08A8B3A4;
L_08A8B3A4:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08A8B48C;
    }
    goto L_08A8B3AC;
L_08A8B3AC:
    ctx.set_gpr(31, 0x08A8B3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B3B4u) goto L_08A8B3B4;
    return;
L_08A8B3B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B3D4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B3D4u) goto L_08A8B3D4;
    return;
L_08A8B3D4:
    ctx.set_gpr(31, 0x08A8B3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B3DCu) goto L_08A8B3DC;
    return;
L_08A8B3DC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B3FCu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B3FCu) goto L_08A8B3FC;
    return;
L_08A8B3FC:
    ctx.set_gpr(31, 0x08A8B404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B404u) goto L_08A8B404;
    return;
L_08A8B404:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A8B41Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B41Cu) goto L_08A8B41C;
    return;
L_08A8B41C:
    ctx.set_gpr(31, 0x08A8B424u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(818));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B424u) goto L_08A8B424;
    return;
L_08A8B424:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8B448u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B448u) goto L_08A8B448;
    return;
L_08A8B448:
    ctx.set_gpr(31, 0x08A8B450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B450u) goto L_08A8B450;
    return;
L_08A8B450:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(89));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8B474u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08A8B474u) goto L_08A8B474;
    return;
L_08A8B474:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8B488;
      }
      goto L_08A8B480;
    }
L_08A8B480:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8B49C;
      }
      goto L_08A8B488;
    }
L_08A8B488:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A8B48C;
L_08A8B48C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A8B2B0;
      }
      goto L_08A8B498;
    }
L_08A8B498:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8B49C;
L_08A8B49C:
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
L_08A8B4C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A8B4E8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B4E8u) goto L_08A8B4E8;
    return;
L_08A8B4E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17144u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A8B51Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B51Cu) goto L_08A8B51C;
    return;
L_08A8B51C:
    ctx.set_gpr(31, 0x08A8B524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B524u) goto L_08A8B524;
    return;
L_08A8B524:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16257u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8B548u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(97));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B548u) goto L_08A8B548;
    return;
L_08A8B548:
    ctx.set_gpr(31, 0x08A8B550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B550u) goto L_08A8B550;
    return;
L_08A8B550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17142u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(31, 0x08A8B584u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B584u) goto L_08A8B584;
    return;
L_08A8B584:
    ctx.set_gpr(31, 0x08A8B58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B58Cu) goto L_08A8B58C;
    return;
L_08A8B58C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16257u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8B5B0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(98));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 252u, 0x08A7D0F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B5B0u) goto L_08A8B5B0;
    return;
L_08A8B5B0:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(99));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(81));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(82));
    goto L_08A8B5C8;
L_08A8B5C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17436u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8B5E4u);
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B5E4u) goto L_08A8B5E4;
    return;
L_08A8B5E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B614u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B614u) goto L_08A8B614;
    return;
L_08A8B614:
    ctx.set_gpr(31, 0x08A8B61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B61Cu) goto L_08A8B61C;
    return;
L_08A8B61C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B63Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B63Cu) goto L_08A8B63C;
    return;
L_08A8B63C:
    ctx.set_gpr(31, 0x08A8B644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B644u) goto L_08A8B644;
    return;
L_08A8B644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17086u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(33));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B674u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B674u) goto L_08A8B674;
    return;
L_08A8B674:
    ctx.set_gpr(31, 0x08A8B67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B67Cu) goto L_08A8B67C;
    return;
L_08A8B67C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B69Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B69Cu) goto L_08A8B69C;
    return;
L_08A8B69C:
    ctx.set_gpr(31, 0x08A8B6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B6A4u) goto L_08A8B6A4;
    return;
L_08A8B6A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A8B6D4u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B6D4u) goto L_08A8B6D4;
    return;
L_08A8B6D4:
    ctx.set_gpr(31, 0x08A8B6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B6DCu) goto L_08A8B6DC;
    return;
L_08A8B6DC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B6FCu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B6FCu) goto L_08A8B6FC;
    return;
L_08A8B6FC:
    ctx.set_gpr(31, 0x08A8B704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B704u) goto L_08A8B704;
    return;
L_08A8B704:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17164u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17076u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(31, 0x08A8B734u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B734u) goto L_08A8B734;
    return;
L_08A8B734:
    ctx.set_gpr(31, 0x08A8B73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B73Cu) goto L_08A8B73C;
    return;
L_08A8B73C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08A8B75Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B75Cu) goto L_08A8B75C;
    return;
L_08A8B75C:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < 8 ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A8B5C8;
      }
      goto L_08A8B77C;
    }
L_08A8B77C:
    ctx.set_gpr(31, 0x08A8B784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B784u) goto L_08A8B784;
    return;
L_08A8B784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17266u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17142u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(117));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(31, 0x08A8B7B8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08A8B7B8u) goto L_08A8B7B8;
    return;
L_08A8B7B8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A8B7BC;
L_08A8B7BC:
    ctx.set_gpr(31, 0x08A8B7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B7C4u) goto L_08A8B7C4;
    return;
L_08A8B7C4:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08A8B7D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B7D8u) goto L_08A8B7D8;
    return;
L_08A8B7D8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B7BC;
      }
      goto L_08A8B7E8;
    }
L_08A8B7E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A8B820;
L_08A8B820:
    ctx.set_gpr(31, 0x08A8B828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B828u) goto L_08A8B828;
    return;
L_08A8B828:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A8B838u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8B838u) goto L_08A8B838;
    return;
L_08A8B838:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B820;
      }
      goto L_08A8B848;
    }
L_08A8B848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8B858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08A8B89Cu);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B89Cu) goto L_08A8B89C;
    return;
L_08A8B89C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A8B8B0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B8B0u) goto L_08A8B8B0;
    return;
L_08A8B8B0:
    ctx.set_gpr(31, 0x08A8B8B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B8B8u) goto L_08A8B8B8;
    return;
L_08A8B8B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08A8B8CCu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B8CCu) goto L_08A8B8CC;
    return;
L_08A8B8CC:
    ctx.set_gpr(31, 0x08A8B8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B8D4u) goto L_08A8B8D4;
    return;
L_08A8B8D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A8B8E8u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8B8E8u) goto L_08A8B8E8;
    return;
L_08A8B8E8:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08A8BCF0;
    }
    goto L_08A8B8F0;
L_08A8B8F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    if (ctx.gpr[2] != ctx.gpr[20]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A8B934;
    }
    goto L_08A8B8FC;
L_08A8B8FC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A8B930;
      }
      goto L_08A8B904;
    }
L_08A8B904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A8B930;
      }
      goto L_08A8B910;
    }
L_08A8B910:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18292)));
    ctx.set_gpr(31, 0x08A8B91Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 453u, 0x08A91BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B91Cu) goto L_08A8B91C;
    return;
L_08A8B91C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8B930;
      }
      goto L_08A8B924;
    }
L_08A8B924:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18279)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A8BCEC;
      }
      goto L_08A8B930;
    }
L_08A8B930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A8B934;
L_08A8B934:
    if (ctx.gpr[20] == ctx.gpr[2]) {
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
        goto L_08A8B93C;
    }
    goto L_08A8B93C;
L_08A8B93C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18280), ctx.gpr[20]);
      if (branch_taken) {
          goto L_08A8B950;
      }
      goto L_08A8B948;
    }
L_08A8B948:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8B958;
      }
      goto L_08A8B950;
    }
L_08A8B950:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A8B958;
L_08A8B958:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18284), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08A8B968;
      }
      goto L_08A8B960;
    }
L_08A8B960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08A8B970;
      }
      goto L_08A8B968;
    }
L_08A8B968:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08A8B970;
L_08A8B970:
    ctx.set_gpr(31, 0x08A8B978u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18288), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 453u, 0x08A91BC0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B978u) goto L_08A8B978;
    return;
L_08A8B978:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(18292), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[21] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08A8BAD4;
    }
    goto L_08A8B988;
L_08A8B988:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B9B8;
      }
      goto L_08A8B990;
    }
L_08A8B990:
    ctx.set_gpr(31, 0x08A8B998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B998u) goto L_08A8B998;
    return;
L_08A8B998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8B9B0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B9B0u) goto L_08A8B9B0;
    return;
L_08A8B9B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8B9D8;
      }
      goto L_08A8B9B8;
    }
L_08A8B9B8:
    ctx.set_gpr(31, 0x08A8B9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B9C0u) goto L_08A8B9C0;
    return;
L_08A8B9C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8B9D8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(39));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B9D8u) goto L_08A8B9D8;
    return;
L_08A8B9D8:
    ctx.set_gpr(31, 0x08A8B9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8B9E0u) goto L_08A8B9E0;
    return;
L_08A8B9E0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(31, 0x08A8BA0Cu);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BA0Cu) goto L_08A8BA0C;
    return;
L_08A8BA0C:
    ctx.set_gpr(31, 0x08A8BA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BA14u) goto L_08A8BA14;
    return;
L_08A8BA14:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(7, 17096u << 16u);
    ctx.set_gpr(2, 16296u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 62915u);
    ctx.set_gpr(2, 16768u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A8BA68u);
    ctx.fpr[12] = ctx.fpr[2] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BA68u) goto L_08A8BA68;
    return;
L_08A8BA68:
    ctx.set_gpr(31, 0x08A8BA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BA70u) goto L_08A8BA70;
    return;
L_08A8BA70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18292)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.set_gpr(3, 16296u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | 62915u);
    ctx.set_gpr(3, 16768u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A8BACCu);
    ctx.fpr[12] = ctx.fpr[2] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BACCu) goto L_08A8BACC;
    return;
L_08A8BACC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u < ctx.gpr[21] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8BCE8;
      }
      goto L_08A8BAD4;
    }
L_08A8BAD4:
    if (ctx.gpr[21] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18279)));
        goto L_08A8BBD0;
    }
    goto L_08A8BADC;
L_08A8BADC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18279)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BB08;
      }
      goto L_08A8BAE8;
    }
L_08A8BAE8:
    ctx.set_gpr(31, 0x08A8BAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BAF0u) goto L_08A8BAF0;
    return;
L_08A8BAF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8BB08u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(45));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB08u) goto L_08A8BB08;
    return;
L_08A8BB08:
    ctx.set_gpr(31, 0x08A8BB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB10u) goto L_08A8BB10;
    return;
L_08A8BB10:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08A8BB30u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB30u) goto L_08A8BB30;
    return;
L_08A8BB30:
    ctx.set_gpr(31, 0x08A8BB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB38u) goto L_08A8BB38;
    return;
L_08A8BB38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A8BB7Cu);
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB7Cu) goto L_08A8BB7C;
    return;
L_08A8BB7C:
    ctx.set_gpr(31, 0x08A8BB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BB84u) goto L_08A8BB84;
    return;
L_08A8BB84:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18292)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.set_gpr(7, 17096u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A8BBC8u);
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BBC8u) goto L_08A8BBC8;
    return;
L_08A8BBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BCE4;
      }
      goto L_08A8BBD0;
    }
L_08A8BBD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BBF8;
      }
      goto L_08A8BBD8;
    }
L_08A8BBD8:
    ctx.set_gpr(31, 0x08A8BBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BBE0u) goto L_08A8BBE0;
    return;
L_08A8BBE0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A8BBF8u);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BBF8u) goto L_08A8BBF8;
    return;
L_08A8BBF8:
    ctx.set_gpr(31, 0x08A8BC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BC00u) goto L_08A8BC00;
    return;
L_08A8BC00:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16656u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    ctx.set_gpr(31, 0x08A8BC2Cu);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BC2Cu) goto L_08A8BC2C;
    return;
L_08A8BC2C:
    ctx.set_gpr(31, 0x08A8BC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BC34u) goto L_08A8BC34;
    return;
L_08A8BC34:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18288)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(7, 17096u << 16u);
    ctx.set_gpr(2, 16243u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 13107u);
    ctx.set_gpr(2, 16656u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A8BC88u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BC88u) goto L_08A8BC88;
    return;
L_08A8BC88:
    ctx.set_gpr(31, 0x08A8BC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BC90u) goto L_08A8BC90;
    return;
L_08A8BC90:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18292)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18280)));
    ctx.set_gpr(3, 16243u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(8, 17096u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | 13107u);
    ctx.set_gpr(3, 16656u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18284)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08A8BCE4u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[2];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08A8BCE4u) goto L_08A8BCE4;
    return;
L_08A8BCE4:
    ctx.set_gpr(3, 0u < ctx.gpr[21] ? 1u : 0u);
    goto L_08A8BCE8;
L_08A8BCE8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(18279), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A8BCEC;
L_08A8BCEC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08A8BCF0;
L_08A8BCF0:
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
L_08A8BD14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A8BE64;
      }
      goto L_08A8BD34;
    }
L_08A8BD34:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-26560));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8BD50:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(15992));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18396));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A8BD68u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 763u, 0x08AE2988u>(ctx, &aot_mem) && ctx.pc == 0x08A8BD68u) goto L_08A8BD68;
    return;
L_08A8BD68:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
        goto L_08A8BEC4;
    }
    goto L_08A8BD70;
L_08A8BD70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18396)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
        goto L_08A8BD8C;
    }
    goto L_08A8BD7C;
L_08A8BD7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BD8C;
    }
L_08A8BD8C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BD98;
    }
L_08A8BD98:
    ctx.set_gpr(31, 0x08A8BDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 134u, 0x08A8C614u>(ctx, &aot_mem) && ctx.pc == 0x08A8BDA0u) goto L_08A8BDA0;
    return;
L_08A8BDA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BDB0;
    }
L_08A8BDB0:
    ctx.set_gpr(31, 0x08A8BDB8u);
    // nop
    goto L_08A8BF10;
L_08A8BDB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(18302)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BDD0;
    }
L_08A8BDD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BDE0;
    }
L_08A8BDE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BDEC;
    }
L_08A8BDEC:
    ctx.set_gpr(31, 0x08A8BDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 885u, 0x08A8EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08A8BDF4u) goto L_08A8BDF4;
    return;
L_08A8BDF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BE04;
    }
L_08A8BE04:
    ctx.set_gpr(31, 0x08A8BE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 1251u, 0x08A8FD60u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE0Cu) goto L_08A8BE0C;
    return;
L_08A8BE0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BE1C;
    }
L_08A8BE1C:
    ctx.set_gpr(31, 0x08A8BE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 150u, 0x08A8C6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE24u) goto L_08A8BE24;
    return;
L_08A8BE24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BE34;
    }
L_08A8BE34:
    ctx.set_gpr(31, 0x08A8BE3Cu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 166u, 0x08A8C75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BE3Cu) goto L_08A8BE3C;
    return;
L_08A8BE3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BE4C;
    }
L_08A8BE4C:
    ctx.set_gpr(31, 0x08A8BE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 516u, 0x08A8D814u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE54u) goto L_08A8BE54;
    return;
L_08A8BE54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A8BEC0;
      }
      goto L_08A8BE64;
    }
L_08A8BE64:
    ctx.set_gpr(31, 0x08A8BE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE6Cu) goto L_08A8BE6C;
    return;
L_08A8BE6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08A8BE80u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BE80u) goto L_08A8BE80;
    return;
L_08A8BE80:
    ctx.set_gpr(31, 0x08A8BE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BE88u) goto L_08A8BE88;
    return;
L_08A8BE88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A8BE9Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BE9Cu) goto L_08A8BE9C;
    return;
L_08A8BE9C:
    ctx.set_gpr(31, 0x08A8BEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BEA4u) goto L_08A8BEA4;
    return;
L_08A8BEA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08A8BEB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BEB8u) goto L_08A8BEB8;
    return;
L_08A8BEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
      if (branch_taken) {
          goto L_08A8BEFC;
      }
      goto L_08A8BEC0;
    }
L_08A8BEC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18216)));
    goto L_08A8BEC4;
L_08A8BEC4:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A8BEFC;
    }
    goto L_08A8BECC;
L_08A8BECC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18320), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18252), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18320)));
    ctx.set_gpr(31, 0x08A8BEE0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BEE0u) goto L_08A8BEE0;
    return;
L_08A8BEE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18248), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18220), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18124), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18232), 0u);
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A8BEFC;
L_08A8BEFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8BF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18220)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 103u, 0x08A8C4A8u>(ctx, &aot_mem); return;
      }
      goto L_08A8BF34;
    }
L_08A8BF34:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 50u, 0x08A8C254u>(ctx, &aot_mem); return;
    }
    goto L_08A8BF3C;
L_08A8BF3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 45u, 0x08A8C224u>(ctx, &aot_mem); return;
      }
      goto L_08A8BF48;
    }
L_08A8BF48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(27));
        goto L_08A8BF5C;
    }
    goto L_08A8BF54;
L_08A8BF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 109u, 0x08A8C504u>(ctx, &aot_mem); return;
      }
      goto L_08A8BF5C;
    }
L_08A8BF5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08A8BF80u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(26));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08A8BF80u) goto L_08A8BF80;
    return;
L_08A8BF80:
    ctx.set_gpr(31, 0x08A8BF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8BF88u) goto L_08A8BF88;
    return;
L_08A8BF88:
    ctx.set_gpr(31, 0x08A8BF90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 455u, 0x08849BF0u>(ctx, &aot_mem) && ctx.pc == 0x08A8BF90u) goto L_08A8BF90;
    return;
L_08A8BF90:
    ctx.set_gpr(31, 0x08A8BF98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BF98u) goto L_08A8BF98;
    return;
L_08A8BF98:
    ctx.set_gpr(31, 0x08A8BFA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 520u, 0x08851B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8BFA0u) goto L_08A8BFA0;
    return;
L_08A8BFA0:
    ctx.set_gpr(31, 0x08A8BFA8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 14u, 0x08A7C0D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BFA8u) goto L_08A8BFA8;
    return;
L_08A8BFA8:
    ctx.set_gpr(31, 0x08A8BFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8BFB0u) goto L_08A8BFB0;
    return;
L_08A8BFB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16582u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16704u << 16u);
    ctx.set_gpr(31, 0x08A8BFD4u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 310u, 0x088494C4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BFD4u) goto L_08A8BFD4;
    return;
L_08A8BFD4:
    ctx.set_gpr(31, 0x08A8BFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A8BFDCu) goto L_08A8BFDC;
    return;
L_08A8BFDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49216u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16550u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A8BFFCu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 309u, 0x088494B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8BFFCu) goto L_08A8BFFC;
    return;
L_08A8BFFC:
    ctx.set_gpr(31, 0x08A8C004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0161(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0161_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_161(Runtime &runtime) {
    runtime.register_generated_unit(161u, 0x08A88000u, 16384u, &recomp_unit_0161, &recomp_unit_0161_entry);
    runtime.register_function(0x08A88000u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88008u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88010u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88028u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88030u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8803Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88044u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8805Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88064u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8806Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88098u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A880FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88104u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8810Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88114u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88130u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88138u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88158u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88160u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8816Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88174u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8817Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88180u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88184u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88190u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88198u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A881ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8820Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88214u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8822Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88234u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88248u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88250u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88268u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88270u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88278u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88280u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A882F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88324u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8832Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88338u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88340u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88358u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88360u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88368u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88394u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8839Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A883F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88400u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88420u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88424u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88444u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88464u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88470u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88474u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8847Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8850Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8851Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88524u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88558u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88560u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88594u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8859Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A885D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88610u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88618u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8864Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88654u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88668u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88670u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A886F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88728u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88730u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88750u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88758u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88790u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88798u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A887DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88814u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88818u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88820u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88880u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88888u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8889Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A888F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88908u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88910u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88920u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88928u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88938u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88940u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88950u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88958u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88968u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88970u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88980u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88988u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88998u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A889F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88A58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88ACCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88AFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88B80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88BF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88C94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88CF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88D98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88DFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88E9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88ED4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88EF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88F9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A88FF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89000u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89010u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89018u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89034u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8903Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8904Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89054u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8905Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89064u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8906Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89074u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89088u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89094u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8909Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A890F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89108u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89110u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89118u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8912Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89134u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8913Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89144u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8914Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89154u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89160u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89168u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89170u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89178u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8918Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89194u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8919Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A891FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89210u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89218u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89220u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89228u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89238u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89240u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89254u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8925Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89264u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8926Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89274u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8928Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89294u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8929Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A892FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89304u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8930Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89314u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8931Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89324u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8932Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89334u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8933Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89348u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89354u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8935Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89374u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8937Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89384u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8938Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89394u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8939Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A893E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89404u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8940Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89424u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8942Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8943Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8944Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89460u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89468u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89470u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89478u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89484u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A894FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8950Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89514u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8951Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89528u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89530u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89538u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89540u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89548u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89550u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89568u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89578u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89580u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8958Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A895F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89600u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89608u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89610u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89618u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89628u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89638u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8964Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89654u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8965Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8966Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89674u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8967Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8968Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89694u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8969Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A896FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8970Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89714u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8971Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8973Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8974Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89754u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8975Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89764u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89780u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8978Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A897FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89804u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89810u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8981Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89828u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89850u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89858u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89860u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89864u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8987Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89884u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A898F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89900u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8990Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89928u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89934u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8993Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89954u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89960u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89964u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8996Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89988u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89994u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89998u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A899FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89A9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89AF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89B90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89BFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89C98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89CF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89D98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89DFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89E98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89ED0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89EF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89F94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A89FFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A00Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A020u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A028u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A058u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A060u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A070u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A07Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A084u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A094u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A0F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A104u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A124u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A12Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A13Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A15Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A164u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A174u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A194u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A19Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A1F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A200u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A208u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A21Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A224u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A230u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A238u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A240u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A248u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A254u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A25Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A264u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A274u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A27Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A284u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A290u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A2FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A304u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A30Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A31Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A328u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A330u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A33Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A344u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A34Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A354u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A35Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A364u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A374u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A380u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A384u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A38Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A394u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A39Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A3F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A400u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A408u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A410u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A41Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A42Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A43Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A444u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A44Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A470u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A478u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A490u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A4F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A504u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A548u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A558u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A560u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A570u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A578u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A588u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A59Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A5FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A648u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A658u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A6B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A710u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A71Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A738u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A740u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A74Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A764u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A76Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A778u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A780u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A78Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A794u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A7F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A800u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A80Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A814u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A820u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A824u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A82Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A834u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A840u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A84Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A858u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A864u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A874u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A884u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A88Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A898u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A8F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A900u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A910u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A920u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A928u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A934u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A958u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A960u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A968u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A978u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A980u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A98Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9ECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8A9FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AA94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AAFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AB9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABCCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ABECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC18u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AC8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ACFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AD74u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADB4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADBCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8ADF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE20u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE40u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE58u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE78u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AE94u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AED8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AEF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF28u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF44u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF60u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AF7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AFA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8AFE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B00Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B014u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B038u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B044u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B04Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B06Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B074u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B094u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B098u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0A8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0D0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B0F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B110u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B118u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B13Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B144u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B168u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B174u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B17Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B180u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B18Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B190u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B1F8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B200u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B214u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B21Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B230u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B234u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B23Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B250u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B258u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B26Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B27Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B288u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B2F4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B318u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B320u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B344u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B350u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B358u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B378u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B380u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3A0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3ACu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3B4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B3FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B404u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B41Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B424u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B448u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B450u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B474u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B480u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B488u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B48Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B498u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B49Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B4E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B51Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B524u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B548u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B550u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B584u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B58Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5C8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B5E4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B614u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B61Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B63Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B644u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B674u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B67Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B69Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6A4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6DCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B6FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B704u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B734u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B73Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B75Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B77Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B784u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7BCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7C4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B7E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B810u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B820u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B828u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B838u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B848u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B858u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B89Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8CCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8D4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8E8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8F0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B8FCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B904u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B910u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B91Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B924u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B930u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B934u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B93Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B948u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B950u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B958u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B960u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B968u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B970u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B978u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B988u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B990u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B998u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9B0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9B8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9C0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9D8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8B9E0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BA70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BACCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BADCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BAF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB08u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB30u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB38u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BB84u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBC8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBD8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BBF8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC00u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC2Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BC90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCE4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCE8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BCF0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD14u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD50u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD68u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD70u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD7Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD8Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BD98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDD0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDECu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BDF4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE04u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE0Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE1Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE24u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE4Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE64u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE6Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BE9Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEA4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEB8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEC0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEC4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BECCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEE0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BEFCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF10u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF34u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF3Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF48u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF54u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF5Cu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF80u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF88u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF90u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BF98u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFA0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFA8u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFB0u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFD4u, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFDCu, &recomp_unit_0161, "recomp_unit_0161");
    runtime.register_function(0x08A8BFFCu, &recomp_unit_0161, "recomp_unit_0161");
}
} // namespace psprecomp
