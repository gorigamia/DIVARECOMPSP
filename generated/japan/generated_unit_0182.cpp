#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0182[4093] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0,
    0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    26, 27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43,
    0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 51,
    0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 0,
    61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 81, 0, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85,
    0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 92, 93, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 96, 0, 97, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0,
    0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0,
    0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0,
    0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0,
    0, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 153, 0,
    0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0,
    166, 0, 167, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0,
    178, 0, 179, 0, 180, 181, 182, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187,
    188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    202, 0, 0, 0, 0, 203, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 210, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 233, 234, 0, 235, 0, 236, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0,
    0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 273, 274, 0, 0, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280,
    0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 292, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 317, 318, 0, 0, 319, 0, 0, 0, 0, 0, 320, 321, 0, 322, 0, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 0, 326, 327, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 334,
    0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 0,
    0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0,
    356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0,
    369, 0, 370, 0, 371, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382,
    0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 390, 0, 0, 391, 0, 0, 392, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405,
    0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0,
    0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423,
    0, 0, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0,
    432, 0, 433, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 442, 0, 443,
    0, 444, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0,
    454, 0, 455, 0, 456, 0, 457, 0, 0, 458, 459, 0, 0, 460, 0, 0, 461, 462, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 466, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 473, 0, 0, 0, 0, 474,
    0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 482, 0, 0, 0, 0,
    483, 0, 484, 0, 0, 485, 0, 0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 0, 0,
    0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 496, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0,
    0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0,
    0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 517, 0, 518,
    0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 526, 0, 527, 0,
    528, 0, 529, 0, 530, 0, 0, 531, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 542,
    0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0,
    0, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0,
    0, 0, 0, 0, 562, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 571,
    0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579,
    0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 587, 588, 0, 0, 589, 0, 590, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 611, 0,
    612, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 0,
    0, 0, 621, 622, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 626, 0, 627, 628, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0,
    632, 0, 0, 633, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 640, 0, 641, 0, 0,
    0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 645, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 650, 0, 0, 0, 0, 651, 0, 652,
    0, 653, 0, 0, 654, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 661, 0, 662, 0, 0,
    0, 0, 663, 0, 0, 0, 664, 0, 665, 0, 0, 666, 667, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 0, 0, 0, 672, 0, 673,
    0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 680, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 683,
    0, 684, 0, 0, 685, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 689, 690, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 695, 0,
    0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 699, 700, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 705, 0,
    706, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 710, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 716, 717, 0, 0, 0, 0, 718, 0, 0, 0,
    0, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 725, 726, 0, 0, 0, 0,
    0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732,
    733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 738,
    0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 744, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0,
    0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0,
    0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 763, 0,
    764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0,
    771, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 786, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 0,
    797, 0, 798, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 0, 807, 0, 808, 0, 809,
    0, 0, 810, 0, 811, 0, 812, 0, 813, 0, 0, 814, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 819, 0, 0, 0, 0, 820, 821, 0,
    822, 823, 0, 0, 0, 824, 825, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834,
    0, 0, 0, 0, 835, 836, 0, 0, 837, 838, 0, 0, 0, 0, 839, 840, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 845, 846,
    0, 0, 847, 848, 0, 0, 0, 0, 849, 850, 0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0, 0, 855, 856, 0, 0, 857, 858, 0, 0, 0,
    0, 859, 860, 0, 861, 0, 862, 0, 0, 863, 0, 864, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0,
    0, 0, 0, 870, 0, 871, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0,
    0, 0, 0, 878, 0, 0, 879, 0, 880, 0, 0, 881, 0, 882, 0, 0, 883, 0, 0, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0, 0, 0, 0,
    888, 0, 889, 0, 0, 0, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 894, 0, 895, 0, 0, 896, 0, 897,
    0, 0, 898, 0, 0, 899, 0, 0, 900, 0, 901, 0, 902, 0, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0, 907,
    0, 0, 0, 908, 0, 909, 0, 910, 0, 0, 911, 0, 912, 0, 0, 913, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 916, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 921, 0, 922, 0, 0, 923, 0, 924, 0, 0, 925,
    0, 0, 926, 0, 0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 932, 0, 0, 933, 0, 934, 0, 0, 935, 0, 936, 0, 0, 937, 0, 0, 938, 0, 0, 0, 0, 0, 939, 0, 940, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 941, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 945, 0, 946, 0, 0, 947, 0, 948, 0, 0, 949,
    0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 953, 0, 954, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 956, 0, 0, 957, 958, 0, 0, 0, 0, 959, 0, 960, 0, 0, 961, 0, 962, 0, 0, 963, 0, 964, 0, 0, 0, 965, 0, 966, 0, 0, 0,
    0, 0, 967, 0, 968, 0, 0, 969, 0, 970, 0, 0, 971, 0, 972, 0, 0, 0, 973, 0, 0, 974, 0, 975, 0, 0, 0, 0, 0, 976, 0, 977,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 978, 0, 979, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 981, 0, 982, 0, 983, 0, 0, 984, 0, 985, 0, 0,
    0, 986, 0, 987, 0, 0, 0, 0, 0, 988, 0, 989, 0, 0, 990, 0, 991, 0, 0, 992, 0, 993, 0, 0, 0, 994, 0, 0, 995, 0, 996, 0,
    0, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999, 0, 1000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1002, 0, 1003, 0, 1004,
    0, 0, 1005, 0, 1006, 0, 0, 0, 1007, 0, 1008, 0, 0, 0, 0, 0, 1009, 0, 1010, 0, 0, 1011, 0, 1012, 0, 0, 1013, 0, 1014, 0, 0, 0,
    1015, 0, 0, 1016, 0, 1017, 0, 0, 0, 0, 0, 1018, 0, 1019, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1020, 0, 1021, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1022, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1023, 0, 1024, 0, 1025, 0, 0, 1026, 0, 1027, 0, 0, 1028, 0, 1029, 0, 0, 0, 0, 0, 1030, 0, 1031, 0, 0, 1032, 0, 1033, 0, 0,
    1034, 0, 1035, 0, 0, 1036, 0, 0, 1037, 0, 1038, 0, 0, 0, 0, 0, 1039, 0, 1040, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1041, 0,
    1042, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1043, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1044, 0, 0, 1045, 0, 0, 0, 0, 1046, 0, 1047, 0, 1048, 0, 1049, 0, 1050, 0, 0, 1051, 0, 1052, 0, 1053, 0,
    0, 1054, 0, 1055, 0, 1056, 0, 0, 1057, 0, 1058, 0, 1059, 0, 0, 1060, 0, 1061, 1062, 0, 1063, 1064, 0, 0, 0, 0, 1065, 0, 1066, 0, 0, 0,
    1067, 0, 1068, 0, 1069, 0, 0, 1070, 0, 1071, 0, 1072, 0, 0, 1073, 0, 1074, 0, 1075, 0, 0, 1076, 0, 1077, 0, 1078, 0, 0, 1079, 0, 1080, 1081,
    1082, 0, 1083, 0, 1084, 0, 0, 1085, 0, 1086, 0, 1087, 0, 0, 1088, 0, 1089, 0, 1090, 0, 1091, 1092, 0, 1093, 0, 0, 0, 1094, 0, 0, 0, 0,
    0, 1095, 0, 1096, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1097, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1098, 1099, 1100, 0, 0, 0, 0, 0, 0, 0, 1101, 0, 0, 0, 0, 1102, 0, 0, 0, 0, 1103, 0, 1104,
    0, 0, 0, 0, 1105, 0, 1106, 0, 0, 0, 0, 1107, 0, 1108, 0, 0, 0, 0, 1109, 0, 1110, 0, 0, 0, 0, 1111, 0, 0, 1112,
};
void recomp_unit_0182_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ADC004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0182[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ADC004;
    case 2u: goto L_08ADC010;
    case 3u: goto L_08ADC018;
    case 4u: goto L_08ADC020;
    case 5u: goto L_08ADC034;
    case 6u: goto L_08ADC03C;
    case 7u: goto L_08ADC050;
    case 8u: goto L_08ADC058;
    case 9u: goto L_08ADC06C;
    case 10u: goto L_08ADC094;
    case 11u: goto L_08ADC0A8;
    case 12u: goto L_08ADC0B8;
    case 13u: goto L_08ADC0C0;
    case 14u: goto L_08ADC0CC;
    case 15u: goto L_08ADC0D4;
    case 16u: goto L_08ADC0E8;
    case 17u: goto L_08ADC0F0;
    case 18u: goto L_08ADC110;
    case 19u: goto L_08ADC118;
    case 20u: goto L_08ADC138;
    case 21u: goto L_08ADC13C;
    case 22u: goto L_08ADC14C;
    case 23u: goto L_08ADC15C;
    case 24u: goto L_08ADC164;
    case 25u: goto L_08ADC174;
    case 26u: goto L_08ADC184;
    case 27u: goto L_08ADC188;
    case 28u: goto L_08ADC190;
    case 29u: goto L_08ADC1A0;
    case 30u: goto L_08ADC1B0;
    case 31u: goto L_08ADC1B8;
    case 32u: goto L_08ADC1DC;
    case 33u: goto L_08ADC1E4;
    case 34u: goto L_08ADC208;
    case 35u: goto L_08ADC210;
    case 36u: goto L_08ADC224;
    case 37u: goto L_08ADC22C;
    case 38u: goto L_08ADC240;
    case 39u: goto L_08ADC248;
    case 40u: goto L_08ADC25C;
    case 41u: goto L_08ADC264;
    case 42u: goto L_08ADC278;
    case 43u: goto L_08ADC280;
    case 44u: goto L_08ADC294;
    case 45u: goto L_08ADC29C;
    case 46u: goto L_08ADC2B0;
    case 47u: goto L_08ADC2C0;
    case 48u: goto L_08ADC2DC;
    case 49u: goto L_08ADC2E4;
    case 50u: goto L_08ADC2F8;
    case 51u: goto L_08ADC300;
    case 52u: goto L_08ADC314;
    case 53u: goto L_08ADC324;
    case 54u: goto L_08ADC330;
    case 55u: goto L_08ADC338;
    case 56u: goto L_08ADC340;
    case 57u: goto L_08ADC348;
    case 58u: goto L_08ADC35C;
    case 59u: goto L_08ADC364;
    case 60u: goto L_08ADC378;
    case 61u: goto L_08ADC384;
    case 62u: goto L_08ADC38C;
    case 63u: goto L_08ADC394;
    case 64u: goto L_08ADC3B8;
    case 65u: goto L_08ADC3C0;
    case 66u: goto L_08ADC3C8;
    case 67u: goto L_08ADC3D0;
    case 68u: goto L_08ADC3F0;
    case 69u: goto L_08ADC3F8;
    case 70u: goto L_08ADC418;
    case 71u: goto L_08ADC428;
    case 72u: goto L_08ADC430;
    case 73u: goto L_08ADC438;
    case 74u: goto L_08ADC440;
    case 75u: goto L_08ADC458;
    case 76u: goto L_08ADC460;
    case 77u: goto L_08ADC4A0;
    case 78u: goto L_08ADC4B0;
    case 79u: goto L_08ADC4C4;
    case 80u: goto L_08ADC4D0;
    case 81u: goto L_08ADC4D4;
    case 82u: goto L_08ADC4E4;
    case 83u: goto L_08ADC4EC;
    case 84u: goto L_08ADC4F8;
    case 85u: goto L_08ADC500;
    case 86u: goto L_08ADC508;
    case 87u: goto L_08ADC52C;
    case 88u: goto L_08ADC534;
    case 89u: goto L_08ADC53C;
    case 90u: goto L_08ADC544;
    case 91u: goto L_08ADC564;
    case 92u: goto L_08ADC568;
    case 93u: goto L_08ADC56C;
    case 94u: goto L_08ADC574;
    case 95u: goto L_08ADC588;
    case 96u: goto L_08ADC594;
    case 97u: goto L_08ADC59C;
    case 98u: goto L_08ADC5A8;
    case 99u: goto L_08ADC5B0;
    case 100u: goto L_08ADC5B8;
    case 101u: goto L_08ADC5C0;
    case 102u: goto L_08ADC5D4;
    case 103u: goto L_08ADC5DC;
    case 104u: goto L_08ADC5F0;
    case 105u: goto L_08ADC5FC;
    case 106u: goto L_08ADC60C;
    case 107u: goto L_08ADC614;
    case 108u: goto L_08ADC620;
    case 109u: goto L_08ADC628;
    case 110u: goto L_08ADC630;
    case 111u: goto L_08ADC638;
    case 112u: goto L_08ADC644;
    case 113u: goto L_08ADC64C;
    case 114u: goto L_08ADC654;
    case 115u: goto L_08ADC65C;
    case 116u: goto L_08ADC670;
    case 117u: goto L_08ADC678;
    case 118u: goto L_08ADC68C;
    case 119u: goto L_08ADC694;
    case 120u: goto L_08ADC69C;
    case 121u: goto L_08ADC6A8;
    case 122u: goto L_08ADC6B0;
    case 123u: goto L_08ADC6B8;
    case 124u: goto L_08ADC6C0;
    case 125u: goto L_08ADC6CC;
    case 126u: goto L_08ADC6D4;
    case 127u: goto L_08ADC6E0;
    case 128u: goto L_08ADC6EC;
    case 129u: goto L_08ADC6F4;
    case 130u: goto L_08ADC708;
    case 131u: goto L_08ADC718;
    case 132u: goto L_08ADC720;
    case 133u: goto L_08ADC72C;
    case 134u: goto L_08ADC734;
    case 135u: goto L_08ADC73C;
    case 136u: goto L_08ADC744;
    case 137u: goto L_08ADC750;
    case 138u: goto L_08ADC758;
    case 139u: goto L_08ADC764;
    case 140u: goto L_08ADC770;
    case 141u: goto L_08ADC778;
    case 142u: goto L_08ADC78C;
    case 143u: goto L_08ADC79C;
    case 144u: goto L_08ADC7A4;
    case 145u: goto L_08ADC7B0;
    case 146u: goto L_08ADC7B8;
    case 147u: goto L_08ADC7C0;
    case 148u: goto L_08ADC7C8;
    case 149u: goto L_08ADC7D4;
    case 150u: goto L_08ADC7DC;
    case 151u: goto L_08ADC7E8;
    case 152u: goto L_08ADC7F4;
    case 153u: goto L_08ADC7FC;
    case 154u: goto L_08ADC810;
    case 155u: goto L_08ADC818;
    case 156u: goto L_08ADC82C;
    case 157u: goto L_08ADC838;
    case 158u: goto L_08ADC840;
    case 159u: goto L_08ADC848;
    case 160u: goto L_08ADC850;
    case 161u: goto L_08ADC858;
    case 162u: goto L_08ADC864;
    case 163u: goto L_08ADC86C;
    case 164u: goto L_08ADC874;
    case 165u: goto L_08ADC87C;
    case 166u: goto L_08ADC884;
    case 167u: goto L_08ADC88C;
    case 168u: goto L_08ADC898;
    case 169u: goto L_08ADC8A0;
    case 170u: goto L_08ADC8AC;
    case 171u: goto L_08ADC8B8;
    case 172u: goto L_08ADC8C4;
    case 173u: goto L_08ADC8D0;
    case 174u: goto L_08ADC8D8;
    case 175u: goto L_08ADC8E4;
    case 176u: goto L_08ADC8EC;
    case 177u: goto L_08ADC8F8;
    case 178u: goto L_08ADC904;
    case 179u: goto L_08ADC90C;
    case 180u: goto L_08ADC914;
    case 181u: goto L_08ADC918;
    case 182u: goto L_08ADC91C;
    case 183u: goto L_08ADC924;
    case 184u: goto L_08ADC92C;
    case 185u: goto L_08ADC940;
    case 186u: goto L_08ADC948;
    case 187u: goto L_08ADC980;
    case 188u: goto L_08ADC984;
    case 189u: goto L_08ADC998;
    case 190u: goto L_08ADC9B0;
    case 191u: goto L_08ADC9BC;
    case 192u: goto L_08ADC9D4;
    case 193u: goto L_08ADC9E4;
    case 194u: goto L_08ADCA0C;
    case 195u: goto L_08ADCA14;
    case 196u: goto L_08ADCA1C;
    case 197u: goto L_08ADCA44;
    case 198u: goto L_08ADCA4C;
    case 199u: goto L_08ADCA54;
    case 200u: goto L_08ADCA5C;
    case 201u: goto L_08ADCA7C;
    case 202u: goto L_08ADCA84;
    case 203u: goto L_08ADCA98;
    case 204u: goto L_08ADCA9C;
    case 205u: goto L_08ADCAA8;
    case 206u: goto L_08ADCAD0;
    case 207u: goto L_08ADCAD8;
    case 208u: goto L_08ADCAE0;
    case 209u: goto L_08ADCB08;
    case 210u: goto L_08ADCB0C;
    case 211u: goto L_08ADCB20;
    case 212u: goto L_08ADCB28;
    case 213u: goto L_08ADCB30;
    case 214u: goto L_08ADCB38;
    case 215u: goto L_08ADCB40;
    case 216u: goto L_08ADCB48;
    case 217u: goto L_08ADCB68;
    case 218u: goto L_08ADCB70;
    case 219u: goto L_08ADCB88;
    case 220u: goto L_08ADCB8C;
    case 221u: goto L_08ADCBB4;
    case 222u: goto L_08ADCBCC;
    case 223u: goto L_08ADCBD0;
    case 224u: goto L_08ADCBDC;
    case 225u: goto L_08ADCC08;
    case 226u: goto L_08ADCC1C;
    case 227u: goto L_08ADCC28;
    case 228u: goto L_08ADCC38;
    case 229u: goto L_08ADCC40;
    case 230u: goto L_08ADCC48;
    case 231u: goto L_08ADCC50;
    case 232u: goto L_08ADCC5C;
    case 233u: goto L_08ADCC60;
    case 234u: goto L_08ADCC64;
    case 235u: goto L_08ADCC6C;
    case 236u: goto L_08ADCC74;
    case 237u: goto L_08ADCC7C;
    case 238u: goto L_08ADCC94;
    case 239u: goto L_08ADCC9C;
    case 240u: goto L_08ADCCA8;
    case 241u: goto L_08ADCCB4;
    case 242u: goto L_08ADCCC0;
    case 243u: goto L_08ADCCC8;
    case 244u: goto L_08ADCCD4;
    case 245u: goto L_08ADCCDC;
    case 246u: goto L_08ADCCE4;
    case 247u: goto L_08ADCCF8;
    case 248u: goto L_08ADCD20;
    case 249u: goto L_08ADCD30;
    case 250u: goto L_08ADCD38;
    case 251u: goto L_08ADCD40;
    case 252u: goto L_08ADCD48;
    case 253u: goto L_08ADCD50;
    case 254u: goto L_08ADCD64;
    case 255u: goto L_08ADCD6C;
    case 256u: goto L_08ADCDC8;
    case 257u: goto L_08ADCDD0;
    case 258u: goto L_08ADCDFC;
    case 259u: goto L_08ADCE14;
    case 260u: goto L_08ADCE24;
    case 261u: goto L_08ADCE2C;
    case 262u: goto L_08ADCE30;
    case 263u: goto L_08ADCE3C;
    case 264u: goto L_08ADCE48;
    case 265u: goto L_08ADCE58;
    case 266u: goto L_08ADCE60;
    case 267u: goto L_08ADCE6C;
    case 268u: goto L_08ADCE7C;
    case 269u: goto L_08ADCE88;
    case 270u: goto L_08ADCE94;
    case 271u: goto L_08ADCE9C;
    case 272u: goto L_08ADCEA8;
    case 273u: goto L_08ADCEB4;
    case 274u: goto L_08ADCEB8;
    case 275u: goto L_08ADCED0;
    case 276u: goto L_08ADCED8;
    case 277u: goto L_08ADCEE0;
    case 278u: goto L_08ADCEEC;
    case 279u: goto L_08ADCEF4;
    case 280u: goto L_08ADCF00;
    case 281u: goto L_08ADCF08;
    case 282u: goto L_08ADCF10;
    case 283u: goto L_08ADCF24;
    case 284u: goto L_08ADCF40;
    case 285u: goto L_08ADCF48;
    case 286u: goto L_08ADCF5C;
    case 287u: goto L_08ADCF64;
    case 288u: goto L_08ADCFC0;
    case 289u: goto L_08ADCFC8;
    case 290u: goto L_08ADCFFC;
    case 291u: goto L_08ADD01C;
    case 292u: goto L_08ADD02C;
    case 293u: goto L_08ADD030;
    case 294u: goto L_08ADD044;
    case 295u: goto L_08ADD04C;
    case 296u: goto L_08ADD058;
    case 297u: goto L_08ADD060;
    case 298u: goto L_08ADD070;
    case 299u: goto L_08ADD078;
    case 300u: goto L_08ADD08C;
    case 301u: goto L_08ADD0A0;
    case 302u: goto L_08ADD0A8;
    case 303u: goto L_08ADD0B4;
    case 304u: goto L_08ADD0BC;
    case 305u: goto L_08ADD0C4;
    case 306u: goto L_08ADD0D8;
    case 307u: goto L_08ADD0F4;
    case 308u: goto L_08ADD108;
    case 309u: goto L_08ADD11C;
    case 310u: goto L_08ADD130;
    case 311u: goto L_08ADD138;
    case 312u: goto L_08ADD14C;
    case 313u: goto L_08ADD154;
    case 314u: goto L_08ADD1B0;
    case 315u: goto L_08ADD1B8;
    case 316u: goto L_08ADD1EC;
    case 317u: goto L_08ADD20C;
    case 318u: goto L_08ADD210;
    case 319u: goto L_08ADD21C;
    case 320u: goto L_08ADD234;
    case 321u: goto L_08ADD238;
    case 322u: goto L_08ADD240;
    case 323u: goto L_08ADD24C;
    case 324u: goto L_08ADD250;
    case 325u: goto L_08ADD258;
    case 326u: goto L_08ADD274;
    case 327u: goto L_08ADD278;
    case 328u: goto L_08ADD298;
    case 329u: goto L_08ADD2B4;
    case 330u: goto L_08ADD2C8;
    case 331u: goto L_08ADD2D0;
    case 332u: goto L_08ADD2E4;
    case 333u: goto L_08ADD2EC;
    case 334u: goto L_08ADD300;
    case 335u: goto L_08ADD308;
    case 336u: goto L_08ADD31C;
    case 337u: goto L_08ADD328;
    case 338u: goto L_08ADD330;
    case 339u: goto L_08ADD338;
    case 340u: goto L_08ADD35C;
    case 341u: goto L_08ADD368;
    case 342u: goto L_08ADD370;
    case 343u: goto L_08ADD378;
    case 344u: goto L_08ADD398;
    case 345u: goto L_08ADD3A0;
    case 346u: goto L_08ADD3A8;
    case 347u: goto L_08ADD3B4;
    case 348u: goto L_08ADD3BC;
    case 349u: goto L_08ADD3C4;
    case 350u: goto L_08ADD3CC;
    case 351u: goto L_08ADD3D4;
    case 352u: goto L_08ADD3E0;
    case 353u: goto L_08ADD3E8;
    case 354u: goto L_08ADD3F0;
    case 355u: goto L_08ADD3F8;
    case 356u: goto L_08ADD404;
    case 357u: goto L_08ADD40C;
    case 358u: goto L_08ADD414;
    case 359u: goto L_08ADD41C;
    case 360u: goto L_08ADD424;
    case 361u: goto L_08ADD430;
    case 362u: goto L_08ADD438;
    case 363u: goto L_08ADD440;
    case 364u: goto L_08ADD448;
    case 365u: goto L_08ADD454;
    case 366u: goto L_08ADD45C;
    case 367u: goto L_08ADD468;
    case 368u: goto L_08ADD47C;
    case 369u: goto L_08ADD484;
    case 370u: goto L_08ADD48C;
    case 371u: goto L_08ADD494;
    case 372u: goto L_08ADD4A4;
    case 373u: goto L_08ADD4AC;
    case 374u: goto L_08ADD4B8;
    case 375u: goto L_08ADD4C0;
    case 376u: goto L_08ADD4CC;
    case 377u: goto L_08ADD4D8;
    case 378u: goto L_08ADD4E0;
    case 379u: goto L_08ADD4E8;
    case 380u: goto L_08ADD4F0;
    case 381u: goto L_08ADD4F8;
    case 382u: goto L_08ADD500;
    case 383u: goto L_08ADD518;
    case 384u: goto L_08ADD524;
    case 385u: goto L_08ADD52C;
    case 386u: goto L_08ADD538;
    case 387u: goto L_08ADD540;
    case 388u: goto L_08ADD548;
    case 389u: goto L_08ADD55C;
    case 390u: goto L_08ADD588;
    case 391u: goto L_08ADD594;
    case 392u: goto L_08ADD5A0;
    case 393u: goto L_08ADD5A4;
    case 394u: goto L_08ADD5AC;
    case 395u: goto L_08ADD5B4;
    case 396u: goto L_08ADD5C8;
    case 397u: goto L_08ADD5D0;
    case 398u: goto L_08ADD608;
    case 399u: goto L_08ADD61C;
    case 400u: goto L_08ADD638;
    case 401u: goto L_08ADD64C;
    case 402u: goto L_08ADD654;
    case 403u: goto L_08ADD668;
    case 404u: goto L_08ADD674;
    case 405u: goto L_08ADD680;
    case 406u: goto L_08ADD688;
    case 407u: goto L_08ADD690;
    case 408u: goto L_08ADD698;
    case 409u: goto L_08ADD6A0;
    case 410u: goto L_08ADD6A8;
    case 411u: goto L_08ADD6C8;
    case 412u: goto L_08ADD6D0;
    case 413u: goto L_08ADD6F0;
    case 414u: goto L_08ADD6FC;
    case 415u: goto L_08ADD714;
    case 416u: goto L_08ADD71C;
    case 417u: goto L_08ADD724;
    case 418u: goto L_08ADD730;
    case 419u: goto L_08ADD738;
    case 420u: goto L_08ADD744;
    case 421u: goto L_08ADD764;
    case 422u: goto L_08ADD76C;
    case 423u: goto L_08ADD780;
    case 424u: goto L_08ADD790;
    case 425u: goto L_08ADD798;
    case 426u: goto L_08ADD7A4;
    case 427u: goto L_08ADD7AC;
    case 428u: goto L_08ADD7B8;
    case 429u: goto L_08ADD7D8;
    case 430u: goto L_08ADD7E0;
    case 431u: goto L_08ADD7F4;
    case 432u: goto L_08ADD804;
    case 433u: goto L_08ADD80C;
    case 434u: goto L_08ADD818;
    case 435u: goto L_08ADD820;
    case 436u: goto L_08ADD82C;
    case 437u: goto L_08ADD834;
    case 438u: goto L_08ADD848;
    case 439u: goto L_08ADD858;
    case 440u: goto L_08ADD864;
    case 441u: goto L_08ADD86C;
    case 442u: goto L_08ADD878;
    case 443u: goto L_08ADD880;
    case 444u: goto L_08ADD888;
    case 445u: goto L_08ADD88C;
    case 446u: goto L_08ADD8A4;
    case 447u: goto L_08ADD8AC;
    case 448u: goto L_08ADD8B8;
    case 449u: goto L_08ADD8C0;
    case 450u: goto L_08ADD8CC;
    case 451u: goto L_08ADD8D4;
    case 452u: goto L_08ADD8E8;
    case 453u: goto L_08ADD8F8;
    case 454u: goto L_08ADD904;
    case 455u: goto L_08ADD90C;
    case 456u: goto L_08ADD914;
    case 457u: goto L_08ADD91C;
    case 458u: goto L_08ADD928;
    case 459u: goto L_08ADD92C;
    case 460u: goto L_08ADD938;
    case 461u: goto L_08ADD944;
    case 462u: goto L_08ADD948;
    case 463u: goto L_08ADD950;
    case 464u: goto L_08ADD958;
    case 465u: goto L_08ADD970;
    case 466u: goto L_08ADD988;
    case 467u: goto L_08ADD98C;
    case 468u: goto L_08ADD9A0;
    case 469u: goto L_08ADD9B8;
    case 470u: goto L_08ADD9C8;
    case 471u: goto L_08ADD9D8;
    case 472u: goto L_08ADD9E8;
    case 473u: goto L_08ADD9EC;
    case 474u: goto L_08ADDA00;
    case 475u: goto L_08ADDA18;
    case 476u: goto L_08ADDA20;
    case 477u: goto L_08ADDA28;
    case 478u: goto L_08ADDA30;
    case 479u: goto L_08ADDA50;
    case 480u: goto L_08ADDA58;
    case 481u: goto L_08ADDA6C;
    case 482u: goto L_08ADDA70;
    case 483u: goto L_08ADDA84;
    case 484u: goto L_08ADDA8C;
    case 485u: goto L_08ADDA98;
    case 486u: goto L_08ADDAA8;
    case 487u: goto L_08ADDAAC;
    case 488u: goto L_08ADDAC0;
    case 489u: goto L_08ADDAD8;
    case 490u: goto L_08ADDAE0;
    case 491u: goto L_08ADDAE8;
    case 492u: goto L_08ADDAF0;
    case 493u: goto L_08ADDB10;
    case 494u: goto L_08ADDB18;
    case 495u: goto L_08ADDB2C;
    case 496u: goto L_08ADDB30;
    case 497u: goto L_08ADDB44;
    case 498u: goto L_08ADDB4C;
    case 499u: goto L_08ADDB5C;
    case 500u: goto L_08ADDB74;
    case 501u: goto L_08ADDB8C;
    case 502u: goto L_08ADDB94;
    case 503u: goto L_08ADDBA8;
    case 504u: goto L_08ADDBC0;
    case 505u: goto L_08ADDBC4;
    case 506u: goto L_08ADDBD8;
    case 507u: goto L_08ADDBE8;
    case 508u: goto L_08ADDBFC;
    case 509u: goto L_08ADDC10;
    case 510u: goto L_08ADDC18;
    case 511u: goto L_08ADDC2C;
    case 512u: goto L_08ADDC38;
    case 513u: goto L_08ADDC40;
    case 514u: goto L_08ADDC48;
    case 515u: goto L_08ADDC64;
    case 516u: goto L_08ADDC70;
    case 517u: goto L_08ADDC78;
    case 518u: goto L_08ADDC80;
    case 519u: goto L_08ADDCA0;
    case 520u: goto L_08ADDCA8;
    case 521u: goto L_08ADDCB0;
    case 522u: goto L_08ADDCC4;
    case 523u: goto L_08ADDCCC;
    case 524u: goto L_08ADDCE0;
    case 525u: goto L_08ADDCE8;
    case 526u: goto L_08ADDCF4;
    case 527u: goto L_08ADDCFC;
    case 528u: goto L_08ADDD04;
    case 529u: goto L_08ADDD0C;
    case 530u: goto L_08ADDD14;
    case 531u: goto L_08ADDD20;
    case 532u: goto L_08ADDD28;
    case 533u: goto L_08ADDD30;
    case 534u: goto L_08ADDD38;
    case 535u: goto L_08ADDD44;
    case 536u: goto L_08ADDD4C;
    case 537u: goto L_08ADDD54;
    case 538u: goto L_08ADDD5C;
    case 539u: goto L_08ADDD64;
    case 540u: goto L_08ADDD70;
    case 541u: goto L_08ADDD78;
    case 542u: goto L_08ADDD80;
    case 543u: goto L_08ADDD88;
    case 544u: goto L_08ADDD94;
    case 545u: goto L_08ADDD9C;
    case 546u: goto L_08ADDDA8;
    case 547u: goto L_08ADDDB4;
    case 548u: goto L_08ADDDC8;
    case 549u: goto L_08ADDDD4;
    case 550u: goto L_08ADDDDC;
    case 551u: goto L_08ADDDF0;
    case 552u: goto L_08ADDDF8;
    case 553u: goto L_08ADDE0C;
    case 554u: goto L_08ADDE14;
    case 555u: goto L_08ADDE1C;
    case 556u: goto L_08ADDE28;
    case 557u: goto L_08ADDE30;
    case 558u: goto L_08ADDE44;
    case 559u: goto L_08ADDE4C;
    case 560u: goto L_08ADDE6C;
    case 561u: goto L_08ADDE74;
    case 562u: goto L_08ADDE94;
    case 563u: goto L_08ADDE98;
    case 564u: goto L_08ADDEA0;
    case 565u: goto L_08ADDEB8;
    case 566u: goto L_08ADDEC0;
    case 567u: goto L_08ADDEC8;
    case 568u: goto L_08ADDED4;
    case 569u: goto L_08ADDEDC;
    case 570u: goto L_08ADDEE8;
    case 571u: goto L_08ADDF00;
    case 572u: goto L_08ADDF08;
    case 573u: goto L_08ADDF14;
    case 574u: goto L_08ADDF1C;
    case 575u: goto L_08ADDF30;
    case 576u: goto L_08ADDF38;
    case 577u: goto L_08ADDF58;
    case 578u: goto L_08ADDF60;
    case 579u: goto L_08ADDF80;
    case 580u: goto L_08ADDF88;
    case 581u: goto L_08ADDF90;
    case 582u: goto L_08ADDF9C;
    case 583u: goto L_08ADDFA4;
    case 584u: goto L_08ADDFAC;
    case 585u: goto L_08ADDFC0;
    case 586u: goto L_08ADDFC8;
    case 587u: goto L_08ADDFDC;
    case 588u: goto L_08ADDFE0;
    case 589u: goto L_08ADDFEC;
    case 590u: goto L_08ADDFF4;
    case 591u: goto L_08ADE020;
    case 592u: goto L_08ADE028;
    case 593u: goto L_08ADE030;
    case 594u: goto L_08ADE038;
    case 595u: goto L_08ADE064;
    case 596u: goto L_08ADE06C;
    case 597u: goto L_08ADE074;
    case 598u: goto L_08ADE07C;
    case 599u: goto L_08ADE0A8;
    case 600u: goto L_08ADE0B0;
    case 601u: goto L_08ADE0C4;
    case 602u: goto L_08ADE0CC;
    case 603u: goto L_08ADE104;
    case 604u: goto L_08ADE114;
    case 605u: goto L_08ADE12C;
    case 606u: goto L_08ADE134;
    case 607u: goto L_08ADE148;
    case 608u: goto L_08ADE15C;
    case 609u: goto L_08ADE168;
    case 610u: goto L_08ADE174;
    case 611u: goto L_08ADE17C;
    case 612u: goto L_08ADE184;
    case 613u: goto L_08ADE18C;
    case 614u: goto L_08ADE194;
    case 615u: goto L_08ADE19C;
    case 616u: goto L_08ADE1B4;
    case 617u: goto L_08ADE1BC;
    case 618u: goto L_08ADE1DC;
    case 619u: goto L_08ADE1F4;
    case 620u: goto L_08ADE1FC;
    case 621u: goto L_08ADE20C;
    case 622u: goto L_08ADE210;
    case 623u: goto L_08ADE218;
    case 624u: goto L_08ADE22C;
    case 625u: goto L_08ADE23C;
    case 626u: goto L_08ADE244;
    case 627u: goto L_08ADE24C;
    case 628u: goto L_08ADE250;
    case 629u: goto L_08ADE258;
    case 630u: goto L_08ADE26C;
    case 631u: goto L_08ADE27C;
    case 632u: goto L_08ADE284;
    case 633u: goto L_08ADE290;
    case 634u: goto L_08ADE298;
    case 635u: goto L_08ADE2A4;
    case 636u: goto L_08ADE2BC;
    case 637u: goto L_08ADE2C4;
    case 638u: goto L_08ADE2D8;
    case 639u: goto L_08ADE2EC;
    case 640u: goto L_08ADE2F0;
    case 641u: goto L_08ADE2F8;
    case 642u: goto L_08ADE30C;
    case 643u: goto L_08ADE31C;
    case 644u: goto L_08ADE324;
    case 645u: goto L_08ADE330;
    case 646u: goto L_08ADE334;
    case 647u: goto L_08ADE33C;
    case 648u: goto L_08ADE350;
    case 649u: goto L_08ADE360;
    case 650u: goto L_08ADE364;
    case 651u: goto L_08ADE378;
    case 652u: goto L_08ADE380;
    case 653u: goto L_08ADE388;
    case 654u: goto L_08ADE394;
    case 655u: goto L_08ADE39C;
    case 656u: goto L_08ADE3A8;
    case 657u: goto L_08ADE3BC;
    case 658u: goto L_08ADE3C4;
    case 659u: goto L_08ADE3D8;
    case 660u: goto L_08ADE3EC;
    case 661u: goto L_08ADE3F0;
    case 662u: goto L_08ADE3F8;
    case 663u: goto L_08ADE40C;
    case 664u: goto L_08ADE41C;
    case 665u: goto L_08ADE424;
    case 666u: goto L_08ADE430;
    case 667u: goto L_08ADE434;
    case 668u: goto L_08ADE43C;
    case 669u: goto L_08ADE450;
    case 670u: goto L_08ADE460;
    case 671u: goto L_08ADE464;
    case 672u: goto L_08ADE478;
    case 673u: goto L_08ADE480;
    case 674u: goto L_08ADE488;
    case 675u: goto L_08ADE494;
    case 676u: goto L_08ADE49C;
    case 677u: goto L_08ADE4A4;
    case 678u: goto L_08ADE4B8;
    case 679u: goto L_08ADE4D0;
    case 680u: goto L_08ADE4D4;
    case 681u: goto L_08ADE4DC;
    case 682u: goto L_08ADE4F0;
    case 683u: goto L_08ADE500;
    case 684u: goto L_08ADE508;
    case 685u: goto L_08ADE514;
    case 686u: goto L_08ADE518;
    case 687u: goto L_08ADE520;
    case 688u: goto L_08ADE534;
    case 689u: goto L_08ADE544;
    case 690u: goto L_08ADE548;
    case 691u: goto L_08ADE558;
    case 692u: goto L_08ADE560;
    case 693u: goto L_08ADE56C;
    case 694u: goto L_08ADE574;
    case 695u: goto L_08ADE57C;
    case 696u: goto L_08ADE590;
    case 697u: goto L_08ADE5A0;
    case 698u: goto L_08ADE5AC;
    case 699u: goto L_08ADE5B8;
    case 700u: goto L_08ADE5BC;
    case 701u: goto L_08ADE5C4;
    case 702u: goto L_08ADE5CC;
    case 703u: goto L_08ADE5E0;
    case 704u: goto L_08ADE5F8;
    case 705u: goto L_08ADE5FC;
    case 706u: goto L_08ADE604;
    case 707u: goto L_08ADE614;
    case 708u: goto L_08ADE628;
    case 709u: goto L_08ADE644;
    case 710u: goto L_08ADE648;
    case 711u: goto L_08ADE65C;
    case 712u: goto L_08ADE6A0;
    case 713u: goto L_08ADE6B4;
    case 714u: goto L_08ADE6C0;
    case 715u: goto L_08ADE6D0;
    case 716u: goto L_08ADE6DC;
    case 717u: goto L_08ADE6E0;
    case 718u: goto L_08ADE6F4;
    case 719u: goto L_08ADE718;
    case 720u: goto L_08ADE720;
    case 721u: goto L_08ADE728;
    case 722u: goto L_08ADE730;
    case 723u: goto L_08ADE750;
    case 724u: goto L_08ADE758;
    case 725u: goto L_08ADE76C;
    case 726u: goto L_08ADE770;
    case 727u: goto L_08ADE790;
    case 728u: goto L_08ADE7A8;
    case 729u: goto L_08ADE7B0;
    case 730u: goto L_08ADE7C4;
    case 731u: goto L_08ADE7E8;
    case 732u: goto L_08ADE800;
    case 733u: goto L_08ADE804;
    case 734u: goto L_08ADE810;
    case 735u: goto L_08ADE840;
    case 736u: goto L_08ADE860;
    case 737u: goto L_08ADE86C;
    case 738u: goto L_08ADE880;
    case 739u: goto L_08ADE888;
    case 740u: goto L_08ADE89C;
    case 741u: goto L_08ADE8A4;
    case 742u: goto L_08ADE8B8;
    case 743u: goto L_08ADE8C0;
    case 744u: goto L_08ADE8D4;
    case 745u: goto L_08ADE8E0;
    case 746u: goto L_08ADE8E8;
    case 747u: goto L_08ADE8F0;
    case 748u: goto L_08ADE910;
    case 749u: goto L_08ADE91C;
    case 750u: goto L_08ADE924;
    case 751u: goto L_08ADE92C;
    case 752u: goto L_08ADE94C;
    case 753u: goto L_08ADE958;
    case 754u: goto L_08ADE96C;
    case 755u: goto L_08ADE974;
    case 756u: goto L_08ADE988;
    case 757u: goto L_08ADE990;
    case 758u: goto L_08ADE9A8;
    case 759u: goto L_08ADE9B8;
    case 760u: goto L_08ADE9C0;
    case 761u: goto L_08ADE9EC;
    case 762u: goto L_08ADE9F4;
    case 763u: goto L_08ADE9FC;
    case 764u: goto L_08ADEA04;
    case 765u: goto L_08ADEA30;
    case 766u: goto L_08ADEA38;
    case 767u: goto L_08ADEA40;
    case 768u: goto L_08ADEA48;
    case 769u: goto L_08ADEA74;
    case 770u: goto L_08ADEA7C;
    case 771u: goto L_08ADEA84;
    case 772u: goto L_08ADEA8C;
    case 773u: goto L_08ADEAA0;
    case 774u: goto L_08ADEAA8;
    case 775u: goto L_08ADEAC0;
    case 776u: goto L_08ADEAD0;
    case 777u: goto L_08ADEAD8;
    case 778u: goto L_08ADEB04;
    case 779u: goto L_08ADEB0C;
    case 780u: goto L_08ADEB14;
    case 781u: goto L_08ADEB1C;
    case 782u: goto L_08ADEB48;
    case 783u: goto L_08ADEB50;
    case 784u: goto L_08ADEB58;
    case 785u: goto L_08ADEB60;
    case 786u: goto L_08ADEB8C;
    case 787u: goto L_08ADEB94;
    case 788u: goto L_08ADEBA0;
    case 789u: goto L_08ADEBA8;
    case 790u: goto L_08ADEBB0;
    case 791u: goto L_08ADEBB8;
    case 792u: goto L_08ADEBCC;
    case 793u: goto L_08ADEBD4;
    case 794u: goto L_08ADEBE8;
    case 795u: goto L_08ADEBF0;
    case 796u: goto L_08ADEBF8;
    case 797u: goto L_08ADEC04;
    case 798u: goto L_08ADEC0C;
    case 799u: goto L_08ADEC14;
    case 800u: goto L_08ADEC1C;
    case 801u: goto L_08ADEC28;
    case 802u: goto L_08ADEC30;
    case 803u: goto L_08ADEC38;
    case 804u: goto L_08ADEC40;
    case 805u: goto L_08ADEC54;
    case 806u: goto L_08ADEC5C;
    case 807u: goto L_08ADEC70;
    case 808u: goto L_08ADEC78;
    case 809u: goto L_08ADEC80;
    case 810u: goto L_08ADEC8C;
    case 811u: goto L_08ADEC94;
    case 812u: goto L_08ADEC9C;
    case 813u: goto L_08ADECA4;
    case 814u: goto L_08ADECB0;
    case 815u: goto L_08ADECB8;
    case 816u: goto L_08ADECC4;
    case 817u: goto L_08ADECD0;
    case 818u: goto L_08ADECDC;
    case 819u: goto L_08ADECE4;
    case 820u: goto L_08ADECF8;
    case 821u: goto L_08ADECFC;
    case 822u: goto L_08ADED04;
    case 823u: goto L_08ADED08;
    case 824u: goto L_08ADED18;
    case 825u: goto L_08ADED1C;
    case 826u: goto L_08ADED24;
    case 827u: goto L_08ADED2C;
    case 828u: goto L_08ADED38;
    case 829u: goto L_08ADED40;
    case 830u: goto L_08ADED4C;
    case 831u: goto L_08ADED58;
    case 832u: goto L_08ADED68;
    case 833u: goto L_08ADED78;
    case 834u: goto L_08ADED80;
    case 835u: goto L_08ADED94;
    case 836u: goto L_08ADED98;
    case 837u: goto L_08ADEDA4;
    case 838u: goto L_08ADEDA8;
    case 839u: goto L_08ADEDBC;
    case 840u: goto L_08ADEDC0;
    case 841u: goto L_08ADEDC8;
    case 842u: goto L_08ADEDD0;
    case 843u: goto L_08ADEDE0;
    case 844u: goto L_08ADEDE8;
    case 845u: goto L_08ADEDFC;
    case 846u: goto L_08ADEE00;
    case 847u: goto L_08ADEE0C;
    case 848u: goto L_08ADEE10;
    case 849u: goto L_08ADEE24;
    case 850u: goto L_08ADEE28;
    case 851u: goto L_08ADEE30;
    case 852u: goto L_08ADEE38;
    case 853u: goto L_08ADEE44;
    case 854u: goto L_08ADEE4C;
    case 855u: goto L_08ADEE60;
    case 856u: goto L_08ADEE64;
    case 857u: goto L_08ADEE70;
    case 858u: goto L_08ADEE74;
    case 859u: goto L_08ADEE88;
    case 860u: goto L_08ADEE8C;
    case 861u: goto L_08ADEE94;
    case 862u: goto L_08ADEE9C;
    case 863u: goto L_08ADEEA8;
    case 864u: goto L_08ADEEB0;
    case 865u: goto L_08ADEEBC;
    case 866u: goto L_08ADEEC4;
    case 867u: goto L_08ADEED8;
    case 868u: goto L_08ADEEE0;
    case 869u: goto L_08ADEEF4;
    case 870u: goto L_08ADEF10;
    case 871u: goto L_08ADEF18;
    case 872u: goto L_08ADEF24;
    case 873u: goto L_08ADEF2C;
    case 874u: goto L_08ADEF40;
    case 875u: goto L_08ADEF48;
    case 876u: goto L_08ADEF68;
    case 877u: goto L_08ADEF70;
    case 878u: goto L_08ADEF90;
    case 879u: goto L_08ADEF9C;
    case 880u: goto L_08ADEFA4;
    case 881u: goto L_08ADEFB0;
    case 882u: goto L_08ADEFB8;
    case 883u: goto L_08ADEFC4;
    case 884u: goto L_08ADEFD4;
    case 885u: goto L_08ADEFDC;
    case 886u: goto L_08ADEFE8;
    case 887u: goto L_08ADEFF0;
    case 888u: goto L_08ADF004;
    case 889u: goto L_08ADF00C;
    case 890u: goto L_08ADF02C;
    case 891u: goto L_08ADF034;
    case 892u: goto L_08ADF054;
    case 893u: goto L_08ADF060;
    case 894u: goto L_08ADF064;
    case 895u: goto L_08ADF06C;
    case 896u: goto L_08ADF078;
    case 897u: goto L_08ADF080;
    case 898u: goto L_08ADF08C;
    case 899u: goto L_08ADF098;
    case 900u: goto L_08ADF0A4;
    case 901u: goto L_08ADF0AC;
    case 902u: goto L_08ADF0B4;
    case 903u: goto L_08ADF0D0;
    case 904u: goto L_08ADF0E8;
    case 905u: goto L_08ADF0F0;
    case 906u: goto L_08ADF0F8;
    case 907u: goto L_08ADF100;
    case 908u: goto L_08ADF110;
    case 909u: goto L_08ADF118;
    case 910u: goto L_08ADF120;
    case 911u: goto L_08ADF12C;
    case 912u: goto L_08ADF134;
    case 913u: goto L_08ADF140;
    case 914u: goto L_08ADF14C;
    case 915u: goto L_08ADF164;
    case 916u: goto L_08ADF16C;
    case 917u: goto L_08ADF19C;
    case 918u: goto L_08ADF1A4;
    case 919u: goto L_08ADF214;
    case 920u: goto L_08ADF24C;
    case 921u: goto L_08ADF258;
    case 922u: goto L_08ADF260;
    case 923u: goto L_08ADF26C;
    case 924u: goto L_08ADF274;
    case 925u: goto L_08ADF280;
    case 926u: goto L_08ADF28C;
    case 927u: goto L_08ADF2A4;
    case 928u: goto L_08ADF2AC;
    case 929u: goto L_08ADF2DC;
    case 930u: goto L_08ADF2E4;
    case 931u: goto L_08ADF354;
    case 932u: goto L_08ADF38C;
    case 933u: goto L_08ADF398;
    case 934u: goto L_08ADF3A0;
    case 935u: goto L_08ADF3AC;
    case 936u: goto L_08ADF3B4;
    case 937u: goto L_08ADF3C0;
    case 938u: goto L_08ADF3CC;
    case 939u: goto L_08ADF3E4;
    case 940u: goto L_08ADF3EC;
    case 941u: goto L_08ADF41C;
    case 942u: goto L_08ADF424;
    case 943u: goto L_08ADF494;
    case 944u: goto L_08ADF4CC;
    case 945u: goto L_08ADF4D8;
    case 946u: goto L_08ADF4E0;
    case 947u: goto L_08ADF4EC;
    case 948u: goto L_08ADF4F4;
    case 949u: goto L_08ADF500;
    case 950u: goto L_08ADF508;
    case 951u: goto L_08ADF520;
    case 952u: goto L_08ADF528;
    case 953u: goto L_08ADF558;
    case 954u: goto L_08ADF560;
    case 955u: goto L_08ADF5D0;
    case 956u: goto L_08ADF608;
    case 957u: goto L_08ADF614;
    case 958u: goto L_08ADF618;
    case 959u: goto L_08ADF62C;
    case 960u: goto L_08ADF634;
    case 961u: goto L_08ADF640;
    case 962u: goto L_08ADF648;
    case 963u: goto L_08ADF654;
    case 964u: goto L_08ADF65C;
    case 965u: goto L_08ADF66C;
    case 966u: goto L_08ADF674;
    case 967u: goto L_08ADF68C;
    case 968u: goto L_08ADF694;
    case 969u: goto L_08ADF6A0;
    case 970u: goto L_08ADF6A8;
    case 971u: goto L_08ADF6B4;
    case 972u: goto L_08ADF6BC;
    case 973u: goto L_08ADF6CC;
    case 974u: goto L_08ADF6D8;
    case 975u: goto L_08ADF6E0;
    case 976u: goto L_08ADF6F8;
    case 977u: goto L_08ADF700;
    case 978u: goto L_08ADF730;
    case 979u: goto L_08ADF738;
    case 980u: goto L_08ADF7A8;
    case 981u: goto L_08ADF7D4;
    case 982u: goto L_08ADF7DC;
    case 983u: goto L_08ADF7E4;
    case 984u: goto L_08ADF7F0;
    case 985u: goto L_08ADF7F8;
    case 986u: goto L_08ADF808;
    case 987u: goto L_08ADF810;
    case 988u: goto L_08ADF828;
    case 989u: goto L_08ADF830;
    case 990u: goto L_08ADF83C;
    case 991u: goto L_08ADF844;
    case 992u: goto L_08ADF850;
    case 993u: goto L_08ADF858;
    case 994u: goto L_08ADF868;
    case 995u: goto L_08ADF874;
    case 996u: goto L_08ADF87C;
    case 997u: goto L_08ADF894;
    case 998u: goto L_08ADF89C;
    case 999u: goto L_08ADF8CC;
    case 1000u: goto L_08ADF8D4;
    case 1001u: goto L_08ADF944;
    case 1002u: goto L_08ADF970;
    case 1003u: goto L_08ADF978;
    case 1004u: goto L_08ADF980;
    case 1005u: goto L_08ADF98C;
    case 1006u: goto L_08ADF994;
    case 1007u: goto L_08ADF9A4;
    case 1008u: goto L_08ADF9AC;
    case 1009u: goto L_08ADF9C4;
    case 1010u: goto L_08ADF9CC;
    case 1011u: goto L_08ADF9D8;
    case 1012u: goto L_08ADF9E0;
    case 1013u: goto L_08ADF9EC;
    case 1014u: goto L_08ADF9F4;
    case 1015u: goto L_08ADFA04;
    case 1016u: goto L_08ADFA10;
    case 1017u: goto L_08ADFA18;
    case 1018u: goto L_08ADFA30;
    case 1019u: goto L_08ADFA38;
    case 1020u: goto L_08ADFA68;
    case 1021u: goto L_08ADFA70;
    case 1022u: goto L_08ADFAE0;
    case 1023u: goto L_08ADFB0C;
    case 1024u: goto L_08ADFB14;
    case 1025u: goto L_08ADFB1C;
    case 1026u: goto L_08ADFB28;
    case 1027u: goto L_08ADFB30;
    case 1028u: goto L_08ADFB3C;
    case 1029u: goto L_08ADFB44;
    case 1030u: goto L_08ADFB5C;
    case 1031u: goto L_08ADFB64;
    case 1032u: goto L_08ADFB70;
    case 1033u: goto L_08ADFB78;
    case 1034u: goto L_08ADFB84;
    case 1035u: goto L_08ADFB8C;
    case 1036u: goto L_08ADFB98;
    case 1037u: goto L_08ADFBA4;
    case 1038u: goto L_08ADFBAC;
    case 1039u: goto L_08ADFBC4;
    case 1040u: goto L_08ADFBCC;
    case 1041u: goto L_08ADFBFC;
    case 1042u: goto L_08ADFC04;
    case 1043u: goto L_08ADFC74;
    case 1044u: goto L_08ADFCA0;
    case 1045u: goto L_08ADFCAC;
    case 1046u: goto L_08ADFCC0;
    case 1047u: goto L_08ADFCC8;
    case 1048u: goto L_08ADFCD0;
    case 1049u: goto L_08ADFCD8;
    case 1050u: goto L_08ADFCE0;
    case 1051u: goto L_08ADFCEC;
    case 1052u: goto L_08ADFCF4;
    case 1053u: goto L_08ADFCFC;
    case 1054u: goto L_08ADFD08;
    case 1055u: goto L_08ADFD10;
    case 1056u: goto L_08ADFD18;
    case 1057u: goto L_08ADFD24;
    case 1058u: goto L_08ADFD2C;
    case 1059u: goto L_08ADFD34;
    case 1060u: goto L_08ADFD40;
    case 1061u: goto L_08ADFD48;
    case 1062u: goto L_08ADFD4C;
    case 1063u: goto L_08ADFD54;
    case 1064u: goto L_08ADFD58;
    case 1065u: goto L_08ADFD6C;
    case 1066u: goto L_08ADFD74;
    case 1067u: goto L_08ADFD84;
    case 1068u: goto L_08ADFD8C;
    case 1069u: goto L_08ADFD94;
    case 1070u: goto L_08ADFDA0;
    case 1071u: goto L_08ADFDA8;
    case 1072u: goto L_08ADFDB0;
    case 1073u: goto L_08ADFDBC;
    case 1074u: goto L_08ADFDC4;
    case 1075u: goto L_08ADFDCC;
    case 1076u: goto L_08ADFDD8;
    case 1077u: goto L_08ADFDE0;
    case 1078u: goto L_08ADFDE8;
    case 1079u: goto L_08ADFDF4;
    case 1080u: goto L_08ADFDFC;
    case 1081u: goto L_08ADFE00;
    case 1082u: goto L_08ADFE04;
    case 1083u: goto L_08ADFE0C;
    case 1084u: goto L_08ADFE14;
    case 1085u: goto L_08ADFE20;
    case 1086u: goto L_08ADFE28;
    case 1087u: goto L_08ADFE30;
    case 1088u: goto L_08ADFE3C;
    case 1089u: goto L_08ADFE44;
    case 1090u: goto L_08ADFE4C;
    case 1091u: goto L_08ADFE54;
    case 1092u: goto L_08ADFE58;
    case 1093u: goto L_08ADFE60;
    case 1094u: goto L_08ADFE70;
    case 1095u: goto L_08ADFE88;
    case 1096u: goto L_08ADFE90;
    case 1097u: goto L_08ADFEE8;
    case 1098u: goto L_08ADFF28;
    case 1099u: goto L_08ADFF2C;
    case 1100u: goto L_08ADFF30;
    case 1101u: goto L_08ADFF50;
    case 1102u: goto L_08ADFF64;
    case 1103u: goto L_08ADFF78;
    case 1104u: goto L_08ADFF80;
    case 1105u: goto L_08ADFF94;
    case 1106u: goto L_08ADFF9C;
    case 1107u: goto L_08ADFFB0;
    case 1108u: goto L_08ADFFB8;
    case 1109u: goto L_08ADFFCC;
    case 1110u: goto L_08ADFFD4;
    case 1111u: goto L_08ADFFE8;
    case 1112u: goto L_08ADFFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ADC004:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC010u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC010u) goto L_08ADC010;
    return;
