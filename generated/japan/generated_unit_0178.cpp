#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0178[4093] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0,
    12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0,
    0, 0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0,
    38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 48, 0, 49, 0,
    50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 59,
    0, 60, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71,
    0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0,
    0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95,
    0, 96, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 105, 0, 0,
    0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 115, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142,
    0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161,
    0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0,
    0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0,
    202, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230,
    0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241,
    0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0,
    0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0,
    278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 290, 0, 0, 291, 0, 292, 0,
    0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0,
    0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 305, 0, 0, 306, 0, 307, 0, 0, 0, 0, 308, 0, 309,
    0, 0, 0, 310, 311, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 321, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 326, 0, 0, 0, 0, 327, 0, 0, 0,
    0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0,
    0, 0, 337, 338, 0, 339, 0, 340, 341, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 347,
    0, 348, 0, 349, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 359, 0, 360, 0,
    361, 0, 362, 0, 363, 0, 364, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0,
    371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0,
    384, 385, 0, 386, 0, 387, 0, 388, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 394, 0, 0, 395, 0, 0,
    0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 403, 404, 405, 0, 0, 406, 0, 0, 0,
    407, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0,
    423, 0, 424, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0,
    440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0,
    0, 451, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 458, 0, 0, 459,
    0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 471, 0,
    472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 480, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 0,
    0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499, 0, 500, 0,
    0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0,
    0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0, 512, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516,
    0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0,
    528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536,
    0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 549,
    0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 556, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 559, 560, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0,
    0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582, 0, 583, 0,
    0, 584, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0,
    0, 0, 590, 0, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 595, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599,
    0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 609, 0,
    610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 613, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619,
    0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 626, 0, 627, 628, 0, 0, 0, 0, 0, 0, 0,
    629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0,
    0, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0,
    0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650,
    0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0,
    0, 661, 0, 662, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0,
    0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681,
    0, 682, 0, 683, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 692, 0, 693,
    0, 0, 694, 0, 695, 0, 696, 0, 697, 698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0,
    703, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 709, 0, 0, 0, 710, 0, 711, 0, 712, 0, 0, 713, 0, 714, 0, 715, 0, 716, 0,
    717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721,
    0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 728, 0, 0, 0, 0, 729, 0, 0,
    0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 732, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 744, 745, 0, 746, 0, 0, 0, 747,
    0, 0, 0, 0, 748, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0,
    0, 0, 0, 751, 0, 0, 752, 0, 753, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0,
    0, 0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0,
    0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0,
    0, 777, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0,
    0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 0, 0, 787, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792,
    0, 793, 0, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 0, 800, 801, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 805,
    0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 809, 810, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 812, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 817, 0, 818, 0, 0,
    0, 0, 819, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 829, 830, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0,
    0, 0, 835, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 839, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0, 848, 0, 849, 850, 0, 0, 0, 0, 0,
    851, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    856, 0, 857, 0, 0, 0, 858, 0, 859, 0, 0, 0, 860, 0, 861, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0,
    0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 0, 0, 868, 869, 0, 870, 0, 0, 0, 0, 871,
    0, 0, 0, 872, 0, 873, 0, 874, 0, 0, 0, 0, 875, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877,
    0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0,
    0, 0, 0, 0, 882, 0, 0, 883, 0, 0, 884, 0, 885, 886, 0, 0, 0, 0, 887, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 889, 0, 890, 0, 0, 891, 892, 0, 0, 893, 0, 894, 0, 0, 0, 895, 0, 896, 0, 0, 897, 0, 898, 0, 899, 0, 900, 0, 0, 901, 0,
    902, 0, 903, 0, 0, 904, 0, 905, 0, 0, 0, 906, 0, 0, 0, 907, 908, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 910, 0, 911, 0, 912, 0, 913, 0, 0, 914, 0, 915, 0, 0, 0, 916, 0, 0, 0, 917, 0, 0, 918, 0, 0, 919, 0,
    920, 0, 0, 0, 0, 921, 0, 922, 923, 0, 0, 0, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 927,
    0, 0, 0, 0, 928, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 930, 0, 0, 931, 0, 932, 933, 0, 0, 0, 934, 0, 935, 0, 0, 0, 0,
    0, 0, 936, 0, 0, 937, 0, 0, 0, 938, 0, 939, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 944, 0, 0, 0, 945, 0, 946, 0, 947, 0,
    948, 0, 949, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 950, 0, 0, 951, 0, 0, 0, 952, 0, 0, 0, 953, 0, 0, 954, 0, 955, 0, 0,
    956, 0, 957, 958, 0, 0, 959, 0, 0, 0, 960, 0, 961, 0, 962, 0, 963, 0, 0, 964, 0, 965, 0, 0, 0, 0, 0, 966, 0, 967, 0, 968,
    0, 969, 0, 0, 0, 0, 0, 0, 0, 970, 0, 0, 0, 0, 0, 0, 971, 972, 0, 0, 973, 0, 974, 0, 975, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 977, 0, 978, 0, 0, 0, 979, 0, 980, 0, 981, 0, 0, 982, 0, 983, 0, 984, 0, 985, 0,
    0, 986, 0, 0, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 988, 0, 989, 0, 0, 0, 990, 0, 991, 0, 0, 0, 0, 0, 0, 992, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 993, 0, 0, 0, 0, 0, 994, 0, 0, 0, 0, 0, 995, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 0,
    997, 0, 0, 0, 0, 0, 998, 0, 0, 0, 0, 999, 0, 1000, 0, 1001, 0, 0, 0, 0, 0, 1002, 0, 1003, 0, 0, 0, 1004, 0, 1005, 0, 0,
    0, 1006, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 1009, 0, 1010, 0, 0, 0, 0, 0, 1011, 0, 0, 1012, 0, 0, 0, 0,
    0, 1013, 0, 1014, 0, 0, 0, 1015, 0, 0, 0, 0, 0, 1016, 0, 1017, 0, 1018, 0, 1019, 0, 1020, 0, 1021, 0, 1022, 0, 1023, 0, 0, 0, 0,
    1024, 0, 1025, 0, 1026, 0, 0, 0, 1027, 0, 1028, 0, 1029, 0, 1030, 0, 1031, 0, 0, 0, 1032, 0, 0, 0, 0, 0, 1033, 0, 1034, 1035, 0, 1036,
    0, 1037, 0, 0, 1038, 0, 1039, 0, 1040, 1041, 0, 0, 0, 1042, 0, 0, 0, 0, 0, 1043, 0, 0, 0, 0, 0, 0, 1044, 0, 1045, 0, 0, 0,
    1046, 0, 1047, 0, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 0, 0, 1049, 0, 1050, 0, 0, 0, 1051, 0, 1052, 0, 0, 0, 0, 0, 1053, 0, 0,
    0, 0, 0, 0, 1054, 0, 1055, 0, 0, 0, 1056, 0, 1057, 0, 0, 0, 0, 0, 1058, 0, 0, 0, 0, 0, 0, 1059, 0, 1060, 0, 0, 0, 1061,
    0, 1062, 0, 0, 0, 0, 0, 1063, 0, 1064, 0, 0, 0, 0, 1065, 0, 1066, 0, 1067, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1068,
    0, 0, 0, 0, 0, 1069, 0, 1070, 0, 0, 0, 0, 1071, 0, 1072, 0, 1073, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1074, 0, 0,
    0, 0, 0, 1075, 0, 1076, 0, 0, 0, 0, 1077, 0, 1078, 0, 1079, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1080, 0, 0, 0, 0,
    0, 1081, 0, 1082, 0, 0, 0, 0, 1083, 0, 1084, 0, 1085, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1086, 0, 0, 0, 0, 0, 1087,
    0, 1088, 0, 0, 0, 0, 1089, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1092, 0, 0, 0, 0, 0, 1093, 0, 1094,
    0, 0, 0, 0, 1095, 0, 1096, 0, 1097, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1098, 0, 1099, 0, 0, 0, 0, 0, 0, 1100, 0, 0, 0,
    0, 0, 1101, 0, 1102, 0, 0, 0, 0, 1103, 0, 1104, 0, 1105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1106, 0, 1107,
};
void recomp_unit_0178_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ACC000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0178[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ACC000;
    case 2u: goto L_08ACC008;
    case 3u: goto L_08ACC014;
    case 4u: goto L_08ACC01C;
    case 5u: goto L_08ACC034;
    case 6u: goto L_08ACC03C;
    case 7u: goto L_08ACC048;
    case 8u: goto L_08ACC054;
    case 9u: goto L_08ACC05C;
    case 10u: goto L_08ACC06C;
    case 11u: goto L_08ACC078;
    case 12u: goto L_08ACC080;
    case 13u: goto L_08ACC088;
    case 14u: goto L_08ACC090;
    case 15u: goto L_08ACC0A8;
    case 16u: goto L_08ACC0BC;
    case 17u: goto L_08ACC0C4;
    case 18u: goto L_08ACC0D4;
    case 19u: goto L_08ACC0DC;
    case 20u: goto L_08ACC108;
    case 21u: goto L_08ACC130;
    case 22u: goto L_08ACC154;
    case 23u: goto L_08ACC15C;
    case 24u: goto L_08ACC168;
    case 25u: goto L_08ACC170;
    case 26u: goto L_08ACC178;
    case 27u: goto L_08ACC188;
    case 28u: goto L_08ACC190;
    case 29u: goto L_08ACC198;
    case 30u: goto L_08ACC1A4;
    case 31u: goto L_08ACC1BC;
    case 32u: goto L_08ACC1D0;
    case 33u: goto L_08ACC1D8;
    case 34u: goto L_08ACC1E0;
    case 35u: goto L_08ACC1E8;
    case 36u: goto L_08ACC1F0;
    case 37u: goto L_08ACC1F8;
    case 38u: goto L_08ACC200;
    case 39u: goto L_08ACC20C;
    case 40u: goto L_08ACC214;
    case 41u: goto L_08ACC21C;
    case 42u: goto L_08ACC22C;
    case 43u: goto L_08ACC234;
    case 44u: goto L_08ACC23C;
    case 45u: goto L_08ACC248;
    case 46u: goto L_08ACC260;
    case 47u: goto L_08ACC268;
    case 48u: goto L_08ACC270;
    case 49u: goto L_08ACC278;
    case 50u: goto L_08ACC280;
    case 51u: goto L_08ACC28C;
    case 52u: goto L_08ACC294;
    case 53u: goto L_08ACC2AC;
    case 54u: goto L_08ACC2C0;
    case 55u: goto L_08ACC2C8;
    case 56u: goto L_08ACC2D8;
    case 57u: goto L_08ACC2E0;
    case 58u: goto L_08ACC2EC;
    case 59u: goto L_08ACC2FC;
    case 60u: goto L_08ACC304;
    case 61u: goto L_08ACC310;
    case 62u: goto L_08ACC318;
    case 63u: goto L_08ACC320;
    case 64u: goto L_08ACC330;
    case 65u: goto L_08ACC338;
    case 66u: goto L_08ACC340;
    case 67u: goto L_08ACC34C;
    case 68u: goto L_08ACC364;
    case 69u: goto L_08ACC36C;
    case 70u: goto L_08ACC374;
    case 71u: goto L_08ACC37C;
    case 72u: goto L_08ACC384;
    case 73u: goto L_08ACC38C;
    case 74u: goto L_08ACC394;
    case 75u: goto L_08ACC3A8;
    case 76u: goto L_08ACC3C4;
    case 77u: goto L_08ACC3DC;
    case 78u: goto L_08ACC3E8;
    case 79u: goto L_08ACC3F0;
    case 80u: goto L_08ACC3F8;
    case 81u: goto L_08ACC40C;
    case 82u: goto L_08ACC42C;
    case 83u: goto L_08ACC434;
    case 84u: goto L_08ACC46C;
    case 85u: goto L_08ACC474;
    case 86u: goto L_08ACC484;
    case 87u: goto L_08ACC490;
    case 88u: goto L_08ACC498;
    case 89u: goto L_08ACC4A8;
    case 90u: goto L_08ACC4C8;
    case 91u: goto L_08ACC4D0;
    case 92u: goto L_08ACC4E0;
    case 93u: goto L_08ACC4EC;
    case 94u: goto L_08ACC4F4;
    case 95u: goto L_08ACC4FC;
    case 96u: goto L_08ACC504;
    case 97u: goto L_08ACC510;
    case 98u: goto L_08ACC518;
    case 99u: goto L_08ACC520;
    case 100u: goto L_08ACC528;
    case 101u: goto L_08ACC534;
    case 102u: goto L_08ACC558;
    case 103u: goto L_08ACC560;
    case 104u: goto L_08ACC56C;
    case 105u: goto L_08ACC574;
    case 106u: goto L_08ACC58C;
    case 107u: goto L_08ACC594;
    case 108u: goto L_08ACC5A0;
    case 109u: goto L_08ACC5AC;
    case 110u: goto L_08ACC5B4;
    case 111u: goto L_08ACC5D0;
    case 112u: goto L_08ACC5D8;
    case 113u: goto L_08ACC5EC;
    case 114u: goto L_08ACC60C;
    case 115u: goto L_08ACC618;
    case 116u: goto L_08ACC61C;
    case 117u: goto L_08ACC624;
    case 118u: goto L_08ACC62C;
    case 119u: goto L_08ACC634;
    case 120u: goto L_08ACC63C;
    case 121u: goto L_08ACC650;
    case 122u: goto L_08ACC670;
    case 123u: goto L_08ACC678;
    case 124u: goto L_08ACC688;
    case 125u: goto L_08ACC698;
    case 126u: goto L_08ACC6A0;
    case 127u: goto L_08ACC6A8;
    case 128u: goto L_08ACC6B0;
    case 129u: goto L_08ACC6B8;
    case 130u: goto L_08ACC6CC;
    case 131u: goto L_08ACC6DC;
    case 132u: goto L_08ACC6F4;
    case 133u: goto L_08ACC710;
    case 134u: goto L_08ACC718;
    case 135u: goto L_08ACC724;
    case 136u: goto L_08ACC730;
    case 137u: goto L_08ACC738;
    case 138u: goto L_08ACC744;
    case 139u: goto L_08ACC75C;
    case 140u: goto L_08ACC764;
    case 141u: goto L_08ACC770;
    case 142u: goto L_08ACC77C;
    case 143u: goto L_08ACC784;
    case 144u: goto L_08ACC790;
    case 145u: goto L_08ACC798;
    case 146u: goto L_08ACC7A0;
    case 147u: goto L_08ACC7B0;
    case 148u: goto L_08ACC7B8;
    case 149u: goto L_08ACC7C0;
    case 150u: goto L_08ACC7CC;
    case 151u: goto L_08ACC7E4;
    case 152u: goto L_08ACC7F8;
    case 153u: goto L_08ACC810;
    case 154u: goto L_08ACC820;
    case 155u: goto L_08ACC830;
    case 156u: goto L_08ACC848;
    case 157u: goto L_08ACC850;
    case 158u: goto L_08ACC858;
    case 159u: goto L_08ACC868;
    case 160u: goto L_08ACC874;
    case 161u: goto L_08ACC87C;
    case 162u: goto L_08ACC884;
    case 163u: goto L_08ACC898;
    case 164u: goto L_08ACC8A4;
    case 165u: goto L_08ACC8C4;
    case 166u: goto L_08ACC8DC;
    case 167u: goto L_08ACC8FC;
    case 168u: goto L_08ACC91C;
    case 169u: goto L_08ACC930;
    case 170u: goto L_08ACC93C;
    case 171u: goto L_08ACC944;
    case 172u: goto L_08ACC950;
    case 173u: goto L_08ACC958;
    case 174u: goto L_08ACC964;
    case 175u: goto L_08ACC96C;
    case 176u: goto L_08ACC9B0;
    case 177u: goto L_08ACC9B8;
    case 178u: goto L_08ACC9C8;
    case 179u: goto L_08ACC9D4;
    case 180u: goto L_08ACC9E0;
    case 181u: goto L_08ACC9E8;
    case 182u: goto L_08ACC9F8;
    case 183u: goto L_08ACCA14;
    case 184u: goto L_08ACCA24;
    case 185u: goto L_08ACCA2C;
    case 186u: goto L_08ACCA34;
    case 187u: goto L_08ACCA3C;
    case 188u: goto L_08ACCA44;
    case 189u: goto L_08ACCA4C;
    case 190u: goto L_08ACCA58;
    case 191u: goto L_08ACCA60;
    case 192u: goto L_08ACCA68;
    case 193u: goto L_08ACCA80;
    case 194u: goto L_08ACCA8C;
    case 195u: goto L_08ACCA94;
    case 196u: goto L_08ACCA9C;
    case 197u: goto L_08ACCAA8;
    case 198u: goto L_08ACCAB0;
    case 199u: goto L_08ACCAE0;
    case 200u: goto L_08ACCAE8;
    case 201u: goto L_08ACCAF4;
    case 202u: goto L_08ACCB00;
    case 203u: goto L_08ACCB08;
    case 204u: goto L_08ACCB18;
    case 205u: goto L_08ACCB24;
    case 206u: goto L_08ACCB2C;
    case 207u: goto L_08ACCB34;
    case 208u: goto L_08ACCB40;
    case 209u: goto L_08ACCB48;
    case 210u: goto L_08ACCB50;
    case 211u: goto L_08ACCB60;
    case 212u: goto L_08ACCB68;
    case 213u: goto L_08ACCB70;
    case 214u: goto L_08ACCB7C;
    case 215u: goto L_08ACCB84;
    case 216u: goto L_08ACCBB0;
    case 217u: goto L_08ACCBC4;
    case 218u: goto L_08ACCBCC;
    case 219u: goto L_08ACCBE0;
    case 220u: goto L_08ACCC08;
    case 221u: goto L_08ACCC20;
    case 222u: goto L_08ACCC2C;
    case 223u: goto L_08ACCC38;
    case 224u: goto L_08ACCC44;
    case 225u: goto L_08ACCC4C;
    case 226u: goto L_08ACCC54;
    case 227u: goto L_08ACCC5C;
    case 228u: goto L_08ACCC68;
    case 229u: goto L_08ACCC74;
    case 230u: goto L_08ACCC7C;
    case 231u: goto L_08ACCC88;
    case 232u: goto L_08ACCCA0;
    case 233u: goto L_08ACCCA8;
    case 234u: goto L_08ACCCB4;
    case 235u: goto L_08ACCCC0;
    case 236u: goto L_08ACCCC8;
    case 237u: goto L_08ACCCD4;
    case 238u: goto L_08ACCCDC;
    case 239u: goto L_08ACCCE4;
    case 240u: goto L_08ACCCF4;
    case 241u: goto L_08ACCCFC;
    case 242u: goto L_08ACCD04;
    case 243u: goto L_08ACCD10;
    case 244u: goto L_08ACCD28;
    case 245u: goto L_08ACCD3C;
    case 246u: goto L_08ACCD44;
    case 247u: goto L_08ACCD7C;
    case 248u: goto L_08ACCD84;
    case 249u: goto L_08ACCD94;
    case 250u: goto L_08ACCDA0;
    case 251u: goto L_08ACCDA8;
    case 252u: goto L_08ACCDB8;
    case 253u: goto L_08ACCDC4;
    case 254u: goto L_08ACCDCC;
    case 255u: goto L_08ACCDDC;
    case 256u: goto L_08ACCDFC;
    case 257u: goto L_08ACCE04;
    case 258u: goto L_08ACCE0C;
    case 259u: goto L_08ACCE14;
    case 260u: goto L_08ACCE20;
    case 261u: goto L_08ACCE28;
    case 262u: goto L_08ACCE30;
    case 263u: goto L_08ACCE48;
    case 264u: goto L_08ACCE54;
    case 265u: goto L_08ACCE5C;
    case 266u: goto L_08ACCE64;
    case 267u: goto L_08ACCE70;
    case 268u: goto L_08ACCE78;
    case 269u: goto L_08ACCE90;
    case 270u: goto L_08ACCE98;
    case 271u: goto L_08ACCEA4;
    case 272u: goto L_08ACCEB0;
    case 273u: goto L_08ACCEB8;
    case 274u: goto L_08ACCEE0;
    case 275u: goto L_08ACCEE8;
    case 276u: goto L_08ACCEF0;
    case 277u: goto L_08ACCEF8;
    case 278u: goto L_08ACCF00;
    case 279u: goto L_08ACCF08;
    case 280u: goto L_08ACCF10;
    case 281u: goto L_08ACCF18;
    case 282u: goto L_08ACCF20;
    case 283u: goto L_08ACCF28;
    case 284u: goto L_08ACCF30;
    case 285u: goto L_08ACCF6C;
    case 286u: goto L_08ACCF74;
    case 287u: goto L_08ACCF94;
    case 288u: goto L_08ACCFB4;
    case 289u: goto L_08ACCFE0;
    case 290u: goto L_08ACCFE4;
    case 291u: goto L_08ACCFF0;
    case 292u: goto L_08ACCFF8;
    case 293u: goto L_08ACD00C;
    case 294u: goto L_08ACD014;
    case 295u: goto L_08ACD024;
    case 296u: goto L_08ACD028;
    case 297u: goto L_08ACD030;
    case 298u: goto L_08ACD040;
    case 299u: goto L_08ACD048;
    case 300u: goto L_08ACD058;
    case 301u: goto L_08ACD074;
    case 302u: goto L_08ACD084;
    case 303u: goto L_08ACD09C;
    case 304u: goto L_08ACD0C8;
    case 305u: goto L_08ACD0CC;
    case 306u: goto L_08ACD0D8;
    case 307u: goto L_08ACD0E0;
    case 308u: goto L_08ACD0F4;
    case 309u: goto L_08ACD0FC;
    case 310u: goto L_08ACD10C;
    case 311u: goto L_08ACD110;
    case 312u: goto L_08ACD118;
    case 313u: goto L_08ACD128;
    case 314u: goto L_08ACD130;
    case 315u: goto L_08ACD140;
    case 316u: goto L_08ACD15C;
    case 317u: goto L_08ACD16C;
    case 318u: goto L_08ACD184;
    case 319u: goto L_08ACD1A0;
    case 320u: goto L_08ACD1A8;
    case 321u: goto L_08ACD1AC;
    case 322u: goto L_08ACD1B8;
    case 323u: goto L_08ACD1C8;
    case 324u: goto L_08ACD1D0;
    case 325u: goto L_08ACD1D8;
    case 326u: goto L_08ACD1DC;
    case 327u: goto L_08ACD1F0;
    case 328u: goto L_08ACD204;
    case 329u: goto L_08ACD220;
    case 330u: goto L_08ACD238;
    case 331u: goto L_08ACD244;
    case 332u: goto L_08ACD24C;
    case 333u: goto L_08ACD250;
    case 334u: goto L_08ACD25C;
    case 335u: goto L_08ACD26C;
    case 336u: goto L_08ACD278;
    case 337u: goto L_08ACD288;
    case 338u: goto L_08ACD28C;
    case 339u: goto L_08ACD294;
    case 340u: goto L_08ACD29C;
    case 341u: goto L_08ACD2A0;
    case 342u: goto L_08ACD2A4;
    case 343u: goto L_08ACD2B4;
    case 344u: goto L_08ACD2E0;
    case 345u: goto L_08ACD2EC;
    case 346u: goto L_08ACD2F4;
    case 347u: goto L_08ACD2FC;
    case 348u: goto L_08ACD304;
    case 349u: goto L_08ACD30C;
    case 350u: goto L_08ACD314;
    case 351u: goto L_08ACD31C;
    case 352u: goto L_08ACD328;
    case 353u: goto L_08ACD330;
    case 354u: goto L_08ACD33C;
    case 355u: goto L_08ACD340;
    case 356u: goto L_08ACD350;
    case 357u: goto L_08ACD360;
    case 358u: goto L_08ACD368;
    case 359u: goto L_08ACD370;
    case 360u: goto L_08ACD378;
    case 361u: goto L_08ACD380;
    case 362u: goto L_08ACD388;
    case 363u: goto L_08ACD390;
    case 364u: goto L_08ACD398;
    case 365u: goto L_08ACD39C;
    case 366u: goto L_08ACD3B4;
    case 367u: goto L_08ACD3E0;
    case 368u: goto L_08ACD3E8;
    case 369u: goto L_08ACD3F0;
    case 370u: goto L_08ACD3F8;
    case 371u: goto L_08ACD400;
    case 372u: goto L_08ACD408;
    case 373u: goto L_08ACD414;
    case 374u: goto L_08ACD41C;
    case 375u: goto L_08ACD428;
    case 376u: goto L_08ACD42C;
    case 377u: goto L_08ACD43C;
    case 378u: goto L_08ACD44C;
    case 379u: goto L_08ACD454;
    case 380u: goto L_08ACD45C;
    case 381u: goto L_08ACD464;
    case 382u: goto L_08ACD46C;
    case 383u: goto L_08ACD478;
    case 384u: goto L_08ACD480;
    case 385u: goto L_08ACD484;
    case 386u: goto L_08ACD48C;
    case 387u: goto L_08ACD494;
    case 388u: goto L_08ACD49C;
    case 389u: goto L_08ACD4A0;
    case 390u: goto L_08ACD4B8;
    case 391u: goto L_08ACD4C8;
    case 392u: goto L_08ACD4D4;
    case 393u: goto L_08ACD4E0;
    case 394u: goto L_08ACD4E8;
    case 395u: goto L_08ACD4F4;
    case 396u: goto L_08ACD510;
    case 397u: goto L_08ACD51C;
    case 398u: goto L_08ACD530;
    case 399u: goto L_08ACD538;
    case 400u: goto L_08ACD540;
    case 401u: goto L_08ACD548;
    case 402u: goto L_08ACD554;
    case 403u: goto L_08ACD55C;
    case 404u: goto L_08ACD560;
    case 405u: goto L_08ACD564;
    case 406u: goto L_08ACD570;
    case 407u: goto L_08ACD580;
    case 408u: goto L_08ACD588;
    case 409u: goto L_08ACD594;
    case 410u: goto L_08ACD5B8;
    case 411u: goto L_08ACD5CC;
    case 412u: goto L_08ACD5E4;
    case 413u: goto L_08ACD600;
    case 414u: goto L_08ACD608;
    case 415u: goto L_08ACD614;
    case 416u: goto L_08ACD620;
    case 417u: goto L_08ACD638;
    case 418u: goto L_08ACD640;
    case 419u: goto L_08ACD64C;
    case 420u: goto L_08ACD664;
    case 421u: goto L_08ACD66C;
    case 422u: goto L_08ACD678;
    case 423u: goto L_08ACD680;
    case 424u: goto L_08ACD688;
    case 425u: goto L_08ACD698;
    case 426u: goto L_08ACD6A0;
    case 427u: goto L_08ACD6A8;
    case 428u: goto L_08ACD6B4;
    case 429u: goto L_08ACD6CC;
    case 430u: goto L_08ACD6D4;
    case 431u: goto L_08ACD6EC;
    case 432u: goto L_08ACD720;
    case 433u: goto L_08ACD728;
    case 434u: goto L_08ACD738;
    case 435u: goto L_08ACD744;
    case 436u: goto L_08ACD74C;
    case 437u: goto L_08ACD75C;
    case 438u: goto L_08ACD768;
    case 439u: goto L_08ACD770;
    case 440u: goto L_08ACD780;
    case 441u: goto L_08ACD79C;
    case 442u: goto L_08ACD7A4;
    case 443u: goto L_08ACD7AC;
    case 444u: goto L_08ACD7B4;
    case 445u: goto L_08ACD7BC;
    case 446u: goto L_08ACD7C4;
    case 447u: goto L_08ACD7D0;
    case 448u: goto L_08ACD7D8;
    case 449u: goto L_08ACD7E0;
    case 450u: goto L_08ACD7F8;
    case 451u: goto L_08ACD804;
    case 452u: goto L_08ACD80C;
    case 453u: goto L_08ACD814;
    case 454u: goto L_08ACD820;
    case 455u: goto L_08ACD828;
    case 456u: goto L_08ACD85C;
    case 457u: goto L_08ACD864;
    case 458u: goto L_08ACD870;
    case 459u: goto L_08ACD87C;
    case 460u: goto L_08ACD888;
    case 461u: goto L_08ACD890;
    case 462u: goto L_08ACD8A0;
    case 463u: goto L_08ACD8AC;
    case 464u: goto L_08ACD8B4;
    case 465u: goto L_08ACD8BC;
    case 466u: goto L_08ACD8C4;
    case 467u: goto L_08ACD8CC;
    case 468u: goto L_08ACD8D4;
    case 469u: goto L_08ACD8E4;
    case 470u: goto L_08ACD8F0;
    case 471u: goto L_08ACD8F8;
    case 472u: goto L_08ACD900;
    case 473u: goto L_08ACD908;
    case 474u: goto L_08ACD910;
    case 475u: goto L_08ACD918;
    case 476u: goto L_08ACD920;
    case 477u: goto L_08ACD92C;
    case 478u: goto L_08ACD934;
    case 479u: goto L_08ACD93C;
    case 480u: goto L_08ACD944;
    case 481u: goto L_08ACD948;
    case 482u: goto L_08ACD95C;
    case 483u: goto L_08ACD988;
    case 484u: goto L_08ACD99C;
    case 485u: goto L_08ACD9B4;
    case 486u: goto L_08ACD9D0;
    case 487u: goto L_08ACD9D8;
    case 488u: goto L_08ACD9E4;
    case 489u: goto L_08ACD9F0;
    case 490u: goto L_08ACDA08;
    case 491u: goto L_08ACDA10;
    case 492u: goto L_08ACDA1C;
    case 493u: goto L_08ACDA34;
    case 494u: goto L_08ACDA3C;
    case 495u: goto L_08ACDA48;
    case 496u: goto L_08ACDA50;
    case 497u: goto L_08ACDA58;
    case 498u: goto L_08ACDA68;
    case 499u: goto L_08ACDA70;
    case 500u: goto L_08ACDA78;
    case 501u: goto L_08ACDA84;
    case 502u: goto L_08ACDA9C;
    case 503u: goto L_08ACDAA4;
    case 504u: goto L_08ACDABC;
    case 505u: goto L_08ACDAF0;
    case 506u: goto L_08ACDAF8;
    case 507u: goto L_08ACDB08;
    case 508u: goto L_08ACDB14;
    case 509u: goto L_08ACDB1C;
    case 510u: goto L_08ACDB2C;
    case 511u: goto L_08ACDB38;
    case 512u: goto L_08ACDB44;
    case 513u: goto L_08ACDB48;
    case 514u: goto L_08ACDB50;
    case 515u: goto L_08ACDB60;
    case 516u: goto L_08ACDB7C;
    case 517u: goto L_08ACDB90;
    case 518u: goto L_08ACDB98;
    case 519u: goto L_08ACDBA0;
    case 520u: goto L_08ACDBA8;
    case 521u: goto L_08ACDBB0;
    case 522u: goto L_08ACDBB8;
    case 523u: goto L_08ACDBC4;
    case 524u: goto L_08ACDBCC;
    case 525u: goto L_08ACDBD4;
    case 526u: goto L_08ACDBEC;
    case 527u: goto L_08ACDBF8;
    case 528u: goto L_08ACDC00;
    case 529u: goto L_08ACDC08;
    case 530u: goto L_08ACDC14;
    case 531u: goto L_08ACDC1C;
    case 532u: goto L_08ACDC50;
    case 533u: goto L_08ACDC58;
    case 534u: goto L_08ACDC64;
    case 535u: goto L_08ACDC70;
    case 536u: goto L_08ACDC7C;
    case 537u: goto L_08ACDC84;
    case 538u: goto L_08ACDC94;
    case 539u: goto L_08ACDCA0;
    case 540u: goto L_08ACDCA8;
    case 541u: goto L_08ACDCB0;
    case 542u: goto L_08ACDCB8;
    case 543u: goto L_08ACDCC0;
    case 544u: goto L_08ACDCC8;
    case 545u: goto L_08ACDCD8;
    case 546u: goto L_08ACDCE4;
    case 547u: goto L_08ACDCEC;
    case 548u: goto L_08ACDCF4;
    case 549u: goto L_08ACDCFC;
    case 550u: goto L_08ACDD04;
    case 551u: goto L_08ACDD0C;
    case 552u: goto L_08ACDD14;
    case 553u: goto L_08ACDD20;
    case 554u: goto L_08ACDD28;
    case 555u: goto L_08ACDD30;
    case 556u: goto L_08ACDD38;
    case 557u: goto L_08ACDD3C;
    case 558u: goto L_08ACDD58;
    case 559u: goto L_08ACDD84;
    case 560u: goto L_08ACDD88;
    case 561u: goto L_08ACDD90;
    case 562u: goto L_08ACDD9C;
    case 563u: goto L_08ACDDA4;
    case 564u: goto L_08ACDDB4;
    case 565u: goto L_08ACDDD4;
    case 566u: goto L_08ACDE08;
    case 567u: goto L_08ACDE1C;
    case 568u: goto L_08ACDE34;
    case 569u: goto L_08ACDE50;
    case 570u: goto L_08ACDE58;
    case 571u: goto L_08ACDE64;
    case 572u: goto L_08ACDE70;
    case 573u: goto L_08ACDE88;
    case 574u: goto L_08ACDE90;
    case 575u: goto L_08ACDE9C;
    case 576u: goto L_08ACDEB4;
    case 577u: goto L_08ACDEBC;
    case 578u: goto L_08ACDEC8;
    case 579u: goto L_08ACDED0;
    case 580u: goto L_08ACDED8;
    case 581u: goto L_08ACDEE8;
    case 582u: goto L_08ACDEF0;
    case 583u: goto L_08ACDEF8;
    case 584u: goto L_08ACDF04;
    case 585u: goto L_08ACDF1C;
    case 586u: goto L_08ACDF24;
    case 587u: goto L_08ACDF3C;
    case 588u: goto L_08ACDF70;
    case 589u: goto L_08ACDF78;
    case 590u: goto L_08ACDF88;
    case 591u: goto L_08ACDF94;
    case 592u: goto L_08ACDF9C;
    case 593u: goto L_08ACDFAC;
    case 594u: goto L_08ACDFB8;
    case 595u: goto L_08ACDFC4;
    case 596u: goto L_08ACDFC8;
    case 597u: goto L_08ACDFD0;
    case 598u: goto L_08ACDFE0;
    case 599u: goto L_08ACDFFC;
    case 600u: goto L_08ACE010;
    case 601u: goto L_08ACE018;
    case 602u: goto L_08ACE028;
    case 603u: goto L_08ACE030;
    case 604u: goto L_08ACE038;
    case 605u: goto L_08ACE040;
    case 606u: goto L_08ACE04C;
    case 607u: goto L_08ACE064;
    case 608u: goto L_08ACE06C;
    case 609u: goto L_08ACE078;
    case 610u: goto L_08ACE080;
    case 611u: goto L_08ACE098;
    case 612u: goto L_08ACE0A0;
    case 613u: goto L_08ACE0AC;
    case 614u: goto L_08ACE0B8;
    case 615u: goto L_08ACE0C4;
    case 616u: goto L_08ACE0CC;
    case 617u: goto L_08ACE0E0;
    case 618u: goto L_08ACE0EC;
    case 619u: goto L_08ACE0FC;
    case 620u: goto L_08ACE110;
    case 621u: goto L_08ACE11C;
    case 622u: goto L_08ACE130;
    case 623u: goto L_08ACE138;
    case 624u: goto L_08ACE144;
    case 625u: goto L_08ACE14C;
    case 626u: goto L_08ACE154;
    case 627u: goto L_08ACE15C;
    case 628u: goto L_08ACE160;
    case 629u: goto L_08ACE180;
    case 630u: goto L_08ACE19C;
    case 631u: goto L_08ACE1B0;
    case 632u: goto L_08ACE1CC;
    case 633u: goto L_08ACE1E8;
    case 634u: goto L_08ACE1F8;
    case 635u: goto L_08ACE208;
    case 636u: goto L_08ACE214;
    case 637u: goto L_08ACE21C;
    case 638u: goto L_08ACE228;
    case 639u: goto L_08ACE230;
    case 640u: goto L_08ACE260;
    case 641u: goto L_08ACE268;
    case 642u: goto L_08ACE278;
    case 643u: goto L_08ACE284;
    case 644u: goto L_08ACE28C;
    case 645u: goto L_08ACE29C;
    case 646u: goto L_08ACE2BC;
    case 647u: goto L_08ACE2C4;
    case 648u: goto L_08ACE2D4;
    case 649u: goto L_08ACE2F4;
    case 650u: goto L_08ACE2FC;
    case 651u: goto L_08ACE30C;
    case 652u: goto L_08ACE32C;
    case 653u: goto L_08ACE334;
    case 654u: goto L_08ACE344;
    case 655u: goto L_08ACE350;
    case 656u: goto L_08ACE358;
    case 657u: goto L_08ACE360;
    case 658u: goto L_08ACE368;
    case 659u: goto L_08ACE370;
    case 660u: goto L_08ACE378;
    case 661u: goto L_08ACE384;
    case 662u: goto L_08ACE38C;
    case 663u: goto L_08ACE398;
    case 664u: goto L_08ACE3A0;
    case 665u: goto L_08ACE3A8;
    case 666u: goto L_08ACE3B0;
    case 667u: goto L_08ACE3BC;
    case 668u: goto L_08ACE3D4;
    case 669u: goto L_08ACE3DC;
    case 670u: goto L_08ACE3E8;
    case 671u: goto L_08ACE3F0;
    case 672u: goto L_08ACE408;
    case 673u: goto L_08ACE410;
    case 674u: goto L_08ACE41C;
    case 675u: goto L_08ACE428;
    case 676u: goto L_08ACE430;
    case 677u: goto L_08ACE438;
    case 678u: goto L_08ACE448;
    case 679u: goto L_08ACE450;
    case 680u: goto L_08ACE470;
    case 681u: goto L_08ACE47C;
    case 682u: goto L_08ACE484;
    case 683u: goto L_08ACE48C;
    case 684u: goto L_08ACE498;
    case 685u: goto L_08ACE4A0;
    case 686u: goto L_08ACE4A8;
    case 687u: goto L_08ACE4B8;
    case 688u: goto L_08ACE4C0;
    case 689u: goto L_08ACE4C8;
    case 690u: goto L_08ACE4D4;
    case 691u: goto L_08ACE4EC;
    case 692u: goto L_08ACE4F4;
    case 693u: goto L_08ACE4FC;
    case 694u: goto L_08ACE508;
    case 695u: goto L_08ACE510;
    case 696u: goto L_08ACE518;
    case 697u: goto L_08ACE520;
    case 698u: goto L_08ACE524;
    case 699u: goto L_08ACE530;
    case 700u: goto L_08ACE544;
    case 701u: goto L_08ACE558;
    case 702u: goto L_08ACE570;
    case 703u: goto L_08ACE580;
    case 704u: goto L_08ACE58C;
    case 705u: goto L_08ACE594;
    case 706u: goto L_08ACE59C;
    case 707u: goto L_08ACE5A4;
    case 708u: goto L_08ACE5AC;
    case 709u: goto L_08ACE5B4;
    case 710u: goto L_08ACE5C4;
    case 711u: goto L_08ACE5CC;
    case 712u: goto L_08ACE5D4;
    case 713u: goto L_08ACE5E0;
    case 714u: goto L_08ACE5E8;
    case 715u: goto L_08ACE5F0;
    case 716u: goto L_08ACE5F8;
    case 717u: goto L_08ACE600;
    case 718u: goto L_08ACE630;
    case 719u: goto L_08ACE654;
    case 720u: goto L_08ACE668;
    case 721u: goto L_08ACE67C;
    case 722u: goto L_08ACE690;
    case 723u: goto L_08ACE6AC;
    case 724u: goto L_08ACE6BC;
    case 725u: goto L_08ACE6C8;
    case 726u: goto L_08ACE6D4;
    case 727u: goto L_08ACE6DC;
    case 728u: goto L_08ACE6E0;
    case 729u: goto L_08ACE6F4;
    case 730u: goto L_08ACE708;
    case 731u: goto L_08ACE720;
    case 732u: goto L_08ACE728;
    case 733u: goto L_08ACE72C;
    case 734u: goto L_08ACE73C;
    case 735u: goto L_08ACE75C;
    case 736u: goto L_08ACE768;
    case 737u: goto L_08ACE774;
    case 738u: goto L_08ACE77C;
    case 739u: goto L_08ACE78C;
    case 740u: goto L_08ACE7B4;
    case 741u: goto L_08ACE7BC;
    case 742u: goto L_08ACE7C4;
    case 743u: goto L_08ACE7D8;
    case 744u: goto L_08ACE7E0;
    case 745u: goto L_08ACE7E4;
    case 746u: goto L_08ACE7EC;
    case 747u: goto L_08ACE7FC;
    case 748u: goto L_08ACE810;
    case 749u: goto L_08ACE820;
    case 750u: goto L_08ACE874;
    case 751u: goto L_08ACE88C;
    case 752u: goto L_08ACE898;
    case 753u: goto L_08ACE8A0;
    case 754u: goto L_08ACE8A4;
    case 755u: goto L_08ACE8B4;
    case 756u: goto L_08ACE8D4;
    case 757u: goto L_08ACE8DC;
    case 758u: goto L_08ACE8E8;
    case 759u: goto L_08ACE8F0;
    case 760u: goto L_08ACE8F8;
    case 761u: goto L_08ACE90C;
    case 762u: goto L_08ACE914;
    case 763u: goto L_08ACE91C;
    case 764u: goto L_08ACE924;
    case 765u: goto L_08ACE93C;
    case 766u: goto L_08ACE944;
    case 767u: goto L_08ACE970;
    case 768u: goto L_08ACE978;
    case 769u: goto L_08ACE994;
    case 770u: goto L_08ACE99C;
    case 771u: goto L_08ACE9B0;
    case 772u: goto L_08ACE9C0;
    case 773u: goto L_08ACE9CC;
    case 774u: goto L_08ACE9D4;
    case 775u: goto L_08ACE9DC;
    case 776u: goto L_08ACE9F4;
    case 777u: goto L_08ACEA04;
    case 778u: goto L_08ACEA08;
    case 779u: goto L_08ACEA20;
    case 780u: goto L_08ACEA3C;
    case 781u: goto L_08ACEA48;
    case 782u: goto L_08ACEA60;
    case 783u: goto L_08ACEA6C;
    case 784u: goto L_08ACEA90;
    case 785u: goto L_08ACEA98;
    case 786u: goto L_08ACEAA0;
    case 787u: goto L_08ACEAB0;
    case 788u: goto L_08ACEAB4;
    case 789u: goto L_08ACEAC4;
    case 790u: goto L_08ACEAE4;
    case 791u: goto L_08ACEAF0;
    case 792u: goto L_08ACEAFC;
    case 793u: goto L_08ACEB04;
    case 794u: goto L_08ACEB10;
    case 795u: goto L_08ACEB1C;
    case 796u: goto L_08ACEB24;
    case 797u: goto L_08ACEB2C;
    case 798u: goto L_08ACEB34;
    case 799u: goto L_08ACEB40;
    case 800u: goto L_08ACEB4C;
    case 801u: goto L_08ACEB50;
    case 802u: goto L_08ACEB58;
    case 803u: goto L_08ACEB60;
    case 804u: goto L_08ACEB74;
    case 805u: goto L_08ACEB7C;
    case 806u: goto L_08ACEB84;
    case 807u: goto L_08ACEBC0;
    case 808u: goto L_08ACEBC8;
    case 809u: goto L_08ACEBD8;
    case 810u: goto L_08ACEBDC;
    case 811u: goto L_08ACEC24;
    case 812u: goto L_08ACEC2C;
    case 813u: goto L_08ACEC30;
    case 814u: goto L_08ACEC40;
    case 815u: goto L_08ACEC5C;
    case 816u: goto L_08ACEC68;
    case 817u: goto L_08ACEC6C;
    case 818u: goto L_08ACEC74;
    case 819u: goto L_08ACEC88;
    case 820u: goto L_08ACEC98;
    case 821u: goto L_08ACECA4;
    case 822u: goto L_08ACECAC;
    case 823u: goto L_08ACECC0;
    case 824u: goto L_08ACECCC;
    case 825u: goto L_08ACECD4;
    case 826u: goto L_08ACECDC;
    case 827u: goto L_08ACECE4;
    case 828u: goto L_08ACED28;
    case 829u: goto L_08ACED2C;
    case 830u: goto L_08ACED30;
    case 831u: goto L_08ACED40;
    case 832u: goto L_08ACED60;
    case 833u: goto L_08ACED70;
    case 834u: goto L_08ACED78;
    case 835u: goto L_08ACED88;
    case 836u: goto L_08ACED90;
    case 837u: goto L_08ACEDA0;
    case 838u: goto L_08ACEDAC;
    case 839u: goto L_08ACEDB4;
    case 840u: goto L_08ACEDC8;
    case 841u: goto L_08ACEDD0;
    case 842u: goto L_08ACEDE0;
    case 843u: goto L_08ACEE14;
    case 844u: goto L_08ACEE1C;
    case 845u: goto L_08ACEE34;
    case 846u: goto L_08ACEE3C;
    case 847u: goto L_08ACEE50;
    case 848u: goto L_08ACEE5C;
    case 849u: goto L_08ACEE64;
    case 850u: goto L_08ACEE68;
    case 851u: goto L_08ACEE80;
    case 852u: goto L_08ACEEA4;
    case 853u: goto L_08ACEEAC;
    case 854u: goto L_08ACEEC0;
    case 855u: goto L_08ACEED8;
    case 856u: goto L_08ACEF00;
    case 857u: goto L_08ACEF08;
    case 858u: goto L_08ACEF18;
    case 859u: goto L_08ACEF20;
    case 860u: goto L_08ACEF30;
    case 861u: goto L_08ACEF38;
    case 862u: goto L_08ACEF48;
    case 863u: goto L_08ACEFE4;
    case 864u: goto L_08ACF074;
    case 865u: goto L_08ACF090;
    case 866u: goto L_08ACF0B4;
    case 867u: goto L_08ACF0BC;
    case 868u: goto L_08ACF0DC;
    case 869u: goto L_08ACF0E0;
    case 870u: goto L_08ACF0E8;
    case 871u: goto L_08ACF0FC;
    case 872u: goto L_08ACF10C;
    case 873u: goto L_08ACF114;
    case 874u: goto L_08ACF11C;
    case 875u: goto L_08ACF130;
    case 876u: goto L_08ACF13C;
    case 877u: goto L_08ACF17C;
    case 878u: goto L_08ACF190;
    case 879u: goto L_08ACF1BC;
    case 880u: goto L_08ACF1D0;
    case 881u: goto L_08ACF1EC;
    case 882u: goto L_08ACF210;
    case 883u: goto L_08ACF21C;
    case 884u: goto L_08ACF228;
    case 885u: goto L_08ACF230;
    case 886u: goto L_08ACF234;
    case 887u: goto L_08ACF248;
    case 888u: goto L_08ACF250;
    case 889u: goto L_08ACF284;
    case 890u: goto L_08ACF28C;
    case 891u: goto L_08ACF298;
    case 892u: goto L_08ACF29C;
    case 893u: goto L_08ACF2A8;
    case 894u: goto L_08ACF2B0;
    case 895u: goto L_08ACF2C0;
    case 896u: goto L_08ACF2C8;
    case 897u: goto L_08ACF2D4;
    case 898u: goto L_08ACF2DC;
    case 899u: goto L_08ACF2E4;
    case 900u: goto L_08ACF2EC;
    case 901u: goto L_08ACF2F8;
    case 902u: goto L_08ACF300;
    case 903u: goto L_08ACF308;
    case 904u: goto L_08ACF314;
    case 905u: goto L_08ACF31C;
    case 906u: goto L_08ACF32C;
    case 907u: goto L_08ACF33C;
    case 908u: goto L_08ACF340;
    case 909u: goto L_08ACF358;
    case 910u: goto L_08ACF394;
    case 911u: goto L_08ACF39C;
    case 912u: goto L_08ACF3A4;
    case 913u: goto L_08ACF3AC;
    case 914u: goto L_08ACF3B8;
    case 915u: goto L_08ACF3C0;
    case 916u: goto L_08ACF3D0;
    case 917u: goto L_08ACF3E0;
    case 918u: goto L_08ACF3EC;
    case 919u: goto L_08ACF3F8;
    case 920u: goto L_08ACF400;
    case 921u: goto L_08ACF414;
    case 922u: goto L_08ACF41C;
    case 923u: goto L_08ACF420;
    case 924u: goto L_08ACF440;
    case 925u: goto L_08ACF460;
    case 926u: goto L_08ACF4F4;
    case 927u: goto L_08ACF4FC;
    case 928u: goto L_08ACF510;
    case 929u: goto L_08ACF524;
    case 930u: goto L_08ACF53C;
    case 931u: goto L_08ACF548;
    case 932u: goto L_08ACF550;
    case 933u: goto L_08ACF554;
    case 934u: goto L_08ACF564;
    case 935u: goto L_08ACF56C;
    case 936u: goto L_08ACF588;
    case 937u: goto L_08ACF594;
    case 938u: goto L_08ACF5A4;
    case 939u: goto L_08ACF5AC;
    case 940u: goto L_08ACF5B4;
    case 941u: goto L_08ACF5C0;
    case 942u: goto L_08ACF5C8;
    case 943u: goto L_08ACF5D0;
    case 944u: goto L_08ACF5D8;
    case 945u: goto L_08ACF5E8;
    case 946u: goto L_08ACF5F0;
    case 947u: goto L_08ACF5F8;
    case 948u: goto L_08ACF600;
    case 949u: goto L_08ACF608;
    case 950u: goto L_08ACF634;
    case 951u: goto L_08ACF640;
    case 952u: goto L_08ACF650;
    case 953u: goto L_08ACF660;
    case 954u: goto L_08ACF66C;
    case 955u: goto L_08ACF674;
    case 956u: goto L_08ACF680;
    case 957u: goto L_08ACF688;
    case 958u: goto L_08ACF68C;
    case 959u: goto L_08ACF698;
    case 960u: goto L_08ACF6A8;
    case 961u: goto L_08ACF6B0;
    case 962u: goto L_08ACF6B8;
    case 963u: goto L_08ACF6C0;
    case 964u: goto L_08ACF6CC;
    case 965u: goto L_08ACF6D4;
    case 966u: goto L_08ACF6EC;
    case 967u: goto L_08ACF6F4;
    case 968u: goto L_08ACF6FC;
    case 969u: goto L_08ACF704;
    case 970u: goto L_08ACF724;
    case 971u: goto L_08ACF740;
    case 972u: goto L_08ACF744;
    case 973u: goto L_08ACF750;
    case 974u: goto L_08ACF758;
    case 975u: goto L_08ACF760;
    case 976u: goto L_08ACF790;
    case 977u: goto L_08ACF7AC;
    case 978u: goto L_08ACF7B4;
    case 979u: goto L_08ACF7C4;
    case 980u: goto L_08ACF7CC;
    case 981u: goto L_08ACF7D4;
    case 982u: goto L_08ACF7E0;
    case 983u: goto L_08ACF7E8;
    case 984u: goto L_08ACF7F0;
    case 985u: goto L_08ACF7F8;
    case 986u: goto L_08ACF804;
    case 987u: goto L_08ACF81C;
    case 988u: goto L_08ACF838;
    case 989u: goto L_08ACF840;
    case 990u: goto L_08ACF850;
    case 991u: goto L_08ACF858;
    case 992u: goto L_08ACF874;
    case 993u: goto L_08ACF8A0;
    case 994u: goto L_08ACF8B8;
    case 995u: goto L_08ACF8D0;
    case 996u: goto L_08ACF8E8;
    case 997u: goto L_08ACF900;
    case 998u: goto L_08ACF918;
    case 999u: goto L_08ACF92C;
    case 1000u: goto L_08ACF934;
    case 1001u: goto L_08ACF93C;
    case 1002u: goto L_08ACF954;
    case 1003u: goto L_08ACF95C;
    case 1004u: goto L_08ACF96C;
    case 1005u: goto L_08ACF974;
    case 1006u: goto L_08ACF984;
    case 1007u: goto L_08ACF98C;
    case 1008u: goto L_08ACF9B4;
    case 1009u: goto L_08ACF9C0;
    case 1010u: goto L_08ACF9C8;
    case 1011u: goto L_08ACF9E0;
    case 1012u: goto L_08ACF9EC;
    case 1013u: goto L_08ACFA04;
    case 1014u: goto L_08ACFA0C;
    case 1015u: goto L_08ACFA1C;
    case 1016u: goto L_08ACFA34;
    case 1017u: goto L_08ACFA3C;
    case 1018u: goto L_08ACFA44;
    case 1019u: goto L_08ACFA4C;
    case 1020u: goto L_08ACFA54;
    case 1021u: goto L_08ACFA5C;
    case 1022u: goto L_08ACFA64;
    case 1023u: goto L_08ACFA6C;
    case 1024u: goto L_08ACFA80;
    case 1025u: goto L_08ACFA88;
    case 1026u: goto L_08ACFA90;
    case 1027u: goto L_08ACFAA0;
    case 1028u: goto L_08ACFAA8;
    case 1029u: goto L_08ACFAB0;
    case 1030u: goto L_08ACFAB8;
    case 1031u: goto L_08ACFAC0;
    case 1032u: goto L_08ACFAD0;
    case 1033u: goto L_08ACFAE8;
    case 1034u: goto L_08ACFAF0;
    case 1035u: goto L_08ACFAF4;
    case 1036u: goto L_08ACFAFC;
    case 1037u: goto L_08ACFB04;
    case 1038u: goto L_08ACFB10;
    case 1039u: goto L_08ACFB18;
    case 1040u: goto L_08ACFB20;
    case 1041u: goto L_08ACFB24;
    case 1042u: goto L_08ACFB34;
    case 1043u: goto L_08ACFB4C;
    case 1044u: goto L_08ACFB68;
    case 1045u: goto L_08ACFB70;
    case 1046u: goto L_08ACFB80;
    case 1047u: goto L_08ACFB88;
    case 1048u: goto L_08ACFBA0;
    case 1049u: goto L_08ACFBBC;
    case 1050u: goto L_08ACFBC4;
    case 1051u: goto L_08ACFBD4;
    case 1052u: goto L_08ACFBDC;
    case 1053u: goto L_08ACFBF4;
    case 1054u: goto L_08ACFC10;
    case 1055u: goto L_08ACFC18;
    case 1056u: goto L_08ACFC28;
    case 1057u: goto L_08ACFC30;
    case 1058u: goto L_08ACFC48;
    case 1059u: goto L_08ACFC64;
    case 1060u: goto L_08ACFC6C;
    case 1061u: goto L_08ACFC7C;
    case 1062u: goto L_08ACFC84;
    case 1063u: goto L_08ACFC9C;
    case 1064u: goto L_08ACFCA4;
    case 1065u: goto L_08ACFCB8;
    case 1066u: goto L_08ACFCC0;
    case 1067u: goto L_08ACFCC8;
    case 1068u: goto L_08ACFCFC;
    case 1069u: goto L_08ACFD14;
    case 1070u: goto L_08ACFD1C;
    case 1071u: goto L_08ACFD30;
    case 1072u: goto L_08ACFD38;
    case 1073u: goto L_08ACFD40;
    case 1074u: goto L_08ACFD74;
    case 1075u: goto L_08ACFD8C;
    case 1076u: goto L_08ACFD94;
    case 1077u: goto L_08ACFDA8;
    case 1078u: goto L_08ACFDB0;
    case 1079u: goto L_08ACFDB8;
    case 1080u: goto L_08ACFDEC;
    case 1081u: goto L_08ACFE04;
    case 1082u: goto L_08ACFE0C;
    case 1083u: goto L_08ACFE20;
    case 1084u: goto L_08ACFE28;
    case 1085u: goto L_08ACFE30;
    case 1086u: goto L_08ACFE64;
    case 1087u: goto L_08ACFE7C;
    case 1088u: goto L_08ACFE84;
    case 1089u: goto L_08ACFE98;
    case 1090u: goto L_08ACFEA0;
    case 1091u: goto L_08ACFEA8;
    case 1092u: goto L_08ACFEDC;
    case 1093u: goto L_08ACFEF4;
    case 1094u: goto L_08ACFEFC;
    case 1095u: goto L_08ACFF10;
    case 1096u: goto L_08ACFF18;
    case 1097u: goto L_08ACFF20;
    case 1098u: goto L_08ACFF4C;
    case 1099u: goto L_08ACFF54;
    case 1100u: goto L_08ACFF70;
    case 1101u: goto L_08ACFF88;
    case 1102u: goto L_08ACFF90;
    case 1103u: goto L_08ACFFA4;
    case 1104u: goto L_08ACFFAC;
    case 1105u: goto L_08ACFFB4;
    case 1106u: goto L_08ACFFE8;
    case 1107u: goto L_08ACFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ACC000:
    ctx.set_gpr(31, 0x08ACC008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC008u) goto L_08ACC008;
    return;
L_08ACC008:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC014u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC014u) goto L_08ACC014;
    return;
