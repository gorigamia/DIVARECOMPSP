#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0186[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 9,
    0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0,
    0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 45,
    0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57,
    0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0,
    0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 90, 0,
    0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102,
    0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 114, 0,
    0, 115, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0,
    0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 156,
    0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0,
    0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 188,
    0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0,
    206, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0,
    224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0,
    0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0,
    0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0,
    0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0,
    265, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0,
    274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0,
    0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0,
    293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 300, 301, 302, 0, 0, 303, 0, 0, 304, 0,
    0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0,
    0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 359, 0,
    0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 375, 376, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    380, 0, 381, 0, 382, 0, 0, 0, 383, 384, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    391, 0, 392, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0,
    0, 0, 0, 401, 0, 0, 0, 402, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 410, 0, 411, 0, 0, 412, 413, 0,
    0, 0, 0, 414, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 423,
    0, 424, 0, 425, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 433,
    0, 434, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 443, 0,
    0, 444, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0,
    454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 461, 0,
    0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473,
    0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0,
    0, 483, 0, 484, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 0,
    0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 499, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0,
    504, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513,
    0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0,
    523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0,
    530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 541,
    0, 542, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 550, 0,
    0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0,
    0, 0, 0, 559, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0,
    570, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0,
    0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 591,
    0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0, 599, 0, 600, 0, 0, 601, 0,
    0, 602, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0,
    0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620,
    0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0,
    0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 638,
    0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 648,
    0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 655, 0, 0,
    656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 660, 0, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 0, 665, 0, 0, 666, 0, 0,
    0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0,
    0, 675, 0, 0, 676, 0, 677, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 0,
    685, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 694, 0,
    0, 0, 695, 0, 0, 696, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 0, 0, 704, 705, 0, 0, 706,
    0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 718,
    0, 719, 0, 720, 0, 0, 0, 721, 0, 722, 0, 723, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 0, 729, 0, 730, 731, 0, 732, 0,
    0, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0,
    742, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 0, 751, 0, 752, 0, 753,
    0, 0, 0, 0, 754, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 762, 0, 763, 0,
    0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 0, 0, 0, 0, 772, 0,
    773, 0, 774, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 778, 779, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 0,
    0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786,
    0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0,
    0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 0, 0, 0,
    800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0,
    808, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0,
    0, 816, 0, 0, 0, 0, 0, 0, 0, 817, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 820, 821, 0, 822, 0, 823, 0, 0, 824, 0, 825,
    0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 833, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0,
    0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0,
    0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 847, 848, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 852,
    0, 853, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 857, 858, 0, 859, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0,
    0, 862, 0, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0,
    0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 876,
    0, 877, 0, 878, 0, 879, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 0, 0, 884, 0, 885,
    0, 0, 0, 0, 0, 0, 0, 886, 0, 887, 0, 888, 0, 0, 0, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0, 0,
    0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 0, 0, 895, 0, 896, 0, 0, 897, 0, 898, 0, 0, 0, 0, 0, 0, 899, 0, 900, 0, 0,
    901, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0,
    0, 909, 0, 0, 0, 0, 0, 0, 910, 0, 911, 0, 0, 912, 0, 0, 0, 0, 0, 0, 913, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 915, 0, 916, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 0, 919, 0, 920, 0, 921, 0, 0, 0, 0, 922, 0, 923, 0, 0, 0, 0,
    924, 925, 0, 0, 0, 0, 926, 0, 0, 0, 0, 0, 0, 0, 0, 927, 0, 0, 0, 0, 0, 0, 0, 0, 928, 0, 0, 0, 929, 0, 0, 930,
    0, 0, 931, 0, 0, 932, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 0, 934, 935, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 938,
    0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 941, 0, 942, 0, 0, 0, 0, 943, 0, 944, 0, 0, 0, 0, 945, 0, 946, 0,
    0, 0, 0, 947, 0, 948, 0, 0, 0, 949, 0, 950, 0, 951, 0, 0, 0, 0, 952, 0, 953, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 0,
    956, 0, 957, 0, 0, 0, 958, 959, 0, 960, 0, 0, 961, 0, 0, 962, 0, 0, 963, 0, 0, 964, 0, 0, 965, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 966, 0, 0, 0, 967, 0, 968, 0, 969, 0, 0, 970, 971, 0, 0, 0, 972, 0, 0, 973, 0, 974, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 977, 0, 978,
    0, 0, 0, 0, 0, 0, 979, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 982, 0, 0, 983, 0, 984, 0, 985, 0, 986, 0, 987, 0, 0, 0, 988, 0, 989, 0, 0, 0, 990, 0, 0, 991,
    0, 0, 992, 0, 993, 0, 0, 0, 994, 0, 0, 0, 0, 0, 0, 995, 0, 0, 0, 996, 0, 997, 0, 998, 0, 0, 999, 0, 1000, 0, 0, 1001,
    0, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 1004, 0, 1005, 0, 0, 0, 1006, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 0, 1010, 0, 1011, 0, 1012,
    0, 0, 1013, 0, 1014, 0, 1015, 0, 0, 1016, 1017, 0, 1018, 0, 0, 0, 1019, 0, 1020, 0, 1021, 0, 1022, 0, 0, 0, 1023, 0, 1024, 0, 1025, 0,
    1026, 0, 0, 1027, 0, 0, 1028, 0, 0, 0, 1029, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1030, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1031, 0, 0, 0,
    1032, 0, 0, 0, 1033, 0, 0, 0, 0, 1034, 0, 1035, 0, 1036, 0, 0, 1037, 0, 1038, 0, 1039, 0, 0, 1040, 0, 0, 1041, 0, 0, 0, 1042, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1043, 0, 0, 0, 1044, 0, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 1047, 0, 1048, 0, 0, 1049, 0, 1050,
    0, 1051, 0, 0, 0, 1052, 0, 1053, 0, 1054, 0, 0, 1055, 0, 0, 0, 1056, 0, 0, 1057, 0, 0, 1058, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1059, 0, 1060, 0, 1061, 0, 0, 0, 1062, 0, 0, 0, 1063, 1064, 0, 0, 1065, 0, 0, 0, 1066, 1067, 0, 1068, 1069, 0, 0, 0, 0,
    0, 0, 1070, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1071, 0, 0, 0, 0, 0, 0, 0, 1072, 0, 1073, 0, 0, 0, 0, 1074, 0, 0, 0, 1075,
    0, 1076, 0, 0, 0, 0, 1077, 0, 1078, 0, 0, 0, 1079, 0, 0, 1080, 0, 1081, 0, 0, 0, 1082, 1083, 0, 1084, 0, 0, 0, 0, 0, 1085, 0,
    0, 0, 0, 0, 0, 0, 1086, 0, 0, 1087, 0, 1088, 0, 0, 1089, 0, 1090, 0, 0, 1091, 0, 0, 1092, 0, 1093, 0, 0, 1094, 0, 1095, 0, 0,
    0, 0, 1096, 0, 1097, 0, 1098, 0, 1099, 0, 1100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101, 0, 0, 1102, 0,
    1103, 0, 0, 0, 1104, 0, 0, 0, 1105, 0, 0, 1106, 0, 0, 1107, 0, 0, 1108, 0, 1109, 0, 0, 1110, 0, 1111, 0, 1112, 0, 0, 0, 0, 0,
    0, 1113, 0, 0, 0, 0, 1114, 0, 0, 1115, 0, 0, 0, 0, 1116, 0, 0, 0, 1117, 0, 0, 0, 0, 1118, 1119, 0, 0, 0, 1120, 0, 1121,
};
void recomp_unit_0186_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AEC000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0186[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AEC000;
    case 2u: goto L_08AEC008;
    case 3u: goto L_08AEC024;
    case 4u: goto L_08AEC030;
    case 5u: goto L_08AEC038;
    case 6u: goto L_08AEC050;
    case 7u: goto L_08AEC05C;
    case 8u: goto L_08AEC074;
    case 9u: goto L_08AEC07C;
    case 10u: goto L_08AEC090;
    case 11u: goto L_08AEC098;
    case 12u: goto L_08AEC0C4;
    case 13u: goto L_08AEC0CC;
    case 14u: goto L_08AEC0E0;
    case 15u: goto L_08AEC0F0;
    case 16u: goto L_08AEC0F8;
    case 17u: goto L_08AEC104;
    case 18u: goto L_08AEC110;
    case 19u: goto L_08AEC118;
    case 20u: goto L_08AEC120;
    case 21u: goto L_08AEC130;
    case 22u: goto L_08AEC134;
    case 23u: goto L_08AEC13C;
    case 24u: goto L_08AEC14C;
    case 25u: goto L_08AEC158;
    case 26u: goto L_08AEC160;
    case 27u: goto L_08AEC1B0;
    case 28u: goto L_08AEC1B8;
    case 29u: goto L_08AEC1CC;
    case 30u: goto L_08AEC1D4;
    case 31u: goto L_08AEC20C;
    case 32u: goto L_08AEC21C;
    case 33u: goto L_08AEC224;
    case 34u: goto L_08AEC234;
    case 35u: goto L_08AEC240;
    case 36u: goto L_08AEC248;
    case 37u: goto L_08AEC278;
    case 38u: goto L_08AEC280;
    case 39u: goto L_08AEC290;
    case 40u: goto L_08AEC29C;
    case 41u: goto L_08AEC2A4;
    case 42u: goto L_08AEC2D8;
    case 43u: goto L_08AEC2E0;
    case 44u: goto L_08AEC2F4;
    case 45u: goto L_08AEC2FC;
    case 46u: goto L_08AEC310;
    case 47u: goto L_08AEC318;
    case 48u: goto L_08AEC35C;
    case 49u: goto L_08AEC364;
    case 50u: goto L_08AEC374;
    case 51u: goto L_08AEC37C;
    case 52u: goto L_08AEC3C4;
    case 53u: goto L_08AEC3CC;
    case 54u: goto L_08AEC3DC;
    case 55u: goto L_08AEC3E4;
    case 56u: goto L_08AEC3F4;
    case 57u: goto L_08AEC3FC;
    case 58u: goto L_08AEC41C;
    case 59u: goto L_08AEC424;
    case 60u: goto L_08AEC42C;
    case 61u: goto L_08AEC434;
    case 62u: goto L_08AEC43C;
    case 63u: goto L_08AEC444;
    case 64u: goto L_08AEC44C;
    case 65u: goto L_08AEC464;
    case 66u: goto L_08AEC46C;
    case 67u: goto L_08AEC474;
    case 68u: goto L_08AEC484;
    case 69u: goto L_08AEC48C;
    case 70u: goto L_08AEC49C;
    case 71u: goto L_08AEC4BC;
    case 72u: goto L_08AEC4C4;
    case 73u: goto L_08AEC4D4;
    case 74u: goto L_08AEC4F4;
    case 75u: goto L_08AEC4FC;
    case 76u: goto L_08AEC50C;
    case 77u: goto L_08AEC52C;
    case 78u: goto L_08AEC534;
    case 79u: goto L_08AEC544;
    case 80u: goto L_08AEC564;
    case 81u: goto L_08AEC56C;
    case 82u: goto L_08AEC57C;
    case 83u: goto L_08AEC59C;
    case 84u: goto L_08AEC5A4;
    case 85u: goto L_08AEC5B4;
    case 86u: goto L_08AEC5D4;
    case 87u: goto L_08AEC5DC;
    case 88u: goto L_08AEC5E4;
    case 89u: goto L_08AEC5F0;
    case 90u: goto L_08AEC5F8;
    case 91u: goto L_08AEC608;
    case 92u: goto L_08AEC614;
    case 93u: goto L_08AEC61C;
    case 94u: goto L_08AEC62C;
    case 95u: goto L_08AEC638;
    case 96u: goto L_08AEC640;
    case 97u: goto L_08AEC64C;
    case 98u: goto L_08AEC658;
    case 99u: goto L_08AEC660;
    case 100u: goto L_08AEC668;
    case 101u: goto L_08AEC674;
    case 102u: goto L_08AEC67C;
    case 103u: goto L_08AEC684;
    case 104u: goto L_08AEC690;
    case 105u: goto L_08AEC698;
    case 106u: goto L_08AEC6A0;
    case 107u: goto L_08AEC6AC;
    case 108u: goto L_08AEC6B4;
    case 109u: goto L_08AEC6C0;
    case 110u: goto L_08AEC6C8;
    case 111u: goto L_08AEC6D8;
    case 112u: goto L_08AEC6E0;
    case 113u: goto L_08AEC6EC;
    case 114u: goto L_08AEC6F8;
    case 115u: goto L_08AEC704;
    case 116u: goto L_08AEC70C;
    case 117u: goto L_08AEC714;
    case 118u: goto L_08AEC724;
    case 119u: goto L_08AEC72C;
    case 120u: goto L_08AEC73C;
    case 121u: goto L_08AEC74C;
    case 122u: goto L_08AEC750;
    case 123u: goto L_08AEC758;
    case 124u: goto L_08AEC76C;
    case 125u: goto L_08AEC77C;
    case 126u: goto L_08AEC788;
    case 127u: goto L_08AEC798;
    case 128u: goto L_08AEC7AC;
    case 129u: goto L_08AEC7B8;
    case 130u: goto L_08AEC7C4;
    case 131u: goto L_08AEC7CC;
    case 132u: goto L_08AEC7DC;
    case 133u: goto L_08AEC7E8;
    case 134u: goto L_08AEC7F0;
    case 135u: goto L_08AEC7F8;
    case 136u: goto L_08AEC80C;
    case 137u: goto L_08AEC81C;
    case 138u: goto L_08AEC828;
    case 139u: goto L_08AEC834;
    case 140u: goto L_08AEC83C;
    case 141u: goto L_08AEC84C;
    case 142u: goto L_08AEC854;
    case 143u: goto L_08AEC864;
    case 144u: goto L_08AEC86C;
    case 145u: goto L_08AEC888;
    case 146u: goto L_08AEC890;
    case 147u: goto L_08AEC898;
    case 148u: goto L_08AEC8A8;
    case 149u: goto L_08AEC8B0;
    case 150u: goto L_08AEC8B4;
    case 151u: goto L_08AEC8BC;
    case 152u: goto L_08AEC8D0;
    case 153u: goto L_08AEC8E0;
    case 154u: goto L_08AEC8E8;
    case 155u: goto L_08AEC8F4;
    case 156u: goto L_08AEC8FC;
    case 157u: goto L_08AEC904;
    case 158u: goto L_08AEC914;
    case 159u: goto L_08AEC91C;
    case 160u: goto L_08AEC924;
    case 161u: goto L_08AEC930;
    case 162u: goto L_08AEC94C;
    case 163u: goto L_08AEC954;
    case 164u: goto L_08AEC98C;
    case 165u: goto L_08AEC994;
    case 166u: goto L_08AEC9AC;
    case 167u: goto L_08AEC9B4;
    case 168u: goto L_08AEC9C8;
    case 169u: goto L_08AEC9D0;
    case 170u: goto L_08AEC9F0;
    case 171u: goto L_08AEC9F8;
    case 172u: goto L_08AECA18;
    case 173u: goto L_08AECA20;
    case 174u: goto L_08AECA28;
    case 175u: goto L_08AECA48;
    case 176u: goto L_08AECA50;
    case 177u: goto L_08AECA68;
    case 178u: goto L_08AECA70;
    case 179u: goto L_08AECA84;
    case 180u: goto L_08AECA8C;
    case 181u: goto L_08AECAA0;
    case 182u: goto L_08AECAB0;
    case 183u: goto L_08AECABC;
    case 184u: goto L_08AECAC4;
    case 185u: goto L_08AECAD8;
    case 186u: goto L_08AECAE0;
    case 187u: goto L_08AECAF4;
    case 188u: goto L_08AECAFC;
    case 189u: goto L_08AECB04;
    case 190u: goto L_08AECB0C;
    case 191u: goto L_08AECB14;
    case 192u: goto L_08AECB28;
    case 193u: goto L_08AECB30;
    case 194u: goto L_08AECB38;
    case 195u: goto L_08AECB4C;
    case 196u: goto L_08AECB54;
    case 197u: goto L_08AECB74;
    case 198u: goto L_08AECB84;
    case 199u: goto L_08AECB98;
    case 200u: goto L_08AECBA0;
    case 201u: goto L_08AECBB4;
    case 202u: goto L_08AECBBC;
    case 203u: goto L_08AECBD0;
    case 204u: goto L_08AECBD8;
    case 205u: goto L_08AECBF8;
    case 206u: goto L_08AECC00;
    case 207u: goto L_08AECC20;
    case 208u: goto L_08AECC30;
    case 209u: goto L_08AECC38;
    case 210u: goto L_08AECC50;
    case 211u: goto L_08AECC58;
    case 212u: goto L_08AECC70;
    case 213u: goto L_08AECC78;
    case 214u: goto L_08AECC80;
    case 215u: goto L_08AECC98;
    case 216u: goto L_08AECCA0;
    case 217u: goto L_08AECCB8;
    case 218u: goto L_08AECCBC;
    case 219u: goto L_08AECCC4;
    case 220u: goto L_08AECCD4;
    case 221u: goto L_08AECCE0;
    case 222u: goto L_08AECCEC;
    case 223u: goto L_08AECCF8;
    case 224u: goto L_08AECD00;
    case 225u: goto L_08AECD08;
    case 226u: goto L_08AECD10;
    case 227u: goto L_08AECD18;
    case 228u: goto L_08AECD28;
    case 229u: goto L_08AECD34;
    case 230u: goto L_08AECD3C;
    case 231u: goto L_08AECD70;
    case 232u: goto L_08AECD78;
    case 233u: goto L_08AECD88;
    case 234u: goto L_08AECD94;
    case 235u: goto L_08AECD9C;
    case 236u: goto L_08AECDD0;
    case 237u: goto L_08AECDD8;
    case 238u: goto L_08AECDF0;
    case 239u: goto L_08AECDF8;
    case 240u: goto L_08AECE14;
    case 241u: goto L_08AECE1C;
    case 242u: goto L_08AECE38;
    case 243u: goto L_08AECE40;
    case 244u: goto L_08AECE60;
    case 245u: goto L_08AECE68;
    case 246u: goto L_08AECE88;
    case 247u: goto L_08AECE90;
    case 248u: goto L_08AECEA8;
    case 249u: goto L_08AECEB0;
    case 250u: goto L_08AECEC8;
    case 251u: goto L_08AECED4;
    case 252u: goto L_08AECEDC;
    case 253u: goto L_08AECEF0;
    case 254u: goto L_08AECEF8;
    case 255u: goto L_08AECF0C;
    case 256u: goto L_08AECF14;
    case 257u: goto L_08AECF1C;
    case 258u: goto L_08AECF24;
    case 259u: goto L_08AECF38;
    case 260u: goto L_08AECF40;
    case 261u: goto L_08AECF54;
    case 262u: goto L_08AECF5C;
    case 263u: goto L_08AECF64;
    case 264u: goto L_08AECF78;
    case 265u: goto L_08AECF80;
    case 266u: goto L_08AECF94;
    case 267u: goto L_08AECF9C;
    case 268u: goto L_08AECFA4;
    case 269u: goto L_08AECFB8;
    case 270u: goto L_08AECFC8;
    case 271u: goto L_08AECFD0;
    case 272u: goto L_08AECFE4;
    case 273u: goto L_08AECFEC;
    case 274u: goto L_08AED000;
    case 275u: goto L_08AED008;
    case 276u: goto L_08AED010;
    case 277u: goto L_08AED02C;
    case 278u: goto L_08AED038;
    case 279u: goto L_08AED040;
    case 280u: goto L_08AED054;
    case 281u: goto L_08AED05C;
    case 282u: goto L_08AED070;
    case 283u: goto L_08AED078;
    case 284u: goto L_08AED08C;
    case 285u: goto L_08AED094;
    case 286u: goto L_08AED0A4;
    case 287u: goto L_08AED0AC;
    case 288u: goto L_08AED0B4;
    case 289u: goto L_08AED0D0;
    case 290u: goto L_08AED0DC;
    case 291u: goto L_08AED0E4;
    case 292u: goto L_08AED0F8;
    case 293u: goto L_08AED100;
    case 294u: goto L_08AED114;
    case 295u: goto L_08AED11C;
    case 296u: goto L_08AED130;
    case 297u: goto L_08AED138;
    case 298u: goto L_08AED148;
    case 299u: goto L_08AED150;
    case 300u: goto L_08AED158;
    case 301u: goto L_08AED15C;
    case 302u: goto L_08AED160;
    case 303u: goto L_08AED16C;
    case 304u: goto L_08AED178;
    case 305u: goto L_08AED184;
    case 306u: goto L_08AED190;
    case 307u: goto L_08AED198;
    case 308u: goto L_08AED1A0;
    case 309u: goto L_08AED1A8;
    case 310u: goto L_08AED1B0;
    case 311u: goto L_08AED1C8;
    case 312u: goto L_08AED1D0;
    case 313u: goto L_08AED1D8;
    case 314u: goto L_08AED1E0;
    case 315u: goto L_08AED200;
    case 316u: goto L_08AED208;
    case 317u: goto L_08AED220;
    case 318u: goto L_08AED228;
    case 319u: goto L_08AED240;
    case 320u: goto L_08AED248;
    case 321u: goto L_08AED268;
    case 322u: goto L_08AED270;
    case 323u: goto L_08AED290;
    case 324u: goto L_08AED298;
    case 325u: goto L_08AED2A0;
    case 326u: goto L_08AED2A8;
    case 327u: goto L_08AED2C0;
    case 328u: goto L_08AED2C8;
    case 329u: goto L_08AED2E0;
    case 330u: goto L_08AED2E8;
    case 331u: goto L_08AED308;
    case 332u: goto L_08AED310;
    case 333u: goto L_08AED330;
    case 334u: goto L_08AED338;
    case 335u: goto L_08AED340;
    case 336u: goto L_08AED358;
    case 337u: goto L_08AED360;
    case 338u: goto L_08AED378;
    case 339u: goto L_08AED380;
    case 340u: goto L_08AED3A0;
    case 341u: goto L_08AED3A8;
    case 342u: goto L_08AED3C8;
    case 343u: goto L_08AED3CC;
    case 344u: goto L_08AED3D4;
    case 345u: goto L_08AED3DC;
    case 346u: goto L_08AED428;
    case 347u: goto L_08AED430;
    case 348u: goto L_08AED450;
    case 349u: goto L_08AED458;
    case 350u: goto L_08AED470;
    case 351u: goto L_08AED478;
    case 352u: goto L_08AED490;
    case 353u: goto L_08AED498;
    case 354u: goto L_08AED4B8;
    case 355u: goto L_08AED4C0;
    case 356u: goto L_08AED4E0;
    case 357u: goto L_08AED4E8;
    case 358u: goto L_08AED4F0;
    case 359u: goto L_08AED4F8;
    case 360u: goto L_08AED510;
    case 361u: goto L_08AED518;
    case 362u: goto L_08AED530;
    case 363u: goto L_08AED538;
    case 364u: goto L_08AED558;
    case 365u: goto L_08AED560;
    case 366u: goto L_08AED580;
    case 367u: goto L_08AED588;
    case 368u: goto L_08AED590;
    case 369u: goto L_08AED5A8;
    case 370u: goto L_08AED5B0;
    case 371u: goto L_08AED5C8;
    case 372u: goto L_08AED5D0;
    case 373u: goto L_08AED5F0;
    case 374u: goto L_08AED5F8;
    case 375u: goto L_08AED618;
    case 376u: goto L_08AED61C;
    case 377u: goto L_08AED624;
    case 378u: goto L_08AED62C;
    case 379u: goto L_08AED678;
    case 380u: goto L_08AED680;
    case 381u: goto L_08AED688;
    case 382u: goto L_08AED690;
    case 383u: goto L_08AED6A0;
    case 384u: goto L_08AED6A4;
    case 385u: goto L_08AED6B0;
    case 386u: goto L_08AED6BC;
    case 387u: goto L_08AED6C4;
    case 388u: goto L_08AED6D0;
    case 389u: goto L_08AED6D8;
    case 390u: goto L_08AED6F0;
    case 391u: goto L_08AED700;
    case 392u: goto L_08AED708;
    case 393u: goto L_08AED714;
    case 394u: goto L_08AED71C;
    case 395u: goto L_08AED738;
    case 396u: goto L_08AED748;
    case 397u: goto L_08AED754;
    case 398u: goto L_08AED75C;
    case 399u: goto L_08AED768;
    case 400u: goto L_08AED770;
    case 401u: goto L_08AED78C;
    case 402u: goto L_08AED79C;
    case 403u: goto L_08AED7A4;
    case 404u: goto L_08AED7AC;
    case 405u: goto L_08AED7B8;
    case 406u: goto L_08AED7C0;
    case 407u: goto L_08AED7C8;
    case 408u: goto L_08AED7D4;
    case 409u: goto L_08AED7DC;
    case 410u: goto L_08AED7E0;
    case 411u: goto L_08AED7E8;
    case 412u: goto L_08AED7F4;
    case 413u: goto L_08AED7F8;
    case 414u: goto L_08AED80C;
    case 415u: goto L_08AED814;
    case 416u: goto L_08AED81C;
    case 417u: goto L_08AED830;
    case 418u: goto L_08AED83C;
    case 419u: goto L_08AED844;
    case 420u: goto L_08AED858;
    case 421u: goto L_08AED860;
    case 422u: goto L_08AED874;
    case 423u: goto L_08AED87C;
    case 424u: goto L_08AED884;
    case 425u: goto L_08AED88C;
    case 426u: goto L_08AED8A0;
    case 427u: goto L_08AED8A8;
    case 428u: goto L_08AED8BC;
    case 429u: goto L_08AED8C4;
    case 430u: goto L_08AED8CC;
    case 431u: goto L_08AED8E0;
    case 432u: goto L_08AED8E8;
    case 433u: goto L_08AED8FC;
    case 434u: goto L_08AED904;
    case 435u: goto L_08AED910;
    case 436u: goto L_08AED918;
    case 437u: goto L_08AED920;
    case 438u: goto L_08AED934;
    case 439u: goto L_08AED93C;
    case 440u: goto L_08AED950;
    case 441u: goto L_08AED958;
    case 442u: goto L_08AED96C;
    case 443u: goto L_08AED978;
    case 444u: goto L_08AED984;
    case 445u: goto L_08AED98C;
    case 446u: goto L_08AED998;
    case 447u: goto L_08AED9A0;
    case 448u: goto L_08AED9A8;
    case 449u: goto L_08AED9BC;
    case 450u: goto L_08AED9C4;
    case 451u: goto L_08AED9D8;
    case 452u: goto L_08AED9E0;
    case 453u: goto L_08AED9F4;
    case 454u: goto L_08AEDA00;
    case 455u: goto L_08AEDA14;
    case 456u: goto L_08AEDA28;
    case 457u: goto L_08AEDA40;
    case 458u: goto L_08AEDA5C;
    case 459u: goto L_08AEDA64;
    case 460u: goto L_08AEDA70;
    case 461u: goto L_08AEDA78;
    case 462u: goto L_08AEDA84;
    case 463u: goto L_08AEDA8C;
    case 464u: goto L_08AEDA98;
    case 465u: goto L_08AEDAA0;
    case 466u: goto L_08AEDAAC;
    case 467u: goto L_08AEDAB4;
    case 468u: goto L_08AEDAC8;
    case 469u: goto L_08AEDAD0;
    case 470u: goto L_08AEDADC;
    case 471u: goto L_08AEDAE8;
    case 472u: goto L_08AEDAF0;
    case 473u: goto L_08AEDAFC;
    case 474u: goto L_08AEDB08;
    case 475u: goto L_08AEDB10;
    case 476u: goto L_08AEDB1C;
    case 477u: goto L_08AEDB28;
    case 478u: goto L_08AEDB3C;
    case 479u: goto L_08AEDB54;
    case 480u: goto L_08AEDB60;
    case 481u: goto L_08AEDB68;
    case 482u: goto L_08AEDB70;
    case 483u: goto L_08AEDB84;
    case 484u: goto L_08AEDB8C;
    case 485u: goto L_08AEDB98;
    case 486u: goto L_08AEDBA4;
    case 487u: goto L_08AEDBAC;
    case 488u: goto L_08AEDBB8;
    case 489u: goto L_08AEDBC4;
    case 490u: goto L_08AEDBCC;
    case 491u: goto L_08AEDBD8;
    case 492u: goto L_08AEDBE4;
    case 493u: goto L_08AEDBF0;
    case 494u: goto L_08AEDC04;
    case 495u: goto L_08AEDC0C;
    case 496u: goto L_08AEDC20;
    case 497u: goto L_08AEDC28;
    case 498u: goto L_08AEDC30;
    case 499u: goto L_08AEDC3C;
    case 500u: goto L_08AEDC44;
    case 501u: goto L_08AEDC50;
    case 502u: goto L_08AEDC5C;
    case 503u: goto L_08AEDC78;
    case 504u: goto L_08AEDC80;
    case 505u: goto L_08AEDC94;
    case 506u: goto L_08AEDC9C;
    case 507u: goto L_08AEDCA8;
    case 508u: goto L_08AEDCB0;
    case 509u: goto L_08AEDCC4;
    case 510u: goto L_08AEDCD4;
    case 511u: goto L_08AEDCEC;
    case 512u: goto L_08AEDCF4;
    case 513u: goto L_08AEDCFC;
    case 514u: goto L_08AEDD08;
    case 515u: goto L_08AEDD10;
    case 516u: goto L_08AEDD18;
    case 517u: goto L_08AEDD2C;
    case 518u: goto L_08AEDD38;
    case 519u: goto L_08AEDD40;
    case 520u: goto L_08AEDD58;
    case 521u: goto L_08AEDD60;
    case 522u: goto L_08AEDD68;
    case 523u: goto L_08AEDD80;
    case 524u: goto L_08AEDD88;
    case 525u: goto L_08AEDDA8;
    case 526u: goto L_08AEDDB0;
    case 527u: goto L_08AEDDD0;
    case 528u: goto L_08AEDDEC;
    case 529u: goto L_08AEDDF4;
    case 530u: goto L_08AEDE00;
    case 531u: goto L_08AEDE08;
    case 532u: goto L_08AEDE18;
    case 533u: goto L_08AEDE20;
    case 534u: goto L_08AEDE34;
    case 535u: goto L_08AEDE3C;
    case 536u: goto L_08AEDE44;
    case 537u: goto L_08AEDE50;
    case 538u: goto L_08AEDE58;
    case 539u: goto L_08AEDE60;
    case 540u: goto L_08AEDE74;
    case 541u: goto L_08AEDE7C;
    case 542u: goto L_08AEDE84;
    case 543u: goto L_08AEDE90;
    case 544u: goto L_08AEDE98;
    case 545u: goto L_08AEDEA4;
    case 546u: goto L_08AEDEB8;
    case 547u: goto L_08AEDECC;
    case 548u: goto L_08AEDED8;
    case 549u: goto L_08AEDEF0;
    case 550u: goto L_08AEDEF8;
    case 551u: goto L_08AEDF0C;
    case 552u: goto L_08AEDF14;
    case 553u: goto L_08AEDF40;
    case 554u: goto L_08AEDF48;
    case 555u: goto L_08AEDF50;
    case 556u: goto L_08AEDF5C;
    case 557u: goto L_08AEDF64;
    case 558u: goto L_08AEDF78;
    case 559u: goto L_08AEDF8C;
    case 560u: goto L_08AEDF90;
    case 561u: goto L_08AEDFA0;
    case 562u: goto L_08AEDFA8;
    case 563u: goto L_08AEDFB0;
    case 564u: goto L_08AEDFBC;
    case 565u: goto L_08AEDFC4;
    case 566u: goto L_08AEDFD0;
    case 567u: goto L_08AEDFD8;
    case 568u: goto L_08AEDFEC;
    case 569u: goto L_08AEDFF4;
    case 570u: goto L_08AEE000;
    case 571u: goto L_08AEE00C;
    case 572u: goto L_08AEE014;
    case 573u: goto L_08AEE020;
    case 574u: goto L_08AEE02C;
    case 575u: goto L_08AEE034;
    case 576u: goto L_08AEE040;
    case 577u: goto L_08AEE04C;
    case 578u: goto L_08AEE060;
    case 579u: goto L_08AEE078;
    case 580u: goto L_08AEE084;
    case 581u: goto L_08AEE08C;
    case 582u: goto L_08AEE094;
    case 583u: goto L_08AEE0A8;
    case 584u: goto L_08AEE0B0;
    case 585u: goto L_08AEE0BC;
    case 586u: goto L_08AEE0C8;
    case 587u: goto L_08AEE0D0;
    case 588u: goto L_08AEE0DC;
    case 589u: goto L_08AEE0E8;
    case 590u: goto L_08AEE0F0;
    case 591u: goto L_08AEE0FC;
    case 592u: goto L_08AEE108;
    case 593u: goto L_08AEE114;
    case 594u: goto L_08AEE12C;
    case 595u: goto L_08AEE134;
    case 596u: goto L_08AEE148;
    case 597u: goto L_08AEE150;
    case 598u: goto L_08AEE158;
    case 599u: goto L_08AEE164;
    case 600u: goto L_08AEE16C;
    case 601u: goto L_08AEE178;
    case 602u: goto L_08AEE184;
    case 603u: goto L_08AEE19C;
    case 604u: goto L_08AEE1A4;
    case 605u: goto L_08AEE1B8;
    case 606u: goto L_08AEE1C0;
    case 607u: goto L_08AEE1CC;
    case 608u: goto L_08AEE1D4;
    case 609u: goto L_08AEE1E8;
    case 610u: goto L_08AEE1F8;
    case 611u: goto L_08AEE210;
    case 612u: goto L_08AEE218;
    case 613u: goto L_08AEE220;
    case 614u: goto L_08AEE22C;
    case 615u: goto L_08AEE234;
    case 616u: goto L_08AEE23C;
    case 617u: goto L_08AEE250;
    case 618u: goto L_08AEE25C;
    case 619u: goto L_08AEE264;
    case 620u: goto L_08AEE27C;
    case 621u: goto L_08AEE284;
    case 622u: goto L_08AEE28C;
    case 623u: goto L_08AEE2A4;
    case 624u: goto L_08AEE2AC;
    case 625u: goto L_08AEE2CC;
    case 626u: goto L_08AEE2D4;
    case 627u: goto L_08AEE2F4;
    case 628u: goto L_08AEE310;
    case 629u: goto L_08AEE318;
    case 630u: goto L_08AEE324;
    case 631u: goto L_08AEE32C;
    case 632u: goto L_08AEE33C;
    case 633u: goto L_08AEE344;
    case 634u: goto L_08AEE358;
    case 635u: goto L_08AEE360;
    case 636u: goto L_08AEE368;
    case 637u: goto L_08AEE374;
    case 638u: goto L_08AEE37C;
    case 639u: goto L_08AEE384;
    case 640u: goto L_08AEE398;
    case 641u: goto L_08AEE3A0;
    case 642u: goto L_08AEE3A8;
    case 643u: goto L_08AEE3B4;
    case 644u: goto L_08AEE3BC;
    case 645u: goto L_08AEE3C8;
    case 646u: goto L_08AEE3DC;
    case 647u: goto L_08AEE3F0;
    case 648u: goto L_08AEE3FC;
    case 649u: goto L_08AEE414;
    case 650u: goto L_08AEE41C;
    case 651u: goto L_08AEE430;
    case 652u: goto L_08AEE438;
    case 653u: goto L_08AEE464;
    case 654u: goto L_08AEE46C;
    case 655u: goto L_08AEE474;
    case 656u: goto L_08AEE480;
    case 657u: goto L_08AEE488;
    case 658u: goto L_08AEE49C;
    case 659u: goto L_08AEE4B0;
    case 660u: goto L_08AEE4B4;
    case 661u: goto L_08AEE4C4;
    case 662u: goto L_08AEE4CC;
    case 663u: goto L_08AEE4D4;
    case 664u: goto L_08AEE4DC;
    case 665u: goto L_08AEE4E8;
    case 666u: goto L_08AEE4F4;
    case 667u: goto L_08AEE504;
    case 668u: goto L_08AEE514;
    case 669u: goto L_08AEE524;
    case 670u: goto L_08AEE534;
    case 671u: goto L_08AEE548;
    case 672u: goto L_08AEE554;
    case 673u: goto L_08AEE56C;
    case 674u: goto L_08AEE578;
    case 675u: goto L_08AEE584;
    case 676u: goto L_08AEE590;
    case 677u: goto L_08AEE598;
    case 678u: goto L_08AEE5A4;
    case 679u: goto L_08AEE5AC;
    case 680u: goto L_08AEE5BC;
    case 681u: goto L_08AEE5C4;
    case 682u: goto L_08AEE5D8;
    case 683u: goto L_08AEE5E4;
    case 684u: goto L_08AEE5EC;
    case 685u: goto L_08AEE600;
    case 686u: goto L_08AEE608;
    case 687u: goto L_08AEE61C;
    case 688u: goto L_08AEE624;
    case 689u: goto L_08AEE638;
    case 690u: goto L_08AEE640;
    case 691u: goto L_08AEE654;
    case 692u: goto L_08AEE65C;
    case 693u: goto L_08AEE670;
    case 694u: goto L_08AEE678;
    case 695u: goto L_08AEE688;
    case 696u: goto L_08AEE694;
    case 697u: goto L_08AEE69C;
    case 698u: goto L_08AEE6A4;
    case 699u: goto L_08AEE6B0;
    case 700u: goto L_08AEE6B8;
    case 701u: goto L_08AEE6C8;
    case 702u: goto L_08AEE6D4;
    case 703u: goto L_08AEE6DC;
    case 704u: goto L_08AEE6EC;
    case 705u: goto L_08AEE6F0;
    case 706u: goto L_08AEE6FC;
    case 707u: goto L_08AEE708;
    case 708u: goto L_08AEE710;
    case 709u: goto L_08AEE71C;
    case 710u: goto L_08AEE728;
    case 711u: goto L_08AEE730;
    case 712u: goto L_08AEE73C;
    case 713u: goto L_08AEE748;
    case 714u: goto L_08AEE750;
    case 715u: goto L_08AEE75C;
    case 716u: goto L_08AEE768;
    case 717u: goto L_08AEE770;
    case 718u: goto L_08AEE77C;
    case 719u: goto L_08AEE784;
    case 720u: goto L_08AEE78C;
    case 721u: goto L_08AEE79C;
    case 722u: goto L_08AEE7A4;
    case 723u: goto L_08AEE7AC;
    case 724u: goto L_08AEE7B8;
    case 725u: goto L_08AEE7C0;
    case 726u: goto L_08AEE7C8;
    case 727u: goto L_08AEE7D0;
    case 728u: goto L_08AEE7D8;
    case 729u: goto L_08AEE7E4;
    case 730u: goto L_08AEE7EC;
    case 731u: goto L_08AEE7F0;
    case 732u: goto L_08AEE7F8;
    case 733u: goto L_08AEE808;
    case 734u: goto L_08AEE818;
    case 735u: goto L_08AEE820;
    case 736u: goto L_08AEE834;
    case 737u: goto L_08AEE83C;
    case 738u: goto L_08AEE850;
    case 739u: goto L_08AEE858;
    case 740u: goto L_08AEE868;
    case 741u: goto L_08AEE870;
    case 742u: goto L_08AEE880;
    case 743u: goto L_08AEE88C;
    case 744u: goto L_08AEE894;
    case 745u: goto L_08AEE8A4;
    case 746u: goto L_08AEE8AC;
    case 747u: goto L_08AEE8BC;
    case 748u: goto L_08AEE8C4;
    case 749u: goto L_08AEE8D4;
    case 750u: goto L_08AEE8DC;
    case 751u: goto L_08AEE8EC;
    case 752u: goto L_08AEE8F4;
    case 753u: goto L_08AEE8FC;
    case 754u: goto L_08AEE910;
    case 755u: goto L_08AEE91C;
    case 756u: goto L_08AEE924;
    case 757u: goto L_08AEE934;
    case 758u: goto L_08AEE93C;
    case 759u: goto L_08AEE944;
    case 760u: goto L_08AEE950;
    case 761u: goto L_08AEE958;
    case 762u: goto L_08AEE970;
    case 763u: goto L_08AEE978;
    case 764u: goto L_08AEE990;
    case 765u: goto L_08AEE9A4;
    case 766u: goto L_08AEE9A8;
    case 767u: goto L_08AEE9B4;
    case 768u: goto L_08AEE9BC;
    case 769u: goto L_08AEE9C4;
    case 770u: goto L_08AEE9D0;
    case 771u: goto L_08AEE9DC;
    case 772u: goto L_08AEE9F8;
    case 773u: goto L_08AEEA00;
    case 774u: goto L_08AEEA08;
    case 775u: goto L_08AEEA10;
    case 776u: goto L_08AEEA1C;
    case 777u: goto L_08AEEA28;
    case 778u: goto L_08AEEA48;
    case 779u: goto L_08AEEA4C;
    case 780u: goto L_08AEEA60;
    case 781u: goto L_08AEEA68;
    case 782u: goto L_08AEEA74;
    case 783u: goto L_08AEEA90;
    case 784u: goto L_08AEEAB8;
    case 785u: goto L_08AEEAE8;
    case 786u: goto L_08AEEAFC;
    case 787u: goto L_08AEEB0C;
    case 788u: goto L_08AEEB2C;
    case 789u: goto L_08AEEB3C;
    case 790u: goto L_08AEEB48;
    case 791u: goto L_08AEEB64;
    case 792u: goto L_08AEEB6C;
    case 793u: goto L_08AEEB8C;
    case 794u: goto L_08AEEBAC;
    case 795u: goto L_08AEEBB8;
    case 796u: goto L_08AEEBC0;
    case 797u: goto L_08AEEBD8;
    case 798u: goto L_08AEEBE0;
    case 799u: goto L_08AEEBE8;
    case 800u: goto L_08AEEC00;
    case 801u: goto L_08AEEC08;
    case 802u: goto L_08AEEC28;
    case 803u: goto L_08AEEC30;
    case 804u: goto L_08AEEC3C;
    case 805u: goto L_08AEEC48;
    case 806u: goto L_08AEEC5C;
    case 807u: goto L_08AEEC74;
    case 808u: goto L_08AEEC80;
    case 809u: goto L_08AEECA0;
    case 810u: goto L_08AEECA8;
    case 811u: goto L_08AEECB0;
    case 812u: goto L_08AEECBC;
    case 813u: goto L_08AEECC8;
    case 814u: goto L_08AEECE0;
    case 815u: goto L_08AEECF8;
    case 816u: goto L_08AEED04;
    case 817u: goto L_08AEED24;
    case 818u: goto L_08AEED28;
    case 819u: goto L_08AEED44;
    case 820u: goto L_08AEED54;
    case 821u: goto L_08AEED58;
    case 822u: goto L_08AEED60;
    case 823u: goto L_08AEED68;
    case 824u: goto L_08AEED74;
    case 825u: goto L_08AEED7C;
    case 826u: goto L_08AEED88;
    case 827u: goto L_08AEED94;
    case 828u: goto L_08AEEDA0;
    case 829u: goto L_08AEEDA8;
    case 830u: goto L_08AEEDB4;
    case 831u: goto L_08AEEDC0;
    case 832u: goto L_08AEEDCC;
    case 833u: goto L_08AEEDD4;
    case 834u: goto L_08AEEDE0;
    case 835u: goto L_08AEEDF8;
    case 836u: goto L_08AEEE04;
    case 837u: goto L_08AEEE10;
    case 838u: goto L_08AEEE1C;
    case 839u: goto L_08AEEE28;
    case 840u: goto L_08AEEE34;
    case 841u: goto L_08AEEE40;
    case 842u: goto L_08AEEE4C;
    case 843u: goto L_08AEEE64;
    case 844u: goto L_08AEEE74;
    case 845u: goto L_08AEEE8C;
    case 846u: goto L_08AEEE94;
    case 847u: goto L_08AEEEA8;
    case 848u: goto L_08AEEEAC;
    case 849u: goto L_08AEEEC0;
    case 850u: goto L_08AEEED8;
    case 851u: goto L_08AEEEF0;
    case 852u: goto L_08AEEEFC;
    case 853u: goto L_08AEEF04;
    case 854u: goto L_08AEEF10;
    case 855u: goto L_08AEEF18;
    case 856u: goto L_08AEEF38;
    case 857u: goto L_08AEEF48;
    case 858u: goto L_08AEEF4C;
    case 859u: goto L_08AEEF54;
    case 860u: goto L_08AEEF60;
    case 861u: goto L_08AEEF68;
    case 862u: goto L_08AEEF84;
    case 863u: goto L_08AEEF94;
    case 864u: goto L_08AEEF9C;
    case 865u: goto L_08AEEFAC;
    case 866u: goto L_08AEEFB4;
    case 867u: goto L_08AEEFC8;
    case 868u: goto L_08AEEFEC;
    case 869u: goto L_08AEEFF4;
    case 870u: goto L_08AEF00C;
    case 871u: goto L_08AEF014;
    case 872u: goto L_08AEF02C;
    case 873u: goto L_08AEF034;
    case 874u: goto L_08AEF054;
    case 875u: goto L_08AEF05C;
    case 876u: goto L_08AEF07C;
    case 877u: goto L_08AEF084;
    case 878u: goto L_08AEF08C;
    case 879u: goto L_08AEF094;
    case 880u: goto L_08AEF0AC;
    case 881u: goto L_08AEF0B4;
    case 882u: goto L_08AEF0CC;
    case 883u: goto L_08AEF0D4;
    case 884u: goto L_08AEF0F4;
    case 885u: goto L_08AEF0FC;
    case 886u: goto L_08AEF11C;
    case 887u: goto L_08AEF124;
    case 888u: goto L_08AEF12C;
    case 889u: goto L_08AEF144;
    case 890u: goto L_08AEF14C;
    case 891u: goto L_08AEF164;
    case 892u: goto L_08AEF16C;
    case 893u: goto L_08AEF18C;
    case 894u: goto L_08AEF194;
    case 895u: goto L_08AEF1B4;
    case 896u: goto L_08AEF1BC;
    case 897u: goto L_08AEF1C8;
    case 898u: goto L_08AEF1D0;
    case 899u: goto L_08AEF1EC;
    case 900u: goto L_08AEF1F4;
    case 901u: goto L_08AEF200;
    case 902u: goto L_08AEF208;
    case 903u: goto L_08AEF224;
    case 904u: goto L_08AEF22C;
    case 905u: goto L_08AEF238;
    case 906u: goto L_08AEF240;
    case 907u: goto L_08AEF25C;
    case 908u: goto L_08AEF270;
    case 909u: goto L_08AEF284;
    case 910u: goto L_08AEF2A0;
    case 911u: goto L_08AEF2A8;
    case 912u: goto L_08AEF2B4;
    case 913u: goto L_08AEF2D0;
    case 914u: goto L_08AEF2D4;
    case 915u: goto L_08AEF308;
    case 916u: goto L_08AEF310;
    case 917u: goto L_08AEF324;
    case 918u: goto L_08AEF32C;
    case 919u: goto L_08AEF340;
    case 920u: goto L_08AEF348;
    case 921u: goto L_08AEF350;
    case 922u: goto L_08AEF364;
    case 923u: goto L_08AEF36C;
    case 924u: goto L_08AEF380;
    case 925u: goto L_08AEF384;
    case 926u: goto L_08AEF398;
    case 927u: goto L_08AEF3BC;
    case 928u: goto L_08AEF3E0;
    case 929u: goto L_08AEF3F0;
    case 930u: goto L_08AEF3FC;
    case 931u: goto L_08AEF408;
    case 932u: goto L_08AEF414;
    case 933u: goto L_08AEF420;
    case 934u: goto L_08AEF444;
    case 935u: goto L_08AEF448;
    case 936u: goto L_08AEF46C;
    case 937u: goto L_08AEF474;
    case 938u: goto L_08AEF47C;
    case 939u: goto L_08AEF484;
    case 940u: goto L_08AEF4AC;
    case 941u: goto L_08AEF4B8;
    case 942u: goto L_08AEF4C0;
    case 943u: goto L_08AEF4D4;
    case 944u: goto L_08AEF4DC;
    case 945u: goto L_08AEF4F0;
    case 946u: goto L_08AEF4F8;
    case 947u: goto L_08AEF50C;
    case 948u: goto L_08AEF514;
    case 949u: goto L_08AEF524;
    case 950u: goto L_08AEF52C;
    case 951u: goto L_08AEF534;
    case 952u: goto L_08AEF548;
    case 953u: goto L_08AEF550;
    case 954u: goto L_08AEF564;
    case 955u: goto L_08AEF56C;
    case 956u: goto L_08AEF580;
    case 957u: goto L_08AEF588;
    case 958u: goto L_08AEF598;
    case 959u: goto L_08AEF59C;
    case 960u: goto L_08AEF5A4;
    case 961u: goto L_08AEF5B0;
    case 962u: goto L_08AEF5BC;
    case 963u: goto L_08AEF5C8;
    case 964u: goto L_08AEF5D4;
    case 965u: goto L_08AEF5E0;
    case 966u: goto L_08AEF610;
    case 967u: goto L_08AEF620;
    case 968u: goto L_08AEF628;
    case 969u: goto L_08AEF630;
    case 970u: goto L_08AEF63C;
    case 971u: goto L_08AEF640;
    case 972u: goto L_08AEF650;
    case 973u: goto L_08AEF65C;
    case 974u: goto L_08AEF664;
    case 975u: goto L_08AEF6A8;
    case 976u: goto L_08AEF6B0;
    case 977u: goto L_08AEF6F4;
    case 978u: goto L_08AEF6FC;
    case 979u: goto L_08AEF718;
    case 980u: goto L_08AEF738;
    case 981u: goto L_08AEF770;
    case 982u: goto L_08AEF79C;
    case 983u: goto L_08AEF7A8;
    case 984u: goto L_08AEF7B0;
    case 985u: goto L_08AEF7B8;
    case 986u: goto L_08AEF7C0;
    case 987u: goto L_08AEF7C8;
    case 988u: goto L_08AEF7D8;
    case 989u: goto L_08AEF7E0;
    case 990u: goto L_08AEF7F0;
    case 991u: goto L_08AEF7FC;
    case 992u: goto L_08AEF808;
    case 993u: goto L_08AEF810;
    case 994u: goto L_08AEF820;
    case 995u: goto L_08AEF83C;
    case 996u: goto L_08AEF84C;
    case 997u: goto L_08AEF854;
    case 998u: goto L_08AEF85C;
    case 999u: goto L_08AEF868;
    case 1000u: goto L_08AEF870;
    case 1001u: goto L_08AEF87C;
    case 1002u: goto L_08AEF894;
    case 1003u: goto L_08AEF89C;
    case 1004u: goto L_08AEF8A8;
    case 1005u: goto L_08AEF8B0;
    case 1006u: goto L_08AEF8C0;
    case 1007u: goto L_08AEF8C8;
    case 1008u: goto L_08AEF8D4;
    case 1009u: goto L_08AEF8E0;
    case 1010u: goto L_08AEF8EC;
    case 1011u: goto L_08AEF8F4;
    case 1012u: goto L_08AEF8FC;
    case 1013u: goto L_08AEF908;
    case 1014u: goto L_08AEF910;
    case 1015u: goto L_08AEF918;
    case 1016u: goto L_08AEF924;
    case 1017u: goto L_08AEF928;
    case 1018u: goto L_08AEF930;
    case 1019u: goto L_08AEF940;
    case 1020u: goto L_08AEF948;
    case 1021u: goto L_08AEF950;
    case 1022u: goto L_08AEF958;
    case 1023u: goto L_08AEF968;
    case 1024u: goto L_08AEF970;
    case 1025u: goto L_08AEF978;
    case 1026u: goto L_08AEF980;
    case 1027u: goto L_08AEF98C;
    case 1028u: goto L_08AEF998;
    case 1029u: goto L_08AEF9A8;
    case 1030u: goto L_08AEF9D0;
    case 1031u: goto L_08AEFA70;
    case 1032u: goto L_08AEFA80;
    case 1033u: goto L_08AEFA90;
    case 1034u: goto L_08AEFAA4;
    case 1035u: goto L_08AEFAAC;
    case 1036u: goto L_08AEFAB4;
    case 1037u: goto L_08AEFAC0;
    case 1038u: goto L_08AEFAC8;
    case 1039u: goto L_08AEFAD0;
    case 1040u: goto L_08AEFADC;
    case 1041u: goto L_08AEFAE8;
    case 1042u: goto L_08AEFAF8;
    case 1043u: goto L_08AEFB24;
    case 1044u: goto L_08AEFB34;
    case 1045u: goto L_08AEFB44;
    case 1046u: goto L_08AEFB58;
    case 1047u: goto L_08AEFB60;
    case 1048u: goto L_08AEFB68;
    case 1049u: goto L_08AEFB74;
    case 1050u: goto L_08AEFB7C;
    case 1051u: goto L_08AEFB84;
    case 1052u: goto L_08AEFB94;
    case 1053u: goto L_08AEFB9C;
    case 1054u: goto L_08AEFBA4;
    case 1055u: goto L_08AEFBB0;
    case 1056u: goto L_08AEFBC0;
    case 1057u: goto L_08AEFBCC;
    case 1058u: goto L_08AEFBD8;
    case 1059u: goto L_08AEFC0C;
    case 1060u: goto L_08AEFC14;
    case 1061u: goto L_08AEFC1C;
    case 1062u: goto L_08AEFC2C;
    case 1063u: goto L_08AEFC3C;
    case 1064u: goto L_08AEFC40;
    case 1065u: goto L_08AEFC4C;
    case 1066u: goto L_08AEFC5C;
    case 1067u: goto L_08AEFC60;
    case 1068u: goto L_08AEFC68;
    case 1069u: goto L_08AEFC6C;
    case 1070u: goto L_08AEFC88;
    case 1071u: goto L_08AEFD30;
    case 1072u: goto L_08AEFD50;
    case 1073u: goto L_08AEFD58;
    case 1074u: goto L_08AEFD6C;
    case 1075u: goto L_08AEFD7C;
    case 1076u: goto L_08AEFD84;
    case 1077u: goto L_08AEFD98;
    case 1078u: goto L_08AEFDA0;
    case 1079u: goto L_08AEFDB0;
    case 1080u: goto L_08AEFDBC;
    case 1081u: goto L_08AEFDC4;
    case 1082u: goto L_08AEFDD4;
    case 1083u: goto L_08AEFDD8;
    case 1084u: goto L_08AEFDE0;
    case 1085u: goto L_08AEFDF8;
    case 1086u: goto L_08AEFE18;
    case 1087u: goto L_08AEFE24;
    case 1088u: goto L_08AEFE2C;
    case 1089u: goto L_08AEFE38;
    case 1090u: goto L_08AEFE40;
    case 1091u: goto L_08AEFE4C;
    case 1092u: goto L_08AEFE58;
    case 1093u: goto L_08AEFE60;
    case 1094u: goto L_08AEFE6C;
    case 1095u: goto L_08AEFE74;
    case 1096u: goto L_08AEFE88;
    case 1097u: goto L_08AEFE90;
    case 1098u: goto L_08AEFE98;
    case 1099u: goto L_08AEFEA0;
    case 1100u: goto L_08AEFEA8;
    case 1101u: goto L_08AEFEEC;
    case 1102u: goto L_08AEFEF8;
    case 1103u: goto L_08AEFF00;
    case 1104u: goto L_08AEFF10;
    case 1105u: goto L_08AEFF20;
    case 1106u: goto L_08AEFF2C;
    case 1107u: goto L_08AEFF38;
    case 1108u: goto L_08AEFF44;
    case 1109u: goto L_08AEFF4C;
    case 1110u: goto L_08AEFF58;
    case 1111u: goto L_08AEFF60;
    case 1112u: goto L_08AEFF68;
    case 1113u: goto L_08AEFF84;
    case 1114u: goto L_08AEFF98;
    case 1115u: goto L_08AEFFA4;
    case 1116u: goto L_08AEFFB8;
    case 1117u: goto L_08AEFFC8;
    case 1118u: goto L_08AEFFDC;
    case 1119u: goto L_08AEFFE0;
    case 1120u: goto L_08AEFFF0;
    case 1121u: goto L_08AEFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AEC000:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE7D0;
      }
      goto L_08AEC008;
    }