L_08ADC010:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ADC13C;
    }
    goto L_08ADC018;
L_08ADC018:
    ctx.set_gpr(31, 0x08ADC020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC020u) goto L_08ADC020;
    return;
L_08ADC020:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC034u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC034u) goto L_08ADC034;
    return;
L_08ADC034:
    ctx.set_gpr(31, 0x08ADC03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC03Cu) goto L_08ADC03C;
    return;
L_08ADC03C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADC050u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC050u) goto L_08ADC050;
    return;
L_08ADC050:
    ctx.set_gpr(31, 0x08ADC058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC058u) goto L_08ADC058;
    return;
L_08ADC058:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADC06Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC06Cu) goto L_08ADC06C;
    return;
L_08ADC06C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADC094u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADC094u) goto L_08ADC094;
    return;
L_08ADC094:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(427));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(229));
    ctx.set_gpr(31, 0x08ADC0A8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6716));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0A8u) goto L_08ADC0A8;
    return;
L_08ADC0A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADC0B8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0B8u) goto L_08ADC0B8;
    return;
L_08ADC0B8:
    ctx.set_gpr(31, 0x08ADC0C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0C0u) goto L_08ADC0C0;
    return;
L_08ADC0C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADC0CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC0CCu) goto L_08ADC0CC;
    return;