L_08ACC014:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC01C;
    }
L_08ACC01C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC034;
    }
L_08ACC034:
    ctx.set_gpr(31, 0x08ACC03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC03Cu) goto L_08ACC03C;
    return;
L_08ACC03C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC048u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACC048u) goto L_08ACC048;
    return;
L_08ACC048:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACC05C;
    }
    goto L_08ACC054;
L_08ACC054:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08ACC080;
      }
      goto L_08ACC05C;
    }
L_08ACC05C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ACC06Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC06Cu) goto L_08ACC06C;
    return;
L_08ACC06C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC078u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC078u) goto L_08ACC078;
    return;
L_08ACC078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC080;
    }
L_08ACC080:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08ACC0D4;
      }
      goto L_08ACC088;
    }
L_08ACC088:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08ACC090;
L_08ACC090:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08ACC0A8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ACC0A8u) goto L_08ACC0A8;
    return;
L_08ACC0A8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08ACC0C4;
    }
    goto L_08ACC0BC;
L_08ACC0BC:
    ctx.set_gpr(21, ctx.gpr[16] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08ACC0C4;
L_08ACC0C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(280));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_08ACC090;
      }
      goto L_08ACC0D4;
    }
L_08ACC0D4:
    if (ctx.gpr[21] == 0u) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACC108;
    }
    goto L_08ACC0DC;