L_08AEC008:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2968));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEC024:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC0C4;
      }
      goto L_08AEC030;
    }
L_08AEC030:
    ctx.set_gpr(31, 0x08AEC038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC038u) goto L_08AEC038;
    return;
L_08AEC038:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEC050u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEC050u) goto L_08AEC050;
    return;
L_08AEC050:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1761)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AEC07C;
    }
    goto L_08AEC05C;
L_08AEC05C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC074u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC074u) goto L_08AEC074;
    return;
L_08AEC074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC090;
      }
      goto L_08AEC07C;
    }
L_08AEC07C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC090u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC090u) goto L_08AEC090;
    return;
L_08AEC090:
    ctx.set_gpr(31, 0x08AEC098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC098u) goto L_08AEC098;
    return;
L_08AEC098:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEC0C4u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEC0C4u) goto L_08AEC0C4;
    return;
L_08AEC0C4:
    ctx.set_gpr(31, 0x08AEC0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC0CCu) goto L_08AEC0CC;
    return;
L_08AEC0CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEC0E0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC0E0u) goto L_08AEC0E0;
    return;
L_08AEC0E0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1264), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEC0F0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 606u, 0x08A96EBCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC0F0u) goto L_08AEC0F0;
    return;
L_08AEC0F0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AEC118;
    }
    goto L_08AEC0F8;
