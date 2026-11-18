#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0177[4088] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 23, 0, 24, 0, 0, 25, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 30, 0,
    31, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 36, 0, 37,
    0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 51, 0, 52, 0,
    53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 62, 63, 64, 65, 0, 66, 0,
    0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 75, 76, 77, 0, 78, 0, 0, 79, 0, 80, 0,
    81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 85, 0, 86, 87, 88, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0,
    93, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 100, 0, 0, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0,
    0, 116, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125,
    0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0,
    141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0,
    0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0,
    164, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 179, 0, 0, 180, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 185, 0, 186,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 195, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0,
    0, 206, 0, 207, 0, 208, 0, 209, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0,
    0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 0,
    0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239,
    0, 240, 0, 241, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249,
    0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0,
    0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 269,
    0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    280, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 290,
    0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0,
    0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0,
    311, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0,
    320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0,
    343, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 352, 353, 0,
    354, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0,
    363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0,
    0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0,
    402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 411, 0, 412, 0, 413,
    0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 423, 0, 0, 424,
    0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0,
    435, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451,
    0, 452, 0, 0, 453, 0, 454, 0, 0, 455, 0, 456, 0, 0, 457, 0, 458, 0, 459, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463,
    0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0,
    482, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492,
    0, 493, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 504, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 0,
    0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0,
    527, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0,
    537, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 550,
    0, 551, 0, 0, 552, 0, 553, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 559, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0,
    0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0,
    583, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593,
    0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 602, 0,
    0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614,
    0, 615, 0, 616, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0,
    0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0,
    0, 0, 634, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 640, 0,
    0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0,
    0, 655, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 662, 0, 0, 663, 0, 0, 664,
    0, 665, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672,
    0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 694, 0, 0,
    0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 0,
    705, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 715, 0, 716, 0, 717,
    0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 726,
    0, 0, 0, 727, 0, 728, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0,
    737, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0,
    747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0,
    0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 759,
    0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0, 765, 0, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 770, 0, 771,
    0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 0, 0, 0, 778, 0, 779, 0, 0, 780, 0, 0, 0, 0, 781, 0, 782,
    0, 0, 783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 789, 0, 790, 0, 791, 0, 0, 792, 0, 0, 0,
    0, 0, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 800, 0, 801, 802, 0, 803, 0, 804, 0, 0,
    805, 0, 806, 0, 0, 807, 808, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 813, 0, 814, 0, 0, 815,
    0, 816, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0, 821, 0, 822, 0, 823, 0, 824, 0, 0, 825, 0, 0, 0, 0, 0, 826,
    0, 827, 0, 0, 0, 0, 828, 0, 829, 0, 0, 830, 0, 831, 0, 832, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0,
    837, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 0, 0, 842, 0, 843, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0,
    0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 851, 0, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 0, 857, 0, 858,
    0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 863, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 872,
    873, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 879, 0,
    880, 881, 0, 0, 882, 0, 883, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 889, 0, 0, 890,
    0, 0, 891, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0, 894, 0, 0, 0, 895, 0, 0, 896, 0, 897, 0, 0,
    0, 898, 0, 0, 899, 0, 0, 0, 0, 900, 0, 0, 0, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 904,
    0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912, 0, 0, 913, 0, 914, 0, 915, 0,
    916, 0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 920, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 923,
    0, 0, 924, 0, 0, 925, 0, 926, 0, 0, 0, 927, 0, 0, 928, 0, 929, 0, 930, 0, 0, 931, 0, 932, 0, 933, 0, 0, 0, 934, 0, 935,
    0, 936, 0, 0, 937, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 938, 0, 939, 0, 940, 0, 0, 0, 941, 0, 0, 942, 0, 0, 943, 0,
    0, 0, 0, 944, 0, 945, 0, 946, 0, 947, 0, 948, 0, 949, 0, 950, 0, 0, 0, 0, 0, 951, 952, 0, 0, 0, 0, 0, 953, 0, 954, 0,
    955, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 0, 0, 0, 961, 0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 963, 0, 0, 964, 0, 0,
    965, 0, 0, 966, 0, 967, 0, 968, 0, 969, 0, 0, 970, 0, 0, 971, 0, 972, 0, 0, 973, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0, 976,
    0, 0, 977, 0, 978, 0, 0, 979, 0, 980, 0, 981, 0, 0, 0, 982, 0, 983, 0, 984, 0, 0, 985, 0, 0, 0, 0, 0, 986, 0, 0, 0,
    0, 987, 0, 988, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 990, 0, 0, 0, 991, 0, 0, 992, 0, 993, 0, 0, 0,
    994, 0, 0, 995, 0, 996, 0, 0, 0, 997, 0, 0, 0, 0, 0, 0, 0, 998, 0, 999, 0, 1000, 0, 1001, 0, 1002, 0, 0, 0, 0, 0, 1003,
    0, 0, 1004, 0, 1005, 0, 1006, 0, 0, 1007, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1009, 0, 1010, 0, 0, 1011, 0, 1012,
    0, 0, 0, 0, 0, 1013, 0, 1014, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 0, 0, 1017, 0, 1018, 0, 1019, 0, 1020, 0, 0, 0, 1021, 0, 0,
    0, 1022, 0, 0, 1023, 0, 0, 1024, 0, 0, 0, 0, 1025, 0, 1026, 0, 1027, 0, 0, 1028, 0, 1029, 0, 0, 1030, 0, 1031, 0, 0, 0, 1032, 0,
    0, 1033, 0, 0, 1034, 0, 0, 0, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 0, 1040, 0, 0, 0, 0, 1041, 0, 0, 0, 1042, 0, 1043,
    0, 0, 1044, 0, 1045, 0, 1046, 0, 0, 0, 0, 1047, 0, 0, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 0, 1049, 0, 0, 1050, 0, 0, 1051, 0,
    0, 1052, 0, 1053, 0, 1054, 0, 1055, 0, 0, 1056, 0, 0, 1057, 0, 0, 0, 0, 0, 1058, 0, 1059, 0, 0, 1060, 0, 0, 0, 0, 0, 1061, 0,
    1062, 0, 0, 1063, 0, 1064, 0, 1065, 0, 0, 0, 1066, 0, 1067, 0, 1068, 0, 0, 1069, 0, 0, 0, 0, 0, 1070, 0, 1071, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1072, 0, 1073, 0, 0, 0, 1074, 0, 0, 1075, 0, 1076, 0, 0, 0, 1077, 0, 0, 1078, 0, 1079, 0, 0, 0,
    1080, 0, 0, 0, 0, 0, 0, 0, 1081, 0, 1082, 0, 1083, 0, 1084, 0, 0, 1085, 0, 1086, 0, 1087, 0, 0, 0, 0, 0, 1088, 0, 0, 1089, 0,
    1090, 0, 1091, 0, 0, 1092, 0, 1093, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1094, 0, 1095, 0, 0, 1096, 0, 0, 1097, 0, 1098, 0,
    0, 0, 1099, 0, 1100, 0, 0, 0, 0, 1101, 0, 0, 0, 0, 0, 0, 1102, 0, 0, 0, 0, 0, 1103, 0, 0, 1104, 0, 0, 1105, 0, 0, 1106,
    0, 1107, 0, 1108, 0, 1109, 0, 0, 1110, 0, 0, 1111, 0, 0, 0, 0, 0, 1112, 0, 1113, 0, 0, 1114, 0, 0, 0, 0, 0, 1115, 0, 1116, 0,
    0, 1117, 0, 1118, 0, 1119, 0, 0, 0, 1120, 0, 1121, 0, 1122, 0, 0, 1123, 0, 0, 0, 0, 0, 1124, 0, 1125, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1126, 0, 1127, 0, 0, 0, 1128, 0, 0, 1129, 0, 1130, 0, 0, 0, 1131, 0, 0, 1132, 0, 1133, 0, 0, 0, 1134, 0,
    0, 0, 0, 0, 0, 0, 1135, 0, 1136, 0, 0, 0, 1137, 0, 0, 0, 0, 0, 0, 0, 1138, 0, 1139, 0, 1140, 0, 1141, 0, 0, 1142, 0, 1143,
    0, 1144, 0, 0, 0, 0, 0, 1145, 0, 0, 1146, 0, 1147, 0, 1148, 0, 0, 1149, 0, 1150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1151,
    0, 1152, 0, 0, 1153, 0, 0, 1154, 0, 1155, 0, 0, 0, 1156, 0, 1157, 0, 0, 1158, 0, 0, 1159, 0, 1160, 0, 1161, 0, 1162, 0, 1163, 0, 1164,
    0, 1165, 0, 1166, 0, 1167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1168, 0, 0, 0, 0, 0, 0, 0, 1169, 0, 0, 0, 1170, 0, 0, 0, 0,
    1171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1172, 0, 0, 0, 0, 1173, 0, 0, 0, 1174, 0, 0, 0, 0, 0, 0, 1175, 0, 0, 0,
    0, 1176, 0, 0, 0, 0, 0, 0, 1177, 0, 0, 0, 0, 0, 1178, 0, 0, 0, 0, 0, 0, 1179, 0, 1180, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1181, 0, 1182, 0, 0, 0, 1183, 0, 0, 1184, 0, 1185, 0, 0, 0, 1186, 0, 0, 1187, 0, 1188, 0, 0, 0, 1189, 0, 0,
    0, 0, 0, 0, 0, 1190, 0, 1191, 0, 1192, 0, 1193, 0, 0, 1194, 0, 1195, 0, 1196, 0, 1197, 0, 0, 1198,
};
void recomp_unit_0177_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC8000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0177[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC8000;
    case 2u: goto L_08AC8018;
    case 3u: goto L_08AC8020;
    case 4u: goto L_08AC8030;
    case 5u: goto L_08AC8044;
    case 6u: goto L_08AC8058;
    case 7u: goto L_08AC8068;
    case 8u: goto L_08AC807C;
    case 9u: goto L_08AC8088;
    case 10u: goto L_08AC80AC;
    case 11u: goto L_08AC80BC;
    case 12u: goto L_08AC80C8;
    case 13u: goto L_08AC80CC;
    case 14u: goto L_08AC80D8;
    case 15u: goto L_08AC813C;
    case 16u: goto L_08AC8154;
    case 17u: goto L_08AC815C;
    case 18u: goto L_08AC8168;
    case 19u: goto L_08AC8174;
    case 20u: goto L_08AC8188;
    case 21u: goto L_08AC819C;
    case 22u: goto L_08AC81B0;
    case 23u: goto L_08AC81B4;
    case 24u: goto L_08AC81BC;
    case 25u: goto L_08AC81C8;
    case 26u: goto L_08AC81CC;
    case 27u: goto L_08AC81D4;
    case 28u: goto L_08AC81E8;
    case 29u: goto L_08AC81F4;
    case 30u: goto L_08AC81F8;
    case 31u: goto L_08AC8200;
    case 32u: goto L_08AC8204;
    case 33u: goto L_08AC820C;
    case 34u: goto L_08AC8224;
    case 35u: goto L_08AC82F0;
    case 36u: goto L_08AC82F4;
    case 37u: goto L_08AC82FC;
    case 38u: goto L_08AC8314;
    case 39u: goto L_08AC833C;
    case 40u: goto L_08AC8348;
    case 41u: goto L_08AC8360;
    case 42u: goto L_08AC836C;
    case 43u: goto L_08AC8378;
    case 44u: goto L_08AC8398;
    case 45u: goto L_08AC83A0;
    case 46u: goto L_08AC83B0;
    case 47u: goto L_08AC83CC;
    case 48u: goto L_08AC83D4;
    case 49u: goto L_08AC83DC;
    case 50u: goto L_08AC83E8;
    case 51u: goto L_08AC83F0;
    case 52u: goto L_08AC83F8;
    case 53u: goto L_08AC8400;
    case 54u: goto L_08AC840C;
    case 55u: goto L_08AC8414;
    case 56u: goto L_08AC841C;
    case 57u: goto L_08AC8424;
    case 58u: goto L_08AC8438;
    case 59u: goto L_08AC8440;
    case 60u: goto L_08AC8454;
    case 61u: goto L_08AC845C;
    case 62u: goto L_08AC8464;
    case 63u: goto L_08AC8468;
    case 64u: goto L_08AC846C;
    case 65u: goto L_08AC8470;
    case 66u: goto L_08AC8478;
    case 67u: goto L_08AC8484;
    case 68u: goto L_08AC848C;
    case 69u: goto L_08AC8494;
    case 70u: goto L_08AC849C;
    case 71u: goto L_08AC84AC;
    case 72u: goto L_08AC84C0;
    case 73u: goto L_08AC84C8;
    case 74u: goto L_08AC84D0;
    case 75u: goto L_08AC84D4;
    case 76u: goto L_08AC84D8;
    case 77u: goto L_08AC84DC;
    case 78u: goto L_08AC84E4;
    case 79u: goto L_08AC84F0;
    case 80u: goto L_08AC84F8;
    case 81u: goto L_08AC8500;
    case 82u: goto L_08AC8508;
    case 83u: goto L_08AC8518;
    case 84u: goto L_08AC852C;
    case 85u: goto L_08AC8534;
    case 86u: goto L_08AC853C;
    case 87u: goto L_08AC8540;
    case 88u: goto L_08AC8544;
    case 89u: goto L_08AC8548;
    case 90u: goto L_08AC8550;
    case 91u: goto L_08AC8560;
    case 92u: goto L_08AC8574;
    case 93u: goto L_08AC8580;
    case 94u: goto L_08AC8584;
    case 95u: goto L_08AC858C;
    case 96u: goto L_08AC85B8;
    case 97u: goto L_08AC85D0;
    case 98u: goto L_08AC85E4;
    case 99u: goto L_08AC85EC;
    case 100u: goto L_08AC85F0;
    case 101u: goto L_08AC8600;
    case 102u: goto L_08AC8610;
    case 103u: goto L_08AC8634;
    case 104u: goto L_08AC863C;
    case 105u: goto L_08AC8644;
    case 106u: goto L_08AC8650;
    case 107u: goto L_08AC8668;
    case 108u: goto L_08AC8680;
    case 109u: goto L_08AC8688;
    case 110u: goto L_08AC869C;
    case 111u: goto L_08AC86C0;
    case 112u: goto L_08AC86CC;
    case 113u: goto L_08AC86DC;
    case 114u: goto L_08AC86E4;
    case 115u: goto L_08AC86EC;
    case 116u: goto L_08AC8704;
    case 117u: goto L_08AC8710;
    case 118u: goto L_08AC871C;
    case 119u: goto L_08AC8728;
    case 120u: goto L_08AC8730;
    case 121u: goto L_08AC8738;
    case 122u: goto L_08AC8740;
    case 123u: goto L_08AC8748;
    case 124u: goto L_08AC8768;
    case 125u: goto L_08AC877C;
    case 126u: goto L_08AC8788;
    case 127u: goto L_08AC8794;
    case 128u: goto L_08AC87AC;
    case 129u: goto L_08AC87B4;
    case 130u: goto L_08AC87C8;
    case 131u: goto L_08AC87D0;
    case 132u: goto L_08AC87D8;
    case 133u: goto L_08AC880C;
    case 134u: goto L_08AC8814;
    case 135u: goto L_08AC8828;
    case 136u: goto L_08AC8830;
    case 137u: goto L_08AC8844;
    case 138u: goto L_08AC885C;
    case 139u: goto L_08AC8864;
    case 140u: goto L_08AC8878;
    case 141u: goto L_08AC8880;
    case 142u: goto L_08AC8888;
    case 143u: goto L_08AC88BC;
    case 144u: goto L_08AC88C4;
    case 145u: goto L_08AC88D8;
    case 146u: goto L_08AC88E0;
    case 147u: goto L_08AC88F4;
    case 148u: goto L_08AC890C;
    case 149u: goto L_08AC8914;
    case 150u: goto L_08AC8928;
    case 151u: goto L_08AC8930;
    case 152u: goto L_08AC8938;
    case 153u: goto L_08AC896C;
    case 154u: goto L_08AC8974;
    case 155u: goto L_08AC8988;
    case 156u: goto L_08AC8990;
    case 157u: goto L_08AC89A4;
    case 158u: goto L_08AC89BC;
    case 159u: goto L_08AC89C4;
    case 160u: goto L_08AC89D0;
    case 161u: goto L_08AC89D8;
    case 162u: goto L_08AC89E0;
    case 163u: goto L_08AC89EC;
    case 164u: goto L_08AC8A00;
    case 165u: goto L_08AC8A1C;
    case 166u: goto L_08AC8A24;
    case 167u: goto L_08AC8A38;
    case 168u: goto L_08AC8A40;
    case 169u: goto L_08AC8A48;
    case 170u: goto L_08AC8A54;
    case 171u: goto L_08AC8A60;
    case 172u: goto L_08AC8A68;
    case 173u: goto L_08AC8A70;
    case 174u: goto L_08AC8A78;
    case 175u: goto L_08AC8A88;
    case 176u: goto L_08AC8AA0;
    case 177u: goto L_08AC8AAC;
    case 178u: goto L_08AC8AB4;
    case 179u: goto L_08AC8AB8;
    case 180u: goto L_08AC8AC4;
    case 181u: goto L_08AC8AC8;
    case 182u: goto L_08AC8AD0;
    case 183u: goto L_08AC8AE0;
    case 184u: goto L_08AC8AF0;
    case 185u: goto L_08AC8AF4;
    case 186u: goto L_08AC8AFC;
    case 187u: goto L_08AC8B0C;
    case 188u: goto L_08AC8B1C;
    case 189u: goto L_08AC8B2C;
    case 190u: goto L_08AC8B38;
    case 191u: goto L_08AC8B40;
    case 192u: goto L_08AC8B48;
    case 193u: goto L_08AC8B68;
    case 194u: goto L_08AC8B7C;
    case 195u: goto L_08AC8B98;
    case 196u: goto L_08AC8B9C;
    case 197u: goto L_08AC8BAC;
    case 198u: goto L_08AC8C08;
    case 199u: goto L_08AC8C18;
    case 200u: goto L_08AC8C28;
    case 201u: goto L_08AC8C3C;
    case 202u: goto L_08AC8C5C;
    case 203u: goto L_08AC8C68;
    case 204u: goto L_08AC8C70;
    case 205u: goto L_08AC8C78;
    case 206u: goto L_08AC8C84;
    case 207u: goto L_08AC8C8C;
    case 208u: goto L_08AC8C94;
    case 209u: goto L_08AC8C9C;
    case 210u: goto L_08AC8CA0;
    case 211u: goto L_08AC8CB8;
    case 212u: goto L_08AC8D14;
    case 213u: goto L_08AC8D24;
    case 214u: goto L_08AC8D34;
    case 215u: goto L_08AC8D3C;
    case 216u: goto L_08AC8D44;
    case 217u: goto L_08AC8D58;
    case 218u: goto L_08AC8D60;
    case 219u: goto L_08AC8D70;
    case 220u: goto L_08AC8D88;
    case 221u: goto L_08AC8D90;
    case 222u: goto L_08AC8D9C;
    case 223u: goto L_08AC8DAC;
    case 224u: goto L_08AC8DB4;
    case 225u: goto L_08AC8DBC;
    case 226u: goto L_08AC8DC4;
    case 227u: goto L_08AC8DD0;
    case 228u: goto L_08AC8DD8;
    case 229u: goto L_08AC8DE0;
    case 230u: goto L_08AC8DEC;
    case 231u: goto L_08AC8DF4;
    case 232u: goto L_08AC8E04;
    case 233u: goto L_08AC8E24;
    case 234u: goto L_08AC8E40;
    case 235u: goto L_08AC8E48;
    case 236u: goto L_08AC8E50;
    case 237u: goto L_08AC8E58;
    case 238u: goto L_08AC8E70;
    case 239u: goto L_08AC8E7C;
    case 240u: goto L_08AC8E84;
    case 241u: goto L_08AC8E8C;
    case 242u: goto L_08AC8E94;
    case 243u: goto L_08AC8EA4;
    case 244u: goto L_08AC8EB4;
    case 245u: goto L_08AC8EC4;
    case 246u: goto L_08AC8ECC;
    case 247u: goto L_08AC8EE0;
    case 248u: goto L_08AC8EE8;
    case 249u: goto L_08AC8EFC;
    case 250u: goto L_08AC8F04;
    case 251u: goto L_08AC8F18;
    case 252u: goto L_08AC8F20;
    case 253u: goto L_08AC8F28;
    case 254u: goto L_08AC8F38;
    case 255u: goto L_08AC8F40;
    case 256u: goto L_08AC8F54;
    case 257u: goto L_08AC8F5C;
    case 258u: goto L_08AC8F70;
    case 259u: goto L_08AC8F78;
    case 260u: goto L_08AC8F8C;
    case 261u: goto L_08AC8F9C;
    case 262u: goto L_08AC8FA8;
    case 263u: goto L_08AC8FB0;
    case 264u: goto L_08AC8FBC;
    case 265u: goto L_08AC8FC4;
    case 266u: goto L_08AC8FD8;
    case 267u: goto L_08AC8FE0;
    case 268u: goto L_08AC8FF4;
    case 269u: goto L_08AC8FFC;
    case 270u: goto L_08AC9004;
    case 271u: goto L_08AC9010;
    case 272u: goto L_08AC9018;
    case 273u: goto L_08AC902C;
    case 274u: goto L_08AC9034;
    case 275u: goto L_08AC9048;
    case 276u: goto L_08AC9050;
    case 277u: goto L_08AC9058;
    case 278u: goto L_08AC9068;
    case 279u: goto L_08AC9078;
    case 280u: goto L_08AC9080;
    case 281u: goto L_08AC9088;
    case 282u: goto L_08AC9090;
    case 283u: goto L_08AC90A4;
    case 284u: goto L_08AC90AC;
    case 285u: goto L_08AC90C0;
    case 286u: goto L_08AC90C8;
    case 287u: goto L_08AC90DC;
    case 288u: goto L_08AC90E8;
    case 289u: goto L_08AC90F4;
    case 290u: goto L_08AC90FC;
    case 291u: goto L_08AC9104;
    case 292u: goto L_08AC9118;
    case 293u: goto L_08AC9120;
    case 294u: goto L_08AC9134;
    case 295u: goto L_08AC913C;
    case 296u: goto L_08AC9150;
    case 297u: goto L_08AC915C;
    case 298u: goto L_08AC9164;
    case 299u: goto L_08AC916C;
    case 300u: goto L_08AC9174;
    case 301u: goto L_08AC9188;
    case 302u: goto L_08AC9190;
    case 303u: goto L_08AC91A4;
    case 304u: goto L_08AC91AC;
    case 305u: goto L_08AC91C0;
    case 306u: goto L_08AC91CC;
    case 307u: goto L_08AC91DC;
    case 308u: goto L_08AC91E8;
    case 309u: goto L_08AC91F0;
    case 310u: goto L_08AC91F8;
    case 311u: goto L_08AC9200;
    case 312u: goto L_08AC9218;
    case 313u: goto L_08AC9220;
    case 314u: goto L_08AC9240;
    case 315u: goto L_08AC9250;
    case 316u: goto L_08AC9258;
    case 317u: goto L_08AC9260;
    case 318u: goto L_08AC9268;
    case 319u: goto L_08AC9278;
    case 320u: goto L_08AC9280;
    case 321u: goto L_08AC9288;
    case 322u: goto L_08AC9290;
    case 323u: goto L_08AC9298;
    case 324u: goto L_08AC92A0;
    case 325u: goto L_08AC92AC;
    case 326u: goto L_08AC92B4;
    case 327u: goto L_08AC92BC;
    case 328u: goto L_08AC92C4;
    case 329u: goto L_08AC92CC;
    case 330u: goto L_08AC9308;
    case 331u: goto L_08AC9318;
    case 332u: goto L_08AC9328;
    case 333u: goto L_08AC933C;
    case 334u: goto L_08AC9344;
    case 335u: goto L_08AC934C;
    case 336u: goto L_08AC9370;
    case 337u: goto L_08AC9378;
    case 338u: goto L_08AC93A8;
    case 339u: goto L_08AC93C4;
    case 340u: goto L_08AC93CC;
    case 341u: goto L_08AC93E0;
    case 342u: goto L_08AC93F4;
    case 343u: goto L_08AC9400;
    case 344u: goto L_08AC940C;
    case 345u: goto L_08AC9418;
    case 346u: goto L_08AC9420;
    case 347u: goto L_08AC9444;
    case 348u: goto L_08AC9450;
    case 349u: goto L_08AC9458;
    case 350u: goto L_08AC9460;
    case 351u: goto L_08AC9468;
    case 352u: goto L_08AC9474;
    case 353u: goto L_08AC9478;
    case 354u: goto L_08AC9480;
    case 355u: goto L_08AC9488;
    case 356u: goto L_08AC9494;
    case 357u: goto L_08AC94A4;
    case 358u: goto L_08AC94AC;
    case 359u: goto L_08AC94C4;
    case 360u: goto L_08AC94CC;
    case 361u: goto L_08AC94E4;
    case 362u: goto L_08AC94EC;
    case 363u: goto L_08AC9500;
    case 364u: goto L_08AC9508;
    case 365u: goto L_08AC9510;
    case 366u: goto L_08AC9518;
    case 367u: goto L_08AC9520;
    case 368u: goto L_08AC9530;
    case 369u: goto L_08AC953C;
    case 370u: goto L_08AC9548;
    case 371u: goto L_08AC955C;
    case 372u: goto L_08AC9564;
    case 373u: goto L_08AC956C;
    case 374u: goto L_08AC9574;
    case 375u: goto L_08AC9584;
    case 376u: goto L_08AC959C;
    case 377u: goto L_08AC95A8;
    case 378u: goto L_08AC95B4;
    case 379u: goto L_08AC95C0;
    case 380u: goto L_08AC95C8;
    case 381u: goto L_08AC95D0;
    case 382u: goto L_08AC95D8;
    case 383u: goto L_08AC95E8;
    case 384u: goto L_08AC9620;
    case 385u: goto L_08AC9628;
    case 386u: goto L_08AC9638;
    case 387u: goto L_08AC9644;
    case 388u: goto L_08AC964C;
    case 389u: goto L_08AC965C;
    case 390u: goto L_08AC9668;
    case 391u: goto L_08AC9670;
    case 392u: goto L_08AC9680;
    case 393u: goto L_08AC96A0;
    case 394u: goto L_08AC96A8;
    case 395u: goto L_08AC96B0;
    case 396u: goto L_08AC96B8;
    case 397u: goto L_08AC96C0;
    case 398u: goto L_08AC96C8;
    case 399u: goto L_08AC96D4;
    case 400u: goto L_08AC96EC;
    case 401u: goto L_08AC96F4;
    case 402u: goto L_08AC9700;
    case 403u: goto L_08AC9708;
    case 404u: goto L_08AC9720;
    case 405u: goto L_08AC9728;
    case 406u: goto L_08AC9730;
    case 407u: goto L_08AC9744;
    case 408u: goto L_08AC9750;
    case 409u: goto L_08AC9758;
    case 410u: goto L_08AC9760;
    case 411u: goto L_08AC976C;
    case 412u: goto L_08AC9774;
    case 413u: goto L_08AC977C;
    case 414u: goto L_08AC978C;
    case 415u: goto L_08AC9794;
    case 416u: goto L_08AC979C;
    case 417u: goto L_08AC97A8;
    case 418u: goto L_08AC97C0;
    case 419u: goto L_08AC97C8;
    case 420u: goto L_08AC97D0;
    case 421u: goto L_08AC97D8;
    case 422u: goto L_08AC97E0;
    case 423u: goto L_08AC97F0;
    case 424u: goto L_08AC97FC;
    case 425u: goto L_08AC9808;
    case 426u: goto L_08AC9814;
    case 427u: goto L_08AC9824;
    case 428u: goto L_08AC982C;
    case 429u: goto L_08AC983C;
    case 430u: goto L_08AC9848;
    case 431u: goto L_08AC9854;
    case 432u: goto L_08AC9868;
    case 433u: goto L_08AC9870;
    case 434u: goto L_08AC9878;
    case 435u: goto L_08AC9880;
    case 436u: goto L_08AC9888;
    case 437u: goto L_08AC98A4;
    case 438u: goto L_08AC98C0;
    case 439u: goto L_08AC98D0;
    case 440u: goto L_08AC98E0;
    case 441u: goto L_08AC98EC;
    case 442u: goto L_08AC98F4;
    case 443u: goto L_08AC992C;
    case 444u: goto L_08AC9938;
    case 445u: goto L_08AC9940;
    case 446u: goto L_08AC9950;
    case 447u: goto L_08AC995C;
    case 448u: goto L_08AC9964;
    case 449u: goto L_08AC996C;
    case 450u: goto L_08AC9974;
    case 451u: goto L_08AC997C;
    case 452u: goto L_08AC9984;
    case 453u: goto L_08AC9990;
    case 454u: goto L_08AC9998;
    case 455u: goto L_08AC99A4;
    case 456u: goto L_08AC99AC;
    case 457u: goto L_08AC99B8;
    case 458u: goto L_08AC99C0;
    case 459u: goto L_08AC99C8;
    case 460u: goto L_08AC99D0;
    case 461u: goto L_08AC99DC;
    case 462u: goto L_08AC99F4;
    case 463u: goto L_08AC99FC;
    case 464u: goto L_08AC9A08;
    case 465u: goto L_08AC9A10;
    case 466u: goto L_08AC9A28;
    case 467u: goto L_08AC9A30;
    case 468u: goto L_08AC9A3C;
    case 469u: goto L_08AC9A48;
    case 470u: goto L_08AC9A54;
    case 471u: goto L_08AC9A5C;
    case 472u: goto L_08AC9A64;
    case 473u: goto L_08AC9A74;
    case 474u: goto L_08AC9A7C;
    case 475u: goto L_08AC9AA0;
    case 476u: goto L_08AC9AA8;
    case 477u: goto L_08AC9AC8;
    case 478u: goto L_08AC9AD4;
    case 479u: goto L_08AC9ADC;
    case 480u: goto L_08AC9AEC;
    case 481u: goto L_08AC9AF8;
    case 482u: goto L_08AC9B00;
    case 483u: goto L_08AC9B08;
    case 484u: goto L_08AC9B14;
    case 485u: goto L_08AC9B1C;
    case 486u: goto L_08AC9B24;
    case 487u: goto L_08AC9B34;
    case 488u: goto L_08AC9B3C;
    case 489u: goto L_08AC9B44;
    case 490u: goto L_08AC9B50;
    case 491u: goto L_08AC9B68;
    case 492u: goto L_08AC9B7C;
    case 493u: goto L_08AC9B84;
    case 494u: goto L_08AC9B8C;
    case 495u: goto L_08AC9B94;
    case 496u: goto L_08AC9BA8;
    case 497u: goto L_08AC9BB0;
    case 498u: goto L_08AC9BBC;
    case 499u: goto L_08AC9BC4;
    case 500u: goto L_08AC9BCC;
    case 501u: goto L_08AC9BDC;
    case 502u: goto L_08AC9BE4;
    case 503u: goto L_08AC9BEC;
    case 504u: goto L_08AC9BF8;
    case 505u: goto L_08AC9C10;
    case 506u: goto L_08AC9C24;
    case 507u: goto L_08AC9C30;
    case 508u: goto L_08AC9C38;
    case 509u: goto L_08AC9C40;
    case 510u: goto L_08AC9C48;
    case 511u: goto L_08AC9C58;
    case 512u: goto L_08AC9C60;
    case 513u: goto L_08AC9C68;
    case 514u: goto L_08AC9C70;
    case 515u: goto L_08AC9C88;
    case 516u: goto L_08AC9C90;
    case 517u: goto L_08AC9CA4;
    case 518u: goto L_08AC9CB0;
    case 519u: goto L_08AC9CBC;
    case 520u: goto L_08AC9CC4;
    case 521u: goto L_08AC9CCC;
    case 522u: goto L_08AC9CD4;
    case 523u: goto L_08AC9CDC;
    case 524u: goto L_08AC9CE8;
    case 525u: goto L_08AC9CF0;
    case 526u: goto L_08AC9CF8;
    case 527u: goto L_08AC9D00;
    case 528u: goto L_08AC9D08;
    case 529u: goto L_08AC9D2C;
    case 530u: goto L_08AC9D3C;
    case 531u: goto L_08AC9D44;
    case 532u: goto L_08AC9D4C;
    case 533u: goto L_08AC9D54;
    case 534u: goto L_08AC9D60;
    case 535u: goto L_08AC9D6C;
    case 536u: goto L_08AC9D74;
    case 537u: goto L_08AC9D80;
    case 538u: goto L_08AC9D88;
    case 539u: goto L_08AC9D98;
    case 540u: goto L_08AC9DA8;
    case 541u: goto L_08AC9DB0;
    case 542u: goto L_08AC9DB8;
    case 543u: goto L_08AC9DC0;
    case 544u: goto L_08AC9DC8;
    case 545u: goto L_08AC9DD0;
    case 546u: goto L_08AC9DD8;
    case 547u: goto L_08AC9DE0;
    case 548u: goto L_08AC9DEC;
    case 549u: goto L_08AC9DF4;
    case 550u: goto L_08AC9DFC;
    case 551u: goto L_08AC9E04;
    case 552u: goto L_08AC9E10;
    case 553u: goto L_08AC9E18;
    case 554u: goto L_08AC9E20;
    case 555u: goto L_08AC9E2C;
    case 556u: goto L_08AC9E38;
    case 557u: goto L_08AC9E40;
    case 558u: goto L_08AC9E48;
    case 559u: goto L_08AC9E4C;
    case 560u: goto L_08AC9E50;
    case 561u: goto L_08AC9E6C;
    case 562u: goto L_08AC9E84;
    case 563u: goto L_08AC9E90;
    case 564u: goto L_08AC9EA4;
    case 565u: goto L_08AC9EC0;
    case 566u: goto L_08AC9ED4;
    case 567u: goto L_08AC9EE8;
    case 568u: goto L_08AC9F14;
    case 569u: goto L_08AC9F30;
    case 570u: goto L_08AC9F38;
    case 571u: goto L_08AC9F48;
    case 572u: goto L_08AC9F60;
    case 573u: goto L_08AC9F6C;
    case 574u: goto L_08AC9F78;
    case 575u: goto L_08AC9F84;
    case 576u: goto L_08AC9F8C;
    case 577u: goto L_08AC9F94;
    case 578u: goto L_08AC9F9C;
    case 579u: goto L_08AC9FD4;
    case 580u: goto L_08AC9FDC;
    case 581u: goto L_08AC9FEC;
    case 582u: goto L_08AC9FF8;
    case 583u: goto L_08ACA000;
    case 584u: goto L_08ACA010;
    case 585u: goto L_08ACA01C;
    case 586u: goto L_08ACA024;
    case 587u: goto L_08ACA034;
    case 588u: goto L_08ACA054;
    case 589u: goto L_08ACA05C;
    case 590u: goto L_08ACA064;
    case 591u: goto L_08ACA06C;
    case 592u: goto L_08ACA074;
    case 593u: goto L_08ACA07C;
    case 594u: goto L_08ACA088;
    case 595u: goto L_08ACA0A0;
    case 596u: goto L_08ACA0A8;
    case 597u: goto L_08ACA0B4;
    case 598u: goto L_08ACA0BC;
    case 599u: goto L_08ACA0D4;
    case 600u: goto L_08ACA0DC;
    case 601u: goto L_08ACA0E4;
    case 602u: goto L_08ACA0F8;
    case 603u: goto L_08ACA104;
    case 604u: goto L_08ACA10C;
    case 605u: goto L_08ACA114;
    case 606u: goto L_08ACA120;
    case 607u: goto L_08ACA128;
    case 608u: goto L_08ACA130;
    case 609u: goto L_08ACA140;
    case 610u: goto L_08ACA148;
    case 611u: goto L_08ACA150;
    case 612u: goto L_08ACA15C;
    case 613u: goto L_08ACA174;
    case 614u: goto L_08ACA17C;
    case 615u: goto L_08ACA184;
    case 616u: goto L_08ACA18C;
    case 617u: goto L_08ACA194;
    case 618u: goto L_08ACA1A4;
    case 619u: goto L_08ACA1AC;
    case 620u: goto L_08ACA1B8;
    case 621u: goto L_08ACA1C4;
    case 622u: goto L_08ACA1D4;
    case 623u: goto L_08ACA1DC;
    case 624u: goto L_08ACA1EC;
    case 625u: goto L_08ACA1F8;
    case 626u: goto L_08ACA204;
    case 627u: goto L_08ACA218;
    case 628u: goto L_08ACA220;
    case 629u: goto L_08ACA228;
    case 630u: goto L_08ACA230;
    case 631u: goto L_08ACA24C;
    case 632u: goto L_08ACA268;
    case 633u: goto L_08ACA278;
    case 634u: goto L_08ACA288;
    case 635u: goto L_08ACA294;
    case 636u: goto L_08ACA29C;
    case 637u: goto L_08ACA2D4;
    case 638u: goto L_08ACA2E0;
    case 639u: goto L_08ACA2E8;
    case 640u: goto L_08ACA2F8;
    case 641u: goto L_08ACA304;
    case 642u: goto L_08ACA30C;
    case 643u: goto L_08ACA314;
    case 644u: goto L_08ACA31C;
    case 645u: goto L_08ACA324;
    case 646u: goto L_08ACA32C;
    case 647u: goto L_08ACA338;
    case 648u: goto L_08ACA340;
    case 649u: goto L_08ACA34C;
    case 650u: goto L_08ACA354;
    case 651u: goto L_08ACA360;
    case 652u: goto L_08ACA368;
    case 653u: goto L_08ACA370;
    case 654u: goto L_08ACA378;
    case 655u: goto L_08ACA384;
    case 656u: goto L_08ACA39C;
    case 657u: goto L_08ACA3A4;
    case 658u: goto L_08ACA3B0;
    case 659u: goto L_08ACA3B8;
    case 660u: goto L_08ACA3D0;
    case 661u: goto L_08ACA3D8;
    case 662u: goto L_08ACA3E4;
    case 663u: goto L_08ACA3F0;
    case 664u: goto L_08ACA3FC;
    case 665u: goto L_08ACA404;
    case 666u: goto L_08ACA40C;
    case 667u: goto L_08ACA41C;
    case 668u: goto L_08ACA424;
    case 669u: goto L_08ACA448;
    case 670u: goto L_08ACA450;
    case 671u: goto L_08ACA470;
    case 672u: goto L_08ACA47C;
    case 673u: goto L_08ACA484;
    case 674u: goto L_08ACA494;
    case 675u: goto L_08ACA4A0;
    case 676u: goto L_08ACA4A8;
    case 677u: goto L_08ACA4B0;
    case 678u: goto L_08ACA4BC;
    case 679u: goto L_08ACA4C4;
    case 680u: goto L_08ACA4CC;
    case 681u: goto L_08ACA4DC;
    case 682u: goto L_08ACA4E4;
    case 683u: goto L_08ACA4EC;
    case 684u: goto L_08ACA4F8;
    case 685u: goto L_08ACA510;
    case 686u: goto L_08ACA524;
    case 687u: goto L_08ACA52C;
    case 688u: goto L_08ACA534;
    case 689u: goto L_08ACA53C;
    case 690u: goto L_08ACA550;
    case 691u: goto L_08ACA558;
    case 692u: goto L_08ACA564;
    case 693u: goto L_08ACA56C;
    case 694u: goto L_08ACA574;
    case 695u: goto L_08ACA584;
    case 696u: goto L_08ACA58C;
    case 697u: goto L_08ACA594;
    case 698u: goto L_08ACA5A0;
    case 699u: goto L_08ACA5B8;
    case 700u: goto L_08ACA5CC;
    case 701u: goto L_08ACA5D8;
    case 702u: goto L_08ACA5E0;
    case 703u: goto L_08ACA5E8;
    case 704u: goto L_08ACA5F0;
    case 705u: goto L_08ACA600;
    case 706u: goto L_08ACA608;
    case 707u: goto L_08ACA610;
    case 708u: goto L_08ACA624;
    case 709u: goto L_08ACA630;
    case 710u: goto L_08ACA640;
    case 711u: goto L_08ACA648;
    case 712u: goto L_08ACA650;
    case 713u: goto L_08ACA658;
    case 714u: goto L_08ACA664;
    case 715u: goto L_08ACA66C;
    case 716u: goto L_08ACA674;
    case 717u: goto L_08ACA67C;
    case 718u: goto L_08ACA684;
    case 719u: goto L_08ACA6AC;
    case 720u: goto L_08ACA6C0;
    case 721u: goto L_08ACA6C8;
    case 722u: goto L_08ACA6D0;
    case 723u: goto L_08ACA6D8;
    case 724u: goto L_08ACA6E4;
    case 725u: goto L_08ACA6EC;
    case 726u: goto L_08ACA6FC;
    case 727u: goto L_08ACA70C;
    case 728u: goto L_08ACA714;
    case 729u: goto L_08ACA720;
    case 730u: goto L_08ACA72C;
    case 731u: goto L_08ACA738;
    case 732u: goto L_08ACA744;
    case 733u: goto L_08ACA750;
    case 734u: goto L_08ACA75C;
    case 735u: goto L_08ACA768;
    case 736u: goto L_08ACA774;
    case 737u: goto L_08ACA780;
    case 738u: goto L_08ACA78C;
    case 739u: goto L_08ACA7A4;
    case 740u: goto L_08ACA7B0;
    case 741u: goto L_08ACA7BC;
    case 742u: goto L_08ACA7C8;
    case 743u: goto L_08ACA7D4;
    case 744u: goto L_08ACA7E0;
    case 745u: goto L_08ACA7EC;
    case 746u: goto L_08ACA7F8;
    case 747u: goto L_08ACA800;
    case 748u: goto L_08ACA808;
    case 749u: goto L_08ACA810;
    case 750u: goto L_08ACA848;
    case 751u: goto L_08ACA850;
    case 752u: goto L_08ACA860;
    case 753u: goto L_08ACA870;
    case 754u: goto L_08ACA890;
    case 755u: goto L_08ACA8B0;
    case 756u: goto L_08ACA8D0;
    case 757u: goto L_08ACA8D8;
    case 758u: goto L_08ACA8E4;
    case 759u: goto L_08ACA8FC;
    case 760u: goto L_08ACA904;
    case 761u: goto L_08ACA90C;
    case 762u: goto L_08ACA914;
    case 763u: goto L_08ACA92C;
    case 764u: goto L_08ACA934;
    case 765u: goto L_08ACA93C;
    case 766u: goto L_08ACA948;
    case 767u: goto L_08ACA954;
    case 768u: goto L_08ACA95C;
    case 769u: goto L_08ACA964;
    case 770u: goto L_08ACA974;
    case 771u: goto L_08ACA97C;
    case 772u: goto L_08ACA988;
    case 773u: goto L_08ACA994;
    case 774u: goto L_08ACA99C;
    case 775u: goto L_08ACA9A4;
    case 776u: goto L_08ACA9AC;
    case 777u: goto L_08ACA9B8;
    case 778u: goto L_08ACA9CC;
    case 779u: goto L_08ACA9D4;
    case 780u: goto L_08ACA9E0;
    case 781u: goto L_08ACA9F4;
    case 782u: goto L_08ACA9FC;
    case 783u: goto L_08ACAA08;
    case 784u: goto L_08ACAA1C;
    case 785u: goto L_08ACAA24;
    case 786u: goto L_08ACAA30;
    case 787u: goto L_08ACAA44;
    case 788u: goto L_08ACAA4C;
    case 789u: goto L_08ACAA54;
    case 790u: goto L_08ACAA5C;
    case 791u: goto L_08ACAA64;
    case 792u: goto L_08ACAA70;
    case 793u: goto L_08ACAA8C;
    case 794u: goto L_08ACAA94;
    case 795u: goto L_08ACAA9C;
    case 796u: goto L_08ACAAA4;
    case 797u: goto L_08ACAAAC;
    case 798u: goto L_08ACAAB8;
    case 799u: goto L_08ACAAD0;
    case 800u: goto L_08ACAAD8;
    case 801u: goto L_08ACAAE0;
    case 802u: goto L_08ACAAE4;
    case 803u: goto L_08ACAAEC;
    case 804u: goto L_08ACAAF4;
    case 805u: goto L_08ACAB00;
    case 806u: goto L_08ACAB08;
    case 807u: goto L_08ACAB14;
    case 808u: goto L_08ACAB18;
    case 809u: goto L_08ACAB28;
    case 810u: goto L_08ACAB30;
    case 811u: goto L_08ACAB48;
    case 812u: goto L_08ACAB60;
    case 813u: goto L_08ACAB68;
    case 814u: goto L_08ACAB70;
    case 815u: goto L_08ACAB7C;
    case 816u: goto L_08ACAB84;
    case 817u: goto L_08ACAB88;
    case 818u: goto L_08ACAB90;
    case 819u: goto L_08ACABA8;
    case 820u: goto L_08ACABB8;
    case 821u: goto L_08ACABC0;
    case 822u: goto L_08ACABC8;
    case 823u: goto L_08ACABD0;
    case 824u: goto L_08ACABD8;
    case 825u: goto L_08ACABE4;
    case 826u: goto L_08ACABFC;
    case 827u: goto L_08ACAC04;
    case 828u: goto L_08ACAC18;
    case 829u: goto L_08ACAC20;
    case 830u: goto L_08ACAC2C;
    case 831u: goto L_08ACAC34;
    case 832u: goto L_08ACAC3C;
    case 833u: goto L_08ACAC44;
    case 834u: goto L_08ACAC4C;
    case 835u: goto L_08ACAC60;
    case 836u: goto L_08ACAC74;
    case 837u: goto L_08ACAC80;
    case 838u: goto L_08ACAC8C;
    case 839u: goto L_08ACAC98;
    case 840u: goto L_08ACACA0;
    case 841u: goto L_08ACACA8;
    case 842u: goto L_08ACACBC;
    case 843u: goto L_08ACACC4;
    case 844u: goto L_08ACACD0;
    case 845u: goto L_08ACACE8;
    case 846u: goto L_08ACACF0;
    case 847u: goto L_08ACAD04;
    case 848u: goto L_08ACAD0C;
    case 849u: goto L_08ACAD18;
    case 850u: goto L_08ACAD30;
    case 851u: goto L_08ACAD3C;
    case 852u: goto L_08ACAD48;
    case 853u: goto L_08ACAD50;
    case 854u: goto L_08ACAD58;
    case 855u: goto L_08ACAD60;
    case 856u: goto L_08ACAD68;
    case 857u: goto L_08ACAD74;
    case 858u: goto L_08ACAD7C;
    case 859u: goto L_08ACAD84;
    case 860u: goto L_08ACAD8C;
    case 861u: goto L_08ACAD98;
    case 862u: goto L_08ACADA0;
    case 863u: goto L_08ACADA8;
    case 864u: goto L_08ACADB4;
    case 865u: goto L_08ACADC0;
    case 866u: goto L_08ACADCC;
    case 867u: goto L_08ACADD8;
    case 868u: goto L_08ACADE0;
    case 869u: goto L_08ACADE8;
    case 870u: goto L_08ACADF0;
    case 871u: goto L_08ACADF8;
    case 872u: goto L_08ACADFC;
    case 873u: goto L_08ACAE00;
    case 874u: goto L_08ACAE18;
    case 875u: goto L_08ACAE20;
    case 876u: goto L_08ACAE3C;
    case 877u: goto L_08ACAE4C;
    case 878u: goto L_08ACAE68;
    case 879u: goto L_08ACAE78;
    case 880u: goto L_08ACAE80;
    case 881u: goto L_08ACAE84;
    case 882u: goto L_08ACAE90;
    case 883u: goto L_08ACAE98;
    case 884u: goto L_08ACAEA0;
    case 885u: goto L_08ACAEA8;
    case 886u: goto L_08ACAEB4;
    case 887u: goto L_08ACAEBC;
    case 888u: goto L_08ACAED4;
    case 889u: goto L_08ACAEF0;
    case 890u: goto L_08ACAEFC;
    case 891u: goto L_08ACAF08;
    case 892u: goto L_08ACAF10;
    case 893u: goto L_08ACAF48;
    case 894u: goto L_08ACAF50;
    case 895u: goto L_08ACAF60;
    case 896u: goto L_08ACAF6C;
    case 897u: goto L_08ACAF74;
    case 898u: goto L_08ACAF84;
    case 899u: goto L_08ACAF90;
    case 900u: goto L_08ACAFA4;
    case 901u: goto L_08ACAFC4;
    case 902u: goto L_08ACAFCC;
    case 903u: goto L_08ACAFDC;
    case 904u: goto L_08ACAFFC;
    case 905u: goto L_08ACB004;
    case 906u: goto L_08ACB014;
    case 907u: goto L_08ACB034;
    case 908u: goto L_08ACB03C;
    case 909u: goto L_08ACB044;
    case 910u: goto L_08ACB04C;
    case 911u: goto L_08ACB054;
    case 912u: goto L_08ACB05C;
    case 913u: goto L_08ACB068;
    case 914u: goto L_08ACB070;
    case 915u: goto L_08ACB078;
    case 916u: goto L_08ACB080;
    case 917u: goto L_08ACB08C;
    case 918u: goto L_08ACB0A4;
    case 919u: goto L_08ACB0AC;
    case 920u: goto L_08ACB0B8;
    case 921u: goto L_08ACB0C0;
    case 922u: goto L_08ACB0F4;
    case 923u: goto L_08ACB0FC;
    case 924u: goto L_08ACB108;
    case 925u: goto L_08ACB114;
    case 926u: goto L_08ACB11C;
    case 927u: goto L_08ACB12C;
    case 928u: goto L_08ACB138;
    case 929u: goto L_08ACB140;
    case 930u: goto L_08ACB148;
    case 931u: goto L_08ACB154;
    case 932u: goto L_08ACB15C;
    case 933u: goto L_08ACB164;
    case 934u: goto L_08ACB174;
    case 935u: goto L_08ACB17C;
    case 936u: goto L_08ACB184;
    case 937u: goto L_08ACB190;
    case 938u: goto L_08ACB1C0;
    case 939u: goto L_08ACB1C8;
    case 940u: goto L_08ACB1D0;
    case 941u: goto L_08ACB1E0;
    case 942u: goto L_08ACB1EC;
    case 943u: goto L_08ACB1F8;
    case 944u: goto L_08ACB20C;
    case 945u: goto L_08ACB214;
    case 946u: goto L_08ACB21C;
    case 947u: goto L_08ACB224;
    case 948u: goto L_08ACB22C;
    case 949u: goto L_08ACB234;
    case 950u: goto L_08ACB23C;
    case 951u: goto L_08ACB254;
    case 952u: goto L_08ACB258;
    case 953u: goto L_08ACB270;
    case 954u: goto L_08ACB278;
    case 955u: goto L_08ACB280;
    case 956u: goto L_08ACB288;
    case 957u: goto L_08ACB290;
    case 958u: goto L_08ACB298;
    case 959u: goto L_08ACB2A0;
    case 960u: goto L_08ACB2A8;
    case 961u: goto L_08ACB2BC;
    case 962u: goto L_08ACB2D0;
    case 963u: goto L_08ACB2E8;
    case 964u: goto L_08ACB2F4;
    case 965u: goto L_08ACB300;
    case 966u: goto L_08ACB30C;
    case 967u: goto L_08ACB314;
    case 968u: goto L_08ACB31C;
    case 969u: goto L_08ACB324;
    case 970u: goto L_08ACB330;
    case 971u: goto L_08ACB33C;
    case 972u: goto L_08ACB344;
    case 973u: goto L_08ACB350;
    case 974u: goto L_08ACB368;
    case 975u: goto L_08ACB370;
    case 976u: goto L_08ACB37C;
    case 977u: goto L_08ACB388;
    case 978u: goto L_08ACB390;
    case 979u: goto L_08ACB39C;
    case 980u: goto L_08ACB3A4;
    case 981u: goto L_08ACB3AC;
    case 982u: goto L_08ACB3BC;
    case 983u: goto L_08ACB3C4;
    case 984u: goto L_08ACB3CC;
    case 985u: goto L_08ACB3D8;
    case 986u: goto L_08ACB3F0;
    case 987u: goto L_08ACB404;
    case 988u: goto L_08ACB40C;
    case 989u: goto L_08ACB444;
    case 990u: goto L_08ACB44C;
    case 991u: goto L_08ACB45C;
    case 992u: goto L_08ACB468;
    case 993u: goto L_08ACB470;
    case 994u: goto L_08ACB480;
    case 995u: goto L_08ACB48C;
    case 996u: goto L_08ACB494;
    case 997u: goto L_08ACB4A4;
    case 998u: goto L_08ACB4C4;
    case 999u: goto L_08ACB4CC;
    case 1000u: goto L_08ACB4D4;
    case 1001u: goto L_08ACB4DC;
    case 1002u: goto L_08ACB4E4;
    case 1003u: goto L_08ACB4FC;
    case 1004u: goto L_08ACB508;
    case 1005u: goto L_08ACB510;
    case 1006u: goto L_08ACB518;
    case 1007u: goto L_08ACB524;
    case 1008u: goto L_08ACB52C;
    case 1009u: goto L_08ACB560;
    case 1010u: goto L_08ACB568;
    case 1011u: goto L_08ACB574;
    case 1012u: goto L_08ACB57C;
    case 1013u: goto L_08ACB594;
    case 1014u: goto L_08ACB59C;
    case 1015u: goto L_08ACB5A4;
    case 1016u: goto L_08ACB5B4;
    case 1017u: goto L_08ACB5CC;
    case 1018u: goto L_08ACB5D4;
    case 1019u: goto L_08ACB5DC;
    case 1020u: goto L_08ACB5E4;
    case 1021u: goto L_08ACB5F4;
    case 1022u: goto L_08ACB604;
    case 1023u: goto L_08ACB610;
    case 1024u: goto L_08ACB61C;
    case 1025u: goto L_08ACB630;
    case 1026u: goto L_08ACB638;
    case 1027u: goto L_08ACB640;
    case 1028u: goto L_08ACB64C;
    case 1029u: goto L_08ACB654;
    case 1030u: goto L_08ACB660;
    case 1031u: goto L_08ACB668;
    case 1032u: goto L_08ACB678;
    case 1033u: goto L_08ACB684;
    case 1034u: goto L_08ACB690;
    case 1035u: goto L_08ACB6A4;
    case 1036u: goto L_08ACB6AC;
    case 1037u: goto L_08ACB6B4;
    case 1038u: goto L_08ACB6BC;
    case 1039u: goto L_08ACB6C4;
    case 1040u: goto L_08ACB6D0;
    case 1041u: goto L_08ACB6E4;
    case 1042u: goto L_08ACB6F4;
    case 1043u: goto L_08ACB6FC;
    case 1044u: goto L_08ACB708;
    case 1045u: goto L_08ACB710;
    case 1046u: goto L_08ACB718;
    case 1047u: goto L_08ACB72C;
    case 1048u: goto L_08ACB748;
    case 1049u: goto L_08ACB760;
    case 1050u: goto L_08ACB76C;
    case 1051u: goto L_08ACB778;
    case 1052u: goto L_08ACB784;
    case 1053u: goto L_08ACB78C;
    case 1054u: goto L_08ACB794;
    case 1055u: goto L_08ACB79C;
    case 1056u: goto L_08ACB7A8;
    case 1057u: goto L_08ACB7B4;
    case 1058u: goto L_08ACB7CC;
    case 1059u: goto L_08ACB7D4;
    case 1060u: goto L_08ACB7E0;
    case 1061u: goto L_08ACB7F8;
    case 1062u: goto L_08ACB800;
    case 1063u: goto L_08ACB80C;
    case 1064u: goto L_08ACB814;
    case 1065u: goto L_08ACB81C;
    case 1066u: goto L_08ACB82C;
    case 1067u: goto L_08ACB834;
    case 1068u: goto L_08ACB83C;
    case 1069u: goto L_08ACB848;
    case 1070u: goto L_08ACB860;
    case 1071u: goto L_08ACB868;
    case 1072u: goto L_08ACB8A0;
    case 1073u: goto L_08ACB8A8;
    case 1074u: goto L_08ACB8B8;
    case 1075u: goto L_08ACB8C4;
    case 1076u: goto L_08ACB8CC;
    case 1077u: goto L_08ACB8DC;
    case 1078u: goto L_08ACB8E8;
    case 1079u: goto L_08ACB8F0;
    case 1080u: goto L_08ACB900;
    case 1081u: goto L_08ACB920;
    case 1082u: goto L_08ACB928;
    case 1083u: goto L_08ACB930;
    case 1084u: goto L_08ACB938;
    case 1085u: goto L_08ACB944;
    case 1086u: goto L_08ACB94C;
    case 1087u: goto L_08ACB954;
    case 1088u: goto L_08ACB96C;
    case 1089u: goto L_08ACB978;
    case 1090u: goto L_08ACB980;
    case 1091u: goto L_08ACB988;
    case 1092u: goto L_08ACB994;
    case 1093u: goto L_08ACB99C;
    case 1094u: goto L_08ACB9D0;
    case 1095u: goto L_08ACB9D8;
    case 1096u: goto L_08ACB9E4;
    case 1097u: goto L_08ACB9F0;
    case 1098u: goto L_08ACB9F8;
    case 1099u: goto L_08ACBA08;
    case 1100u: goto L_08ACBA10;
    case 1101u: goto L_08ACBA24;
    case 1102u: goto L_08ACBA40;
    case 1103u: goto L_08ACBA58;
    case 1104u: goto L_08ACBA64;
    case 1105u: goto L_08ACBA70;
    case 1106u: goto L_08ACBA7C;
    case 1107u: goto L_08ACBA84;
    case 1108u: goto L_08ACBA8C;
    case 1109u: goto L_08ACBA94;
    case 1110u: goto L_08ACBAA0;
    case 1111u: goto L_08ACBAAC;
    case 1112u: goto L_08ACBAC4;
    case 1113u: goto L_08ACBACC;
    case 1114u: goto L_08ACBAD8;
    case 1115u: goto L_08ACBAF0;
    case 1116u: goto L_08ACBAF8;
    case 1117u: goto L_08ACBB04;
    case 1118u: goto L_08ACBB0C;
    case 1119u: goto L_08ACBB14;
    case 1120u: goto L_08ACBB24;
    case 1121u: goto L_08ACBB2C;
    case 1122u: goto L_08ACBB34;
    case 1123u: goto L_08ACBB40;
    case 1124u: goto L_08ACBB58;
    case 1125u: goto L_08ACBB60;
    case 1126u: goto L_08ACBB98;
    case 1127u: goto L_08ACBBA0;
    case 1128u: goto L_08ACBBB0;
    case 1129u: goto L_08ACBBBC;
    case 1130u: goto L_08ACBBC4;
    case 1131u: goto L_08ACBBD4;
    case 1132u: goto L_08ACBBE0;
    case 1133u: goto L_08ACBBE8;
    case 1134u: goto L_08ACBBF8;
    case 1135u: goto L_08ACBC18;
    case 1136u: goto L_08ACBC20;
    case 1137u: goto L_08ACBC30;
    case 1138u: goto L_08ACBC50;
    case 1139u: goto L_08ACBC58;
    case 1140u: goto L_08ACBC60;
    case 1141u: goto L_08ACBC68;
    case 1142u: goto L_08ACBC74;
    case 1143u: goto L_08ACBC7C;
    case 1144u: goto L_08ACBC84;
    case 1145u: goto L_08ACBC9C;
    case 1146u: goto L_08ACBCA8;
    case 1147u: goto L_08ACBCB0;
    case 1148u: goto L_08ACBCB8;
    case 1149u: goto L_08ACBCC4;
    case 1150u: goto L_08ACBCCC;
    case 1151u: goto L_08ACBCFC;
    case 1152u: goto L_08ACBD04;
    case 1153u: goto L_08ACBD10;
    case 1154u: goto L_08ACBD1C;
    case 1155u: goto L_08ACBD24;
    case 1156u: goto L_08ACBD34;
    case 1157u: goto L_08ACBD3C;
    case 1158u: goto L_08ACBD48;
    case 1159u: goto L_08ACBD54;
    case 1160u: goto L_08ACBD5C;
    case 1161u: goto L_08ACBD64;
    case 1162u: goto L_08ACBD6C;
    case 1163u: goto L_08ACBD74;
    case 1164u: goto L_08ACBD7C;
    case 1165u: goto L_08ACBD84;
    case 1166u: goto L_08ACBD8C;
    case 1167u: goto L_08ACBD94;
    case 1168u: goto L_08ACBDBC;
    case 1169u: goto L_08ACBDDC;
    case 1170u: goto L_08ACBDEC;
    case 1171u: goto L_08ACBE00;
    case 1172u: goto L_08ACBE30;
    case 1173u: goto L_08ACBE44;
    case 1174u: goto L_08ACBE54;
    case 1175u: goto L_08ACBE70;
    case 1176u: goto L_08ACBE84;
    case 1177u: goto L_08ACBEA0;
    case 1178u: goto L_08ACBEB8;
    case 1179u: goto L_08ACBED4;
    case 1180u: goto L_08ACBEDC;
    case 1181u: goto L_08ACBF14;
    case 1182u: goto L_08ACBF1C;
    case 1183u: goto L_08ACBF2C;
    case 1184u: goto L_08ACBF38;
    case 1185u: goto L_08ACBF40;
    case 1186u: goto L_08ACBF50;
    case 1187u: goto L_08ACBF5C;
    case 1188u: goto L_08ACBF64;
    case 1189u: goto L_08ACBF74;
    case 1190u: goto L_08ACBF94;
    case 1191u: goto L_08ACBF9C;
    case 1192u: goto L_08ACBFA4;
    case 1193u: goto L_08ACBFAC;
    case 1194u: goto L_08ACBFB8;
    case 1195u: goto L_08ACBFC0;
    case 1196u: goto L_08ACBFC8;
    case 1197u: goto L_08ACBFD0;
    case 1198u: goto L_08ACBFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC8000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-10008), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-10004));
    goto L_08AC8018;