L_08ACC0DC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC108;
    }
L_08ACC108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 3601 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC130;
    }
L_08ACC130:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC154;
    }
L_08ACC154:
    ctx.set_gpr(31, 0x08ACC15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC15Cu) goto L_08ACC15C;
    return;
L_08ACC15C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC168u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC168u) goto L_08ACC168;
    return;
L_08ACC168:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC170;
    }
L_08ACC170:
    ctx.set_gpr(31, 0x08ACC178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC178u) goto L_08ACC178;
    return;
L_08ACC178:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC188u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC188u) goto L_08ACC188;
    return;
L_08ACC188:
    ctx.set_gpr(31, 0x08ACC190u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACC190u) goto L_08ACC190;
    return;
L_08ACC190:
    ctx.set_gpr(31, 0x08ACC198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC198u) goto L_08ACC198;
    return;
L_08ACC198:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC1A4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC1A4u) goto L_08ACC1A4;
    return;
L_08ACC1A4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC1BC;
    }
L_08ACC1BC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACC1D0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1D0u) goto L_08ACC1D0;
    return;
L_08ACC1D0:
    ctx.set_gpr(31, 0x08ACC1D8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC1D8u) goto L_08ACC1D8;
    return;
L_08ACC1D8:
    ctx.set_gpr(31, 0x08ACC1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1E0u) goto L_08ACC1E0;
    return;
L_08ACC1E0:
    ctx.set_gpr(31, 0x08ACC1E8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1E8u) goto L_08ACC1E8;
    return;
L_08ACC1E8:
    ctx.set_gpr(31, 0x08ACC1F0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACC1F0u) goto L_08ACC1F0;
    return;
L_08ACC1F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC1F8;
    }
L_08ACC1F8:
    ctx.set_gpr(31, 0x08ACC200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC200u) goto L_08ACC200;
    return;
L_08ACC200:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC20Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC20Cu) goto L_08ACC20C;
    return;
L_08ACC20C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC214;
    }
L_08ACC214:
    ctx.set_gpr(31, 0x08ACC21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC21Cu) goto L_08ACC21C;
    return;
L_08ACC21C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC22Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC22Cu) goto L_08ACC22C;
    return;
L_08ACC22C:
    ctx.set_gpr(31, 0x08ACC234u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACC234u) goto L_08ACC234;
    return;
L_08ACC234:
    ctx.set_gpr(31, 0x08ACC23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC23Cu) goto L_08ACC23C;
    return;
L_08ACC23C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC248u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC248u) goto L_08ACC248;
    return;
L_08ACC248:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC260;
    }
L_08ACC260:
    ctx.set_gpr(31, 0x08ACC268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC268u) goto L_08ACC268;
    return;
L_08ACC268:
    ctx.set_gpr(31, 0x08ACC270u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC270u) goto L_08ACC270;
    return;
L_08ACC270:
    ctx.set_gpr(31, 0x08ACC278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC278u) goto L_08ACC278;
    return;
L_08ACC278:
    ctx.set_gpr(31, 0x08ACC280u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACC280u) goto L_08ACC280;
    return;
L_08ACC280:
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(21, 0u + 0u);
      if (branch_taken) {
          goto L_08ACC2D8;
      }
      goto L_08ACC28C;
    }
L_08ACC28C:
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(19, ctx.gpr[20] + 0u);
    goto L_08ACC294;
L_08ACC294:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x08ACC2ACu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ACC2ACu) goto L_08ACC2AC;
    return;
L_08ACC2AC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08ACC2C8;
    }
    goto L_08ACC2C0;
L_08ACC2C0:
    ctx.set_gpr(22, ctx.gpr[19] + 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08ACC2C8;
L_08ACC2C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(280));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(280));
      if (branch_taken) {
          goto L_08ACC294;
      }
      goto L_08ACC2D8;
    }
L_08ACC2D8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACC2EC;
      }
      goto L_08ACC2E0;
    }
L_08ACC2E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACC2ECu);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1076u, 0x08AC767Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC2ECu) goto L_08ACC2EC;
    return;
L_08ACC2EC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC2FC;
    }
L_08ACC2FC:
    ctx.set_gpr(31, 0x08ACC304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC304u) goto L_08ACC304;
    return;
L_08ACC304:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC310u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC310u) goto L_08ACC310;
    return;
L_08ACC310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC318;
    }
L_08ACC318:
    ctx.set_gpr(31, 0x08ACC320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC320u) goto L_08ACC320;
    return;
L_08ACC320:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC330u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC330u) goto L_08ACC330;
    return;
L_08ACC330:
    ctx.set_gpr(31, 0x08ACC338u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACC338u) goto L_08ACC338;
    return;
L_08ACC338:
    ctx.set_gpr(31, 0x08ACC340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC340u) goto L_08ACC340;
    return;
L_08ACC340:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC34Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC34Cu) goto L_08ACC34C;
    return;
L_08ACC34C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC364;
    }
L_08ACC364:
    ctx.set_gpr(31, 0x08ACC36Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACC36Cu) goto L_08ACC36C;
    return;
L_08ACC36C:
    ctx.set_gpr(31, 0x08ACC374u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC374u) goto L_08ACC374;
    return;
L_08ACC374:
    ctx.set_gpr(31, 0x08ACC37Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC37Cu) goto L_08ACC37C;
    return;
L_08ACC37C:
    ctx.set_gpr(31, 0x08ACC384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC384u) goto L_08ACC384;
    return;
L_08ACC384:
    ctx.set_gpr(31, 0x08ACC38Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACC38Cu) goto L_08ACC38C;
    return;
L_08ACC38C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC394;
    }