L_08AEC0F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AEC104u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC104u) goto L_08AEC104;
    return;
L_08AEC104:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(31, 0x08AEC110u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08AEC110u) goto L_08AEC110;
    return;
L_08AEC110:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08AEC134;
      }
      goto L_08AEC118;
    }
L_08AEC118:
    ctx.set_gpr(31, 0x08AEC120u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC120u) goto L_08AEC120;
    return;
L_08AEC120:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEC130u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 526u, 0x08A9B424u>(ctx, &aot_mem) && ctx.pc == 0x08AEC130u) goto L_08AEC130;
    return;
L_08AEC130:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AEC134;
L_08AEC134:
    ctx.set_gpr(31, 0x08AEC13Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC13Cu) goto L_08AEC13C;
    return;
L_08AEC13C:
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC14Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEC14Cu) goto L_08AEC14C;
    return;
L_08AEC14C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEC1B0;
      }
      goto L_08AEC158;
    }
L_08AEC158:
    ctx.set_gpr(31, 0x08AEC160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC160u) goto L_08AEC160;
    return;
L_08AEC160:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16840u << 16u);
    ctx.set_gpr(3, 16912u << 16u);
    ctx.set_gpr(10, 17058u << 16u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AEC1B0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AEC1B0u) goto L_08AEC1B0;
    return;
L_08AEC1B0:
    ctx.set_gpr(31, 0x08AEC1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC1B8u) goto L_08AEC1B8;
    return;
L_08AEC1B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC1CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC1CCu) goto L_08AEC1CC;
    return;
L_08AEC1CC:
    ctx.set_gpr(31, 0x08AEC1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC1D4u) goto L_08AEC1D4;
    return;
L_08AEC1D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16840u << 16u);
    ctx.set_gpr(3, 17058u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16932u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AEC20Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEC20Cu) goto L_08AEC20C;
    return;
L_08AEC20C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC134;
      }
      goto L_08AEC21C;
    }
L_08AEC21C:
    ctx.set_gpr(31, 0x08AEC224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC224u) goto L_08AEC224;
    return;
L_08AEC224:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC234u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEC234u) goto L_08AEC234;
    return;
L_08AEC234:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEC278;
      }
      goto L_08AEC240;
    }
L_08AEC240:
    ctx.set_gpr(31, 0x08AEC248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC248u) goto L_08AEC248;
    return;
L_08AEC248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEC278u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AEC278u) goto L_08AEC278;
    return;
L_08AEC278:
    ctx.set_gpr(31, 0x08AEC280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC280u) goto L_08AEC280;
    return;
L_08AEC280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC290u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEC290u) goto L_08AEC290;
    return;
L_08AEC290:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEC2D8;
      }
      goto L_08AEC29C;
    }
L_08AEC29C:
    ctx.set_gpr(31, 0x08AEC2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2A4u) goto L_08AEC2A4;
    return;
L_08AEC2A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17184u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08AEC2D8u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2D8u) goto L_08AEC2D8;
    return;
L_08AEC2D8:
    ctx.set_gpr(31, 0x08AEC2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2E0u) goto L_08AEC2E0;
    return;
L_08AEC2E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(31, 0x08AEC2F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC2F4u) goto L_08AEC2F4;
    return;
L_08AEC2F4:
    ctx.set_gpr(31, 0x08AEC2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC2FCu) goto L_08AEC2FC;
    return;
L_08AEC2FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(31, 0x08AEC310u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC310u) goto L_08AEC310;
    return;
L_08AEC310:
    ctx.set_gpr(31, 0x08AEC318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC318u) goto L_08AEC318;
    return;
L_08AEC318:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17287u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17258u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17244u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC35Cu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08AEC35Cu) goto L_08AEC35C;
    return;
L_08AEC35C:
    ctx.set_gpr(31, 0x08AEC364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC364u) goto L_08AEC364;
    return;
L_08AEC364:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC374u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AEC374u) goto L_08AEC374;
    return;
L_08AEC374:
    ctx.set_gpr(31, 0x08AEC37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC37Cu) goto L_08AEC37C;
    return;
L_08AEC37C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17324u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17244u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17186u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC3C4u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3C4u) goto L_08AEC3C4;
    return;
L_08AEC3C4:
    ctx.set_gpr(31, 0x08AEC3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3CCu) goto L_08AEC3CC;
    return;
L_08AEC3CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEC3DCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3DCu) goto L_08AEC3DC;
    return;
L_08AEC3DC:
    ctx.set_gpr(31, 0x08AEC3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 189u, 0x08848C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC3E4u) goto L_08AEC3E4;
    return;
L_08AEC3E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(31, 0x08AEC3F4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32512)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 197u, 0x08AF0D70u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3F4u) goto L_08AEC3F4;
    return;
L_08AEC3F4:
    ctx.set_gpr(31, 0x08AEC3FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AEC3FCu) goto L_08AEC3FC;
    return;
L_08AEC3FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32516));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AEC41Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AEC41Cu) goto L_08AEC41C;
    return;
L_08AEC41C:
    ctx.set_gpr(31, 0x08AEC424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AEC424u) goto L_08AEC424;
    return;
L_08AEC424:
    ctx.set_gpr(31, 0x08AEC42Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEC42Cu) goto L_08AEC42C;
    return;
L_08AEC42C:
    ctx.set_gpr(31, 0x08AEC434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08AEC434u) goto L_08AEC434;
    return;
L_08AEC434:
    ctx.set_gpr(31, 0x08AEC43Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08AEC43Cu) goto L_08AEC43C;
    return;
L_08AEC43C:
    ctx.set_gpr(31, 0x08AEC444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEC444u) goto L_08AEC444;
    return;
L_08AEC444:
    ctx.set_gpr(31, 0x08AEC44Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC44Cu) goto L_08AEC44C;
    return;
L_08AEC44C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x08AEC464u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AEC464u) goto L_08AEC464;
    return;
L_08AEC464:
    ctx.set_gpr(31, 0x08AEC46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEC46Cu) goto L_08AEC46C;
    return;
L_08AEC46C:
    ctx.set_gpr(31, 0x08AEC474u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC474u) goto L_08AEC474;
    return;
L_08AEC474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC484u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AEC484u) goto L_08AEC484;
    return;
L_08AEC484:
    ctx.set_gpr(31, 0x08AEC48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC48Cu) goto L_08AEC48C;
    return;
L_08AEC48C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC49Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC49Cu) goto L_08AEC49C;
    return;
L_08AEC49C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8544));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC4BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEC4BCu) goto L_08AEC4BC;
    return;
L_08AEC4BC:
    ctx.set_gpr(31, 0x08AEC4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC4C4u) goto L_08AEC4C4;
    return;
L_08AEC4C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC4D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC4D4u) goto L_08AEC4D4;
    return;
L_08AEC4D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8556));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC4F4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEC4F4u) goto L_08AEC4F4;
    return;
L_08AEC4F4:
    ctx.set_gpr(31, 0x08AEC4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC4FCu) goto L_08AEC4FC;
    return;
L_08AEC4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC50Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC50Cu) goto L_08AEC50C;
    return;
L_08AEC50C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8576));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC52Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEC52Cu) goto L_08AEC52C;
    return;
L_08AEC52C:
    ctx.set_gpr(31, 0x08AEC534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC534u) goto L_08AEC534;
    return;
L_08AEC534:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC544u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC544u) goto L_08AEC544;
    return;
L_08AEC544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8588));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC564u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEC564u) goto L_08AEC564;
    return;
L_08AEC564:
    ctx.set_gpr(31, 0x08AEC56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC56Cu) goto L_08AEC56C;
    return;
L_08AEC56C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC57Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC57Cu) goto L_08AEC57C;
    return;
L_08AEC57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8600));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC59Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEC59Cu) goto L_08AEC59C;
    return;
L_08AEC59C:
    ctx.set_gpr(31, 0x08AEC5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC5A4u) goto L_08AEC5A4;
    return;
L_08AEC5A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC5B4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC5B4u) goto L_08AEC5B4;
    return;
L_08AEC5B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8616));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC5D4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEC5D4u) goto L_08AEC5D4;
    return;
L_08AEC5D4:
    ctx.set_gpr(31, 0x08AEC5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEC5DCu) goto L_08AEC5DC;
    return;
L_08AEC5DC:
    ctx.set_gpr(31, 0x08AEC5E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC5E4u) goto L_08AEC5E4;
    return;
L_08AEC5E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC5F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC5F0u) goto L_08AEC5F0;
    return;
L_08AEC5F0:
    ctx.set_gpr(31, 0x08AEC5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC5F8u) goto L_08AEC5F8;
    return;
L_08AEC5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC608u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC608u) goto L_08AEC608;
    return;
L_08AEC608:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08AEC614u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 645u, 0x08AF2938u>(ctx, &aot_mem) && ctx.pc == 0x08AEC614u) goto L_08AEC614;
    return;
L_08AEC614:
    ctx.set_gpr(31, 0x08AEC61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC61Cu) goto L_08AEC61C;
    return;
L_08AEC61C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC62Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC62Cu) goto L_08AEC62C;
    return;
L_08AEC62C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1492)));
    ctx.set_gpr(31, 0x08AEC638u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 650u, 0x08AF29B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC638u) goto L_08AEC638;
    return;
L_08AEC638:
    ctx.set_gpr(31, 0x08AEC640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC640u) goto L_08AEC640;
    return;
L_08AEC640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC64Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AEC64Cu) goto L_08AEC64C;
    return;
L_08AEC64C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEC658;
    }
L_08AEC658:
    ctx.set_gpr(31, 0x08AEC660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEC660u) goto L_08AEC660;
    return;
L_08AEC660:
    ctx.set_gpr(31, 0x08AEC668u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC668u) goto L_08AEC668;
    return;
L_08AEC668:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC674u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEF47C;
L_08AEC674:
    ctx.set_gpr(31, 0x08AEC67Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 547u, 0x0884A1B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC67Cu) goto L_08AEC67C;
    return;