L_08ADC0CC:
    ctx.set_gpr(31, 0x08ADC0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0D4u) goto L_08ADC0D4;
    return;
L_08ADC0D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADC0E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC0E8u) goto L_08ADC0E8;
    return;
L_08ADC0E8:
    ctx.set_gpr(31, 0x08ADC0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0F0u) goto L_08ADC0F0;
    return;
L_08ADC0F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADC110u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADC110u) goto L_08ADC110;
    return;
L_08ADC110:
    ctx.set_gpr(31, 0x08ADC118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC118u) goto L_08ADC118;
    return;
L_08ADC118:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADC138u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADC138u) goto L_08ADC138;
    return;
L_08ADC138:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ADC13C;
L_08ADC13C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC14C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADC15C;
L_08ADC15C:
    ctx.set_gpr(31, 0x08ADC164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC164u) goto L_08ADC164;
    return;
L_08ADC164:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(81));
    ctx.set_gpr(31, 0x08ADC174u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC174u) goto L_08ADC174;
    return;
L_08ADC174:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC15C;
      }
      goto L_08ADC184;
    }
L_08ADC184:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ADC188;
L_08ADC188:
    ctx.set_gpr(31, 0x08ADC190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC190u) goto L_08ADC190;
    return;
L_08ADC190:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(31, 0x08ADC1A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1A0u) goto L_08ADC1A0;
    return;
L_08ADC1A0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC188;
      }
      goto L_08ADC1B0;
    }
L_08ADC1B0:
    ctx.set_gpr(31, 0x08ADC1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1B8u) goto L_08ADC1B8;
    return;
L_08ADC1B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADC1DCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1DCu) goto L_08ADC1DC;
    return;
L_08ADC1DC:
    ctx.set_gpr(31, 0x08ADC1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1E4u) goto L_08ADC1E4;
    return;
L_08ADC1E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17364u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADC208u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADC208u) goto L_08ADC208;
    return;
L_08ADC208:
    ctx.set_gpr(31, 0x08ADC210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC210u) goto L_08ADC210;
    return;
L_08ADC210:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADC224u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC224u) goto L_08ADC224;
    return;
L_08ADC224:
    ctx.set_gpr(31, 0x08ADC22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC22Cu) goto L_08ADC22C;
    return;
L_08ADC22C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADC240u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC240u) goto L_08ADC240;
    return;
L_08ADC240:
    ctx.set_gpr(31, 0x08ADC248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC248u) goto L_08ADC248;
    return;
L_08ADC248:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    ctx.set_gpr(31, 0x08ADC25Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC25Cu) goto L_08ADC25C;
    return;
L_08ADC25C:
    ctx.set_gpr(31, 0x08ADC264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC264u) goto L_08ADC264;
    return;
L_08ADC264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(38));
    ctx.set_gpr(31, 0x08ADC278u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC278u) goto L_08ADC278;
    return;
L_08ADC278:
    ctx.set_gpr(31, 0x08ADC280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC280u) goto L_08ADC280;
    return;
L_08ADC280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(39));
    ctx.set_gpr(31, 0x08ADC294u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC294u) goto L_08ADC294;
    return;
L_08ADC294:
    ctx.set_gpr(31, 0x08ADC29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC29Cu) goto L_08ADC29C;
    return;
L_08ADC29C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08ADC2B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC2B0u) goto L_08ADC2B0;
    return;
L_08ADC2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADC2DCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 718u, 0x08AE268Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC2DCu) goto L_08ADC2DC;
    return;
L_08ADC2DC:
    ctx.set_gpr(31, 0x08ADC2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2E4u) goto L_08ADC2E4;
    return;
L_08ADC2E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADC2F8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC2F8u) goto L_08ADC2F8;
    return;
L_08ADC2F8:
    ctx.set_gpr(31, 0x08ADC300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC300u) goto L_08ADC300;
    return;
L_08ADC300:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADC314u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC314u) goto L_08ADC314;
    return;
L_08ADC314:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
        goto L_08ADC980;
    }
    goto L_08ADC324;
L_08ADC324:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
        goto L_08ADC4E4;
    }
    goto L_08ADC330;
L_08ADC330:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC340;
      }
      goto L_08ADC338;
    }
L_08ADC338:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ADC984;
      }
      goto L_08ADC340;
    }
L_08ADC340:
    ctx.set_gpr(31, 0x08ADC348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC348u) goto L_08ADC348;
    return;
L_08ADC348:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADC35Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC35Cu) goto L_08ADC35C;
    return;
L_08ADC35C:
    ctx.set_gpr(31, 0x08ADC364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC364u) goto L_08ADC364;
    return;
L_08ADC364:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADC378u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC378u) goto L_08ADC378;
    return;
L_08ADC378:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC3C0;
      }
      goto L_08ADC384;
    }
L_08ADC384:
    ctx.set_gpr(31, 0x08ADC38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADC38Cu) goto L_08ADC38C;
    return;