L_08ACC394:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACC3C4;
      }
      goto L_08ACC3A8;
    }
L_08ACC3A8:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    goto L_08ACC3C4;
L_08ACC3C4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACC58C;
      }
      goto L_08ACC3DC;
    }
L_08ACC3DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACC558;
      }
      goto L_08ACC3E8;
    }
L_08ACC3E8:
    if (ctx.gpr[3] == 0u) {
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
        goto L_08ACC3F8;
    }
    goto L_08ACC3F0;
L_08ACC3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC3F8;
    }
L_08ACC3F8:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC40Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC40Cu) goto L_08ACC40C;
    return;
L_08ACC40C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988)));
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5844));
    ctx.set_gpr(31, 0x08ACC42Cu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC42Cu) goto L_08ACC42C;
    return;
L_08ACC42C:
    ctx.set_gpr(31, 0x08ACC434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC434u) goto L_08ACC434;
    return;
L_08ACC434:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16696u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC46Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACC46Cu) goto L_08ACC46C;
    return;
L_08ACC46C:
    ctx.set_gpr(31, 0x08ACC474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC474u) goto L_08ACC474;
    return;
L_08ACC474:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC484u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC484u) goto L_08ACC484;
    return;
L_08ACC484:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC490u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC490u) goto L_08ACC490;
    return;
L_08ACC490:
    ctx.set_gpr(31, 0x08ACC498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC498u) goto L_08ACC498;
    return;
L_08ACC498:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC4A8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC4A8u) goto L_08ACC4A8;
    return;
L_08ACC4A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC4C8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4C8u) goto L_08ACC4C8;
    return;
L_08ACC4C8:
    ctx.set_gpr(31, 0x08ACC4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4D0u) goto L_08ACC4D0;
    return;
L_08ACC4D0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC4E0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC4E0u) goto L_08ACC4E0;
    return;
L_08ACC4E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC4ECu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC4ECu) goto L_08ACC4EC;
    return;
L_08ACC4EC:
    ctx.set_gpr(31, 0x08ACC4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4F4u) goto L_08ACC4F4;
    return;
L_08ACC4F4:
    ctx.set_gpr(31, 0x08ACC4FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACC4FCu) goto L_08ACC4FC;
    return;
L_08ACC4FC:
    ctx.set_gpr(31, 0x08ACC504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC504u) goto L_08ACC504;
    return;
L_08ACC504:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC510u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC510u) goto L_08ACC510;
    return;
L_08ACC510:
    ctx.set_gpr(31, 0x08ACC518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACC518u) goto L_08ACC518;
    return;
L_08ACC518:
    ctx.set_gpr(31, 0x08ACC520u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACC520u) goto L_08ACC520;
    return;
L_08ACC520:
    ctx.set_gpr(31, 0x08ACC528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC528u) goto L_08ACC528;
    return;
L_08ACC528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC534u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACC534u) goto L_08ACC534;
    return;
L_08ACC534:
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
          goto L_08ACCF30;
      }
      goto L_08ACC558;
    }
L_08ACC558:
    ctx.set_gpr(31, 0x08ACC560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC560u) goto L_08ACC560;
    return;
L_08ACC560:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC56Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC56Cu) goto L_08ACC56C;
    return;
L_08ACC56C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC574;
    }
L_08ACC574:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC58C;
    }
L_08ACC58C:
    ctx.set_gpr(31, 0x08ACC594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC594u) goto L_08ACC594;
    return;
L_08ACC594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC5A0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5A0u) goto L_08ACC5A0;
    return;
L_08ACC5A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACC5B4;
    }
    goto L_08ACC5AC;
L_08ACC5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC5B4;
    }
L_08ACC5B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACC5D0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACC5D0u) goto L_08ACC5D0;
    return;
L_08ACC5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC5D8;
    }
L_08ACC5D8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ACC61C;
    }
    goto L_08ACC5EC;
L_08ACC5EC:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACC60Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC60Cu) goto L_08ACC60C;
    return;
L_08ACC60C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC618u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC618u) goto L_08ACC618;
    return;
L_08ACC618:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ACC61C;
L_08ACC61C:
    ctx.set_gpr(31, 0x08ACC624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACC624u) goto L_08ACC624;
    return;
L_08ACC624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC62C;
    }
L_08ACC62C:
    ctx.set_gpr(31, 0x08ACC634u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACC634u) goto L_08ACC634;
    return;
L_08ACC634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC63C;
    }
L_08ACC63C:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC650u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(45));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC650u) goto L_08ACC650;
    return;
L_08ACC650:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988)));
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5868));
    ctx.set_gpr(31, 0x08ACC670u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC670u) goto L_08ACC670;
    return;
L_08ACC670:
    ctx.set_gpr(31, 0x08ACC678u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 334u, 0x08AC9344u>(ctx, &aot_mem) && ctx.pc == 0x08ACC678u) goto L_08ACC678;
    return;
L_08ACC678:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08ACC688u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5904));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 331u, 0x08AC9318u>(ctx, &aot_mem) && ctx.pc == 0x08ACC688u) goto L_08ACC688;
    return;
L_08ACC688:
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x08ACC698u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24220));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 331u, 0x08AC9318u>(ctx, &aot_mem) && ctx.pc == 0x08ACC698u) goto L_08ACC698;
    return;
L_08ACC698:
    ctx.set_gpr(31, 0x08ACC6A0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    goto L_08ACD95C;
L_08ACC6A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC6A8;
    }
L_08ACC6A8:
    ctx.set_gpr(31, 0x08ACC6B0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACC6B0u) goto L_08ACC6B0;
    return;
L_08ACC6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC6B8;
    }
L_08ACC6B8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACC6DC;
      }
      goto L_08ACC6CC;
    }
L_08ACC6CC:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    goto L_08ACC6DC;
L_08ACC6DC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC6F4;
    }
L_08ACC6F4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5872));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACC710:
    ctx.set_gpr(31, 0x08ACC718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC718u) goto L_08ACC718;
    return;
L_08ACC718:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC724u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACC724u) goto L_08ACC724;
    return;
L_08ACC724:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACC744;
      }
      goto L_08ACC730;
    }
L_08ACC730:
    ctx.set_gpr(31, 0x08ACC738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC738u) goto L_08ACC738;
    return;
L_08ACC738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC744u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACC744u) goto L_08ACC744;
    return;
L_08ACC744:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC75C;
    }
L_08ACC75C:
    ctx.set_gpr(31, 0x08ACC764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC764u) goto L_08ACC764;
    return;
L_08ACC764:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC770u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACC770u) goto L_08ACC770;
    return;
L_08ACC770:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACC7E4;
    }
    goto L_08ACC77C;
L_08ACC77C:
    ctx.set_gpr(31, 0x08ACC784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC784u) goto L_08ACC784;
    return;
L_08ACC784:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC790u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC790u) goto L_08ACC790;
    return;
L_08ACC790:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC798;
    }
L_08ACC798:
    ctx.set_gpr(31, 0x08ACC7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7A0u) goto L_08ACC7A0;
    return;
L_08ACC7A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC7B0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC7B0u) goto L_08ACC7B0;
    return;
L_08ACC7B0:
    ctx.set_gpr(31, 0x08ACC7B8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7B8u) goto L_08ACC7B8;
    return;
L_08ACC7B8:
    ctx.set_gpr(31, 0x08ACC7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC7C0u) goto L_08ACC7C0;
    return;
L_08ACC7C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC7CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC7CCu) goto L_08ACC7CC;
    return;
L_08ACC7CC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC7E4;
    }
L_08ACC7E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACC7F8;
    }
L_08ACC7F8:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(225));
    ctx.set_gpr(31, 0x08ACC810u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC810u) goto L_08ACC810;
    return;
L_08ACC810:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC820u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACC820u) goto L_08ACC820;
    return;
L_08ACC820:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACC830u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC830u) goto L_08ACC830;
    return;
L_08ACC830:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08ACC848u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ACC848u) goto L_08ACC848;
    return;
L_08ACC848:
    ctx.set_gpr(31, 0x08ACC850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACC850u) goto L_08ACC850;
    return;
L_08ACC850:
    ctx.set_gpr(31, 0x08ACC858u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACC858u) goto L_08ACC858;
    return;
L_08ACC858:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 25696u);
    ctx.set_gpr(31, 0x08ACC868u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08ACCF6C;
L_08ACC868:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08ACC884;
    }
    goto L_08ACC874;
L_08ACC874:
    ctx.set_gpr(31, 0x08ACC87Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 971u, 0x08ABB350u>(ctx, &aot_mem) && ctx.pc == 0x08ACC87Cu) goto L_08ACC87C;
    return;
L_08ACC87C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ACC884;
L_08ACC884:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACC898u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 43u, 0x08ABC278u>(ctx, &aot_mem) && ctx.pc == 0x08ACC898u) goto L_08ACC898;
    return;
L_08ACC898:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACC8A4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 974u, 0x08ABB3D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8A4u) goto L_08ACC8A4;
    return;
L_08ACC8A4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23988)));
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24220));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5492));
    ctx.set_gpr(31, 0x08ACC8C4u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8C4u) goto L_08ACC8C4;
    return;
L_08ACC8C4:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24175));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5940));
    ctx.set_gpr(31, 0x08ACC8DCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8DCu) goto L_08ACC8DC;
    return;
L_08ACC8DC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24130));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5964));
    ctx.set_gpr(31, 0x08ACC8FCu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(232));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC8FCu) goto L_08ACC8FC;
    return;
L_08ACC8FC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24085));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5976));
    ctx.set_gpr(31, 0x08ACC91Cu);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC91Cu) goto L_08ACC91C;
    return;
L_08ACC91C:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24040));
    ctx.set_gpr(31, 0x08ACC930u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5988));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC930u) goto L_08ACC930;
    return;
L_08ACC930:
    ctx.set_gpr(17, 2247u << 16u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-24220));
    goto L_08ACC93C;
L_08ACC93C:
    ctx.set_gpr(31, 0x08ACC944u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACC944u) goto L_08ACC944;
    return;
L_08ACC944:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08ACC958;
    }
    goto L_08ACC950;
L_08ACC950:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08ACC958;
L_08ACC958:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08ACC93C;
      }
      goto L_08ACC964;
    }
L_08ACC964:
    ctx.set_gpr(31, 0x08ACC96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC96Cu) goto L_08ACC96C;
    return;
L_08ACC96C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 49024u << 16u);
    ctx.set_gpr(2, 16544u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACC9B0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9B0u) goto L_08ACC9B0;
    return;
L_08ACC9B0:
    ctx.set_gpr(31, 0x08ACC9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9B8u) goto L_08ACC9B8;
    return;
L_08ACC9B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC9C8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC9C8u) goto L_08ACC9C8;
    return;
L_08ACC9C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACC9D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9D4u) goto L_08ACC9D4;
    return;
L_08ACC9D4:
    ctx.set_gpr(16, 2247u << 16u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-24220));
    goto L_08ACC9E0;
L_08ACC9E0:
    ctx.set_gpr(31, 0x08ACC9E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACC9E8u) goto L_08ACC9E8;
    return;
L_08ACC9E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACC9F8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACC9F8u) goto L_08ACC9F8;
    return;
L_08ACC9F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCA14u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA14u) goto L_08ACCA14;
    return;
L_08ACCA14:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(45));
      if (branch_taken) {
          goto L_08ACC9E0;
      }
      goto L_08ACCA24;
    }
L_08ACCA24:
    ctx.set_gpr(31, 0x08ACCA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA2Cu) goto L_08ACCA2C;
    return;
L_08ACCA2C:
    ctx.set_gpr(31, 0x08ACCA34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA34u) goto L_08ACCA34;
    return;
L_08ACCA34:
    ctx.set_gpr(31, 0x08ACCA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA3Cu) goto L_08ACCA3C;
    return;
L_08ACCA3C:
    ctx.set_gpr(31, 0x08ACCA44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA44u) goto L_08ACCA44;
    return;
L_08ACCA44:
    ctx.set_gpr(31, 0x08ACCA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA4Cu) goto L_08ACCA4C;
    return;
L_08ACCA4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCA58u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA58u) goto L_08ACCA58;
    return;
L_08ACCA58:
    ctx.set_gpr(31, 0x08ACCA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA60u) goto L_08ACCA60;
    return;
L_08ACCA60:
    ctx.set_gpr(31, 0x08ACCA68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCA68u) goto L_08ACCA68;
    return;
L_08ACCA68:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACCA80u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA80u) goto L_08ACCA80;
    return;
L_08ACCA80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCA8Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA8Cu) goto L_08ACCA8C;
    return;
L_08ACCA8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCA94;
    }
L_08ACCA94:
    ctx.set_gpr(31, 0x08ACCA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCA9Cu) goto L_08ACCA9C;
    return;
L_08ACCA9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCAA8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAA8u) goto L_08ACCAA8;
    return;
L_08ACCAA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCAB0;
    }
L_08ACCAB0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCAE0;
    }
L_08ACCAE0:
    ctx.set_gpr(31, 0x08ACCAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAE8u) goto L_08ACCAE8;
    return;
L_08ACCAE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCAF4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACCAF4u) goto L_08ACCAF4;
    return;
L_08ACCAF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACCB08;
    }
    goto L_08ACCB00;
L_08ACCB00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCB08;
    }
L_08ACCB08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACCB18u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB18u) goto L_08ACCB18;
    return;
L_08ACCB18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCB24u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB24u) goto L_08ACCB24;
    return;
L_08ACCB24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCB2C;
    }
L_08ACCB2C:
    ctx.set_gpr(31, 0x08ACCB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB34u) goto L_08ACCB34;
    return;
L_08ACCB34:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCB40u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB40u) goto L_08ACCB40;
    return;
L_08ACCB40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCB48;
    }
L_08ACCB48:
    ctx.set_gpr(31, 0x08ACCB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB50u) goto L_08ACCB50;
    return;
L_08ACCB50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCB60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCB60u) goto L_08ACCB60;
    return;
L_08ACCB60:
    ctx.set_gpr(31, 0x08ACCB68u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB68u) goto L_08ACCB68;
    return;
L_08ACCB68:
    ctx.set_gpr(31, 0x08ACCB70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB70u) goto L_08ACCB70;
    return;
L_08ACCB70:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCB7Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCB7Cu) goto L_08ACCB7C;
    return;
L_08ACCB7C:
    ctx.set_gpr(31, 0x08ACCB84u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACCB84u) goto L_08ACCB84;
    return;
L_08ACCB84:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCBB0;
    }
L_08ACCBB0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACCBC4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACCBC4u) goto L_08ACCBC4;
    return;
L_08ACCBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCBCC;
    }
L_08ACCBCC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACCC08;
      }
      goto L_08ACCBE0;
    }
L_08ACCBE0:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    goto L_08ACCC08;
L_08ACCC08:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACCE90;
      }
      goto L_08ACCC20;
    }
L_08ACCC20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACCE5C;
      }
      goto L_08ACCC2C;
    }
L_08ACCC2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACCD3C;
      }
      goto L_08ACCC38;
    }
L_08ACCC38:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACCCA0;
      }
      goto L_08ACCC44;
    }
L_08ACCC44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCC54;
      }
      goto L_08ACCC4C;
    }
L_08ACCC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCC54;
    }
L_08ACCC54:
    ctx.set_gpr(31, 0x08ACCC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC5Cu) goto L_08ACCC5C;
    return;
L_08ACCC5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCC68u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC68u) goto L_08ACCC68;
    return;
L_08ACCC68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACCC88;
      }
      goto L_08ACCC74;
    }
L_08ACCC74:
    ctx.set_gpr(31, 0x08ACCC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC7Cu) goto L_08ACCC7C;
    return;
L_08ACCC7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCC88u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACCC88u) goto L_08ACCC88;
    return;
L_08ACCC88:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCCA0;
    }
L_08ACCCA0:
    ctx.set_gpr(31, 0x08ACCCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCA8u) goto L_08ACCCA8;
    return;
L_08ACCCA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCCB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCB4u) goto L_08ACCCB4;
    return;
L_08ACCCB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACCD28;
    }
    goto L_08ACCCC0;
L_08ACCCC0:
    ctx.set_gpr(31, 0x08ACCCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCC8u) goto L_08ACCCC8;
    return;
L_08ACCCC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCCD4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCD4u) goto L_08ACCCD4;
    return;
L_08ACCCD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCCDC;
    }
L_08ACCCDC:
    ctx.set_gpr(31, 0x08ACCCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCE4u) goto L_08ACCCE4;
    return;
L_08ACCCE4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCCF4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCCF4u) goto L_08ACCCF4;
    return;
L_08ACCCF4:
    ctx.set_gpr(31, 0x08ACCCFCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACCCFCu) goto L_08ACCCFC;
    return;
L_08ACCCFC:
    ctx.set_gpr(31, 0x08ACCD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD04u) goto L_08ACCD04;
    return;
L_08ACCD04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCD10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCD10u) goto L_08ACCD10;
    return;
L_08ACCD10:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCD28;
    }
L_08ACCD28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCD3C;
    }
L_08ACCD3C:
    ctx.set_gpr(31, 0x08ACCD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD44u) goto L_08ACCD44;
    return;
L_08ACCD44:
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
    ctx.set_gpr(31, 0x08ACCD7Cu);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD7Cu) goto L_08ACCD7C;
    return;
L_08ACCD7C:
    ctx.set_gpr(31, 0x08ACCD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCD84u) goto L_08ACCD84;
    return;
L_08ACCD84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCD94u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCD94u) goto L_08ACCD94;
    return;
L_08ACCD94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCDA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCDA0u) goto L_08ACCDA0;
    return;
L_08ACCDA0:
    ctx.set_gpr(31, 0x08ACCDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDA8u) goto L_08ACCDA8;
    return;
L_08ACCDA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCDB8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCDB8u) goto L_08ACCDB8;
    return;
L_08ACCDB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCDC4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDC4u) goto L_08ACCDC4;
    return;
L_08ACCDC4:
    ctx.set_gpr(31, 0x08ACCDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDCCu) goto L_08ACCDCC;
    return;
L_08ACCDCC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCDDCu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACCDDCu) goto L_08ACCDDC;
    return;
L_08ACCDDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6024));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACCDFCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACCDFCu) goto L_08ACCDFC;
    return;
L_08ACCDFC:
    ctx.set_gpr(31, 0x08ACCE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE04u) goto L_08ACCE04;
    return;
L_08ACCE04:
    ctx.set_gpr(31, 0x08ACCE0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE0Cu) goto L_08ACCE0C;
    return;
L_08ACCE0C:
    ctx.set_gpr(31, 0x08ACCE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE14u) goto L_08ACCE14;
    return;
L_08ACCE14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCE20u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE20u) goto L_08ACCE20;
    return;
L_08ACCE20:
    ctx.set_gpr(31, 0x08ACCE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE28u) goto L_08ACCE28;
    return;
L_08ACCE28:
    ctx.set_gpr(31, 0x08ACCE30u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACCE30u) goto L_08ACCE30;
    return;
L_08ACCE30:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACCE48u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE48u) goto L_08ACCE48;
    return;
L_08ACCE48:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCE54u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE54u) goto L_08ACCE54;
    return;
L_08ACCE54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCE5C;
    }
L_08ACCE5C:
    ctx.set_gpr(31, 0x08ACCE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE64u) goto L_08ACCE64;
    return;
L_08ACCE64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCE70u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE70u) goto L_08ACCE70;
    return;
L_08ACCE70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCE78;
    }
L_08ACCE78:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCE90;
    }
L_08ACCE90:
    ctx.set_gpr(31, 0x08ACCE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACCE98u) goto L_08ACCE98;
    return;
L_08ACCE98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACCEA4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEA4u) goto L_08ACCEA4;
    return;
L_08ACCEA4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACCEB8;
    }
    goto L_08ACCEB0;
L_08ACCEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCEB8;
    }
L_08ACCEB8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACCEE0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEE0u) goto L_08ACCEE0;
    return;
L_08ACCEE0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCEE8;
    }
L_08ACCEE8:
    ctx.set_gpr(31, 0x08ACCEF0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1072u, 0x08AC7628u>(ctx, &aot_mem) && ctx.pc == 0x08ACCEF0u) goto L_08ACCEF0;
    return;
L_08ACCEF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCEF8;
    }
L_08ACCEF8:
    ctx.set_gpr(31, 0x08ACCF00u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1091u, 0x08AC77C0u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF00u) goto L_08ACCF00;
    return;
L_08ACCF00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCF08;
    }
L_08ACCF08:
    ctx.set_gpr(31, 0x08ACCF10u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF10u) goto L_08ACCF10;
    return;
L_08ACCF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCF18;
    }
L_08ACCF18:
    ctx.set_gpr(31, 0x08ACCF20u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF20u) goto L_08ACCF20;
    return;
L_08ACCF20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACCF30;
      }
      goto L_08ACCF28;
    }
L_08ACCF28:
    ctx.set_gpr(31, 0x08ACCF30u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1096u, 0x08AC7828u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF30u) goto L_08ACCF30;
    return;
L_08ACCF30:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, ctx.gpr[23] + 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(4704));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCF6C:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08ACCF74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ACCF94u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 48u, 0x08AC83D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACCF94u) goto L_08ACCF94;
    return;
L_08ACCF94:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACCFB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08ACCFE0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACCFE0u) goto L_08ACCFE0;
    return;