L_08AEC67C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
        goto L_08AEE9A8;
    }
    goto L_08AEC684;
L_08AEC684:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEC690;
    }
L_08AEC690:
    ctx.set_gpr(31, 0x08AEC698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEC698u) goto L_08AEC698;
    return;
L_08AEC698:
    ctx.set_gpr(31, 0x08AEC6A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6A0u) goto L_08AEC6A0;
    return;
L_08AEC6A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC6ACu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEF47C;
L_08AEC6AC:
    ctx.set_gpr(31, 0x08AEC6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6B4u) goto L_08AEC6B4;
    return;
L_08AEC6B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC6C0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6C0u) goto L_08AEC6C0;
    return;
L_08AEC6C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEC6C8;
    }
L_08AEC6C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEC6D8;
    }
L_08AEC6D8:
    ctx.set_gpr(31, 0x08AEC6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6E0u) goto L_08AEC6E0;
    return;
L_08AEC6E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC6ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEC6ECu) goto L_08AEC6EC;
    return;
L_08AEC6EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08AEC7F0;
    }
    goto L_08AEC6F8;
L_08AEC6F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEC70C;
      }
      goto L_08AEC704;
    }
L_08AEC704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC834;
      }
      goto L_08AEC70C;
    }
L_08AEC70C:
    ctx.set_gpr(31, 0x08AEC714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC714u) goto L_08AEC714;
    return;
L_08AEC714:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC724u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC724u) goto L_08AEC724;
    return;
L_08AEC724:
    ctx.set_gpr(31, 0x08AEC72Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 887u, 0x08A7F204u>(ctx, &aot_mem) && ctx.pc == 0x08AEC72Cu) goto L_08AEC72C;
    return;
L_08AEC72C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1492), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(31, 0x08AEC73Cu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 29u, 0x08AE8208u>(ctx, &aot_mem) && ctx.pc == 0x08AEC73Cu) goto L_08AEC73C;
    return;
L_08AEC73C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
        goto L_08AEC7CC;
    }
    goto L_08AEC74C;
L_08AEC74C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AEC750;
L_08AEC750:
    ctx.set_gpr(31, 0x08AEC758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC758u) goto L_08AEC758;
    return;
L_08AEC758:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC76Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC76Cu) goto L_08AEC76C;
    return;
L_08AEC76C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC750;
      }
      goto L_08AEC77C;
    }
L_08AEC77C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(476));
    ctx.set_gpr(31, 0x08AEC788u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC788u) goto L_08AEC788;
    return;
L_08AEC788:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.set_gpr(31, 0x08AEC798u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC798u) goto L_08AEC798;
    return;
L_08AEC798:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AEC7ACu);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 8u, 0x08A980ECu>(ctx, &aot_mem) && ctx.pc == 0x08AEC7ACu) goto L_08AEC7AC;
    return;
L_08AEC7AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEC7B8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7B8u) goto L_08AEC7B8;
    return;
L_08AEC7B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC7C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7C4u) goto L_08AEC7C4;
    return;
L_08AEC7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC834;
      }
      goto L_08AEC7CC;
    }
L_08AEC7CC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEC7DCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7DCu) goto L_08AEC7DC;
    return;
L_08AEC7DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC7E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7E8u) goto L_08AEC7E8;
    return;
L_08AEC7E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC834;
      }
      goto L_08AEC7F0;
    }
L_08AEC7F0:
    ctx.set_gpr(31, 0x08AEC7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC7F8u) goto L_08AEC7F8;
    return;
L_08AEC7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC80Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC80Cu) goto L_08AEC80C;
    return;
L_08AEC80C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC7F0;
      }
      goto L_08AEC81C;
    }
L_08AEC81C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEC828u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC828u) goto L_08AEC828;
    return;
L_08AEC828:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC834u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEC834u) goto L_08AEC834;
    return;
L_08AEC834:
    ctx.set_gpr(31, 0x08AEC83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC83Cu) goto L_08AEC83C;
    return;
L_08AEC83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC84Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC84Cu) goto L_08AEC84C;
    return;
L_08AEC84C:
    ctx.set_gpr(31, 0x08AEC854u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEC854u) goto L_08AEC854;
    return;
L_08AEC854:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEC890;
      }
      goto L_08AEC864;
    }
L_08AEC864:
    ctx.set_gpr(31, 0x08AEC86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AEC86Cu) goto L_08AEC86C;
    return;
L_08AEC86C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32516));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AEC888u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AEC888u) goto L_08AEC888;
    return;
L_08AEC888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEC890;
    }
L_08AEC890:
    ctx.set_gpr(31, 0x08AEC898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AEC898u) goto L_08AEC898;
    return;
L_08AEC898:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC8A8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8624));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AEC8A8u) goto L_08AEC8A8;
    return;
L_08AEC8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEC8B0;
    }
L_08AEC8B0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AEC8B4;
L_08AEC8B4:
    ctx.set_gpr(31, 0x08AEC8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC8BCu) goto L_08AEC8BC;
    return;
L_08AEC8BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC8D0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC8D0u) goto L_08AEC8D0;
    return;
L_08AEC8D0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEC8B4;
      }
      goto L_08AEC8E0;
    }
L_08AEC8E0:
    ctx.set_gpr(31, 0x08AEC8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC8E8u) goto L_08AEC8E8;
    return;
L_08AEC8E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC8F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEC8F4u) goto L_08AEC8F4;
    return;
L_08AEC8F4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AECAB0;
    }
    goto L_08AEC8FC;
L_08AEC8FC:
    ctx.set_gpr(31, 0x08AEC904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC904u) goto L_08AEC904;
    return;
L_08AEC904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEC914u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC914u) goto L_08AEC914;
    return;
L_08AEC914:
    ctx.set_gpr(31, 0x08AEC91Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEC91Cu) goto L_08AEC91C;
    return;
L_08AEC91C:
    ctx.set_gpr(31, 0x08AEC924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEC924u) goto L_08AEC924;
    return;
L_08AEC924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEC930u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC930u) goto L_08AEC930;
    return;
L_08AEC930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1224), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECA20;
      }
      goto L_08AEC94C;
    }
L_08AEC94C:
    ctx.set_gpr(31, 0x08AEC954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC954u) goto L_08AEC954;
    return;
L_08AEC954:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(55));
    ctx.set_gpr(31, 0x08AEC98Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AEC98Cu) goto L_08AEC98C;
    return;
L_08AEC98C:
    ctx.set_gpr(31, 0x08AEC994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC994u) goto L_08AEC994;
    return;
L_08AEC994:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEC9ACu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC9ACu) goto L_08AEC9AC;
    return;
L_08AEC9AC:
    ctx.set_gpr(31, 0x08AEC9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC9B4u) goto L_08AEC9B4;
    return;
L_08AEC9B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(31, 0x08AEC9C8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEC9C8u) goto L_08AEC9C8;
    return;
L_08AEC9C8:
    ctx.set_gpr(31, 0x08AEC9D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC9D0u) goto L_08AEC9D0;
    return;
L_08AEC9D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17026u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEC9F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEC9F0u) goto L_08AEC9F0;
    return;
L_08AEC9F0:
    ctx.set_gpr(31, 0x08AEC9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEC9F8u) goto L_08AEC9F8;
    return;
L_08AEC9F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17179u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECA18u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECA18u) goto L_08AECA18;
    return;
L_08AECA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECA84;
      }
      goto L_08AECA20;
    }
L_08AECA20:
    ctx.set_gpr(31, 0x08AECA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECA28u) goto L_08AECA28;
    return;
L_08AECA28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECA48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECA48u) goto L_08AECA48;
    return;
L_08AECA48:
    ctx.set_gpr(31, 0x08AECA50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECA50u) goto L_08AECA50;
    return;
L_08AECA50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECA68u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECA68u) goto L_08AECA68;
    return;
L_08AECA68:
    ctx.set_gpr(31, 0x08AECA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECA70u) goto L_08AECA70;
    return;
L_08AECA70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(31, 0x08AECA84u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECA84u) goto L_08AECA84;
    return;
L_08AECA84:
    ctx.set_gpr(31, 0x08AECA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECA8Cu) goto L_08AECA8C;
    return;
L_08AECA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(31, 0x08AECAA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECAA0u) goto L_08AECAA0;
    return;
L_08AECAA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AECAB0;
L_08AECAB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AECABC;
    }
L_08AECABC:
    ctx.set_gpr(31, 0x08AECAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECAC4u) goto L_08AECAC4;
    return;
L_08AECAC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(31, 0x08AECAD8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECAD8u) goto L_08AECAD8;
    return;
L_08AECAD8:
    ctx.set_gpr(31, 0x08AECAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECAE0u) goto L_08AECAE0;
    return;
L_08AECAE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(31, 0x08AECAF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECAF4u) goto L_08AECAF4;
    return;
L_08AECAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AECAFC;
    }
L_08AECAFC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AECB04;
L_08AECB04:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AECB30;
      }
      goto L_08AECB0C;
    }
L_08AECB0C:
    ctx.set_gpr(31, 0x08AECB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECB14u) goto L_08AECB14;
    return;
L_08AECB14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECB28u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECB28u) goto L_08AECB28;
    return;
L_08AECB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECB4C;
      }
      goto L_08AECB30;
    }
L_08AECB30:
    ctx.set_gpr(31, 0x08AECB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECB38u) goto L_08AECB38;
    return;
L_08AECB38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECB4Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECB4Cu) goto L_08AECB4C;
    return;
L_08AECB4C:
    ctx.set_gpr(31, 0x08AECB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECB54u) goto L_08AECB54;
    return;
L_08AECB54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AECB74u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECB74u) goto L_08AECB74;
    return;
L_08AECB74:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AECB04;
    }
    goto L_08AECB84;
L_08AECB84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
        goto L_08AECCBC;
    }
    goto L_08AECB98;
L_08AECB98:
    ctx.set_gpr(31, 0x08AECBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECBA0u) goto L_08AECBA0;
    return;
L_08AECBA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(62));
    ctx.set_gpr(31, 0x08AECBB4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECBB4u) goto L_08AECBB4;
    return;
L_08AECBB4:
    ctx.set_gpr(31, 0x08AECBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECBBCu) goto L_08AECBBC;
    return;
L_08AECBBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x08AECBD0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECBD0u) goto L_08AECBD0;
    return;
L_08AECBD0:
    ctx.set_gpr(31, 0x08AECBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECBD8u) goto L_08AECBD8;
    return;
L_08AECBD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16920u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECBF8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(62));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECBF8u) goto L_08AECBF8;
    return;
L_08AECBF8:
    ctx.set_gpr(31, 0x08AECC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC00u) goto L_08AECC00;
    return;
L_08AECC00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17152u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECC20u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(63));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECC20u) goto L_08AECC20;
    return;
L_08AECC20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AECC78;
      }
      goto L_08AECC30;
    }
L_08AECC30:
    ctx.set_gpr(31, 0x08AECC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC38u) goto L_08AECC38;
    return;
L_08AECC38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECC50u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(62));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC50u) goto L_08AECC50;
    return;
L_08AECC50:
    ctx.set_gpr(31, 0x08AECC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC58u) goto L_08AECC58;
    return;
L_08AECC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECC70u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC70u) goto L_08AECC70;
    return;
L_08AECC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AECCB8;
      }
      goto L_08AECC78;
    }
L_08AECC78:
    ctx.set_gpr(31, 0x08AECC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC80u) goto L_08AECC80;
    return;
L_08AECC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECC98u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(54));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECC98u) goto L_08AECC98;
    return;
L_08AECC98:
    ctx.set_gpr(31, 0x08AECCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECCA0u) goto L_08AECCA0;
    return;
L_08AECCA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECCB8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(62));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECCB8u) goto L_08AECCB8;
    return;
L_08AECCB8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    goto L_08AECCBC;
L_08AECCBC:
    ctx.set_gpr(31, 0x08AECCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 579u, 0x0884A36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECCC4u) goto L_08AECCC4;
    return;
L_08AECCC4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
        goto L_08AED150;
    }
    goto L_08AECCD4;
L_08AECCD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AED0AC;
      }
      goto L_08AECCE0;
    }
L_08AECCE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AED008;
      }
      goto L_08AECCEC;
    }
L_08AECCEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08AECF9C;
    }
    goto L_08AECCF8;
L_08AECCF8:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
        goto L_08AECD08;
    }
    goto L_08AECD00;
L_08AECD00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08AED160;
      }
      goto L_08AECD08;
    }
L_08AECD08:
    ctx.set_gpr(31, 0x08AECD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 586u, 0x0884A3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AECD10u) goto L_08AECD10;
    return;
L_08AECD10:
    ctx.set_gpr(31, 0x08AECD18u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1264), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECD18u) goto L_08AECD18;
    return;
L_08AECD18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECD28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AECD28u) goto L_08AECD28;
    return;
L_08AECD28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AECD70;
      }
      goto L_08AECD34;
    }
L_08AECD34:
    ctx.set_gpr(31, 0x08AECD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECD3Cu) goto L_08AECD3C;
    return;
L_08AECD3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17070u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08AECD70u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AECD70u) goto L_08AECD70;
    return;
L_08AECD70:
    ctx.set_gpr(31, 0x08AECD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECD78u) goto L_08AECD78;
    return;
L_08AECD78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECD88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AECD88u) goto L_08AECD88;
    return;
L_08AECD88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AECDD0;
      }
      goto L_08AECD94;
    }
L_08AECD94:
    ctx.set_gpr(31, 0x08AECD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECD9Cu) goto L_08AECD9C;
    return;
L_08AECD9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17150u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17070u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(31, 0x08AECDD0u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08AECDD0u) goto L_08AECDD0;
    return;
L_08AECDD0:
    ctx.set_gpr(31, 0x08AECDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECDD8u) goto L_08AECDD8;
    return;
L_08AECDD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AECDF0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 256u, 0x08A7D144u>(ctx, &aot_mem) && ctx.pc == 0x08AECDF0u) goto L_08AECDF0;
    return;
L_08AECDF0:
    ctx.set_gpr(31, 0x08AECDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECDF8u) goto L_08AECDF8;
    return;
L_08AECDF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECE14u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECE14u) goto L_08AECE14;
    return;
L_08AECE14:
    ctx.set_gpr(31, 0x08AECE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECE1Cu) goto L_08AECE1C;
    return;
L_08AECE1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECE38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECE38u) goto L_08AECE38;
    return;
L_08AECE38:
    ctx.set_gpr(31, 0x08AECE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECE40u) goto L_08AECE40;
    return;
L_08AECE40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17032u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECE60u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECE60u) goto L_08AECE60;
    return;
L_08AECE60:
    ctx.set_gpr(31, 0x08AECE68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECE68u) goto L_08AECE68;
    return;
L_08AECE68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17194u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17032u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECE88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AECE88u) goto L_08AECE88;
    return;
L_08AECE88:
    ctx.set_gpr(31, 0x08AECE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECE90u) goto L_08AECE90;
    return;
L_08AECE90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECEA8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECEA8u) goto L_08AECEA8;
    return;
L_08AECEA8:
    ctx.set_gpr(31, 0x08AECEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECEB0u) goto L_08AECEB0;
    return;
L_08AECEB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AECEC8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AECEC8u) goto L_08AECEC8;
    return;
L_08AECEC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1600));
        goto L_08AECF14;
    }
    goto L_08AECED4;
L_08AECED4:
    ctx.set_gpr(31, 0x08AECEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECEDCu) goto L_08AECEDC;
    return;
L_08AECEDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AECEF0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECEF0u) goto L_08AECEF0;
    return;
L_08AECEF0:
    ctx.set_gpr(31, 0x08AECEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECEF8u) goto L_08AECEF8;
    return;
L_08AECEF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AECF0Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECF0Cu) goto L_08AECF0C;
    return;
L_08AECF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED15C;
      }
      goto L_08AECF14;
    }
L_08AECF14:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AECF5C;
      }
      goto L_08AECF1C;
    }
L_08AECF1C:
    ctx.set_gpr(31, 0x08AECF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECF24u) goto L_08AECF24;
    return;
L_08AECF24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AECF38u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECF38u) goto L_08AECF38;
    return;
L_08AECF38:
    ctx.set_gpr(31, 0x08AECF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECF40u) goto L_08AECF40;
    return;
L_08AECF40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AECF54u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECF54u) goto L_08AECF54;
    return;
L_08AECF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED15C;
      }
      goto L_08AECF5C;
    }
L_08AECF5C:
    ctx.set_gpr(31, 0x08AECF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECF64u) goto L_08AECF64;
    return;
L_08AECF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AECF78u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECF78u) goto L_08AECF78;
    return;
L_08AECF78:
    ctx.set_gpr(31, 0x08AECF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECF80u) goto L_08AECF80;
    return;
L_08AECF80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AECF94u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECF94u) goto L_08AECF94;
    return;
L_08AECF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED15C;
      }
      goto L_08AECF9C;
    }
L_08AECF9C:
    ctx.set_gpr(31, 0x08AECFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECFA4u) goto L_08AECFA4;
    return;
L_08AECFA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AECFB8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECFB8u) goto L_08AECFB8;
    return;
L_08AECFB8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AECF9C;
      }
      goto L_08AECFC8;
    }
L_08AECFC8:
    ctx.set_gpr(31, 0x08AECFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECFD0u) goto L_08AECFD0;
    return;
L_08AECFD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    ctx.set_gpr(31, 0x08AECFE4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AECFE4u) goto L_08AECFE4;
    return;
L_08AECFE4:
    ctx.set_gpr(31, 0x08AECFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AECFECu) goto L_08AECFEC;
    return;
L_08AECFEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    ctx.set_gpr(31, 0x08AED000u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED000u) goto L_08AED000;
    return;
L_08AED000:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1264), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AED15C;
      }
      goto L_08AED008;
    }
L_08AED008:
    ctx.set_gpr(31, 0x08AED010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AED010u) goto L_08AED010;
    return;
L_08AED010:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32516));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AED02Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AED02Cu) goto L_08AED02C;
    return;
L_08AED02C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AED038u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08AEF474;
L_08AED038:
    ctx.set_gpr(31, 0x08AED040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED040u) goto L_08AED040;
    return;
L_08AED040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x08AED054u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED054u) goto L_08AED054;
    return;
L_08AED054:
    ctx.set_gpr(31, 0x08AED05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED05Cu) goto L_08AED05C;
    return;
L_08AED05C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AED070u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED070u) goto L_08AED070;
    return;
L_08AED070:
    ctx.set_gpr(31, 0x08AED078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED078u) goto L_08AED078;
    return;
L_08AED078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AED08Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED08Cu) goto L_08AED08C;
    return;
L_08AED08C:
    ctx.set_gpr(31, 0x08AED094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AED094u) goto L_08AED094;
    return;
L_08AED094:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED0A4u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AED0A4u) goto L_08AED0A4;
    return;
L_08AED0A4:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1264), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AED15C;
      }
      goto L_08AED0AC;
    }
L_08AED0AC:
    ctx.set_gpr(31, 0x08AED0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08AED0B4u) goto L_08AED0B4;
    return;
L_08AED0B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32516));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08AED0D0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08AED0D0u) goto L_08AED0D0;
    return;
L_08AED0D0:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AED0DCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEF474;
L_08AED0DC:
    ctx.set_gpr(31, 0x08AED0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED0E4u) goto L_08AED0E4;
    return;
L_08AED0E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x08AED0F8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED0F8u) goto L_08AED0F8;
    return;
L_08AED0F8:
    ctx.set_gpr(31, 0x08AED100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED100u) goto L_08AED100;
    return;
L_08AED100:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AED114u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED114u) goto L_08AED114;
    return;
L_08AED114:
    ctx.set_gpr(31, 0x08AED11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED11Cu) goto L_08AED11C;
    return;
L_08AED11C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AED130u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED130u) goto L_08AED130;
    return;
L_08AED130:
    ctx.set_gpr(31, 0x08AED138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AED138u) goto L_08AED138;
    return;
L_08AED138:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED148u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AED148u) goto L_08AED148;
    return;
L_08AED148:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1264), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AED15C;
      }
      goto L_08AED150;
    }
L_08AED150:
    ctx.set_gpr(31, 0x08AED158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 586u, 0x0884A3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AED158u) goto L_08AED158;
    return;
L_08AED158:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1264), static_cast<std::uint8_t>(0u));
    goto L_08AED15C;
L_08AED15C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    goto L_08AED160;
L_08AED160:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AED680;
      }
      goto L_08AED16C;
    }
L_08AED16C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
        goto L_08AED430;
    }
    goto L_08AED178;
L_08AED178:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
        goto L_08AED1E0;
    }
    goto L_08AED184;
L_08AED184:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
        goto L_08AED1D0;
    }
    goto L_08AED190;
L_08AED190:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
        goto L_08AED1A0;
    }
    goto L_08AED198;
L_08AED198:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08AED6A4;
      }
      goto L_08AED1A0;
    }
L_08AED1A0:
    ctx.set_gpr(31, 0x08AED1A8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1220), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AED1A8u) goto L_08AED1A8;
    return;
L_08AED1A8:
    ctx.set_gpr(31, 0x08AED1B0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AED1B0u) goto L_08AED1B0;
    return;
L_08AED1B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08AED1C8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AED1C8u) goto L_08AED1C8;
    return;
L_08AED1C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED6A0;
      }
      goto L_08AED1D0;
    }
L_08AED1D0:
    ctx.set_gpr(31, 0x08AED1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 586u, 0x0884A3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AED1D8u) goto L_08AED1D8;
    return;
L_08AED1D8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1600), 0u);
      if (branch_taken) {
          goto L_08AED6A0;
      }
      goto L_08AED1E0;
    }
L_08AED1E0:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-39));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
        goto L_08AED298;
    }
    goto L_08AED200;
L_08AED200:
    ctx.set_gpr(31, 0x08AED208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED208u) goto L_08AED208;
    return;
L_08AED208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED220u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED220u) goto L_08AED220;
    return;
L_08AED220:
    ctx.set_gpr(31, 0x08AED228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED228u) goto L_08AED228;
    return;
L_08AED228:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED240u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED240u) goto L_08AED240;
    return;
L_08AED240:
    ctx.set_gpr(31, 0x08AED248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED248u) goto L_08AED248;
    return;
L_08AED248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED268u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED268u) goto L_08AED268;
    return;
L_08AED268:
    ctx.set_gpr(31, 0x08AED270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED270u) goto L_08AED270;
    return;