L_08AC8018:
    ctx.set_gpr(31, 0x08AC8020u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AC8058;
L_08AC8020:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC8018;
      }
      goto L_08AC8030;
    }
L_08AC8030:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9884));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8044u);
    ctx.set_gpr(6, 0u | 51200u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8044u) goto L_08AC8044;
    return;
L_08AC8044:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8058:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8068:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-10008)));
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AC80D8;
      }
      goto L_08AC807C;
    }
L_08AC807C:
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10004));
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
    goto L_08AC8088;
L_08AC8088:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AC80CC;
    }
    goto L_08AC80AC;
L_08AC80AC:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC80C8;
      }
      goto L_08AC80BC;
    }
L_08AC80BC:
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_08AC80CC;
      }
      goto L_08AC80C8;
    }
L_08AC80C8:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AC80CC;
L_08AC80CC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
        goto L_08AC8088;
    }
    goto L_08AC80D8;
L_08AC80D8:
    ctx.set_gpr(2, ctx.gpr[9] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10000));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9884));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10004));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9996));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-10008)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-10008), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC813C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-10008)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08AC836C;
      }
      goto L_08AC8154;
    }
L_08AC8154:
    ctx.set_gpr(7, 2246u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-10004));
    goto L_08AC815C;
L_08AC815C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08AC8360;
    }
    goto L_08AC8168;