L_08ACCFE0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ACCFE4;
L_08ACCFE4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACCFF0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ACD204;
L_08ACCFF0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(5, 2231u << 16u);
        goto L_08ACD014;
    }
    goto L_08ACCFF8;
L_08ACCFF8:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACD00Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6052));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD00Cu) goto L_08ACD00C;
    return;
L_08ACD00C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACD028;
      }
      goto L_08ACD014;
    }
L_08ACD014:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACD024u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6064));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD024u) goto L_08ACD024;
    return;
L_08ACD024:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08ACD028;
L_08ACD028:
    ctx.set_gpr(31, 0x08ACD030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD030u) goto L_08ACD030;
    return;
L_08ACD030:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08ACD040u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ACD040u) goto L_08ACD040;
    return;
L_08ACD040:
    ctx.set_gpr(31, 0x08ACD048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD048u) goto L_08ACD048;
    return;
L_08ACD048:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD058u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD058u) goto L_08ACD058;
    return;
L_08ACD058:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD074u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACD074u) goto L_08ACD074;
    return;
L_08ACD074:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ACCFE4;
      }
      goto L_08ACD084;
    }
L_08ACD084:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD09C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x08ACD0C8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD0C8u) goto L_08ACD0C8;
    return;
L_08ACD0C8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ACD0CC;
L_08ACD0CC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACD0D8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ACD184;
L_08ACD0D8:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, 2231u << 16u);
        goto L_08ACD0FC;
    }
    goto L_08ACD0E0;
L_08ACD0E0:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACD0F4u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6064));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD0F4u) goto L_08ACD0F4;
    return;
L_08ACD0F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACD110;
      }
      goto L_08ACD0FC;
    }
L_08ACD0FC:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACD10Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6052));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD10Cu) goto L_08ACD10C;
    return;
L_08ACD10C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08ACD110;
L_08ACD110:
    ctx.set_gpr(31, 0x08ACD118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD118u) goto L_08ACD118;
    return;
L_08ACD118:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08ACD128u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ACD128u) goto L_08ACD128;
    return;
L_08ACD128:
    ctx.set_gpr(31, 0x08ACD130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD130u) goto L_08ACD130;
    return;
L_08ACD130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD140u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD140u) goto L_08ACD140;
    return;
L_08ACD140:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD15Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACD15Cu) goto L_08ACD15C;
    return;
L_08ACD15C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ACD0CC;
      }
      goto L_08ACD16C;
    }
L_08ACD16C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACD1A0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08ACD1F0;
L_08ACD1A0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08ACD1D8;
      }
      goto L_08ACD1A8;
    }
L_08ACD1A8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08ACD1AC;
L_08ACD1AC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACD1B8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 50u, 0x08AC83E8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD1B8u) goto L_08ACD1B8;
    return;
L_08ACD1B8:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ACD1D0;
    }
    goto L_08ACD1C8;
L_08ACD1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACD1DC;
      }
      goto L_08ACD1D0;
    }
L_08ACD1D0:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
        goto L_08ACD1AC;
    }
    goto L_08ACD1D8;
L_08ACD1D8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ACD1DC;
L_08ACD1DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD1F0:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6092));
    (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem); return;
L_08ACD204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08ACD220u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08ACD1F0;
L_08ACD220:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ACD238u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD238u) goto L_08ACD238;
    return;
L_08ACD238:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACD244u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08B0E06Cu;
    return;
L_08ACD244:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ACD2A0;
    }
    goto L_08ACD24C;
L_08ACD24C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08ACD250;
L_08ACD250:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08ACD25Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 50u, 0x08AC83E8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD25Cu) goto L_08ACD25C;
    return;
L_08ACD25C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08ACD294;
    }
    goto L_08ACD26C;
L_08ACD26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ACD2A0;
    }
    goto L_08ACD278;
L_08ACD278:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(11));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08ACD28C;
    }
    goto L_08ACD288;
L_08ACD288:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08ACD28C;
L_08ACD28C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ACD2A4;
      }
      goto L_08ACD294;
    }
L_08ACD294:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
        goto L_08ACD250;
    }
    goto L_08ACD29C;
L_08ACD29C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ACD2A0;
L_08ACD2A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACD2A4;
L_08ACD2A4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD2B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACD360;
      }
      goto L_08ACD2E0;
    }
L_08ACD2E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_08ACD304;
    }
    goto L_08ACD2EC;
L_08ACD2EC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
        goto L_08ACD2FC;
    }
    goto L_08ACD2F4;
L_08ACD2F4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_08ACD39C;
      }
      goto L_08ACD2FC;
    }
L_08ACD2FC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACD398;
      }
      goto L_08ACD304;
    }
L_08ACD304:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ACD39C;
    }
    goto L_08ACD30C;
L_08ACD30C:
    ctx.set_gpr(31, 0x08ACD314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD314u) goto L_08ACD314;
    return;
L_08ACD314:
    ctx.set_gpr(31, 0x08ACD31Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACD31Cu) goto L_08ACD31C;
    return;
L_08ACD31C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08ACD328u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD328u) goto L_08ACD328;
    return;
L_08ACD328:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
        goto L_08ACD340;
    }
    goto L_08ACD330;
L_08ACD330:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD33Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08ACD33Cu) goto L_08ACD33C;
    return;
L_08ACD33C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ACD340;
L_08ACD340:
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACD350u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08ACD350u) goto L_08ACD350;
    return;
L_08ACD350:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACD398;
      }
      goto L_08ACD360;
    }
L_08ACD360:
    ctx.set_gpr(31, 0x08ACD368u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD368u) goto L_08ACD368;
    return;
L_08ACD368:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
        goto L_08ACD378;
    }
    goto L_08ACD370;
L_08ACD370:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_08ACD39C;
      }
      goto L_08ACD378;
    }
L_08ACD378:
    if (ctx.gpr[4] == 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
        goto L_08ACD390;
    }
    goto L_08ACD380;
L_08ACD380:
    ctx.set_gpr(31, 0x08ACD388u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD388u) goto L_08ACD388;
    return;
L_08ACD388:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_08ACD390;
L_08ACD390:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ACD39C;
      }
      goto L_08ACD398;
    }
L_08ACD398:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    goto L_08ACD39C;
L_08ACD39C:
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
L_08ACD3B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACD44C;
      }
      goto L_08ACD3E0;
    }
L_08ACD3E0:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08ACD3F0;
    }
    goto L_08ACD3E8;
L_08ACD3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_08ACD4A0;
      }
      goto L_08ACD3F0;
    }
L_08ACD3F0:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08ACD4A0;
    }
    goto L_08ACD3F8;
L_08ACD3F8:
    ctx.set_gpr(31, 0x08ACD400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACD400u) goto L_08ACD400;
    return;
L_08ACD400:
    ctx.set_gpr(31, 0x08ACD408u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACD408u) goto L_08ACD408;
    return;
L_08ACD408:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08ACD414u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD414u) goto L_08ACD414;
    return;
L_08ACD414:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
        goto L_08ACD42C;
    }
    goto L_08ACD41C;
L_08ACD41C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD428u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08ACD428u) goto L_08ACD428;
    return;
L_08ACD428:
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08ACD42C;
L_08ACD42C:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACD43Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08ACD43Cu) goto L_08ACD43C;
    return;
L_08ACD43C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACD49C;
      }
      goto L_08ACD44C;
    }
L_08ACD44C:
    ctx.set_gpr(31, 0x08ACD454u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD454u) goto L_08ACD454;
    return;
L_08ACD454:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_08ACD464;
    }
    goto L_08ACD45C;
L_08ACD45C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_08ACD4A0;
      }
      goto L_08ACD464;
    }
L_08ACD464:
    ctx.set_gpr(31, 0x08ACD46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 460u, 0x08AA97E8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD46Cu) goto L_08ACD46C;
    return;
L_08ACD46C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(17, ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08ACD484;
      }
      goto L_08ACD478;
    }
L_08ACD478:
    ctx.set_gpr(31, 0x08ACD480u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD480u) goto L_08ACD480;
    return;
L_08ACD480:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08ACD484;
L_08ACD484:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_08ACD494;
      }
      goto L_08ACD48C;
    }
L_08ACD48C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACD4A0;
      }
      goto L_08ACD494;
    }
L_08ACD494:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ACD4A0;
      }
      goto L_08ACD49C;
    }
L_08ACD49C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    goto L_08ACD4A0;
L_08ACD4A0:
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
L_08ACD4B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ACD4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD4C8u) goto L_08ACD4C8;
    return;
L_08ACD4C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD4D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACD4D4u) goto L_08ACD4D4;
    return;
L_08ACD4D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ACD510;
    }
    goto L_08ACD4E0;
L_08ACD4E0:
    ctx.set_gpr(31, 0x08ACD4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD4E8u) goto L_08ACD4E8;
    return;
L_08ACD4E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD4F4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD4F4u) goto L_08ACD4F4;
    return;
L_08ACD4F4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACD510;
L_08ACD510:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD51C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08ACD530u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.pc = 0x08B0DFFCu;
    return;
L_08ACD530:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(257));
        goto L_08ACD540;
    }
    goto L_08ACD538;
L_08ACD538:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ACD564;
      }
      goto L_08ACD540;
    }
L_08ACD540:
    ctx.set_gpr(31, 0x08ACD548u);
    // nop
    ctx.pc = 0x08B0DFFCu;
    return;
L_08ACD548:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ACD560;
      }
      goto L_08ACD554;
    }
L_08ACD554:
    ctx.set_gpr(31, 0x08ACD55Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08ACD55C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ACD560;
L_08ACD560:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACD564;
L_08ACD564:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ACD580u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(257));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08ACD580:
    ctx.set_gpr(31, 0x08ACD588u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(256));
    ctx.pc = 0x08B0E08Cu;
    return;
L_08ACD588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACD5CC;
      }
      goto L_08ACD5B8;
    }
L_08ACD5B8:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08ACD5CC;
L_08ACD5CC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ACD948;
    }
    goto L_08ACD5E4;
L_08ACD5E4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5736));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD600:
    ctx.set_gpr(31, 0x08ACD608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD608u) goto L_08ACD608;
    return;
L_08ACD608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD614u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACD614u) goto L_08ACD614;
    return;
L_08ACD614:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACD638;
      }
      goto L_08ACD620;
    }
L_08ACD620:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD638;
    }
L_08ACD638:
    ctx.set_gpr(31, 0x08ACD640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD640u) goto L_08ACD640;
    return;
L_08ACD640:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD64Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACD64Cu) goto L_08ACD64C;
    return;
L_08ACD64C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD664;
    }
L_08ACD664:
    ctx.set_gpr(31, 0x08ACD66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD66Cu) goto L_08ACD66C;
    return;
L_08ACD66C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD678u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD678u) goto L_08ACD678;
    return;
L_08ACD678:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD680;
    }
L_08ACD680:
    ctx.set_gpr(31, 0x08ACD688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD688u) goto L_08ACD688;
    return;
L_08ACD688:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD698u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD698u) goto L_08ACD698;
    return;
L_08ACD698:
    ctx.set_gpr(31, 0x08ACD6A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACD6A0u) goto L_08ACD6A0;
    return;
L_08ACD6A0:
    ctx.set_gpr(31, 0x08ACD6A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD6A8u) goto L_08ACD6A8;
    return;
L_08ACD6A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD6B4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD6B4u) goto L_08ACD6B4;
    return;
L_08ACD6B4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD6CC;
    }
L_08ACD6CC:
    ctx.set_gpr(31, 0x08ACD6D4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACD6D4u) goto L_08ACD6D4;
    return;
L_08ACD6D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACD6ECu);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD6ECu) goto L_08ACD6EC;
    return;
L_08ACD6EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD720u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACD720u) goto L_08ACD720;
    return;
L_08ACD720:
    ctx.set_gpr(31, 0x08ACD728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD728u) goto L_08ACD728;
    return;
L_08ACD728:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD738u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD738u) goto L_08ACD738;
    return;
L_08ACD738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD744u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD744u) goto L_08ACD744;
    return;
L_08ACD744:
    ctx.set_gpr(31, 0x08ACD74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD74Cu) goto L_08ACD74C;
    return;
L_08ACD74C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD75Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD75Cu) goto L_08ACD75C;
    return;
L_08ACD75C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD768u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD768u) goto L_08ACD768;
    return;
L_08ACD768:
    ctx.set_gpr(31, 0x08ACD770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD770u) goto L_08ACD770;
    return;
L_08ACD770:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD780u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACD780u) goto L_08ACD780;
    return;
L_08ACD780:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACD79Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACD79Cu) goto L_08ACD79C;
    return;
L_08ACD79C:
    ctx.set_gpr(31, 0x08ACD7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7A4u) goto L_08ACD7A4;
    return;
L_08ACD7A4:
    ctx.set_gpr(31, 0x08ACD7ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD7ACu) goto L_08ACD7AC;
    return;
L_08ACD7AC:
    ctx.set_gpr(31, 0x08ACD7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7B4u) goto L_08ACD7B4;
    return;
L_08ACD7B4:
    ctx.set_gpr(31, 0x08ACD7BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7BCu) goto L_08ACD7BC;
    return;
L_08ACD7BC:
    ctx.set_gpr(31, 0x08ACD7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7C4u) goto L_08ACD7C4;
    return;
L_08ACD7C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD7D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7D0u) goto L_08ACD7D0;
    return;
L_08ACD7D0:
    ctx.set_gpr(31, 0x08ACD7D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7D8u) goto L_08ACD7D8;
    return;
L_08ACD7D8:
    ctx.set_gpr(31, 0x08ACD7E0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD7E0u) goto L_08ACD7E0;
    return;
L_08ACD7E0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACD7F8u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD7F8u) goto L_08ACD7F8;
    return;
L_08ACD7F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD804u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACD804u) goto L_08ACD804;
    return;
L_08ACD804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD80C;
    }
L_08ACD80C:
    ctx.set_gpr(31, 0x08ACD814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD814u) goto L_08ACD814;
    return;
L_08ACD814:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD820u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD820u) goto L_08ACD820;
    return;
L_08ACD820:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD828;
    }
L_08ACD828:
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
          goto L_08ACD944;
      }
      goto L_08ACD85C;
    }
L_08ACD85C:
    ctx.set_gpr(31, 0x08ACD864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD864u) goto L_08ACD864;
    return;
L_08ACD864:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD870u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACD870u) goto L_08ACD870;
    return;
L_08ACD870:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACD8D4;
    }
    goto L_08ACD87C;
L_08ACD87C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACD890;
    }
    goto L_08ACD888;
L_08ACD888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD890;
    }
L_08ACD890:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACD8A0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8A0u) goto L_08ACD8A0;
    return;
L_08ACD8A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD8ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8ACu) goto L_08ACD8AC;
    return;
L_08ACD8AC:
    ctx.set_gpr(31, 0x08ACD8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8B4u) goto L_08ACD8B4;
    return;
L_08ACD8B4:
    ctx.set_gpr(31, 0x08ACD8BCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD8BCu) goto L_08ACD8BC;
    return;
L_08ACD8BC:
    ctx.set_gpr(31, 0x08ACD8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8C4u) goto L_08ACD8C4;
    return;
L_08ACD8C4:
    ctx.set_gpr(31, 0x08ACD8CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8CCu) goto L_08ACD8CC;
    return;
L_08ACD8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD8D4;
    }
L_08ACD8D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACD8E4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8E4u) goto L_08ACD8E4;
    return;
L_08ACD8E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD8F0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8F0u) goto L_08ACD8F0;
    return;
L_08ACD8F0:
    ctx.set_gpr(31, 0x08ACD8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD8F8u) goto L_08ACD8F8;
    return;
L_08ACD8F8:
    ctx.set_gpr(31, 0x08ACD900u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACD900u) goto L_08ACD900;
    return;
L_08ACD900:
    ctx.set_gpr(31, 0x08ACD908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACD908u) goto L_08ACD908;
    return;
L_08ACD908:
    ctx.set_gpr(31, 0x08ACD910u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACD910u) goto L_08ACD910;
    return;
L_08ACD910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD918;
    }
L_08ACD918:
    ctx.set_gpr(31, 0x08ACD920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD920u) goto L_08ACD920;
    return;
L_08ACD920:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD92Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACD92Cu) goto L_08ACD92C;
    return;
L_08ACD92C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACD944;
      }
      goto L_08ACD934;
    }
L_08ACD934:
    ctx.set_gpr(31, 0x08ACD93Cu);
    // nop
    goto L_08ACE570;
L_08ACD93C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACD948;
      }
      goto L_08ACD944;
    }
L_08ACD944:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ACD948;
L_08ACD948:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD95C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACD99C;
      }
      goto L_08ACD988;
    }
L_08ACD988:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08ACD99C;
L_08ACD99C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ACDD3C;
    }
    goto L_08ACD9B4;
L_08ACD9B4:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5712));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACD9D0:
    ctx.set_gpr(31, 0x08ACD9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACD9D8u) goto L_08ACD9D8;
    return;
L_08ACD9D8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACD9E4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACD9E4u) goto L_08ACD9E4;
    return;
L_08ACD9E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACDA08;
      }
      goto L_08ACD9F0;
    }
L_08ACD9F0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDA08;
    }
L_08ACDA08:
    ctx.set_gpr(31, 0x08ACDA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA10u) goto L_08ACDA10;
    return;
L_08ACDA10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDA1Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA1Cu) goto L_08ACDA1C;
    return;
L_08ACDA1C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDA34;
    }
L_08ACDA34:
    ctx.set_gpr(31, 0x08ACDA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA3Cu) goto L_08ACDA3C;
    return;
L_08ACDA3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDA48u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA48u) goto L_08ACDA48;
    return;
L_08ACDA48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDA50;
    }
L_08ACDA50:
    ctx.set_gpr(31, 0x08ACDA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA58u) goto L_08ACDA58;
    return;
L_08ACDA58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDA68u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDA68u) goto L_08ACDA68;
    return;
L_08ACDA68:
    ctx.set_gpr(31, 0x08ACDA70u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA70u) goto L_08ACDA70;
    return;
L_08ACDA70:
    ctx.set_gpr(31, 0x08ACDA78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDA78u) goto L_08ACDA78;
    return;
L_08ACDA78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDA84u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDA84u) goto L_08ACDA84;
    return;
L_08ACDA84:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDA9C;
    }
L_08ACDA9C:
    ctx.set_gpr(31, 0x08ACDAA4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ACDD58;
L_08ACDAA4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACDABCu);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDABCu) goto L_08ACDABC;
    return;
L_08ACDABC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08ACDAF0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACDAF0u) goto L_08ACDAF0;
    return;
L_08ACDAF0:
    ctx.set_gpr(31, 0x08ACDAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDAF8u) goto L_08ACDAF8;
    return;
L_08ACDAF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDB08u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDB08u) goto L_08ACDB08;
    return;
L_08ACDB08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDB14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB14u) goto L_08ACDB14;
    return;
L_08ACDB14:
    ctx.set_gpr(31, 0x08ACDB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB1Cu) goto L_08ACDB1C;
    return;
L_08ACDB1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDB2Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDB2Cu) goto L_08ACDB2C;
    return;
L_08ACDB2C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDB38u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDB38u) goto L_08ACDB38;
    return;
L_08ACDB38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08ACDB90;
      }
      goto L_08ACDB44;
    }
L_08ACDB44:
    ctx.set_gpr(18, ctx.gpr[17] + 0u);
    goto L_08ACDB48;
L_08ACDB48:
    ctx.set_gpr(31, 0x08ACDB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB50u) goto L_08ACDB50;
    return;
L_08ACDB50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDB60u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDB60u) goto L_08ACDB60;
    return;
L_08ACDB60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDB7Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB7Cu) goto L_08ACDB7C;
    return;
L_08ACDB7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACDB48;
      }
      goto L_08ACDB90;
    }
L_08ACDB90:
    ctx.set_gpr(31, 0x08ACDB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDB98u) goto L_08ACDB98;
    return;
L_08ACDB98:
    ctx.set_gpr(31, 0x08ACDBA0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACDBA0u) goto L_08ACDBA0;
    return;
L_08ACDBA0:
    ctx.set_gpr(31, 0x08ACDBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBA8u) goto L_08ACDBA8;
    return;
L_08ACDBA8:
    ctx.set_gpr(31, 0x08ACDBB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBB0u) goto L_08ACDBB0;
    return;
L_08ACDBB0:
    ctx.set_gpr(31, 0x08ACDBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBB8u) goto L_08ACDBB8;
    return;
L_08ACDBB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDBC4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBC4u) goto L_08ACDBC4;
    return;
L_08ACDBC4:
    ctx.set_gpr(31, 0x08ACDBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBCCu) goto L_08ACDBCC;
    return;
L_08ACDBCC:
    ctx.set_gpr(31, 0x08ACDBD4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACDBD4u) goto L_08ACDBD4;
    return;
L_08ACDBD4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACDBECu);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBECu) goto L_08ACDBEC;
    return;
L_08ACDBEC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDBF8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACDBF8u) goto L_08ACDBF8;
    return;
L_08ACDBF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDC00;
    }
L_08ACDC00:
    ctx.set_gpr(31, 0x08ACDC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC08u) goto L_08ACDC08;
    return;
L_08ACDC08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDC14u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC14u) goto L_08ACDC14;
    return;
L_08ACDC14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDC1C;
    }