L_08AED270:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED290u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED290u) goto L_08AED290;
    return;
L_08AED290:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AED3CC;
      }
      goto L_08AED298;
    }
L_08AED298:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AED338;
      }
      goto L_08AED2A0;
    }
L_08AED2A0:
    ctx.set_gpr(31, 0x08AED2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED2A8u) goto L_08AED2A8;
    return;
L_08AED2A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED2C0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED2C0u) goto L_08AED2C0;
    return;
L_08AED2C0:
    ctx.set_gpr(31, 0x08AED2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED2C8u) goto L_08AED2C8;
    return;
L_08AED2C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED2E0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED2E0u) goto L_08AED2E0;
    return;
L_08AED2E0:
    ctx.set_gpr(31, 0x08AED2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED2E8u) goto L_08AED2E8;
    return;
L_08AED2E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED308u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED308u) goto L_08AED308;
    return;
L_08AED308:
    ctx.set_gpr(31, 0x08AED310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED310u) goto L_08AED310;
    return;
L_08AED310:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED330u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED330u) goto L_08AED330;
    return;
L_08AED330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED3C8;
      }
      goto L_08AED338;
    }
L_08AED338:
    ctx.set_gpr(31, 0x08AED340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED340u) goto L_08AED340;
    return;
L_08AED340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED358u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED358u) goto L_08AED358;
    return;
L_08AED358:
    ctx.set_gpr(31, 0x08AED360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED360u) goto L_08AED360;
    return;
L_08AED360:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED378u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED378u) goto L_08AED378;
    return;
L_08AED378:
    ctx.set_gpr(31, 0x08AED380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED380u) goto L_08AED380;
    return;
L_08AED380:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED3A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED3A0u) goto L_08AED3A0;
    return;
L_08AED3A0:
    ctx.set_gpr(31, 0x08AED3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED3A8u) goto L_08AED3A8;
    return;
L_08AED3A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED3C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED3C8u) goto L_08AED3C8;
    return;
L_08AED3C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AED3CC;
L_08AED3CC:
    ctx.set_gpr(31, 0x08AED3D4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AED3D4u) goto L_08AED3D4;
    return;
L_08AED3D4:
    ctx.set_gpr(31, 0x08AED3DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AED3DCu) goto L_08AED3DC;
    return;
L_08AED3DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(51));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(50));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AED428u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(43));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AED428u) goto L_08AED428;
    return;
L_08AED428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED6A0;
      }
      goto L_08AED430;
    }
L_08AED430:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-39));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
        goto L_08AED4E8;
    }
    goto L_08AED450;
L_08AED450:
    ctx.set_gpr(31, 0x08AED458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED458u) goto L_08AED458;
    return;
L_08AED458:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED470u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED470u) goto L_08AED470;
    return;
L_08AED470:
    ctx.set_gpr(31, 0x08AED478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED478u) goto L_08AED478;
    return;
L_08AED478:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED490u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED490u) goto L_08AED490;
    return;
L_08AED490:
    ctx.set_gpr(31, 0x08AED498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED498u) goto L_08AED498;
    return;
L_08AED498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED4B8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED4B8u) goto L_08AED4B8;
    return;
L_08AED4B8:
    ctx.set_gpr(31, 0x08AED4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED4C0u) goto L_08AED4C0;
    return;
L_08AED4C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED4E0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED4E0u) goto L_08AED4E0;
    return;
L_08AED4E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AED61C;
      }
      goto L_08AED4E8;
    }
L_08AED4E8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AED588;
      }
      goto L_08AED4F0;
    }
L_08AED4F0:
    ctx.set_gpr(31, 0x08AED4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED4F8u) goto L_08AED4F8;
    return;
L_08AED4F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED510u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED510u) goto L_08AED510;
    return;
L_08AED510:
    ctx.set_gpr(31, 0x08AED518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED518u) goto L_08AED518;
    return;
L_08AED518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED530u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED530u) goto L_08AED530;
    return;
L_08AED530:
    ctx.set_gpr(31, 0x08AED538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED538u) goto L_08AED538;
    return;
L_08AED538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED558u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED558u) goto L_08AED558;
    return;
L_08AED558:
    ctx.set_gpr(31, 0x08AED560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED560u) goto L_08AED560;
    return;
L_08AED560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED580u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED580u) goto L_08AED580;
    return;
L_08AED580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED618;
      }
      goto L_08AED588;
    }
L_08AED588:
    ctx.set_gpr(31, 0x08AED590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED590u) goto L_08AED590;
    return;
L_08AED590:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED5A8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED5A8u) goto L_08AED5A8;
    return;
L_08AED5A8:
    ctx.set_gpr(31, 0x08AED5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED5B0u) goto L_08AED5B0;
    return;
L_08AED5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AED5C8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AED5C8u) goto L_08AED5C8;
    return;
L_08AED5C8:
    ctx.set_gpr(31, 0x08AED5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED5D0u) goto L_08AED5D0;
    return;
L_08AED5D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED5F0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED5F0u) goto L_08AED5F0;
    return;
L_08AED5F0:
    ctx.set_gpr(31, 0x08AED5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED5F8u) goto L_08AED5F8;
    return;
L_08AED5F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AED618u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AED618u) goto L_08AED618;
    return;
L_08AED618:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08AED61C;
L_08AED61C:
    ctx.set_gpr(31, 0x08AED624u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AED624u) goto L_08AED624;
    return;
L_08AED624:
    ctx.set_gpr(31, 0x08AED62Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AED62Cu) goto L_08AED62C;
    return;
L_08AED62C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(18));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(51));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(49));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(50));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(42));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08AED678u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(43));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AED678u) goto L_08AED678;
    return;
L_08AED678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED6A0;
      }
      goto L_08AED680;
    }
L_08AED680:
    ctx.set_gpr(31, 0x08AED688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AED688u) goto L_08AED688;
    return;
L_08AED688:
    ctx.set_gpr(31, 0x08AED690u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AED690u) goto L_08AED690;
    return;
L_08AED690:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AED6A0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08AED6A0u) goto L_08AED6A0;
    return;
L_08AED6A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08AED6A4;
L_08AED6A4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AED6B0;
    }
L_08AED6B0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08AED6F0;
    }
    goto L_08AED6BC;
L_08AED6BC:
    ctx.set_gpr(31, 0x08AED6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AED6C4u) goto L_08AED6C4;
    return;
L_08AED6C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED6D0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AED6D0u) goto L_08AED6D0;
    return;
L_08AED6D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AED6D8;
    }
L_08AED6D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AED6F0;
    }
L_08AED6F0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AED700;
    }
L_08AED700:
    ctx.set_gpr(31, 0x08AED708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AED708u) goto L_08AED708;
    return;
L_08AED708:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED714u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AED714u) goto L_08AED714;
    return;
L_08AED714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED754;
      }
      goto L_08AED71C;
    }
L_08AED71C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1488)));
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
        goto L_08AED748;
    }
    goto L_08AED738;
L_08AED738:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AED7A4;
      }
      goto L_08AED748;
    }
L_08AED748:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AED7A4;
      }
      goto L_08AED754;
    }
L_08AED754:
    ctx.set_gpr(31, 0x08AED75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AED75Cu) goto L_08AED75C;
    return;
L_08AED75C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED768u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AED768u) goto L_08AED768;
    return;
L_08AED768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED7A4;
      }
      goto L_08AED770;
    }
L_08AED770:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1488)));
    ctx.set_gpr(2, 16544u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
        goto L_08AED79C;
    }
    goto L_08AED78C;
L_08AED78C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AED7A4;
      }
      goto L_08AED79C;
    }
L_08AED79C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
    goto L_08AED7A4;
L_08AED7A4:
    ctx.set_gpr(31, 0x08AED7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AED7ACu) goto L_08AED7AC;
    return;
L_08AED7AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED7B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED7B8u) goto L_08AED7B8;
    return;
L_08AED7B8:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1488)));
        goto L_08AED7E0;
    }
    goto L_08AED7C0;
L_08AED7C0:
    ctx.set_gpr(31, 0x08AED7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AED7C8u) goto L_08AED7C8;
    return;
L_08AED7C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED7D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 904u, 0x0884B60Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED7D4u) goto L_08AED7D4;
    return;
L_08AED7D4:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1488), 0u);
        goto L_08AED7E8;
    }
    goto L_08AED7DC;
L_08AED7DC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1488)));
    goto L_08AED7E0;
L_08AED7E0:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AED7E8;
L_08AED7E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AED7F8;
      }
      goto L_08AED7F4;
    }
L_08AED7F4:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08AED7F8;
L_08AED7F8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
        goto L_08AED80C;
    }
    goto L_08AED80C;
L_08AED80C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AED8FC;
      }
      goto L_08AED814;
    }
L_08AED814:
    ctx.set_gpr(31, 0x08AED81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED81Cu) goto L_08AED81C;
    return;
L_08AED81C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AED830u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED830u) goto L_08AED830;
    return;
L_08AED830:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1600));
        goto L_08AED87C;
    }
    goto L_08AED83C;
L_08AED83C:
    ctx.set_gpr(31, 0x08AED844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED844u) goto L_08AED844;
    return;
L_08AED844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AED858u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED858u) goto L_08AED858;
    return;
L_08AED858:
    ctx.set_gpr(31, 0x08AED860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED860u) goto L_08AED860;
    return;
L_08AED860:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AED874u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED874u) goto L_08AED874;
    return;
L_08AED874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED8FC;
      }
      goto L_08AED87C;
    }
L_08AED87C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AED8C4;
      }
      goto L_08AED884;
    }
L_08AED884:
    ctx.set_gpr(31, 0x08AED88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED88Cu) goto L_08AED88C;
    return;
L_08AED88C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AED8A0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED8A0u) goto L_08AED8A0;
    return;
L_08AED8A0:
    ctx.set_gpr(31, 0x08AED8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED8A8u) goto L_08AED8A8;
    return;
L_08AED8A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AED8BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED8BCu) goto L_08AED8BC;
    return;
L_08AED8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED8FC;
      }
      goto L_08AED8C4;
    }
L_08AED8C4:
    ctx.set_gpr(31, 0x08AED8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED8CCu) goto L_08AED8CC;
    return;
L_08AED8CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AED8E0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED8E0u) goto L_08AED8E0;
    return;
L_08AED8E0:
    ctx.set_gpr(31, 0x08AED8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED8E8u) goto L_08AED8E8;
    return;
L_08AED8E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AED8FCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED8FCu) goto L_08AED8FC;
    return;
L_08AED8FC:
    ctx.set_gpr(31, 0x08AED904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AED904u) goto L_08AED904;
    return;
L_08AED904:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED910u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AED910u) goto L_08AED910;
    return;
L_08AED910:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AED984;
      }
      goto L_08AED918;
    }
L_08AED918:
    ctx.set_gpr(31, 0x08AED920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED920u) goto L_08AED920;
    return;
L_08AED920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AED934u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED934u) goto L_08AED934;
    return;
L_08AED934:
    ctx.set_gpr(31, 0x08AED93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED93Cu) goto L_08AED93C;
    return;
L_08AED93C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AED950u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED950u) goto L_08AED950;
    return;
L_08AED950:
    ctx.set_gpr(31, 0x08AED958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED958u) goto L_08AED958;
    return;
L_08AED958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AED96Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED96Cu) goto L_08AED96C;
    return;
L_08AED96C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AED978u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEFD30;
L_08AED978:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AED984;
    }
L_08AED984:
    ctx.set_gpr(31, 0x08AED98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AED98Cu) goto L_08AED98C;
    return;
L_08AED98C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AED998u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AED998u) goto L_08AED998;
    return;
L_08AED998:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AEDA14;
    }
    goto L_08AED9A0;
L_08AED9A0:
    ctx.set_gpr(31, 0x08AED9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED9A8u) goto L_08AED9A8;
    return;
L_08AED9A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AED9BCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED9BCu) goto L_08AED9BC;
    return;
L_08AED9BC:
    ctx.set_gpr(31, 0x08AED9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AED9C4u) goto L_08AED9C4;
    return;
L_08AED9C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AED9D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED9D8u) goto L_08AED9D8;
    return;
L_08AED9D8:
    ctx.set_gpr(31, 0x08AED9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED9E0u) goto L_08AED9E0;
    return;
L_08AED9E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AED9F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AED9F4u) goto L_08AED9F4;
    return;
L_08AED9F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEDA00u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEFD30;
L_08AEDA00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1220)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1216), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AEF444;
      }
      goto L_08AEDA14;
    }
L_08AEDA14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEDA28u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA28u) goto L_08AEDA28;
    return;
L_08AEDA28:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AEDA40u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA40u) goto L_08AEDA40;
    return;
L_08AEDA40:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x08AEDA5Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8672));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA5Cu) goto L_08AEDA5C;
    return;
L_08AEDA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEDA64;
    }
L_08AEDA64:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEDA70u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08AEF770;
L_08AEDA70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEDA78;
    }
L_08AEDA78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEDA84;
    }
L_08AEDA84:
    ctx.set_gpr(31, 0x08AEDA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA8Cu) goto L_08AEDA8C;
    return;
L_08AEDA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDA98u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDA98u) goto L_08AEDA98;
    return;
L_08AEDA98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDC28;
      }
      goto L_08AEDAA0;
    }
L_08AEDAA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDB68;
      }
      goto L_08AEDAAC;
    }
L_08AEDAAC:
    ctx.set_gpr(31, 0x08AEDAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAB4u) goto L_08AEDAB4;
    return;
L_08AEDAB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AEDAC8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAC8u) goto L_08AEDAC8;
    return;
L_08AEDAC8:
    ctx.set_gpr(31, 0x08AEDAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAD0u) goto L_08AEDAD0;
    return;
L_08AEDAD0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDADCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEDADCu) goto L_08AEDADC;
    return;
L_08AEDADC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AEDAE8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(428));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAE8u) goto L_08AEDAE8;
    return;
L_08AEDAE8:
    ctx.set_gpr(31, 0x08AEDAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAF0u) goto L_08AEDAF0;
    return;
L_08AEDAF0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDAFCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEDAFCu) goto L_08AEDAFC;
    return;
L_08AEDAFC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(31, 0x08AEDB08u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB08u) goto L_08AEDB08;
    return;
L_08AEDB08:
    ctx.set_gpr(31, 0x08AEDB10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB10u) goto L_08AEDB10;
    return;
L_08AEDB10:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDB1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 490u, 0x08849E28u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB1Cu) goto L_08AEDB1C;
    return;
L_08AEDB1C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    ctx.set_gpr(31, 0x08AEDB28u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB28u) goto L_08AEDB28;
    return;
L_08AEDB28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEDB3Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB3Cu) goto L_08AEDB3C;
    return;
L_08AEDB3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEDB54u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB54u) goto L_08AEDB54;
    return;
L_08AEDB54:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(960));
    ctx.set_gpr(31, 0x08AEDB60u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 29u, 0x08AE8208u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB60u) goto L_08AEDB60;
    return;
L_08AEDB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDC04;
      }
      goto L_08AEDB68;
    }
L_08AEDB68:
    ctx.set_gpr(31, 0x08AEDB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB70u) goto L_08AEDB70;
    return;
L_08AEDB70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AEDB84u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB84u) goto L_08AEDB84;
    return;
L_08AEDB84:
    ctx.set_gpr(31, 0x08AEDB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB8Cu) goto L_08AEDB8C;
    return;
L_08AEDB8C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDB98u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEDB98u) goto L_08AEDB98;
    return;
L_08AEDB98:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1452));
    ctx.set_gpr(31, 0x08AEDBA4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBA4u) goto L_08AEDBA4;
    return;
L_08AEDBA4:
    ctx.set_gpr(31, 0x08AEDBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBACu) goto L_08AEDBAC;
    return;
L_08AEDBAC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDBB8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBB8u) goto L_08AEDBB8;
    return;
L_08AEDBB8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1464));
    ctx.set_gpr(31, 0x08AEDBC4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBC4u) goto L_08AEDBC4;
    return;
L_08AEDBC4:
    ctx.set_gpr(31, 0x08AEDBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBCCu) goto L_08AEDBCC;
    return;
L_08AEDBCC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDBD8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 490u, 0x08849E28u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBD8u) goto L_08AEDBD8;
    return;
L_08AEDBD8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1476));
    ctx.set_gpr(31, 0x08AEDBE4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDBE4u) goto L_08AEDBE4;
    return;
L_08AEDBE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEDBF0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEFD30;
L_08AEDBF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(0u));
    goto L_08AEDC04;
L_08AEDC04:
    ctx.set_gpr(31, 0x08AEDC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDC0Cu) goto L_08AEDC0C;
    return;
L_08AEDC0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDC20u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDC20u) goto L_08AEDC20;
    return;
L_08AEDC20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AEDF90;
      }
      goto L_08AEDC28;
    }
L_08AEDC28:
    ctx.set_gpr(31, 0x08AEDC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDC30u) goto L_08AEDC30;
    return;
L_08AEDC30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDC3Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDC3Cu) goto L_08AEDC3C;
    return;
L_08AEDC3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDCF4;
      }
      goto L_08AEDC44;
    }
L_08AEDC44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AEDC9C;
    }
    goto L_08AEDC50;
L_08AEDC50:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEDC5Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEFD30;
L_08AEDC5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(704));
    ctx.set_gpr(31, 0x08AEDC78u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(0u));
    goto L_08AEFDF8;
L_08AEDC78:
    ctx.set_gpr(31, 0x08AEDC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDC80u) goto L_08AEDC80;
    return;
L_08AEDC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDC94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDC94u) goto L_08AEDC94;
    return;
L_08AEDC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDC9C;
    }
L_08AEDC9C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEDCA8u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(960));
    goto L_08AEFDF8;
L_08AEDCA8:
    ctx.set_gpr(31, 0x08AEDCB0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDCB0u) goto L_08AEDCB0;
    return;
L_08AEDCB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDCC4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDCC4u) goto L_08AEDCC4;
    return;
L_08AEDCC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEDCD4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDCD4u) goto L_08AEDCD4;
    return;
L_08AEDCD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEDCECu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(55));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDCECu) goto L_08AEDCEC;
    return;
L_08AEDCEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDCF4;
    }
L_08AEDCF4:
    ctx.set_gpr(31, 0x08AEDCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDCFCu) goto L_08AEDCFC;
    return;
L_08AEDCFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDD08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDD08u) goto L_08AEDD08;
    return;
L_08AEDD08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDDEC;
      }
      goto L_08AEDD10;
    }
L_08AEDD10:
    ctx.set_gpr(31, 0x08AEDD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDD18u) goto L_08AEDD18;
    return;
L_08AEDD18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDD2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDD2Cu) goto L_08AEDD2C;
    return;
L_08AEDD2C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDD60;
      }
      goto L_08AEDD38;
    }
L_08AEDD38:
    ctx.set_gpr(31, 0x08AEDD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDD40u) goto L_08AEDD40;
    return;
L_08AEDD40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEDD58u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(55));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDD58u) goto L_08AEDD58;
    return;
L_08AEDD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDD80;
      }
      goto L_08AEDD60;
    }
L_08AEDD60:
    ctx.set_gpr(31, 0x08AEDD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDD68u) goto L_08AEDD68;
    return;
L_08AEDD68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEDD80u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDD80u) goto L_08AEDD80;
    return;
L_08AEDD80:
    ctx.set_gpr(31, 0x08AEDD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDD88u) goto L_08AEDD88;
    return;
L_08AEDD88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEDDA8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEDDA8u) goto L_08AEDDA8;
    return;
L_08AEDDA8:
    ctx.set_gpr(31, 0x08AEDDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEDDB0u) goto L_08AEDDB0;
    return;
L_08AEDDB0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AEDDD0u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDDD0u) goto L_08AEDDD0;
    return;
L_08AEDDD0:
    ctx.set_gpr(2, 16320u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDDEC;
    }
L_08AEDDEC:
    ctx.set_gpr(31, 0x08AEDDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDDF4u) goto L_08AEDDF4;
    return;
L_08AEDDF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDE00u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE00u) goto L_08AEDE00;
    return;
L_08AEDE00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE3C;
      }
      goto L_08AEDE08;
    }
L_08AEDE08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEDE18u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(704));
    goto L_08AEFDF8;
L_08AEDE18:
    ctx.set_gpr(31, 0x08AEDE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDE20u) goto L_08AEDE20;
    return;
L_08AEDE20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDE34u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDE34u) goto L_08AEDE34;
    return;
L_08AEDE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDE3C;
    }
L_08AEDE3C:
    ctx.set_gpr(31, 0x08AEDE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE44u) goto L_08AEDE44;
    return;
L_08AEDE44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDE50u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE50u) goto L_08AEDE50;
    return;
L_08AEDE50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDE7C;
      }
      goto L_08AEDE58;
    }
L_08AEDE58:
    ctx.set_gpr(31, 0x08AEDE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDE60u) goto L_08AEDE60;
    return;
L_08AEDE60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDE74u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDE74u) goto L_08AEDE74;
    return;
L_08AEDE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDE7C;
    }
L_08AEDE7C:
    ctx.set_gpr(31, 0x08AEDE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE84u) goto L_08AEDE84;
    return;
L_08AEDE84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDE90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDE90u) goto L_08AEDE90;
    return;
L_08AEDE90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF48;
      }
      goto L_08AEDE98;
    }
L_08AEDE98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDEA4;
    }
L_08AEDEA4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1761)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x08AEDEB8u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1761), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDEB8u) goto L_08AEDEB8;
    return;
L_08AEDEB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDECCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDECCu) goto L_08AEDECC;
    return;
L_08AEDECC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1761)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AEDEF8;
    }
    goto L_08AEDED8;
L_08AEDED8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDEF0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDEF0u) goto L_08AEDEF0;
    return;
L_08AEDEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF0C;
      }
      goto L_08AEDEF8;
    }
L_08AEDEF8:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDF0Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEDF0Cu) goto L_08AEDF0C;
    return;
L_08AEDF0C:
    ctx.set_gpr(31, 0x08AEDF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDF14u) goto L_08AEDF14;
    return;
L_08AEDF14:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEDF40u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEDF40u) goto L_08AEDF40;
    return;
L_08AEDF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDF48;
    }
L_08AEDF48:
    ctx.set_gpr(31, 0x08AEDF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDF50u) goto L_08AEDF50;
    return;
L_08AEDF50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDF5Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDF5Cu) goto L_08AEDF5C;
    return;
L_08AEDF5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEDF8C;
      }
      goto L_08AEDF64;
    }