L_08ADC38C:
    ctx.set_gpr(31, 0x08ADC394u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC394u) goto L_08ADC394;
    return;
L_08ADC394:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC3B8u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3B8u) goto L_08ADC3B8;
    return;
L_08ADC3B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC3F0;
      }
      goto L_08ADC3C0;
    }
L_08ADC3C0:
    ctx.set_gpr(31, 0x08ADC3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3C8u) goto L_08ADC3C8;
    return;
L_08ADC3C8:
    ctx.set_gpr(31, 0x08ADC3D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3D0u) goto L_08ADC3D0;
    return;
L_08ADC3D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC3F0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3F0u) goto L_08ADC3F0;
    return;
L_08ADC3F0:
    ctx.set_gpr(31, 0x08ADC3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3F8u) goto L_08ADC3F8;
    return;
L_08ADC3F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADC418u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ADC418u) goto L_08ADC418;
    return;
L_08ADC418:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADC428u);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC428u) goto L_08ADC428;
    return;
L_08ADC428:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
        goto L_08ADC4D4;
    }
    goto L_08ADC430;
L_08ADC430:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08ADC438;
L_08ADC438:
    ctx.set_gpr(31, 0x08ADC440u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC440u) goto L_08ADC440;
    return;
L_08ADC440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08ADC458u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADC458u) goto L_08ADC458;
    return;
L_08ADC458:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 50298u << 16u);
        goto L_08ADC4A0;
    }
    goto L_08ADC460;
L_08ADC460:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ADC4B0;
      }
      goto L_08ADC4A0;
    }
L_08ADC4A0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    goto L_08ADC4B0;
L_08ADC4B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ADC4C4u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC4C4u) goto L_08ADC4C4;
    return;
L_08ADC4C4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08ADC438;
    }
    goto L_08ADC4D0;
L_08ADC4D0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    goto L_08ADC4D4;
L_08ADC4D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADC980;
      }
      goto L_08ADC4E4;
    }
L_08ADC4E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC56C;
      }
      goto L_08ADC4EC;
    }
L_08ADC4EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC534;
      }
      goto L_08ADC4F8;
    }
L_08ADC4F8:
    ctx.set_gpr(31, 0x08ADC500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADC500u) goto L_08ADC500;
    return;
L_08ADC500:
    ctx.set_gpr(31, 0x08ADC508u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC508u) goto L_08ADC508;
    return;
L_08ADC508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC52Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADC52Cu) goto L_08ADC52C;
    return;
L_08ADC52C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADC568;
      }
      goto L_08ADC534;
    }
L_08ADC534:
    ctx.set_gpr(31, 0x08ADC53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADC53Cu) goto L_08ADC53C;
    return;
L_08ADC53C:
    ctx.set_gpr(31, 0x08ADC544u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC544u) goto L_08ADC544;
    return;
L_08ADC544:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC564u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADC564u) goto L_08ADC564;
    return;
L_08ADC564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ADC568;
L_08ADC568:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADC56C;
L_08ADC56C:
    ctx.set_gpr(31, 0x08ADC574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC574u) goto L_08ADC574;
    return;
L_08ADC574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADC588u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC588u) goto L_08ADC588;
    return;
L_08ADC588:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADC91C;
    }
    goto L_08ADC594;
L_08ADC594:
    ctx.set_gpr(31, 0x08ADC59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC59Cu) goto L_08ADC59C;
    return;
L_08ADC59C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC5A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC5A8u) goto L_08ADC5A8;
    return;
L_08ADC5A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC60C;
      }
      goto L_08ADC5B0;
    }
L_08ADC5B0:
    ctx.set_gpr(31, 0x08ADC5B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 554u, 0x08AE1D90u>(ctx, &aot_mem) && ctx.pc == 0x08ADC5B8u) goto L_08ADC5B8;
    return;
L_08ADC5B8:
    ctx.set_gpr(31, 0x08ADC5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC5C0u) goto L_08ADC5C0;
    return;
L_08ADC5C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADC5D4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC5D4u) goto L_08ADC5D4;
    return;
L_08ADC5D4:
    ctx.set_gpr(31, 0x08ADC5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC5DCu) goto L_08ADC5DC;
    return;
L_08ADC5DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADC5F0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC5F0u) goto L_08ADC5F0;
    return;
L_08ADC5F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
        goto L_08ADC918;
    }
    goto L_08ADC5FC;
L_08ADC5FC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC60C;
    }
L_08ADC60C:
    ctx.set_gpr(31, 0x08ADC614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC614u) goto L_08ADC614;
    return;
L_08ADC614:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC620u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC620u) goto L_08ADC620;
    return;
L_08ADC620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC630;
      }
      goto L_08ADC628;
    }
L_08ADC628:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC630;
    }
L_08ADC630:
    ctx.set_gpr(31, 0x08ADC638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC638u) goto L_08ADC638;
    return;
L_08ADC638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC644u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC644u) goto L_08ADC644;
    return;
L_08ADC644:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC694;
      }
      goto L_08ADC64C;
    }
L_08ADC64C:
    ctx.set_gpr(31, 0x08ADC654u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 636u, 0x08AE2224u>(ctx, &aot_mem) && ctx.pc == 0x08ADC654u) goto L_08ADC654;
    return;
L_08ADC654:
    ctx.set_gpr(31, 0x08ADC65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC65Cu) goto L_08ADC65C;
    return;
L_08ADC65C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADC670u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC670u) goto L_08ADC670;
    return;
L_08ADC670:
    ctx.set_gpr(31, 0x08ADC678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC678u) goto L_08ADC678;
    return;
L_08ADC678:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADC68Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC68Cu) goto L_08ADC68C;
    return;
L_08ADC68C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC694;
    }
L_08ADC694:
    ctx.set_gpr(31, 0x08ADC69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC69Cu) goto L_08ADC69C;
    return;
L_08ADC69C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC6A8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC6A8u) goto L_08ADC6A8;
    return;
L_08ADC6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC6B8;
      }
      goto L_08ADC6B0;
    }
L_08ADC6B0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC6B8;
    }
L_08ADC6B8:
    ctx.set_gpr(31, 0x08ADC6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC6C0u) goto L_08ADC6C0;
    return;
L_08ADC6C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC6CCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC6CCu) goto L_08ADC6CC;
    return;
L_08ADC6CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC73C;
      }
      goto L_08ADC6D4;
    }
L_08ADC6D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC73C;
      }
      goto L_08ADC6E0;
    }
L_08ADC6E0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC73C;
      }
      goto L_08ADC6EC;
    }
L_08ADC6EC:
    ctx.set_gpr(31, 0x08ADC6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC6F4u) goto L_08ADC6F4;
    return;
L_08ADC6F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC708u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC708u) goto L_08ADC708;
    return;
L_08ADC708:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
        goto L_08ADC720;
    }
    goto L_08ADC718;
L_08ADC718:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08ADC720;
L_08ADC720:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADC72Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 530u, 0x08AE1BBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC72Cu) goto L_08ADC72C;
    return;
L_08ADC72C:
    ctx.set_gpr(31, 0x08ADC734u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADCBDC;
L_08ADC734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC73C;
    }
L_08ADC73C:
    ctx.set_gpr(31, 0x08ADC744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC744u) goto L_08ADC744;
    return;
L_08ADC744:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC750u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC750u) goto L_08ADC750;
    return;
L_08ADC750:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC7C0;
      }
      goto L_08ADC758;
    }
L_08ADC758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC7C0;
      }
      goto L_08ADC764;
    }
L_08ADC764:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC7C0;
      }
      goto L_08ADC770;
    }
L_08ADC770:
    ctx.set_gpr(31, 0x08ADC778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC778u) goto L_08ADC778;
    return;
L_08ADC778:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADC78Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC78Cu) goto L_08ADC78C;
    return;
L_08ADC78C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08ADC7A4;
    }
    goto L_08ADC79C;
L_08ADC79C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_08ADC7A4;
L_08ADC7A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADC7B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 530u, 0x08AE1BBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC7B0u) goto L_08ADC7B0;
    return;
L_08ADC7B0:
    ctx.set_gpr(31, 0x08ADC7B8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADCBDC;
L_08ADC7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC7C0;
    }
L_08ADC7C0:
    ctx.set_gpr(31, 0x08ADC7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC7C8u) goto L_08ADC7C8;
    return;
L_08ADC7C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC7D4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC7D4u) goto L_08ADC7D4;
    return;
L_08ADC7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC850;
      }
      goto L_08ADC7DC;
    }
L_08ADC7DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC850;
      }
      goto L_08ADC7E8;
    }
L_08ADC7E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC850;
      }
      goto L_08ADC7F4;
    }
L_08ADC7F4:
    ctx.set_gpr(31, 0x08ADC7FCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC7FCu) goto L_08ADC7FC;
    return;
L_08ADC7FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADC810u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC810u) goto L_08ADC810;
    return;
L_08ADC810:
    ctx.set_gpr(31, 0x08ADC818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC818u) goto L_08ADC818;
    return;
L_08ADC818:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADC82Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC82Cu) goto L_08ADC82C;
    return;
L_08ADC82C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC838;
    }
L_08ADC838:
    ctx.set_gpr(31, 0x08ADC840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC840u) goto L_08ADC840;
    return;
L_08ADC840:
    ctx.set_gpr(31, 0x08ADC848u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08ADC848u) goto L_08ADC848;
    return;
L_08ADC848:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC850;
    }
L_08ADC850:
    ctx.set_gpr(31, 0x08ADC858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC858u) goto L_08ADC858;
    return;
L_08ADC858:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC864u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADC864u) goto L_08ADC864;
    return;
L_08ADC864:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC884;
      }
      goto L_08ADC86C;
    }
L_08ADC86C:
    ctx.set_gpr(31, 0x08ADC874u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 530u, 0x08AE1BBCu>(ctx, &aot_mem) && ctx.pc == 0x08ADC874u) goto L_08ADC874;
    return;
L_08ADC874:
    ctx.set_gpr(31, 0x08ADC87Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADCBDC;
L_08ADC87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC884;
    }
L_08ADC884:
    ctx.set_gpr(31, 0x08ADC88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC88Cu) goto L_08ADC88C;
    return;
L_08ADC88C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC898u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADC898u) goto L_08ADC898;
    return;
L_08ADC898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8D0;
      }
      goto L_08ADC8A0;
    }
L_08ADC8A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8D0;
      }
      goto L_08ADC8AC;
    }
L_08ADC8AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8D0;
      }
      goto L_08ADC8B8;
    }
L_08ADC8B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADC8C4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 612u, 0x08AE60E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC8C4u) goto L_08ADC8C4;
    return;
L_08ADC8C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC8D0;
    }
L_08ADC8D0:
    ctx.set_gpr(31, 0x08ADC8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC8D8u) goto L_08ADC8D8;
    return;
L_08ADC8D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADC8E4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADC8E4u) goto L_08ADC8E4;
    return;
L_08ADC8E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC8EC;
    }
L_08ADC8EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC8F8;
    }
L_08ADC8F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC918;
      }
      goto L_08ADC904;
    }
L_08ADC904:
    ctx.set_gpr(31, 0x08ADC90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC90Cu) goto L_08ADC90C;
    return;
L_08ADC90C:
    ctx.set_gpr(31, 0x08ADC914u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08ADC914u) goto L_08ADC914;
    return;
L_08ADC914:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    goto L_08ADC918;
L_08ADC918:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADC91C;
L_08ADC91C:
    ctx.set_gpr(31, 0x08ADC924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADC924u) goto L_08ADC924;
    return;
L_08ADC924:
    ctx.set_gpr(31, 0x08ADC92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC92Cu) goto L_08ADC92C;
    return;
L_08ADC92C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADC940u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC940u) goto L_08ADC940;
    return;
L_08ADC940:
    ctx.set_gpr(31, 0x08ADC948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC948u) goto L_08ADC948;
    return;
L_08ADC948:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 17044u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 15692u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | 52429u);
    ctx.set_gpr(3, 17270u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_gpr(31, 0x08ADC980u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08ADC980u) goto L_08ADC980;
    return;
L_08ADC980:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ADC984;
L_08ADC984:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC998:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ADCB28;
      }
      goto L_08ADC9B0;
    }
L_08ADC9B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA44;
      }
      goto L_08ADC9BC;
    }
L_08ADC9BC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADC9D4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADC9D4u) goto L_08ADC9D4;
    return;
L_08ADC9D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADCA14;
      }
      goto L_08ADC9E4;
    }
L_08ADC9E4:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6836));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(213));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08ADCA0Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA0Cu) goto L_08ADCA0C;
    return;
L_08ADCA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCA44;
      }
      goto L_08ADCA14;
    }
L_08ADCA14:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADCA44;
      }
      goto L_08ADCA1C;
    }
L_08ADCA1C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6836));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(223));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08ADCA44u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA44u) goto L_08ADCA44;
    return;
L_08ADCA44:
    ctx.set_gpr(31, 0x08ADCA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA4Cu) goto L_08ADCA4C;
    return;
L_08ADCA4C:
    ctx.set_gpr(31, 0x08ADCA54u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCA54u) goto L_08ADCA54;
    return;
L_08ADCA54:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08ADCA84;
    }
    goto L_08ADCA5C;
L_08ADCA5C:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADCA7Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA7Cu) goto L_08ADCA7C;
    return;
L_08ADCA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08ADCA9C;
      }
      goto L_08ADCA84;
    }
L_08ADCA84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADCA98u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA98u) goto L_08ADCA98;
    return;
L_08ADCA98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08ADCA9C;
L_08ADCA9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADCAD8;
      }
      goto L_08ADCAA8;
    }
L_08ADCAA8:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6836));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(31, 0x08ADCAD0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCAD0u) goto L_08ADCAD0;
    return;
L_08ADCAD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08ADCB0C;
      }
      goto L_08ADCAD8;
    }
L_08ADCAD8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADCB08;
      }
      goto L_08ADCAE0;
    }
L_08ADCAE0:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6836));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(222));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(31, 0x08ADCB08u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB08u) goto L_08ADCB08;
    return;
L_08ADCB08:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08ADCB0C;
L_08ADCB0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADCB20u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB20u) goto L_08ADCB20;
    return;
L_08ADCB20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ADCBD0;
      }
      goto L_08ADCB28;
    }
L_08ADCB28:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCBCC;
      }
      goto L_08ADCB30;
    }
L_08ADCB30:
    ctx.set_gpr(31, 0x08ADCB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB38u) goto L_08ADCB38;
    return;
L_08ADCB38:
    ctx.set_gpr(31, 0x08ADCB40u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCB40u) goto L_08ADCB40;
    return;
L_08ADCB40:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16128u << 16u);
        goto L_08ADCB70;
    }
    goto L_08ADCB48;
L_08ADCB48:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADCB68u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB68u) goto L_08ADCB68;
    return;
L_08ADCB68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08ADCB8C;
      }
      goto L_08ADCB70;
    }
L_08ADCB70:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADCB88u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADCB88u) goto L_08ADCB88;
    return;
L_08ADCB88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08ADCB8C;
L_08ADCB8C:
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6836));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(222));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(67));
    ctx.set_gpr(31, 0x08ADCBB4u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBB4u) goto L_08ADCBB4;
    return;
L_08ADCBB4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADCBCCu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBCCu) goto L_08ADCBCC;
    return;
L_08ADCBCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ADCBD0;
L_08ADCBD0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCBDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ADCC08u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC08u) goto L_08ADCC08;
    return;
L_08ADCC08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADCC1Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCC1Cu) goto L_08ADCC1C;
    return;
L_08ADCC1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADCC28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC28u) goto L_08ADCC28;
    return;
L_08ADCC28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADCC40;
      }
      goto L_08ADCC38;
    }
L_08ADCC38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08ADCC60;
      }
      goto L_08ADCC40;
    }
L_08ADCC40:
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ADCC64;
    }
    goto L_08ADCC48;
L_08ADCC48:
    ctx.set_gpr(31, 0x08ADCC50u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 770u, 0x08AA2978u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC50u) goto L_08ADCC50;
    return;
L_08ADCC50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ADCC60;
      }
      goto L_08ADCC5C;
    }
L_08ADCC5C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCC60;
L_08ADCC60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCC64;
L_08ADCC64:
    if (ctx.gpr[18] != ctx.gpr[2]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ADCC74;
    }
    goto L_08ADCC6C;
L_08ADCC6C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08ADCC74;
L_08ADCC74:
    ctx.set_gpr(31, 0x08ADCC7Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08ADCC7Cu) goto L_08ADCC7C;
    return;
L_08ADCC7C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6872)));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
        goto L_08ADCC9C;
    }
    goto L_08ADCC94;
L_08ADCC94:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    goto L_08ADCC9C;
L_08ADCC9C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ADCED8;
    }
    goto L_08ADCCA8;
L_08ADCCA8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADCCB4u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCB4u) goto L_08ADCCB4;
    return;
L_08ADCCB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08ADD044;
      }
      goto L_08ADCCC0;
    }
L_08ADCCC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    goto L_08ADCCC8;
L_08ADCCC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADCCD4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCD4u) goto L_08ADCCD4;
    return;
L_08ADCCD4:
    ctx.set_gpr(31, 0x08ADCCDCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCDCu) goto L_08ADCCDC;
    return;
L_08ADCCDC:
    ctx.set_gpr(31, 0x08ADCCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCCE4u) goto L_08ADCCE4;
    return;
L_08ADCCE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADCCF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCCF8u) goto L_08ADCCF8;
    return;
L_08ADCCF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3136));
    ctx.set_gpr(4, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_08ADCEB8;
    }
    goto L_08ADCD20;
L_08ADCD20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADCD30u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD30u) goto L_08ADCD30;
    return;
L_08ADCD30:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ADCE30;
    }
    goto L_08ADCD38;
L_08ADCD38:
    ctx.set_gpr(31, 0x08ADCD40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 343u, 0x08A9A678u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD40u) goto L_08ADCD40;
    return;
L_08ADCD40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE2C;
      }
      goto L_08ADCD48;
    }
L_08ADCD48:
    ctx.set_gpr(31, 0x08ADCD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD50u) goto L_08ADCD50;
    return;
L_08ADCD50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADCD64u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCD64u) goto L_08ADCD64;
    return;
L_08ADCD64:
    ctx.set_gpr(31, 0x08ADCD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD6Cu) goto L_08ADCD6C;
    return;
L_08ADCD6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
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
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADCDC8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDC8u) goto L_08ADCDC8;
    return;
L_08ADCDC8:
    ctx.set_gpr(31, 0x08ADCDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDD0u) goto L_08ADCDD0;
    return;
L_08ADCDD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADCDFCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCDFCu) goto L_08ADCDFC;
    return;
L_08ADCDFC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08ADCE14u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE14u) goto L_08ADCE14;
    return;
L_08ADCE14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADCE24u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE24u) goto L_08ADCE24;
    return;
L_08ADCE24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCEB4;
      }
      goto L_08ADCE2C;
    }
L_08ADCE2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08ADCE30;
L_08ADCE30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADCE3Cu);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE3Cu) goto L_08ADCE3C;
    return;
L_08ADCE3C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ADCE58;
    }
    goto L_08ADCE48;
L_08ADCE48:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADCEB4;
      }
      goto L_08ADCE58;
    }
L_08ADCE58:
    ctx.set_gpr(31, 0x08ADCE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 343u, 0x08A9A678u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE60u) goto L_08ADCE60;
    return;
L_08ADCE60:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ADCE7C;
    }
    goto L_08ADCE6C;
L_08ADCE6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADCEB4;
      }
      goto L_08ADCE7C;
    }
L_08ADCE7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADCE88u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE88u) goto L_08ADCE88;
    return;
L_08ADCE88:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCEB4;
      }
      goto L_08ADCE94;
    }
L_08ADCE94:
    ctx.set_gpr(31, 0x08ADCE9Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 343u, 0x08A9A678u>(ctx, &aot_mem) && ctx.pc == 0x08ADCE9Cu) goto L_08ADCE9C;
    return;
L_08ADCE9C:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCEB4;
      }
      goto L_08ADCEA8;
    }
L_08ADCEA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(179), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(0u));
    goto L_08ADCEB4;
L_08ADCEB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_08ADCEB8;
L_08ADCEB8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(50));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ADCCC8;
      }
      goto L_08ADCED0;
    }
L_08ADCED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD044;
      }
      goto L_08ADCED8;
    }
L_08ADCED8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADD044;
      }
      goto L_08ADCEE0;
    }
L_08ADCEE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08ADD044;
      }
      goto L_08ADCEEC;
    }
L_08ADCEEC:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08ADCEF4;
L_08ADCEF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADCF00u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF00u) goto L_08ADCF00;
    return;
L_08ADCF00:
    ctx.set_gpr(31, 0x08ADCF08u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF08u) goto L_08ADCF08;
    return;
L_08ADCF08:
    ctx.set_gpr(31, 0x08ADCF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF10u) goto L_08ADCF10;
    return;
L_08ADCF10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADCF24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF24u) goto L_08ADCF24;
    return;