L_08ACDC1C:
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
          goto L_08ACDD38;
      }
      goto L_08ACDC50;
    }
L_08ACDC50:
    ctx.set_gpr(31, 0x08ACDC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC58u) goto L_08ACDC58;
    return;
L_08ACDC58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDC64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC64u) goto L_08ACDC64;
    return;
L_08ACDC64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACDCC8;
    }
    goto L_08ACDC70;
L_08ACDC70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACDC84;
    }
    goto L_08ACDC7C;
L_08ACDC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDC84;
    }
L_08ACDC84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACDC94u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDC94u) goto L_08ACDC94;
    return;
L_08ACDC94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDCA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCA0u) goto L_08ACDCA0;
    return;
L_08ACDCA0:
    ctx.set_gpr(31, 0x08ACDCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCA8u) goto L_08ACDCA8;
    return;
L_08ACDCA8:
    ctx.set_gpr(31, 0x08ACDCB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACDCB0u) goto L_08ACDCB0;
    return;
L_08ACDCB0:
    ctx.set_gpr(31, 0x08ACDCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCB8u) goto L_08ACDCB8;
    return;
L_08ACDCB8:
    ctx.set_gpr(31, 0x08ACDCC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCC0u) goto L_08ACDCC0;
    return;
L_08ACDCC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDCC8;
    }
L_08ACDCC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACDCD8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCD8u) goto L_08ACDCD8;
    return;
L_08ACDCD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDCE4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCE4u) goto L_08ACDCE4;
    return;
L_08ACDCE4:
    ctx.set_gpr(31, 0x08ACDCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCECu) goto L_08ACDCEC;
    return;
L_08ACDCEC:
    ctx.set_gpr(31, 0x08ACDCF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACDCF4u) goto L_08ACDCF4;
    return;
L_08ACDCF4:
    ctx.set_gpr(31, 0x08ACDCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACDCFCu) goto L_08ACDCFC;
    return;
L_08ACDCFC:
    ctx.set_gpr(31, 0x08ACDD04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD04u) goto L_08ACDD04;
    return;
L_08ACDD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDD0C;
    }
L_08ACDD0C:
    ctx.set_gpr(31, 0x08ACDD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD14u) goto L_08ACDD14;
    return;
L_08ACDD14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDD20u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD20u) goto L_08ACDD20;
    return;
L_08ACDD20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACDD38;
      }
      goto L_08ACDD28;
    }
L_08ACDD28:
    ctx.set_gpr(31, 0x08ACDD30u);
    // nop
    goto L_08ACE570;
L_08ACDD30:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACDD3C;
      }
      goto L_08ACDD38;
    }
L_08ACDD38:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ACDD3C;
L_08ACDD3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDD58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08ACDDB4;
      }
      goto L_08ACDD84;
    }
L_08ACDD84:
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    goto L_08ACDD88;
L_08ACDD88:
    ctx.set_gpr(31, 0x08ACDD90u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 165u, 0x0883CEE0u>(ctx, &aot_mem) && ctx.pc == 0x08ACDD90u) goto L_08ACDD90;
    return;
L_08ACDD90:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08ACDDA4;
    }
    goto L_08ACDD9C;
L_08ACDD9C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08ACDDA4;
L_08ACDDA4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACDD88;
      }
      goto L_08ACDDB4;
    }
L_08ACDDB4:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_08ACDDD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ACDE1C;
      }
      goto L_08ACDE08;
    }
L_08ACDE08:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08ACDE1C;
L_08ACDE1C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ACE160;
    }
    goto L_08ACDE34;
L_08ACDE34:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5688));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACDE50:
    ctx.set_gpr(31, 0x08ACDE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE58u) goto L_08ACDE58;
    return;
L_08ACDE58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDE64u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 70u, 0x08AFC508u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE64u) goto L_08ACDE64;
    return;
L_08ACDE64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACDE88;
      }
      goto L_08ACDE70;
    }
L_08ACDE70:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACDE88;
    }
L_08ACDE88:
    ctx.set_gpr(31, 0x08ACDE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE90u) goto L_08ACDE90;
    return;
L_08ACDE90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDE9Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACDE9Cu) goto L_08ACDE9C;
    return;
L_08ACDE9C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACDEB4;
    }
L_08ACDEB4:
    ctx.set_gpr(31, 0x08ACDEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEBCu) goto L_08ACDEBC;
    return;
L_08ACDEBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDEC8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEC8u) goto L_08ACDEC8;
    return;
L_08ACDEC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACDED0;
    }
L_08ACDED0:
    ctx.set_gpr(31, 0x08ACDED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDED8u) goto L_08ACDED8;
    return;
L_08ACDED8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDEE8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDEE8u) goto L_08ACDEE8;
    return;
L_08ACDEE8:
    ctx.set_gpr(31, 0x08ACDEF0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEF0u) goto L_08ACDEF0;
    return;
L_08ACDEF0:
    ctx.set_gpr(31, 0x08ACDEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDEF8u) goto L_08ACDEF8;
    return;
L_08ACDEF8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDF04u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDF04u) goto L_08ACDF04;
    return;
L_08ACDF04:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACDF1C;
    }
L_08ACDF1C:
    ctx.set_gpr(31, 0x08ACDF24u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08ACDD58;
L_08ACDF24:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACDF3Cu);
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF3Cu) goto L_08ACDF3C;
    return;
L_08ACDF3C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08ACDF70u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 749u, 0x08AFBA18u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF70u) goto L_08ACDF70;
    return;
L_08ACDF70:
    ctx.set_gpr(31, 0x08ACDF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF78u) goto L_08ACDF78;
    return;
L_08ACDF78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDF88u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDF88u) goto L_08ACDF88;
    return;
L_08ACDF88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDF94u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF94u) goto L_08ACDF94;
    return;
L_08ACDF94:
    ctx.set_gpr(31, 0x08ACDF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDF9Cu) goto L_08ACDF9C;
    return;
L_08ACDF9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDFACu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDFACu) goto L_08ACDFAC;
    return;
L_08ACDFAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACDFB8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 825u, 0x0886697Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDFB8u) goto L_08ACDFB8;
    return;
L_08ACDFB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08ACE010;
      }
      goto L_08ACDFC4;
    }
L_08ACDFC4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    goto L_08ACDFC8;
L_08ACDFC8:
    ctx.set_gpr(31, 0x08ACDFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACDFD0u) goto L_08ACDFD0;
    return;
L_08ACDFD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDFE0u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACDFE0u) goto L_08ACDFE0;
    return;
L_08ACDFE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACDFFCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACDFFCu) goto L_08ACDFFC;
    return;
L_08ACDFFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACDFC8;
      }
      goto L_08ACE010;
    }
L_08ACE010:
    ctx.set_gpr(31, 0x08ACE018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE018u) goto L_08ACE018;
    return;
L_08ACE018:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ACE028u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC024u>(ctx, &aot_mem) && ctx.pc == 0x08ACE028u) goto L_08ACE028;
    return;
L_08ACE028:
    ctx.set_gpr(31, 0x08ACE030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE030u) goto L_08ACE030;
    return;
L_08ACE030:
    ctx.set_gpr(31, 0x08ACE038u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE038u) goto L_08ACE038;
    return;
L_08ACE038:
    ctx.set_gpr(31, 0x08ACE040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE040u) goto L_08ACE040;
    return;
L_08ACE040:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE04Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACE04Cu) goto L_08ACE04C;
    return;
L_08ACE04C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE064;
    }
L_08ACE064:
    ctx.set_gpr(31, 0x08ACE06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE06Cu) goto L_08ACE06C;
    return;
L_08ACE06C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE078u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE078u) goto L_08ACE078;
    return;
L_08ACE078:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE080;
    }
L_08ACE080:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE098;
    }
L_08ACE098:
    ctx.set_gpr(31, 0x08ACE0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE0A0u) goto L_08ACE0A0;
    return;
L_08ACE0A0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE0ACu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACE0ACu) goto L_08ACE0AC;
    return;
L_08ACE0AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACE0FC;
    }
    goto L_08ACE0B8;
L_08ACE0B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, 2247u << 16u);
        goto L_08ACE0CC;
    }
    goto L_08ACE0C4;
L_08ACE0C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE0CC;
    }
L_08ACE0CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACE0E0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE0E0u) goto L_08ACE0E0;
    return;
L_08ACE0E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE0ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACE0ECu) goto L_08ACE0EC;
    return;
L_08ACE0EC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE0FC;
    }
L_08ACE0FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACE110u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE110u) goto L_08ACE110;
    return;
L_08ACE110:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE11Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACE11Cu) goto L_08ACE11C;
    return;
L_08ACE11C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE130;
    }
L_08ACE130:
    ctx.set_gpr(31, 0x08ACE138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE138u) goto L_08ACE138;
    return;
L_08ACE138:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE144u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE144u) goto L_08ACE144;
    return;
L_08ACE144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE15C;
      }
      goto L_08ACE14C;
    }
L_08ACE14C:
    ctx.set_gpr(31, 0x08ACE154u);
    // nop
    goto L_08ACE570;
L_08ACE154:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACE160;
      }
      goto L_08ACE15C;
    }
L_08ACE15C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ACE160;
L_08ACE160:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE180:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE1B0;
      }
      goto L_08ACE19C;
    }
L_08ACE19C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08ACE1B0;
L_08ACE1B0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ACE524;
    }
    goto L_08ACE1CC;
L_08ACE1CC:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5664));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE1E8:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACE1F8u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 590u, 0x08852268u>(ctx, &aot_mem) && ctx.pc == 0x08ACE1F8u) goto L_08ACE1F8;
    return;
L_08ACE1F8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACE208u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 188u, 0x08848C60u>(ctx, &aot_mem) && ctx.pc == 0x08ACE208u) goto L_08ACE208;
    return;
L_08ACE208:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE214u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 124u, 0x08AF0844u>(ctx, &aot_mem) && ctx.pc == 0x08ACE214u) goto L_08ACE214;
    return;
L_08ACE214:
    ctx.set_gpr(31, 0x08ACE21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE21Cu) goto L_08ACE21C;
    return;
L_08ACE21C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE228u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE228u) goto L_08ACE228;
    return;
L_08ACE228:
    ctx.set_gpr(31, 0x08ACE230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE230u) goto L_08ACE230;
    return;
L_08ACE230:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(200));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE260u);
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 748u, 0x08AFBA10u>(ctx, &aot_mem) && ctx.pc == 0x08ACE260u) goto L_08ACE260;
    return;
L_08ACE260:
    ctx.set_gpr(31, 0x08ACE268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE268u) goto L_08ACE268;
    return;
L_08ACE268:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE278u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE278u) goto L_08ACE278;
    return;
L_08ACE278:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE284u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 38u, 0x08A7C2A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE284u) goto L_08ACE284;
    return;
L_08ACE284:
    ctx.set_gpr(31, 0x08ACE28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE28Cu) goto L_08ACE28C;
    return;
L_08ACE28C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE29Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE29Cu) goto L_08ACE29C;
    return;
L_08ACE29C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6104));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE2BCu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACE2BCu) goto L_08ACE2BC;
    return;
L_08ACE2BC:
    ctx.set_gpr(31, 0x08ACE2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE2C4u) goto L_08ACE2C4;
    return;
L_08ACE2C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE2D4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE2D4u) goto L_08ACE2D4;
    return;
L_08ACE2D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6120));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE2F4u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACE2F4u) goto L_08ACE2F4;
    return;
L_08ACE2F4:
    ctx.set_gpr(31, 0x08ACE2FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE2FCu) goto L_08ACE2FC;
    return;
L_08ACE2FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE30Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE30Cu) goto L_08ACE30C;
    return;
L_08ACE30C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6140));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE32Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 635u, 0x08AF2840u>(ctx, &aot_mem) && ctx.pc == 0x08ACE32Cu) goto L_08ACE32C;
    return;
L_08ACE32C:
    ctx.set_gpr(31, 0x08ACE334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE334u) goto L_08ACE334;
    return;
L_08ACE334:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE344u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE344u) goto L_08ACE344;
    return;
L_08ACE344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE350u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 938u, 0x08A93290u>(ctx, &aot_mem) && ctx.pc == 0x08ACE350u) goto L_08ACE350;
    return;
L_08ACE350:
    ctx.set_gpr(31, 0x08ACE358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE358u) goto L_08ACE358;
    return;
L_08ACE358:
    ctx.set_gpr(31, 0x08ACE360u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE360u) goto L_08ACE360;
    return;
L_08ACE360:
    ctx.set_gpr(31, 0x08ACE368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE368u) goto L_08ACE368;
    return;
L_08ACE368:
    ctx.set_gpr(31, 0x08ACE370u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACE370u) goto L_08ACE370;
    return;
L_08ACE370:
    ctx.set_gpr(31, 0x08ACE378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE378u) goto L_08ACE378;
    return;
L_08ACE378:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE384u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(33));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACE384u) goto L_08ACE384;
    return;
L_08ACE384:
    ctx.set_gpr(31, 0x08ACE38Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE38Cu) goto L_08ACE38C;
    return;
L_08ACE38C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE398u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 449u, 0x08B022B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACE398u) goto L_08ACE398;
    return;
L_08ACE398:
    ctx.set_gpr(31, 0x08ACE3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3A0u) goto L_08ACE3A0;
    return;
L_08ACE3A0:
    ctx.set_gpr(31, 0x08ACE3A8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 475u, 0x08B024FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE3A8u) goto L_08ACE3A8;
    return;
L_08ACE3A8:
    ctx.set_gpr(31, 0x08ACE3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3B0u) goto L_08ACE3B0;
    return;
L_08ACE3B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE3BCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 781u, 0x08AFBD40u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3BCu) goto L_08ACE3BC;
    return;
L_08ACE3BC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE3D4;
    }
L_08ACE3D4:
    ctx.set_gpr(31, 0x08ACE3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3DCu) goto L_08ACE3DC;
    return;
L_08ACE3DC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE3E8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE3E8u) goto L_08ACE3E8;
    return;
L_08ACE3E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE3F0;
    }
L_08ACE3F0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE408;
    }
L_08ACE408:
    ctx.set_gpr(31, 0x08ACE410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE410u) goto L_08ACE410;
    return;
L_08ACE410:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE41Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 62u, 0x08AFC464u>(ctx, &aot_mem) && ctx.pc == 0x08ACE41Cu) goto L_08ACE41C;
    return;
L_08ACE41C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACE430;
      }
      goto L_08ACE428;
    }
L_08ACE428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE430;
    }
L_08ACE430:
    ctx.set_gpr(31, 0x08ACE438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE438u) goto L_08ACE438;
    return;
L_08ACE438:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE448u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE448u) goto L_08ACE448;
    return;
L_08ACE448:
    ctx.set_gpr(31, 0x08ACE450u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 826u, 0x08866984u>(ctx, &aot_mem) && ctx.pc == 0x08ACE450u) goto L_08ACE450;
    return;
L_08ACE450:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(31, 0x08ACE470u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE470u) goto L_08ACE470;
    return;
L_08ACE470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE47Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFBE48u>(ctx, &aot_mem) && ctx.pc == 0x08ACE47Cu) goto L_08ACE47C;
    return;
L_08ACE47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE484;
    }
L_08ACE484:
    ctx.set_gpr(31, 0x08ACE48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE48Cu) goto L_08ACE48C;
    return;
L_08ACE48C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE498u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE498u) goto L_08ACE498;
    return;
L_08ACE498:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE4A0;
    }
L_08ACE4A0:
    ctx.set_gpr(31, 0x08ACE4A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE4A8u) goto L_08ACE4A8;
    return;
L_08ACE4A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE4B8u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE4B8u) goto L_08ACE4B8;
    return;
L_08ACE4B8:
    ctx.set_gpr(31, 0x08ACE4C0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACE4C0u) goto L_08ACE4C0;
    return;
L_08ACE4C0:
    ctx.set_gpr(31, 0x08ACE4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE4C8u) goto L_08ACE4C8;
    return;
L_08ACE4C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE4D4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE4D4u) goto L_08ACE4D4;
    return;
L_08ACE4D4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE4EC;
    }
L_08ACE4EC:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE4F4;
    }
L_08ACE4F4:
    ctx.set_gpr(31, 0x08ACE4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE4FCu) goto L_08ACE4FC;
    return;
L_08ACE4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE508u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 64u, 0x08AFC4A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE508u) goto L_08ACE508;
    return;
L_08ACE508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE520;
      }
      goto L_08ACE510;
    }
L_08ACE510:
    ctx.set_gpr(31, 0x08ACE518u);
    // nop
    goto L_08ACE570;
L_08ACE518:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACE524;
      }
      goto L_08ACE520;
    }
L_08ACE520:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ACE524;
L_08ACE524:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE530:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ACE544u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE544u) goto L_08ACE544;
    return;
L_08ACE544:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08ACE558u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE558u) goto L_08ACE558;
    return;
L_08ACE558:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08ACE580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE580u) goto L_08ACE580;
    return;
L_08ACE580:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE58Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 81u, 0x08AFC634u>(ctx, &aot_mem) && ctx.pc == 0x08ACE58Cu) goto L_08ACE58C;
    return;
L_08ACE58C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE5E0;
      }
      goto L_08ACE594;
    }
L_08ACE594:
    ctx.set_gpr(31, 0x08ACE59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE59Cu) goto L_08ACE59C;
    return;
L_08ACE59C:
    ctx.set_gpr(31, 0x08ACE5A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ACE630;
L_08ACE5A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ACE5CC;
      }
      goto L_08ACE5AC;
    }
L_08ACE5AC:
    ctx.set_gpr(31, 0x08ACE5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5B4u) goto L_08ACE5B4;
    return;
L_08ACE5B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACE5C4u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 75u, 0x08AFC55Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE5C4u) goto L_08ACE5C4;
    return;
L_08ACE5C4:
    ctx.set_gpr(31, 0x08ACE5CCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 583u, 0x08AF2474u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5CCu) goto L_08ACE5CC;
    return;
L_08ACE5CC:
    ctx.set_gpr(31, 0x08ACE5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5D4u) goto L_08ACE5D4;
    return;
L_08ACE5D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE5E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 769u, 0x08AFBC7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE5E0u) goto L_08ACE5E0;
    return;
L_08ACE5E0:
    ctx.set_gpr(31, 0x08ACE5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5E8u) goto L_08ACE5E8;
    return;
L_08ACE5E8:
    ctx.set_gpr(31, 0x08ACE5F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 489u, 0x08B025FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE5F0u) goto L_08ACE5F0;
    return;
L_08ACE5F0:
    ctx.set_gpr(31, 0x08ACE5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 192u, 0x08848C90u>(ctx, &aot_mem) && ctx.pc == 0x08ACE5F8u) goto L_08ACE5F8;
    return;
L_08ACE5F8:
    ctx.set_gpr(31, 0x08ACE600u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 442u, 0x08B02224u>(ctx, &aot_mem) && ctx.pc == 0x08ACE600u) goto L_08ACE600;
    return;
L_08ACE600:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(4, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23992)));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-23992)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE630:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 79u, 0x08AFC5F4u>(ctx, &aot_mem); return;
L_08ACE654:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ACE668u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 95u, 0x08AC858Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE668u) goto L_08ACE668;
    return;
L_08ACE668:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7560));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08ACE67Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ACE6F4;
L_08ACE67C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE690:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ACE6DC;
      }
      goto L_08ACE6AC;
    }
L_08ACE6AC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7560));
    ctx.set_gpr(31, 0x08ACE6BCu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    goto L_08ACE708;
L_08ACE6BC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACE6C8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 96u, 0x08AC85B8u>(ctx, &aot_mem) && ctx.pc == 0x08ACE6C8u) goto L_08ACE6C8;
    return;
L_08ACE6C8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ACE6E0;
    }
    goto L_08ACE6D4;
L_08ACE6D4:
    ctx.set_gpr(31, 0x08ACE6DCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE6DCu) goto L_08ACE6DC;
    return;
L_08ACE6DC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08ACE6E0;
L_08ACE6E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE6F4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACE72C;
      }
      goto L_08ACE720;
    }
L_08ACE720:
    ctx.set_gpr(31, 0x08ACE728u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 47u, 0x08AC83CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACE728u) goto L_08ACE728;
    return;
L_08ACE728:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), 0u);
    goto L_08ACE72C;
L_08ACE72C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE73C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ACE75Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 703u, 0x08847F30u>(ctx, &aot_mem) && ctx.pc == 0x08ACE75Cu) goto L_08ACE75C;
    return;
L_08ACE75C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACE768u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ACE6F4;
L_08ACE768:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACE774u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 43u, 0x08AC8378u>(ctx, &aot_mem) && ctx.pc == 0x08ACE774u) goto L_08ACE774;
    return;
L_08ACE774:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08ACE78C;
      }
      goto L_08ACE77C;
    }
L_08ACE77C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ACE78Cu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 48u, 0x08AC83D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACE78Cu) goto L_08ACE78C;
    return;
L_08ACE78C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
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
L_08ACE7B4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE7BC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE7C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_08ACE7E0;
    }
    goto L_08ACE7D8;
L_08ACE7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ACE7E4;
      }
      goto L_08ACE7E0;
    }
L_08ACE7E0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08ACE7E4;
L_08ACE7E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE7EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE7FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE810:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE820:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08ACE8A4;
    }
    goto L_08ACE88C;
L_08ACE88C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ACE8A0;
      }
      goto L_08ACE898;
    }