L_08AC8168:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC833C;
      }
      goto L_08AC8174;
    }
L_08AC8174:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
        goto L_08AC82F4;
    }
    goto L_08AC8188;
L_08AC8188:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 10 ? 1u : 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08AC81B4;
      }
      goto L_08AC819C;
    }
L_08AC819C:
    ctx.set_gpr(1, 32767u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 65535u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC81B4;
      }
      goto L_08AC81B0;
    }
L_08AC81B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC81B4;
L_08AC81B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC81CC;
      }
      goto L_08AC81BC;
    }
L_08AC81BC:
    ctx.set_gpr(2, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC81CC;
      }
      goto L_08AC81C8;
    }
L_08AC81C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC81CC;
L_08AC81CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8204;
      }
      goto L_08AC81D4;
    }
L_08AC81D4:
    ctx.set_gpr(2, 0u - ctx.gpr[3]);
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC81F8;
      }
      goto L_08AC81E8;
    }
L_08AC81E8:
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC81F8;
      }
      goto L_08AC81F4;
    }
L_08AC81F4:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08AC81F8;
L_08AC81F8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8204;
      }
      goto L_08AC8200;
    }
L_08AC8200:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08AC8204;
L_08AC8204:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC82F0;
      }
      goto L_08AC820C;
    }
L_08AC820C:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10004));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AC8224;
L_08AC8224:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08AC8224;
      }
      goto L_08AC82F0;
    }
L_08AC82F0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    goto L_08AC82F4;
L_08AC82F4:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC833C;
      }
      goto L_08AC82FC;
    }
L_08AC82FC:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10004));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[4]);
    goto L_08AC8314;
L_08AC8314:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC8314;
      }
      goto L_08AC833C;
    }
L_08AC833C:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(31, 0x08AC8348u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9896));
    goto L_08AC8058;
L_08AC8348:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-10008)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-10008), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC836C;
      }
      goto L_08AC8360;
    }
L_08AC8360:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC815C;
      }
      goto L_08AC836C;
    }
L_08AC836C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC8398u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AC8068;
L_08AC8398:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08AC83B0;
      }
      goto L_08AC83A0;
    }
L_08AC83A0:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC83B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC83B0u) goto L_08AC83B0;
    return;
L_08AC83B0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08AC83CC:
    // nop
    goto L_08AC813C;
L_08AC83D4:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem); return;
L_08AC83DC:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem); return;
L_08AC83E8:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] & 7u);
        goto L_08AC83F8;
    }
    goto L_08AC83F0;
L_08AC83F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC8584;
      }
      goto L_08AC83F8;
    }
L_08AC83F8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
        goto L_08AC8470;
    }
    goto L_08AC8400;
L_08AC8400:
    ctx.set_gpr(2, ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC846C;
      }
      goto L_08AC840C;
    }
L_08AC840C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 3u));
      if (branch_taken) {
          goto L_08AC841C;
      }
      goto L_08AC8414;
    }
L_08AC8414:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    goto L_08AC841C;
L_08AC841C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08AC8454;
      }
      goto L_08AC8424;
    }
L_08AC8424:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AC8580;
      }
      goto L_08AC8438;
    }
L_08AC8438:
    if (ctx.gpr[8] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AC8584;
    }
    goto L_08AC8440;
L_08AC8440:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AC8424;
      }
      goto L_08AC8454;
    }
L_08AC8454:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(2, ctx.gpr[6] & 7u);
      if (branch_taken) {
          goto L_08AC8468;
      }
      goto L_08AC845C;
    }