L_08AEDF64:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1763)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x08AEDF78u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1763), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDF78u) goto L_08AEDF78;
    return;
L_08AEDF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEDF8Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEDF8Cu) goto L_08AEDF8C;
    return;
L_08AEDF8C:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08AEDF90;
L_08AEDF90:
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEDFA0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 505u, 0x08849F28u>(ctx, &aot_mem) && ctx.pc == 0x08AEDFA0u) goto L_08AEDFA0;
    return;
L_08AEDFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEDFA8;
    }
L_08AEDFA8:
    ctx.set_gpr(31, 0x08AEDFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEDFB0u) goto L_08AEDFB0;
    return;
L_08AEDFB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEDFBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEDFBCu) goto L_08AEDFBC;
    return;
L_08AEDFBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE150;
      }
      goto L_08AEDFC4;
    }
L_08AEDFC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE08C;
      }
      goto L_08AEDFD0;
    }
L_08AEDFD0:
    ctx.set_gpr(31, 0x08AEDFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDFD8u) goto L_08AEDFD8;
    return;
L_08AEDFD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AEDFECu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AEDFECu) goto L_08AEDFEC;
    return;
L_08AEDFEC:
    ctx.set_gpr(31, 0x08AEDFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEDFF4u) goto L_08AEDFF4;
    return;
L_08AEDFF4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE000u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEE000u) goto L_08AEE000;
    return;
L_08AEE000:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AEE00Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE00Cu) goto L_08AEE00C;
    return;
L_08AEE00C:
    ctx.set_gpr(31, 0x08AEE014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE014u) goto L_08AEE014;
    return;
L_08AEE014:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE020u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEE020u) goto L_08AEE020;
    return;
L_08AEE020:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1428));
    ctx.set_gpr(31, 0x08AEE02Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE02Cu) goto L_08AEE02C;
    return;
L_08AEE02C:
    ctx.set_gpr(31, 0x08AEE034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE034u) goto L_08AEE034;
    return;
L_08AEE034:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE040u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 490u, 0x08849E28u>(ctx, &aot_mem) && ctx.pc == 0x08AEE040u) goto L_08AEE040;
    return;
L_08AEE040:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    ctx.set_gpr(31, 0x08AEE04Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE04Cu) goto L_08AEE04C;
    return;
L_08AEE04C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEE060u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE060u) goto L_08AEE060;
    return;
L_08AEE060:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEE078u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE078u) goto L_08AEE078;
    return;
L_08AEE078:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(960));
    ctx.set_gpr(31, 0x08AEE084u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 29u, 0x08AE8208u>(ctx, &aot_mem) && ctx.pc == 0x08AEE084u) goto L_08AEE084;
    return;
L_08AEE084:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
      if (branch_taken) {
          goto L_08AEE12C;
      }
      goto L_08AEE08C;
    }
L_08AEE08C:
    ctx.set_gpr(31, 0x08AEE094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE094u) goto L_08AEE094;
    return;
L_08AEE094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08AEE0A8u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 459u, 0x08849C34u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0A8u) goto L_08AEE0A8;
    return;
L_08AEE0A8:
    ctx.set_gpr(31, 0x08AEE0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0B0u) goto L_08AEE0B0;
    return;
L_08AEE0B0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE0BCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0BCu) goto L_08AEE0BC;
    return;
L_08AEE0BC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1452));
    ctx.set_gpr(31, 0x08AEE0C8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0C8u) goto L_08AEE0C8;
    return;
L_08AEE0C8:
    ctx.set_gpr(31, 0x08AEE0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0D0u) goto L_08AEE0D0;
    return;
L_08AEE0D0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE0DCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0DCu) goto L_08AEE0DC;
    return;
L_08AEE0DC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1464));
    ctx.set_gpr(31, 0x08AEE0E8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0E8u) goto L_08AEE0E8;
    return;
L_08AEE0E8:
    ctx.set_gpr(31, 0x08AEE0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0F0u) goto L_08AEE0F0;
    return;
L_08AEE0F0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE0FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 490u, 0x08849E28u>(ctx, &aot_mem) && ctx.pc == 0x08AEE0FCu) goto L_08AEE0FC;
    return;
L_08AEE0FC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1476));
    ctx.set_gpr(31, 0x08AEE108u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE108u) goto L_08AEE108;
    return;
L_08AEE108:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEE114u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEFD30;
L_08AEE114:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
    goto L_08AEE12C;
L_08AEE12C:
    ctx.set_gpr(31, 0x08AEE134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE134u) goto L_08AEE134;
    return;
L_08AEE134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE148u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE148u) goto L_08AEE148;
    return;
L_08AEE148:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08AEE4B4;
      }
      goto L_08AEE150;
    }
L_08AEE150:
    ctx.set_gpr(31, 0x08AEE158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE158u) goto L_08AEE158;
    return;
L_08AEE158:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE164u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE164u) goto L_08AEE164;
    return;
L_08AEE164:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE218;
      }
      goto L_08AEE16C;
    }
L_08AEE16C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AEE1C0;
    }
    goto L_08AEE178;
L_08AEE178:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEE184u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08AEFD30;
L_08AEE184:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEE19Cu);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(704));
    goto L_08AEFDF8;
L_08AEE19C:
    ctx.set_gpr(31, 0x08AEE1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE1A4u) goto L_08AEE1A4;
    return;
L_08AEE1A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE1B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE1B8u) goto L_08AEE1B8;
    return;
L_08AEE1B8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1762), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE1C0;
    }
L_08AEE1C0:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEE1CCu);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(960));
    goto L_08AEFDF8;
L_08AEE1CC:
    ctx.set_gpr(31, 0x08AEE1D4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE1D4u) goto L_08AEE1D4;
    return;
L_08AEE1D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE1E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE1E8u) goto L_08AEE1E8;
    return;
L_08AEE1E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08AEE1F8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE1F8u) goto L_08AEE1F8;
    return;
L_08AEE1F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEE210u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(55));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE210u) goto L_08AEE210;
    return;
L_08AEE210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE218;
    }
L_08AEE218:
    ctx.set_gpr(31, 0x08AEE220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE220u) goto L_08AEE220;
    return;
L_08AEE220:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE22Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE22Cu) goto L_08AEE22C;
    return;
L_08AEE22C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE310;
      }
      goto L_08AEE234;
    }
L_08AEE234:
    ctx.set_gpr(31, 0x08AEE23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE23Cu) goto L_08AEE23C;
    return;
L_08AEE23C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE250u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE250u) goto L_08AEE250;
    return;
L_08AEE250:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE284;
      }
      goto L_08AEE25C;
    }
L_08AEE25C:
    ctx.set_gpr(31, 0x08AEE264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE264u) goto L_08AEE264;
    return;
L_08AEE264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEE27Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(55));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE27Cu) goto L_08AEE27C;
    return;
L_08AEE27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE2A4;
      }
      goto L_08AEE284;
    }
L_08AEE284:
    ctx.set_gpr(31, 0x08AEE28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE28Cu) goto L_08AEE28C;
    return;
L_08AEE28C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEE2A4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(57));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE2A4u) goto L_08AEE2A4;
    return;
L_08AEE2A4:
    ctx.set_gpr(31, 0x08AEE2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE2ACu) goto L_08AEE2AC;
    return;
L_08AEE2AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE2CCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEE2CCu) goto L_08AEE2CC;
    return;
L_08AEE2CC:
    ctx.set_gpr(31, 0x08AEE2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE2D4u) goto L_08AEE2D4;
    return;
L_08AEE2D4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AEE2F4u);
    ctx.set_gpr(10, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE2F4u) goto L_08AEE2F4;
    return;
L_08AEE2F4:
    ctx.set_gpr(2, 16320u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE310;
    }
L_08AEE310:
    ctx.set_gpr(31, 0x08AEE318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE318u) goto L_08AEE318;
    return;
L_08AEE318:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE324u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE324u) goto L_08AEE324;
    return;
L_08AEE324:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE360;
      }
      goto L_08AEE32C;
    }
L_08AEE32C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEE33Cu);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(704));
    goto L_08AEFDF8;
L_08AEE33C:
    ctx.set_gpr(31, 0x08AEE344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE344u) goto L_08AEE344;
    return;
L_08AEE344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE358u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE358u) goto L_08AEE358;
    return;
L_08AEE358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE360;
    }
L_08AEE360:
    ctx.set_gpr(31, 0x08AEE368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE368u) goto L_08AEE368;
    return;
L_08AEE368:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE374u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE374u) goto L_08AEE374;
    return;
L_08AEE374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE3A0;
      }
      goto L_08AEE37C;
    }
L_08AEE37C:
    ctx.set_gpr(31, 0x08AEE384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE384u) goto L_08AEE384;
    return;
L_08AEE384:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE398u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE398u) goto L_08AEE398;
    return;
L_08AEE398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE3A0;
    }
L_08AEE3A0:
    ctx.set_gpr(31, 0x08AEE3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE3A8u) goto L_08AEE3A8;
    return;
L_08AEE3A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE3B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE3B4u) goto L_08AEE3B4;
    return;
L_08AEE3B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE46C;
      }
      goto L_08AEE3BC;
    }
L_08AEE3BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE3C8;
    }
L_08AEE3C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1761)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x08AEE3DCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1761), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE3DCu) goto L_08AEE3DC;
    return;
L_08AEE3DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE3F0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE3F0u) goto L_08AEE3F0;
    return;
L_08AEE3F0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1761)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08AEE41C;
    }
    goto L_08AEE3FC;
L_08AEE3FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE414u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE414u) goto L_08AEE414;
    return;
L_08AEE414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE430;
      }
      goto L_08AEE41C;
    }
L_08AEE41C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE430u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 373u, 0x08A95BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE430u) goto L_08AEE430;
    return;
L_08AEE430:
    ctx.set_gpr(31, 0x08AEE438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE438u) goto L_08AEE438;
    return;
L_08AEE438:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    ctx.set_gpr(3, 17096u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEE464u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEE464u) goto L_08AEE464;
    return;
L_08AEE464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE46C;
    }
L_08AEE46C:
    ctx.set_gpr(31, 0x08AEE474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE474u) goto L_08AEE474;
    return;
L_08AEE474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE480u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE480u) goto L_08AEE480;
    return;
L_08AEE480:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE4B0;
      }
      goto L_08AEE488;
    }
L_08AEE488:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1763)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, 0x08AEE49Cu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1763), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE49Cu) goto L_08AEE49C;
    return;
L_08AEE49C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE4B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE4B0u) goto L_08AEE4B0;
    return;
L_08AEE4B0:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_08AEE4B4;
L_08AEE4B4:
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEE4C4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 505u, 0x08849F28u>(ctx, &aot_mem) && ctx.pc == 0x08AEE4C4u) goto L_08AEE4C4;
    return;
L_08AEE4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE4CC;
    }
L_08AEE4CC:
    ctx.set_gpr(31, 0x08AEE4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEE4D4u) goto L_08AEE4D4;
    return;
L_08AEE4D4:
    ctx.set_gpr(31, 0x08AEE4DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE4DCu) goto L_08AEE4DC;
    return;
L_08AEE4DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEE4E8u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE4E8u) goto L_08AEE4E8;
    return;
L_08AEE4E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEE4F4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AEE4F4u) goto L_08AEE4F4;
    return;
L_08AEE4F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AEE504u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 287u, 0x08A912FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE504u) goto L_08AEE504;
    return;
L_08AEE504:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(31, 0x08AEE514u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 132u, 0x08A9497Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE514u) goto L_08AEE514;
    return;
L_08AEE514:
    ctx.set_fpr_bits(21, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x08AEE524u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE524u) goto L_08AEE524;
    return;
L_08AEE524:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x08AEE534u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1452));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE534u) goto L_08AEE534;
    return;
L_08AEE534:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08AEE548u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 461u, 0x08A9AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE548u) goto L_08AEE548;
    return;
L_08AEE548:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE554;
    }
L_08AEE554:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AEE56Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8680));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE56Cu) goto L_08AEE56C;
    return;
L_08AEE56C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEE578u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 476u, 0x08A9B0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE578u) goto L_08AEE578;
    return;
L_08AEE578:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE590;
      }
      goto L_08AEE584;
    }
L_08AEE584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE590;
    }
L_08AEE590:
    ctx.set_gpr(31, 0x08AEE598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE598u) goto L_08AEE598;
    return;
L_08AEE598:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE5A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08AEE5A4u) goto L_08AEE5A4;
    return;
L_08AEE5A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE5AC;
    }
L_08AEE5AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEE5BCu);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(704));
    goto L_08AEFDF8;
L_08AEE5BC:
    ctx.set_gpr(31, 0x08AEE5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE5C4u) goto L_08AEE5C4;
    return;
L_08AEE5C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE5D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE5D8u) goto L_08AEE5D8;
    return;
L_08AEE5D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE5E4;
    }
L_08AEE5E4:
    ctx.set_gpr(31, 0x08AEE5ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE5ECu) goto L_08AEE5EC;
    return;
L_08AEE5EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AEE600u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE600u) goto L_08AEE600;
    return;
L_08AEE600:
    ctx.set_gpr(31, 0x08AEE608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE608u) goto L_08AEE608;
    return;
L_08AEE608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AEE61Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE61Cu) goto L_08AEE61C;
    return;
L_08AEE61C:
    ctx.set_gpr(31, 0x08AEE624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE624u) goto L_08AEE624;
    return;
L_08AEE624:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x08AEE638u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE638u) goto L_08AEE638;
    return;
L_08AEE638:
    ctx.set_gpr(31, 0x08AEE640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE640u) goto L_08AEE640;
    return;
L_08AEE640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AEE654u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE654u) goto L_08AEE654;
    return;
L_08AEE654:
    ctx.set_gpr(31, 0x08AEE65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE65Cu) goto L_08AEE65C;
    return;
L_08AEE65C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AEE670u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE670u) goto L_08AEE670;
    return;
L_08AEE670:
    ctx.set_gpr(31, 0x08AEE678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE678u) goto L_08AEE678;
    return;
L_08AEE678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEE688u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AEE688u) goto L_08AEE688;
    return;
L_08AEE688:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE6B0;
      }
      goto L_08AEE694;
    }
L_08AEE694:
    ctx.set_gpr(31, 0x08AEE69Cu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 579u, 0x0884A36Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE69Cu) goto L_08AEE69C;
    return;
L_08AEE69C:
    ctx.set_gpr(31, 0x08AEE6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE6A4u) goto L_08AEE6A4;
    return;
L_08AEE6A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE6B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEE6B0u) goto L_08AEE6B0;
    return;
L_08AEE6B0:
    ctx.set_gpr(31, 0x08AEE6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE6B8u) goto L_08AEE6B8;
    return;
L_08AEE6B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE6C8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEE6C8u) goto L_08AEE6C8;
    return;
L_08AEE6C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08AEE6F0;
    }
    goto L_08AEE6D4;
L_08AEE6D4:
    ctx.set_gpr(31, 0x08AEE6DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE6DCu) goto L_08AEE6DC;
    return;
L_08AEE6DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE6ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE6ECu) goto L_08AEE6EC;
    return;
L_08AEE6EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08AEE6F0;
L_08AEE6F0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE6FC;
    }
L_08AEE6FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
        goto L_08AEE9A4;
    }
    goto L_08AEE708;
L_08AEE708:
    ctx.set_gpr(31, 0x08AEE710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE710u) goto L_08AEE710;
    return;
L_08AEE710:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE71Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEE71Cu) goto L_08AEE71C;
    return;
L_08AEE71C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1452));
    ctx.set_gpr(31, 0x08AEE728u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE728u) goto L_08AEE728;
    return;
L_08AEE728:
    ctx.set_gpr(31, 0x08AEE730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE730u) goto L_08AEE730;
    return;
L_08AEE730:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE73Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEE73Cu) goto L_08AEE73C;
    return;
L_08AEE73C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1464));
    ctx.set_gpr(31, 0x08AEE748u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE748u) goto L_08AEE748;
    return;
L_08AEE748:
    ctx.set_gpr(31, 0x08AEE750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE750u) goto L_08AEE750;
    return;
L_08AEE750:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE75Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 490u, 0x08849E28u>(ctx, &aot_mem) && ctx.pc == 0x08AEE75Cu) goto L_08AEE75C;
    return;
L_08AEE75C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1476));
    ctx.set_gpr(31, 0x08AEE768u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE768u) goto L_08AEE768;
    return;
L_08AEE768:
    ctx.set_gpr(31, 0x08AEE770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE770u) goto L_08AEE770;
    return;
L_08AEE770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE77Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE77Cu) goto L_08AEE77C;
    return;
L_08AEE77C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE784;
    }
L_08AEE784:
    ctx.set_gpr(31, 0x08AEE78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE78Cu) goto L_08AEE78C;
    return;
L_08AEE78C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE79Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE79Cu) goto L_08AEE79C;
    return;
L_08AEE79C:
    ctx.set_gpr(31, 0x08AEE7A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7A4u) goto L_08AEE7A4;
    return;
L_08AEE7A4:
    ctx.set_gpr(31, 0x08AEE7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7ACu) goto L_08AEE7AC;
    return;
L_08AEE7AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE7B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE7B8u) goto L_08AEE7B8;
    return;
L_08AEE7B8:
    ctx.set_gpr(31, 0x08AEE7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7C0u) goto L_08AEE7C0;
    return;
L_08AEE7C0:
    ctx.set_gpr(31, 0x08AEE7C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7C8u) goto L_08AEE7C8;
    return;
L_08AEE7C8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE7D0;
    }
L_08AEE7D0:
    ctx.set_gpr(31, 0x08AEE7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7D8u) goto L_08AEE7D8;
    return;
L_08AEE7D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE7E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7E4u) goto L_08AEE7E4;
    return;
L_08AEE7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE9A4;
      }
      goto L_08AEE7EC;
    }
L_08AEE7EC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08AEE7F0;
L_08AEE7F0:
    ctx.set_gpr(31, 0x08AEE7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE7F8u) goto L_08AEE7F8;
    return;
L_08AEE7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08AEE808u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE808u) goto L_08AEE808;
    return;
L_08AEE808:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEE7F0;
      }
      goto L_08AEE818;
    }
L_08AEE818:
    ctx.set_gpr(31, 0x08AEE820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE820u) goto L_08AEE820;
    return;
L_08AEE820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AEE834u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE834u) goto L_08AEE834;
    return;
L_08AEE834:
    ctx.set_gpr(31, 0x08AEE83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE83Cu) goto L_08AEE83C;
    return;
L_08AEE83C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AEE850u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE850u) goto L_08AEE850;
    return;
L_08AEE850:
    ctx.set_gpr(31, 0x08AEE858u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE858u) goto L_08AEE858;
    return;
L_08AEE858:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE868u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE868u) goto L_08AEE868;
    return;
L_08AEE868:
    ctx.set_gpr(31, 0x08AEE870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE870u) goto L_08AEE870;
    return;
L_08AEE870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE880u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEE880u) goto L_08AEE880;
    return;
L_08AEE880:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEE8A4;
      }
      goto L_08AEE88C;
    }
L_08AEE88C:
    ctx.set_gpr(31, 0x08AEE894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE894u) goto L_08AEE894;
    return;
L_08AEE894:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE8A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8A4u) goto L_08AEE8A4;
    return;
L_08AEE8A4:
    ctx.set_gpr(31, 0x08AEE8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8ACu) goto L_08AEE8AC;
    return;
L_08AEE8AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE8BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8BCu) goto L_08AEE8BC;
    return;
L_08AEE8BC:
    ctx.set_gpr(31, 0x08AEE8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8C4u) goto L_08AEE8C4;
    return;
L_08AEE8C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE8D4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8D4u) goto L_08AEE8D4;
    return;
L_08AEE8D4:
    ctx.set_gpr(31, 0x08AEE8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8DCu) goto L_08AEE8DC;
    return;
L_08AEE8DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEE8ECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8ECu) goto L_08AEE8EC;
    return;
L_08AEE8EC:
    ctx.set_gpr(31, 0x08AEE8F4u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 571u, 0x0884A300u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8F4u) goto L_08AEE8F4;
    return;
L_08AEE8F4:
    ctx.set_gpr(31, 0x08AEE8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEE8FCu) goto L_08AEE8FC;
    return;
L_08AEE8FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEE910u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE910u) goto L_08AEE910;
    return;
L_08AEE910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x08AEE91Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 832u, 0x0885F2DCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE91Cu) goto L_08AEE91C;
    return;
L_08AEE91C:
    ctx.set_gpr(31, 0x08AEE924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE924u) goto L_08AEE924;
    return;
L_08AEE924:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEE934u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE934u) goto L_08AEE934;
    return;
L_08AEE934:
    ctx.set_gpr(31, 0x08AEE93Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEE93Cu) goto L_08AEE93C;
    return;
L_08AEE93C:
    ctx.set_gpr(31, 0x08AEE944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEE944u) goto L_08AEE944;
    return;
L_08AEE944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEE950u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE950u) goto L_08AEE950;
    return;
L_08AEE950:
    ctx.set_gpr(31, 0x08AEE958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AEE958u) goto L_08AEE958;
    return;
L_08AEE958:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08AEE970u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AEE970u) goto L_08AEE970;
    return;
L_08AEE970:
    ctx.set_gpr(31, 0x08AEE978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEE978u) goto L_08AEE978;
    return;
L_08AEE978:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEE990u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 776u, 0x0884AD28u>(ctx, &aot_mem) && ctx.pc == 0x08AEE990u) goto L_08AEE990;
    return;
L_08AEE990:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AEE9A4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 783u, 0x08AE6AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AEE9A4u) goto L_08AEE9A4;
    return;
L_08AEE9A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    goto L_08AEE9A8;
L_08AEE9A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEA00;
      }
      goto L_08AEE9B4;
    }
L_08AEE9B4:
    ctx.set_gpr(31, 0x08AEE9BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEE9BCu) goto L_08AEE9BC;
    return;
L_08AEE9BC:
    ctx.set_gpr(31, 0x08AEE9C4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE9C4u) goto L_08AEE9C4;
    return;
L_08AEE9C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEE9D0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEE9D0u) goto L_08AEE9D0;
    return;
L_08AEE9D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEE9DCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AEE9DCu) goto L_08AEE9DC;
    return;
L_08AEE9DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.set_gpr(31, 0x08AEE9F8u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(580));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 297u, 0x08A913A8u>(ctx, &aot_mem) && ctx.pc == 0x08AEE9F8u) goto L_08AEE9F8;
    return;
L_08AEE9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AEEA4C;
      }
      goto L_08AEEA00;
    }
L_08AEEA00:
    ctx.set_gpr(31, 0x08AEEA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA08u) goto L_08AEEA08;
    return;