L_08ACE898:
    ctx.set_gpr(31, 0x08ACE8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08ACE8A0u) goto L_08ACE8A0;
    return;
L_08ACE8A0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ACE8A4;
L_08ACE8A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACE8B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACE8DC;
      }
      goto L_08ACE8D4;
    }
L_08ACE8D4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACEA08;
      }
      goto L_08ACE8DC;
    }
L_08ACE8DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACE8F0;
      }
      goto L_08ACE8E8;
    }
L_08ACE8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08ACEA08;
      }
      goto L_08ACE8F0;
    }
L_08ACE8F0:
    ctx.set_gpr(31, 0x08ACE8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE8F8u) goto L_08ACE8F8;
    return;
L_08ACE8F8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ACE90Cu);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(37));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE90Cu) goto L_08ACE90C;
    return;
L_08ACE90C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEA04;
      }
      goto L_08ACE914;
    }
L_08ACE914:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08ACE91C;
L_08ACE91C:
    ctx.set_gpr(31, 0x08ACE924u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08ACEFE4;
L_08ACE924:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08ACE93Cu);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_08ACEF48;
L_08ACE93C:
    ctx.set_gpr(31, 0x08ACE944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE944u) goto L_08ACE944;
    return;
L_08ACE944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACE970u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACE970u) goto L_08ACE970;
    return;
L_08ACE970:
    ctx.set_gpr(31, 0x08ACE978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE978u) goto L_08ACE978;
    return;
L_08ACE978:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16102u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACE994u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE994u) goto L_08ACE994;
    return;
L_08ACE994:
    ctx.set_gpr(31, 0x08ACE99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACE99Cu) goto L_08ACE99C;
    return;
L_08ACE99C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACE9B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE9B0u) goto L_08ACE9B0;
    return;
L_08ACE9B0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_08ACE91C;
    }
    goto L_08ACE9C0;
L_08ACE9C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACE9CCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACE9CCu) goto L_08ACE9CC;
    return;
L_08ACE9CC:
    ctx.set_gpr(31, 0x08ACE9D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08ACE9D4u) goto L_08ACE9D4;
    return;
L_08ACE9D4:
    ctx.set_gpr(31, 0x08ACE9DCu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 27u, 0x0884819Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACE9DCu) goto L_08ACE9DC;
    return;
L_08ACE9DC:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23984), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACE9F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACE9F4u) goto L_08ACE9F4;
    return;
L_08ACE9F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08ACEA08;
      }
      goto L_08ACEA04;
    }
L_08ACEA04:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08ACEA08;
L_08ACEA08:
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
L_08ACEA20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACEAB0;
      }
      goto L_08ACEA3C;
    }
L_08ACEA3C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ACEAB4;
    }
    goto L_08ACEA48;
L_08ACEA48:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23984)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACEA60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACEA60u) goto L_08ACEA60;
    return;
L_08ACEA60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACEA6Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 125u, 0x0881C984u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA6Cu) goto L_08ACEA6C;
    return;
L_08ACEA6C:
    ctx.set_gpr(2, 20078u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 27432u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23984)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACEA90u);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[1];
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACEA90u) goto L_08ACEA90;
    return;
L_08ACEA90:
    ctx.set_gpr(31, 0x08ACEA98u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 343u, 0x08805400u>(ctx, &aot_mem) && ctx.pc == 0x08ACEA98u) goto L_08ACEA98;
    return;
L_08ACEA98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEAB0;
      }
      goto L_08ACEAA0;
    }
L_08ACEAA0:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACEAB0u);
    ctx.set_gpr(25, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 340u, 0x088053CCu>(ctx, &aot_mem) && ctx.pc == 0x08ACEAB0u) goto L_08ACEAB0;
    return;
L_08ACEAB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACEAB4;
L_08ACEAB4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACEAC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACEC2C;
      }
      goto L_08ACEAE4;
    }
L_08ACEAE4:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ACEC30;
    }
    goto L_08ACEAF0;
L_08ACEAF0:
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEB7C;
      }
      goto L_08ACEAFC;
    }
L_08ACEAFC:
    ctx.set_gpr(31, 0x08ACEB04u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB04u) goto L_08ACEB04;
    return;
L_08ACEB04:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACEB10u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ACED40;
L_08ACEB10:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, 0u + 0u);
        goto L_08ACEB50;
    }
    goto L_08ACEB1C;
L_08ACEB1C:
    ctx.set_gpr(31, 0x08ACEB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 895u, 0x08AAF7C8u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB24u) goto L_08ACEB24;
    return;
L_08ACEB24:
    ctx.set_gpr(31, 0x08ACEB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB2Cu) goto L_08ACEB2C;
    return;
L_08ACEB2C:
    ctx.set_gpr(31, 0x08ACEB34u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 977u, 0x08AAFC50u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB34u) goto L_08ACEB34;
    return;
L_08ACEB34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACEB40u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ACED40;
L_08ACEB40:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEB1C;
      }
      goto L_08ACEB4C;
    }
L_08ACEB4C:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08ACEB50;
L_08ACEB50:
    ctx.set_gpr(31, 0x08ACEB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 518u, 0x08B06174u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB58u) goto L_08ACEB58;
    return;
L_08ACEB58:
    ctx.set_gpr(31, 0x08ACEB60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB60u) goto L_08ACEB60;
    return;
L_08ACEB60:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACEB74u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEB74u) goto L_08ACEB74;
    return;
L_08ACEB74:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08ACEBDC;
      }
      goto L_08ACEB7C;
    }
L_08ACEB7C:
    ctx.set_gpr(31, 0x08ACEB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACEB84u) goto L_08ACEB84;
    return;
L_08ACEB84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17288u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACEBC0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(255));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 103u, 0x08B00814u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBC0u) goto L_08ACEBC0;
    return;
L_08ACEBC0:
    ctx.set_gpr(31, 0x08ACEBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBC8u) goto L_08ACEBC8;
    return;
L_08ACEBC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACEBD8u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 135u, 0x08B00A70u>(ctx, &aot_mem) && ctx.pc == 0x08ACEBD8u) goto L_08ACEBD8;
    return;
L_08ACEBD8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08ACEBDC;
L_08ACEBDC:
    ctx.set_gpr(2, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6164)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6168)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6172)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23984)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACEC24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACEC24u) goto L_08ACEC24;
    return;
L_08ACEC24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08ACEC2C;
L_08ACEC2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACEC30;
L_08ACEC30:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACEC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACED2C;
      }
      goto L_08ACEC5C;
    }
L_08ACEC5C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ACED30;
    }
    goto L_08ACEC68;
L_08ACEC68:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08ACEC6C;
L_08ACEC6C:
    ctx.set_gpr(31, 0x08ACEC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEC74u) goto L_08ACEC74;
    return;
L_08ACEC74:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACEC88u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEC88u) goto L_08ACEC88;
    return;
L_08ACEC88:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEC6C;
      }
      goto L_08ACEC98;
    }
L_08ACEC98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACECD4;
      }
      goto L_08ACECA4;
    }
L_08ACECA4:
    ctx.set_gpr(31, 0x08ACECACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACECACu) goto L_08ACECAC;
    return;
L_08ACECAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACECC0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACECC0u) goto L_08ACECC0;
    return;
L_08ACECC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACECCCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ACEED8;
L_08ACECCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACECE4;
      }
      goto L_08ACECD4;
    }
L_08ACECD4:
    ctx.set_gpr(31, 0x08ACECDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 191u, 0x08848C84u>(ctx, &aot_mem) && ctx.pc == 0x08ACECDCu) goto L_08ACECDC;
    return;
L_08ACECDC:
    ctx.set_gpr(31, 0x08ACECE4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 131u, 0x08B00A28u>(ctx, &aot_mem) && ctx.pc == 0x08ACECE4u) goto L_08ACECE4;
    return;
L_08ACECE4:
    ctx.set_gpr(3, 2233u << 16u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(8516));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8516)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23984)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACED28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACED28u) goto L_08ACED28;
    return;
L_08ACED28:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    goto L_08ACED2C;
L_08ACED2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACED30;
L_08ACED30:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACED40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ACED60u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08ACEED8;
L_08ACED60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACEDAC;
      }
      goto L_08ACED70;
    }
L_08ACED70:
    ctx.set_gpr(31, 0x08ACED78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08ACED78u) goto L_08ACED78;
    return;
L_08ACED78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACED88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(58));
    goto L_08ACEE80;
L_08ACED88:
    ctx.set_gpr(31, 0x08ACED90u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ACED90u) goto L_08ACED90;
    return;
L_08ACED90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACEDA0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 548u, 0x0886205Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEDA0u) goto L_08ACEDA0;
    return;
L_08ACEDA0:
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1378));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    goto L_08ACEDAC;
L_08ACEDAC:
    ctx.set_gpr(31, 0x08ACEDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDB4u) goto L_08ACEDB4;
    return;
L_08ACEDB4:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACEDC8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEDC8u) goto L_08ACEDC8;
    return;
L_08ACEDC8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08ACEE68;
    }
    goto L_08ACEDD0;
L_08ACEDD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08ACEDE0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[3]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEDE0u) goto L_08ACEDE0;
    return;
L_08ACEDE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACEE14u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE14u) goto L_08ACEE14;
    return;
L_08ACEE14:
    ctx.set_gpr(31, 0x08ACEE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE1Cu) goto L_08ACEE1C;
    return;
L_08ACEE1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACEE34u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEE34u) goto L_08ACEE34;
    return;
L_08ACEE34:
    ctx.set_gpr(31, 0x08ACEE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE3Cu) goto L_08ACEE3C;
    return;
L_08ACEE3C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACEE50u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEE50u) goto L_08ACEE50;
    return;
L_08ACEE50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08ACEE5Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE5Cu) goto L_08ACEE5C;
    return;
L_08ACEE5C:
    ctx.set_gpr(31, 0x08ACEE64u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x08ACEE64u) goto L_08ACEE64;
    return;
L_08ACEE64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08ACEE68;
L_08ACEE68:
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
L_08ACEE80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACEEC0;
      }
      goto L_08ACEEA4;
    }
L_08ACEEA4:
    ctx.set_gpr(31, 0x08ACEEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 157u, 0x0885C91Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEEACu) goto L_08ACEEAC;
    return;
L_08ACEEAC:
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[3]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_08ACEEC0;
L_08ACEEC0:
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
L_08ACEED8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ACEF38;
    }
    goto L_08ACEF00;
L_08ACEF00:
    ctx.set_gpr(31, 0x08ACEF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF08u) goto L_08ACEF08;
    return;
L_08ACEF08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACEF18u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 567u, 0x088476B4u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF18u) goto L_08ACEF18;
    return;
L_08ACEF18:
    ctx.set_gpr(31, 0x08ACEF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACEF20u) goto L_08ACEF20;
    return;
L_08ACEF20:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACEF30u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 562u, 0x0884764Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACEF30u) goto L_08ACEF30;
    return;
L_08ACEF30:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACEF38;
L_08ACEF38:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACEF48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6176)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 17274u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACEFE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6216)));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(6252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF074:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_08ACF0B4;
      }
      goto L_08ACF090;
    }
L_08ACF090:
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6256)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6260)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6264)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08ACF0B4;
L_08ACF0B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF0BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACF114;
      }
      goto L_08ACF0DC;
    }
L_08ACF0DC:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08ACF0E0;
L_08ACF0E0:
    ctx.set_gpr(31, 0x08ACF0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF0E8u) goto L_08ACF0E8;
    return;
L_08ACF0E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACF0FCu);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF0FCu) goto L_08ACF0FC;
    return;
L_08ACF0FC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF0E0;
      }
      goto L_08ACF10C;
    }
L_08ACF10C:
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_08ACF13C;
      }
      goto L_08ACF114;
    }
L_08ACF114:
    ctx.set_gpr(31, 0x08ACF11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF11Cu) goto L_08ACF11C;
    return;
L_08ACF11C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF130u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 69u, 0x0884C47Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF130u) goto L_08ACF130;
    return;
L_08ACF130:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    goto L_08ACF13C;
L_08ACF13C:
    ctx.set_gpr(3, 16128u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6268)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6272)));
    ctx.set_gpr(3, 2231u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(6276)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF17C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08ACF190u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 73u, 0x0884C4D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF190u) goto L_08ACF190;
    return;
L_08ACF190:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7580));
    ctx.set_gpr(5, 2182u << 16u);
    ctx.set_gpr(6, 2182u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17648));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17728));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ACF1BCu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 179u, 0x08804B94u>(ctx, &aot_mem) && ctx.pc == 0x08ACF1BCu) goto L_08ACF1BC;
    return;
L_08ACF1BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08ACF230;
      }
      goto L_08ACF1EC;
    }
L_08ACF1EC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7580));
    ctx.set_gpr(5, 2182u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17728));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ACF210u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 174u, 0x08804B28u>(ctx, &aot_mem) && ctx.pc == 0x08ACF210u) goto L_08ACF210;
    return;
L_08ACF210:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACF21Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 114u, 0x0884C754u>(ctx, &aot_mem) && ctx.pc == 0x08ACF21Cu) goto L_08ACF21C;
    return;
L_08ACF21C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
        goto L_08ACF234;
    }
    goto L_08ACF228;
L_08ACF228:
    ctx.set_gpr(31, 0x08ACF230u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08ACF248;
L_08ACF230:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08ACF234;
L_08ACF234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF248:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08ACF250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] << 2u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08ACF284u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 287u, 0x0885D0B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF284u) goto L_08ACF284;
    return;
L_08ACF284:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
        goto L_08ACF29C;
    }
    goto L_08ACF28C;
L_08ACF28C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACF298u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 952u, 0x0885BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF298u) goto L_08ACF298;
    return;
L_08ACF298:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    goto L_08ACF29C;
L_08ACF29C:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08ACF2A8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 703u, 0x0884E5ECu>(ctx, &aot_mem) && ctx.pc == 0x08ACF2A8u) goto L_08ACF2A8;
    return;
L_08ACF2A8:
    ctx.set_gpr(31, 0x08ACF2B0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 286u, 0x0885D0A4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2B0u) goto L_08ACF2B0;
    return;
L_08ACF2B0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08ACF2C0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 223u, 0x08A59124u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2C0u) goto L_08ACF2C0;
    return;
L_08ACF2C0:
    ctx.set_gpr(31, 0x08ACF2C8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 279u, 0x0885D054u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2C8u) goto L_08ACF2C8;
    return;
L_08ACF2C8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF2D4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 952u, 0x0885BA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF2D4u) goto L_08ACF2D4;
    return;
L_08ACF2D4:
    ctx.set_gpr(31, 0x08ACF2DCu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 287u, 0x0885D0B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2DCu) goto L_08ACF2DC;
    return;
L_08ACF2DC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ACF340;
    }
    goto L_08ACF2E4;
L_08ACF2E4:
    ctx.set_gpr(31, 0x08ACF2ECu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 278u, 0x0885D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF2ECu) goto L_08ACF2EC;
    return;
L_08ACF2EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF2F8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 651u, 0x08A56F18u>(ctx, &aot_mem) && ctx.pc == 0x08ACF2F8u) goto L_08ACF2F8;
    return;
L_08ACF2F8:
    ctx.set_gpr(31, 0x08ACF300u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 278u, 0x0885D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF300u) goto L_08ACF300;
    return;
L_08ACF300:
    ctx.set_gpr(31, 0x08ACF308u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 271u, 0x0885D000u>(ctx, &aot_mem) && ctx.pc == 0x08ACF308u) goto L_08ACF308;
    return;
L_08ACF308:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_08ACF33C;
      }
      goto L_08ACF314;
    }
L_08ACF314:
    ctx.set_gpr(31, 0x08ACF31Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 278u, 0x0885D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF31Cu) goto L_08ACF31C;
    return;
L_08ACF31C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF32Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 253u, 0x0885CF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF32Cu) goto L_08ACF32C;
    return;
L_08ACF32C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF314;
      }
      goto L_08ACF33C;
    }
L_08ACF33C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACF340;
L_08ACF340:
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
L_08ACF358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] << 2u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08ACF394u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 287u, 0x0885D0B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF394u) goto L_08ACF394;
    return;
L_08ACF394:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ACF420;
    }
    goto L_08ACF39C;
L_08ACF39C:
    ctx.set_gpr(31, 0x08ACF3A4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 278u, 0x0885D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF3A4u) goto L_08ACF3A4;
    return;
L_08ACF3A4:
    ctx.set_gpr(31, 0x08ACF3ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 271u, 0x0885D000u>(ctx, &aot_mem) && ctx.pc == 0x08ACF3ACu) goto L_08ACF3AC;
    return;
L_08ACF3AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08ACF3E0;
      }
      goto L_08ACF3B8;
    }
L_08ACF3B8:
    ctx.set_gpr(31, 0x08ACF3C0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 278u, 0x0885D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF3C0u) goto L_08ACF3C0;
    return;
L_08ACF3C0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF3D0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 253u, 0x0885CF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF3D0u) goto L_08ACF3D0;
    return;
L_08ACF3D0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF3B8;
      }
      goto L_08ACF3E0;
    }
L_08ACF3E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08ACF41C;
      }
      goto L_08ACF3EC;
    }
L_08ACF3EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF41C;
      }
      goto L_08ACF3F8;
    }
L_08ACF3F8:
    ctx.set_gpr(31, 0x08ACF400u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 278u, 0x0885D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF400u) goto L_08ACF400;
    return;
L_08ACF400:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF414u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 253u, 0x0885CF2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF414u) goto L_08ACF414;
    return;
L_08ACF414:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    goto L_08ACF41C;
L_08ACF41C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACF420;
L_08ACF420:
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
L_08ACF440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08ACF460u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08ACF460u) goto L_08ACF460;
    return;
L_08ACF460:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(2, 17174u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08ACF4F4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    goto L_08ACF510;
L_08ACF4F4:
    ctx.set_gpr(31, 0x08ACF4FCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(224));
    goto L_08ACF510;
L_08ACF4FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF510:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF524:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08ACF554;
    }
    goto L_08ACF53C;
L_08ACF53C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ACF550;
      }
      goto L_08ACF548;
    }
L_08ACF548:
    ctx.set_gpr(31, 0x08ACF550u);
    // nop
    goto L_08ACF564;
L_08ACF550:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08ACF554;
L_08ACF554:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF564:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 440u, 0x08929F10u>(ctx, &aot_mem); return;
L_08ACF56C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08ACF640;
      }
      goto L_08ACF588;
    }
L_08ACF588:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACF680;
      }
      goto L_08ACF594;
    }
L_08ACF594:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF5D8;
      }
      goto L_08ACF5A4;
    }
L_08ACF5A4:
    ctx.set_gpr(31, 0x08ACF5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACF5ACu) goto L_08ACF5AC;
    return;
L_08ACF5AC:
    ctx.set_gpr(31, 0x08ACF5B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACF5B4u) goto L_08ACF5B4;
    return;
L_08ACF5B4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6072));
    ctx.set_gpr(31, 0x08ACF5C0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08ACF758;
L_08ACF5C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF5D0;
      }
      goto L_08ACF5C8;
    }
L_08ACF5C8:
    ctx.set_gpr(31, 0x08ACF5D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ACF440;
L_08ACF5D0:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23980), ctx.gpr[2]);
    goto L_08ACF5D8;
L_08ACF5D8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(31, 0x08ACF5E8u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    goto L_08ACF760;
L_08ACF5E8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08ACF744;
    }
    goto L_08ACF5F0;
L_08ACF5F0:
    ctx.set_gpr(31, 0x08ACF5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF5F8u) goto L_08ACF5F8;
    return;
L_08ACF5F8:
    ctx.set_gpr(31, 0x08ACF600u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ACEC40;
L_08ACF600:
    ctx.set_gpr(31, 0x08ACF608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 185u, 0x08848C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF608u) goto L_08ACF608;
    return;
L_08ACF608:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 16448u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ACF634u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 308u, 0x08AB11D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF634u) goto L_08ACF634;
    return;
L_08ACF634:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08ACF740;
      }
      goto L_08ACF640;
    }
L_08ACF640:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(31, 0x08ACF650u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 108u, 0x08AD0650u>(ctx, &aot_mem) && ctx.pc == 0x08ACF650u) goto L_08ACF650;
    return;
L_08ACF650:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(31, 0x08ACF660u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 131u, 0x08AD07B0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF660u) goto L_08ACF660;
    return;
L_08ACF660:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08ACF66Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    goto L_08ACF750;
L_08ACF66C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF740;
      }
      goto L_08ACF674;
    }
L_08ACF674:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_08ACF740;
      }
      goto L_08ACF680;
    }
L_08ACF680:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ACF68C;
      }
      goto L_08ACF688;
    }
L_08ACF688:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08ACF68C;
L_08ACF68C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08ACF698u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 65u, 0x08AD0444u>(ctx, &aot_mem) && ctx.pc == 0x08ACF698u) goto L_08ACF698;
    return;
L_08ACF698:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF6B8;
      }
      goto L_08ACF6A8;
    }
L_08ACF6A8:
    ctx.set_gpr(31, 0x08ACF6B0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08ACF524;
L_08ACF6B0:
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980), 0u);
    goto L_08ACF6B8;
L_08ACF6B8:
    ctx.set_gpr(31, 0x08ACF6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 193u, 0x08848C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF6C0u) goto L_08ACF6C0;
    return;