L_08AC845C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AC846C;
    }
    goto L_08AC8464;
L_08AC8464:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    goto L_08AC8468;
L_08AC8468:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AC846C;
L_08AC846C:
    ctx.set_gpr(2, ctx.gpr[4] & 3u);
    goto L_08AC8470;
L_08AC8470:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
        goto L_08AC84DC;
    }
    goto L_08AC8478;
L_08AC8478:
    ctx.set_gpr(2, ctx.gpr[5] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC84D8;
      }
      goto L_08AC8484;
    }
L_08AC8484:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
      if (branch_taken) {
          goto L_08AC8494;
      }
      goto L_08AC848C;
    }
L_08AC848C:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08AC8494;
L_08AC8494:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AC84C0;
      }
      goto L_08AC849C;
    }
L_08AC849C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC8580;
      }
      goto L_08AC84AC;
    }
L_08AC84AC:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC849C;
      }
      goto L_08AC84C0;
    }
L_08AC84C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(2, ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08AC84D4;
      }
      goto L_08AC84C8;
    }
L_08AC84C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AC84D8;
    }
    goto L_08AC84D0;
L_08AC84D0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    goto L_08AC84D4;
L_08AC84D4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AC84D8;
L_08AC84D8:
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    goto L_08AC84DC;
L_08AC84DC:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(7, 0u + 0u);
        goto L_08AC8548;
    }
    goto L_08AC84E4;
L_08AC84E4:
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8544;
      }
      goto L_08AC84F0;
    }
L_08AC84F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
      if (branch_taken) {
          goto L_08AC8500;
      }
      goto L_08AC84F8;
    }
L_08AC84F8:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_08AC8500;
L_08AC8500:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08AC852C;
      }
      goto L_08AC8508;
    }
L_08AC8508:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC8580;
      }
      goto L_08AC8518;
    }
L_08AC8518:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AC8508;
      }
      goto L_08AC852C;
    }
L_08AC852C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.set_gpr(2, ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08AC8540;
      }
      goto L_08AC8534;
    }
L_08AC8534:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
        goto L_08AC8544;
    }
    goto L_08AC853C;
L_08AC853C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    goto L_08AC8540;
L_08AC8540:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08AC8544;
L_08AC8544:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08AC8548;
L_08AC8548:
    if (ctx.gpr[6] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08AC8584;
    }
    goto L_08AC8550;
L_08AC8550:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC8580;
      }
      goto L_08AC8560;
    }
L_08AC8560:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC8550;
      }
      goto L_08AC8574;
    }
L_08AC8574:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8584;
      }
      goto L_08AC8580;
    }
L_08AC8580:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AC8584;
L_08AC8584:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC858C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7540));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC85B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08AC85F0;
    }
    goto L_08AC85D0;
L_08AC85D0:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(7540));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AC85EC;
      }
      goto L_08AC85E4;
    }
L_08AC85E4:
    ctx.set_gpr(31, 0x08AC85ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AC85ECu) goto L_08AC85EC;
    return;
L_08AC85EC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08AC85F0;
L_08AC85F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8600:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8610:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AC8650;
      }
      goto L_08AC8634;
    }
L_08AC8634:
    ctx.set_gpr(31, 0x08AC863Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AC863Cu) goto L_08AC863C;
    return;
L_08AC863C:
    ctx.set_gpr(31, 0x08AC8644u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AC8644u) goto L_08AC8644;
    return;
L_08AC8644:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC8650u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8650u) goto L_08AC8650;
    return;
L_08AC8650:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8668:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC8680u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8680u) goto L_08AC8680;
    return;
L_08AC8680:
    ctx.set_gpr(31, 0x08AC8688u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08AC8688u) goto L_08AC8688;
    return;
L_08AC8688:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC869C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC8A54;
      }
      goto L_08AC86C0;
    }
L_08AC86C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC8AAC;
      }
      goto L_08AC86CC;
    }
L_08AC86CC:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86EC;
      }
      goto L_08AC86DC;
    }
L_08AC86DC:
    ctx.set_gpr(31, 0x08AC86E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 704u, 0x08847F3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC86E4u) goto L_08AC86E4;
    return;
L_08AC86E4:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992), ctx.gpr[2]);
    goto L_08AC86EC;
L_08AC86EC:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC89BC;
      }
      goto L_08AC8704;
    }
L_08AC8704:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC890C;
      }
      goto L_08AC8710;
    }
L_08AC8710:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC885C;
      }
      goto L_08AC871C;
    }
L_08AC871C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC87AC;
      }
      goto L_08AC8728;
    }
L_08AC8728:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8738;
      }
      goto L_08AC8730;
    }
L_08AC8730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A00;
      }
      goto L_08AC8738;
    }
L_08AC8738:
    ctx.set_gpr(31, 0x08AC8740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1220u, 0x08AC7FF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8740u) goto L_08AC8740;
    return;
L_08AC8740:
    ctx.set_gpr(31, 0x08AC8748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8748u) goto L_08AC8748;
    return;
L_08AC8748:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC8768u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08AC8768u) goto L_08AC8768;
    return;
L_08AC8768:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC877Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC877Cu) goto L_08AC877C;
    return;
L_08AC877C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AC8788u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 397u, 0x08ACD51Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8788u) goto L_08AC8788;
    return;
L_08AC8788:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AC8794u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    goto L_08AC8CB8;
L_08AC8794:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AC8A00;
      }
      goto L_08AC87AC;
    }
L_08AC87AC:
    ctx.set_gpr(31, 0x08AC87B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC87B4u) goto L_08AC87B4;
    return;
L_08AC87B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC87C8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC87C8u) goto L_08AC87C8;
    return;
L_08AC87C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AC8B9C;
    }
    goto L_08AC87D0;
L_08AC87D0:
    ctx.set_gpr(31, 0x08AC87D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC87D8u) goto L_08AC87D8;
    return;
L_08AC87D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AC880Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AC880Cu) goto L_08AC880C;
    return;
L_08AC880C:
    ctx.set_gpr(31, 0x08AC8814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8814u) goto L_08AC8814;
    return;
L_08AC8814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8828u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8828u) goto L_08AC8828;
    return;
L_08AC8828:
    ctx.set_gpr(31, 0x08AC8830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8830u) goto L_08AC8830;
    return;
L_08AC8830:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8844u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8844u) goto L_08AC8844;
    return;
L_08AC8844:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AC8A00;
      }
      goto L_08AC885C;
    }
L_08AC885C:
    ctx.set_gpr(31, 0x08AC8864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8864u) goto L_08AC8864;
    return;
L_08AC8864:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC8878u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(50));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8878u) goto L_08AC8878;
    return;
L_08AC8878:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B98;
      }
      goto L_08AC8880;
    }
L_08AC8880:
    ctx.set_gpr(31, 0x08AC8888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8888u) goto L_08AC8888;
    return;
L_08AC8888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AC88BCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AC88BCu) goto L_08AC88BC;
    return;
L_08AC88BC:
    ctx.set_gpr(31, 0x08AC88C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC88C4u) goto L_08AC88C4;
    return;
L_08AC88C4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC88D8u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC88D8u) goto L_08AC88D8;
    return;
L_08AC88D8:
    ctx.set_gpr(31, 0x08AC88E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC88E0u) goto L_08AC88E0;
    return;
L_08AC88E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC88F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC88F4u) goto L_08AC88F4;
    return;
L_08AC88F4:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AC8A00;
      }
      goto L_08AC890C;
    }
L_08AC890C:
    ctx.set_gpr(31, 0x08AC8914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8914u) goto L_08AC8914;
    return;
L_08AC8914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC8928u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8928u) goto L_08AC8928;
    return;
L_08AC8928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B98;
      }
      goto L_08AC8930;
    }
L_08AC8930:
    ctx.set_gpr(31, 0x08AC8938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8938u) goto L_08AC8938;
    return;
L_08AC8938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AC896Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AC896Cu) goto L_08AC896C;
    return;
L_08AC896C:
    ctx.set_gpr(31, 0x08AC8974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8974u) goto L_08AC8974;
    return;
L_08AC8974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC8988u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 708u, 0x0885EB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8988u) goto L_08AC8988;
    return;
L_08AC8988:
    ctx.set_gpr(31, 0x08AC8990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8990u) goto L_08AC8990;
    return;
L_08AC8990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC89A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC89A4u) goto L_08AC89A4;
    return;
L_08AC89A4:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AC8A00;
      }
      goto L_08AC89BC;
    }
L_08AC89BC:
    ctx.set_gpr(31, 0x08AC89C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC89C4u) goto L_08AC89C4;
    return;
L_08AC89C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC89D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 109u, 0x08AF0728u>(ctx, &aot_mem) && ctx.pc == 0x08AC89D0u) goto L_08AC89D0;
    return;
L_08AC89D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8A00;
      }
      goto L_08AC89D8;
    }
L_08AC89D8:
    ctx.set_gpr(31, 0x08AC89E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC89E0u) goto L_08AC89E0;
    return;
L_08AC89E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC89ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AC89ECu) goto L_08AC89EC;
    return;
L_08AC89EC:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    goto L_08AC8A00;
L_08AC8A00:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B98;
      }
      goto L_08AC8A1C;
    }
L_08AC8A1C:
    ctx.set_gpr(31, 0x08AC8A24u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A24u) goto L_08AC8A24;
    return;
L_08AC8A24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8A38u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8A38u) goto L_08AC8A38;
    return;
L_08AC8A38:
    ctx.set_gpr(31, 0x08AC8A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8A40u) goto L_08AC8A40;
    return;
L_08AC8A40:
    ctx.set_gpr(31, 0x08AC8A48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 814u, 0x08ACEC40u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A48u) goto L_08AC8A48;
    return;
L_08AC8A48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AC8B98;
      }
      goto L_08AC8A54;
    }
L_08AC8A54:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AC8A60u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    goto L_08AC8E04;
L_08AC8A60:
    ctx.set_gpr(31, 0x08AC8A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1173u, 0x08AC7D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A68u) goto L_08AC8A68;
    return;
L_08AC8A68:
    ctx.set_gpr(31, 0x08AC8A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC8A70u) goto L_08AC8A70;
    return;
L_08AC8A70:
    ctx.set_gpr(31, 0x08AC8A78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 800u, 0x08AF754Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8A78u) goto L_08AC8A78;
    return;
L_08AC8A78:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08AC8A88u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08ACAE18;
L_08AC8A88:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC8B98;
      }
      goto L_08AC8AA0;
    }
L_08AC8AA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08AC8B98;
      }
      goto L_08AC8AAC;
    }
L_08AC8AAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC8AB8;
      }
      goto L_08AC8AB4;
    }
L_08AC8AB4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08AC8AB8;
L_08AC8AB8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08AC8AC4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    goto L_08AC8D70;
L_08AC8AC4:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AC8AC8;
L_08AC8AC8:
    ctx.set_gpr(31, 0x08AC8AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AD0u) goto L_08AC8AD0;
    return;
L_08AC8AD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC8AE0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AE0u) goto L_08AC8AE0;
    return;
L_08AC8AE0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8AC8;
      }
      goto L_08AC8AF0;
    }
L_08AC8AF0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AC8AF4;
L_08AC8AF4:
    ctx.set_gpr(31, 0x08AC8AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8AFCu) goto L_08AC8AFC;
    return;
L_08AC8AFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC8B0Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8B0Cu) goto L_08AC8B0C;
    return;
L_08AC8B0C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8AF4;
      }
      goto L_08AC8B1C;
    }
L_08AC8B1C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B38;
      }
      goto L_08AC8B2C;
    }
L_08AC8B2C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992), 0u);
    goto L_08AC8B38;
L_08AC8B38:
    ctx.set_gpr(31, 0x08AC8B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 406u, 0x08ACD570u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B40u) goto L_08AC8B40;
    return;
L_08AC8B40:
    ctx.set_gpr(31, 0x08AC8B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B48u) goto L_08AC8B48;
    return;
L_08AC8B48:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AC8B68u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B68u) goto L_08AC8B68;
    return;
L_08AC8B68:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC8B7Cu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC8B7Cu) goto L_08AC8B7C;
    return;
L_08AC8B7C:
    ctx.set_gpr(3, 2186u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20396));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08AC8B98;
L_08AC8B98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC8B9C;
L_08AC8B9C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8C08u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(225));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C08u) goto L_08AC8C08;
    return;
L_08AC8C08:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8C18u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C18u) goto L_08AC8C18;
    return;
L_08AC8C18:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8C28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C28u) goto L_08AC8C28;
    return;
L_08AC8C28:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8C3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08AC8C9C;
      }
      goto L_08AC8C5C;
    }
L_08AC8C5C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
        goto L_08AC8C8C;
    }
    goto L_08AC8C68;
L_08AC8C68:
    ctx.set_gpr(31, 0x08AC8C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AC8C70u) goto L_08AC8C70;
    return;
L_08AC8C70:
    ctx.set_gpr(31, 0x08AC8C78u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AC8C78u) goto L_08AC8C78;
    return;
L_08AC8C78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC8C84u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C84u) goto L_08AC8C84;
    return;
L_08AC8C84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    goto L_08AC8C8C;
L_08AC8C8C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
        goto L_08AC8CA0;
    }
    goto L_08AC8C94;
L_08AC8C94:
    ctx.set_gpr(31, 0x08AC8C9Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08AC8C9Cu) goto L_08AC8C9C;
    return;
L_08AC8C9C:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08AC8CA0;
L_08AC8CA0:
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
L_08AC8CB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8D14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(225));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D14u) goto L_08AC8D14;
    return;
L_08AC8D14:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8D24u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(216));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D24u) goto L_08AC8D24;
    return;
L_08AC8D24:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8D34u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D34u) goto L_08AC8D34;
    return;
L_08AC8D34:
    ctx.set_gpr(31, 0x08AC8D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AC8D3Cu) goto L_08AC8D3C;
    return;
L_08AC8D3C:
    ctx.set_gpr(31, 0x08AC8D44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AC8D44u) goto L_08AC8D44;
    return;
L_08AC8D44:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AC8D58u);
    ctx.set_gpr(5, 0u | 35828u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC8D58u) goto L_08AC8D58;
    return;
L_08AC8D58:
    ctx.set_gpr(31, 0x08AC8D60u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 154u, 0x08AC4808u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D60u) goto L_08AC8D60;
    return;
L_08AC8D60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8D70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08AC8D88u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 180u, 0x08AC49E0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D88u) goto L_08AC8D88;
    return;
L_08AC8D88:
    ctx.set_gpr(31, 0x08AC8D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D90u) goto L_08AC8D90;
    return;
L_08AC8D90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC8D9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 118u, 0x08AF07C4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8D9Cu) goto L_08AC8D9C;
    return;
L_08AC8D9C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(31, 0x08AC8DACu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DACu) goto L_08AC8DAC;
    return;
L_08AC8DAC:
    ctx.set_gpr(31, 0x08AC8DB4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8DB4u) goto L_08AC8DB4;
    return;
L_08AC8DB4:
    ctx.set_gpr(31, 0x08AC8DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DBCu) goto L_08AC8DBC;
    return;
L_08AC8DBC:
    ctx.set_gpr(31, 0x08AC8DC4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DC4u) goto L_08AC8DC4;
    return;
L_08AC8DC4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AC8DF4;
    }
    goto L_08AC8DD0;
L_08AC8DD0:
    ctx.set_gpr(31, 0x08AC8DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08AC8DD8u) goto L_08AC8DD8;
    return;
L_08AC8DD8:
    ctx.set_gpr(31, 0x08AC8DE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08AC8DE0u) goto L_08AC8DE0;
    return;
L_08AC8DE0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC8DECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 937u, 0x08843DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DECu) goto L_08AC8DEC;
    return;
L_08AC8DEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC8DF4;
L_08AC8DF4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8E04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8E24;
    }
L_08AC8E24:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6180));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8E40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AC8E48;
L_08AC8E48:
    ctx.set_gpr(31, 0x08AC8E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 629u, 0x08ACE180u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E50u) goto L_08AC8E50;
    return;
L_08AC8E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8E58;
    }
L_08AC8E58:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
        goto L_08AC8F9C;
    }
    goto L_08AC8E70;
L_08AC8E70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_08AC8F38;
    }
    goto L_08AC8E7C;
L_08AC8E7C:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_08AC8E8C;
    }
    goto L_08AC8E84;
L_08AC8E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8E8C;
    }
L_08AC8E8C:
    ctx.set_gpr(31, 0x08AC8E94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(216));
    goto L_08AC83DC;
L_08AC8E94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8EA4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 453u, 0x08AC5734u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EA4u) goto L_08AC8EA4;
    return;
L_08AC8EA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8EB4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EB4u) goto L_08AC8EB4;
    return;
L_08AC8EB4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AC8EC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.pc = 0x08B0E00Cu;
    return;
L_08AC8EC4:
    ctx.set_gpr(31, 0x08AC8ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 177u, 0x08848BDCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8ECCu) goto L_08AC8ECC;
    return;
L_08AC8ECC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08AC8EE0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 38u, 0x0884019Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8EE0u) goto L_08AC8EE0;
    return;
L_08AC8EE0:
    ctx.set_gpr(31, 0x08AC8EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EE8u) goto L_08AC8EE8;
    return;
L_08AC8EE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8EFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8EFCu) goto L_08AC8EFC;
    return;
L_08AC8EFC:
    ctx.set_gpr(31, 0x08AC8F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F04u) goto L_08AC8F04;
    return;
L_08AC8F04:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC8F18u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F18u) goto L_08AC8F18;
    return;
L_08AC8F18:
    ctx.set_gpr(31, 0x08AC8F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F20u) goto L_08AC8F20;
    return;
L_08AC8F20:
    ctx.set_gpr(31, 0x08AC8F28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F28u) goto L_08AC8F28;
    return;
L_08AC8F28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8F38;
    }
L_08AC8F38:
    ctx.set_gpr(31, 0x08AC8F40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(216));
    goto L_08AC83DC;
L_08AC8F40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC8F54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 453u, 0x08AC5734u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F54u) goto L_08AC8F54;
    return;
L_08AC8F54:
    ctx.set_gpr(31, 0x08AC8F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F5Cu) goto L_08AC8F5C;
    return;
L_08AC8F5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8F70u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F70u) goto L_08AC8F70;
    return;
L_08AC8F70:
    ctx.set_gpr(31, 0x08AC8F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F78u) goto L_08AC8F78;
    return;
L_08AC8F78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC8F8Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F8Cu) goto L_08AC8F8C;
    return;
L_08AC8F8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8F9C;
    }
L_08AC8F9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8FA8;
    }
L_08AC8FA8:
    ctx.set_gpr(31, 0x08AC8FB0u);
    // nop
    goto L_08AC9378;
L_08AC8FB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8FBC;
    }
L_08AC8FBC:
    ctx.set_gpr(31, 0x08AC8FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FC4u) goto L_08AC8FC4;
    return;
L_08AC8FC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC8FD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8FD8u) goto L_08AC8FD8;
    return;
L_08AC8FD8:
    ctx.set_gpr(31, 0x08AC8FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FE0u) goto L_08AC8FE0;
    return;
L_08AC8FE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC8FF4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8FF4u) goto L_08AC8FF4;
    return;
L_08AC8FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC8FFC;
    }
L_08AC8FFC:
    ctx.set_gpr(31, 0x08AC9004u);
    // nop
    goto L_08AC9EE8;
L_08AC9004:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC9010;
    }
L_08AC9010:
    ctx.set_gpr(31, 0x08AC9018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9018u) goto L_08AC9018;
    return;
L_08AC9018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC902Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC902Cu) goto L_08AC902C;
    return;
L_08AC902C:
    ctx.set_gpr(31, 0x08AC9034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9034u) goto L_08AC9034;
    return;
L_08AC9034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9048u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9048u) goto L_08AC9048;
    return;
L_08AC9048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC9050;
    }
L_08AC9050:
    ctx.set_gpr(31, 0x08AC9058u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08AC9344;
L_08AC9058:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AC9068u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5040));
    goto L_08AC9318;
L_08AC9068:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08AC9078u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5060));
    goto L_08AC9318;
L_08AC9078:
    ctx.set_gpr(31, 0x08AC9080u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD95Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9080u) goto L_08AC9080;
    return;
L_08AC9080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC9088;
    }
L_08AC9088:
    ctx.set_gpr(31, 0x08AC9090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9090u) goto L_08AC9090;
    return;
L_08AC9090:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC90A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC90A4u) goto L_08AC90A4;
    return;
L_08AC90A4:
    ctx.set_gpr(31, 0x08AC90ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC90ACu) goto L_08AC90AC;
    return;
L_08AC90AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC90C0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC90C0u) goto L_08AC90C0;
    return;
L_08AC90C0:
    ctx.set_gpr(31, 0x08AC90C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC90C8u) goto L_08AC90C8;
    return;
L_08AC90C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC90DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC90DCu) goto L_08AC90DC;
    return;
L_08AC90DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC90E8;
    }
L_08AC90E8:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AC90F4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5060));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 409u, 0x08ACD594u>(ctx, &aot_mem) && ctx.pc == 0x08AC90F4u) goto L_08AC90F4;
    return;
L_08AC90F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC90FC;
    }
L_08AC90FC:
    ctx.set_gpr(31, 0x08AC9104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9104u) goto L_08AC9104;
    return;
L_08AC9104:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC9118u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9118u) goto L_08AC9118;
    return;
L_08AC9118:
    ctx.set_gpr(31, 0x08AC9120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9120u) goto L_08AC9120;
    return;
L_08AC9120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC9134u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9134u) goto L_08AC9134;
    return;
L_08AC9134:
    ctx.set_gpr(31, 0x08AC913Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC913Cu) goto L_08AC913C;
    return;
L_08AC913C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9150u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9150u) goto L_08AC9150;
    return;
L_08AC9150:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC915C;
    }
L_08AC915C:
    ctx.set_gpr(31, 0x08AC9164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 415u, 0x08AC553Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9164u) goto L_08AC9164;
    return;
L_08AC9164:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC916C;
    }
L_08AC916C:
    ctx.set_gpr(31, 0x08AC9174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9174u) goto L_08AC9174;
    return;
L_08AC9174:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC9188u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9188u) goto L_08AC9188;
    return;
L_08AC9188:
    ctx.set_gpr(31, 0x08AC9190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9190u) goto L_08AC9190;
    return;
L_08AC9190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08AC91A4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC91A4u) goto L_08AC91A4;
    return;