L_08AEEA08:
    ctx.set_gpr(31, 0x08AEEA10u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA10u) goto L_08AEEA10;
    return;
L_08AEEA10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEEA1Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEA1Cu) goto L_08AEEA1C;
    return;
L_08AEEA1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEEA28u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA28u) goto L_08AEEA28;
    return;
L_08AEEA28:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.set_gpr(31, 0x08AEEA48u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 297u, 0x08A913A8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA48u) goto L_08AEEA48;
    return;
L_08AEEA48:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AEEA4C;
L_08AEEA4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEEA60u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA60u) goto L_08AEEA60;
    return;
L_08AEEA60:
    ctx.set_gpr(31, 0x08AEEA68u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEA68u) goto L_08AEEA68;
    return;
L_08AEEA68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEEA74u);
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA74u) goto L_08AEEA74;
    return;
L_08AEEA74:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEEA90u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEA90u) goto L_08AEEA90;
    return;
L_08AEEA90:
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(31, 0x08AEEAB8u);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEAB8u) goto L_08AEEAB8;
    return;
L_08AEEAB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(275));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(236));
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEEAE8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8684));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEAE8u) goto L_08AEEAE8;
    return;
L_08AEEAE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08AEED58;
    }
    goto L_08AEEAFC;
L_08AEEAFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
        goto L_08AEED28;
    }
    goto L_08AEEB0C;
L_08AEEB0C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.set_gpr(31, 0x08AEEB2Cu);
    ctx.fpr[21] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEB2Cu) goto L_08AEEB2C;
    return;
L_08AEEB2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEEB3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEEB3Cu) goto L_08AEEB3C;
    return;
L_08AEEB3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEED24;
      }
      goto L_08AEEB48;
    }
L_08AEEB48:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    ctx.set_gpr(2, 16416u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEECA8;
      }
      goto L_08AEEB64;
    }
L_08AEEB64:
    ctx.set_gpr(31, 0x08AEEB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEB6Cu) goto L_08AEEB6C;
    return;
L_08AEEB6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEEB8Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEEB8Cu) goto L_08AEEB8C;
    return;
L_08AEEB8C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    ctx.set_gpr(2, 16416u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEEC28;
      }
      goto L_08AEEBAC;
    }
L_08AEEBAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEBE0;
      }
      goto L_08AEEBB8;
    }
L_08AEEBB8:
    ctx.set_gpr(31, 0x08AEEBC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEBC0u) goto L_08AEEBC0;
    return;
L_08AEEBC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEEBD8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEBD8u) goto L_08AEEBD8;
    return;
L_08AEEBD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEC00;
      }
      goto L_08AEEBE0;
    }
L_08AEEBE0:
    ctx.set_gpr(31, 0x08AEEBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEBE8u) goto L_08AEEBE8;
    return;
L_08AEEBE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEEC00u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEC00u) goto L_08AEEC00;
    return;
L_08AEEC00:
    ctx.set_gpr(31, 0x08AEEC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEC08u) goto L_08AEEC08;
    return;
L_08AEEC08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17244u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEEC28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEEC28u) goto L_08AEEC28;
    return;
L_08AEEC28:
    ctx.set_gpr(31, 0x08AEEC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEC30u) goto L_08AEEC30;
    return;
L_08AEEC30:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AEEC3Cu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEC3Cu) goto L_08AEEC3C;
    return;
L_08AEEC3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEC48u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEC48u) goto L_08AEEC48;
    return;
L_08AEEC48:
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEC5Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEC5Cu) goto L_08AEEC5C;
    return;
L_08AEEC5C:
    ctx.set_gpr(4, 16495u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] | 57344u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEC74u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEC74u) goto L_08AEEC74;
    return;
L_08AEEC74:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AEEC80u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08AEEC80u) goto L_08AEEC80;
    return;
L_08AEEC80:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AEECA0u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEECA0u) goto L_08AEECA0;
    return;
L_08AEECA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEED24;
      }
      goto L_08AEECA8;
    }
L_08AEECA8:
    ctx.set_gpr(31, 0x08AEECB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEECB0u) goto L_08AEECB0;
    return;
L_08AEECB0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08AEECBCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEECBCu) goto L_08AEECBC;
    return;
L_08AEECBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEECC8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEECC8u) goto L_08AEECC8;
    return;
L_08AEECC8:
    ctx.set_gpr(5, 16371u << 16u);
    ctx.set_gpr(4, 16384u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 13107u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEECE0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEECE0u) goto L_08AEECE0;
    return;
L_08AEECE0:
    ctx.set_gpr(4, 16495u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] | 57344u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEECF8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEECF8u) goto L_08AEECF8;
    return;
L_08AEECF8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08AEED04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08AEED04u) goto L_08AEED04;
    return;
L_08AEED04:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(8, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08AEED24u);
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C41Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEED24u) goto L_08AEED24;
    return;
L_08AEED24:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    goto L_08AEED28;
L_08AEED28:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[20];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08AEED54;
      }
      goto L_08AEED44;
    }
L_08AEED44:
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AEED54;
L_08AEED54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEED58;
L_08AEED58:
    ctx.set_gpr(31, 0x08AEED60u);
    // nop
    goto L_08AEF484;
L_08AEED60:
    ctx.set_gpr(31, 0x08AEED68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEED68u) goto L_08AEED68;
    return;
L_08AEED68:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEED74u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEED74u) goto L_08AEED74;
    return;
L_08AEED74:
    ctx.set_gpr(31, 0x08AEED7Cu);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEED7Cu) goto L_08AEED7C;
    return;
L_08AEED7C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEED88u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEED88u) goto L_08AEED88;
    return;
L_08AEED88:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08AEED94u);
    ctx.fpr[22] = ctx.fpr[20] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEED94u) goto L_08AEED94;
    return;
L_08AEED94:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEDA0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDA0u) goto L_08AEEDA0;
    return;
L_08AEEDA0:
    ctx.set_gpr(31, 0x08AEEDA8u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDA8u) goto L_08AEEDA8;
    return;
L_08AEEDA8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEDB4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDB4u) goto L_08AEEDB4;
    return;
L_08AEEDB4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(31, 0x08AEEDC0u);
    ctx.fpr[21] = ctx.fpr[20] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDC0u) goto L_08AEEDC0;
    return;
L_08AEEDC0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEDCCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDCCu) goto L_08AEEDCC;
    return;
L_08AEEDCC:
    ctx.set_gpr(31, 0x08AEEDD4u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDD4u) goto L_08AEEDD4;
    return;
L_08AEEDD4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEDE0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDE0u) goto L_08AEEDE0;
    return;
L_08AEEDE0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08AEEDF8u);
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEDF8u) goto L_08AEEDF8;
    return;
L_08AEEDF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEE04u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_08AEF46C;
L_08AEEE04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEE10u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE10u) goto L_08AEEE10;
    return;
L_08AEEE10:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AEEE1Cu);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE1Cu) goto L_08AEEE1C;
    return;
L_08AEEE1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEE28u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 448u, 0x08A8591Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEE28u) goto L_08AEEE28;
    return;
L_08AEEE28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEE34u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE34u) goto L_08AEEE34;
    return;
L_08AEEE34:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08AEEE40u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 661u, 0x08AA67A8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE40u) goto L_08AEEE40;
    return;
L_08AEEE40:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1762)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08AEF380;
      }
      goto L_08AEEE4C;
    }
L_08AEEE4C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEEE64u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE64u) goto L_08AEEE64;
    return;
L_08AEEE64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
        goto L_08AEEE94;
    }
    goto L_08AEEE74;
L_08AEEE74:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(51));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AEEE8Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8680));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEE8Cu) goto L_08AEEE8C;
    return;
L_08AEEE8C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08AEEEAC;
      }
      goto L_08AEEE94;
    }
L_08AEEE94:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(141));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08AEEEA8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8680));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEEA8u) goto L_08AEEEA8;
    return;
L_08AEEEA8:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AEEEAC;
L_08AEEEAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08AEEEC0u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08AEEEC0u) goto L_08AEEEC0;
    return;
L_08AEEEC0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x08AEEED8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8680));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEED8u) goto L_08AEEED8;
    return;
L_08AEEED8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x08AEEEF0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8680));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEEEF0u) goto L_08AEEEF0;
    return;
L_08AEEEF0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1763)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF348;
      }
      goto L_08AEEEFC;
    }
L_08AEEEFC:
    ctx.set_gpr(31, 0x08AEEF04u);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEEF04u) goto L_08AEEF04;
    return;
L_08AEEF04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEF10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEF10u) goto L_08AEEF10;
    return;
L_08AEEF10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEEF4C;
      }
      goto L_08AEEF18;
    }
L_08AEEF18:
    ctx.set_gpr(2, 48839u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 44564u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEEF48;
      }
      goto L_08AEEF38;
    }
L_08AEEF38:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    goto L_08AEEF48;
L_08AEEF48:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08AEEF4C;
L_08AEEF4C:
    ctx.set_gpr(31, 0x08AEEF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08AEEF54u) goto L_08AEEF54;
    return;
L_08AEEF54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEEF60u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEF60u) goto L_08AEEF60;
    return;
L_08AEEF60:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
        goto L_08AEEF9C;
    }
    goto L_08AEEF68;
L_08AEEF68:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEEF94;
      }
      goto L_08AEEF84;
    }
L_08AEEF84:
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    goto L_08AEEF94;
L_08AEEF94:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    goto L_08AEEF9C;
L_08AEEF9C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) && ctx.fpr[22] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AEF1B4;
      }
      goto L_08AEEFAC;
    }
L_08AEEFAC:
    ctx.set_gpr(31, 0x08AEEFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEFB4u) goto L_08AEEFB4;
    return;
L_08AEEFB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEEFC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEEFC8u) goto L_08AEEFC8;
    return;
L_08AEEFC8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-39));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(100));
        goto L_08AEF084;
    }
    goto L_08AEEFEC;
L_08AEEFEC:
    ctx.set_gpr(31, 0x08AEEFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEEFF4u) goto L_08AEEFF4;
    return;
L_08AEEFF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEF00Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF00Cu) goto L_08AEF00C;
    return;
L_08AEF00C:
    ctx.set_gpr(31, 0x08AEF014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF014u) goto L_08AEF014;
    return;
L_08AEF014:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEF02Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF02Cu) goto L_08AEF02C;
    return;
L_08AEF02C:
    ctx.set_gpr(31, 0x08AEF034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF034u) goto L_08AEF034;
    return;
L_08AEF034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF054u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF054u) goto L_08AEF054;
    return;
L_08AEF054:
    ctx.set_gpr(31, 0x08AEF05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF05Cu) goto L_08AEF05C;
    return;
L_08AEF05C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF07Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF07Cu) goto L_08AEF07C;
    return;
L_08AEF07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF1B4;
      }
      goto L_08AEF084;
    }
L_08AEF084:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEF124;
      }
      goto L_08AEF08C;
    }
L_08AEF08C:
    ctx.set_gpr(31, 0x08AEF094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF094u) goto L_08AEF094;
    return;
L_08AEF094:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEF0ACu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0ACu) goto L_08AEF0AC;
    return;
L_08AEF0AC:
    ctx.set_gpr(31, 0x08AEF0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0B4u) goto L_08AEF0B4;
    return;
L_08AEF0B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEF0CCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0CCu) goto L_08AEF0CC;
    return;
L_08AEF0CC:
    ctx.set_gpr(31, 0x08AEF0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0D4u) goto L_08AEF0D4;
    return;
L_08AEF0D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF0F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0F4u) goto L_08AEF0F4;
    return;
L_08AEF0F4:
    ctx.set_gpr(31, 0x08AEF0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF0FCu) goto L_08AEF0FC;
    return;
L_08AEF0FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17226u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF11Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF11Cu) goto L_08AEF11C;
    return;
L_08AEF11C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF1B4;
      }
      goto L_08AEF124;
    }
L_08AEF124:
    ctx.set_gpr(31, 0x08AEF12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF12Cu) goto L_08AEF12C;
    return;
L_08AEF12C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEF144u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF144u) goto L_08AEF144;
    return;
L_08AEF144:
    ctx.set_gpr(31, 0x08AEF14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF14Cu) goto L_08AEF14C;
    return;
L_08AEF14C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08AEF164u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF164u) goto L_08AEF164;
    return;
L_08AEF164:
    ctx.set_gpr(31, 0x08AEF16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF16Cu) goto L_08AEF16C;
    return;
L_08AEF16C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17331u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF18Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF18Cu) goto L_08AEF18C;
    return;
L_08AEF18C:
    ctx.set_gpr(31, 0x08AEF194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF194u) goto L_08AEF194;
    return;
L_08AEF194:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17386u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF1B4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1B4u) goto L_08AEF1B4;
    return;
L_08AEF1B4:
    ctx.set_gpr(31, 0x08AEF1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1BCu) goto L_08AEF1BC;
    return;
L_08AEF1BC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF1C8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1C8u) goto L_08AEF1C8;
    return;
L_08AEF1C8:
    ctx.set_gpr(31, 0x08AEF1D0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1D0u) goto L_08AEF1D0;
    return;
L_08AEF1D0:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x08AEF1ECu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8724));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1ECu) goto L_08AEF1EC;
    return;
L_08AEF1EC:
    ctx.set_gpr(31, 0x08AEF1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEF1F4u) goto L_08AEF1F4;
    return;
L_08AEF1F4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF200u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEF200u) goto L_08AEF200;
    return;
L_08AEF200:
    ctx.set_gpr(31, 0x08AEF208u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF208u) goto L_08AEF208;
    return;
L_08AEF208:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(157));
    ctx.set_gpr(31, 0x08AEF224u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8740));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF224u) goto L_08AEF224;
    return;
L_08AEF224:
    ctx.set_gpr(31, 0x08AEF22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEF22Cu) goto L_08AEF22C;
    return;
L_08AEF22C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF238u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEF238u) goto L_08AEF238;
    return;
L_08AEF238:
    ctx.set_gpr(31, 0x08AEF240u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF240u) goto L_08AEF240;
    return;
L_08AEF240:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(170));
    ctx.set_gpr(31, 0x08AEF25Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8756));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF25Cu) goto L_08AEF25C;
    return;
L_08AEF25C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[21] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 17076u << 16u);
        goto L_08AEF2A8;
    }
    goto L_08AEF270;
L_08AEF270:
    ctx.set_gpr(2, 17076u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08AEF284u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF284u) goto L_08AEF284;
    return;
L_08AEF284:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(183));
    ctx.set_gpr(31, 0x08AEF2A0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8772));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF2A0u) goto L_08AEF2A0;
    return;
L_08AEF2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
      if (branch_taken) {
          goto L_08AEF2D4;
      }
      goto L_08AEF2A8;
    }
L_08AEF2A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEF2B4u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF2B4u) goto L_08AEF2B4;
    return;
L_08AEF2B4:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(183));
    ctx.set_gpr(31, 0x08AEF2D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8772));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF2D0u) goto L_08AEF2D0;
    return;
L_08AEF2D0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    goto L_08AEF2D4;
L_08AEF2D4:
    ctx.set_gpr(2, 17096u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 16968u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(196));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8788));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08AEF308u);
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF308u) goto L_08AEF308;
    return;
L_08AEF308:
    ctx.set_gpr(31, 0x08AEF310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF310u) goto L_08AEF310;
    return;
L_08AEF310:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AEF324u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF324u) goto L_08AEF324;
    return;
L_08AEF324:
    ctx.set_gpr(31, 0x08AEF32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF32Cu) goto L_08AEF32C;
    return;
L_08AEF32C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AEF340u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF340u) goto L_08AEF340;
    return;
L_08AEF340:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
      if (branch_taken) {
          goto L_08AEF384;
      }
      goto L_08AEF348;
    }
L_08AEF348:
    ctx.set_gpr(31, 0x08AEF350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF350u) goto L_08AEF350;
    return;
L_08AEF350:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    ctx.set_gpr(31, 0x08AEF364u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF364u) goto L_08AEF364;
    return;
L_08AEF364:
    ctx.set_gpr(31, 0x08AEF36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF36Cu) goto L_08AEF36C;
    return;
L_08AEF36C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(59));
    ctx.set_gpr(31, 0x08AEF380u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF380u) goto L_08AEF380;
    return;
L_08AEF380:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    goto L_08AEF384;
L_08AEF384:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08AEF398u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 28u, 0x08AE8200u>(ctx, &aot_mem) && ctx.pc == 0x08AEF398u) goto L_08AEF398;
    return;
L_08AEF398:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16624u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEF3BCu);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 27u, 0x08AE81F8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF3BCu) goto L_08AEF3BC;
    return;
L_08AEF3BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 16624u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEF3E0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 26u, 0x08AE81F0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF3E0u) goto L_08AEF3E0;
    return;
L_08AEF3E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08AEF448;
    }
    goto L_08AEF3F0;
L_08AEF3F0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF444;
      }
      goto L_08AEF3FC;
    }
L_08AEF3FC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEF444;
      }
      goto L_08AEF408;
    }
L_08AEF408:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEF444;
      }
      goto L_08AEF414;
    }
L_08AEF414:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AEF444;
      }
      goto L_08AEF420;
    }
L_08AEF420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(63));
    ctx.set_gpr(31, 0x08AEF444u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8680));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF444u) goto L_08AEF444;
    return;
L_08AEF444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08AEF448;
L_08AEF448:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEF46C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 561u, 0x0880EAF4u>(ctx, &aot_mem); return;
L_08AEF474:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEF47C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(18301), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEF484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1762)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08AEF59C;
    }
    goto L_08AEF4AC;
L_08AEF4AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1763)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF52C;
      }
      goto L_08AEF4B8;
    }
L_08AEF4B8:
    ctx.set_gpr(31, 0x08AEF4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF4C0u) goto L_08AEF4C0;
    return;
L_08AEF4C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x08AEF4D4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF4D4u) goto L_08AEF4D4;
    return;
L_08AEF4D4:
    ctx.set_gpr(31, 0x08AEF4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF4DCu) goto L_08AEF4DC;
    return;
L_08AEF4DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AEF4F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF4F0u) goto L_08AEF4F0;
    return;
L_08AEF4F0:
    ctx.set_gpr(31, 0x08AEF4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF4F8u) goto L_08AEF4F8;
    return;
L_08AEF4F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AEF50Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF50Cu) goto L_08AEF50C;
    return;
L_08AEF50C:
    ctx.set_gpr(31, 0x08AEF514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF514u) goto L_08AEF514;
    return;
L_08AEF514:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF524u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AEF524u) goto L_08AEF524;
    return;
L_08AEF524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF598;
      }
      goto L_08AEF52C;
    }
L_08AEF52C:
    ctx.set_gpr(31, 0x08AEF534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF534u) goto L_08AEF534;
    return;
L_08AEF534:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(125));
    ctx.set_gpr(31, 0x08AEF548u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF548u) goto L_08AEF548;
    return;
L_08AEF548:
    ctx.set_gpr(31, 0x08AEF550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF550u) goto L_08AEF550;
    return;
L_08AEF550:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08AEF564u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF564u) goto L_08AEF564;
    return;
L_08AEF564:
    ctx.set_gpr(31, 0x08AEF56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF56Cu) goto L_08AEF56C;
    return;
L_08AEF56C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.set_gpr(31, 0x08AEF580u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF580u) goto L_08AEF580;
    return;
L_08AEF580:
    ctx.set_gpr(31, 0x08AEF588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF588u) goto L_08AEF588;
    return;
L_08AEF588:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEF598u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08AEF598u) goto L_08AEF598;
    return;
L_08AEF598:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08AEF59C;
L_08AEF59C:
    ctx.set_gpr(31, 0x08AEF5A4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEF5A4u) goto L_08AEF5A4;
    return;
L_08AEF5A4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF5B0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 476u, 0x08849D34u>(ctx, &aot_mem) && ctx.pc == 0x08AEF5B0u) goto L_08AEF5B0;
    return;
L_08AEF5B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEF5BCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_08AEF738;
L_08AEF5BC:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AEF5C8u);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08AEF5C8u) goto L_08AEF5C8;
    return;
L_08AEF5C8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF5D4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 504u, 0x08849F20u>(ctx, &aot_mem) && ctx.pc == 0x08AEF5D4u) goto L_08AEF5D4;
    return;
L_08AEF5D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08AEF5E0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_08AEF738;
L_08AEF5E0:
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08AEF630;
      }
      goto L_08AEF610;
    }
L_08AEF610:
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[21])) || ctx.fpr[22] <= ctx.fpr[21]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, 17204u << 16u);
        goto L_08AEF628;
    }
    goto L_08AEF620;
L_08AEF620:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AEF640;
      }
      goto L_08AEF628;
    }
L_08AEF628:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEF640;
      }
      goto L_08AEF630;
    }
L_08AEF630:
    ctx.fpr[12] = ctx.fpr[23] - ctx.fpr[24];
    ctx.set_gpr(31, 0x08AEF63Cu);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[21];
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 661u, 0x08AA67A8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF63Cu) goto L_08AEF63C;
    return;
L_08AEF63C:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_08AEF640;
L_08AEF640:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08AEF650u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 46u, 0x08AE8458u>(ctx, &aot_mem) && ctx.pc == 0x08AEF650u) goto L_08AEF650;
    return;
L_08AEF650:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08AEF65Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    goto L_08AEF738;
L_08AEF65C:
    ctx.set_gpr(31, 0x08AEF664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF664u) goto L_08AEF664;
    return;
L_08AEF664:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17358u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[24];
    ctx.set_gpr(5, 16448u << 16u);
    ctx.set_gpr(3, 17106u << 16u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(127));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[21];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEF6A8u);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF6A8u) goto L_08AEF6A8;
    return;
L_08AEF6A8:
    ctx.set_gpr(31, 0x08AEF6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF6B0u) goto L_08AEF6B0;
    return;
L_08AEF6B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17358u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[23];
    ctx.set_gpr(5, 16448u << 16u);
    ctx.set_gpr(3, 17106u << 16u);
    ctx.set_gpr(2, 16640u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[22];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08AEF6F4u);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08AEF6F4u) goto L_08AEF6F4;
    return;
L_08AEF6F4:
    ctx.set_gpr(31, 0x08AEF6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEF6FCu) goto L_08AEF6FC;
    return;
L_08AEF6FC:
    ctx.set_gpr(3, 17076u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[20];
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEF718u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(126));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 576u, 0x08AA6248u>(ctx, &aot_mem) && ctx.pc == 0x08AEF718u) goto L_08AEF718;
    return;
L_08AEF718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEF738:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEF770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1600)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08AEF8C0;
      }
      goto L_08AEF79C;
    }