L_08ADCF24:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, 50298u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
        goto L_08ADD030;
    }
    goto L_08ADCF40;
L_08ADCF40:
    ctx.set_gpr(31, 0x08ADCF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF48u) goto L_08ADCF48;
    return;
L_08ADCF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADCF5Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF5Cu) goto L_08ADCF5C;
    return;
L_08ADCF5C:
    ctx.set_gpr(31, 0x08ADCF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF64u) goto L_08ADCF64;
    return;
L_08ADCF64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
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
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADCFC0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADCFC0u) goto L_08ADCFC0;
    return;
L_08ADCFC0:
    ctx.set_gpr(31, 0x08ADCFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCFC8u) goto L_08ADCFC8;
    return;
L_08ADCFC8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADCFFCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADCFFCu) goto L_08ADCFFC;
    return;
L_08ADCFFC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(31, 0x08ADD01Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD01Cu) goto L_08ADD01C;
    return;
L_08ADD01C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADD02Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD02Cu) goto L_08ADD02C;
    return;
L_08ADD02C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    goto L_08ADD030;
L_08ADD030:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08ADCEF4;
      }
      goto L_08ADD044;
    }
L_08ADD044:
    ctx.set_gpr(31, 0x08ADD04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD04Cu) goto L_08ADD04C;
    return;
L_08ADD04C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD058u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADD058u) goto L_08ADD058;
    return;
L_08ADD058:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
        goto L_08ADD238;
    }
    goto L_08ADD060;
L_08ADD060:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ADD234;
      }
      goto L_08ADD070;
    }
L_08ADD070:
    ctx.set_gpr(31, 0x08ADD078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD078u) goto L_08ADD078;
    return;
L_08ADD078:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADD08Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD08Cu) goto L_08ADD08C;
    return;
L_08ADD08C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08ADD234;
      }
      goto L_08ADD0A0;
    }
L_08ADD0A0:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08ADD0A8;
L_08ADD0A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADD0B4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0B4u) goto L_08ADD0B4;
    return;
L_08ADD0B4:
    ctx.set_gpr(31, 0x08ADD0BCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0BCu) goto L_08ADD0BC;
    return;
L_08ADD0BC:
    ctx.set_gpr(31, 0x08ADD0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD0C4u) goto L_08ADD0C4;
    return;
L_08ADD0C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADD0D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD0D8u) goto L_08ADD0D8;
    return;
L_08ADD0D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(2, 50298u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08ADD210;
    }
    goto L_08ADD0F4;
L_08ADD0F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADD20C;
      }
      goto L_08ADD108;
    }
L_08ADD108:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADD20C;
      }
      goto L_08ADD11C;
    }
L_08ADD11C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADD20C;
      }
      goto L_08ADD130;
    }
L_08ADD130:
    ctx.set_gpr(31, 0x08ADD138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD138u) goto L_08ADD138;
    return;
L_08ADD138:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADD14Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD14Cu) goto L_08ADD14C;
    return;
L_08ADD14C:
    ctx.set_gpr(31, 0x08ADD154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD154u) goto L_08ADD154;
    return;
L_08ADD154:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
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
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADD1B0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADD1B0u) goto L_08ADD1B0;
    return;
L_08ADD1B0:
    ctx.set_gpr(31, 0x08ADD1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD1B8u) goto L_08ADD1B8;
    return;
L_08ADD1B8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADD1ECu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD1ECu) goto L_08ADD1EC;
    return;
L_08ADD1EC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(232)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(264)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.set_gpr(31, 0x08ADD20Cu);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD20Cu) goto L_08ADD20C;
    return;
L_08ADD20C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08ADD210;
L_08ADD210:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADD21Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 458u, 0x08A859ECu>(ctx, &aot_mem) && ctx.pc == 0x08ADD21Cu) goto L_08ADD21C;
    return;
L_08ADD21C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08ADD0A8;
      }
      goto L_08ADD234;
    }
L_08ADD234:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    goto L_08ADD238;
L_08ADD238:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(177)));
        goto L_08ADD250;
    }
    goto L_08ADD240;
L_08ADD240:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(179)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ADD278;
    }
    goto L_08ADD24C;
L_08ADD24C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(177)));
    goto L_08ADD250;
L_08ADD250:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD274;
      }
      goto L_08ADD258;
    }
L_08ADD258:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(6872), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(177), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    goto L_08ADD274;
L_08ADD274:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ADD278;
L_08ADD278:
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
L_08ADD298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ADD2B4u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD2B4u) goto L_08ADD2B4;
    return;
L_08ADD2B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADD2C8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD2C8u) goto L_08ADD2C8;
    return;
L_08ADD2C8:
    ctx.set_gpr(31, 0x08ADD2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD2D0u) goto L_08ADD2D0;
    return;
L_08ADD2D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADD2E4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD2E4u) goto L_08ADD2E4;
    return;
L_08ADD2E4:
    ctx.set_gpr(31, 0x08ADD2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD2ECu) goto L_08ADD2EC;
    return;
L_08ADD2EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADD300u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD300u) goto L_08ADD300;
    return;
L_08ADD300:
    ctx.set_gpr(31, 0x08ADD308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD308u) goto L_08ADD308;
    return;
L_08ADD308:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADD31Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD31Cu) goto L_08ADD31C;
    return;
L_08ADD31C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(161)));
        goto L_08ADD368;
    }
    goto L_08ADD328;
L_08ADD328:
    ctx.set_gpr(31, 0x08ADD330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADD330u) goto L_08ADD330;
    return;
L_08ADD330:
    ctx.set_gpr(31, 0x08ADD338u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD338u) goto L_08ADD338;
    return;
L_08ADD338:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ADD35Cu);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADD35Cu) goto L_08ADD35C;
    return;
L_08ADD35C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(161)));
    goto L_08ADD368;
L_08ADD368:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD3A0;
      }
      goto L_08ADD370;
    }
L_08ADD370:
    ctx.set_gpr(31, 0x08ADD378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ADD378u) goto L_08ADD378;
    return;
L_08ADD378:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADD398u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ADD398u) goto L_08ADD398;
    return;
L_08ADD398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADD3A0;
L_08ADD3A0:
    ctx.set_gpr(31, 0x08ADD3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3A8u) goto L_08ADD3A8;
    return;
L_08ADD3A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD3B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3B4u) goto L_08ADD3B4;
    return;
L_08ADD3B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD3CC;
      }
      goto L_08ADD3BC;
    }
L_08ADD3BC:
    ctx.set_gpr(31, 0x08ADD3C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 554u, 0x08AE1D90u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3C4u) goto L_08ADD3C4;
    return;
L_08ADD3C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08ADD5A4;
      }
      goto L_08ADD3CC;
    }
L_08ADD3CC:
    ctx.set_gpr(31, 0x08ADD3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3D4u) goto L_08ADD3D4;
    return;
L_08ADD3D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD3E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD3E0u) goto L_08ADD3E0;
    return;
L_08ADD3E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD3F0;
      }
      goto L_08ADD3E8;
    }
L_08ADD3E8:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD3F0;
    }
L_08ADD3F0:
    ctx.set_gpr(31, 0x08ADD3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3F8u) goto L_08ADD3F8;
    return;
L_08ADD3F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD404u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD404u) goto L_08ADD404;
    return;
L_08ADD404:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD41C;
      }
      goto L_08ADD40C;
    }
L_08ADD40C:
    ctx.set_gpr(31, 0x08ADD414u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 636u, 0x08AE2224u>(ctx, &aot_mem) && ctx.pc == 0x08ADD414u) goto L_08ADD414;
    return;
L_08ADD414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD41C;
    }
L_08ADD41C:
    ctx.set_gpr(31, 0x08ADD424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD424u) goto L_08ADD424;
    return;
L_08ADD424:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD430u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD430u) goto L_08ADD430;
    return;
L_08ADD430:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD440;
      }
      goto L_08ADD438;
    }
L_08ADD438:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD440;
    }
L_08ADD440:
    ctx.set_gpr(31, 0x08ADD448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD448u) goto L_08ADD448;
    return;
L_08ADD448:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD454u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD454u) goto L_08ADD454;
    return;
L_08ADD454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD4A4;
      }
      goto L_08ADD45C;
    }
L_08ADD45C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD4A4;
      }
      goto L_08ADD468;
    }
L_08ADD468:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
        goto L_08ADD494;
    }
    goto L_08ADD47C;
L_08ADD47C:
    ctx.set_gpr(31, 0x08ADD484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD484u) goto L_08ADD484;
    return;
L_08ADD484:
    ctx.set_gpr(31, 0x08ADD48Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08ADD48Cu) goto L_08ADD48C;
    return;
L_08ADD48C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    goto L_08ADD494;
L_08ADD494:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD4A4;
    }
L_08ADD4A4:
    ctx.set_gpr(31, 0x08ADD4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD4ACu) goto L_08ADD4AC;
    return;
L_08ADD4AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD4B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD4B8u) goto L_08ADD4B8;
    return;
L_08ADD4B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD524;
      }
      goto L_08ADD4C0;
    }
L_08ADD4C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD524;
      }
      goto L_08ADD4CC;
    }
L_08ADD4CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
        goto L_08ADD4E0;
    }
    goto L_08ADD4D8;
L_08ADD4D8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    goto L_08ADD4E0;
L_08ADD4E0:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
        goto L_08ADD500;
    }
    goto L_08ADD4E8;
L_08ADD4E8:
    ctx.set_gpr(31, 0x08ADD4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD4F0u) goto L_08ADD4F0;
    return;
L_08ADD4F0:
    ctx.set_gpr(31, 0x08ADD4F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08ADD4F8u) goto L_08ADD4F8;
    return;
L_08ADD4F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    goto L_08ADD500;
L_08ADD500:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD518;
    }
L_08ADD518:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD524;
    }
L_08ADD524:
    ctx.set_gpr(31, 0x08ADD52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD52Cu) goto L_08ADD52C;
    return;
L_08ADD52C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD538u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD538u) goto L_08ADD538;
    return;
L_08ADD538:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_08ADD588;
    }
    goto L_08ADD540;
L_08ADD540:
    ctx.set_gpr(31, 0x08ADD548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD548u) goto L_08ADD548;
    return;
L_08ADD548:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADD55Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD55Cu) goto L_08ADD55C;
    return;
L_08ADD55C:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADD5A0;
      }
      goto L_08ADD588;
    }
L_08ADD588:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADD594u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 583u, 0x08AE5E50u>(ctx, &aot_mem) && ctx.pc == 0x08ADD594u) goto L_08ADD594;
    return;
L_08ADD594:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADD5A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 612u, 0x08AE60E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD5A0u) goto L_08ADD5A0;
    return;
L_08ADD5A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADD5A4;
L_08ADD5A4:
    ctx.set_gpr(31, 0x08ADD5ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 604u, 0x08AE5F84u>(ctx, &aot_mem) && ctx.pc == 0x08ADD5ACu) goto L_08ADD5AC;
    return;
L_08ADD5AC:
    ctx.set_gpr(31, 0x08ADD5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD5B4u) goto L_08ADD5B4;
    return;
L_08ADD5B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADD5C8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD5C8u) goto L_08ADD5C8;
    return;
L_08ADD5C8:
    ctx.set_gpr(31, 0x08ADD5D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD5D0u) goto L_08ADD5D0;
    return;
L_08ADD5D0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 17044u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 15692u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | 52429u);
    ctx.set_gpr(3, 17270u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_gpr(31, 0x08ADD608u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08ADD608u) goto L_08ADD608;
    return;
L_08ADD608:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD61C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ADD638u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD638u) goto L_08ADD638;
    return;
L_08ADD638:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADD64Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD64Cu) goto L_08ADD64C;
    return;
L_08ADD64C:
    ctx.set_gpr(31, 0x08ADD654u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADD9A0;
L_08ADD654:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
        goto L_08ADD970;
    }
    goto L_08ADD668;
L_08ADD668:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ADD958;
    }
    goto L_08ADD674;
L_08ADD674:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADD714;
    }
    goto L_08ADD680;
L_08ADD680:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADD690;
    }
    goto L_08ADD688;
L_08ADD688:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ADD98C;
      }
      goto L_08ADD690;
    }
L_08ADD690:
    ctx.set_gpr(31, 0x08ADD698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 718u, 0x08AE268Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD698u) goto L_08ADD698;
    return;
L_08ADD698:
    ctx.set_gpr(31, 0x08ADD6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADD6A0u) goto L_08ADD6A0;
    return;
L_08ADD6A0:
    ctx.set_gpr(31, 0x08ADD6A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD6A8u) goto L_08ADD6A8;
    return;
L_08ADD6A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ADD6C8u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADD6C8u) goto L_08ADD6C8;
    return;
L_08ADD6C8:
    ctx.set_gpr(31, 0x08ADD6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ADD6D0u) goto L_08ADD6D0;
    return;
L_08ADD6D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADD6F0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ADD6F0u) goto L_08ADD6F0;
    return;
L_08ADD6F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADD6FCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 604u, 0x08AE5F84u>(ctx, &aot_mem) && ctx.pc == 0x08ADD6FCu) goto L_08ADD6FC;
    return;
L_08ADD6FC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADD988;
      }
      goto L_08ADD714;
    }
L_08ADD714:
    ctx.set_gpr(31, 0x08ADD71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 718u, 0x08AE268Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD71Cu) goto L_08ADD71C;
    return;
L_08ADD71C:
    ctx.set_gpr(31, 0x08ADD724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD724u) goto L_08ADD724;
    return;
L_08ADD724:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD730u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD730u) goto L_08ADD730;
    return;
L_08ADD730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD790;
      }
      goto L_08ADD738;
    }
L_08ADD738:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD790;
      }
      goto L_08ADD744;
    }
L_08ADD744:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 17008u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADD948;
    }
    goto L_08ADD764;
L_08ADD764:
    ctx.set_gpr(31, 0x08ADD76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD76Cu) goto L_08ADD76C;
    return;
L_08ADD76C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADD780u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD780u) goto L_08ADD780;
    return;
L_08ADD780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADD944;
      }
      goto L_08ADD790;
    }
L_08ADD790:
    ctx.set_gpr(31, 0x08ADD798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD798u) goto L_08ADD798;
    return;
L_08ADD798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD7A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD7A4u) goto L_08ADD7A4;
    return;
L_08ADD7A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD804;
      }
      goto L_08ADD7AC;
    }
L_08ADD7AC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD804;
      }
      goto L_08ADD7B8;
    }
L_08ADD7B8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADD944;
      }
      goto L_08ADD7D8;
    }
L_08ADD7D8:
    ctx.set_gpr(31, 0x08ADD7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD7E0u) goto L_08ADD7E0;
    return;
L_08ADD7E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADD7F4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD7F4u) goto L_08ADD7F4;
    return;
L_08ADD7F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADD944;
      }
      goto L_08ADD804;
    }
L_08ADD804:
    ctx.set_gpr(31, 0x08ADD80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD80Cu) goto L_08ADD80C;
    return;
L_08ADD80C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD818u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD818u) goto L_08ADD818;
    return;
L_08ADD818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8A4;
      }
      goto L_08ADD820;
    }
L_08ADD820:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8A4;
      }
      goto L_08ADD82C;
    }
L_08ADD82C:
    ctx.set_gpr(31, 0x08ADD834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD834u) goto L_08ADD834;
    return;
L_08ADD834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADD848u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD848u) goto L_08ADD848;
    return;
L_08ADD848:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADD864;
    }
    goto L_08ADD858;
L_08ADD858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADD864;
L_08ADD864:
    ctx.set_gpr(31, 0x08ADD86Cu);
    // nop
    goto L_08ADD9A0;
L_08ADD86C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD88C;
      }
      goto L_08ADD878;
    }
L_08ADD878:
    ctx.set_gpr(31, 0x08ADD880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD880u) goto L_08ADD880;
    return;
L_08ADD880:
    ctx.set_gpr(31, 0x08ADD888u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08ADD888u) goto L_08ADD888;
    return;
L_08ADD888:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    goto L_08ADD88C;
L_08ADD88C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADD944;
      }
      goto L_08ADD8A4;
    }
L_08ADD8A4:
    ctx.set_gpr(31, 0x08ADD8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADD8ACu) goto L_08ADD8AC;
    return;
L_08ADD8AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADD8B8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD8B8u) goto L_08ADD8B8;
    return;
L_08ADD8B8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
        goto L_08ADD92C;
    }
    goto L_08ADD8C0;
L_08ADD8C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD928;
      }
      goto L_08ADD8CC;
    }
L_08ADD8CC:
    ctx.set_gpr(31, 0x08ADD8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD8D4u) goto L_08ADD8D4;
    return;
L_08ADD8D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADD8E8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD8E8u) goto L_08ADD8E8;
    return;
L_08ADD8E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADD8F8u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08ADD9A0;
L_08ADD8F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
        goto L_08ADD91C;
    }
    goto L_08ADD904;
L_08ADD904:
    ctx.set_gpr(31, 0x08ADD90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD90Cu) goto L_08ADD90C;
    return;
L_08ADD90C:
    ctx.set_gpr(31, 0x08ADD914u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 344u, 0x08AB1444u>(ctx, &aot_mem) && ctx.pc == 0x08ADD914u) goto L_08ADD914;
    return;
L_08ADD914:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    goto L_08ADD91C;
L_08ADD91C:
    ctx.set_gpr(2, 2247u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADD944;
      }
      goto L_08ADD928;
    }
L_08ADD928:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_08ADD92C;
L_08ADD92C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADD938u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 583u, 0x08AE5E50u>(ctx, &aot_mem) && ctx.pc == 0x08ADD938u) goto L_08ADD938;
    return;
L_08ADD938:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ADD944u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 612u, 0x08AE60E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD944u) goto L_08ADD944;
    return;
L_08ADD944:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADD948;
L_08ADD948:
    ctx.set_gpr(31, 0x08ADD950u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 604u, 0x08AE5F84u>(ctx, &aot_mem) && ctx.pc == 0x08ADD950u) goto L_08ADD950;
    return;
L_08ADD950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD988;
      }
      goto L_08ADD958;
    }
L_08ADD958:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADD98C;
      }
      goto L_08ADD970;
    }
L_08ADD970:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23104), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADD98C;
      }
      goto L_08ADD988;
    }
L_08ADD988:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ADD98C;
L_08ADD98C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD9A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ADDB4C;
      }
      goto L_08ADD9B8;
    }
L_08ADD9B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
        goto L_08ADDA8C;
    }
    goto L_08ADD9C8;
L_08ADD9C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08ADD9EC;
    }
    goto L_08ADD9D8;
L_08ADD9D8:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDA18;
      }
      goto L_08ADD9E8;
    }
L_08ADD9E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08ADD9EC;
L_08ADD9EC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDA00u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA00u) goto L_08ADDA00;
    return;
L_08ADDA00:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(236));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08ADDA18u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA18u) goto L_08ADDA18;
    return;
L_08ADDA18:
    ctx.set_gpr(31, 0x08ADDA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA20u) goto L_08ADDA20;
    return;
L_08ADDA20:
    ctx.set_gpr(31, 0x08ADDA28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDA28u) goto L_08ADDA28;
    return;
L_08ADDA28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08ADDA58;
    }
    goto L_08ADDA30;
L_08ADDA30:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDA50u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA50u) goto L_08ADDA50;
    return;
L_08ADDA50:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08ADDA70;
      }
      goto L_08ADDA58;
    }
L_08ADDA58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDA6Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA6Cu) goto L_08ADDA6C;
    return;
L_08ADDA6C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08ADDA70;
L_08ADDA70:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08ADDA84u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDA84u) goto L_08ADDA84;
    return;
L_08ADDA84:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 16256u << 16u);
      if (branch_taken) {
          goto L_08ADDBC4;
      }
      goto L_08ADDA8C;
    }
L_08ADDA8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08ADDAAC;
    }
    goto L_08ADDA98;
L_08ADDA98:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDAD8;
      }
      goto L_08ADDAA8;
    }
L_08ADDAA8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08ADDAAC;
L_08ADDAAC:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDAC0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAC0u) goto L_08ADDAC0;
    return;
L_08ADDAC0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(242));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(98));
    ctx.set_gpr(31, 0x08ADDAD8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAD8u) goto L_08ADDAD8;
    return;
L_08ADDAD8:
    ctx.set_gpr(31, 0x08ADDAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAE0u) goto L_08ADDAE0;
    return;
L_08ADDAE0:
    ctx.set_gpr(31, 0x08ADDAE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDAE8u) goto L_08ADDAE8;
    return;
L_08ADDAE8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08ADDB18;
    }
    goto L_08ADDAF0;
L_08ADDAF0:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDB10u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB10u) goto L_08ADDB10;
    return;
L_08ADDB10:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08ADDB30;
      }
      goto L_08ADDB18;
    }
L_08ADDB18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDB2Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB2Cu) goto L_08ADDB2C;
    return;
L_08ADDB2C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08ADDB30;
L_08ADDB30:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(241));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08ADDB44u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB44u) goto L_08ADDB44;
    return;