L_08AC91A4:
    ctx.set_gpr(31, 0x08AC91ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC91ACu) goto L_08AC91AC;
    return;
L_08AC91AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC91C0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC91C0u) goto L_08AC91C0;
    return;
L_08AC91C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC91CC;
    }
L_08AC91CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08AC9278;
    }
    goto L_08AC91DC;
L_08AC91DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC9250;
      }
      goto L_08AC91E8;
    }
L_08AC91E8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC91F8;
      }
      goto L_08AC91F0;
    }
L_08AC91F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC91F8;
    }
L_08AC91F8:
    ctx.set_gpr(31, 0x08AC9200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9200u) goto L_08AC9200;
    return;
L_08AC9200:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC9218u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08AC9218u) goto L_08AC9218;
    return;
L_08AC9218:
    ctx.set_gpr(31, 0x08AC9220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9220u) goto L_08AC9220;
    return;
L_08AC9220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AC9240u);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 417u, 0x088466A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9240u) goto L_08AC9240;
    return;
L_08AC9240:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC9250;
    }
L_08AC9250:
    ctx.set_gpr(31, 0x08AC9258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9258u) goto L_08AC9258;
    return;
L_08AC9258:
    ctx.set_gpr(31, 0x08AC9260u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 463u, 0x08846F00u>(ctx, &aot_mem) && ctx.pc == 0x08AC9260u) goto L_08AC9260;
    return;
L_08AC9260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC9268;
    }
L_08AC9268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9280;
      }
      goto L_08AC9278;
    }
L_08AC9278:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08AC9280;
L_08AC9280:
    ctx.set_gpr(31, 0x08AC9288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 203u, 0x08AC4ADCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9288u) goto L_08AC9288;
    return;
L_08AC9288:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08AC9308;
    }
    goto L_08AC9290;
L_08AC9290:
    ctx.set_gpr(31, 0x08AC9298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC5828u>(ctx, &aot_mem) && ctx.pc == 0x08AC9298u) goto L_08AC9298;
    return;
L_08AC9298:
    ctx.set_gpr(31, 0x08AC92A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC92A0u) goto L_08AC92A0;
    return;
L_08AC92A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC92ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC92ACu) goto L_08AC92AC;
    return;
L_08AC92AC:
    ctx.set_gpr(31, 0x08AC92B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC92B4u) goto L_08AC92B4;
    return;
L_08AC92B4:
    ctx.set_gpr(31, 0x08AC92BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC92BCu) goto L_08AC92BC;
    return;
L_08AC92BC:
    ctx.set_gpr(31, 0x08AC92C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC92C4u) goto L_08AC92C4;
    return;
L_08AC92C4:
    ctx.set_gpr(31, 0x08AC92CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC92CCu) goto L_08AC92CC;
    return;
L_08AC92CC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08AC9308;
L_08AC9308:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9318:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC933C;
      }
      goto L_08AC9328;
    }
L_08AC9328:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AC933C;
L_08AC933C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9344:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    goto L_08AC934C;
L_08AC934C:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08AC934C;
      }
      goto L_08AC9370;
    }
L_08AC9370:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC93A8;
    }
L_08AC93A8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6116));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC93C4:
    ctx.set_gpr(31, 0x08AC93CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC93CCu) goto L_08AC93CC;
    return;
L_08AC93CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC93E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC93E0u) goto L_08AC93E0;
    return;
L_08AC93E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08AC93F4u);
    ctx.set_gpr(6, 0u | 35828u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 366u, 0x08ACD3B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC93F4u) goto L_08AC93F4;
    return;
L_08AC93F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AC9508;
    }
    goto L_08AC9400;
L_08AC9400:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC940C;
    }
L_08AC940C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC9420;
    }
    goto L_08AC9418;
L_08AC9418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9420;
    }
L_08AC9420:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-30008)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-29964)));
      if (branch_taken) {
          goto L_08AC9450;
      }
      goto L_08AC9444;
    }
L_08AC9444:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9460;
      }
      goto L_08AC9450;
    }
L_08AC9450:
    ctx.set_gpr(31, 0x08AC9458u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 699u, 0x08ACE530u>(ctx, &aot_mem) && ctx.pc == 0x08AC9458u) goto L_08AC9458;
    return;
L_08AC9458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9460;
    }
L_08AC9460:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08AC9478;
    }
    goto L_08AC9468;
L_08AC9468:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 41 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
        goto L_08AC9488;
    }
    goto L_08AC9474;
L_08AC9474:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08AC9478;
L_08AC9478:
    ctx.set_gpr(31, 0x08AC9480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 699u, 0x08ACE530u>(ctx, &aot_mem) && ctx.pc == 0x08AC9480u) goto L_08AC9480;
    return;
L_08AC9480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9488;
    }
L_08AC9488:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9494u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9494u) goto L_08AC9494;
    return;
L_08AC9494:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC94A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC94A4u) goto L_08AC94A4;
    return;
L_08AC94A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AC94C4;
      }
      goto L_08AC94AC;
    }
L_08AC94AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2728));
    ctx.set_gpr(31, 0x08AC94C4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AC94C4u) goto L_08AC94C4;
    return;
L_08AC94C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AC94E4;
      }
      goto L_08AC94CC;
    }
L_08AC94CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2772));
    ctx.set_gpr(31, 0x08AC94E4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08AC94E4u) goto L_08AC94E4;
    return;
L_08AC94E4:
    ctx.set_gpr(31, 0x08AC94ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC94ECu) goto L_08AC94EC;
    return;
L_08AC94EC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08AC9500u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9500u) goto L_08AC9500;
    return;
L_08AC9500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9508;
    }
L_08AC9508:
    ctx.set_gpr(31, 0x08AC9510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 699u, 0x08ACE530u>(ctx, &aot_mem) && ctx.pc == 0x08AC9510u) goto L_08AC9510;
    return;
L_08AC9510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9518;
    }
L_08AC9518:
    ctx.set_gpr(31, 0x08AC9520u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    goto L_08AC9344;
L_08AC9520:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(31, 0x08AC9530u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5100));
    goto L_08AC9318;
L_08AC9530:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(31, 0x08AC953Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 565u, 0x08ACDDD4u>(ctx, &aot_mem) && ctx.pc == 0x08AC953Cu) goto L_08AC953C;
    return;
L_08AC953C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9548;
    }
L_08AC9548:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC9DEC;
    }
    goto L_08AC955C;
L_08AC955C:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
        goto L_08AC9DEC;
    }
    goto L_08AC9564;
L_08AC9564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC956C;
    }
L_08AC956C:
    ctx.set_gpr(31, 0x08AC9574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 428u, 0x08AC55C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9574u) goto L_08AC9574;
    return;
L_08AC9574:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9584;
    }
L_08AC9584:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC97C0;
      }
      goto L_08AC959C;
    }
L_08AC959C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC9758;
      }
      goto L_08AC95A8;
    }
L_08AC95A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC9720;
      }
      goto L_08AC95B4;
    }
L_08AC95B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AC96EC;
      }
      goto L_08AC95C0;
    }
L_08AC95C0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
        goto L_08AC95D0;
    }
    goto L_08AC95C8;
L_08AC95C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC95D0;
    }
L_08AC95D0:
    ctx.set_gpr(31, 0x08AC95D8u);
    // nop
    ctx.pc = 0x08B0E1ACu;
    return;
L_08AC95D8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08AC95E8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC95E8u) goto L_08AC95E8;
    return;
L_08AC95E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16712u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9620u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08AC9620u) goto L_08AC9620;
    return;
L_08AC9620:
    ctx.set_gpr(31, 0x08AC9628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9628u) goto L_08AC9628;
    return;
L_08AC9628:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9638u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9638u) goto L_08AC9638;
    return;
L_08AC9638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9644u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9644u) goto L_08AC9644;
    return;
L_08AC9644:
    ctx.set_gpr(31, 0x08AC964Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC964Cu) goto L_08AC964C;
    return;
L_08AC964C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC965Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC965Cu) goto L_08AC965C;
    return;
L_08AC965C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9668u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9668u) goto L_08AC9668;
    return;
L_08AC9668:
    ctx.set_gpr(31, 0x08AC9670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9670u) goto L_08AC9670;
    return;
L_08AC9670:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9680u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9680u) goto L_08AC9680;
    return;
L_08AC9680:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5144));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AC96A0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AC96A0u) goto L_08AC96A0;
    return;
L_08AC96A0:
    ctx.set_gpr(31, 0x08AC96A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC96A8u) goto L_08AC96A8;
    return;
L_08AC96A8:
    ctx.set_gpr(31, 0x08AC96B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC96B0u) goto L_08AC96B0;
    return;
L_08AC96B0:
    ctx.set_gpr(31, 0x08AC96B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC96B8u) goto L_08AC96B8;
    return;
L_08AC96B8:
    ctx.set_gpr(31, 0x08AC96C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC96C0u) goto L_08AC96C0;
    return;
L_08AC96C0:
    ctx.set_gpr(31, 0x08AC96C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC96C8u) goto L_08AC96C8;
    return;
L_08AC96C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC96D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AC96D4u) goto L_08AC96D4;
    return;
L_08AC96D4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC96EC;
    }
L_08AC96EC:
    ctx.set_gpr(31, 0x08AC96F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC96F4u) goto L_08AC96F4;
    return;
L_08AC96F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9700u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9700u) goto L_08AC9700;
    return;
L_08AC9700:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9708;
    }
L_08AC9708:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9720;
    }
L_08AC9720:
    ctx.set_gpr(31, 0x08AC9728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC5610u>(ctx, &aot_mem) && ctx.pc == 0x08AC9728u) goto L_08AC9728;
    return;
L_08AC9728:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9730;
    }
L_08AC9730:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08AC9744u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9744u) goto L_08AC9744;
    return;
L_08AC9744:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9750u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AC9750u) goto L_08AC9750;
    return;
L_08AC9750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9758;
    }
L_08AC9758:
    ctx.set_gpr(31, 0x08AC9760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9760u) goto L_08AC9760;
    return;
L_08AC9760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC976Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC976Cu) goto L_08AC976C;
    return;
L_08AC976C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9774;
    }
L_08AC9774:
    ctx.set_gpr(31, 0x08AC977Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC977Cu) goto L_08AC977C;
    return;
L_08AC977C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC978Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC978Cu) goto L_08AC978C;
    return;
L_08AC978C:
    ctx.set_gpr(31, 0x08AC9794u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AC9794u) goto L_08AC9794;
    return;
L_08AC9794:
    ctx.set_gpr(31, 0x08AC979Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC979Cu) goto L_08AC979C;
    return;
L_08AC979C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC97A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC97A8u) goto L_08AC97A8;
    return;
L_08AC97A8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC97C0;
    }
L_08AC97C0:
    ctx.set_gpr(31, 0x08AC97C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC97C8u) goto L_08AC97C8;
    return;
L_08AC97C8:
    ctx.set_gpr(31, 0x08AC97D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC97D0u) goto L_08AC97D0;
    return;
L_08AC97D0:
    ctx.set_gpr(31, 0x08AC97D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC97D8u) goto L_08AC97D8;
    return;
L_08AC97D8:
    ctx.set_gpr(31, 0x08AC97E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC97E0u) goto L_08AC97E0;
    return;
L_08AC97E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08AC97F0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), 0u);
    goto L_08AC9EA4;
L_08AC97F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
        goto L_08AC9808;
    }
    goto L_08AC97FC;
L_08AC97FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9814;
      }
      goto L_08AC9808;
    }
L_08AC9808:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988), 0u);
    goto L_08AC9814;
L_08AC9814:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9824;
    }
L_08AC9824:
    ctx.set_gpr(31, 0x08AC982Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_08AC9344;
L_08AC982C:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08AC983Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5172));
    goto L_08AC9318;
L_08AC983C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x08AC9848u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 565u, 0x08ACDDD4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9848u) goto L_08AC9848;
    return;
L_08AC9848:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9854;
    }
L_08AC9854:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
        goto L_08AC9DEC;
    }
    goto L_08AC9868;
L_08AC9868:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08AC9878;
    }
    goto L_08AC9870;
L_08AC9870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9878;
    }
L_08AC9878:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9880;
    }
L_08AC9880:
    ctx.set_gpr(31, 0x08AC9888u);
    // nop
    goto L_08AC9E6C;
L_08AC9888:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC98A4;
    }
L_08AC98A4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6144));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC98C0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AC98D0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08AC98D0u) goto L_08AC98D0;
    return;
L_08AC98D0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08AC98E0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08AC98E0u) goto L_08AC98E0;
    return;
L_08AC98E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC98ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08AC98ECu) goto L_08AC98EC;
    return;
L_08AC98EC:
    ctx.set_gpr(31, 0x08AC98F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC98F4u) goto L_08AC98F4;
    return;
L_08AC98F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AC992Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08AC992Cu) goto L_08AC992C;
    return;
L_08AC992C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AC9938u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 288u, 0x08ACCFB4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9938u) goto L_08AC9938;
    return;
L_08AC9938:
    ctx.set_gpr(31, 0x08AC9940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9940u) goto L_08AC9940;
    return;
L_08AC9940:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9950u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9950u) goto L_08AC9950;
    return;
L_08AC9950:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC995Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC995Cu) goto L_08AC995C;
    return;
L_08AC995C:
    ctx.set_gpr(31, 0x08AC9964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9964u) goto L_08AC9964;
    return;
L_08AC9964:
    ctx.set_gpr(31, 0x08AC996Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC996Cu) goto L_08AC996C;
    return;
L_08AC996C:
    ctx.set_gpr(31, 0x08AC9974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9974u) goto L_08AC9974;
    return;
L_08AC9974:
    ctx.set_gpr(31, 0x08AC997Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC997Cu) goto L_08AC997C;
    return;
L_08AC997C:
    ctx.set_gpr(31, 0x08AC9984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9984u) goto L_08AC9984;
    return;
L_08AC9984:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9990u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9990u) goto L_08AC9990;
    return;
L_08AC9990:
    ctx.set_gpr(31, 0x08AC9998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9998u) goto L_08AC9998;
    return;
L_08AC9998:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC99A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC99A4u) goto L_08AC99A4;
    return;
L_08AC99A4:
    ctx.set_gpr(31, 0x08AC99ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC99ACu) goto L_08AC99AC;
    return;
L_08AC99AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC99B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC99B8u) goto L_08AC99B8;
    return;
L_08AC99B8:
    ctx.set_gpr(31, 0x08AC99C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC99C0u) goto L_08AC99C0;
    return;
L_08AC99C0:
    ctx.set_gpr(31, 0x08AC99C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC99C8u) goto L_08AC99C8;
    return;
L_08AC99C8:
    ctx.set_gpr(31, 0x08AC99D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC99D0u) goto L_08AC99D0;
    return;
L_08AC99D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC99DCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AC99DCu) goto L_08AC99DC;
    return;
L_08AC99DC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC99F4;
    }
L_08AC99F4:
    ctx.set_gpr(31, 0x08AC99FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC99FCu) goto L_08AC99FC;
    return;
L_08AC99FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9A08u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A08u) goto L_08AC9A08;
    return;
L_08AC9A08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9A10;
    }
L_08AC9A10:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9A28;
    }
L_08AC9A28:
    ctx.set_gpr(31, 0x08AC9A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A30u) goto L_08AC9A30;
    return;
L_08AC9A30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9A3Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A3Cu) goto L_08AC9A3C;
    return;
L_08AC9A3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08AC9ADC;
    }
    goto L_08AC9A48;
L_08AC9A48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AC9A5C;
      }
      goto L_08AC9A54;
    }
L_08AC9A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9A5C;
    }
L_08AC9A5C:
    ctx.set_gpr(31, 0x08AC9A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A64u) goto L_08AC9A64;
    return;
L_08AC9A64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9A74u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9A74u) goto L_08AC9A74;
    return;
L_08AC9A74:
    ctx.set_gpr(31, 0x08AC9A7Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A7Cu) goto L_08AC9A7C;
    return;
L_08AC9A7C:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AC9AA0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 328u, 0x08ACD204u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AA0u) goto L_08AC9AA0;
    return;
L_08AC9AA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9AA8;
    }
L_08AC9AA8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08AC9AC8u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AC8u) goto L_08AC9AC8;
    return;
L_08AC9AC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9AD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AD4u) goto L_08AC9AD4;
    return;
L_08AC9AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9ADC;
    }
L_08AC9ADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AC9AECu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AECu) goto L_08AC9AEC;
    return;
L_08AC9AEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9AF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AC9AF8u) goto L_08AC9AF8;
    return;
L_08AC9AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9B00;
    }
L_08AC9B00:
    ctx.set_gpr(31, 0x08AC9B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B08u) goto L_08AC9B08;
    return;
L_08AC9B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9B14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B14u) goto L_08AC9B14;
    return;
L_08AC9B14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9B1C;
    }
L_08AC9B1C:
    ctx.set_gpr(31, 0x08AC9B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B24u) goto L_08AC9B24;
    return;
L_08AC9B24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9B34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9B34u) goto L_08AC9B34;
    return;
L_08AC9B34:
    ctx.set_gpr(31, 0x08AC9B3Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B3Cu) goto L_08AC9B3C;
    return;
L_08AC9B3C:
    ctx.set_gpr(31, 0x08AC9B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B44u) goto L_08AC9B44;
    return;
L_08AC9B44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9B50u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9B50u) goto L_08AC9B50;
    return;
L_08AC9B50:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9B68;
    }
L_08AC9B68:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08AC9B7Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B7Cu) goto L_08AC9B7C;
    return;
L_08AC9B7C:
    ctx.set_gpr(31, 0x08AC9B84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9B84u) goto L_08AC9B84;
    return;
L_08AC9B84:
    ctx.set_gpr(31, 0x08AC9B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B8Cu) goto L_08AC9B8C;
    return;
L_08AC9B8C:
    ctx.set_gpr(31, 0x08AC9B94u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC9B94u) goto L_08AC9B94;
    return;
L_08AC9B94:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9BA8;
    }
L_08AC9BA8:
    ctx.set_gpr(31, 0x08AC9BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BB0u) goto L_08AC9BB0;
    return;
L_08AC9BB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9BBCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BBCu) goto L_08AC9BBC;
    return;
L_08AC9BBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9BC4;
    }
L_08AC9BC4:
    ctx.set_gpr(31, 0x08AC9BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BCCu) goto L_08AC9BCC;
    return;
L_08AC9BCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9BDCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9BDCu) goto L_08AC9BDC;
    return;
L_08AC9BDC:
    ctx.set_gpr(31, 0x08AC9BE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BE4u) goto L_08AC9BE4;
    return;
L_08AC9BE4:
    ctx.set_gpr(31, 0x08AC9BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9BECu) goto L_08AC9BEC;
    return;
L_08AC9BEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9BF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9BF8u) goto L_08AC9BF8;
    return;
L_08AC9BF8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9C10;
    }
L_08AC9C10:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08AC9C24u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 428u, 0x08AC55C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C24u) goto L_08AC9C24;
    return;
L_08AC9C24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08AC9C30u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C30u) goto L_08AC9C30;
    return;
L_08AC9C30:
    ctx.set_gpr(31, 0x08AC9C38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC9C38u) goto L_08AC9C38;
    return;
L_08AC9C38:
    ctx.set_gpr(31, 0x08AC9C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C40u) goto L_08AC9C40;
    return;
L_08AC9C40:
    ctx.set_gpr(31, 0x08AC9C48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C48u) goto L_08AC9C48;
    return;
L_08AC9C48:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9C58;
    }
L_08AC9C58:
    ctx.set_gpr(31, 0x08AC9C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC5610u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C60u) goto L_08AC9C60;
    return;
L_08AC9C60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9CC4;
      }
      goto L_08AC9C68;
    }
L_08AC9C68:
    ctx.set_gpr(31, 0x08AC9C70u);
    // nop
    goto L_08AC9E6C;
L_08AC9C70:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08AC9C88u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 328u, 0x08ACD204u>(ctx, &aot_mem) && ctx.pc == 0x08AC9C88u) goto L_08AC9C88;
    return;
L_08AC9C88:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08AC9CBC;
    }
    goto L_08AC9C90;
L_08AC9C90:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08AC9CA4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 327u, 0x08ACD1F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CA4u) goto L_08AC9CA4;
    return;
L_08AC9CA4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AC9CB0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 386u, 0x08AC5348u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CB0u) goto L_08AC9CB0;
    return;
L_08AC9CB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9CBC;
    }
L_08AC9CBC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9CC4;
    }
L_08AC9CC4:
    ctx.set_gpr(31, 0x08AC9CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CCCu) goto L_08AC9CCC;
    return;
L_08AC9CCC:
    ctx.set_gpr(31, 0x08AC9CD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CD4u) goto L_08AC9CD4;
    return;
L_08AC9CD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9CDC;
    }
L_08AC9CDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9CE8;
    }
L_08AC9CE8:
    ctx.set_gpr(31, 0x08AC9CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 412u, 0x08AC54F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9CF0u) goto L_08AC9CF0;
    return;
L_08AC9CF0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9D3C;
      }
      goto L_08AC9CF8;
    }
L_08AC9CF8:
    ctx.set_gpr(31, 0x08AC9D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 462u, 0x08AC57A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D00u) goto L_08AC9D00;
    return;
L_08AC9D00:
    ctx.set_gpr(31, 0x08AC9D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC590Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9D08u) goto L_08AC9D08;
    return;
L_08AC9D08:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 2221u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(216));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-20960));
    ctx.set_gpr(31, 0x08AC9D2Cu);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1064u, 0x08AC7560u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D2Cu) goto L_08AC9D2C;
    return;
L_08AC9D2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D3C;
    }
L_08AC9D3C:
    ctx.set_gpr(31, 0x08AC9D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D44u) goto L_08AC9D44;
    return;
L_08AC9D44:
    ctx.set_gpr(31, 0x08AC9D4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D4Cu) goto L_08AC9D4C;
    return;
L_08AC9D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D54;
    }
L_08AC9D54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D60;
    }
L_08AC9D60:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08AC9D6Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5212));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 409u, 0x08ACD594u>(ctx, &aot_mem) && ctx.pc == 0x08AC9D6Cu) goto L_08AC9D6C;
    return;
L_08AC9D6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D74;
    }
L_08AC9D74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9D80;
    }
L_08AC9D80:
    ctx.set_gpr(31, 0x08AC9D88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08AC9344;
L_08AC9D88:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AC9D98u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5248));
    goto L_08AC9318;