L_08ACF6C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACF6CCu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08ACEAC4;
L_08ACF6CC:
    ctx.set_gpr(31, 0x08ACF6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6D4u) goto L_08ACF6D4;
    return;
L_08ACF6D4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08ACF6ECu);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 416u, 0x08846648u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6ECu) goto L_08ACF6EC;
    return;
L_08ACF6EC:
    ctx.set_gpr(31, 0x08ACF6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6F4u) goto L_08ACF6F4;
    return;
L_08ACF6F4:
    ctx.set_gpr(31, 0x08ACF6FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 915u, 0x08AAB1F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF6FCu) goto L_08ACF6FC;
    return;
L_08ACF6FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF724;
      }
      goto L_08ACF704;
    }
L_08ACF704:
    ctx.set_gpr(3, 2219u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-24204));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08ACF740;
      }
      goto L_08ACF724;
    }
L_08ACF724:
    ctx.set_gpr(3, 2224u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(26972));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_08ACF740;
L_08ACF740:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08ACF744;
L_08ACF744:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF750:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF758:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 408u, 0x08929CC0u>(ctx, &aot_mem); return;
L_08ACF760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACF790;
    }
L_08ACF790:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5592));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[2];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACF7AC:
    ctx.set_gpr(31, 0x08ACF7B4u);
    ctx.set_gpr(4, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 618u, 0x08852494u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7B4u) goto L_08ACF7B4;
    return;
L_08ACF7B4:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF7F8;
      }
      goto L_08ACF7C4;
    }
L_08ACF7C4:
    ctx.set_gpr(31, 0x08ACF7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7CCu) goto L_08ACF7CC;
    return;
L_08ACF7CC:
    ctx.set_gpr(31, 0x08ACF7D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACF7D4u) goto L_08ACF7D4;
    return;
L_08ACF7D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x08ACF7E0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 64u, 0x08AD043Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF7E0u) goto L_08ACF7E0;
    return;
L_08ACF7E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACF7F0;
      }
      goto L_08ACF7E8;
    }
L_08ACF7E8:
    ctx.set_gpr(31, 0x08ACF7F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08ACF17C;
L_08ACF7F0:
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-23976), ctx.gpr[2]);
    goto L_08ACF7F8;
L_08ACF7F8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(31, 0x08ACF804u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 126u, 0x0884C800u>(ctx, &aot_mem) && ctx.pc == 0x08ACF804u) goto L_08ACF804;
    return;
L_08ACF804:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACF81C;
    }
L_08ACF81C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1707));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1708));
    ctx.set_gpr(31, 0x08ACF838u);
    ctx.set_gpr(8, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 129u, 0x0884C830u>(ctx, &aot_mem) && ctx.pc == 0x08ACF838u) goto L_08ACF838;
    return;
L_08ACF838:
    ctx.set_gpr(31, 0x08ACF840u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF840u) goto L_08ACF840;
    return;
L_08ACF840:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08ACF850u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08ACF850u) goto L_08ACF850;
    return;
L_08ACF850:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 57u, 0x08AD0390u>(ctx, &aot_mem); return;
    }
    goto L_08ACF858;
L_08ACF858:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACF874u);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACF874u) goto L_08ACF874;
    return;
L_08ACF874:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACF8A0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACF8A0u) goto L_08ACF8A0;
    return;
L_08ACF8A0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACF8B8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6336));
    goto L_08ACF250;
L_08ACF8B8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACF8D0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6348));
    goto L_08ACF250;
L_08ACF8D0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACF8E8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6360));
    goto L_08ACF250;
L_08ACF8E8:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ACF900u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6372));
    goto L_08ACF250;
L_08ACF900:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(6, 2231u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ACF918u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6384));
    goto L_08ACF250;
L_08ACF918:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23976)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACF92Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08ACF358;
L_08ACF92C:
    ctx.set_gpr(31, 0x08ACF934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08ACF934u) goto L_08ACF934;
    return;
L_08ACF934:
    ctx.set_gpr(31, 0x08ACF93Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 311u, 0x088494D4u>(ctx, &aot_mem) && ctx.pc == 0x08ACF93Cu) goto L_08ACF93C;
    return;
L_08ACF93C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACF954;
    }
L_08ACF954:
    ctx.set_gpr(31, 0x08ACF95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08ACF95Cu) goto L_08ACF95C;
    return;
L_08ACF95C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACF96Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1709));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 312u, 0x088494DCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF96Cu) goto L_08ACF96C;
    return;
L_08ACF96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACF974;
    }
L_08ACF974:
    ctx.set_gpr(5, 2231u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08ACF984u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6396));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 294u, 0x08855620u>(ctx, &aot_mem) && ctx.pc == 0x08ACF984u) goto L_08ACF984;
    return;
L_08ACF984:
    ctx.set_gpr(31, 0x08ACF98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08ACF98Cu) goto L_08ACF98C;
    return;
L_08ACF98C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08ACF9B4u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 356u, 0x088496FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACF9B4u) goto L_08ACF9B4;
    return;
L_08ACF9B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08ACF9C0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9C0u) goto L_08ACF9C0;
    return;
L_08ACF9C0:
    ctx.set_gpr(31, 0x08ACF9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACF9C8u) goto L_08ACF9C8;
    return;
L_08ACF9C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08ACF9E0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9E0u) goto L_08ACF9E0;
    return;
L_08ACF9E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACF9ECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 521u, 0x08851B24u>(ctx, &aot_mem) && ctx.pc == 0x08ACF9ECu) goto L_08ACF9EC;
    return;
L_08ACF9EC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFA04;
    }
L_08ACFA04:
    ctx.set_gpr(31, 0x08ACFA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA0Cu) goto L_08ACFA0C;
    return;
L_08ACFA0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFA1Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1710));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1050u, 0x08AAFFF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA1Cu) goto L_08ACFA1C;
    return;
L_08ACFA1C:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFA34;
    }
L_08ACFA34:
    ctx.set_gpr(31, 0x08ACFA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA3Cu) goto L_08ACFA3C;
    return;
L_08ACFA3C:
    ctx.set_gpr(31, 0x08ACFA44u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1u, 0x08AB0000u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA44u) goto L_08ACFA44;
    return;
L_08ACFA44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFA4C;
    }
L_08ACFA4C:
    ctx.set_gpr(31, 0x08ACFA54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACFA54u) goto L_08ACFA54;
    return;
L_08ACFA54:
    ctx.set_gpr(31, 0x08ACFA5Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 952u, 0x08843EACu>(ctx, &aot_mem) && ctx.pc == 0x08ACFA5Cu) goto L_08ACFA5C;
    return;
L_08ACFA5C:
    ctx.set_gpr(31, 0x08ACFA64u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA64u) goto L_08ACFA64;
    return;
L_08ACFA64:
    ctx.set_gpr(31, 0x08ACFA6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA6Cu) goto L_08ACFA6C;
    return;
L_08ACFA6C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08ACFA80u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ACFA80u) goto L_08ACFA80;
    return;
L_08ACFA80:
    ctx.set_gpr(31, 0x08ACFA88u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA88u) goto L_08ACFA88;
    return;
L_08ACFA88:
    ctx.set_gpr(31, 0x08ACFA90u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08ACFA90u) goto L_08ACFA90;
    return;
L_08ACFA90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08ACFAA0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAA0u) goto L_08ACFAA0;
    return;
L_08ACFAA0:
    ctx.set_gpr(31, 0x08ACFAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAA8u) goto L_08ACFAA8;
    return;
L_08ACFAA8:
    ctx.set_gpr(31, 0x08ACFAB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFAB0u) goto L_08ACFAB0;
    return;
L_08ACFAB0:
    ctx.set_gpr(31, 0x08ACFAB8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAB8u) goto L_08ACFAB8;
    return;
L_08ACFAB8:
    ctx.set_gpr(31, 0x08ACFAC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 976u, 0x08AAFC48u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAC0u) goto L_08ACFAC0;
    return;
L_08ACFAC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08ACFAD0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAD0u) goto L_08ACFAD0;
    return;
L_08ACFAD0:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFAE8;
    }
L_08ACFAE8:
    ctx.set_gpr(31, 0x08ACFAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 543u, 0x08AD2760u>(ctx, &aot_mem) && ctx.pc == 0x08ACFAF0u) goto L_08ACFAF0;
    return;
L_08ACFAF0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08ACFAF4;
L_08ACFAF4:
    ctx.set_gpr(31, 0x08ACFAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08ACFAFCu) goto L_08ACFAFC;
    return;
L_08ACFAFC:
    ctx.set_gpr(31, 0x08ACFB04u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB04u) goto L_08ACFB04;
    return;
L_08ACFB04:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x08ACFB10u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 23u, 0x088641F0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB10u) goto L_08ACFB10;
    return;
L_08ACFB10:
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
        goto L_08ACFB24;
    }
    goto L_08ACFB18;
L_08ACFB18:
    ctx.set_gpr(31, 0x08ACFB20u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 735u, 0x0884E828u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB20u) goto L_08ACFB20;
    return;
L_08ACFB20:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08ACFB24;
L_08ACFB24:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ACFAF4;
      }
      goto L_08ACFB34;
    }
L_08ACFB34:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFB4C;
    }
L_08ACFB4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1711));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFB68u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB68u) goto L_08ACFB68;
    return;
L_08ACFB68:
    ctx.set_gpr(31, 0x08ACFB70u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFB70u) goto L_08ACFB70;
    return;
L_08ACFB70:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08ACFB80u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08ACFB80u) goto L_08ACFB80;
    return;
L_08ACFB80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFB88;
    }
L_08ACFB88:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFBA0;
    }
L_08ACFBA0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1712));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFBBCu);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBBCu) goto L_08ACFBBC;
    return;
L_08ACFBBC:
    ctx.set_gpr(31, 0x08ACFBC4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFBC4u) goto L_08ACFBC4;
    return;
L_08ACFBC4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08ACFBD4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08ACFBD4u) goto L_08ACFBD4;
    return;
L_08ACFBD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFBDC;
    }
L_08ACFBDC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFBF4;
    }
L_08ACFBF4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1713));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFC10u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC10u) goto L_08ACFC10;
    return;
L_08ACFC10:
    ctx.set_gpr(31, 0x08ACFC18u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFC18u) goto L_08ACFC18;
    return;
L_08ACFC18:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08ACFC28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC28u) goto L_08ACFC28;
    return;
L_08ACFC28:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFC30;
    }
L_08ACFC30:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFC48;
    }
L_08ACFC48:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1714));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFC64u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 813u, 0x0884EC54u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC64u) goto L_08ACFC64;
    return;
L_08ACFC64:
    ctx.set_gpr(31, 0x08ACFC6Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 515u, 0x08849FBCu>(ctx, &aot_mem) && ctx.pc == 0x08ACFC6Cu) goto L_08ACFC6C;
    return;
L_08ACFC6C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08ACFC7Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 563u, 0x0884A284u>(ctx, &aot_mem) && ctx.pc == 0x08ACFC7Cu) goto L_08ACFC7C;
    return;
L_08ACFC7C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFC84;
    }
L_08ACFC84:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFC9C;
    }
L_08ACFC9C:
    ctx.set_gpr(31, 0x08ACFCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFCA4u) goto L_08ACFCA4;
    return;
L_08ACFCA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFCB8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1716));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFCB8u) goto L_08ACFCB8;
    return;
L_08ACFCB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFCC0;
    }
L_08ACFCC0:
    ctx.set_gpr(31, 0x08ACFCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFCC8u) goto L_08ACFCC8;
    return;
L_08ACFCC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFCFCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFCFCu) goto L_08ACFCFC;
    return;
L_08ACFCFC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFD14;
    }
L_08ACFD14:
    ctx.set_gpr(31, 0x08ACFD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD1Cu) goto L_08ACFD1C;
    return;
L_08ACFD1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08ACFD30u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1718));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFD30u) goto L_08ACFD30;
    return;
L_08ACFD30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFD38;
    }
L_08ACFD38:
    ctx.set_gpr(31, 0x08ACFD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD40u) goto L_08ACFD40;
    return;
L_08ACFD40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFD74u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD74u) goto L_08ACFD74;
    return;
L_08ACFD74:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFD8C;
    }
L_08ACFD8C:
    ctx.set_gpr(31, 0x08ACFD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFD94u) goto L_08ACFD94;
    return;
L_08ACFD94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08ACFDA8u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFDA8u) goto L_08ACFDA8;
    return;
L_08ACFDA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFDB0;
    }
L_08ACFDB0:
    ctx.set_gpr(31, 0x08ACFDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDB8u) goto L_08ACFDB8;
    return;
L_08ACFDB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFDECu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFDECu) goto L_08ACFDEC;
    return;
L_08ACFDEC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFE04;
    }
L_08ACFE04:
    ctx.set_gpr(31, 0x08ACFE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE0Cu) goto L_08ACFE0C;
    return;
L_08ACFE0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08ACFE20u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1722));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFE20u) goto L_08ACFE20;
    return;
L_08ACFE20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFE28;
    }
L_08ACFE28:
    ctx.set_gpr(31, 0x08ACFE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE30u) goto L_08ACFE30;
    return;
L_08ACFE30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFE64u);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE64u) goto L_08ACFE64;
    return;
L_08ACFE64:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFE7C;
    }
L_08ACFE7C:
    ctx.set_gpr(31, 0x08ACFE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFE84u) goto L_08ACFE84;
    return;
L_08ACFE84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08ACFE98u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1724));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFE98u) goto L_08ACFE98;
    return;
L_08ACFE98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFEA0;
    }
L_08ACFEA0:
    ctx.set_gpr(31, 0x08ACFEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEA8u) goto L_08ACFEA8;
    return;
L_08ACFEA8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFEDCu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEDCu) goto L_08ACFEDC;
    return;
L_08ACFEDC:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFEF4;
    }
L_08ACFEF4:
    ctx.set_gpr(31, 0x08ACFEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFEFCu) goto L_08ACFEFC;
    return;
L_08ACFEFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08ACFF10u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1726));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFF10u) goto L_08ACFF10;
    return;
L_08ACFF10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFF18;
    }
L_08ACFF18:
    ctx.set_gpr(31, 0x08ACFF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF20u) goto L_08ACFF20;
    return;
L_08ACFF20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08ACFF4Cu);
    ctx.set_gpr(9, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF4Cu) goto L_08ACFF4C;
    return;
L_08ACFF4C:
    ctx.set_gpr(31, 0x08ACFF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF54u) goto L_08ACFF54;
    return;
L_08ACFF54:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16140u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(31, 0x08ACFF70u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 987u, 0x0885FC8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFF70u) goto L_08ACFF70;
    return;
L_08ACFF70:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23980)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFF88;
    }
L_08ACFF88:
    ctx.set_gpr(31, 0x08ACFF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFF90u) goto L_08ACFF90;
    return;
L_08ACFF90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x08ACFFA4u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1728));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 540u, 0x0884746Cu>(ctx, &aot_mem) && ctx.pc == 0x08ACFFA4u) goto L_08ACFFA4;
    return;
L_08ACFFA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 56u, 0x08AD038Cu>(ctx, &aot_mem); return;
      }
      goto L_08ACFFAC;
    }
L_08ACFFAC:
    ctx.set_gpr(31, 0x08ACFFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFFB4u) goto L_08ACFFB4;
    return;
L_08ACFFB4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(31, 0x08ACFFE8u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 558u, 0x08847598u>(ctx, &aot_mem) && ctx.pc == 0x08ACFFE8u) goto L_08ACFFE8;
    return;
L_08ACFFE8:
    ctx.set_gpr(31, 0x08ACFFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08ACFFF0u) goto L_08ACFFF0;
    return;
L_08ACFFF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16143u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.pc = 0x08AD0000u; return;
}

void recomp_unit_0178(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0178_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_178(Runtime &runtime) {
    runtime.register_generated_unit(178u, 0x08ACC000u, 16384u, &recomp_unit_0178, &recomp_unit_0178_entry);
    runtime.register_function(0x08ACC000u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC008u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC014u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC01Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC034u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC03Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC048u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC054u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC05Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC06Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC078u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC088u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC090u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC108u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC154u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC168u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC170u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC178u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC188u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC190u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC198u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC1F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC200u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC20Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC214u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC22Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC234u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC23Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC248u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC260u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC268u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC270u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC278u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC280u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC28Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC294u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC2FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC304u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC310u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC318u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC320u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC338u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC34Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC364u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC36Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC374u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC37Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC384u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC38Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC3F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC40Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC42Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC434u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC46Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC474u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC484u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC490u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC498u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC4FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC504u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC510u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC518u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC528u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC534u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC558u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC560u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC574u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC5ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC60Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC618u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC61Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC624u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC62Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC634u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC63Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC650u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC670u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC688u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC6F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC710u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC718u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC724u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC730u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC738u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC764u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC770u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC784u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC798u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC7F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC810u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC820u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC830u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC848u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC858u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC868u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC874u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC87Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC884u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC8FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC930u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC950u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC958u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC964u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACC9F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCAF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCB84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCBE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCC88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCD94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCDFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCE98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCEF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCF94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACCFF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD00Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD014u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD024u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD028u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD030u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD040u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD048u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD058u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD074u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD084u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD09Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD0FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD10Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD110u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD118u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD128u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD140u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD16Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD184u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD1F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD204u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD220u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD238u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD244u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD24Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD250u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD25Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD26Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD278u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD288u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD28Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD294u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD29Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD2FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD304u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD30Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD314u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD31Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD328u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD330u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD33Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD350u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD370u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD378u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD380u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD388u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD390u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD398u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD39Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD3F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD400u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD408u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD414u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD41Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD428u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD42Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD43Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD44Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD454u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD45Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD464u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD46Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD478u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD480u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD484u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD48Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD494u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD49Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD510u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD51Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD530u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD538u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD540u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD554u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD55Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD560u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD570u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD580u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD588u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD5E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD600u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD608u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD614u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD620u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD638u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD640u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD64Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD664u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD66Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD678u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD680u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD688u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD6ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD720u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD738u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD74Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD768u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD770u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD780u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD79Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD7F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD804u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD80Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD814u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD820u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD828u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD85Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD864u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD870u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD87Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD888u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD890u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD900u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD908u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD910u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD920u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD92Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD934u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD948u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD95Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD988u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD99Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACD9F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDA9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDABCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDAF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDB98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDBF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDC94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDD9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDDD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDE9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDED0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDED8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDEF8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDF9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACDFFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE010u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE018u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE028u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE030u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE038u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE040u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE04Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE064u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE06Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE078u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE080u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE098u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE0FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE110u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE11Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE138u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE144u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE14Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE154u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE15Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE160u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE180u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE19Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE1F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE208u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE214u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE228u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE230u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE260u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE268u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE278u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE284u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE28Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE29Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE2FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE30Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE32Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE334u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE344u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE350u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE358u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE360u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE368u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE370u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE378u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE384u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE38Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE398u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE3F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE408u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE410u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE41Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE428u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE430u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE438u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE448u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE450u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE470u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE47Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE484u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE48Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE498u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE4FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE508u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE510u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE518u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE520u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE524u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE530u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE544u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE558u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE570u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE580u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE58Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE59Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE5F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE600u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE630u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE654u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE668u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE67Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE690u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE6F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE708u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE720u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE728u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE72Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE73Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE75Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE768u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE774u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE77Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE78Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE7FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE810u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE820u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE874u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE88Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE898u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE8F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE90Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE914u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE91Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE924u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE944u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE970u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE978u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE994u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE99Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACE9F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEA98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEAFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB58u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEB84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBD8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEBDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEC98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECCCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACECE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED2Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED60u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED78u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACED90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEDE0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE50u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEE80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEEC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEED8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF00u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF08u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEF48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACEFE4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF074u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF090u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF0FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF10Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF114u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF11Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF130u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF13Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF17Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF190u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1BCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF1ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF210u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF21Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF228u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF230u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF234u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF248u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF250u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF284u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF28Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF298u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF29Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2DCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2E4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF2F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF300u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF308u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF314u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF31Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF32Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF33Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF340u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF358u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF394u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF39Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF3F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF400u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF414u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF41Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF420u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF440u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF460u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF4FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF510u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF524u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF53Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF548u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF550u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF554u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF564u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF56Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF588u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF594u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5A4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5D8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF5F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF600u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF608u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF634u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF640u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF650u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF660u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF66Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF674u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF680u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF688u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF68Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF698u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6A8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6B0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6F4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF6FCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF704u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF724u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF740u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF744u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF750u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF758u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF760u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF790u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7ACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7C4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7CCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7D4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7F0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF7F8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF804u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF81Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF838u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF840u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF850u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF858u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF874u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8A0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8B8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8D0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF8E8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF900u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF918u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF92Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF934u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF93Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF954u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF95Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF96Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF974u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF984u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF98Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9B4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9C0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9C8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9E0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACF9ECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA3Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA44u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA5Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFA90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAD0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAF0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFAFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB24u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB34u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB68u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB80u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFB88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBBCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBC4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBD4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFBF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC48u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC6Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFC9Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCC0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCC8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFCFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD14u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD1Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD38u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD40u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD74u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD8Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFD94u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDB0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDB8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFDECu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE04u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE0Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE28u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE30u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE64u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE7Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE84u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFE98u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEA0u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEA8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEDCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEF4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFEFCu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF10u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF18u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF20u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF4Cu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF54u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF70u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF88u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFF90u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFA4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFACu, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFB4u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFE8u, &recomp_unit_0178, "recomp_unit_0178");
    runtime.register_function(0x08ACFFF0u, &recomp_unit_0178, "recomp_unit_0178");
}
} // namespace psprecomp