L_08ADDB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBC0;
      }
      goto L_08ADDB4C;
    }
L_08ADDB4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08ADDB94;
    }
    goto L_08ADDB5C;
L_08ADDB5C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDB74u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB74u) goto L_08ADDB74;
    return;
L_08ADDB74:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(235));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08ADDB8Cu);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB8Cu) goto L_08ADDB8C;
    return;
L_08ADDB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDBC0;
      }
      goto L_08ADDB94;
    }
L_08ADDB94:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDBA8u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDBA8u) goto L_08ADDBA8;
    return;
L_08ADDBA8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(241));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(97));
    ctx.set_gpr(31, 0x08ADDBC0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6712));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDBC0u) goto L_08ADDBC0;
    return;
L_08ADDBC0:
    ctx.set_gpr(2, 16256u << 16u);
    goto L_08ADDBC4;
L_08ADDBC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADDBD8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADDBD8u) goto L_08ADDBD8;
    return;
L_08ADDBD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADDBE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADDBFCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDBFCu) goto L_08ADDBFC;
    return;
L_08ADDBFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADDC10u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDC10u) goto L_08ADDC10;
    return;
L_08ADDC10:
    ctx.set_gpr(31, 0x08ADDC18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC18u) goto L_08ADDC18;
    return;
L_08ADDC18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADDC2Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDC2Cu) goto L_08ADDC2C;
    return;
L_08ADDC2C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(161)));
        goto L_08ADDC70;
    }
    goto L_08ADDC38;
L_08ADDC38:
    ctx.set_gpr(31, 0x08ADDC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC40u) goto L_08ADDC40;
    return;
L_08ADDC40:
    ctx.set_gpr(31, 0x08ADDC48u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC48u) goto L_08ADDC48;
    return;
L_08ADDC48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(33));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ADDC64u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC64u) goto L_08ADDC64;
    return;
L_08ADDC64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(161)));
    goto L_08ADDC70;
L_08ADDC70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDCA8;
      }
      goto L_08ADDC78;
    }
L_08ADDC78:
    ctx.set_gpr(31, 0x08ADDC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC80u) goto L_08ADDC80;
    return;
L_08ADDC80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADDCA0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ADDCA0u) goto L_08ADDCA0;
    return;
L_08ADDCA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADDCA8;
L_08ADDCA8:
    ctx.set_gpr(31, 0x08ADDCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCB0u) goto L_08ADDCB0;
    return;
L_08ADDCB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADDCC4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDCC4u) goto L_08ADDCC4;
    return;
L_08ADDCC4:
    ctx.set_gpr(31, 0x08ADDCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCCCu) goto L_08ADDCCC;
    return;
L_08ADDCCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADDCE0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDCE0u) goto L_08ADDCE0;
    return;
L_08ADDCE0:
    ctx.set_gpr(31, 0x08ADDCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCE8u) goto L_08ADDCE8;
    return;
L_08ADDCE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDCF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCF4u) goto L_08ADDCF4;
    return;
L_08ADDCF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDD0C;
      }
      goto L_08ADDCFC;
    }
L_08ADDCFC:
    ctx.set_gpr(31, 0x08ADDD04u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 554u, 0x08AE1D90u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD04u) goto L_08ADDD04;
    return;
L_08ADDD04:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08ADDFE0;
      }
      goto L_08ADDD0C;
    }
L_08ADDD0C:
    ctx.set_gpr(31, 0x08ADDD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD14u) goto L_08ADDD14;
    return;
L_08ADDD14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDD20u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDD20u) goto L_08ADDD20;
    return;
L_08ADDD20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDD30;
      }
      goto L_08ADDD28;
    }
L_08ADDD28:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADDFDC;
      }
      goto L_08ADDD30;
    }
L_08ADDD30:
    ctx.set_gpr(31, 0x08ADDD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD38u) goto L_08ADDD38;
    return;
L_08ADDD38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDD44u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD44u) goto L_08ADDD44;
    return;
L_08ADDD44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDD5C;
      }
      goto L_08ADDD4C;
    }
L_08ADDD4C:
    ctx.set_gpr(31, 0x08ADDD54u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 636u, 0x08AE2224u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD54u) goto L_08ADDD54;
    return;
L_08ADDD54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDFDC;
      }
      goto L_08ADDD5C;
    }
L_08ADDD5C:
    ctx.set_gpr(31, 0x08ADDD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD64u) goto L_08ADDD64;
    return;
L_08ADDD64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDD70u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDD70u) goto L_08ADDD70;
    return;
L_08ADDD70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDD80;
      }
      goto L_08ADDD78;
    }
L_08ADDD78:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADDFDC;
      }
      goto L_08ADDD80;
    }
L_08ADDD80:
    ctx.set_gpr(31, 0x08ADDD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD88u) goto L_08ADDD88;
    return;
L_08ADDD88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDD94u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD94u) goto L_08ADDD94;
    return;
L_08ADDD94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDEC0;
      }
      goto L_08ADDD9C;
    }
L_08ADDD9C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDEC0;
      }
      goto L_08ADDDA8;
    }
L_08ADDDA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08ADDDB4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDDB4u) goto L_08ADDDB4;
    return;
L_08ADDDB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADDDC8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDDC8u) goto L_08ADDDC8;
    return;
L_08ADDDC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
        goto L_08ADDE98;
    }
    goto L_08ADDDD4;
L_08ADDDD4:
    ctx.set_gpr(31, 0x08ADDDDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDDDCu) goto L_08ADDDDC;
    return;
L_08ADDDDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADDDF0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDDF0u) goto L_08ADDDF0;
    return;
L_08ADDDF0:
    ctx.set_gpr(31, 0x08ADDDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDDF8u) goto L_08ADDDF8;
    return;
L_08ADDDF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADDE0Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDE0Cu) goto L_08ADDE0C;
    return;
L_08ADDE0C:
    ctx.set_gpr(31, 0x08ADDE14u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE14u) goto L_08ADDE14;
    return;
L_08ADDE14:
    ctx.set_gpr(31, 0x08ADDE1Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE1Cu) goto L_08ADDE1C;
    return;
L_08ADDE1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADDE28u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDE28u) goto L_08ADDE28;
    return;
L_08ADDE28:
    ctx.set_gpr(31, 0x08ADDE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE30u) goto L_08ADDE30;
    return;
L_08ADDE30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADDE44u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDE44u) goto L_08ADDE44;
    return;
L_08ADDE44:
    ctx.set_gpr(31, 0x08ADDE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE4Cu) goto L_08ADDE4C;
    return;
L_08ADDE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADDE6Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE6Cu) goto L_08ADDE6C;
    return;
L_08ADDE6C:
    ctx.set_gpr(31, 0x08ADDE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE74u) goto L_08ADDE74;
    return;
L_08ADDE74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADDE94u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADDE94u) goto L_08ADDE94;
    return;
L_08ADDE94:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    goto L_08ADDE98;
L_08ADDE98:
    ctx.set_gpr(31, 0x08ADDEA0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDEA0u) goto L_08ADDEA0;
    return;
L_08ADDEA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ADDEB8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDEB8u) goto L_08ADDEB8;
    return;
L_08ADDEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDFDC;
      }
      goto L_08ADDEC0;
    }
L_08ADDEC0:
    ctx.set_gpr(31, 0x08ADDEC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDEC8u) goto L_08ADDEC8;
    return;
L_08ADDEC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDED4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADDED4u) goto L_08ADDED4;
    return;
L_08ADDED4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF88;
      }
      goto L_08ADDEDC;
    }
L_08ADDEDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF88;
      }
      goto L_08ADDEE8;
    }
L_08ADDEE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08ADDF00u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF00u) goto L_08ADDF00;
    return;
L_08ADDF00:
    ctx.set_gpr(31, 0x08ADDF08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF08u) goto L_08ADDF08;
    return;
L_08ADDF08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADDF14u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDF14u) goto L_08ADDF14;
    return;
L_08ADDF14:
    ctx.set_gpr(31, 0x08ADDF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF1Cu) goto L_08ADDF1C;
    return;
L_08ADDF1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADDF30u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDF30u) goto L_08ADDF30;
    return;
L_08ADDF30:
    ctx.set_gpr(31, 0x08ADDF38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF38u) goto L_08ADDF38;
    return;
L_08ADDF38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADDF58u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF58u) goto L_08ADDF58;
    return;
L_08ADDF58:
    ctx.set_gpr(31, 0x08ADDF60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF60u) goto L_08ADDF60;
    return;
L_08ADDF60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADDF80u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF80u) goto L_08ADDF80;
    return;
L_08ADDF80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDFDC;
      }
      goto L_08ADDF88;
    }
L_08ADDF88:
    ctx.set_gpr(31, 0x08ADDF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF90u) goto L_08ADDF90;
    return;
L_08ADDF90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADDF9Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDF9Cu) goto L_08ADDF9C;
    return;
L_08ADDF9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDFDC;
      }
      goto L_08ADDFA4;
    }
L_08ADDFA4:
    ctx.set_gpr(31, 0x08ADDFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDFACu) goto L_08ADDFAC;
    return;
L_08ADDFAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADDFC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDFC0u) goto L_08ADDFC0;
    return;
L_08ADDFC0:
    ctx.set_gpr(31, 0x08ADDFC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ADE65C;
L_08ADDFC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08ADDFDC;
L_08ADDFDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08ADDFE0;
L_08ADDFE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADE028;
    }
    goto L_08ADDFEC;
L_08ADDFEC:
    ctx.set_gpr(31, 0x08ADDFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFF4u) goto L_08ADDFF4;
    return;
L_08ADDFF4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17016u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(31, 0x08ADE020u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADE020u) goto L_08ADE020;
    return;
L_08ADE020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE0A8;
      }
      goto L_08ADE028;
    }
L_08ADE028:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADE06C;
    }
    goto L_08ADE030;
L_08ADE030:
    ctx.set_gpr(31, 0x08ADE038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE038u) goto L_08ADE038;
    return;
L_08ADE038:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17120u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(31, 0x08ADE064u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADE064u) goto L_08ADE064;
    return;
L_08ADE064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE0A8;
      }
      goto L_08ADE06C;
    }
L_08ADE06C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADE0A8;
      }
      goto L_08ADE074;
    }
L_08ADE074:
    ctx.set_gpr(31, 0x08ADE07Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE07Cu) goto L_08ADE07C;
    return;
L_08ADE07C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17186u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(31, 0x08ADE0A8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0A8u) goto L_08ADE0A8;
    return;
L_08ADE0A8:
    ctx.set_gpr(31, 0x08ADE0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0B0u) goto L_08ADE0B0;
    return;
L_08ADE0B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADE0C4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE0C4u) goto L_08ADE0C4;
    return;
L_08ADE0C4:
    ctx.set_gpr(31, 0x08ADE0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0CCu) goto L_08ADE0CC;
    return;
L_08ADE0CC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, 17044u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(3, 15692u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | 52429u);
    ctx.set_gpr(3, 17270u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[14] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_gpr(31, 0x08ADE104u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 945u, 0x0885F954u>(ctx, &aot_mem) && ctx.pc == 0x08ADE104u) goto L_08ADE104;
    return;
L_08ADE104:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE114:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADE12Cu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08ADE65C;
L_08ADE12C:
    ctx.set_gpr(31, 0x08ADE134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE134u) goto L_08ADE134;
    return;
L_08ADE134:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADE148u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE148u) goto L_08ADE148;
    return;
L_08ADE148:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(0u));
        goto L_08ADE628;
    }
    goto L_08ADE15C;
L_08ADE15C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADE614;
    }
    goto L_08ADE168;
L_08ADE168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADE1F4;
    }
    goto L_08ADE174;
L_08ADE174:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ADE184;
    }
    goto L_08ADE17C;
L_08ADE17C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ADE648;
      }
      goto L_08ADE184;
    }
L_08ADE184:
    ctx.set_gpr(31, 0x08ADE18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 718u, 0x08AE268Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE18Cu) goto L_08ADE18C;
    return;
L_08ADE18C:
    ctx.set_gpr(31, 0x08ADE194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADE194u) goto L_08ADE194;
    return;
L_08ADE194:
    ctx.set_gpr(31, 0x08ADE19Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE19Cu) goto L_08ADE19C;
    return;
L_08ADE19C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(18));
    ctx.set_gpr(31, 0x08ADE1B4u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADE1B4u) goto L_08ADE1B4;
    return;
L_08ADE1B4:
    ctx.set_gpr(31, 0x08ADE1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ADE1BCu) goto L_08ADE1BC;
    return;
L_08ADE1BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADE1DCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE1DCu) goto L_08ADE1DC;
    return;
L_08ADE1DC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE1F4;
    }
L_08ADE1F4:
    ctx.set_gpr(31, 0x08ADE1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 718u, 0x08AE268Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE1FCu) goto L_08ADE1FC;
    return;
L_08ADE1FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADE244;
    }
    goto L_08ADE20C;
L_08ADE20C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE210;
L_08ADE210:
    ctx.set_gpr(31, 0x08ADE218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE218u) goto L_08ADE218;
    return;
L_08ADE218:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE22Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE22Cu) goto L_08ADE22C;
    return;
L_08ADE22C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE210;
      }
      goto L_08ADE23C;
    }
L_08ADE23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE27C;
      }
      goto L_08ADE244;
    }
L_08ADE244:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADE27C;
      }
      goto L_08ADE24C;
    }
L_08ADE24C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE250;
L_08ADE250:
    ctx.set_gpr(31, 0x08ADE258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE258u) goto L_08ADE258;
    return;
L_08ADE258:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE26Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE26Cu) goto L_08ADE26C;
    return;
L_08ADE26C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE250;
      }
      goto L_08ADE27C;
    }
L_08ADE27C:
    ctx.set_gpr(31, 0x08ADE284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE284u) goto L_08ADE284;
    return;
L_08ADE284:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADE290u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE290u) goto L_08ADE290;
    return;
L_08ADE290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE380;
      }
      goto L_08ADE298;
    }
L_08ADE298:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE380;
      }
      goto L_08ADE2A4;
    }
L_08ADE2A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08ADE364;
    }
    goto L_08ADE2BC;
L_08ADE2BC:
    ctx.set_gpr(31, 0x08ADE2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE2C4u) goto L_08ADE2C4;
    return;
L_08ADE2C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADE2D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE2D8u) goto L_08ADE2D8;
    return;
L_08ADE2D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE324;
      }
      goto L_08ADE2EC;
    }
L_08ADE2EC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE2F0;
L_08ADE2F0:
    ctx.set_gpr(31, 0x08ADE2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2F8u) goto L_08ADE2F8;
    return;
L_08ADE2F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE30Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE30Cu) goto L_08ADE30C;
    return;
L_08ADE30C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE2F0;
      }
      goto L_08ADE31C;
    }
L_08ADE31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE360;
      }
      goto L_08ADE324;
    }
L_08ADE324:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADE360;
      }
      goto L_08ADE330;
    }
L_08ADE330:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE334;
L_08ADE334:
    ctx.set_gpr(31, 0x08ADE33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE33Cu) goto L_08ADE33C;
    return;
L_08ADE33C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE350u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE350u) goto L_08ADE350;
    return;
L_08ADE350:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE334;
      }
      goto L_08ADE360;
    }
L_08ADE360:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08ADE364;
L_08ADE364:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(31, 0x08ADE378u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADE378u) goto L_08ADE378;
    return;
L_08ADE378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE380;
    }
L_08ADE380:
    ctx.set_gpr(31, 0x08ADE388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE388u) goto L_08ADE388;
    return;
L_08ADE388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADE394u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE394u) goto L_08ADE394;
    return;
L_08ADE394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE480;
      }
      goto L_08ADE39C;
    }
L_08ADE39C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE480;
      }
      goto L_08ADE3A8;
    }
L_08ADE3A8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08ADE464;
    }
    goto L_08ADE3BC;
L_08ADE3BC:
    ctx.set_gpr(31, 0x08ADE3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE3C4u) goto L_08ADE3C4;
    return;
L_08ADE3C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADE3D8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE3D8u) goto L_08ADE3D8;
    return;
L_08ADE3D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE424;
      }
      goto L_08ADE3EC;
    }
L_08ADE3EC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE3F0;
L_08ADE3F0:
    ctx.set_gpr(31, 0x08ADE3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE3F8u) goto L_08ADE3F8;
    return;
L_08ADE3F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE40Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE40Cu) goto L_08ADE40C;
    return;
L_08ADE40C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3F0;
      }
      goto L_08ADE41C;
    }
L_08ADE41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE460;
      }
      goto L_08ADE424;
    }
L_08ADE424:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADE460;
      }
      goto L_08ADE430;
    }
L_08ADE430:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE434;
L_08ADE434:
    ctx.set_gpr(31, 0x08ADE43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE43Cu) goto L_08ADE43C;
    return;
L_08ADE43C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE450u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE450u) goto L_08ADE450;
    return;
L_08ADE450:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE434;
      }
      goto L_08ADE460;
    }
L_08ADE460:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08ADE464;
L_08ADE464:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(31, 0x08ADE478u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 533u, 0x08AE1C00u>(ctx, &aot_mem) && ctx.pc == 0x08ADE478u) goto L_08ADE478;
    return;
L_08ADE478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE480;
    }
L_08ADE480:
    ctx.set_gpr(31, 0x08ADE488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE488u) goto L_08ADE488;
    return;
L_08ADE488:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADE494u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE494u) goto L_08ADE494;
    return;
L_08ADE494:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE558;
      }
      goto L_08ADE49C;
    }
L_08ADE49C:
    ctx.set_gpr(31, 0x08ADE4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE4A4u) goto L_08ADE4A4;
    return;
L_08ADE4A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADE4B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE4B8u) goto L_08ADE4B8;
    return;
L_08ADE4B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE508;
      }
      goto L_08ADE4D0;
    }
L_08ADE4D0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE4D4;
L_08ADE4D4:
    ctx.set_gpr(31, 0x08ADE4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE4DCu) goto L_08ADE4DC;
    return;
L_08ADE4DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(107));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE4F0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE4F0u) goto L_08ADE4F0;
    return;
L_08ADE4F0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE4D4;
      }
      goto L_08ADE500;
    }
L_08ADE500:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ADE548;
      }
      goto L_08ADE508;
    }
L_08ADE508:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADE544;
      }
      goto L_08ADE514;
    }
L_08ADE514:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08ADE518;
L_08ADE518:
    ctx.set_gpr(31, 0x08ADE520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE520u) goto L_08ADE520;
    return;
L_08ADE520:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(109));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADE534u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE534u) goto L_08ADE534;
    return;
L_08ADE534:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE518;
      }
      goto L_08ADE544;
    }
L_08ADE544:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    goto L_08ADE548;
L_08ADE548:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE558;
    }
L_08ADE558:
    ctx.set_gpr(31, 0x08ADE560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE560u) goto L_08ADE560;
    return;
L_08ADE560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADE56Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE56Cu) goto L_08ADE56C;
    return;
L_08ADE56C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE574;
    }
L_08ADE574:
    ctx.set_gpr(31, 0x08ADE57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE57Cu) goto L_08ADE57C;
    return;
L_08ADE57C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADE590u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE590u) goto L_08ADE590;
    return;
L_08ADE590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
        goto L_08ADE5C4;
    }
    goto L_08ADE5A0;
L_08ADE5A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADE5BC;
    }
    goto L_08ADE5AC;
L_08ADE5AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08ADE5B8u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE5B8u) goto L_08ADE5B8;
    return;
L_08ADE5B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ADE5BC;
L_08ADE5BC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(165), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08ADE5C4;
L_08ADE5C4:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08ADE5FC;
    }
    goto L_08ADE5CC;
L_08ADE5CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5F8;
      }
      goto L_08ADE5E0;
    }
L_08ADE5E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE5F8;
    }
L_08ADE5F8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08ADE5FC;
L_08ADE5FC:
    ctx.set_gpr(31, 0x08ADE604u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE604u) goto L_08ADE604;
    return;
L_08ADE604:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 2247u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ADE644;
      }
      goto L_08ADE614;
    }
L_08ADE614:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23100), 0u);
      if (branch_taken) {
          goto L_08ADE648;
      }
      goto L_08ADE628;
    }
L_08ADE628:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23100), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADE648;
      }
      goto L_08ADE644;
    }
L_08ADE644:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ADE648;
L_08ADE648:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6904)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6908)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6912)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6916)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08ADE6A0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE6A0u) goto L_08ADE6A0;
    return;
L_08ADE6A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(91));
    ctx.set_gpr(31, 0x08ADE6B4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE6B4u) goto L_08ADE6B4;
    return;
L_08ADE6B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08ADE7B0;
    }
    goto L_08ADE6C0;
L_08ADE6C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_08ADE6E0;
    }
    goto L_08ADE6D0;
L_08ADE6D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADE718;
      }
      goto L_08ADE6DC;
    }
L_08ADE6DC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08ADE6E0;
L_08ADE6E0:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADE6F4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADE6F4u) goto L_08ADE6F4;
    return;