L_08AC9D98:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AC9DA8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5040));
    goto L_08AC9318;
L_08AC9DA8:
    ctx.set_gpr(31, 0x08AC9DB0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD95Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9DB0u) goto L_08AC9DB0;
    return;
L_08AC9DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9DB8;
    }
L_08AC9DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9DC0;
    }
L_08AC9DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9DC8;
    }
L_08AC9DC8:
    ctx.set_gpr(31, 0x08AC9DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DD0u) goto L_08AC9DD0;
    return;
L_08AC9DD0:
    ctx.set_gpr(31, 0x08AC9DD8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DD8u) goto L_08AC9DD8;
    return;
L_08AC9DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DEC;
      }
      goto L_08AC9DE0;
    }
L_08AC9DE0:
    ctx.set_gpr(2, 32833u << 16u);
    ctx.set_gpr(31, 0x08AC9DECu);
    ctx.set_gpr(4, ctx.gpr[2] | 2831u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 382u, 0x08AC5304u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DECu) goto L_08AC9DEC;
    return;
L_08AC9DEC:
    ctx.set_gpr(31, 0x08AC9DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC590Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9DF4u) goto L_08AC9DF4;
    return;
L_08AC9DF4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08AC9E50;
    }
    goto L_08AC9DFC;
L_08AC9DFC:
    ctx.set_gpr(31, 0x08AC9E04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1045u, 0x08AC748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9E04u) goto L_08AC9E04;
    return;
L_08AC9E04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9E4C;
      }
      goto L_08AC9E10;
    }
L_08AC9E10:
    ctx.set_gpr(31, 0x08AC9E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC5828u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E18u) goto L_08AC9E18;
    return;
L_08AC9E18:
    ctx.set_gpr(31, 0x08AC9E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 407u, 0x08AC5498u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E20u) goto L_08AC9E20;
    return;
L_08AC9E20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
        goto L_08AC9E48;
    }
    goto L_08AC9E2C;
L_08AC9E2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
        goto L_08AC9E40;
    }
    goto L_08AC9E38;
L_08AC9E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9E4C;
      }
      goto L_08AC9E40;
    }
L_08AC9E40:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC9E4C;
      }
      goto L_08AC9E48;
    }
L_08AC9E48:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08AC9E4C;
L_08AC9E4C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08AC9E50;
L_08AC9E50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9E6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11600)));
    ctx.set_gpr(31, 0x08AC9E84u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 177u, 0x08AC49A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E84u) goto L_08AC9E84;
    return;
L_08AC9E84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AC9E90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 169u, 0x08AC4938u>(ctx, &aot_mem) && ctx.pc == 0x08AC9E90u) goto L_08AC9E90;
    return;
L_08AC9E90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11312));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9EA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-11600)));
    ctx.set_gpr(31, 0x08AC9EC0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 177u, 0x08AC49A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9EC0u) goto L_08AC9EC0;
    return;
L_08AC9EC0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-10864)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08AC9ED4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 169u, 0x08AC4938u>(ctx, &aot_mem) && ctx.pc == 0x08AC9ED4u) goto L_08AC9ED4;
    return;
L_08AC9ED4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08AC9F14;
    }
L_08AC9F14:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6032));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9F30:
    ctx.set_gpr(31, 0x08AC9F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 428u, 0x08AC55C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F38u) goto L_08AC9F38;
    return;
L_08AC9F38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08AC9F48;
    }
L_08AC9F48:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACA174;
      }
      goto L_08AC9F60;
    }
L_08AC9F60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACA10C;
      }
      goto L_08AC9F6C;
    }
L_08AC9F6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACA0D4;
      }
      goto L_08AC9F78;
    }
L_08AC9F78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACA0A0;
      }
      goto L_08AC9F84;
    }
L_08AC9F84:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
        goto L_08AC9F94;
    }
    goto L_08AC9F8C;
L_08AC9F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08AC9F94;
    }
L_08AC9F94:
    ctx.set_gpr(31, 0x08AC9F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9F9Cu) goto L_08AC9F9C;
    return;
L_08AC9F9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16712u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9FD4u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FD4u) goto L_08AC9FD4;
    return;
L_08AC9FD4:
    ctx.set_gpr(31, 0x08AC9FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FDCu) goto L_08AC9FDC;
    return;
L_08AC9FDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AC9FECu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9FECu) goto L_08AC9FEC;
    return;
L_08AC9FEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AC9FF8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9FF8u) goto L_08AC9FF8;
    return;
L_08AC9FF8:
    ctx.set_gpr(31, 0x08ACA000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA000u) goto L_08ACA000;
    return;
L_08ACA000:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA010u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA010u) goto L_08ACA010;
    return;
L_08ACA010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA01Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA01Cu) goto L_08ACA01C;
    return;
L_08ACA01C:
    ctx.set_gpr(31, 0x08ACA024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA024u) goto L_08ACA024;
    return;
L_08ACA024:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA034u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA034u) goto L_08ACA034;
    return;
L_08ACA034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5144));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA054u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACA054u) goto L_08ACA054;
    return;
L_08ACA054:
    ctx.set_gpr(31, 0x08ACA05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA05Cu) goto L_08ACA05C;
    return;
L_08ACA05C:
    ctx.set_gpr(31, 0x08ACA064u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA064u) goto L_08ACA064;
    return;
L_08ACA064:
    ctx.set_gpr(31, 0x08ACA06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA06Cu) goto L_08ACA06C;
    return;
L_08ACA06C:
    ctx.set_gpr(31, 0x08ACA074u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACA074u) goto L_08ACA074;
    return;
L_08ACA074:
    ctx.set_gpr(31, 0x08ACA07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA07Cu) goto L_08ACA07C;
    return;
L_08ACA07C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA088u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACA088u) goto L_08ACA088;
    return;
L_08ACA088:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA0A0;
    }
L_08ACA0A0:
    ctx.set_gpr(31, 0x08ACA0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0A8u) goto L_08ACA0A8;
    return;
L_08ACA0A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA0B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0B4u) goto L_08ACA0B4;
    return;
L_08ACA0B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA0BC;
    }
L_08ACA0BC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA0D4;
    }
L_08ACA0D4:
    ctx.set_gpr(31, 0x08ACA0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC5610u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0DCu) goto L_08ACA0DC;
    return;
L_08ACA0DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA0E4;
    }
L_08ACA0E4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACA0F8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA0F8u) goto L_08ACA0F8;
    return;
L_08ACA0F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA104u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA104u) goto L_08ACA104;
    return;
L_08ACA104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA10C;
    }
L_08ACA10C:
    ctx.set_gpr(31, 0x08ACA114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA114u) goto L_08ACA114;
    return;
L_08ACA114:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA120u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA120u) goto L_08ACA120;
    return;
L_08ACA120:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA128;
    }
L_08ACA128:
    ctx.set_gpr(31, 0x08ACA130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA130u) goto L_08ACA130;
    return;
L_08ACA130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA140u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA140u) goto L_08ACA140;
    return;
L_08ACA140:
    ctx.set_gpr(31, 0x08ACA148u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA148u) goto L_08ACA148;
    return;
L_08ACA148:
    ctx.set_gpr(31, 0x08ACA150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA150u) goto L_08ACA150;
    return;
L_08ACA150:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA15Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA15Cu) goto L_08ACA15C;
    return;
L_08ACA15C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA174;
    }
L_08ACA174:
    ctx.set_gpr(31, 0x08ACA17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA17Cu) goto L_08ACA17C;
    return;
L_08ACA17C:
    ctx.set_gpr(31, 0x08ACA184u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA184u) goto L_08ACA184;
    return;
L_08ACA184:
    ctx.set_gpr(31, 0x08ACA18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA18Cu) goto L_08ACA18C;
    return;
L_08ACA18C:
    ctx.set_gpr(31, 0x08ACA194u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACA194u) goto L_08ACA194;
    return;
L_08ACA194:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACA1A4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), 0u);
    goto L_08AC9EA4;
L_08ACA1A4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
        goto L_08ACA1B8;
    }
    goto L_08ACA1AC;
L_08ACA1AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACA1C4;
      }
      goto L_08ACA1B8;
    }
L_08ACA1B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988), 0u);
    goto L_08ACA1C4;
L_08ACA1C4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA1D4;
    }
L_08ACA1D4:
    ctx.set_gpr(31, 0x08ACA1DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    goto L_08AC9344;
L_08ACA1DC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08ACA1ECu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5280));
    goto L_08AC9318;
L_08ACA1EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08ACA1F8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 565u, 0x08ACDDD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA1F8u) goto L_08ACA1F8;
    return;
L_08ACA1F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA204;
    }
L_08ACA204:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
        goto L_08ACAD74;
    }
    goto L_08ACA218;
L_08ACA218:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
        goto L_08ACAD74;
    }
    goto L_08ACA220;
L_08ACA220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA228;
    }
L_08ACA228:
    ctx.set_gpr(31, 0x08ACA230u);
    // nop
    goto L_08AC9E6C;
L_08ACA230:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA24C;
    }
L_08ACA24C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-6060));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA268:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACA278u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08ACA278u) goto L_08ACA278;
    return;
L_08ACA278:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACA288u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACA288u) goto L_08ACA288;
    return;
L_08ACA288:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA294u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08ACA294u) goto L_08ACA294;
    return;
L_08ACA294:
    ctx.set_gpr(31, 0x08ACA29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA29Cu) goto L_08ACA29C;
    return;
L_08ACA29C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16736u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16576u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA2D4u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACA2D4u) goto L_08ACA2D4;
    return;
L_08ACA2D4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACA2E0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 303u, 0x08ACD09Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA2E0u) goto L_08ACA2E0;
    return;
L_08ACA2E0:
    ctx.set_gpr(31, 0x08ACA2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA2E8u) goto L_08ACA2E8;
    return;
L_08ACA2E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA2F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA2F8u) goto L_08ACA2F8;
    return;
L_08ACA2F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA304u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA304u) goto L_08ACA304;
    return;
L_08ACA304:
    ctx.set_gpr(31, 0x08ACA30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA30Cu) goto L_08ACA30C;
    return;
L_08ACA30C:
    ctx.set_gpr(31, 0x08ACA314u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA314u) goto L_08ACA314;
    return;
L_08ACA314:
    ctx.set_gpr(31, 0x08ACA31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA31Cu) goto L_08ACA31C;
    return;
L_08ACA31C:
    ctx.set_gpr(31, 0x08ACA324u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACA324u) goto L_08ACA324;
    return;
L_08ACA324:
    ctx.set_gpr(31, 0x08ACA32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA32Cu) goto L_08ACA32C;
    return;
L_08ACA32C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA338u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA338u) goto L_08ACA338;
    return;
L_08ACA338:
    ctx.set_gpr(31, 0x08ACA340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA340u) goto L_08ACA340;
    return;
L_08ACA340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA34Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA34Cu) goto L_08ACA34C;
    return;
L_08ACA34C:
    ctx.set_gpr(31, 0x08ACA354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA354u) goto L_08ACA354;
    return;
L_08ACA354:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA360u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA360u) goto L_08ACA360;
    return;
L_08ACA360:
    ctx.set_gpr(31, 0x08ACA368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA368u) goto L_08ACA368;
    return;
L_08ACA368:
    ctx.set_gpr(31, 0x08ACA370u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA370u) goto L_08ACA370;
    return;
L_08ACA370:
    ctx.set_gpr(31, 0x08ACA378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA378u) goto L_08ACA378;
    return;
L_08ACA378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA384u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACA384u) goto L_08ACA384;
    return;
L_08ACA384:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA39C;
    }
L_08ACA39C:
    ctx.set_gpr(31, 0x08ACA3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3A4u) goto L_08ACA3A4;
    return;
L_08ACA3A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA3B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3B0u) goto L_08ACA3B0;
    return;
L_08ACA3B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA3B8;
    }
L_08ACA3B8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA3D0;
    }
L_08ACA3D0:
    ctx.set_gpr(31, 0x08ACA3D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3D8u) goto L_08ACA3D8;
    return;
L_08ACA3D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA3E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACA3E4u) goto L_08ACA3E4;
    return;
L_08ACA3E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACA484;
    }
    goto L_08ACA3F0;
L_08ACA3F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACA404;
      }
      goto L_08ACA3FC;
    }
L_08ACA3FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA404;
    }
L_08ACA404:
    ctx.set_gpr(31, 0x08ACA40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA40Cu) goto L_08ACA40C;
    return;
L_08ACA40C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA41Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA41Cu) goto L_08ACA41C;
    return;
L_08ACA41C:
    ctx.set_gpr(31, 0x08ACA424u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08ACA424u) goto L_08ACA424;
    return;
L_08ACA424:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08ACA448u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 318u, 0x08ACD184u>(ctx, &aot_mem) && ctx.pc == 0x08ACA448u) goto L_08ACA448;
    return;
L_08ACA448:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA450;
    }
L_08ACA450:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08ACA470u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA470u) goto L_08ACA470;
    return;
L_08ACA470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA47Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA47Cu) goto L_08ACA47C;
    return;
L_08ACA47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA484;
    }
L_08ACA484:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ACA494u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA494u) goto L_08ACA494;
    return;
L_08ACA494:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA4A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4A0u) goto L_08ACA4A0;
    return;
L_08ACA4A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA4A8;
    }
L_08ACA4A8:
    ctx.set_gpr(31, 0x08ACA4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4B0u) goto L_08ACA4B0;
    return;
L_08ACA4B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA4BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4BCu) goto L_08ACA4BC;
    return;
L_08ACA4BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA4C4;
    }
L_08ACA4C4:
    ctx.set_gpr(31, 0x08ACA4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4CCu) goto L_08ACA4CC;
    return;
L_08ACA4CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA4DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA4DCu) goto L_08ACA4DC;
    return;
L_08ACA4DC:
    ctx.set_gpr(31, 0x08ACA4E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4E4u) goto L_08ACA4E4;
    return;
L_08ACA4E4:
    ctx.set_gpr(31, 0x08ACA4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA4ECu) goto L_08ACA4EC;
    return;
L_08ACA4EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA4F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA4F8u) goto L_08ACA4F8;
    return;
L_08ACA4F8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA510;
    }
L_08ACA510:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACA524u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA524u) goto L_08ACA524;
    return;
L_08ACA524:
    ctx.set_gpr(31, 0x08ACA52Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA52Cu) goto L_08ACA52C;
    return;
L_08ACA52C:
    ctx.set_gpr(31, 0x08ACA534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA534u) goto L_08ACA534;
    return;
L_08ACA534:
    ctx.set_gpr(31, 0x08ACA53Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACA53Cu) goto L_08ACA53C;
    return;
L_08ACA53C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA550;
    }
L_08ACA550:
    ctx.set_gpr(31, 0x08ACA558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA558u) goto L_08ACA558;
    return;
L_08ACA558:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA564u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA564u) goto L_08ACA564;
    return;
L_08ACA564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA56C;
    }
L_08ACA56C:
    ctx.set_gpr(31, 0x08ACA574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA574u) goto L_08ACA574;
    return;
L_08ACA574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA584u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA584u) goto L_08ACA584;
    return;
L_08ACA584:
    ctx.set_gpr(31, 0x08ACA58Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACA58Cu) goto L_08ACA58C;
    return;
L_08ACA58C:
    ctx.set_gpr(31, 0x08ACA594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA594u) goto L_08ACA594;
    return;
L_08ACA594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA5A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA5A0u) goto L_08ACA5A0;
    return;
L_08ACA5A0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA5B8;
    }
L_08ACA5B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACA5CCu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 428u, 0x08AC55C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5CCu) goto L_08ACA5CC;
    return;
L_08ACA5CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ACA5D8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5D8u) goto L_08ACA5D8;
    return;
L_08ACA5D8:
    ctx.set_gpr(31, 0x08ACA5E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACA5E0u) goto L_08ACA5E0;
    return;
L_08ACA5E0:
    ctx.set_gpr(31, 0x08ACA5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5E8u) goto L_08ACA5E8;
    return;
L_08ACA5E8:
    ctx.set_gpr(31, 0x08ACA5F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5F0u) goto L_08ACA5F0;
    return;
L_08ACA5F0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA600;
    }
L_08ACA600:
    ctx.set_gpr(31, 0x08ACA608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 432u, 0x08AC5610u>(ctx, &aot_mem) && ctx.pc == 0x08ACA608u) goto L_08ACA608;
    return;
L_08ACA608:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA640;
      }
      goto L_08ACA610;
    }
L_08ACA610:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08ACA624u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 327u, 0x08ACD1F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA624u) goto L_08ACA624;
    return;
L_08ACA624:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ACA630u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 386u, 0x08AC5348u>(ctx, &aot_mem) && ctx.pc == 0x08ACA630u) goto L_08ACA630;
    return;
L_08ACA630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA640;
    }
L_08ACA640:
    ctx.set_gpr(31, 0x08ACA648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ACA648u) goto L_08ACA648;
    return;
L_08ACA648:
    ctx.set_gpr(31, 0x08ACA650u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA650u) goto L_08ACA650;
    return;
L_08ACA650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA658;
    }
L_08ACA658:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA664;
    }
L_08ACA664:
    ctx.set_gpr(31, 0x08ACA66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 412u, 0x08AC54F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACA66Cu) goto L_08ACA66C;
    return;
L_08ACA66C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA6C0;
      }
      goto L_08ACA674;
    }
L_08ACA674:
    ctx.set_gpr(31, 0x08ACA67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 462u, 0x08AC57A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA67Cu) goto L_08ACA67C;
    return;
L_08ACA67C:
    ctx.set_gpr(31, 0x08ACA684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC590Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA684u) goto L_08ACA684;
    return;
L_08ACA684:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, 2221u << 16u);
    ctx.set_gpr(10, 2221u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(216));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16896));
    ctx.set_gpr(31, 0x08ACA6ACu);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-12428));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1064u, 0x08AC7560u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6ACu) goto L_08ACA6AC;
    return;
L_08ACA6AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA6C0;
    }
L_08ACA6C0:
    ctx.set_gpr(31, 0x08ACA6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6C8u) goto L_08ACA6C8;
    return;
L_08ACA6C8:
    ctx.set_gpr(31, 0x08ACA6D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACA6D0u) goto L_08ACA6D0;
    return;
L_08ACA6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA6D8;
    }
L_08ACA6D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA6E4;
    }
L_08ACA6E4:
    ctx.set_gpr(31, 0x08ACA6ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08AC9344;
L_08ACA6EC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08ACA6FCu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5320));
    goto L_08AC9318;
L_08ACA6FC:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08ACA70Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5040));
    goto L_08AC9318;
L_08ACA70C:
    ctx.set_gpr(31, 0x08ACA714u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD95Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA714u) goto L_08ACA714;
    return;
L_08ACA714:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA720;
    }
L_08ACA720:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA72C;
    }
L_08ACA72C:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ACA738u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5348));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 409u, 0x08ACD594u>(ctx, &aot_mem) && ctx.pc == 0x08ACA738u) goto L_08ACA738;
    return;
L_08ACA738:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA744;
    }
L_08ACA744:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA750;
    }
L_08ACA750:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ACA75Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5380));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 409u, 0x08ACD594u>(ctx, &aot_mem) && ctx.pc == 0x08ACA75Cu) goto L_08ACA75C;
    return;
L_08ACA75C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA768;
    }
L_08ACA768:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA774;
    }
L_08ACA774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(6));
        goto L_08ACAD74;
    }
    goto L_08ACA780;
L_08ACA780:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA78C;
    }
L_08ACA78C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(31));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(7));
        goto L_08ACABFC;
    }
    goto L_08ACA7A4;
L_08ACA7A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACABB8;
      }
      goto L_08ACA7B0;
    }
L_08ACA7B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(22));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_08ACAB60;
    }
    goto L_08ACA7BC;
L_08ACA7BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(21));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_08ACAAD0;
    }
    goto L_08ACA7C8;
L_08ACA7C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACAA8C;
      }
      goto L_08ACA7D4;
    }
L_08ACA7D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACAA44;
      }
      goto L_08ACA7E0;
    }
L_08ACA7E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACA92C;
      }
      goto L_08ACA7EC;
    }
L_08ACA7EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACA8FC;
      }
      goto L_08ACA7F8;
    }
L_08ACA7F8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA808;
      }
      goto L_08ACA800;
    }
L_08ACA800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA808;
    }
L_08ACA808:
    ctx.set_gpr(31, 0x08ACA810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA810u) goto L_08ACA810;
    return;
L_08ACA810:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA848u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACA848u) goto L_08ACA848;
    return;
L_08ACA848:
    ctx.set_gpr(31, 0x08ACA850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA850u) goto L_08ACA850;
    return;
L_08ACA850:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA860u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA860u) goto L_08ACA860;
    return;
L_08ACA860:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACA870u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA870u) goto L_08ACA870;
    return;
L_08ACA870:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5428));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA890u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACA890u) goto L_08ACA890;
    return;
L_08ACA890:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5440));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA8B0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACA8B0u) goto L_08ACA8B0;
    return;
L_08ACA8B0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5452));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA8D0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACA8D0u) goto L_08ACA8D0;
    return;
L_08ACA8D0:
    ctx.set_gpr(31, 0x08ACA8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA8D8u) goto L_08ACA8D8;
    return;
L_08ACA8D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA8E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACA8E4u) goto L_08ACA8E4;
    return;
L_08ACA8E4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA8FC;
    }
L_08ACA8FC:
    ctx.set_gpr(31, 0x08ACA904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA904u) goto L_08ACA904;
    return;
L_08ACA904:
    ctx.set_gpr(31, 0x08ACA90Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 277u, 0x08ABCDA8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA90Cu) goto L_08ACA90C;
    return;
L_08ACA90C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA914;
    }
L_08ACA914:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA92C;
    }
L_08ACA92C:
    ctx.set_gpr(31, 0x08ACA934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA934u) goto L_08ACA934;
    return;
L_08ACA934:
    ctx.set_gpr(31, 0x08ACA93Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 276u, 0x08ABCD84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA93Cu) goto L_08ACA93C;
    return;
L_08ACA93C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAA1C;
      }
      goto L_08ACA948;
    }
L_08ACA948:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACA95C;
      }
      goto L_08ACA954;
    }
L_08ACA954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA95C;
    }
L_08ACA95C:
    ctx.set_gpr(31, 0x08ACA964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA964u) goto L_08ACA964;
    return;