L_08AEF79C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEF894;
      }
      goto L_08AEF7A8;
    }
L_08AEF7A8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF7B8;
      }
      goto L_08AEF7B0;
    }
L_08AEF7B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFB60;
      }
      goto L_08AEF7B8;
    }
L_08AEF7B8:
    ctx.set_gpr(31, 0x08AEF7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEF7C0u) goto L_08AEF7C0;
    return;
L_08AEF7C0:
    ctx.set_gpr(31, 0x08AEF7C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF7C8u) goto L_08AEF7C8;
    return;
L_08AEF7C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEF7D8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 20u, 0x08A7C158u>(ctx, &aot_mem) && ctx.pc == 0x08AEF7D8u) goto L_08AEF7D8;
    return;
L_08AEF7D8:
    ctx.set_gpr(31, 0x08AEF7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF7E0u) goto L_08AEF7E0;
    return;
L_08AEF7E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEF7F0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF7F0u) goto L_08AEF7F0;
    return;
L_08AEF7F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF7FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(85));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 670u, 0x08AF2B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF7FCu) goto L_08AEF7FC;
    return;
L_08AEF7FC:
    ctx.set_gpr(16, 2230u << 16u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(11700));
    goto L_08AEF808;
L_08AEF808:
    ctx.set_gpr(31, 0x08AEF810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF810u) goto L_08AEF810;
    return;
L_08AEF810:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEF820u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF820u) goto L_08AEF820;
    return;
L_08AEF820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08AEF83Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08AEF83Cu) goto L_08AEF83C;
    return;
L_08AEF83C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < 85 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08AEF808;
      }
      goto L_08AEF84C;
    }
L_08AEF84C:
    ctx.set_gpr(31, 0x08AEF854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEF854u) goto L_08AEF854;
    return;
L_08AEF854:
    ctx.set_gpr(31, 0x08AEF85Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF85Cu) goto L_08AEF85C;
    return;
L_08AEF85C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF868u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 469u, 0x08A7DEE4u>(ctx, &aot_mem) && ctx.pc == 0x08AEF868u) goto L_08AEF868;
    return;
L_08AEF868:
    ctx.set_gpr(31, 0x08AEF870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF870u) goto L_08AEF870;
    return;
L_08AEF870:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF87Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08AEF87Cu) goto L_08AEF87C;
    return;
L_08AEF87C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1600)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEFC68;
      }
      goto L_08AEF894;
    }
L_08AEF894:
    ctx.set_gpr(31, 0x08AEF89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF89Cu) goto L_08AEF89C;
    return;
L_08AEF89C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF8A8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEF8A8u) goto L_08AEF8A8;
    return;
L_08AEF8A8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08AEFC6C;
    }
    goto L_08AEF8B0;
L_08AEF8B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1600)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AEFC68;
      }
      goto L_08AEF8C0;
    }
L_08AEF8C0:
    ctx.set_gpr(31, 0x08AEF8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF8C8u) goto L_08AEF8C8;
    return;
L_08AEF8C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF8D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08AEF8D4u) goto L_08AEF8D4;
    return;
L_08AEF8D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
        goto L_08AEF910;
    }
    goto L_08AEF8E0;
L_08AEF8E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
        goto L_08AEF8F4;
    }
    goto L_08AEF8EC;
L_08AEF8EC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AEF928;
      }
      goto L_08AEF8F4;
    }
L_08AEF8F4:
    ctx.set_gpr(31, 0x08AEF8FCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF8FCu) goto L_08AEF8FC;
    return;
L_08AEF8FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF908u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEF908u) goto L_08AEF908;
    return;
L_08AEF908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEF924;
      }
      goto L_08AEF910;
    }
L_08AEF910:
    ctx.set_gpr(31, 0x08AEF918u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF918u) goto L_08AEF918;
    return;
L_08AEF918:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEF924u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08AEF924u) goto L_08AEF924;
    return;
L_08AEF924:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08AEF928;
L_08AEF928:
    ctx.set_gpr(31, 0x08AEF930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF930u) goto L_08AEF930;
    return;
L_08AEF930:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEF940u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF940u) goto L_08AEF940;
    return;
L_08AEF940:
    ctx.set_gpr(31, 0x08AEF948u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEF948u) goto L_08AEF948;
    return;
L_08AEF948:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08AEFAAC;
    }
    goto L_08AEF950;
L_08AEF950:
    ctx.set_gpr(31, 0x08AEF958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEF958u) goto L_08AEF958;
    return;
L_08AEF958:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEF968u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF968u) goto L_08AEF968;
    return;
L_08AEF968:
    ctx.set_gpr(31, 0x08AEF970u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08AEF970u) goto L_08AEF970;
    return;
L_08AEF970:
    ctx.set_gpr(31, 0x08AEF978u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEF978u) goto L_08AEF978;
    return;
L_08AEF978:
    ctx.set_gpr(31, 0x08AEF980u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEF980u) goto L_08AEF980;
    return;
L_08AEF980:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEF98Cu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEF98Cu) goto L_08AEF98C;
    return;
L_08AEF98C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEF998u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AEF998u) goto L_08AEF998;
    return;
L_08AEF998:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEF9A8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 287u, 0x08A912FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEF9A8u) goto L_08AEF9A8;
    return;
L_08AEF9A8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11700));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1676));
    ctx.set_gpr(31, 0x08AEF9D0u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08AEFC88;
L_08AEF9D0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1684)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1688)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1692)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1612), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1696)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1700)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1704)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1624), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1708)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1628), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1712)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1716)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1720)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1644), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1728)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1648), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1732)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1652), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1736)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1656), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1740)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1660), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1664), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1748)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1668), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1752)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1672), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1680)));
    ctx.set_gpr(31, 0x08AEFA70u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 132u, 0x08A9497Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFA70u) goto L_08AEFA70;
    return;
L_08AEFA70:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x08AEFA80u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1604));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFA80u) goto L_08AEFA80;
    return;
L_08AEFA80:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x08AEFA90u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1640));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFA90u) goto L_08AEFA90;
    return;
L_08AEFA90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEFAA4u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 461u, 0x08A9AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFAA4u) goto L_08AEFAA4;
    return;
L_08AEFAA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFC68;
      }
      goto L_08AEFAAC;
    }
L_08AEFAAC:
    ctx.set_gpr(31, 0x08AEFAB4u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 476u, 0x08A9B0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AEFAB4u) goto L_08AEFAB4;
    return;
L_08AEFAB4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFC68;
      }
      goto L_08AEFAC0;
    }
L_08AEFAC0:
    ctx.set_gpr(31, 0x08AEFAC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEFAC8u) goto L_08AEFAC8;
    return;
L_08AEFAC8:
    ctx.set_gpr(31, 0x08AEFAD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFAD0u) goto L_08AEFAD0;
    return;
L_08AEFAD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEFADCu);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 463u, 0x08A85A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFADCu) goto L_08AEFADC;
    return;
L_08AEFADC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08AEFAE8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 45u, 0x08AE8450u>(ctx, &aot_mem) && ctx.pc == 0x08AEFAE8u) goto L_08AEFAE8;
    return;
L_08AEFAE8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEFAF8u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 287u, 0x08A912FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEFAF8u) goto L_08AEFAF8;
    return;
L_08AEFAF8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11704));
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08AEFB24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 132u, 0x08A9497Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFB24u) goto L_08AEFB24;
    return;
L_08AEFB24:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x08AEFB34u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1604));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFB34u) goto L_08AEFB34;
    return;
L_08AEFB34:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08AEFB44u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1640));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFB44u) goto L_08AEFB44;
    return;
L_08AEFB44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08AEFB58u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 461u, 0x08A9AF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFB58u) goto L_08AEFB58;
    return;
L_08AEFB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFC68;
      }
      goto L_08AEFB60;
    }
L_08AEFB60:
    ctx.set_gpr(31, 0x08AEFB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEFB68u) goto L_08AEFB68;
    return;
L_08AEFB68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEFB74u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08AEFB74u) goto L_08AEFB74;
    return;
L_08AEFB74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFC68;
      }
      goto L_08AEFB7C;
    }
L_08AEFB7C:
    ctx.set_gpr(31, 0x08AEFB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEFB84u) goto L_08AEFB84;
    return;
L_08AEFB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08AEFB94u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFB94u) goto L_08AEFB94;
    return;
L_08AEFB94:
    ctx.set_gpr(31, 0x08AEFB9Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08AEFB9Cu) goto L_08AEFB9C;
    return;
L_08AEFB9C:
    ctx.set_gpr(31, 0x08AEFBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08AEFBA4u) goto L_08AEFBA4;
    return;
L_08AEFBA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEFBB0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFBB0u) goto L_08AEFBB0;
    return;
L_08AEFBB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1600)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1600)));
        goto L_08AEFC40;
    }
    goto L_08AEFBC0;
L_08AEFBC0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1416));
    ctx.set_gpr(31, 0x08AEFBCCu);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1604));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AEFBCCu) goto L_08AEFBCC;
    return;
L_08AEFBCC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(1452));
    ctx.set_gpr(31, 0x08AEFBD8u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1640));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 451u, 0x08A89884u>(ctx, &aot_mem) && ctx.pc == 0x08AEFBD8u) goto L_08AEFBD8;
    return;
L_08AEFBD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11704));
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1588)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
        goto L_08AEFC14;
    }
    goto L_08AEFC0C;
L_08AEFC0C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1216), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    goto L_08AEFC14;
L_08AEFC14:
    ctx.set_gpr(31, 0x08AEFC1Cu);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFC1Cu) goto L_08AEFC1C;
    return;
L_08AEFC1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08AEFC2Cu);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1416));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFC2Cu) goto L_08AEFC2C;
    return;
L_08AEFC2C:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEFC3Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 6u, 0x08AF005Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFC3Cu) goto L_08AEFC3C;
    return;
L_08AEFC3C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1600)));
    goto L_08AEFC40;
L_08AEFC40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), 0u);
        goto L_08AEFC60;
    }
    goto L_08AEFC4C;
L_08AEFC4C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x08AEFC5Cu);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(704));
    goto L_08AEFDF8;
L_08AEFC5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1600), 0u);
    goto L_08AEFC60;
L_08AEFC60:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AEFC6C;
      }
      goto L_08AEFC68;
    }
L_08AEFC68:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08AEFC6C;
L_08AEFC6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFC88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(64)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08AEFD50;
L_08AEFD50:
    ctx.set_gpr(31, 0x08AEFD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEFD58u) goto L_08AEFD58;
    return;
L_08AEFD58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEFD6Cu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFD6Cu) goto L_08AEFD6C;
    return;
L_08AEFD6C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AEFD50;
      }
      goto L_08AEFD7C;
    }
L_08AEFD7C:
    ctx.set_gpr(31, 0x08AEFD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEFD84u) goto L_08AEFD84;
    return;
L_08AEFD84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEFD98u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(65));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFD98u) goto L_08AEFD98;
    return;
L_08AEFD98:
    ctx.set_gpr(31, 0x08AEFDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEFDA0u) goto L_08AEFDA0;
    return;
L_08AEFDA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEFDB0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 710u, 0x088AAA90u>(ctx, &aot_mem) && ctx.pc == 0x08AEFDB0u) goto L_08AEFDB0;
    return;
L_08AEFDB0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
        goto L_08AEFDD8;
    }
    goto L_08AEFDBC;
L_08AEFDBC:
    ctx.set_gpr(31, 0x08AEFDC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08AEFDC4u) goto L_08AEFDC4;
    return;
L_08AEFDC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08AEFDD4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(66));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08AEFDD4u) goto L_08AEFDD4;
    return;
L_08AEFDD4:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(192));
    goto L_08AEFDD8;
L_08AEFDD8:
    ctx.set_gpr(31, 0x08AEFDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 586u, 0x0884A3C0u>(ctx, &aot_mem) && ctx.pc == 0x08AEFDE0u) goto L_08AEFDE0;
    return;
L_08AEFDE0:
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
L_08AEFDF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08AEFE18u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEFEA0;
L_08AEFE18:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08AEFE24u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 620u, 0x0884A54Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFE24u) goto L_08AEFE24;
    return;
L_08AEFE24:
    ctx.set_gpr(31, 0x08AEFE2Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEFE98;
L_08AEFE2C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AEFE38u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 593u, 0x0884A414u>(ctx, &aot_mem) && ctx.pc == 0x08AEFE38u) goto L_08AEFE38;
    return;
L_08AEFE38:
    ctx.set_gpr(31, 0x08AEFE40u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEFE90;
L_08AEFE40:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AEFE4Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 602u, 0x0884A47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFE4Cu) goto L_08AEFE4C;
    return;
L_08AEFE4C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08AEFE58u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 659u, 0x0884A770u>(ctx, &aot_mem) && ctx.pc == 0x08AEFE58u) goto L_08AEFE58;
    return;
L_08AEFE58:
    ctx.set_gpr(31, 0x08AEFE60u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08AEFE88;
L_08AEFE60:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x08AEFE6Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 611u, 0x0884A4E4u>(ctx, &aot_mem) && ctx.pc == 0x08AEFE6Cu) goto L_08AEFE6C;
    return;
L_08AEFE6C:
    ctx.set_gpr(31, 0x08AEFE74u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 741u, 0x0884AB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AEFE74u) goto L_08AEFE74;
    return;
L_08AEFE74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFE88:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFE90:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFE98:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFEA0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(228));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AEFEA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(31, 0x08AEFEECu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08AEFEECu) goto L_08AEFEEC;
    return;
L_08AEFEEC:
    ctx.set_gpr(20, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AEFEF8u);
    ctx.set_gpr(19, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEFEF8u) goto L_08AEFEF8;
    return;
L_08AEFEF8:
    ctx.set_gpr(31, 0x08AEFF00u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF00u) goto L_08AEFF00;
    return;
L_08AEFF00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08AEFF10u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 287u, 0x08A912FCu>(ctx, &aot_mem) && ctx.pc == 0x08AEFF10u) goto L_08AEFF10;
    return;
L_08AEFF10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08AEFF20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(199));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 852u, 0x08A8AE20u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF20u) goto L_08AEFF20;
    return;
L_08AEFF20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(8));
        goto L_08AEFF4C;
    }
    goto L_08AEFF2C;
L_08AEFF2C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(6));
        goto L_08AEFF4C;
    }
    goto L_08AEFF38;
L_08AEFF38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(4));
        goto L_08AEFF4C;
    }
    goto L_08AEFF44;
L_08AEFF44:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
        goto L_08AEFF4C;
    }
    goto L_08AEFF4C;
L_08AEFF4C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 1600 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 3u, 0x08AF0018u>(ctx, &aot_mem); return;
      }
      goto L_08AEFF58;
    }
L_08AEFF58:
    ctx.set_gpr(31, 0x08AEFF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF60u) goto L_08AEFF60;
    return;
L_08AEFF60:
    ctx.set_gpr(31, 0x08AEFF68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF68u) goto L_08AEFF68;
    return;
L_08AEFF68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08AEFF84u);
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 297u, 0x08A913A8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF84u) goto L_08AEFF84;
    return;
L_08AEFF84:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AEFF98u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AEFF98u) goto L_08AEFF98;
    return;
L_08AEFF98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x08AEFFA4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AEFFA4u) goto L_08AEFFA4;
    return;
L_08AEFFA4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1588), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(199));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
        goto L_08AEFFE0;
    }
    goto L_08AEFFB8;
L_08AEFFB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AEFFDC;
      }
      goto L_08AEFFC8;
    }
L_08AEFFC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1588)));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1588), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 3u, 0x08AF0018u>(ctx, &aot_mem); return;
      }
      goto L_08AEFFDC;
    }
L_08AEFFDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    goto L_08AEFFE0;
L_08AEFFE0:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08AEFFF0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 50u, 0x08A98708u>(ctx, &aot_mem) && ctx.pc == 0x08AEFFF0u) goto L_08AEFFF0;
    return;
L_08AEFFF0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        (void)rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 2u, 0x08AF000Cu>(ctx, &aot_mem); return;
    }
    goto L_08AEFFF8;
L_08AEFFF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1588)));
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.pc = 0x08AF0000u; return;
}

void recomp_unit_0186(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0186_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_186(Runtime &runtime) {
    runtime.register_generated_unit(186u, 0x08AEC000u, 16384u, &recomp_unit_0186, &recomp_unit_0186_entry);
    runtime.register_function(0x08AEC000u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC008u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC024u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC030u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC038u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC050u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC05Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC074u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC07Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC090u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC098u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC0F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC104u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC110u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC118u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC120u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC130u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC134u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC13Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC14Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC158u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC160u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC1D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC20Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC21Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC224u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC234u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC240u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC248u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC278u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC280u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC290u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC29Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC2FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC310u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC318u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC35Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC364u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC374u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC37Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC3FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC41Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC424u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC42Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC434u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC43Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC444u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC44Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC464u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC46Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC474u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC484u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC48Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC49Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC4FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC50Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC52Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC534u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC544u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC564u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC56Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC57Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC59Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC5F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC608u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC614u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC61Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC62Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC638u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC640u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC64Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC658u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC660u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC668u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC674u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC67Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC684u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC690u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC698u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC6F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC704u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC70Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC714u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC724u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC72Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC73Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC74Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC750u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC758u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC76Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC77Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC788u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC798u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC7F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC80Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC81Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC828u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC834u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC83Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC84Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC854u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC864u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC86Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC888u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC890u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC898u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC8FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC904u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC914u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC91Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC924u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC930u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC94Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC954u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC98Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC994u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEC9F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECA8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECABCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAF4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECAFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECB98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECBF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECC98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECCF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECD9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECDF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECE90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECED4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEDCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECEF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECF9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AECFECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED000u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED008u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED010u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED02Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED038u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED040u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED054u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED05Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED070u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED078u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED08Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED094u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED0F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED100u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED114u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED11Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED130u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED138u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED148u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED150u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED158u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED15Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED160u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED16Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED178u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED184u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED190u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED198u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED1E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED200u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED208u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED220u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED228u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED240u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED248u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED268u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED270u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED290u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED298u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED2E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED308u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED310u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED330u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED338u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED340u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED358u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED360u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED378u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED380u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED3DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED428u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED430u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED450u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED458u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED470u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED478u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED490u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED498u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED4F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED510u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED518u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED530u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED538u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED558u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED560u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED580u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED588u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED590u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED5F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED618u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED61Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED624u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED62Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED678u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED680u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED688u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED690u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED6F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED700u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED708u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED714u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED71Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED738u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED748u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED754u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED75Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED768u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED770u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED78Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED79Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED7F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED80Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED814u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED81Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED830u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED83Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED844u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED858u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED860u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED874u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED87Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED884u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED88Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED8FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED904u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED910u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED918u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED920u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED934u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED93Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED950u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED958u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED96Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED978u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED984u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED98Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED998u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AED9F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDA98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDADCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDAFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDB98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBE4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDBF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDC9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCF4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDCFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDD88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDDF4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDE98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDECCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDED8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDEF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF78u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDF90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEDFF4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE000u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE00Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE014u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE020u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE02Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE034u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE040u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE04Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE060u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE078u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE084u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE08Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE094u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE0FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE108u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE114u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE12Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE134u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE148u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE150u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE158u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE164u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE16Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE178u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE184u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE19Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE1F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE210u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE218u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE220u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE22Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE234u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE23Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE250u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE25Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE264u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE27Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE284u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE28Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE2A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE2ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE2CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE2D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE2F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE310u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE318u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE324u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE32Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE33Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE344u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE358u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE360u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE368u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE374u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE37Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE384u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE398u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE3FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE414u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE41Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE430u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE438u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE464u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE46Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE474u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE480u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE488u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE49Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4E8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE4F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE504u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE514u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE524u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE534u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE548u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE554u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE56Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE578u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE584u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE590u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE598u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE5ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE600u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE608u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE61Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE624u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE638u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE640u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE654u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE65Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE670u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE678u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE688u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE694u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE69Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE6FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE708u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE710u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE71Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE728u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE730u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE73Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE748u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE750u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE75Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE768u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE770u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE77Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE784u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE78Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE79Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7E4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE7F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE808u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE818u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE820u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE834u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE83Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE850u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE858u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE868u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE870u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE880u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE88Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE894u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE8FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE910u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE91Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE924u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE934u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE93Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE944u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE950u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE958u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE970u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE978u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE990u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9C4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEE9F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEA90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEAB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEAE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEAFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEB8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEBE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC08u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEC80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEECF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEED94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEDF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE28u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE64u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE8Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEE94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEED8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEEFCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF04u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF48u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF54u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEF9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEEFF4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF00Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF014u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF02Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF034u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF054u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF05Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF07Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF084u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF08Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF094u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0CCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF0FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF11Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF124u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF12Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF144u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF14Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF164u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF16Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF18Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF194u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF1F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF200u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF208u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF224u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF22Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF238u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF240u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF25Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF270u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF284u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2A0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2B4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF2D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF308u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF310u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF324u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF32Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF340u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF348u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF350u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF364u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF36Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF380u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF384u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF398u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF3FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF408u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF414u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF420u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF444u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF448u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF46Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF474u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF47Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF484u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4ACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4DCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF4F8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF50Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF514u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF524u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF52Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF534u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF548u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF550u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF564u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF56Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF580u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF588u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF598u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF59Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5A4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5BCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF5E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF610u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF620u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF628u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF630u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF63Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF640u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF650u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF65Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF664u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF6A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF6B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF6F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF6FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF718u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF738u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF770u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF79Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7B8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7D8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7F0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF7FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF808u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF810u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF820u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF83Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF84Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF854u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF85Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF868u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF870u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF87Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF894u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF89Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8B0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8C0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8C8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8D4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8E0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8ECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8F4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF8FCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF908u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF910u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF918u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF924u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF928u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF930u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF940u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF948u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF950u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF958u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF968u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF970u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF978u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF980u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF98Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF998u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF9A8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEF9D0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA70u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA80u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFA90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAACu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAB4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAD0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFADCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAE8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFAF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB34u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB94u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFB9Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBC0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBCCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFBD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC0Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC14u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC1Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC3Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC5Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFC88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD30u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD50u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD7Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFD98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDB0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDBCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDC4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDD4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDD8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFDF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE18u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE24u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE40u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE6Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE74u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE88u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE90u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFE98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEA0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEA8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEECu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFEF8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF00u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF10u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF20u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF2Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF38u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF44u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF4Cu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF58u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF60u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF68u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF84u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFF98u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFA4u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFB8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFC8u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFDCu, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFE0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFF0u, &recomp_unit_0186, "recomp_unit_0186");
    runtime.register_function(0x08AEFFF8u, &recomp_unit_0186, "recomp_unit_0186");
}
} // namespace psprecomp