L_08ADE6F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(231));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08ADE718u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE718u) goto L_08ADE718;
    return;
L_08ADE718:
    ctx.set_gpr(31, 0x08ADE720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ADE720u) goto L_08ADE720;
    return;
L_08ADE720:
    ctx.set_gpr(31, 0x08ADE728u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 145u, 0x0885493Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE728u) goto L_08ADE728;
    return;
L_08ADE728:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 16256u << 16u);
        goto L_08ADE758;
    }
    goto L_08ADE730;
L_08ADE730:
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADE750u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADE750u) goto L_08ADE750;
    return;
L_08ADE750:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08ADE770;
      }
      goto L_08ADE758;
    }
L_08ADE758:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADE76Cu);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADE76Cu) goto L_08ADE76C;
    return;
L_08ADE76C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08ADE770;
L_08ADE770:
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(230));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08ADE790u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE790u) goto L_08ADE790;
    return;
L_08ADE790:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADE7A8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADE7A8u) goto L_08ADE7A8;
    return;
L_08ADE7A8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ADE804;
      }
      goto L_08ADE7B0;
    }
L_08ADE7B0:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADE7C4u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADE7C4u) goto L_08ADE7C4;
    return;
L_08ADE7C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(230));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(31, 0x08ADE7E8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6868));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 527u, 0x08851CD8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE7E8u) goto L_08ADE7E8;
    return;
L_08ADE7E8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ADE800u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 568u, 0x08852084u>(ctx, &aot_mem) && ctx.pc == 0x08ADE800u) goto L_08ADE800;
    return;
L_08ADE800:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ADE804;
L_08ADE804:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, 2231u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6920));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    goto L_08ADE840;
L_08ADE840:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ADE840;
      }
      goto L_08ADE860;
    }
L_08ADE860:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(31, 0x08ADE86Cu);
    ctx.set_gpr(17, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE86Cu) goto L_08ADE86C;
    return;
L_08ADE86C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADE880u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE880u) goto L_08ADE880;
    return;
L_08ADE880:
    ctx.set_gpr(31, 0x08ADE888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE888u) goto L_08ADE888;
    return;
L_08ADE888:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADE89Cu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE89Cu) goto L_08ADE89C;
    return;
L_08ADE89C:
    ctx.set_gpr(31, 0x08ADE8A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE8A4u) goto L_08ADE8A4;
    return;
L_08ADE8A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADE8B8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE8B8u) goto L_08ADE8B8;
    return;
L_08ADE8B8:
    ctx.set_gpr(31, 0x08ADE8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE8C0u) goto L_08ADE8C0;
    return;
L_08ADE8C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADE8D4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE8D4u) goto L_08ADE8D4;
    return;
L_08ADE8D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(161)));
        goto L_08ADE91C;
    }
    goto L_08ADE8E0;
L_08ADE8E0:
    ctx.set_gpr(31, 0x08ADE8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADE8E8u) goto L_08ADE8E8;
    return;
L_08ADE8E8:
    ctx.set_gpr(31, 0x08ADE8F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE8F0u) goto L_08ADE8F0;
    return;
L_08ADE8F0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(31, 0x08ADE910u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(27));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 1029u, 0x08A7F850u>(ctx, &aot_mem) && ctx.pc == 0x08ADE910u) goto L_08ADE910;
    return;
L_08ADE910:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(161)));
    goto L_08ADE91C;
L_08ADE91C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
        goto L_08ADE958;
    }
    goto L_08ADE924;
L_08ADE924:
    ctx.set_gpr(31, 0x08ADE92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 190u, 0x08848C78u>(ctx, &aot_mem) && ctx.pc == 0x08ADE92Cu) goto L_08ADE92C;
    return;
L_08ADE92C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32660));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08ADE94Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 446u, 0x08AF1BACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE94Cu) goto L_08ADE94C;
    return;
L_08ADE94C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    goto L_08ADE958;
L_08ADE958:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADEA7C;
      }
      goto L_08ADE96C;
    }
L_08ADE96C:
    ctx.set_gpr(31, 0x08ADE974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE974u) goto L_08ADE974;
    return;
L_08ADE974:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADE988u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE988u) goto L_08ADE988;
    return;
L_08ADE988:
    ctx.set_gpr(31, 0x08ADE990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE990u) goto L_08ADE990;
    return;
L_08ADE990:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ADE9A8u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE9A8u) goto L_08ADE9A8;
    return;
L_08ADE9A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADE9F4;
    }
    goto L_08ADE9B8;
L_08ADE9B8:
    ctx.set_gpr(31, 0x08ADE9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADE9C0u) goto L_08ADE9C0;
    return;
L_08ADE9C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17016u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(31, 0x08ADE9ECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADE9ECu) goto L_08ADE9EC;
    return;
L_08ADE9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADE9F4;
    }
L_08ADE9F4:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADEA38;
    }
    goto L_08ADE9FC;
L_08ADE9FC:
    ctx.set_gpr(31, 0x08ADEA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA04u) goto L_08ADEA04;
    return;
L_08ADEA04:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17120u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(31, 0x08ADEA30u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA30u) goto L_08ADEA30;
    return;
L_08ADEA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEA38;
    }
L_08ADEA38:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEA40;
    }
L_08ADEA40:
    ctx.set_gpr(31, 0x08ADEA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA48u) goto L_08ADEA48;
    return;
L_08ADEA48:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17186u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17180u << 16u);
    ctx.set_gpr(31, 0x08ADEA74u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA74u) goto L_08ADEA74;
    return;
L_08ADEA74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEA7C;
    }
L_08ADEA7C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEA84;
    }
L_08ADEA84:
    ctx.set_gpr(31, 0x08ADEA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA8Cu) goto L_08ADEA8C;
    return;
L_08ADEA8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADEAA0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEAA0u) goto L_08ADEAA0;
    return;
L_08ADEAA0:
    ctx.set_gpr(31, 0x08ADEAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAA8u) goto L_08ADEAA8;
    return;
L_08ADEAA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ADEAC0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAC0u) goto L_08ADEAC0;
    return;
L_08ADEAC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADEB0C;
    }
    goto L_08ADEAD0;
L_08ADEAD0:
    ctx.set_gpr(31, 0x08ADEAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEAD8u) goto L_08ADEAD8;
    return;
L_08ADEAD8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17016u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08ADEB04u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB04u) goto L_08ADEB04;
    return;
L_08ADEB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEB0C;
    }
L_08ADEB0C:
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADEB50;
    }
    goto L_08ADEB14;
L_08ADEB14:
    ctx.set_gpr(31, 0x08ADEB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB1Cu) goto L_08ADEB1C;
    return;
L_08ADEB1C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17120u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08ADEB48u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB48u) goto L_08ADEB48;
    return;
L_08ADEB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEB50;
    }
L_08ADEB50:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADEB8C;
      }
      goto L_08ADEB58;
    }
L_08ADEB58:
    ctx.set_gpr(31, 0x08ADEB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB60u) goto L_08ADEB60;
    return;
L_08ADEB60:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17186u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, 17182u << 16u);
    ctx.set_gpr(31, 0x08ADEB8Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB8Cu) goto L_08ADEB8C;
    return;
L_08ADEB8C:
    ctx.set_gpr(31, 0x08ADEB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB94u) goto L_08ADEB94;
    return;
L_08ADEB94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADEBA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBA0u) goto L_08ADEBA0;
    return;
L_08ADEBA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEBF0;
      }
      goto L_08ADEBA8;
    }
L_08ADEBA8:
    ctx.set_gpr(31, 0x08ADEBB0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 554u, 0x08AE1D90u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBB0u) goto L_08ADEBB0;
    return;
L_08ADEBB0:
    ctx.set_gpr(31, 0x08ADEBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBB8u) goto L_08ADEBB8;
    return;
L_08ADEBB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADEBCCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEBCCu) goto L_08ADEBCC;
    return;
L_08ADEBCC:
    ctx.set_gpr(31, 0x08ADEBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBD4u) goto L_08ADEBD4;
    return;
L_08ADEBD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADEBE8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEBE8u) goto L_08ADEBE8;
    return;
L_08ADEBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08ADFF30;
      }
      goto L_08ADEBF0;
    }
L_08ADEBF0:
    ctx.set_gpr(31, 0x08ADEBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADEBF8u) goto L_08ADEBF8;
    return;
L_08ADEBF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADEC04u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC04u) goto L_08ADEC04;
    return;
L_08ADEC04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEC14;
      }
      goto L_08ADEC0C;
    }
L_08ADEC0C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEC14;
    }
L_08ADEC14:
    ctx.set_gpr(31, 0x08ADEC1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC1Cu) goto L_08ADEC1C;
    return;
L_08ADEC1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADEC28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC28u) goto L_08ADEC28;
    return;
L_08ADEC28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEC78;
      }
      goto L_08ADEC30;
    }
L_08ADEC30:
    ctx.set_gpr(31, 0x08ADEC38u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 636u, 0x08AE2224u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC38u) goto L_08ADEC38;
    return;
L_08ADEC38:
    ctx.set_gpr(31, 0x08ADEC40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC40u) goto L_08ADEC40;
    return;
L_08ADEC40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADEC54u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC54u) goto L_08ADEC54;
    return;
L_08ADEC54:
    ctx.set_gpr(31, 0x08ADEC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC5Cu) goto L_08ADEC5C;
    return;
L_08ADEC5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADEC70u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC70u) goto L_08ADEC70;
    return;
L_08ADEC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEC78;
    }
L_08ADEC78:
    ctx.set_gpr(31, 0x08ADEC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADEC80u) goto L_08ADEC80;
    return;
L_08ADEC80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADEC8Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(11));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 933u, 0x0884B74Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC8Cu) goto L_08ADEC8C;
    return;
L_08ADEC8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEC9C;
      }
      goto L_08ADEC94;
    }
L_08ADEC94:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEC9C;
    }
L_08ADEC9C:
    ctx.set_gpr(31, 0x08ADECA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADECA4u) goto L_08ADECA4;
    return;
L_08ADECA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADECB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADECB0u) goto L_08ADECB0;
    return;
L_08ADECB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED24;
      }
      goto L_08ADECB8;
    }
L_08ADECB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED24;
      }
      goto L_08ADECC4;
    }
L_08ADECC4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED24;
      }
      goto L_08ADECD0;
    }
L_08ADECD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_08ADECFC;
    }
    goto L_08ADECDC;
L_08ADECDC:
    ctx.set_gpr(31, 0x08ADECE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADECE4u) goto L_08ADECE4;
    return;
L_08ADECE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADECF8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADECF8u) goto L_08ADECF8;
    return;
L_08ADECF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08ADECFC;
L_08ADECFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADED08;
      }
      goto L_08ADED04;
    }
L_08ADED04:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-50));
    goto L_08ADED08;
L_08ADED08:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ADED1C;
    }
    goto L_08ADED18;
L_08ADED18:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    goto L_08ADED1C;
L_08ADED1C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADED24;
    }
L_08ADED24:
    ctx.set_gpr(31, 0x08ADED2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADED2Cu) goto L_08ADED2C;
    return;
L_08ADED2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADED38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADED38u) goto L_08ADED38;
    return;
L_08ADED38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE94;
      }
      goto L_08ADED40;
    }
L_08ADED40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE94;
      }
      goto L_08ADED4C;
    }
L_08ADED4C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE94;
      }
      goto L_08ADED58;
    }
L_08ADED58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
        goto L_08ADEDC8;
    }
    goto L_08ADED68;
L_08ADED68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_08ADED98;
    }
    goto L_08ADED78;
L_08ADED78:
    ctx.set_gpr(31, 0x08ADED80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADED80u) goto L_08ADED80;
    return;
L_08ADED80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADED94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADED94u) goto L_08ADED94;
    return;
L_08ADED94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08ADED98;
L_08ADED98:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 350 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEDA8;
      }
      goto L_08ADEDA4;
    }
L_08ADEDA4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(50));
    goto L_08ADEDA8;
L_08ADEDA8:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADEDC0;
      }
      goto L_08ADEDBC;
    }
L_08ADEDBC:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08ADEDC0;
L_08ADEDC0:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEDC8;
    }
L_08ADEDC8:
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ADEE30;
    }
    goto L_08ADEDD0;
L_08ADEDD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_08ADEE00;
    }
    goto L_08ADEDE0;
L_08ADEDE0:
    ctx.set_gpr(31, 0x08ADEDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEDE8u) goto L_08ADEDE8;
    return;
L_08ADEDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADEDFCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEDFCu) goto L_08ADEDFC;
    return;
L_08ADEDFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08ADEE00;
L_08ADEE00:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 250 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE10;
      }
      goto L_08ADEE0C;
    }
L_08ADEE0C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(50));
    goto L_08ADEE10;
L_08ADEE10:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADEE28;
      }
      goto L_08ADEE24;
    }
L_08ADEE24:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08ADEE28;
L_08ADEE28:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEE30;
    }
L_08ADEE30:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEE38;
    }
L_08ADEE38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
        goto L_08ADEE64;
    }
    goto L_08ADEE44;
L_08ADEE44:
    ctx.set_gpr(31, 0x08ADEE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEE4Cu) goto L_08ADEE4C;
    return;
L_08ADEE4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ADEE60u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 403u, 0x08AB179Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEE60u) goto L_08ADEE60;
    return;
L_08ADEE60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_08ADEE64;
L_08ADEE64:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEE74;
      }
      goto L_08ADEE70;
    }
L_08ADEE70:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(50));
    goto L_08ADEE74;
L_08ADEE74:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADEE8C;
      }
      goto L_08ADEE88;
    }
L_08ADEE88:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08ADEE8C;
L_08ADEE8C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEE94;
    }
L_08ADEE94:
    ctx.set_gpr(31, 0x08ADEE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADEE9Cu) goto L_08ADEE9C;
    return;
L_08ADEE9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADEEA8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEEA8u) goto L_08ADEEA8;
    return;
L_08ADEEA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEF9C;
      }
      goto L_08ADEEB0;
    }
L_08ADEEB0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEF9C;
      }
      goto L_08ADEEBC;
    }
L_08ADEEBC:
    ctx.set_gpr(31, 0x08ADEEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEEC4u) goto L_08ADEEC4;
    return;
L_08ADEEC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADEED8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEED8u) goto L_08ADEED8;
    return;
L_08ADEED8:
    ctx.set_gpr(31, 0x08ADEEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEEE0u) goto L_08ADEEE0;
    return;
L_08ADEEE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADEEF4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEEF4u) goto L_08ADEEF4;
    return;
L_08ADEEF4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08ADEF10u);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF10u) goto L_08ADEF10;
    return;
L_08ADEF10:
    ctx.set_gpr(31, 0x08ADEF18u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF18u) goto L_08ADEF18;
    return;
L_08ADEF18:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADEF24u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEF24u) goto L_08ADEF24;
    return;
L_08ADEF24:
    ctx.set_gpr(31, 0x08ADEF2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF2Cu) goto L_08ADEF2C;
    return;
L_08ADEF2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADEF40u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEF40u) goto L_08ADEF40;
    return;
L_08ADEF40:
    ctx.set_gpr(31, 0x08ADEF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF48u) goto L_08ADEF48;
    return;
L_08ADEF48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADEF68u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF68u) goto L_08ADEF68;
    return;
L_08ADEF68:
    ctx.set_gpr(31, 0x08ADEF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF70u) goto L_08ADEF70;
    return;
L_08ADEF70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADEF90u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADEF90u) goto L_08ADEF90;
    return;
L_08ADEF90:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADEF9C;
    }
L_08ADEF9C:
    ctx.set_gpr(31, 0x08ADEFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADEFA4u) goto L_08ADEFA4;
    return;
L_08ADEFA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADEFB0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 943u, 0x0884B7C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEFB0u) goto L_08ADEFB0;
    return;
L_08ADEFB0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
        goto L_08ADF064;
    }
    goto L_08ADEFB8;
L_08ADEFB8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF060;
      }
      goto L_08ADEFC4;
    }
L_08ADEFC4:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08ADEFD4u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(116), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ADEFD4u) goto L_08ADEFD4;
    return;
L_08ADEFD4:
    ctx.set_gpr(31, 0x08ADEFDCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 526u, 0x08861EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEFDCu) goto L_08ADEFDC;
    return;
L_08ADEFDC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x08ADEFE8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 406u, 0x08A7DA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADEFE8u) goto L_08ADEFE8;
    return;
L_08ADEFE8:
    ctx.set_gpr(31, 0x08ADEFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADEFF0u) goto L_08ADEFF0;
    return;
L_08ADEFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(54));
    ctx.set_gpr(31, 0x08ADF004u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF004u) goto L_08ADF004;
    return;
L_08ADF004:
    ctx.set_gpr(31, 0x08ADF00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF00Cu) goto L_08ADF00C;
    return;
L_08ADF00C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF02Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF02Cu) goto L_08ADF02C;
    return;
L_08ADF02C:
    ctx.set_gpr(31, 0x08ADF034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF034u) goto L_08ADF034;
    return;
L_08ADF034:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17371u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17259u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF054u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(53));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF054u) goto L_08ADF054;
    return;
L_08ADF054:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(76), 0u);
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADF060;
    }
L_08ADF060:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    goto L_08ADF064;
L_08ADF064:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADF06C;
    }
L_08ADF06C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(170)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADF078;
    }
L_08ADF078:
    ctx.set_gpr(31, 0x08ADF080u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF080u) goto L_08ADF080;
    return;
L_08ADF080:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF08Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF08Cu) goto L_08ADF08C;
    return;
L_08ADF08C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(31, 0x08ADF098u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 449u, 0x08A85954u>(ctx, &aot_mem) && ctx.pc == 0x08ADF098u) goto L_08ADF098;
    return;
L_08ADF098:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08ADF0AC;
    }
    goto L_08ADF0A4;
L_08ADF0A4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08ADF0AC;
L_08ADF0AC:
    ctx.set_gpr(31, 0x08ADF0B4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 862u, 0x08A8AE94u>(ctx, &aot_mem) && ctx.pc == 0x08ADF0B4u) goto L_08ADF0B4;
    return;
L_08ADF0B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADF0D0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADF0D0u) goto L_08ADF0D0;
    return;
L_08ADF0D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADF0E8u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADF0E8u) goto L_08ADF0E8;
    return;
L_08ADF0E8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08ADF618;
    }
    goto L_08ADF0F0;
L_08ADF0F0:
    ctx.set_gpr(31, 0x08ADF0F8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 343u, 0x08A9A678u>(ctx, &aot_mem) && ctx.pc == 0x08ADF0F8u) goto L_08ADF0F8;
    return;
L_08ADF0F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF614;
      }
      goto L_08ADF100;
    }
L_08ADF100:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF110u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08ADF110u) goto L_08ADF110;
    return;
L_08ADF110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF614;
      }
      goto L_08ADF118;
    }
L_08ADF118:
    ctx.set_gpr(31, 0x08ADF120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF120u) goto L_08ADF120;
    return;
L_08ADF120:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF12Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF12Cu) goto L_08ADF12C;
    return;
L_08ADF12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF258;
      }
      goto L_08ADF134;
    }
L_08ADF134:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF140u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF140u) goto L_08ADF140;
    return;
L_08ADF140:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF14Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF14Cu) goto L_08ADF14C;
    return;
L_08ADF14C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF164u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF164u) goto L_08ADF164;
    return;
L_08ADF164:
    ctx.set_gpr(31, 0x08ADF16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF16Cu) goto L_08ADF16C;
    return;
L_08ADF16C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF19Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF19Cu) goto L_08ADF19C;
    return;
L_08ADF19C:
    ctx.set_gpr(31, 0x08ADF1A4u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF1A4u) goto L_08ADF1A4;
    return;
L_08ADF1A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADF214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF214u) goto L_08ADF214;
    return;
L_08ADF214:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08ADF24Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF24Cu) goto L_08ADF24C;
    return;
L_08ADF24C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADF258;
    }
L_08ADF258:
    ctx.set_gpr(31, 0x08ADF260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF260u) goto L_08ADF260;
    return;
L_08ADF260:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF26Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF26Cu) goto L_08ADF26C;
    return;
L_08ADF26C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF398;
      }
      goto L_08ADF274;
    }
L_08ADF274:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF280u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF280u) goto L_08ADF280;
    return;
L_08ADF280:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ADF28Cu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF28Cu) goto L_08ADF28C;
    return;
L_08ADF28C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF2A4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF2A4u) goto L_08ADF2A4;
    return;
L_08ADF2A4:
    ctx.set_gpr(31, 0x08ADF2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF2ACu) goto L_08ADF2AC;
    return;
L_08ADF2AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF2DCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF2DCu) goto L_08ADF2DC;
    return;
L_08ADF2DC:
    ctx.set_gpr(31, 0x08ADF2E4u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF2E4u) goto L_08ADF2E4;
    return;
L_08ADF2E4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADF354u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF354u) goto L_08ADF354;
    return;
L_08ADF354:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08ADF38Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF38Cu) goto L_08ADF38C;
    return;