L_08ACA964:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACA974u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACA974u) goto L_08ACA974;
    return;
L_08ACA974:
    ctx.set_gpr(31, 0x08ACA97Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08ACA97Cu) goto L_08ACA97C;
    return;
L_08ACA97C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACA9F4;
      }
      goto L_08ACA988;
    }
L_08ACA988:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACA9CC;
      }
      goto L_08ACA994;
    }
L_08ACA994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA9A4;
      }
      goto L_08ACA99C;
    }
L_08ACA99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA9A4;
    }
L_08ACA9A4:
    ctx.set_gpr(31, 0x08ACA9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9ACu) goto L_08ACA9AC;
    return;
L_08ACA9AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA9B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9B8u) goto L_08ACA9B8;
    return;
L_08ACA9B8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA9CC;
    }
L_08ACA9CC:
    ctx.set_gpr(31, 0x08ACA9D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9D4u) goto L_08ACA9D4;
    return;
L_08ACA9D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACA9E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9E0u) goto L_08ACA9E0;
    return;
L_08ACA9E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACA9F4;
    }
L_08ACA9F4:
    ctx.set_gpr(31, 0x08ACA9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACA9FCu) goto L_08ACA9FC;
    return;
L_08ACA9FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAA08u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA08u) goto L_08ACAA08;
    return;
L_08ACAA08:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAA1C;
    }
L_08ACAA1C:
    ctx.set_gpr(31, 0x08ACAA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA24u) goto L_08ACAA24;
    return;
L_08ACAA24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAA30u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA30u) goto L_08ACAA30;
    return;
L_08ACAA30:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAA44;
    }
L_08ACAA44:
    ctx.set_gpr(31, 0x08ACAA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA4Cu) goto L_08ACAA4C;
    return;
L_08ACAA4C:
    ctx.set_gpr(31, 0x08ACAA54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 277u, 0x08ABCDA8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA54u) goto L_08ACAA54;
    return;
L_08ACAA54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAA5C;
    }
L_08ACAA5C:
    ctx.set_gpr(31, 0x08ACAA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA64u) goto L_08ACAA64;
    return;
L_08ACAA64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAA70u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAA70u) goto L_08ACAA70;
    return;
L_08ACAA70:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAA8C;
    }
L_08ACAA8C:
    ctx.set_gpr(31, 0x08ACAA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA94u) goto L_08ACAA94;
    return;
L_08ACAA94:
    ctx.set_gpr(31, 0x08ACAA9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 277u, 0x08ABCDA8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAA9Cu) goto L_08ACAA9C;
    return;
L_08ACAA9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAAA4;
    }
L_08ACAAA4:
    ctx.set_gpr(31, 0x08ACAAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAACu) goto L_08ACAAAC;
    return;
L_08ACAAAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAAB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAAB8u) goto L_08ACAAB8;
    return;
L_08ACAAB8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAAD0;
    }
L_08ACAAD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAAE4;
      }
      goto L_08ACAAD8;
    }
L_08ACAAD8:
    ctx.set_gpr(31, 0x08ACAAE0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAAE0u) goto L_08ACAAE0;
    return;
L_08ACAAE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    goto L_08ACAAE4;
L_08ACAAE4:
    ctx.set_gpr(31, 0x08ACAAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACAAECu) goto L_08ACAAEC;
    return;
L_08ACAAEC:
    ctx.set_gpr(31, 0x08ACAAF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACAAF4u) goto L_08ACAAF4;
    return;
L_08ACAAF4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08ACAB00u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB00u) goto L_08ACAB00;
    return;
L_08ACAB00:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
        goto L_08ACAB18;
    }
    goto L_08ACAB08;
L_08ACAB08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAB14u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB14u) goto L_08ACAB14;
    return;
L_08ACAB14:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_08ACAB18;
L_08ACAB18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAB28u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB28u) goto L_08ACAB28;
    return;
L_08ACAB28:
    ctx.set_gpr(31, 0x08ACAB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB30u) goto L_08ACAB30;
    return;
L_08ACAB30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAB48u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB48u) goto L_08ACAB48;
    return;
L_08ACAB48:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAB60;
    }
L_08ACAB60:
    ctx.set_gpr(31, 0x08ACAB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB68u) goto L_08ACAB68;
    return;
L_08ACAB68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAB70;
    }
L_08ACAB70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAB88;
      }
      goto L_08ACAB7C;
    }
L_08ACAB7C:
    ctx.set_gpr(31, 0x08ACAB84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAB84u) goto L_08ACAB84;
    return;
L_08ACAB84:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    goto L_08ACAB88;
L_08ACAB88:
    ctx.set_gpr(31, 0x08ACAB90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB90u) goto L_08ACAB90;
    return;
L_08ACAB90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ACABA8u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08ACABA8u) goto L_08ACABA8;
    return;
L_08ACABA8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACABB8;
    }
L_08ACABB8:
    ctx.set_gpr(31, 0x08ACABC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACABC0u) goto L_08ACABC0;
    return;
L_08ACABC0:
    ctx.set_gpr(31, 0x08ACABC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 277u, 0x08ABCDA8u>(ctx, &aot_mem) && ctx.pc == 0x08ACABC8u) goto L_08ACABC8;
    return;
L_08ACABC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACABD0;
    }
L_08ACABD0:
    ctx.set_gpr(31, 0x08ACABD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACABD8u) goto L_08ACABD8;
    return;
L_08ACABD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACABE4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACABE4u) goto L_08ACABE4;
    return;
L_08ACABE4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACABFC;
    }
L_08ACABFC:
    ctx.set_gpr(31, 0x08ACAC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC04u) goto L_08ACAC04;
    return;
L_08ACAC04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACAC18u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAC18u) goto L_08ACAC18;
    return;
L_08ACAC18:
    ctx.set_gpr(31, 0x08ACAC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC20u) goto L_08ACAC20;
    return;
L_08ACAC20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAC2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC2Cu) goto L_08ACAC2C;
    return;
L_08ACAC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAC34;
    }
L_08ACAC34:
    ctx.set_gpr(31, 0x08ACAC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC3Cu) goto L_08ACAC3C;
    return;
L_08ACAC3C:
    ctx.set_gpr(31, 0x08ACAC44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 161u, 0x08A806ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACAC44u) goto L_08ACAC44;
    return;
L_08ACAC44:
    ctx.set_gpr(31, 0x08ACAC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC4Cu) goto L_08ACAC4C;
    return;
L_08ACAC4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACAC60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAC60u) goto L_08ACAC60;
    return;
L_08ACAC60:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08ACAC74u);
    ctx.set_gpr(6, 0u | 35828u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 343u, 0x08ACD2B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC74u) goto L_08ACAC74;
    return;
L_08ACAC74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACACE8;
      }
      goto L_08ACAC80;
    }
L_08ACAC80:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAC8C;
    }
L_08ACAC8C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACACA0;
      }
      goto L_08ACAC98;
    }
L_08ACAC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACACA0;
    }
L_08ACACA0:
    ctx.set_gpr(31, 0x08ACACA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACACA8u) goto L_08ACACA8;
    return;
L_08ACACA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACACBCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACACBCu) goto L_08ACACBC;
    return;
L_08ACACBC:
    ctx.set_gpr(31, 0x08ACACC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACACC4u) goto L_08ACACC4;
    return;
L_08ACACC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACACD0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08ACACD0u) goto L_08ACACD0;
    return;
L_08ACACD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACACE8;
    }
L_08ACACE8:
    ctx.set_gpr(31, 0x08ACACF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACACF0u) goto L_08ACACF0;
    return;
L_08ACACF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACAD04u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAD04u) goto L_08ACAD04;
    return;
L_08ACAD04:
    ctx.set_gpr(31, 0x08ACAD0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD0Cu) goto L_08ACAD0C;
    return;
L_08ACAD0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAD18u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD18u) goto L_08ACAD18;
    return;
L_08ACAD18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAD30;
    }
L_08ACAD30:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ACAD3Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5464));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 409u, 0x08ACD594u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD3Cu) goto L_08ACAD3C;
    return;
L_08ACAD3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAD48;
    }
L_08ACAD48:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAD50;
    }
L_08ACAD50:
    ctx.set_gpr(31, 0x08ACAD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD58u) goto L_08ACAD58;
    return;
L_08ACAD58:
    ctx.set_gpr(31, 0x08ACAD60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 636u, 0x08847AF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD60u) goto L_08ACAD60;
    return;
L_08ACAD60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD74;
      }
      goto L_08ACAD68;
    }
L_08ACAD68:
    ctx.set_gpr(2, 32833u << 16u);
    ctx.set_gpr(31, 0x08ACAD74u);
    ctx.set_gpr(4, ctx.gpr[2] | 2831u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 382u, 0x08AC5304u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD74u) goto L_08ACAD74;
    return;
L_08ACAD74:
    ctx.set_gpr(31, 0x08ACAD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 492u, 0x08AC590Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAD7Cu) goto L_08ACAD7C;
    return;
L_08ACAD7C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ACAE00;
    }
    goto L_08ACAD84;
L_08ACAD84:
    ctx.set_gpr(31, 0x08ACAD8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1045u, 0x08AC748Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAD8Cu) goto L_08ACAD8C;
    return;
L_08ACAD8C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACADFC;
      }
      goto L_08ACAD98;
    }
L_08ACAD98:
    ctx.set_gpr(31, 0x08ACADA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC5828u>(ctx, &aot_mem) && ctx.pc == 0x08ACADA0u) goto L_08ACADA0;
    return;
L_08ACADA0:
    ctx.set_gpr(31, 0x08ACADA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 407u, 0x08AC5498u>(ctx, &aot_mem) && ctx.pc == 0x08ACADA8u) goto L_08ACADA8;
    return;
L_08ACADA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
        goto L_08ACADF8;
    }
    goto L_08ACADB4;
L_08ACADB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
        goto L_08ACADF0;
    }
    goto L_08ACADC0;
L_08ACADC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
        goto L_08ACADE8;
    }
    goto L_08ACADCC;
L_08ACADCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
        goto L_08ACADE0;
    }
    goto L_08ACADD8;
L_08ACADD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACADFC;
      }
      goto L_08ACADE0;
    }
L_08ACADE0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACADFC;
      }
      goto L_08ACADE8;
    }
L_08ACADE8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACADFC;
      }
      goto L_08ACADF0;
    }
L_08ACADF0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACADFC;
      }
      goto L_08ACADF8;
    }
L_08ACADF8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08ACADFC;
L_08ACADFC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08ACAE00;
L_08ACAE00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAE18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAE20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ACAE3Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08ACBDBC;
L_08ACAE3C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACAE4C;
    }
L_08ACAE4C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5948));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAE68:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08ACAE78u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1109u, 0x08AC7924u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE78u) goto L_08ACAE78;
    return;
L_08ACAE78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08ACAEB4;
      }
      goto L_08ACAE80;
    }
L_08ACAE80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    goto L_08ACAE84;
L_08ACAE84:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08ACAEA8;
    }
    goto L_08ACAE90;
L_08ACAE90:
    ctx.set_gpr(31, 0x08ACAE98u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE98u) goto L_08ACAE98;
    return;
L_08ACAE98:
    ctx.set_gpr(31, 0x08ACAEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 702u, 0x08ACE570u>(ctx, &aot_mem) && ctx.pc == 0x08ACAEA0u) goto L_08ACAEA0;
    return;
L_08ACAEA0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACAEB4;
      }
      goto L_08ACAEA8;
    }
L_08ACAEA8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_08ACAE84;
      }
      goto L_08ACAEB4;
    }
L_08ACAEB4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACAEBC;
    }
L_08ACAEBC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACAED4;
    }
L_08ACAED4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5972));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAEF0:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACAEFC;
    }
L_08ACAEFC:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACAF08;
    }
L_08ACAF08:
    ctx.set_gpr(31, 0x08ACAF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF10u) goto L_08ACAF10;
    return;
L_08ACAF10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16792u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAF48u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF48u) goto L_08ACAF48;
    return;
L_08ACAF48:
    ctx.set_gpr(31, 0x08ACAF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF50u) goto L_08ACAF50;
    return;
L_08ACAF50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAF60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF60u) goto L_08ACAF60;
    return;
L_08ACAF60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAF6Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF6Cu) goto L_08ACAF6C;
    return;
L_08ACAF6C:
    ctx.set_gpr(31, 0x08ACAF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF74u) goto L_08ACAF74;
    return;
L_08ACAF74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAF84u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF84u) goto L_08ACAF84;
    return;
L_08ACAF84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACAF90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF90u) goto L_08ACAF90;
    return;
L_08ACAF90:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAFA4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFA4u) goto L_08ACAFA4;
    return;
L_08ACAFA4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988)));
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5492));
    ctx.set_gpr(31, 0x08ACAFC4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFC4u) goto L_08ACAFC4;
    return;
L_08ACAFC4:
    ctx.set_gpr(31, 0x08ACAFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFCCu) goto L_08ACAFCC;
    return;
L_08ACAFCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAFDCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACAFDCu) goto L_08ACAFDC;
    return;
L_08ACAFDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACAFFCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFFCu) goto L_08ACAFFC;
    return;
L_08ACAFFC:
    ctx.set_gpr(31, 0x08ACB004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB004u) goto L_08ACB004;
    return;
L_08ACB004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB014u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB014u) goto L_08ACB014;
    return;
L_08ACB014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5508));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB034u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACB034u) goto L_08ACB034;
    return;
L_08ACB034:
    ctx.set_gpr(31, 0x08ACB03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB03Cu) goto L_08ACB03C;
    return;
L_08ACB03C:
    ctx.set_gpr(31, 0x08ACB044u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB044u) goto L_08ACB044;
    return;
L_08ACB044:
    ctx.set_gpr(31, 0x08ACB04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB04Cu) goto L_08ACB04C;
    return;
L_08ACB04C:
    ctx.set_gpr(31, 0x08ACB054u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACB054u) goto L_08ACB054;
    return;
L_08ACB054:
    ctx.set_gpr(31, 0x08ACB05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB05Cu) goto L_08ACB05C;
    return;
L_08ACB05C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB068u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB068u) goto L_08ACB068;
    return;
L_08ACB068:
    ctx.set_gpr(31, 0x08ACB070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB070u) goto L_08ACB070;
    return;
L_08ACB070:
    ctx.set_gpr(31, 0x08ACB078u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB078u) goto L_08ACB078;
    return;
L_08ACB078:
    ctx.set_gpr(31, 0x08ACB080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB080u) goto L_08ACB080;
    return;
L_08ACB080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB08Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACB08Cu) goto L_08ACB08C;
    return;
L_08ACB08C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB0A4;
    }
L_08ACB0A4:
    ctx.set_gpr(31, 0x08ACB0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0ACu) goto L_08ACB0AC;
    return;
L_08ACB0AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB0B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0B8u) goto L_08ACB0B8;
    return;
L_08ACB0B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB0C0;
    }
L_08ACB0C0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB0F4;
    }
L_08ACB0F4:
    ctx.set_gpr(31, 0x08ACB0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0FCu) goto L_08ACB0FC;
    return;
L_08ACB0FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB108u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACB108u) goto L_08ACB108;
    return;
L_08ACB108:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACB11C;
    }
    goto L_08ACB114;
L_08ACB114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB11C;
    }
L_08ACB11C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACB12Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB12Cu) goto L_08ACB12C;
    return;
L_08ACB12C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB138u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACB138u) goto L_08ACB138;
    return;
L_08ACB138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB140;
    }
L_08ACB140:
    ctx.set_gpr(31, 0x08ACB148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB148u) goto L_08ACB148;
    return;
L_08ACB148:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB154u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB154u) goto L_08ACB154;
    return;
L_08ACB154:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB15C;
    }
L_08ACB15C:
    ctx.set_gpr(31, 0x08ACB164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB164u) goto L_08ACB164;
    return;
L_08ACB164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB174u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB174u) goto L_08ACB174;
    return;
L_08ACB174:
    ctx.set_gpr(31, 0x08ACB17Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACB17Cu) goto L_08ACB17C;
    return;
L_08ACB17C:
    ctx.set_gpr(31, 0x08ACB184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB184u) goto L_08ACB184;
    return;
L_08ACB184:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB190u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB190u) goto L_08ACB190;
    return;
L_08ACB190:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACB1C0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7098u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1C0u) goto L_08ACB1C0;
    return;
L_08ACB1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB1C8;
    }
L_08ACB1C8:
    ctx.set_gpr(31, 0x08ACB1D0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    goto L_08AC9344;
L_08ACB1D0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x08ACB1E0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5548));
    goto L_08AC9318;
L_08ACB1E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x08ACB1ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 565u, 0x08ACDDD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1ECu) goto L_08ACB1EC;
    return;
L_08ACB1EC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB1F8;
    }
L_08ACB1F8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == ctx.gpr[5]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ACB22C;
    }
    goto L_08ACB20C;
L_08ACB20C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ACB21C;
    }
    goto L_08ACB214;
L_08ACB214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB21C;
    }
L_08ACB21C:
    ctx.set_gpr(31, 0x08ACB224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACB224u) goto L_08ACB224;
    return;
L_08ACB224:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB22C;
    }
L_08ACB22C:
    ctx.set_gpr(31, 0x08ACB234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 981u, 0x08AC7098u>(ctx, &aot_mem) && ctx.pc == 0x08ACB234u) goto L_08ACB234;
    return;
L_08ACB234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB23C;
    }
L_08ACB23C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB258;
      }
      goto L_08ACB254;
    }
L_08ACB254:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_08ACB258;
L_08ACB258:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ACB278;
    }
    goto L_08ACB270;
L_08ACB270:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ACB278;
L_08ACB278:
    ctx.set_gpr(31, 0x08ACB280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1081u, 0x08AC76F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB280u) goto L_08ACB280;
    return;
L_08ACB280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB288;
    }
L_08ACB288:
    ctx.set_gpr(31, 0x08ACB290u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACB290u) goto L_08ACB290;
    return;
L_08ACB290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB298;
    }
L_08ACB298:
    ctx.set_gpr(31, 0x08ACB2A0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACB2A0u) goto L_08ACB2A0;
    return;
L_08ACB2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB2A8;
    }
L_08ACB2A8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB2D0;
      }
      goto L_08ACB2BC;
    }
L_08ACB2BC:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08ACB2D0;
L_08ACB2D0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB560;
      }
      goto L_08ACB2E8;
    }
L_08ACB2E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB510;
      }
      goto L_08ACB2F4;
    }
L_08ACB2F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB404;
      }
      goto L_08ACB300;
    }
L_08ACB300:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB368;
      }
      goto L_08ACB30C;
    }
L_08ACB30C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB31C;
      }
      goto L_08ACB314;
    }
L_08ACB314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB31C;
    }
L_08ACB31C:
    ctx.set_gpr(31, 0x08ACB324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB324u) goto L_08ACB324;
    return;
L_08ACB324:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB330u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACB330u) goto L_08ACB330;
    return;
L_08ACB330:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACB350;
      }
      goto L_08ACB33C;
    }
L_08ACB33C:
    ctx.set_gpr(31, 0x08ACB344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB344u) goto L_08ACB344;
    return;
L_08ACB344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB350u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACB350u) goto L_08ACB350;
    return;
L_08ACB350:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB368;
    }
L_08ACB368:
    ctx.set_gpr(31, 0x08ACB370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB370u) goto L_08ACB370;
    return;
L_08ACB370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB37Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACB37Cu) goto L_08ACB37C;
    return;
L_08ACB37C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACB3F0;
    }
    goto L_08ACB388;
L_08ACB388:
    ctx.set_gpr(31, 0x08ACB390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB390u) goto L_08ACB390;
    return;
L_08ACB390:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB39Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB39Cu) goto L_08ACB39C;
    return;
L_08ACB39C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB3A4;
    }
L_08ACB3A4:
    ctx.set_gpr(31, 0x08ACB3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB3ACu) goto L_08ACB3AC;
    return;
L_08ACB3AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB3BCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB3BCu) goto L_08ACB3BC;
    return;
L_08ACB3BC:
    ctx.set_gpr(31, 0x08ACB3C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACB3C4u) goto L_08ACB3C4;
    return;
L_08ACB3C4:
    ctx.set_gpr(31, 0x08ACB3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB3CCu) goto L_08ACB3CC;
    return;
L_08ACB3CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB3D8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB3D8u) goto L_08ACB3D8;
    return;
L_08ACB3D8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB3F0;
    }
L_08ACB3F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB404;
    }
L_08ACB404:
    ctx.set_gpr(31, 0x08ACB40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB40Cu) goto L_08ACB40C;
    return;
L_08ACB40C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16728u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB444u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACB444u) goto L_08ACB444;
    return;
L_08ACB444:
    ctx.set_gpr(31, 0x08ACB44Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB44Cu) goto L_08ACB44C;
    return;
L_08ACB44C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB45Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB45Cu) goto L_08ACB45C;
    return;
L_08ACB45C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB468u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB468u) goto L_08ACB468;
    return;
L_08ACB468:
    ctx.set_gpr(31, 0x08ACB470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB470u) goto L_08ACB470;
    return;
L_08ACB470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB480u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB480u) goto L_08ACB480;
    return;
L_08ACB480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB48Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB48Cu) goto L_08ACB48C;
    return;
L_08ACB48C:
    ctx.set_gpr(31, 0x08ACB494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB494u) goto L_08ACB494;
    return;
L_08ACB494:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB4A4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB4A4u) goto L_08ACB4A4;
    return;
L_08ACB4A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5564));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB4C4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4C4u) goto L_08ACB4C4;
    return;
L_08ACB4C4:
    ctx.set_gpr(31, 0x08ACB4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4CCu) goto L_08ACB4CC;
    return;
L_08ACB4CC:
    ctx.set_gpr(31, 0x08ACB4D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB4D4u) goto L_08ACB4D4;
    return;
L_08ACB4D4:
    ctx.set_gpr(31, 0x08ACB4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4DCu) goto L_08ACB4DC;
    return;
L_08ACB4DC:
    ctx.set_gpr(31, 0x08ACB4E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4E4u) goto L_08ACB4E4;
    return;
L_08ACB4E4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACB4FCu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB4FCu) goto L_08ACB4FC;
    return;
L_08ACB4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB508u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACB508u) goto L_08ACB508;
    return;
L_08ACB508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB510;
    }
L_08ACB510:
    ctx.set_gpr(31, 0x08ACB518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB518u) goto L_08ACB518;
    return;
L_08ACB518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB524u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB524u) goto L_08ACB524;
    return;
L_08ACB524:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB52C;
    }
L_08ACB52C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB560;
    }
L_08ACB560:
    ctx.set_gpr(31, 0x08ACB568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB568u) goto L_08ACB568;
    return;
L_08ACB568:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB574u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACB574u) goto L_08ACB574;
    return;
L_08ACB574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB57C;
    }
L_08ACB57C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08ACB59C;
    }
    goto L_08ACB594;
L_08ACB594:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08ACB59C;
L_08ACB59C:
    ctx.set_gpr(31, 0x08ACB5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACB5A4u) goto L_08ACB5A4;
    return;
L_08ACB5A4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB5B4;
    }
L_08ACB5B4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
        goto L_08ACB660;
    }
    goto L_08ACB5CC;
L_08ACB5CC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
        goto L_08ACB5DC;
    }
    goto L_08ACB5D4;
L_08ACB5D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB5DC;
    }
L_08ACB5DC:
    ctx.set_gpr(31, 0x08ACB5E4u);
    // nop
    goto L_08AC9344;
L_08ACB5E4:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08ACB5F4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5592));
    goto L_08AC9318;
L_08ACB5F4:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08ACB604u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5624));
    goto L_08AC9318;
L_08ACB604:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08ACB610u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 565u, 0x08ACDDD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB610u) goto L_08ACB610;
    return;
L_08ACB610:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB61C;
    }
L_08ACB61C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_08ACB654;
    }
    goto L_08ACB630;
L_08ACB630:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
        goto L_08ACB640;
    }
    goto L_08ACB638;
L_08ACB638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB640;
    }
L_08ACB640:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ACB64Cu);
    ctx.set_gpr(6, 0u | 35828u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1100u, 0x08AC7880u>(ctx, &aot_mem) && ctx.pc == 0x08ACB64Cu) goto L_08ACB64C;
    return;
L_08ACB64C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB654;
    }
L_08ACB654:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB660;
    }
L_08ACB660:
    ctx.set_gpr(31, 0x08ACB668u);
    // nop
    goto L_08AC9344;
L_08ACB668:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08ACB678u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5548));
    goto L_08AC9318;
L_08ACB678:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08ACB684u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 565u, 0x08ACDDD4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB684u) goto L_08ACB684;
    return;
L_08ACB684:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB690;
    }
L_08ACB690:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_08ACB6C4;
    }
    goto L_08ACB6A4;
L_08ACB6A4:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
        goto L_08ACB6B4;
    }
    goto L_08ACB6AC;
L_08ACB6AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB6B4;
    }
L_08ACB6B4:
    ctx.set_gpr(31, 0x08ACB6BCu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACB6BCu) goto L_08ACB6BC;
    return;
L_08ACB6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB6C4;
    }
L_08ACB6C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB6D0;
    }
L_08ACB6D0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACB6E4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_08AC9344;
L_08ACB6E4:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACB6F4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5648));
    goto L_08AC9318;
L_08ACB6F4:
    ctx.set_gpr(31, 0x08ACB6FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD95Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB6FCu) goto L_08ACB6FC;
    return;
L_08ACB6FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB708;
    }
L_08ACB708:
    ctx.set_gpr(31, 0x08ACB710u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACB710u) goto L_08ACB710;
    return;
L_08ACB710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB718;
    }
L_08ACB718:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACB748;
      }
      goto L_08ACB72C;
    }
L_08ACB72C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    goto L_08ACB748;
L_08ACB748:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB9D0;
      }
      goto L_08ACB760;
    }
L_08ACB760:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB980;
      }
      goto L_08ACB76C;
    }
L_08ACB76C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB860;
      }
      goto L_08ACB778;
    }
L_08ACB778:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACB7F8;
      }
      goto L_08ACB784;
    }
L_08ACB784:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB794;
      }
      goto L_08ACB78C;
    }
L_08ACB78C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB794;
    }
L_08ACB794:
    ctx.set_gpr(31, 0x08ACB79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB79Cu) goto L_08ACB79C;
    return;
L_08ACB79C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB7A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7A8u) goto L_08ACB7A8;
    return;
L_08ACB7A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACB7CC;
      }
      goto L_08ACB7B4;
    }
L_08ACB7B4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB7CC;
    }
L_08ACB7CC:
    ctx.set_gpr(31, 0x08ACB7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7D4u) goto L_08ACB7D4;
    return;
L_08ACB7D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB7E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7E0u) goto L_08ACB7E0;
    return;
L_08ACB7E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB7F8;
    }
L_08ACB7F8:
    ctx.set_gpr(31, 0x08ACB800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB800u) goto L_08ACB800;
    return;
L_08ACB800:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB80Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB80Cu) goto L_08ACB80C;
    return;
L_08ACB80C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB814;
    }
L_08ACB814:
    ctx.set_gpr(31, 0x08ACB81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB81Cu) goto L_08ACB81C;
    return;
L_08ACB81C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB82Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB82Cu) goto L_08ACB82C;
    return;
L_08ACB82C:
    ctx.set_gpr(31, 0x08ACB834u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACB834u) goto L_08ACB834;
    return;
L_08ACB834:
    ctx.set_gpr(31, 0x08ACB83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB83Cu) goto L_08ACB83C;
    return;
L_08ACB83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB848u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB848u) goto L_08ACB848;
    return;
L_08ACB848:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB860;
    }
L_08ACB860:
    ctx.set_gpr(31, 0x08ACB868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB868u) goto L_08ACB868;
    return;
L_08ACB868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16712u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB8A0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8A0u) goto L_08ACB8A0;
    return;
L_08ACB8A0:
    ctx.set_gpr(31, 0x08ACB8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8A8u) goto L_08ACB8A8;
    return;
L_08ACB8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB8B8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB8B8u) goto L_08ACB8B8;
    return;
L_08ACB8B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB8C4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB8C4u) goto L_08ACB8C4;
    return;
L_08ACB8C4:
    ctx.set_gpr(31, 0x08ACB8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8CCu) goto L_08ACB8CC;
    return;
L_08ACB8CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB8DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB8DCu) goto L_08ACB8DC;
    return;
L_08ACB8DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB8E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8E8u) goto L_08ACB8E8;
    return;
L_08ACB8E8:
    ctx.set_gpr(31, 0x08ACB8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB8F0u) goto L_08ACB8F0;
    return;
L_08ACB8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB900u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACB900u) goto L_08ACB900;
    return;
L_08ACB900:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5680));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACB920u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACB920u) goto L_08ACB920;
    return;
L_08ACB920:
    ctx.set_gpr(31, 0x08ACB928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB928u) goto L_08ACB928;
    return;
L_08ACB928:
    ctx.set_gpr(31, 0x08ACB930u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACB930u) goto L_08ACB930;
    return;
L_08ACB930:
    ctx.set_gpr(31, 0x08ACB938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB938u) goto L_08ACB938;
    return;
L_08ACB938:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB944u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB944u) goto L_08ACB944;
    return;
L_08ACB944:
    ctx.set_gpr(31, 0x08ACB94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACB94Cu) goto L_08ACB94C;
    return;
L_08ACB94C:
    ctx.set_gpr(31, 0x08ACB954u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACB954u) goto L_08ACB954;
    return;
L_08ACB954:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACB96Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB96Cu) goto L_08ACB96C;
    return;
L_08ACB96C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB978u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACB978u) goto L_08ACB978;
    return;
L_08ACB978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB980;
    }
L_08ACB980:
    ctx.set_gpr(31, 0x08ACB988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB988u) goto L_08ACB988;
    return;
L_08ACB988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB994u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACB994u) goto L_08ACB994;
    return;
L_08ACB994:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB99C;
    }
L_08ACB99C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB9D0;
    }
L_08ACB9D0:
    ctx.set_gpr(31, 0x08ACB9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACB9D8u) goto L_08ACB9D8;
    return;
L_08ACB9D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACB9E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACB9E4u) goto L_08ACB9E4;
    return;
L_08ACB9E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACB9F8;
    }
    goto L_08ACB9F0;
L_08ACB9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACB9F8;
    }
L_08ACB9F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ACBA08u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA08u) goto L_08ACBA08;
    return;
L_08ACBA08:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBA10;
    }
L_08ACBA10:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ACBA40;
      }
      goto L_08ACBA24;
    }
L_08ACBA24:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    goto L_08ACBA40;
L_08ACBA40:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACBCFC;
      }
      goto L_08ACBA58;
    }
L_08ACBA58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACBCB0;
      }
      goto L_08ACBA64;
    }
L_08ACBA64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACBB58;
      }
      goto L_08ACBA70;
    }
L_08ACBA70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACBAF0;
      }
      goto L_08ACBA7C;
    }
L_08ACBA7C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA8C;
      }
      goto L_08ACBA84;
    }
L_08ACBA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBA8C;
    }
L_08ACBA8C:
    ctx.set_gpr(31, 0x08ACBA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA94u) goto L_08ACBA94;
    return;
L_08ACBA94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBAA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAA0u) goto L_08ACBAA0;
    return;
L_08ACBAA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACBAC4;
      }
      goto L_08ACBAAC;
    }
L_08ACBAAC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBAC4;
    }
L_08ACBAC4:
    ctx.set_gpr(31, 0x08ACBACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBACCu) goto L_08ACBACC;
    return;
L_08ACBACC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBAD8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAD8u) goto L_08ACBAD8;
    return;
L_08ACBAD8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBAF0;
    }
L_08ACBAF0:
    ctx.set_gpr(31, 0x08ACBAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBAF8u) goto L_08ACBAF8;
    return;
L_08ACBAF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBB04u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB04u) goto L_08ACBB04;
    return;
L_08ACBB04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBB0C;
    }
L_08ACBB0C:
    ctx.set_gpr(31, 0x08ACBB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB14u) goto L_08ACBB14;
    return;
L_08ACBB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBB24u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBB24u) goto L_08ACBB24;
    return;
L_08ACBB24:
    ctx.set_gpr(31, 0x08ACBB2Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB2Cu) goto L_08ACBB2C;
    return;
L_08ACBB2C:
    ctx.set_gpr(31, 0x08ACBB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB34u) goto L_08ACBB34;
    return;
L_08ACBB34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBB40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBB40u) goto L_08ACBB40;
    return;
L_08ACBB40:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBB58;
    }
L_08ACBB58:
    ctx.set_gpr(31, 0x08ACBB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB60u) goto L_08ACBB60;
    return;
L_08ACBB60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16760u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBB98u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB98u) goto L_08ACBB98;
    return;
L_08ACBB98:
    ctx.set_gpr(31, 0x08ACBBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBA0u) goto L_08ACBBA0;
    return;
L_08ACBBA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBBB0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBBB0u) goto L_08ACBBB0;
    return;
L_08ACBBB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBBBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBBBCu) goto L_08ACBBBC;
    return;
L_08ACBBBC:
    ctx.set_gpr(31, 0x08ACBBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBC4u) goto L_08ACBBC4;
    return;
L_08ACBBC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBBD4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBBD4u) goto L_08ACBBD4;
    return;
L_08ACBBD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBBE0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBE0u) goto L_08ACBBE0;
    return;
L_08ACBBE0:
    ctx.set_gpr(31, 0x08ACBBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBE8u) goto L_08ACBBE8;
    return;
L_08ACBBE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBBF8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBBF8u) goto L_08ACBBF8;
    return;
L_08ACBBF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5708));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBC18u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC18u) goto L_08ACBC18;
    return;
L_08ACBC18:
    ctx.set_gpr(31, 0x08ACBC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC20u) goto L_08ACBC20;
    return;
L_08ACBC20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBC30u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBC30u) goto L_08ACBC30;
    return;
L_08ACBC30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBC50u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC50u) goto L_08ACBC50;
    return;
L_08ACBC50:
    ctx.set_gpr(31, 0x08ACBC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC58u) goto L_08ACBC58;
    return;
L_08ACBC58:
    ctx.set_gpr(31, 0x08ACBC60u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC60u) goto L_08ACBC60;
    return;
L_08ACBC60:
    ctx.set_gpr(31, 0x08ACBC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC68u) goto L_08ACBC68;
    return;
L_08ACBC68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBC74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC74u) goto L_08ACBC74;
    return;
L_08ACBC74:
    ctx.set_gpr(31, 0x08ACBC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC7Cu) goto L_08ACBC7C;
    return;
L_08ACBC7C:
    ctx.set_gpr(31, 0x08ACBC84u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACBC84u) goto L_08ACBC84;
    return;
L_08ACBC84:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACBC9Cu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC9Cu) goto L_08ACBC9C;
    return;
L_08ACBC9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBCA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCA8u) goto L_08ACBCA8;
    return;
L_08ACBCA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBCB0;
    }
L_08ACBCB0:
    ctx.set_gpr(31, 0x08ACBCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCB8u) goto L_08ACBCB8;
    return;
L_08ACBCB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBCC4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCC4u) goto L_08ACBCC4;
    return;
L_08ACBCC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBCCC;
    }
L_08ACBCCC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBCFC;
    }
L_08ACBCFC:
    ctx.set_gpr(31, 0x08ACBD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD04u) goto L_08ACBD04;
    return;
L_08ACBD04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBD10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD10u) goto L_08ACBD10;
    return;
L_08ACBD10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACBD24;
    }
    goto L_08ACBD1C;
L_08ACBD1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBD24;
    }
L_08ACBD24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ACBD34u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD34u) goto L_08ACBD34;
    return;
L_08ACBD34:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBD3C;
    }
L_08ACBD3C:
    ctx.set_gpr(4, 2231u << 16u);
    ctx.set_gpr(31, 0x08ACBD48u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5768));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 409u, 0x08ACD594u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD48u) goto L_08ACBD48;
    return;
L_08ACBD48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBD54;
    }
L_08ACBD54:
    ctx.set_gpr(31, 0x08ACBD5Cu);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD5Cu) goto L_08ACBD5C;
    return;
L_08ACBD5C:
    ctx.set_gpr(31, 0x08ACBD64u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1086u, 0x08AC7758u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD64u) goto L_08ACBD64;
    return;
L_08ACBD64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBD6C;
    }
L_08ACBD6C:
    ctx.set_gpr(31, 0x08ACBD74u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1086u, 0x08AC7758u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD74u) goto L_08ACBD74;
    return;
L_08ACBD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBD7C;
    }
L_08ACBD7C:
    ctx.set_gpr(31, 0x08ACBD84u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD84u) goto L_08ACBD84;
    return;
L_08ACBD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD94;
      }
      goto L_08ACBD8C;
    }
L_08ACBD8C:
    ctx.set_gpr(31, 0x08ACBD94u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD94u) goto L_08ACBD94;
    return;
L_08ACBD94:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4672));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-10852)));
    ctx.set_gpr(31, 0x08ACBDDCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 177u, 0x08AC49A0u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDDCu) goto L_08ACBDDC;
    return;
L_08ACBDDC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08ACBDECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 169u, 0x08AC4938u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDECu) goto L_08ACBDEC;
    return;
L_08ACBDEC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBE00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-4704));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ACBE30u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08ACBDBC;
L_08ACBE30:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08ACBE44u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1109u, 0x08AC7924u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE44u) goto L_08ACBE44;
    return;
L_08ACBE44:
    ctx.set_gpr(1, ctx.gpr[18] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(23, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 284u, 0x08ACCF30u>(ctx, &aot_mem); return;
      }
      goto L_08ACBE54;
    }
L_08ACBE54:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5812));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBE70:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACBEA0;
      }
      goto L_08ACBE84;
    }
L_08ACBE84:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    goto L_08ACBEA0;
L_08ACBEA0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 284u, 0x08ACCF30u>(ctx, &aot_mem); return;
      }
      goto L_08ACBEB8;
    }
L_08ACBEB8:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5848));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBED4:
    ctx.set_gpr(31, 0x08ACBEDCu);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBEDCu) goto L_08ACBEDC;
    return;
L_08ACBEDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16776u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBF14u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF14u) goto L_08ACBF14;
    return;
L_08ACBF14:
    ctx.set_gpr(31, 0x08ACBF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF1Cu) goto L_08ACBF1C;
    return;
L_08ACBF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBF2Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF2Cu) goto L_08ACBF2C;
    return;
L_08ACBF2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBF38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF38u) goto L_08ACBF38;
    return;
L_08ACBF38:
    ctx.set_gpr(31, 0x08ACBF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF40u) goto L_08ACBF40;
    return;
L_08ACBF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBF50u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF50u) goto L_08ACBF50;
    return;
L_08ACBF50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBF5Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF5Cu) goto L_08ACBF5C;
    return;
L_08ACBF5C:
    ctx.set_gpr(31, 0x08ACBF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF64u) goto L_08ACBF64;
    return;
L_08ACBF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBF74u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACBF74u) goto L_08ACBF74;
    return;
L_08ACBF74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5808));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACBF94u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF94u) goto L_08ACBF94;
    return;
L_08ACBF94:
    ctx.set_gpr(31, 0x08ACBF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF9Cu) goto L_08ACBF9C;
    return;
L_08ACBF9C:
    ctx.set_gpr(31, 0x08ACBFA4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFA4u) goto L_08ACBFA4;
    return;
L_08ACBFA4:
    ctx.set_gpr(31, 0x08ACBFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFACu) goto L_08ACBFAC;
    return;
L_08ACBFAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBFB8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFB8u) goto L_08ACBFB8;
    return;
L_08ACBFB8:
    ctx.set_gpr(31, 0x08ACBFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFC0u) goto L_08ACBFC0;
    return;
L_08ACBFC0:
    ctx.set_gpr(31, 0x08ACBFC8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACBFC8u) goto L_08ACBFC8;
    return;
L_08ACBFC8:
    ctx.set_gpr(31, 0x08ACBFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFD0u) goto L_08ACBFD0;
    return;
L_08ACBFD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACBFDCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACBFDCu) goto L_08ACBFDC;
    return;
L_08ACBFDC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 284u, 0x08ACCF30u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1u, 0x08ACC000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0177(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0177_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_177(Runtime &runtime) {
    runtime.register_generated_unit(177u, 0x08AC8000u, 16384u, &recomp_unit_0177, &recomp_unit_0177_entry);
    runtime.register_function(0x08AC8000u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8018u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8020u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8030u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8044u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8058u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8068u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC807Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8088u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC813Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8154u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC815Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8168u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8174u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC819Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8200u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8204u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC820Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8224u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC833Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8348u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8360u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC836Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8378u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8398u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8400u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC840Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8414u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC841Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8424u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8438u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8440u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8454u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC845Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8464u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8468u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC846Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8478u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8484u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC848Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8494u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC849Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8500u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC852Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8534u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC853Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8544u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8548u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8560u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8574u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8580u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8584u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC858Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8600u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8634u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC863Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8644u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8650u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8680u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8688u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC869Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8704u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8710u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC871Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8730u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8738u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8740u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8748u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC877Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8788u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC880Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8814u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8828u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8830u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8844u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC885Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8864u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8880u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8888u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC890Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8928u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8930u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC896Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8974u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8990u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8C9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8ECCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9004u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9010u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9018u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC902Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9048u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9050u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9058u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9068u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9078u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9080u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9088u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9090u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC90FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9104u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9118u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9120u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9134u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC913Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9150u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC915Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9164u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC916Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9174u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9190u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC91F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9200u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9218u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9220u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9240u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9250u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9258u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9260u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9278u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9280u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9288u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9290u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9298u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9308u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9318u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9328u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC933Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9344u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC934Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9370u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9378u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9400u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC940Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9418u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9420u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9444u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9450u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9458u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9460u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9468u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9474u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9478u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9480u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9488u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9494u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9500u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9520u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9530u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC953Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9548u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC955Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9564u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC956Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9574u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9584u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC959Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9620u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9628u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9638u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9644u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC964Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC965Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9670u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9680u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9720u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9730u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9750u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9758u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9760u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC976Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC977Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC978Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC979Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC97FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9808u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9814u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9824u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC982Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC983Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9848u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9854u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9868u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9870u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9880u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9888u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC992Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9940u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9950u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC995Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9964u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC996Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9974u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC997Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9984u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9990u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9998u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9ADCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9AF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9B94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9BF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9CF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9ED4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA000u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA010u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA01Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA024u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA054u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA05Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA064u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA06Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA074u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA07Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA088u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA104u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA10Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA114u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA120u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA128u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA130u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA140u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA148u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA150u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA15Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA174u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA17Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA184u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA18Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA194u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA204u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA218u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA220u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA228u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA230u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA24Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA278u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA288u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA29Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA304u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA30Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA31Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA324u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA32Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA338u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA340u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA34Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA354u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA360u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA368u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA370u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA378u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA384u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA39Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA40Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA41Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA424u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA448u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA450u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA47Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA484u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA494u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA524u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA52Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA534u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA53Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA558u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA564u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA56Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA574u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA584u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA58Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA594u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA600u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA608u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA624u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA648u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA650u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA658u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA664u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA66Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA674u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA67Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA684u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA70Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA714u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA720u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA72Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA738u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA750u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA75Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA780u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA78Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA800u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA808u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA810u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA848u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA860u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA870u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA890u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA904u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA90Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA92Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA934u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA93Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA948u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA954u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA95Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA964u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA974u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA97Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA994u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA99Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB88u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAED4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB004u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB014u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB034u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB03Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB044u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB04Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB054u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB05Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB068u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB070u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB078u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB080u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB08Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB108u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB114u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB11Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB12Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB138u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB140u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB148u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB154u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB15Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB164u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB174u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB17Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB184u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB190u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB20Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB214u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB21Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB224u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB22Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB234u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB23Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB254u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB258u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB270u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB278u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB280u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB288u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB290u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB298u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB300u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB30Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB31Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB324u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB330u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB33Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB344u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB350u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB368u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB370u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB37Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB388u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB390u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB39Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB40Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB444u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB44Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB45Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB468u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB480u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB48Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB494u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB524u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB52Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB560u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB568u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB574u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB57Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB594u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB59Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB604u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB61Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB638u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB64Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB654u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB660u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB678u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB684u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB690u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB710u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB72Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB748u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB760u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB76Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB778u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB784u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB78Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB79Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB800u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB80Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB814u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB81Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB82Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB834u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB83Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB848u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB860u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB868u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB900u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB920u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB928u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB930u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB944u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB94Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB954u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB96Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB978u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB980u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB994u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB99Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBACCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBED4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF5Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFDCu, &recomp_unit_0177, "recomp_unit_0177");
}
} // namespace psprecomp