L_08ADF38C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADF398;
    }
L_08ADF398:
    ctx.set_gpr(31, 0x08ADF3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF3A0u) goto L_08ADF3A0;
    return;
L_08ADF3A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF3ACu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF3ACu) goto L_08ADF3AC;
    return;
L_08ADF3AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4D8;
      }
      goto L_08ADF3B4;
    }
L_08ADF3B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF3C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF3C0u) goto L_08ADF3C0;
    return;
L_08ADF3C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ADF3CCu);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF3CCu) goto L_08ADF3CC;
    return;
L_08ADF3CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF3E4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF3E4u) goto L_08ADF3E4;
    return;
L_08ADF3E4:
    ctx.set_gpr(31, 0x08ADF3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF3ECu) goto L_08ADF3EC;
    return;
L_08ADF3EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF41Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF41Cu) goto L_08ADF41C;
    return;
L_08ADF41C:
    ctx.set_gpr(31, 0x08ADF424u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF424u) goto L_08ADF424;
    return;
L_08ADF424:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADF494u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF494u) goto L_08ADF494;
    return;
L_08ADF494:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08ADF4CCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF4CCu) goto L_08ADF4CC;
    return;
L_08ADF4CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADF4D8;
    }
L_08ADF4D8:
    ctx.set_gpr(31, 0x08ADF4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF4E0u) goto L_08ADF4E0;
    return;
L_08ADF4E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF4ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF4ECu) goto L_08ADF4EC;
    return;
L_08ADF4EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADF4F4;
    }
L_08ADF4F4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF500u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF500u) goto L_08ADF500;
    return;
L_08ADF500:
    ctx.set_gpr(31, 0x08ADF508u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF508u) goto L_08ADF508;
    return;
L_08ADF508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF520u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF520u) goto L_08ADF520;
    return;
L_08ADF520:
    ctx.set_gpr(31, 0x08ADF528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF528u) goto L_08ADF528;
    return;
L_08ADF528:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF558u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF558u) goto L_08ADF558;
    return;
L_08ADF558:
    ctx.set_gpr(31, 0x08ADF560u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF560u) goto L_08ADF560;
    return;
L_08ADF560:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADF5D0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF5D0u) goto L_08ADF5D0;
    return;
L_08ADF5D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08ADF608u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF608u) goto L_08ADF608;
    return;
L_08ADF608:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADF614;
    }
L_08ADF614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08ADF618;
L_08ADF618:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADF62Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADF62Cu) goto L_08ADF62C;
    return;
L_08ADF62C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08ADFCAC;
    }
    goto L_08ADF634;
L_08ADF634:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADF640u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF640u) goto L_08ADF640;
    return;
L_08ADF640:
    ctx.set_gpr(31, 0x08ADF648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF648u) goto L_08ADF648;
    return;
L_08ADF648:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF654u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF654u) goto L_08ADF654;
    return;
L_08ADF654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF6A0;
      }
      goto L_08ADF65C;
    }
L_08ADF65C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADF6A0;
      }
      goto L_08ADF66C;
    }
L_08ADF66C:
    ctx.set_gpr(31, 0x08ADF674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF674u) goto L_08ADF674;
    return;
L_08ADF674:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ADF68Cu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF68Cu) goto L_08ADF68C;
    return;
L_08ADF68C:
    ctx.set_gpr(31, 0x08ADF694u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADF694u) goto L_08ADF694;
    return;
L_08ADF694:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADF7DC;
      }
      goto L_08ADF6A0;
    }
L_08ADF6A0:
    ctx.set_gpr(31, 0x08ADF6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6A8u) goto L_08ADF6A8;
    return;
L_08ADF6A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF6B4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6B4u) goto L_08ADF6B4;
    return;
L_08ADF6B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF7DC;
      }
      goto L_08ADF6BC;
    }
L_08ADF6BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADF7DC;
      }
      goto L_08ADF6CC;
    }
L_08ADF6CC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADF6D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6D8u) goto L_08ADF6D8;
    return;
L_08ADF6D8:
    ctx.set_gpr(31, 0x08ADF6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6E0u) goto L_08ADF6E0;
    return;
L_08ADF6E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF6F8u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF6F8u) goto L_08ADF6F8;
    return;
L_08ADF6F8:
    ctx.set_gpr(31, 0x08ADF700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF700u) goto L_08ADF700;
    return;
L_08ADF700:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF730u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF730u) goto L_08ADF730;
    return;
L_08ADF730:
    ctx.set_gpr(31, 0x08ADF738u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF738u) goto L_08ADF738;
    return;
L_08ADF738:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADF7A8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7A8u) goto L_08ADF7A8;
    return;
L_08ADF7A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08ADF7D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF7D4u) goto L_08ADF7D4;
    return;
L_08ADF7D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADF7DC;
L_08ADF7DC:
    ctx.set_gpr(31, 0x08ADF7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7E4u) goto L_08ADF7E4;
    return;
L_08ADF7E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF7F0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF7F0u) goto L_08ADF7F0;
    return;
L_08ADF7F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF83C;
      }
      goto L_08ADF7F8;
    }
L_08ADF7F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADF83C;
      }
      goto L_08ADF808;
    }
L_08ADF808:
    ctx.set_gpr(31, 0x08ADF810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF810u) goto L_08ADF810;
    return;
L_08ADF810:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ADF828u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF828u) goto L_08ADF828;
    return;
L_08ADF828:
    ctx.set_gpr(31, 0x08ADF830u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADF830u) goto L_08ADF830;
    return;
L_08ADF830:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADF978;
      }
      goto L_08ADF83C;
    }
L_08ADF83C:
    ctx.set_gpr(31, 0x08ADF844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF844u) goto L_08ADF844;
    return;
L_08ADF844:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF850u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF850u) goto L_08ADF850;
    return;
L_08ADF850:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF978;
      }
      goto L_08ADF858;
    }
L_08ADF858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADF978;
      }
      goto L_08ADF868;
    }
L_08ADF868:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADF874u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADF874u) goto L_08ADF874;
    return;
L_08ADF874:
    ctx.set_gpr(31, 0x08ADF87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF87Cu) goto L_08ADF87C;
    return;
L_08ADF87C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADF894u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF894u) goto L_08ADF894;
    return;
L_08ADF894:
    ctx.set_gpr(31, 0x08ADF89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF89Cu) goto L_08ADF89C;
    return;
L_08ADF89C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADF8CCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF8CCu) goto L_08ADF8CC;
    return;
L_08ADF8CC:
    ctx.set_gpr(31, 0x08ADF8D4u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF8D4u) goto L_08ADF8D4;
    return;
L_08ADF8D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADF944u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADF944u) goto L_08ADF944;
    return;
L_08ADF944:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08ADF970u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF970u) goto L_08ADF970;
    return;
L_08ADF970:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADF978;
L_08ADF978:
    ctx.set_gpr(31, 0x08ADF980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF980u) goto L_08ADF980;
    return;
L_08ADF980:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF98Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF98Cu) goto L_08ADF98C;
    return;
L_08ADF98C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF9D8;
      }
      goto L_08ADF994;
    }
L_08ADF994:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADF9D8;
      }
      goto L_08ADF9A4;
    }
L_08ADF9A4:
    ctx.set_gpr(31, 0x08ADF9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9ACu) goto L_08ADF9AC;
    return;
L_08ADF9AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ADF9C4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF9C4u) goto L_08ADF9C4;
    return;
L_08ADF9C4:
    ctx.set_gpr(31, 0x08ADF9CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9CCu) goto L_08ADF9CC;
    return;
L_08ADF9CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFB14;
      }
      goto L_08ADF9D8;
    }
L_08ADF9D8:
    ctx.set_gpr(31, 0x08ADF9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9E0u) goto L_08ADF9E0;
    return;
L_08ADF9E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADF9ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9ECu) goto L_08ADF9EC;
    return;
L_08ADF9EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB14;
      }
      goto L_08ADF9F4;
    }
L_08ADF9F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADFB14;
      }
      goto L_08ADFA04;
    }
L_08ADFA04:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ADFA10u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA10u) goto L_08ADFA10;
    return;
L_08ADFA10:
    ctx.set_gpr(31, 0x08ADFA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA18u) goto L_08ADFA18;
    return;
L_08ADFA18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADFA30u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFA30u) goto L_08ADFA30;
    return;
L_08ADFA30:
    ctx.set_gpr(31, 0x08ADFA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA38u) goto L_08ADFA38;
    return;
L_08ADFA38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADFA68u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA68u) goto L_08ADFA68;
    return;
L_08ADFA68:
    ctx.set_gpr(31, 0x08ADFA70u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA70u) goto L_08ADFA70;
    return;
L_08ADFA70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADFAE0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAE0u) goto L_08ADFAE0;
    return;
L_08ADFAE0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08ADFB0Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB0Cu) goto L_08ADFB0C;
    return;
L_08ADFB0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08ADFB14;
L_08ADFB14:
    ctx.set_gpr(31, 0x08ADFB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB1Cu) goto L_08ADFB1C;
    return;
L_08ADFB1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFB28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB28u) goto L_08ADFB28;
    return;
L_08ADFB28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB70;
      }
      goto L_08ADFB30;
    }
L_08ADFB30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB70;
      }
      goto L_08ADFB3C;
    }
L_08ADFB3C:
    ctx.set_gpr(31, 0x08ADFB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB44u) goto L_08ADFB44;
    return;
L_08ADFB44:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08ADFB5Cu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB5Cu) goto L_08ADFB5C;
    return;
L_08ADFB5C:
    ctx.set_gpr(31, 0x08ADFB64u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB64u) goto L_08ADFB64;
    return;
L_08ADFB64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFB70;
    }
L_08ADFB70:
    ctx.set_gpr(31, 0x08ADFB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB78u) goto L_08ADFB78;
    return;
L_08ADFB78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFB84u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB84u) goto L_08ADFB84;
    return;
L_08ADFB84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFB8C;
    }
L_08ADFB8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFB98;
    }
L_08ADFB98:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(31, 0x08ADFBA4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBA4u) goto L_08ADFBA4;
    return;
L_08ADFBA4:
    ctx.set_gpr(31, 0x08ADFBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBACu) goto L_08ADFBAC;
    return;
L_08ADFBAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ADFBC4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(103));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFBC4u) goto L_08ADFBC4;
    return;
L_08ADFBC4:
    ctx.set_gpr(31, 0x08ADFBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBCCu) goto L_08ADFBCC;
    return;
L_08ADFBCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3220));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(31, 0x08ADFBFCu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 864u, 0x088AB5D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBFCu) goto L_08ADFBFC;
    return;
L_08ADFBFC:
    ctx.set_gpr(31, 0x08ADFC04u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC04u) goto L_08ADFC04;
    return;
L_08ADFC04:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-3204));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(7, 16948u << 16u);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 17186u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 45875u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(103));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(31, 0x08ADFC74u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 828u, 0x0885F288u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC74u) goto L_08ADFC74;
    return;
L_08ADFC74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3236));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08ADFCA0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A963CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFCA0u) goto L_08ADFCA0;
    return;
L_08ADFCA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFCAC;
    }
L_08ADFCAC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADFCC0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCC0u) goto L_08ADFCC0;
    return;
L_08ADFCC0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08ADFD58;
    }
    goto L_08ADFCC8;
L_08ADFCC8:
    ctx.set_gpr(31, 0x08ADFCD0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 343u, 0x08A9A678u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCD0u) goto L_08ADFCD0;
    return;
L_08ADFCD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD54;
      }
      goto L_08ADFCD8;
    }
L_08ADFCD8:
    ctx.set_gpr(31, 0x08ADFCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCE0u) goto L_08ADFCE0;
    return;
L_08ADFCE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFCECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCECu) goto L_08ADFCEC;
    return;
L_08ADFCEC:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
        goto L_08ADFD4C;
    }
    goto L_08ADFCF4;
L_08ADFCF4:
    ctx.set_gpr(31, 0x08ADFCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCFCu) goto L_08ADFCFC;
    return;
L_08ADFCFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFD08u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD08u) goto L_08ADFD08;
    return;
L_08ADFD08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFD10;
    }
L_08ADFD10:
    ctx.set_gpr(31, 0x08ADFD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD18u) goto L_08ADFD18;
    return;
L_08ADFD18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFD24u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD24u) goto L_08ADFD24;
    return;
L_08ADFD24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD48;
      }
      goto L_08ADFD2C;
    }
L_08ADFD2C:
    ctx.set_gpr(31, 0x08ADFD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD34u) goto L_08ADFD34;
    return;
L_08ADFD34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFD40u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD40u) goto L_08ADFD40;
    return;
L_08ADFD40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFD48;
    }
L_08ADFD48:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
    goto L_08ADFD4C;
L_08ADFD4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFD54;
    }
L_08ADFD54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08ADFD58;
L_08ADFD58:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADFD6Cu);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD6Cu) goto L_08ADFD6C;
    return;
L_08ADFD6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFD74;
    }
L_08ADFD74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x08ADFD84u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 451u, 0x08A96144u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD84u) goto L_08ADFD84;
    return;
L_08ADFD84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFD8C;
    }
L_08ADFD8C:
    ctx.set_gpr(31, 0x08ADFD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD94u) goto L_08ADFD94;
    return;
L_08ADFD94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFDA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDA0u) goto L_08ADFDA0;
    return;
L_08ADFDA0:
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
        goto L_08ADFE00;
    }
    goto L_08ADFDA8;
L_08ADFDA8:
    ctx.set_gpr(31, 0x08ADFDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDB0u) goto L_08ADFDB0;
    return;
L_08ADFDB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFDBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDBCu) goto L_08ADFDBC;
    return;
L_08ADFDBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFDFC;
      }
      goto L_08ADFDC4;
    }
L_08ADFDC4:
    ctx.set_gpr(31, 0x08ADFDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDCCu) goto L_08ADFDCC;
    return;
L_08ADFDCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFDD8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDD8u) goto L_08ADFDD8;
    return;
L_08ADFDD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFDFC;
      }
      goto L_08ADFDE0;
    }
L_08ADFDE0:
    ctx.set_gpr(31, 0x08ADFDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 179u, 0x08848BF4u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDE8u) goto L_08ADFDE8;
    return;
L_08ADFDE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ADFDF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 914u, 0x0884B680u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDF4u) goto L_08ADFDF4;
    return;
L_08ADFDF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE04;
      }
      goto L_08ADFDFC;
    }
L_08ADFDFC:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
    goto L_08ADFE00;
L_08ADFE00:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08ADFE04;
L_08ADFE04:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE20;
      }
      goto L_08ADFE0C;
    }
L_08ADFE0C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE20;
      }
      goto L_08ADFE14;
    }
L_08ADFE14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADFE54;
      }
      goto L_08ADFE20;
    }
L_08ADFE20:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE3C;
      }
      goto L_08ADFE28;
    }
L_08ADFE28:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE3C;
      }
      goto L_08ADFE30;
    }
L_08ADFE30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ADFE54;
      }
      goto L_08ADFE3C;
    }
L_08ADFE3C:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(143)));
        goto L_08ADFE58;
    }
    goto L_08ADFE44;
L_08ADFE44:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE54;
      }
      goto L_08ADFE4C;
    }
L_08ADFE4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08ADFE54;
L_08ADFE54:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(143)));
    goto L_08ADFE58;
L_08ADFE58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADFE60;
    }
L_08ADFE60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADFE70;
    }
L_08ADFE70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ADFE88u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 531u, 0x08A96828u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE88u) goto L_08ADFE88;
    return;
L_08ADFE88:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
        goto L_08ADFEE8;
    }
    goto L_08ADFE90;
L_08ADFE90:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08ADFF28;
      }
      goto L_08ADFEE8;
    }
L_08ADFEE8:
    ctx.set_gpr(3, 50298u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(232), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(264), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(296), ctx.gpr[3]);
    goto L_08ADFF28;
L_08ADFF28:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(143), static_cast<std::uint8_t>(0u));
    goto L_08ADFF2C;
L_08ADFF2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ADFF30;
L_08ADFF30:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFF50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ADFF64u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF64u) goto L_08ADFF64;
    return;
L_08ADFF64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08ADFF78u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF78u) goto L_08ADFF78;
    return;
L_08ADFF78:
    ctx.set_gpr(31, 0x08ADFF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF80u) goto L_08ADFF80;
    return;
L_08ADFF80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(87));
    ctx.set_gpr(31, 0x08ADFF94u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF94u) goto L_08ADFF94;
    return;
L_08ADFF94:
    ctx.set_gpr(31, 0x08ADFF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF9Cu) goto L_08ADFF9C;
    return;
L_08ADFF9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08ADFFB0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFFB0u) goto L_08ADFFB0;
    return;
L_08ADFFB0:
    ctx.set_gpr(31, 0x08ADFFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFB8u) goto L_08ADFFB8;
    return;
L_08ADFFB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(93));
    ctx.set_gpr(31, 0x08ADFFCCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFFCCu) goto L_08ADFFCC;
    return;
L_08ADFFCC:
    ctx.set_gpr(31, 0x08ADFFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFD4u) goto L_08ADFFD4;
    return;
L_08ADFFD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(101));
    ctx.set_gpr(31, 0x08ADFFE8u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFFE8u) goto L_08ADFFE8;
    return;
L_08ADFFE8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 62u, 0x08AE0320u>(ctx, &aot_mem); return;
      }
      goto L_08ADFFF4;
    }
L_08ADFFF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(165)));
        (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 53u, 0x08AE02D8u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1u, 0x08AE0004u>(ctx, &aot_mem); return;
}

void recomp_unit_0182(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0182_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_182(Runtime &runtime) {
    runtime.register_generated_unit(182u, 0x08ADC000u, 16384u, &recomp_unit_0182, &recomp_unit_0182_entry);
    runtime.register_function(0x08ADC004u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC010u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC018u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC020u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC034u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC03Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC050u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC058u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC06Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC094u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC118u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC13Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC14Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC15Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC164u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC174u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC184u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC190u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC208u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC224u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC22Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC240u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC248u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC25Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC264u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC278u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC280u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC300u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC314u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC324u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC338u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC340u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC348u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC364u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC384u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC38Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC394u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC418u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC428u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC430u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC438u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC440u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC458u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC52Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC534u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC53Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC544u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC564u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC568u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC56Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC574u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC594u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC59Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC60Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC614u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC620u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC628u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC630u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC644u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC64Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC654u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC65Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC678u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC68Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC694u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC69Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC708u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC718u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC720u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC72Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC734u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC73Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC744u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC750u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC758u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC764u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC778u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC78Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC810u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC818u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC82Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC838u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC840u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC848u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC850u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC858u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC864u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC86Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC874u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC87Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC884u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC88Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC898u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC918u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC924u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC940u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC948u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC984u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC998u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCED0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCED8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD01Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD02Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD030u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD044u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD04Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD058u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD060u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD078u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD108u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD11Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD14Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD154u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD20Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD21Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD234u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD240u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD250u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD274u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD278u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD298u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD300u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD308u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD328u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD338u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD368u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD370u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD404u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD40Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD414u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD41Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD424u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD430u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD438u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD440u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD448u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD454u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD45Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD468u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD494u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD524u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD52Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD540u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD548u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD55Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD594u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD608u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD61Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD64Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD654u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD674u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD680u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD688u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD698u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD714u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD71Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD724u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD730u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD738u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD744u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD764u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD76Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD780u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD790u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD798u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD804u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD80Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD818u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD820u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD82Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD834u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD848u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD858u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD864u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD86Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD878u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD880u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD888u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD88Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD904u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD928u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD938u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD944u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD948u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD950u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD958u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD970u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD988u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDE98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDED4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE020u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE028u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE030u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE038u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE064u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE06Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE074u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE07Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE104u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE114u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE12Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE134u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE148u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE15Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE168u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE174u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE17Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE184u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE18Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE194u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE19Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE20Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE22Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE23Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE244u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE250u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE26Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE27Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE284u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE298u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE30Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE324u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE334u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE33Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE360u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE364u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE380u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE388u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE394u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE39Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE40Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE41Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE424u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE430u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE434u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE43Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE450u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE464u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE478u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE480u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE488u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE494u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE49Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE514u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE534u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE544u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE548u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE558u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE56Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE574u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE57Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE590u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE604u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE614u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE628u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE644u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE648u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE65Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE718u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE720u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE728u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE730u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE750u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE758u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE76Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE790u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE800u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE804u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE810u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE840u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE860u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE86Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE880u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE888u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE89Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE910u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE924u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE94Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE958u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE96Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE974u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE988u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE990u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEED8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF004u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF00Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF02Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF034u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF054u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF060u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF064u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF06Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF078u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF080u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF098u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF100u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF118u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF12Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF134u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF140u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF14Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF164u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF16Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF19Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF214u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF260u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF26Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF274u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF280u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF28Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF354u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF38Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF41Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF424u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF494u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF508u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF528u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF558u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF608u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF614u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF618u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF62Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF634u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF648u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF654u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF65Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF66Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF674u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF68Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF694u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF700u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF730u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF738u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF808u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF810u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF828u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF830u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF83Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF844u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF850u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF858u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF868u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF874u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF87Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF894u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF89Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF944u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF970u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF978u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF994u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFF4u, &recomp_unit_0182, "recomp_unit_0182");
}
} // namespace psprecomp
